# ATmega32u4-Dev
Development board designed around the ATmega32u4 AVR microcontroller in a small and compact form factor.

## Table of Contents
- [ATmega32u4-Dev](#ATmega32u4-Dev)
  - [Table of Contents](#table-of-contents)
  - [About The Project](#about-the-project)
  - [Getting Started](#getting-started)
    - [Prerequisites](#prerequisites)
    - [Installation](#installation)
  - [Usage](#usage)
  - [Changelog](#changelog)

## About The Project
PCB design, fabrication and documentation of an ATmega32u4 based microcontroller board. 

This project was started to develop a system that could be used for rapid prototyping without the use of external programmers or hardware.
The design was based around the following requirements:

1. On-board programming i.e. not require FTDI or ISP.
2. Remain compatible with Arduno Framework i.e. use Arduino Leonardo pinout.
3. Feature LiPo support.
4. Feature USB-C.

## Getting Started
To get a build this project (or parts thereof), these steps may be followed.

### Prerequisites
1. PlatformIO, Microchip Studios or Arduino IDE for code generation and upload.
2. If you want to make changes to the PCB design or would like to generate new fabrication files, an installation of KiCAD is required.

### Installation
1. Manufacture a PCB.
2. Upload code.

## Usage
Examples will be given in future iterations of this file.

_For more examples, please refer to the [Documentation](https://)_

## Changelog
All notable changes to this project will be documented in this section.

The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.0.0/),
and this project attempts to adhere to [Semantic Versioning](https://semver.org/spec/v2.0.0.html).

### [v1.0.0]
#### Initial design
- ATmega32u4 based design.
- Included LiPo power and charge circuit.
- USB-C for LiPo charging, power and programming.