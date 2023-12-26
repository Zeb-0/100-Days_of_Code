from flask import Flask

app =  Flask(__name__)

@app.route('/')
def hello_world():
    return "<p>Hello World!</p>"

@app.route('/')
def index():
    return 'index Page'

@app.route("/hello")
def hello():
    return "Hello, World"
