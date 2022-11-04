# Task 2 - Formula 1 Light Sequence #
The requirements for this task was to design a FSM that cycles through the sequence according to the following FSM:

<img width="500" alt="image" src="https://user-images.githubusercontent.com/69715492/199856748-a80742f6-1c61-4c1e-b505-16df65846084.png">

* The F1 light sequence is where a series of red lights turn ON one-by-one until all lights are ON. Then all of them turn OFF simultaneously after a random delay.
* Drive the neopixel bar and cycle through the F1 light sequence
* Everytime the encoder switch is pressed, make the machine go to the next state (enter next part of the light sequence)

<img width="500" alt="image" src="https://user-images.githubusercontent.com/69715492/199857369-412494a2-afc9-4c6a-aa21-cb1984b58a8b.png">

## Step 1: Create f1.sv ##
To implement the following:

<img width="300" alt="image" src="https://user-images.githubusercontent.com/69715492/199856748-a80742f6-1c61-4c1e-b505-16df65846084.png">

I used the eliminator design as inspiration:

<img width="850" alt="image" src="https://user-images.githubusercontent.com/69715492/199858775-73455e2f-4832-4d0e-9c17-248e663f4acc.png">


## Step 2: Create f1_fsm_tb.cpp ##
The testbench needed little change from the challenge of the previous task. 
* I had to change names to f1 for the f1.sv module
* The testbench still contains code for two vbdHex() statements
* The testbench still contains vbdBar() code to drive inputs into the neopixel bar

<img width="350" alt="image" src="https://user-images.githubusercontent.com/69715492/199861014-505dab54-106d-4af0-ad99-eb24bb962b41.png">

## Outputs ##
The systems behaves as required. Having pressed it up to the fifth light, I continued pressing the rotary encoder switch and obtained the following outputs:

<img width="500" alt="image" src="https://user-images.githubusercontent.com/69715492/199861404-3f4b23bd-4896-4cd4-8f94-e718e510b8cb.png">

<img width="500" alt="image" src="https://user-images.githubusercontent.com/69715492/199861442-009c0e3b-6c47-41e0-855d-3165a197af3a.png">

<img width="500" alt="image" src="https://user-images.githubusercontent.com/69715492/199861475-17138a8f-457d-42c5-bd6d-98543be7af60.png">

<img width="500" alt="image" src="https://user-images.githubusercontent.com/69715492/199861507-e905d037-6393-48b5-a316-d586ced22a38.png">

<img width="500" alt="image" src="https://user-images.githubusercontent.com/69715492/199861536-dda17b1c-01f6-46eb-8782-fcf298b4285a.png">
