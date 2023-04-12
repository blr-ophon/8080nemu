
# 8080 emulator

Intel 8080 cpu emulator. Currently passes all the main tests (TST8080, 8080PRE and 8080EXER). Can be used as a library in other projects

## Building
Clone the project
```bash
  git clone https://github.com/blr-ophon/8080nemu
```
Compile using:

```bash
  cd 8080nemu
  make
```
## Running tests

Run all tests with:

```bash
  make testrom-all
```
Which outputs:

```
  ./8080nemutest ./tests/TST8080.COM
  
  MICROCOSM ASSOCIATES 8080/8085 CPU DIAGNOSTIC
   VERSION 1.0  (C) 1980
  $
   CPU IS OPERATIONAL$
  
  ./8080nemutest ./tests/8080PRE.COM
  
  8080 Preliminary tests complete$
  
  ./8080nemutest ./tests/8080EXM.COM
  
  8080 instruction exerciser
  $dad <b,d,h,sp>................$  PASS! crc is:$14474ba6
  $aluop nn......................$  PASS! crc is:$9e922f9e
  $aluop <b,c,d,e,h,l,m,a>.......$  PASS! crc is:$cf762c86
  $<daa,cma,stc,cmc>.............$  PASS! crc is:$bb3f030c
  $<inr,dcr> a...................$  PASS! crc is:$adb6460e
  $<inr,dcr> b...................$  PASS! crc is:$83ed1345
  $<inx,dcx> b...................$  PASS! crc is:$f79287cd
  $<inr,dcr> c...................$  PASS! crc is:$e5f6721b
  $<inr,dcr> d...................$  PASS! crc is:$15b5579a
  $<inx,dcx> d...................$  PASS! crc is:$7f4e2501
  $<inr,dcr> e...................$  PASS! crc is:$cf2ab396
  $<inr,dcr> h...................$  PASS! crc is:$12b2952c
  $<inx,dcx> h...................$  PASS! crc is:$9f2b23c0
  $<inr,dcr> l...................$  PASS! crc is:$ff57d356
  $<inr,dcr> m...................$  PASS! crc is:$92e963bd
  $<inx,dcx> sp..................$  PASS! crc is:$d5702fab
  $lhld nnnn.....................$  PASS! crc is:$a9c3d5cb
  $shld nnnn.....................$  PASS! crc is:$e8864f26
  $lxi <b,d,h,sp>,nnnn...........$  PASS! crc is:$fcf46e12
  $ldax <b,d>....................$  PASS! crc is:$2b821d5f
  $mvi <b,c,d,e,h,l,m,a>,nn......$  PASS! crc is:$eaa72044
  $mov <bcdehla>,<bcdehla>.......$  PASS! crc is:$10b58cee
  $sta nnnn / lda nnnn...........$  PASS! crc is:$ed57af72
  $<rlc,rrc,ral,rar>.............$  PASS! crc is:$e0d89235
  $stax <b,d>....................$  PASS! crc is:$2b0471e9
  $Tests complete$
```

## Usage as library

Compile the dynamic library with:

```bash
  make lib
```

Link 8080nemu.so and include the 8080nemu.h header file 
