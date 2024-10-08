# I2C multiplexer TCA9548A breakout Arduino library

[![Make docs and publish to GitHub Pages](https://github.com/SolderedElectronics/Soldered-TCA9548A-I2C-Multiplexer-Arduino-Library/actions/workflows/make_docs.yml/badge.svg?branch=dev)](https://github.com/SolderedElectronics/Soldered-TCA9548A-I2C-Multiplexer-Arduino-Library/actions/workflows/make_docs.yml)
[![Arduino Library Manager Compatibility](https://github.com/SolderedElectronics/Soldered-TCA9548A-I2C-Multiplexer-Arduino-Library/actions/workflows/arduino_lint.yml/badge.svg?branch=dev)](https://github.com/SolderedElectronics/Soldered-TCA9548A-I2C-Multiplexer-Arduino-Library/actions/workflows/arduino_lint.yml)


| ![I2C multiplexer TCA9548A breakout](https://upload.wikimedia.org/wikipedia/commons/8/8f/Example_image.svg) |
| :---------------------------------------------------------------------------------------------------------: |
|                      [I2C multiplexer TCA9548A breakout](https://solde.red/333077)                      |

Have you ever found yourself wanting to connect more than one I2C device to a single controller and couldn't because they have identical I2C addresses? There you have it, I2C multiplexer (I2C MUX) allows you to use up to 8 devices with the same address on the same bus! If we mention that TCA9548A, the IC on which this breakout is based, has three adjustable pins for the I2C address, which means a total of 8 possible addresses. We can reach 64 devices with the same address on the same bus. For example, it is possible to connect 64 BME680 sensors that are read by only one microcontroller.

This adapter is particularly practical because it enables multiplexing of easyC devices.

- Based on: TCA9548A
- Voltage: 1.65V - 5.5V
- Default I2C address: 0x70, adjustable via 3 on-board jumpera
- Dimensions: 54 x 38mm (https://www.soldered.com/easyC)

### Repository Contents

- **/src** - source files for the library (.h & .cpp)
- **/examples** - examples for using the library
- **_other_** - _keywords_ file highlights function words in your IDE, _library.properties_ enables implementation with Arduino Library Manager.

### Hardware design

You can find hardware design for this board in [_I2C multiplexer TCA9548A breakout_](https://github.com/SolderedElectronics/I2C-multiplexer-TCA9548A-breakout-hardware-design) hardware repository.

### Documentation

Access Arduino library documentation [here](https://SolderedElectronics.github.io/Soldered-TCA9548A-I2C-Multiplexer-Arduino-Library/).

- Tutorial for using the I2C multiplexer board
- Installing an Arduino library

### Board compatibility

The library is compatible with board & microcontroller families shown in green below:

[![Compile Sketches](http://github-actions.40ants.com/e-radionicacom/Soldered-TCA9548A-I2C-Multiplexer-Arduino-Library/matrix.svg?branch=dev&only=Compile%20Sketches)](https://github.com/SolderedElectronics/Soldered-TCA9548A-I2C-Multiplexer-Arduino-Library/actions/workflows/compile_test.yml)

### About Soldered

<img src="https://raw.githubusercontent.com/e-radionicacom/Soldered-Generic-Arduino-Library/dev/extras/Soldered-logo-color.png" alt="soldered-logo" width="500"/>

At Soldered, we design and manufacture a wide selection of electronic products to help you turn your ideas into acts and bring you one step closer to your final project. Our products are intented for makers and crafted in-house by our experienced team in Osijek, Croatia. We believe that sharing is a crucial element for improvement and innovation, and we work hard to stay connected with all our makers regardless of their skill or experience level. Therefore, all our products are open-source. Finally, we always have your back. If you face any problem concerning either your shopping experience or your electronics project, our team will help you deal with it, offering efficient customer service and cost-free technical support anytime. Some of those might be useful for you:

- [Web Store](https://www.soldered.com/shop)
- [Tutorials & Projects](https://soldered.com/learn)
- [Community & Technical support](https://soldered.com/community)

### Original source

​
This library is possible thanks to original [TCA9548A](https://github.com/WifWaf/TCA9548A) library. Thank you, WifWaf.

### Open-source license

Soldered invests vast amounts of time into hardware & software for these products, which are all open-source. Please support future development by buying one of our products.

Check license details in the LICENSE file. Long story short, use these open-source files for any purpose you want to, as long as you apply the same open-source licence to it and disclose the original source. No warranty - all designs in this repository are distributed in the hope that they will be useful, but without any warranty. They are provided "AS IS", therefore without warranty of any kind, either expressed or implied. The entire quality and performance of what you do with the contents of this repository are your responsibility. In no event, Soldered (TAVU) will be liable for your damages, losses, including any general, special, incidental or consequential damage arising out of the use or inability to use the contents of this repository.

## Have fun!

And thank you from your fellow makers at Soldered Electronics.
