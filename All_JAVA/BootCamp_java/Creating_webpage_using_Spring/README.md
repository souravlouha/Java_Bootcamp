# Creating Webpage Using Spring
#
#
### Through Spring and through the Webpage we take input from user through 'index.html' file, and the input we have taken through'user-data.html' file are shown, that is we are redirecting from one html file to another html file, 'index.html'->'user data.html'.
#
### We have firstly created a file namely 'Project01' we are using spring so the word [boot] has came,
### Under the Project01 file  'src/main/java' under this the system created a default package that is, com.example.demo (default package), Under the package Project01application.java has created by the system(default) . This two files are created by the system not manually. 
#
### Now we are creating 'Project01Controller.java','user.java'.
#
### Now after 'src/main/resources' under this there are 2 files namely 'static' and 'templates', all the html files are created under the templates files that is for improving html we add CSS and JavaScript into the static file not templates file, Here except these 2 files namely Application.Properties, this is also a default file, further discussion will take place in future. 
#
### Here Maven is a library, Your project might need specific functionalities or classes that you don't want to write from scratch. Instead of reinventing the wheel, you can use libraries that already provide those functionalities by declaring them as dependencies. If we get any error then it can be corrected under the Help.md file. 'Pom.xml' is a project object model it is linked through Maven and it help in project building.
![Screenshot (107)](https://github.com/user-attachments/assets/4e1b96e8-b03e-465a-8d1f-96f7ab06ec0d)
#
### After writing all the codes by right clicking on the main project that is 'Project01' a pop up window will appear, in this pop up  click on the 'run as' option then another pop up will appear, here we have 2 option first one is 'Java Application' and another one is 'Spring boot App', when we click first one the entire pop up window automatically closed and this time we again go to the main project then again right click on it and also the same pop up window appears and then we will click on the 'Spring Boot App'; If 'completed installation' word is pop up on the console screen then it is successfully linked to the basic webpage.

![Screenshot (105)](https://github.com/user-attachments/assets/a6c729e5-82e1-48ae-88a4-4abc0d8fca59)
#
### We write 'http://localhost:port/'
### If on the chrome webpage the basic webpage not appear then we have to change the port number through 'Application.Properties'. We have to write 'server.port=(any port except,used port)'. Here we have change many ports example 'server.port=8786',server.port=8784',etc.
![Screenshot (104)](https://github.com/user-attachments/assets/54a16fd8-1a6d-41b8-981a-635d7965ec45)
#
### We have first come to the chrome browser then search http://localhost:8788/ then enter,(you use your own port number).

![Screenshot (106)](https://github.com/user-attachments/assets/93fe3144-d8dd-411e-b7fa-0e5d2d2e0275)
#
### Here the index.html file appear then,

![Screenshot (108)](https://github.com/user-attachments/assets/b5b6bf87-c58f-4854-b4b6-2b9a3cbe1abb)
#
### Here the user has given the input

![Screenshot (109)](https://github.com/user-attachments/assets/0e1e2d09-44a5-404c-b162-d5b3fd99b94f)
#
### As the user input given we have redirected to the next html file which will show the user input data.

![Screenshot (110)](https://github.com/user-attachments/assets/f58014fa-36f4-4b68-8d39-1dc62799f8ba)
#
### In this way we saw how to create a webpage by using Spring boot. And take the data from the users and redirecting to the html files.













