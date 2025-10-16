# EC327 Final Project - Group 5 - The Convertinator
---
## Summary
### Project type
[Unit Converter] [Web App]

### TL;DR
The Convertinator is a website responsible for the conversion of units from various fields. 

### Description
This project focuses on developing a unit conversion application with a simple, colorful, and user-friendly interface for efficient unit conversions across multiple fields, including custom unit conversions. The app is designed to be accessible offline, making it convenient to use from anywhere at any time! Some key features include the ability to log a history of previous conversions in an accessible file that can be downloaded at any time. Additionally, utilize native code for the back end to ensure precision and accuracy for large and small numeric conversions. Built with Javascript, HTML, C, and C++, this application provides reliable performance and results. 

## Authors
Group Members: <br/>
[Punnisa Amornsirikul] [PunnisaAmornsirikul] [punnisa@bu.edu] <br/>
[Angel Pacheco] [AngelPacheco] [pachecod@bu.edu] <br/>
[Ian Barnes] [IanBarnes] [iankb@bu.edu]<br/>
[Carlos Rivas] [CarlosRivas] [carivas@bu.edu] <br/>
[Adina Turner] [AdinaTurner] [aturner6@bu.edu]<br/>
[Diana Diaz Galliano] [DianaDiazGalliano] [dianadz@bu.edu]<br/>
[Ozan Ekame Pekgoz] [OzanEkamePekgoz] [oekame@bu.edu]

### Roles
|  Name  | Project Lead | Front End 1 | Front End 2 | Back End 1 | Back End 2 | Documenter | Tester | Total |
| ------ | ------------ | ----------- | ----------- | ---------- | ---------- | ---------- | ------ | ----- |
| Punnisa|     50%      |     25%     |      0%     |     25%    |      0%    |      0%    |    0%  |  100% |
| Carlos |      0%      |     25%     |     25%     |      0%    |      0%    |      0%    |   50%  |  100% |
|  Ozan  |      0%      |      0%     |      0%     |     25%    |     50%    |      0%    |   25%  |  100% |
| Adina  |      0%      |     25%     |     50%     |      0%    |      0%    |     25%    |    0%  |  100% |
| Diana  |     25%      |     25%     |     25%     |      0%    |      0%    |     25%    |    0%  |  100% |
| Angel  |     25%      |      0%     |      0%     |     25%    |     25%    |     25%    |    0%  |  100% |
|  Ian   |      0%      |      0%     |      0%     |     25%    |     25%    |     25%    |   25%  |  100% |
|  Total |     100%     |    100%     |     100%    |    100%    |    100%    |    100%    |  100%  |   -   |
---
Punnisa contributed in managing the group by distributing the work to both the front and back end. She also participated in making the layout for the conversions page, unit conversion fields in backend and also the code for the custom unit field. Adina played a big role in figuring out working with Webassembly and merging between front and back end and helped with the homepage User Interface design. Carlos created the basic layout of the website and also created some buttons as functions: history, home, and clear history along with Diana. Carlos also played a big role in the testing phase of the website. Diana played a role as the project lead where she talked to the front end people to help get work done, she also worked with Carlos on the functionality of the buttons of the website and designed the layout of the custom unit field. She was also part of the documenting team in adding comments to the functions of the code. Angel played a role as project lead to help back end when there were problems and helped create unit fields, compiled them into Webassembly, and also documented how the functions were made. Ozan played a big role in the back end where he created unit fields and also helped compile them into Webassembly. He also helped test out functions and ensured that they worked properly. Ian also played a role in creating the unit fields along with adding comments to the functions and also testing out the functionality of the website.

## Accompliments

### Minimum Requirements
#### Completed
1. _Converting units between the following categories:_<br/>
- _angles_
- _area_
- _data transfer rate_
- _digital storage_
- _duration_
- _energy_
- _force_
- _length_
- _mass_
- _power_
- _pressure_
- _speed_
- _temperature_
- _volume_

2. _It has a simple-to-use, graphical user interface_

3. _It does not require any Internet or network connectivity for full functioning_

### Possible features
#### Completed
* Logged all conversions to an easily viewable file *10%*
* Does all calculations natively *20%*
* Allows the user to input custom units and conversion rules *20%*
#### Partially completed
_All features were completed to their entirety_

---
## Execution

### Project source
All code needed to compile and run is present in the current branch

### Installation
Instructions To Run From Lab Machine Terminal

- Step 1: Open terminal on lab machine
- Step 2: git clone https://agile.bu.edu/gitlab/ec327/projects/group5project.git into your directory of choice
- Step 3: cd group5project
- Step 4: cd The-Convertinator-main
- Step 5: cd The\ Convertinator or '\The Convertinator\'
- Step 6: xdg-open TheConvertinator.html (For Linux)
- Step 7: start TheConvertinator.html (For Windows)
- Step 8: Enjoy :)

Instructions To Run From Lab Machine File Manager

- Step 1: Open terminal on lab machine
- Step 2: git clone https://agile.bu.edu/gitlab/ec327/projects/group5project.git into your directory
of choice
- Step 3: Select "group5project" folder 
- Step 4: Within "group5project" folder go to "The-Convertinator-main" folder
- Step 5: Within "The-Convertinator-main" folder go into "The Convertinator" folder
- Step 6: Within "The Convertinator" folder find "TheConvertinator.html"
- Step 7: Double click on "TheConvertinator.html"
- Step 8: Enjoy :)



### Usage
Our app provides different categories within which units can be converted. Our home page includes a button towards the right: <br/> <br/>
-**History Button**: which provides the functionality is clearing the history overall and showing the history record file <br/>
-**Converting Sections Buttons**: Once clicked an input box and output box with options for label will open. Establish the input and output units below each white box, then input the quantity meant to be converted. Once these three user inputs are defined, click the convert button to see your output converted value. <br/>
-**Custom**: The instruction on how to use the Custom section are provided on the right side of the page. Nevertheless, to convert a custom unit, the input and output units most be labeled in their pertaining boxes. Once these labels are established, the formula, using the variable x to represent the upcoming input must be defined in the box for the Conversion Formula. This input box only accepts + - * / operators and no spaces. Once all of these factors have been defined, the user may input the quantity they want converted and click the convert button. Then in the Output Parameter, the output number will be displayed. 

---
## Miscellaneous

### Extra features
- An extra feature we had in this project is our history page. Our history button opens a page that leads to two button: one can display the current history of conversions and a button that can download them into a .txt file. 

### Challenges
A few challenges that we came across when working on this project include formatting the UI for easy access and navigation through the website. An idea that we attempted to do and failed was to have the website run off a local server, but this failed due to CORS policy raising security issues halting all programs forcing us to embed all code into the file.

### Supporting material

Slides Link: https://www.canva.com/design/DAGY37k3yR8/X-ufr6tyVQeHmAVtlyr8bA/edit?utm_content=DAGY37k3yR8&utm_campaign=designshare&utm_medium=link2&utm_source=sharebutton

Our demo video is available within the files of this branch under the name of EC327_Final_Project_Demo.mov

### Release
We are all comfortable with the project being visible to the broader public. All group members agreed.
