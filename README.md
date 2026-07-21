# BeanBike-Display
### Description
A smart display to use with VESC controllers for Hack Club's Goated YSWS Macondo!!
### Demo
Here is a demo video on YouTube. https://youtu.be/hzEWeqmnlWU
### Specs
- ESP32 S3 N16R8
- Waveshare 480x320 capasitive display
- Custom PCB
### Detailed Description
A smart display using an ESP32 S3 and custom-developed firmware to communicate with VESC devices. Built for eBikes, BeanBike-Display can connect to virtually any VESC controller. With a beautiful 480x320 display from Waveshare to pair with UI designed in Squareline Vision and built with LVGL for fast, beautiful UIs. 
### Why I made this
I made this because I love mobility projects (like e-bikes or anything that moves you around); they are just so fun. This is a successor in a way to a previous project where I tried to create my own BLDC controller (it didn't go well), so this time I am making the display with all the smart functionality and VESC)
### BOM
Note that these are the things that I need funded. Everything else I already have. (The build cost on Macondo is outdated, but I couldn't change it. The cart pics are mostly the same, just with some stuff removed)
|Product Name |Product Description  |Product Link                                                                                                                                                                                                                                                                 |Product unit price|Product amount|Product Cost|Total (Before Tax + Shipping)|Total (Without Shipping)|Total |
|-------------|---------------------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|------------------|--------------|------------|-----------------------------|------------------------|------|
|FPC Connector|Connecting to dosplay|https://www.digikey.com/en/products/detail/molex/5034801800/2819155?s=N4IgTCBcDaIKwAYDMAWAHAgjBhIC6AvkA                                                                                                                                                                      |$1.50             |1             |$1.50       |$8.70                        |$9.31                   |$19.36|
|PCB          |uhh PCB              |https://cart.jlcpcb.com/shopcart/cart                                                                                                                                                                                                                                        |$2                |1             |$2          |                             |                        |      |
|Headers      |connecting to ESP    |https://www.aliexpress.us/item/3256810564318830.html?spm=a2g0o.cart.0.0.213f7a9d2CsPC1&mp=1&pdp_npi=6%40dis%21USD%21USD+5.53%21USD+2.60%21%21USD+2.58%21%21%21%402103212317824399376733356ea018%2112000053390335942%21ct%21US%213108417632%21%212%210%21&gatewayAdapt=glo2usa|$2.60             |2             |$5.20       |                             |                        |      |
### Firmware
Open up the firmware folder in PlatformIO and press upload!
## Images

### UI

#### Mockup
<img width="602" height="906" alt="image" src="https://github.com/user-attachments/assets/a3c4ed0e-594d-446a-a6bb-1d20d49369b1" />

#### Built UI
<img width="3072" height="4080" alt="PXL_20260702_140731225" src="https://github.com/user-attachments/assets/64025d23-091a-4476-addd-ed0e551158d1" />

### PCB

#### Schematic
<img width="1764" height="1237" alt="image" src="https://github.com/user-attachments/assets/15a60539-c4a2-4767-8d39-c24fecf32629" />

#### Layout
<img width="1597" height="1060" alt="image" src="https://github.com/user-attachments/assets/b93fbea0-9bb9-4916-b254-ed6b86887030" />

#### 3D PCB
<img width="1083" height="596" alt="Beanbike-Display" src="https://github.com/user-attachments/assets/cab00f72-285a-4cab-9a00-372d5db04016" />
<img width="1083" height="596" alt="Beanbike-Display-Back" src="https://github.com/user-attachments/assets/b836b9e2-2ccc-4440-9b54-f3b16e37a0b0" />

### Built Images
<img width="4080" height="3072" alt="PXL_20260721_220848045" src="https://github.com/user-attachments/assets/e74a8b34-3b15-468c-b039-ae703338ae6d" />
<img width="3072" height="4080" alt="PXL_20260721_223713567" src="https://github.com/user-attachments/assets/622e93d3-213e-4c7b-92bd-e9991413aae3" />
<img width="3072" height="4080" alt="PXL_20260721_223715880" src="https://github.com/user-attachments/assets/dfe2162b-40bb-46f9-956f-95c5cc61ff6b" />
<img width="3072" height="4080" alt="PXL_20260721_223718787" src="https://github.com/user-attachments/assets/8b54df03-2313-4b3d-a237-c89bd780b9ee" />

