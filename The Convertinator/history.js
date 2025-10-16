// Load saved history or initialize an empty array
let history = JSON.parse(localStorage.getItem("conversionHistory")) || [];

function saveConversionHistory(entry) {
    history.push(entry);
    localStorage.setItem("conversionHistory", JSON.stringify(history));
}

function showHistory() {
    const historyList = document.getElementById("history-list");
    historyList.innerHTML = ""; // Clear previous entries in the popup

    history.forEach(entry => {
        const li = document.createElement("li");
        li.textContent = entry;  // Set text content
        historyList.appendChild(li);  // Append to the list
    });

    document.getElementById("history-popup").classList.add("active");
}

// Function to download history as a text file
function downloadHistory() {
    const blob = new Blob([history.join("\n")], { type: "text/plain" });
    const link = document.createElement("a");
    link.href = URL.createObjectURL(blob);
    link.download = "conversion_history.txt";
    link.click();
}

// Close the history popup
function closePopup() {
    document.getElementById("history-popup").classList.remove("active");
}
// Clear history
function clearHistory() {
    localStorage.removeItem("conversionHistory");
    history = []; // Reset the local history array
    alert("History cleared!");
}
