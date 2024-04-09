# CPP_TickTackToe

Hardcore 1v1 game vs a AI Bot which actually is kinda cranked. To restart reopen window as I never came around to patching up some of the other details of this and kinda did it randomly during a carride. Fun stuff, but a little janky.

<img src="https://github.com/Kingerthanu/CPP_TickTackToe/assets/76754592/b0558bf9-b9ea-422d-974e-028d4a4bede7" alt="Cornstarch <3" width="105" height="109">

 The bot (Bob) will go first every time and tries finding the most optimal placement in order to beat you so watch out.

 
 ----------------------------------------------

<img src="https://github.com/Kingerthanu/CPP_TickTackToe/assets/76754592/88576b38-f947-4c89-acdf-8f926a6322bb" alt="Cornstarch <3" width="55" height="49"> <img src="https://github.com/Kingerthanu/CPP_TickTackToe/assets/76754592/88576b38-f947-4c89-acdf-8f926a6322bb" alt="Cornstarch <3" width="55" height="49"> <img src="https://github.com/Kingerthanu/CPP_TickTackToe/assets/76754592/88576b38-f947-4c89-acdf-8f926a6322bb" alt="Cornstarch <3" width="55" height="49"> <img src="https://github.com/Kingerthanu/CPP_TickTackToe/assets/76754592/88576b38-f947-4c89-acdf-8f926a6322bb" alt="Cornstarch <3" width="55" height="49">


**The Breakdown:**

  In This C++ QT Window Application We Seperate Our Window Into 9 Squares For A Simple-Grid For A Game Of Tic-Tac Toe Vs A Bot.

  This Program Works Initially By Creating A QT Window Of Specified Size In Our Defined Main Window Class Type, The Window Itself Will Hold The Logic For The Game Of Tic-Tac-Toe. We Will Set Up Our Main Window's Ports In Order To Allow Emitting To Our Player And Bot Classes For Their Turns.

  Each Block Of Our Game Of Tic-Tac-Toe Will Be Represented In A Square Class As Well In Which Will Hold The Current TypeID Of The Square To Signify Who Has Written On It Or IF Its Open. This Again Will Be A Simple Wrapper Struct In Which Will Be Used In Our MainWindows Turn Calling Executions.

  After Our Driver Creates Our Window, We Will Feed Into A Enemy Class The Window In Which It Will Associate Itself With. This Enemy Class Will Be A Simple Representation Of A Player Execution So The Bot Type Will Inherit From A Q_Object To Allow Emit-Handing.

  After We Link Our Bot, We Will Start The Game By First Asking For The Users Input.

  The Game Will Follow The General Rules Of A Game Of Tic-Tac-Toe And Will Announce A Winner But Cannot Reset The Game Window Yet Without Resetting.

  This Program Taught Me A Lot Of Cool Things About Class Relationships As Well As Signalling. I've Been Trying To Apply Signalling In Many New Projects And Never Realized How Cool The Concept Can Be When Properly Applied.

  
  
<img src="https://github.com/Kingerthanu/CPP_TickTackToe/assets/76754592/93720612-6275-461a-89b7-7f924917cb94" alt="Cornstarch <3" width="55" height="49"> <img src="https://github.com/Kingerthanu/CPP_TickTackToe/assets/76754592/93720612-6275-461a-89b7-7f924917cb94" alt="Cornstarch <3" width="55" height="49"> <img src="https://github.com/Kingerthanu/CPP_TickTackToe/assets/76754592/93720612-6275-461a-89b7-7f924917cb94" alt="Cornstarch <3" width="55" height="49"> <img src="https://github.com/Kingerthanu/CPP_TickTackToe/assets/76754592/93720612-6275-461a-89b7-7f924917cb94" alt="Cornstarch <3" width="55" height="49">



----------------------------------------------

<img src="https://github.com/Kingerthanu/CPP_TickTackToe/assets/76754592/6b366aca-ff79-41c9-82c4-7103f26461c2" alt="Cornstarch <3" width="55" height="49"> <img src="https://github.com/Kingerthanu/CPP_TickTackToe/assets/76754592/6b366aca-ff79-41c9-82c4-7103f26461c2" alt="Cornstarch <3" width="55" height="49"> <img src="https://github.com/Kingerthanu/CPP_TickTackToe/assets/76754592/6b366aca-ff79-41c9-82c4-7103f26461c2" alt="Cornstarch <3" width="55" height="49"> <img src="https://github.com/Kingerthanu/CPP_TickTackToe/assets/76754592/6b366aca-ff79-41c9-82c4-7103f26461c2" alt="Cornstarch <3" width="55" height="49">


**Features:**

![2024-01-1002-03-45-ezgif com-video-to-gif-converter](https://github.com/Kingerthanu/CPP_TickTackToe/assets/76754592/56038512-5d2c-4439-8aed-18fd1516af54)



<img src="https://github.com/Kingerthanu/CPP_TickTackToe/assets/76754592/aa929f9d-a376-4615-b22f-892c31d2d4f9" alt="Cornstarch <3" width="75" height="69"> <img src="https://github.com/Kingerthanu/CPP_TickTackToe/assets/76754592/aa929f9d-a376-4615-b22f-892c31d2d4f9" alt="Cornstarch <3" width="75" height="69"> <img src="https://github.com/Kingerthanu/CPP_TickTackToe/assets/76754592/aa929f9d-a376-4615-b22f-892c31d2d4f9" alt="Cornstarch <3" width="75" height="69"> <img src="https://github.com/Kingerthanu/CPP_TickTackToe/assets/76754592/aa929f9d-a376-4615-b22f-892c31d2d4f9" alt="Cornstarch <3" width="75" height="69">
