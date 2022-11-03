# Task 1 - 4-bit LFSR and Pseudo Random Binary Sequence #
1. Created the lfsr.sv component 
  * Modified the version in lecture notes to include and extra enable signal en
  * All 4 bits of the shift register output are brought out as data_out[3:0]
2. Created the testbench for LFSR
3. Created doit.sh script

## Step 1 ##
Here I created the lfsr.sv. 

<img width="500" alt="image" src="https://user-images.githubusercontent.com/69715492/199845818-4a840dbb-a264-47bc-811d-d0d360bce572.png">

This creates the following module:

<img width="600" alt="image" src="https://user-images.githubusercontent.com/69715492/199692614-e124733a-149f-4fab-b73e-51c7362f7a2b.png">

This is a linear feedback shift register. This is a cascade of flip-flops where the output of one flip-flop is connected to the input of the next. The input of sreg[1] is (sreg[4] XOR sreg[3]).

In the testbench, we run rst in the first cycle to make the initial value in the register 4'b0001. Using the XOR, the shift register counts through the sequence in the table below.

<img width="300" alt="image" src="https://user-images.githubusercontent.com/69715492/199846141-a65afcaa-91ff-4070-93e0-9564ba5c0b69.png">

* This acts as a 4-bit counter whose count appears somewhat randomly.
* The values repeat every 2^N-1 cycles
* The primitive polynomial form of this shift register is:

<img width="250" alt="image" src="https://user-images.githubusercontent.com/69715492/199846552-bcec07d6-55e8-41e3-9190-2582b28e96c0.png">

(The exponents of the X terms depend on which index of the registers were XOR-ed together)

## Step 2 ##
Next I created the following testbench function:

<img width="350" alt="image" src="https://user-images.githubusercontent.com/69715492/199851495-4814644a-74a7-44ba-b47e-3bc60072a368.png">

**Main modifications applied**
* rst set to 1 initially then 0 in for loop (to initialise value of sreg and then let shifting take place)
* en determined by vbdFlag()
* vbdBar and vbdHex used to diplay results

**New functions learned**\
*vbdBar()*: used to modify neopixel strip (strip of 8 LED lights on right side of VBuddy)

*vbdCycle(simcyc+1)*: displays cycle number in bottom left of VBuddy display (here symcyc is the iterator in the for loop for the clock cycles)

## Step 3 ##
Set up the following doit.sh file:

<img width="500" alt="image" src="https://user-images.githubusercontent.com/69715492/199847028-96a0645e-0f38-41e6-8fab-94163a65fbe5.png">

(standard process of renaming all components to lfsr)

## Outputs ##
Having gotten it up to 4'b1001 = 9, I pressed the encoder button three more times:

<img width="500" alt="image" src="https://user-images.githubusercontent.com/69715492/199852496-3fdd2e42-35bb-48e5-9a6b-d31d6b4a64ec.png">

<img width="500" alt="image" src="https://user-images.githubusercontent.com/69715492/199852521-e198b68c-d0dd-4bea-8e94-d83548d18c8b.png">

<img width="500" alt="image" src="https://user-images.githubusercontent.com/69715492/199852556-bcaee040-e9ef-4057-8ce8-b0d7acda7d2c.png">

<img width="500" alt="image" src="https://user-images.githubusercontent.com/69715492/199852581-11a2605a-9bd5-471b-8d49-27499a6f146d.png">


# Test Yourself Challenge #
Finally I had to modify lfsr.sv into a 7-bit generator. The primitive polynomial is:

<img width="100" alt="image" src="https://user-images.githubusercontent.com/69715492/199852754-9330d86c-4b61-4e33-8631-90679974ddc4.png">

To achieve this I changed:

## lfsr.sv module ##
Two main changes:
* Bit widths
* Changes XOR values to implement primitive polynomial

<img width="300" alt="image" src="https://user-images.githubusercontent.com/69715492/199853912-ece857e2-e260-4bc6-b4a3-1bf7ced1674b.png">

## testbench ##
The only change in the testbench was to now display two digits instead of one (since full 7 bits required 2 hex digits)

<img width="300" alt="image" src="https://user-images.githubusercontent.com/69715492/199853885-181e2b3e-4768-4d88-ad08-3f5fd74e4ac8.png">

