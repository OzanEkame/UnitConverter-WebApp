##Done by ChatGPT
import os
import http.server
import socketserver

PORT = 8000

class CustomHTTPRequestHandler(http.server.SimpleHTTPRequestHandler):
    def end_headers(self):
        if self.path.endswith('.wasm'):
            self.send_header('Content-Type', 'application/wasm')
        super().end_headers()

    def guess_type(self, path):
        # Force MIME type for .wasm files
        if path.endswith(".wasm"):
            return "application/wasm"
        return super().guess_type(path)

Handler = CustomHTTPRequestHandler
httpd = socketserver.TCPServer(("", PORT), Handler)

print(f"Serving at port {PORT}")
httpd.serve_forever()
