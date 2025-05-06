GlobalVarCount = 0

Strings:
	size
	get
	default
	***
	birdmask
	scrollbar
	ui/NPC_Black.png
	ui/NPC_Andrei.png
	ui/NPC_Anna.png
	ui/NPC_BigVlad.png
	ui/NPC_Eva.png
	ui/NPC_Georg.png
	ui/NPC_Grif.png
	ui/NPC_Han.png
	ui/NPC_Julia.png
	ui/NPC_Kapella.png
	ui/NPC_Klara.png
	ui/NPC_Lara.png
	ui/NPC_Laska.png
	ui/NPC_Maria.png
	ui/NPC_Mark.png
	ui/NPC_Mat.png
	ui/NPC_Mishka.png
	ui/NPC_MladVlad.png
	ui/NPC_Notkin.png
	ui/NPC_Ospina.png
	ui/NPC_Petr.png
	ui/NPC_Rubin.png
	ui/NPC_Spi4ka.png
	ui/NPC_Starshina.png
	ui/NPC_Viktor.png
	ui/NPC_None.png
	ui/NPC_Bakalavr.png
	ui/NPC_Burah.png
	ui/NPC_Aglaja.png
	add
	cot_alexandr@door1
	shouse1_kabak@door1
	cot_anna@door1
	cot_bigvad@door1
	cot_georg@door1
	cot_georg@door2
	cot_julia@door1
	cot_kapella@door1
	cot_katerina@door1
	cot_lara@door1
	vagon_mishka@door1
	house_vlad@door1
	warehouse_notkin@door1
	dt_house_1_04@door1
	house_petr@door1
	house_spi4ka@door1
	house_spi4ka@door2
	cot_viktor@door1
	cot_viktor@door2
	vol_

Import:
	GetWindowSize (2 args)
	EnableClipping (1 args)
	SetOwnerDraw (1 args)
	ProcessEvents (0 args)
	CreateIntVector (1 args)
	LoadImage (1 args)
	Blit (3 args)
	GetStringByID (2 args)
	PrintInWidth (9 args)
	CreateStringVector (1 args)
	GetVariable (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool, int, int, int, int, object) Params = 0
		EVENT_0 Op = 0x3b Vars = ()
		EVENT_200 Op = 0xc6 Vars = (int, string, object)


0x0: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x1: @ GetWindowSize(Stack[-3], Stack[-4])
0x2: Pop(0)
0x3: Push((bool) 1)
0x4: @ EnableClipping(Stack[-1])
0x5: Pop(1)
0x6: Push((bool) 1)
0x7: @ SetOwnerDraw(Stack[-1])
0x8: Pop(1)
0x9: PushEmpty()
0xa: Call 0xf

0xb: Pop(0)
0xc: @ ProcessEvents()
0xd: Pop(0)
0xe: Return(); Pop(0)

0xf: PushEmpty(object, int, int, int, object, int, int, int)
0x10: @ CreateIntVector(Stack[-5])
0x11: Pop(0)
0x12: Stack[-4] = 0
0x13: PushEmpty(object, object)
0x14: Stack[-2] = Stack[5 + Tasks[-1].StackPointer]
0x15: Stack[-1] = Stack[-6]
0x16: Call 0x39c

0x17: Pop(2)
0x18: @@ size(Stack[-3])
0x19: Pop(0)
0x1a: Stack[-2] = (int) 0
0x1b: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x1c: IF (Stack[-1] == 0) GOTO 0x39; Pop(1)

0x1d: @@ get(Stack[-1], Stack[-2])
0x1e: Pop(0)
0x1f: PushEmpty(bool, int)
0x20: Stack[-1] = Stack[-3]
0x21: Call 0x472

0x22: Pop(1)
0x23: IF (Stack[-1] == 0) GOTO 0x2b; Pop(1)

0x24: PushEmpty(string, int)
0x25: Stack[-1] = Stack[-3]
0x26: Call 0x236

0x27: Pop(1)
0x28: @ LoadImage(Stack[-1])
0x29: Pop(1)
0x2a: GOTO 0x36

0x2b: PushEmpty(bool, int)
0x2c: Stack[-1] = Stack[-3]
0x2d: Call 0x47c

0x2e: Pop(1)
0x2f: IF (Stack[-1] == 0) GOTO 0x36; Pop(1)

0x30: PushEmpty(string, int)
0x31: Stack[-1] = Stack[-3]
0x32: Call 0x236

0x33: Pop(1)
0x34: @ LoadImage(Stack[-1])
0x35: Pop(1)
0x36: Push((int) 1)
0x37: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x38: GOTO 0x1b

0x39: Return(); Pop(8)

0x3a: Stack[-4] = 0
0x3b: PushEmpty(int, int)
0x3c: PushEmpty(int, int)
0x3d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3e: Call 0x4d

0x3f: Stack[-3] = Stack[-2]
0x40: Pop(2)
0x41: PushEmpty(int, int)
0x42: Stack[-1] = Stack[-3]
0x43: Call 0x8b

0x44: Stack[-3] = Stack[-2]
0x45: Pop(2)
0x46: Pop(0); Push(Stack[-1] - Stack[1 + StackPtr]);
0x47: Stack[2 + Tasks[-1].StackPointer] = Stack[-1] - Stack[4 + Tasks[-1].StackPointer]; Pop(1);
0x48: Push((int) 0)
0x49: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] < Stack[-1])
0x4a: IF (Stack[-1] == 0) GOTO 0x4c; Pop(1)

0x4b: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x4c: Return(); Pop(2)

0x4d: PushEmpty(int, int, int, int, int, string, int, int, int, int, int, int, int, string, int, int)
0x4e: Stack[-8] = Stack[-17]
0x4f: @@ size(Stack[-7])
0x50: Pop(0)
0x51: Stack[-6] = (int) 0
0x52: Pop(0); Push((bool) Stack[-6] < Stack[-7])
0x53: IF (Stack[-1] == 0) GOTO 0x7d; Pop(1)

0x54: @@ get(Stack[-5], Stack[-6])
0x55: Pop(0)
0x56: PushEmpty(bool, int)
0x57: Stack[-1] = Stack[-7]
0x58: Call 0x472

0x59: Pop(1)
0x5a: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x5b: PushEmpty(string, int)
0x5c: Stack[-1] = Stack[-7]
0x5d: Call 0x236

0x5e: Pop(1)
0x5f: Push((int) 0)
0x60: @ Blit(Stack[-2], Stack[-1], Stack[-10])
0x61: Pop(2)
0x62: PushEmpty(int, int)
0x63: Stack[-1] = Stack[-7]
0x64: Call 0xd0

0x65: Stack[-6] = Stack[-2]
0x66: Pop(2)
0x67: @ GetStringByID(Stack[-3], Stack[-4])
0x68: Pop(0)
0x69: Push("default")
0x6a: Push((int) 2)
0x6b: Pop(1); Push(Stack[3 + StackPtr] / Stack[-1]);
0x6c: Push((int) 2)
0x6d: Pop(1); Push(Stack[3 + StackPtr] / Stack[-1]);
0x6e: Push((float)1.0)
0x6f: Push((float)1.0)
0x70: Push((float)1.0)
0x71: @ PrintInWidth(Stack[-8], Stack[-6], Stack[-5], Stack[-14], Stack[-4], Stack[-9], Stack[-3], Stack[-2], Stack[-1])
0x72: Pop(6)
0x73: Push((int) 140)
0x74: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x75: IF (Stack[-1] == 0) GOTO 0x78; Pop(1)

0x76: Stack[-8] = Stack[-8] + Stack[-2]; Pop(0);
0x77: GOTO 0x7a

0x78: Push((int) 140)
0x79: Stack[-9] = Stack[-9] + Stack[-1]; Pop(1);
0x7a: Push((int) 1)
0x7b: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x7c: GOTO 0x52

0x7d: Push("default")
0x7e: Push((int) 2)
0x7f: Pop(1); Push(Stack[3 + StackPtr] / Stack[-1]);
0x80: Push((int) 20)
0x81: Pop(2); Push(Stack[-2] - Stack[-1]);
0x82: Push("***")
0x83: Push((float)1.0)
0x84: Push((float)1.0)
0x85: Push((float)1.0)
0x86: @ PrintInWidth(Stack[-7], Stack[-6], Stack[-5], Stack[-14], Stack[-3], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x87: Pop(6)
0x88: Stack[-8] = Stack[-8] + Stack[-1]; Pop(0);
0x89: Stack[-18] = Stack[-8]
0x8a: Return(); Pop(16)

0x8b: PushEmpty(int, int, int, int, int, string, int, int, int, int, int, int, string, int)
0x8c: Stack[-7] = Stack[-15]
0x8d: @@ size(Stack[-6])
0x8e: Pop(0)
0x8f: Stack[-5] = (int) 0
0x90: Pop(0); Push((bool) Stack[-5] < Stack[-6])
0x91: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0x92: @@ get(Stack[-4], Stack[-5])
0x93: Pop(0)
0x94: PushEmpty(bool, int)
0x95: Stack[-1] = Stack[-6]
0x96: Call 0x47c

0x97: Pop(1)
0x98: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0x99: PushEmpty(string, int)
0x9a: Stack[-1] = Stack[-6]
0x9b: Call 0x236

0x9c: Pop(1)
0x9d: Push((int) 0)
0x9e: @ Blit(Stack[-2], Stack[-1], Stack[-9])
0x9f: Pop(2)
0xa0: PushEmpty(bool, int)
0xa1: Stack[-1] = Stack[-6]
0xa2: Call 0x468

0xa3: Pop(1)
0xa4: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0xa5: Push("birdmask")
0xa6: Push((int) 0)
0xa7: @ Blit(Stack[-2], Stack[-1], Stack[-9])
0xa8: Pop(2)
0xa9: PushEmpty(int, int)
0xaa: Stack[-1] = Stack[-6]
0xab: Call 0xd0

0xac: Stack[-5] = Stack[-2]
0xad: Pop(2)
0xae: @ GetStringByID(Stack[-2], Stack[-3])
0xaf: Pop(0)
0xb0: Push("default")
0xb1: Push((int) 2)
0xb2: Pop(1); Push(Stack[3 + StackPtr] / Stack[-1]);
0xb3: Push((int) 2)
0xb4: Pop(1); Push(Stack[3 + StackPtr] / Stack[-1]);
0xb5: Push((float)1.0)
0xb6: Push((float)1.0)
0xb7: Push((float)1.0)
0xb8: @ PrintInWidth(Stack[-7], Stack[-6], Stack[-5], Stack[-13], Stack[-4], Stack[-8], Stack[-3], Stack[-2], Stack[-1])
0xb9: Pop(6)
0xba: Push((int) 140)
0xbb: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xbc: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xbd: Stack[-7] = Stack[-7] + Stack[-1]; Pop(0);
0xbe: GOTO 0xc1

0xbf: Push((int) 140)
0xc0: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0xc1: Push((int) 1)
0xc2: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0xc3: GOTO 0x90

0xc4: Stack[-16] = Stack[-7]
0xc5: Return(); Pop(14)

0xc6: PushEmpty()
0xc7: Push("scrollbar")
0xc8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc9: IF (Stack[-1] == 0) GOTO 0xcf; Pop(1)

0xca: Pop(0); Push(( -Stack[2 + Tasks[-1].StackPointer])
0xcb: Pop(1); Push(Stack[-1] * Stack[-4]);
0xcc: Push((int) 100)
0xcd: Stack[1 + Tasks[-1].StackPointer] = Stack[-2] / Stack[-1]; Pop(2);
0xce: Return(); Pop(0)

0xcf: Return(); Pop(0)

0xd0: PushEmpty()
0xd1: Push((int) 1)
0xd2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd3: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xd4: Stack[-2] = (int) 2854
0xd5: Return(); Pop(0)

0xd6: Push((int) 2)
0xd7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd8: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xd9: Stack[-2] = (int) 2855
0xda: Return(); Pop(0)

0xdb: Push((int) 3)
0xdc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdd: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xde: Stack[-2] = (int) 2856
0xdf: Return(); Pop(0)

0xe0: Push((int) 4)
0xe1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe2: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xe3: Stack[-2] = (int) 2857
0xe4: Return(); Pop(0)

0xe5: Push((int) 5)
0xe6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe7: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xe8: Stack[-2] = (int) 2858
0xe9: Return(); Pop(0)

0xea: Push((int) 6)
0xeb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xec: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xed: Stack[-2] = (int) 2859
0xee: Return(); Pop(0)

0xef: Push((int) 7)
0xf0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf1: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xf2: Stack[-2] = (int) 2860
0xf3: Return(); Pop(0)

0xf4: Push((int) 8)
0xf5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf6: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xf7: Stack[-2] = (int) 2861
0xf8: Return(); Pop(0)

0xf9: Push((int) 9)
0xfa: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xfb: IF (Stack[-1] == 0) GOTO 0xfe; Pop(1)

0xfc: Stack[-2] = (int) 2862
0xfd: Return(); Pop(0)

0xfe: Push((int) 10)
0xff: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x100: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0x101: Stack[-2] = (int) 2863
0x102: Return(); Pop(0)

0x103: Push((int) 11)
0x104: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x105: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0x106: Stack[-2] = (int) 2864
0x107: Return(); Pop(0)

0x108: Push((int) 12)
0x109: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10a: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0x10b: Stack[-2] = (int) 2865
0x10c: Return(); Pop(0)

0x10d: Push((int) 13)
0x10e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10f: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0x110: Stack[-2] = (int) 2866
0x111: Return(); Pop(0)

0x112: Push((int) 14)
0x113: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x114: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0x115: Stack[-2] = (int) 2867
0x116: Return(); Pop(0)

0x117: Push((int) 15)
0x118: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x119: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0x11a: Stack[-2] = (int) 2868
0x11b: Return(); Pop(0)

0x11c: Push((int) 16)
0x11d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x11e: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x11f: Stack[-2] = (int) 2869
0x120: Return(); Pop(0)

0x121: Push((int) 17)
0x122: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x123: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0x124: Stack[-2] = (int) 2870
0x125: Return(); Pop(0)

0x126: Push((int) 18)
0x127: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x128: IF (Stack[-1] == 0) GOTO 0x12b; Pop(1)

0x129: Stack[-2] = (int) 2871
0x12a: Return(); Pop(0)

0x12b: Push((int) 19)
0x12c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x12d: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x12e: Stack[-2] = (int) 2872
0x12f: Return(); Pop(0)

0x130: Push((int) 20)
0x131: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x132: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0x133: Stack[-2] = (int) 2873
0x134: Return(); Pop(0)

0x135: Push((int) 21)
0x136: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x137: IF (Stack[-1] == 0) GOTO 0x13a; Pop(1)

0x138: Stack[-2] = (int) 2874
0x139: Return(); Pop(0)

0x13a: Push((int) 22)
0x13b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x13c: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x13d: Stack[-2] = (int) 2875
0x13e: Return(); Pop(0)

0x13f: Push((int) 23)
0x140: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x141: IF (Stack[-1] == 0) GOTO 0x144; Pop(1)

0x142: Stack[-2] = (int) 2876
0x143: Return(); Pop(0)

0x144: Push((int) 24)
0x145: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x146: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x147: Stack[-2] = (int) 2877
0x148: Return(); Pop(0)

0x149: Push((int) 25)
0x14a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x14b: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x14c: Stack[-2] = (int) 2878
0x14d: Return(); Pop(0)

0x14e: Push((int) 26)
0x14f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x150: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x151: Stack[-2] = (int) 2879
0x152: Return(); Pop(0)

0x153: Push((int) 27)
0x154: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x155: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x156: Stack[-2] = (int) 3340
0x157: Return(); Pop(0)

0x158: Push((int) 28)
0x159: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x15a: IF (Stack[-1] == 0) GOTO 0x15d; Pop(1)

0x15b: Stack[-2] = (int) 3341
0x15c: Return(); Pop(0)

0x15d: Push((int) 29)
0x15e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x15f: IF (Stack[-1] == 0) GOTO 0x162; Pop(1)

0x160: Stack[-2] = (int) 3342
0x161: Return(); Pop(0)

0x162: Push((int) 30)
0x163: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x164: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x165: Stack[-2] = (int) 3343
0x166: Return(); Pop(0)

0x167: Push((int) 31)
0x168: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x169: IF (Stack[-1] == 0) GOTO 0x16c; Pop(1)

0x16a: Stack[-2] = (int) 3344
0x16b: Return(); Pop(0)

0x16c: Push((int) 32)
0x16d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x16e: IF (Stack[-1] == 0) GOTO 0x171; Pop(1)

0x16f: Stack[-2] = (int) 3345
0x170: Return(); Pop(0)

0x171: Push((int) 33)
0x172: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x173: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x174: Stack[-2] = (int) 3346
0x175: Return(); Pop(0)

0x176: Push((int) 34)
0x177: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x178: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x179: Stack[-2] = (int) 3347
0x17a: Return(); Pop(0)

0x17b: Push((int) 35)
0x17c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x17d: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x17e: Stack[-2] = (int) 3348
0x17f: Return(); Pop(0)

0x180: Push((int) 36)
0x181: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x182: IF (Stack[-1] == 0) GOTO 0x185; Pop(1)

0x183: Stack[-2] = (int) 3349
0x184: Return(); Pop(0)

0x185: Push((int) 37)
0x186: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x187: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x188: Stack[-2] = (int) 3350
0x189: Return(); Pop(0)

0x18a: Push((int) 38)
0x18b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x18c: IF (Stack[-1] == 0) GOTO 0x18f; Pop(1)

0x18d: Stack[-2] = (int) 3351
0x18e: Return(); Pop(0)

0x18f: Push((int) 39)
0x190: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x191: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x192: Stack[-2] = (int) 3352
0x193: Return(); Pop(0)

0x194: Push((int) 40)
0x195: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x196: IF (Stack[-1] == 0) GOTO 0x199; Pop(1)

0x197: Stack[-2] = (int) 3353
0x198: Return(); Pop(0)

0x199: Push((int) 42)
0x19a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x19b: IF (Stack[-1] == 0) GOTO 0x19e; Pop(1)

0x19c: Stack[-2] = (int) 3354
0x19d: Return(); Pop(0)

0x19e: Push((int) 43)
0x19f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1a0: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x1a1: Stack[-2] = (int) 3355
0x1a2: Return(); Pop(0)

0x1a3: Push((int) 44)
0x1a4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1a5: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x1a6: Stack[-2] = (int) 4029
0x1a7: Return(); Pop(0)

0x1a8: Push((int) 46)
0x1a9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1aa: IF (Stack[-1] == 0) GOTO 0x1ad; Pop(1)

0x1ab: Stack[-2] = (int) 4031
0x1ac: Return(); Pop(0)

0x1ad: Push((int) 47)
0x1ae: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1af: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0x1b0: Stack[-2] = (int) 4032
0x1b1: Return(); Pop(0)

0x1b2: Push((int) 48)
0x1b3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1b4: IF (Stack[-1] == 0) GOTO 0x1b7; Pop(1)

0x1b5: Stack[-2] = (int) 6270
0x1b6: Return(); Pop(0)

0x1b7: Push((int) 49)
0x1b8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1b9: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1ba: Stack[-2] = (int) 6271
0x1bb: Return(); Pop(0)

0x1bc: Push((int) 50)
0x1bd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1be: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1bf: Stack[-2] = (int) 6272
0x1c0: Return(); Pop(0)

0x1c1: Push((int) 51)
0x1c2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1c3: IF (Stack[-1] == 0) GOTO 0x1c6; Pop(1)

0x1c4: Stack[-2] = (int) 6273
0x1c5: Return(); Pop(0)

0x1c6: Push((int) 52)
0x1c7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1c8: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1c9: Stack[-2] = (int) 6274
0x1ca: Return(); Pop(0)

0x1cb: Push((int) 53)
0x1cc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1cd: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x1ce: Stack[-2] = (int) 6275
0x1cf: Return(); Pop(0)

0x1d0: Push((int) 54)
0x1d1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d2: IF (Stack[-1] == 0) GOTO 0x1d5; Pop(1)

0x1d3: Stack[-2] = (int) 6276
0x1d4: Return(); Pop(0)

0x1d5: Push((int) 55)
0x1d6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d7: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1d8: Stack[-2] = (int) 6277
0x1d9: Return(); Pop(0)

0x1da: Push((int) 56)
0x1db: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1dc: IF (Stack[-1] == 0) GOTO 0x1df; Pop(1)

0x1dd: Stack[-2] = (int) 6278
0x1de: Return(); Pop(0)

0x1df: Push((int) 57)
0x1e0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1e1: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1e2: Stack[-2] = (int) 6279
0x1e3: Return(); Pop(0)

0x1e4: Push((int) 58)
0x1e5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1e6: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x1e7: Stack[-2] = (int) 6280
0x1e8: Return(); Pop(0)

0x1e9: Push((int) 59)
0x1ea: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1eb: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1ec: Stack[-2] = (int) 6281
0x1ed: Return(); Pop(0)

0x1ee: Push((int) 60)
0x1ef: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1f0: IF (Stack[-1] == 0) GOTO 0x1f3; Pop(1)

0x1f1: Stack[-2] = (int) 6282
0x1f2: Return(); Pop(0)

0x1f3: Push((int) 61)
0x1f4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1f5: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1f6: Stack[-2] = (int) 6283
0x1f7: Return(); Pop(0)

0x1f8: Push((int) 62)
0x1f9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1fa: IF (Stack[-1] == 0) GOTO 0x1fd; Pop(1)

0x1fb: Stack[-2] = (int) 6284
0x1fc: Return(); Pop(0)

0x1fd: Push((int) 63)
0x1fe: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1ff: IF (Stack[-1] == 0) GOTO 0x202; Pop(1)

0x200: Stack[-2] = (int) 6285
0x201: Return(); Pop(0)

0x202: Push((int) 64)
0x203: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x204: IF (Stack[-1] == 0) GOTO 0x207; Pop(1)

0x205: Stack[-2] = (int) 6286
0x206: Return(); Pop(0)

0x207: Push((int) 65)
0x208: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x209: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x20a: Stack[-2] = (int) 6287
0x20b: Return(); Pop(0)

0x20c: Push((int) 66)
0x20d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x20e: IF (Stack[-1] == 0) GOTO 0x211; Pop(1)

0x20f: Stack[-2] = (int) 11961
0x210: Return(); Pop(0)

0x211: Push((int) 67)
0x212: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x213: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x214: Stack[-2] = (int) 12582
0x215: Return(); Pop(0)

0x216: Push((int) 68)
0x217: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x218: IF (Stack[-1] == 0) GOTO 0x21b; Pop(1)

0x219: Stack[-2] = (int) 12583
0x21a: Return(); Pop(0)

0x21b: Push((int) 69)
0x21c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x21d: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x21e: Stack[-2] = (int) 12611
0x21f: Return(); Pop(0)

0x220: Push((int) 70)
0x221: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x222: IF (Stack[-1] == 0) GOTO 0x225; Pop(1)

0x223: Stack[-2] = (int) 13334
0x224: Return(); Pop(0)

0x225: Push((int) 71)
0x226: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x227: IF (Stack[-1] == 0) GOTO 0x22a; Pop(1)

0x228: Stack[-2] = (int) 14839
0x229: Return(); Pop(0)

0x22a: Push((int) 72)
0x22b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x22c: IF (Stack[-1] == 0) GOTO 0x22f; Pop(1)

0x22d: Stack[-2] = (int) 14840
0x22e: Return(); Pop(0)

0x22f: Push((int) 73)
0x230: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x231: IF (Stack[-1] == 0) GOTO 0x234; Pop(1)

0x232: Stack[-2] = (int) 14841
0x233: Return(); Pop(0)

0x234: Stack[-2] = (int) -1
0x235: Return(); Pop(0)

0x236: PushEmpty()
0x237: Push((int) 1)
0x238: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x239: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x23a: Stack[-2] = "ui/NPC_Black.png"
0x23b: Return(); Pop(0)

0x23c: Push((int) 2)
0x23d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x23e: IF (Stack[-1] == 0) GOTO 0x241; Pop(1)

0x23f: Stack[-2] = "ui/NPC_Andrei.png"
0x240: Return(); Pop(0)

0x241: Push((int) 3)
0x242: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x243: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x244: Stack[-2] = "ui/NPC_Anna.png"
0x245: Return(); Pop(0)

0x246: Push((int) 4)
0x247: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x248: IF (Stack[-1] == 0) GOTO 0x24b; Pop(1)

0x249: Stack[-2] = "ui/NPC_BigVlad.png"
0x24a: Return(); Pop(0)

0x24b: Push((int) 5)
0x24c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x24d: IF (Stack[-1] == 0) GOTO 0x250; Pop(1)

0x24e: Stack[-2] = "ui/NPC_Eva.png"
0x24f: Return(); Pop(0)

0x250: Push((int) 6)
0x251: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x252: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x253: Stack[-2] = "ui/NPC_Georg.png"
0x254: Return(); Pop(0)

0x255: Push((int) 7)
0x256: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x257: IF (Stack[-1] == 0) GOTO 0x25a; Pop(1)

0x258: Stack[-2] = "ui/NPC_Grif.png"
0x259: Return(); Pop(0)

0x25a: Push((int) 8)
0x25b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x25c: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x25d: Stack[-2] = "ui/NPC_Han.png"
0x25e: Return(); Pop(0)

0x25f: Push((int) 9)
0x260: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x261: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x262: Stack[-2] = "ui/NPC_Julia.png"
0x263: Return(); Pop(0)

0x264: Push((int) 10)
0x265: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x266: IF (Stack[-1] == 0) GOTO 0x269; Pop(1)

0x267: Stack[-2] = "ui/NPC_Kapella.png"
0x268: Return(); Pop(0)

0x269: Push((int) 11)
0x26a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x26b: IF (Stack[-1] == 0) GOTO 0x26e; Pop(1)

0x26c: Stack[-2] = "ui/NPC_Black.png"
0x26d: Return(); Pop(0)

0x26e: Push((int) 12)
0x26f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x270: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x271: Stack[-2] = "ui/NPC_Klara.png"
0x272: Return(); Pop(0)

0x273: Push((int) 13)
0x274: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x275: IF (Stack[-1] == 0) GOTO 0x278; Pop(1)

0x276: Stack[-2] = "ui/NPC_Lara.png"
0x277: Return(); Pop(0)

0x278: Push((int) 14)
0x279: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x27a: IF (Stack[-1] == 0) GOTO 0x27d; Pop(1)

0x27b: Stack[-2] = "ui/NPC_Laska.png"
0x27c: Return(); Pop(0)

0x27d: Push((int) 15)
0x27e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x27f: IF (Stack[-1] == 0) GOTO 0x282; Pop(1)

0x280: Stack[-2] = "ui/NPC_Maria.png"
0x281: Return(); Pop(0)

0x282: Push((int) 16)
0x283: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x284: IF (Stack[-1] == 0) GOTO 0x287; Pop(1)

0x285: Stack[-2] = "ui/NPC_Mark.png"
0x286: Return(); Pop(0)

0x287: Push((int) 17)
0x288: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x289: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x28a: Stack[-2] = "ui/NPC_Mat.png"
0x28b: Return(); Pop(0)

0x28c: Push((int) 18)
0x28d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x28e: IF (Stack[-1] == 0) GOTO 0x291; Pop(1)

0x28f: Stack[-2] = "ui/NPC_Mishka.png"
0x290: Return(); Pop(0)

0x291: Push((int) 19)
0x292: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x293: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0x294: Stack[-2] = "ui/NPC_MladVlad.png"
0x295: Return(); Pop(0)

0x296: Push((int) 20)
0x297: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x298: IF (Stack[-1] == 0) GOTO 0x29b; Pop(1)

0x299: Stack[-2] = "ui/NPC_Notkin.png"
0x29a: Return(); Pop(0)

0x29b: Push((int) 21)
0x29c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x29d: IF (Stack[-1] == 0) GOTO 0x2a0; Pop(1)

0x29e: Stack[-2] = "ui/NPC_Ospina.png"
0x29f: Return(); Pop(0)

0x2a0: Push((int) 22)
0x2a1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2a2: IF (Stack[-1] == 0) GOTO 0x2a5; Pop(1)

0x2a3: Stack[-2] = "ui/NPC_Petr.png"
0x2a4: Return(); Pop(0)

0x2a5: Push((int) 23)
0x2a6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2a7: IF (Stack[-1] == 0) GOTO 0x2aa; Pop(1)

0x2a8: Stack[-2] = "ui/NPC_Rubin.png"
0x2a9: Return(); Pop(0)

0x2aa: Push((int) 24)
0x2ab: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2ac: IF (Stack[-1] == 0) GOTO 0x2af; Pop(1)

0x2ad: Stack[-2] = "ui/NPC_Spi4ka.png"
0x2ae: Return(); Pop(0)

0x2af: Push((int) 25)
0x2b0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2b1: IF (Stack[-1] == 0) GOTO 0x2b4; Pop(1)

0x2b2: Stack[-2] = "ui/NPC_Starshina.png"
0x2b3: Return(); Pop(0)

0x2b4: Push((int) 26)
0x2b5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2b6: IF (Stack[-1] == 0) GOTO 0x2b9; Pop(1)

0x2b7: Stack[-2] = "ui/NPC_Viktor.png"
0x2b8: Return(); Pop(0)

0x2b9: Push((int) 27)
0x2ba: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2bb: IF (Stack[-1] == 0) GOTO 0x2be; Pop(1)

0x2bc: Stack[-2] = "ui/NPC_None.png"
0x2bd: Return(); Pop(0)

0x2be: Push((int) 28)
0x2bf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2c0: IF (Stack[-1] == 0) GOTO 0x2c3; Pop(1)

0x2c1: Stack[-2] = "ui/NPC_None.png"
0x2c2: Return(); Pop(0)

0x2c3: Push((int) 29)
0x2c4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2c5: IF (Stack[-1] == 0) GOTO 0x2c8; Pop(1)

0x2c6: Stack[-2] = "ui/NPC_None.png"
0x2c7: Return(); Pop(0)

0x2c8: Push((int) 30)
0x2c9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2ca: IF (Stack[-1] == 0) GOTO 0x2cd; Pop(1)

0x2cb: Stack[-2] = "ui/NPC_None.png"
0x2cc: Return(); Pop(0)

0x2cd: Push((int) 31)
0x2ce: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2cf: IF (Stack[-1] == 0) GOTO 0x2d2; Pop(1)

0x2d0: Stack[-2] = "ui/NPC_None.png"
0x2d1: Return(); Pop(0)

0x2d2: Push((int) 32)
0x2d3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2d4: IF (Stack[-1] == 0) GOTO 0x2d7; Pop(1)

0x2d5: Stack[-2] = "ui/NPC_None.png"
0x2d6: Return(); Pop(0)

0x2d7: Push((int) 33)
0x2d8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2d9: IF (Stack[-1] == 0) GOTO 0x2dc; Pop(1)

0x2da: Stack[-2] = "ui/NPC_None.png"
0x2db: Return(); Pop(0)

0x2dc: Push((int) 34)
0x2dd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2de: IF (Stack[-1] == 0) GOTO 0x2e1; Pop(1)

0x2df: Stack[-2] = "ui/NPC_None.png"
0x2e0: Return(); Pop(0)

0x2e1: Push((int) 35)
0x2e2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2e3: IF (Stack[-1] == 0) GOTO 0x2e6; Pop(1)

0x2e4: Stack[-2] = "ui/NPC_None.png"
0x2e5: Return(); Pop(0)

0x2e6: Push((int) 36)
0x2e7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2e8: IF (Stack[-1] == 0) GOTO 0x2eb; Pop(1)

0x2e9: Stack[-2] = "ui/NPC_None.png"
0x2ea: Return(); Pop(0)

0x2eb: Push((int) 37)
0x2ec: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2ed: IF (Stack[-1] == 0) GOTO 0x2f0; Pop(1)

0x2ee: Stack[-2] = "ui/NPC_None.png"
0x2ef: Return(); Pop(0)

0x2f0: Push((int) 38)
0x2f1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2f2: IF (Stack[-1] == 0) GOTO 0x2f5; Pop(1)

0x2f3: Stack[-2] = "ui/NPC_None.png"
0x2f4: Return(); Pop(0)

0x2f5: Push((int) 39)
0x2f6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2f7: IF (Stack[-1] == 0) GOTO 0x2fa; Pop(1)

0x2f8: Stack[-2] = "ui/NPC_None.png"
0x2f9: Return(); Pop(0)

0x2fa: Push((int) 40)
0x2fb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2fc: IF (Stack[-1] == 0) GOTO 0x2ff; Pop(1)

0x2fd: Stack[-2] = "ui/NPC_None.png"
0x2fe: Return(); Pop(0)

0x2ff: Push((int) 42)
0x300: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x301: IF (Stack[-1] == 0) GOTO 0x304; Pop(1)

0x302: Stack[-2] = "ui/NPC_Black.png"
0x303: Return(); Pop(0)

0x304: Push((int) 43)
0x305: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x306: IF (Stack[-1] == 0) GOTO 0x309; Pop(1)

0x307: Stack[-2] = "ui/NPC_Black.png"
0x308: Return(); Pop(0)

0x309: Push((int) 44)
0x30a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x30b: IF (Stack[-1] == 0) GOTO 0x30e; Pop(1)

0x30c: Stack[-2] = "ui/NPC_Black.png"
0x30d: Return(); Pop(0)

0x30e: Push((int) 46)
0x30f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x310: IF (Stack[-1] == 0) GOTO 0x313; Pop(1)

0x311: Stack[-2] = "ui/NPC_Black.png"
0x312: Return(); Pop(0)

0x313: Push((int) 47)
0x314: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x315: IF (Stack[-1] == 0) GOTO 0x318; Pop(1)

0x316: Stack[-2] = "ui/NPC_Bakalavr.png"
0x317: Return(); Pop(0)

0x318: Push((int) 48)
0x319: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x31a: IF (Stack[-1] == 0) GOTO 0x31d; Pop(1)

0x31b: Stack[-2] = "ui/NPC_None.png"
0x31c: Return(); Pop(0)

0x31d: Push((int) 49)
0x31e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x31f: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x320: Stack[-2] = "ui/NPC_None.png"
0x321: Return(); Pop(0)

0x322: Push((int) 50)
0x323: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x324: IF (Stack[-1] == 0) GOTO 0x327; Pop(1)

0x325: Stack[-2] = "ui/NPC_None.png"
0x326: Return(); Pop(0)

0x327: Push((int) 51)
0x328: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x329: IF (Stack[-1] == 0) GOTO 0x32c; Pop(1)

0x32a: Stack[-2] = "ui/NPC_None.png"
0x32b: Return(); Pop(0)

0x32c: Push((int) 52)
0x32d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x32e: IF (Stack[-1] == 0) GOTO 0x331; Pop(1)

0x32f: Stack[-2] = "ui/NPC_None.png"
0x330: Return(); Pop(0)

0x331: Push((int) 53)
0x332: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x333: IF (Stack[-1] == 0) GOTO 0x336; Pop(1)

0x334: Stack[-2] = "ui/NPC_None.png"
0x335: Return(); Pop(0)

0x336: Push((int) 54)
0x337: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x338: IF (Stack[-1] == 0) GOTO 0x33b; Pop(1)

0x339: Stack[-2] = "ui/NPC_None.png"
0x33a: Return(); Pop(0)

0x33b: Push((int) 55)
0x33c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x33d: IF (Stack[-1] == 0) GOTO 0x340; Pop(1)

0x33e: Stack[-2] = "ui/NPC_None.png"
0x33f: Return(); Pop(0)

0x340: Push((int) 56)
0x341: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x342: IF (Stack[-1] == 0) GOTO 0x345; Pop(1)

0x343: Stack[-2] = "ui/NPC_None.png"
0x344: Return(); Pop(0)

0x345: Push((int) 57)
0x346: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x347: IF (Stack[-1] == 0) GOTO 0x34a; Pop(1)

0x348: Stack[-2] = "ui/NPC_None.png"
0x349: Return(); Pop(0)

0x34a: Push((int) 58)
0x34b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x34c: IF (Stack[-1] == 0) GOTO 0x34f; Pop(1)

0x34d: Stack[-2] = "ui/NPC_None.png"
0x34e: Return(); Pop(0)

0x34f: Push((int) 59)
0x350: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x351: IF (Stack[-1] == 0) GOTO 0x354; Pop(1)

0x352: Stack[-2] = "ui/NPC_None.png"
0x353: Return(); Pop(0)

0x354: Push((int) 60)
0x355: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x356: IF (Stack[-1] == 0) GOTO 0x359; Pop(1)

0x357: Stack[-2] = "ui/NPC_None.png"
0x358: Return(); Pop(0)

0x359: Push((int) 61)
0x35a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x35b: IF (Stack[-1] == 0) GOTO 0x35e; Pop(1)

0x35c: Stack[-2] = "ui/NPC_None.png"
0x35d: Return(); Pop(0)

0x35e: Push((int) 62)
0x35f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x360: IF (Stack[-1] == 0) GOTO 0x363; Pop(1)

0x361: Stack[-2] = "ui/NPC_None.png"
0x362: Return(); Pop(0)

0x363: Push((int) 63)
0x364: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x365: IF (Stack[-1] == 0) GOTO 0x368; Pop(1)

0x366: Stack[-2] = "ui/NPC_None.png"
0x367: Return(); Pop(0)

0x368: Push((int) 64)
0x369: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x36a: IF (Stack[-1] == 0) GOTO 0x36d; Pop(1)

0x36b: Stack[-2] = "ui/NPC_None.png"
0x36c: Return(); Pop(0)

0x36d: Push((int) 65)
0x36e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x36f: IF (Stack[-1] == 0) GOTO 0x372; Pop(1)

0x370: Stack[-2] = "ui/NPC_None.png"
0x371: Return(); Pop(0)

0x372: Push((int) 66)
0x373: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x374: IF (Stack[-1] == 0) GOTO 0x377; Pop(1)

0x375: Stack[-2] = "ui/NPC_Burah.png"
0x376: Return(); Pop(0)

0x377: Push((int) 67)
0x378: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x379: IF (Stack[-1] == 0) GOTO 0x37c; Pop(1)

0x37a: Stack[-2] = "ui/NPC_Black.png"
0x37b: Return(); Pop(0)

0x37c: Push((int) 68)
0x37d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x37e: IF (Stack[-1] == 0) GOTO 0x381; Pop(1)

0x37f: Stack[-2] = "ui/NPC_Black.png"
0x380: Return(); Pop(0)

0x381: Push((int) 69)
0x382: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x383: IF (Stack[-1] == 0) GOTO 0x386; Pop(1)

0x384: Stack[-2] = "ui/NPC_Black.png"
0x385: Return(); Pop(0)

0x386: Push((int) 70)
0x387: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x388: IF (Stack[-1] == 0) GOTO 0x38b; Pop(1)

0x389: Stack[-2] = "ui/NPC_Aglaja.png"
0x38a: Return(); Pop(0)

0x38b: Push((int) 71)
0x38c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x38d: IF (Stack[-1] == 0) GOTO 0x390; Pop(1)

0x38e: Stack[-2] = "ui/NPC_None.png"
0x38f: Return(); Pop(0)

0x390: Push((int) 72)
0x391: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x392: IF (Stack[-1] == 0) GOTO 0x395; Pop(1)

0x393: Stack[-2] = "ui/NPC_Black.png"
0x394: Return(); Pop(0)

0x395: Push((int) 73)
0x396: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x397: IF (Stack[-1] == 0) GOTO 0x39a; Pop(1)

0x398: Stack[-2] = "ui/NPC_Black.png"
0x399: Return(); Pop(0)

0x39a: Stack[-2] = ""
0x39b: Return(); Pop(0)

0x39c: PushEmpty(object, object)
0x39d: Push((int) 1)
0x39e: @@ add(Stack[-1])
0x39f: Pop(1)
0x3a0: Push(Stack[-3])
0x3a1: IF (Stack[-1] == 0) GOTO 0x3a9; Pop(1)

0x3a2: @ CreateStringVector(Stack[-1])
0x3a3: Pop(0)
0x3a4: Push("cot_alexandr@door1")
0x3a5: @@ add(Stack[-1])
0x3a6: Pop(1)
0x3a7: @@ add(Stack[-1])
0x3a8: Pop(0)
0x3a9: Push((int) 2)
0x3aa: @@ add(Stack[-1])
0x3ab: Pop(1)
0x3ac: Push(Stack[-3])
0x3ad: IF (Stack[-1] == 0) GOTO 0x3b5; Pop(1)

0x3ae: @ CreateStringVector(Stack[-1])
0x3af: Pop(0)
0x3b0: Push("shouse1_kabak@door1")
0x3b1: @@ add(Stack[-1])
0x3b2: Pop(1)
0x3b3: @@ add(Stack[-1])
0x3b4: Pop(0)
0x3b5: Push((int) 3)
0x3b6: @@ add(Stack[-1])
0x3b7: Pop(1)
0x3b8: Push(Stack[-3])
0x3b9: IF (Stack[-1] == 0) GOTO 0x3c1; Pop(1)

0x3ba: @ CreateStringVector(Stack[-1])
0x3bb: Pop(0)
0x3bc: Push("cot_anna@door1")
0x3bd: @@ add(Stack[-1])
0x3be: Pop(1)
0x3bf: @@ add(Stack[-1])
0x3c0: Pop(0)
0x3c1: Push((int) 4)
0x3c2: @@ add(Stack[-1])
0x3c3: Pop(1)
0x3c4: Push(Stack[-3])
0x3c5: IF (Stack[-1] == 0) GOTO 0x3cd; Pop(1)

0x3c6: @ CreateStringVector(Stack[-1])
0x3c7: Pop(0)
0x3c8: Push("cot_bigvad@door1")
0x3c9: @@ add(Stack[-1])
0x3ca: Pop(1)
0x3cb: @@ add(Stack[-1])
0x3cc: Pop(0)
0x3cd: Push((int) 6)
0x3ce: @@ add(Stack[-1])
0x3cf: Pop(1)
0x3d0: Push(Stack[-3])
0x3d1: IF (Stack[-1] == 0) GOTO 0x3dc; Pop(1)

0x3d2: @ CreateStringVector(Stack[-1])
0x3d3: Pop(0)
0x3d4: Push("cot_georg@door1")
0x3d5: @@ add(Stack[-1])
0x3d6: Pop(1)
0x3d7: Push("cot_georg@door2")
0x3d8: @@ add(Stack[-1])
0x3d9: Pop(1)
0x3da: @@ add(Stack[-1])
0x3db: Pop(0)
0x3dc: Push((int) 9)
0x3dd: @@ add(Stack[-1])
0x3de: Pop(1)
0x3df: Push(Stack[-3])
0x3e0: IF (Stack[-1] == 0) GOTO 0x3e8; Pop(1)

0x3e1: @ CreateStringVector(Stack[-1])
0x3e2: Pop(0)
0x3e3: Push("cot_julia@door1")
0x3e4: @@ add(Stack[-1])
0x3e5: Pop(1)
0x3e6: @@ add(Stack[-1])
0x3e7: Pop(0)
0x3e8: Push((int) 10)
0x3e9: @@ add(Stack[-1])
0x3ea: Pop(1)
0x3eb: Push(Stack[-3])
0x3ec: IF (Stack[-1] == 0) GOTO 0x3f4; Pop(1)

0x3ed: @ CreateStringVector(Stack[-1])
0x3ee: Pop(0)
0x3ef: Push("cot_kapella@door1")
0x3f0: @@ add(Stack[-1])
0x3f1: Pop(1)
0x3f2: @@ add(Stack[-1])
0x3f3: Pop(0)
0x3f4: Push((int) 11)
0x3f5: @@ add(Stack[-1])
0x3f6: Pop(1)
0x3f7: Push(Stack[-3])
0x3f8: IF (Stack[-1] == 0) GOTO 0x400; Pop(1)

0x3f9: @ CreateStringVector(Stack[-1])
0x3fa: Pop(0)
0x3fb: Push("cot_katerina@door1")
0x3fc: @@ add(Stack[-1])
0x3fd: Pop(1)
0x3fe: @@ add(Stack[-1])
0x3ff: Pop(0)
0x400: Push((int) 13)
0x401: @@ add(Stack[-1])
0x402: Pop(1)
0x403: Push(Stack[-3])
0x404: IF (Stack[-1] == 0) GOTO 0x40c; Pop(1)

0x405: @ CreateStringVector(Stack[-1])
0x406: Pop(0)
0x407: Push("cot_lara@door1")
0x408: @@ add(Stack[-1])
0x409: Pop(1)
0x40a: @@ add(Stack[-1])
0x40b: Pop(0)
0x40c: Push((int) 18)
0x40d: @@ add(Stack[-1])
0x40e: Pop(1)
0x40f: Push(Stack[-3])
0x410: IF (Stack[-1] == 0) GOTO 0x418; Pop(1)

0x411: @ CreateStringVector(Stack[-1])
0x412: Pop(0)
0x413: Push("vagon_mishka@door1")
0x414: @@ add(Stack[-1])
0x415: Pop(1)
0x416: @@ add(Stack[-1])
0x417: Pop(0)
0x418: Push((int) 19)
0x419: @@ add(Stack[-1])
0x41a: Pop(1)
0x41b: Push(Stack[-3])
0x41c: IF (Stack[-1] == 0) GOTO 0x424; Pop(1)

0x41d: @ CreateStringVector(Stack[-1])
0x41e: Pop(0)
0x41f: Push("house_vlad@door1")
0x420: @@ add(Stack[-1])
0x421: Pop(1)
0x422: @@ add(Stack[-1])
0x423: Pop(0)
0x424: Push((int) 20)
0x425: @@ add(Stack[-1])
0x426: Pop(1)
0x427: Push(Stack[-3])
0x428: IF (Stack[-1] == 0) GOTO 0x430; Pop(1)

0x429: @ CreateStringVector(Stack[-1])
0x42a: Pop(0)
0x42b: Push("warehouse_notkin@door1")
0x42c: @@ add(Stack[-1])
0x42d: Pop(1)
0x42e: @@ add(Stack[-1])
0x42f: Pop(0)
0x430: Push((int) 21)
0x431: @@ add(Stack[-1])
0x432: Pop(1)
0x433: Push(Stack[-3])
0x434: IF (Stack[-1] == 0) GOTO 0x43c; Pop(1)

0x435: @ CreateStringVector(Stack[-1])
0x436: Pop(0)
0x437: Push("dt_house_1_04@door1")
0x438: @@ add(Stack[-1])
0x439: Pop(1)
0x43a: @@ add(Stack[-1])
0x43b: Pop(0)
0x43c: Push((int) 22)
0x43d: @@ add(Stack[-1])
0x43e: Pop(1)
0x43f: Push(Stack[-3])
0x440: IF (Stack[-1] == 0) GOTO 0x448; Pop(1)

0x441: @ CreateStringVector(Stack[-1])
0x442: Pop(0)
0x443: Push("house_petr@door1")
0x444: @@ add(Stack[-1])
0x445: Pop(1)
0x446: @@ add(Stack[-1])
0x447: Pop(0)
0x448: Push((int) 24)
0x449: @@ add(Stack[-1])
0x44a: Pop(1)
0x44b: Push(Stack[-3])
0x44c: IF (Stack[-1] == 0) GOTO 0x457; Pop(1)

0x44d: @ CreateStringVector(Stack[-1])
0x44e: Pop(0)
0x44f: Push("house_spi4ka@door1")
0x450: @@ add(Stack[-1])
0x451: Pop(1)
0x452: Push("house_spi4ka@door2")
0x453: @@ add(Stack[-1])
0x454: Pop(1)
0x455: @@ add(Stack[-1])
0x456: Pop(0)
0x457: Push((int) 26)
0x458: @@ add(Stack[-1])
0x459: Pop(1)
0x45a: Push(Stack[-3])
0x45b: IF (Stack[-1] == 0) GOTO 0x466; Pop(1)

0x45c: @ CreateStringVector(Stack[-1])
0x45d: Pop(0)
0x45e: Push("cot_viktor@door1")
0x45f: @@ add(Stack[-1])
0x460: Pop(1)
0x461: Push("cot_viktor@door2")
0x462: @@ add(Stack[-1])
0x463: Pop(1)
0x464: @@ add(Stack[-1])
0x465: Pop(0)
0x466: Return(); Pop(2)

0x467: Stack[-1] = 0
0x468: PushEmpty(int, int)
0x469: Push("vol_")
0x46a: Pop(1); Push(Stack[-1] + Stack[-4]);
0x46b: @ GetVariable(Stack[-1], Stack[-2])
0x46c: Pop(1)
0x46d: Push((int) 4)
0x46e: Pop(1); Push(Stack[-2] & Stack[-1]);
0x46f: Push((int) 0)
0x470: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0x471: Return(); Pop(2)

0x472: PushEmpty(int, int)
0x473: Push("vol_")
0x474: Pop(1); Push(Stack[-1] + Stack[-4]);
0x475: @ GetVariable(Stack[-1], Stack[-2])
0x476: Pop(1)
0x477: Push((int) 2)
0x478: Pop(1); Push(Stack[-2] & Stack[-1]);
0x479: Push((int) 0)
0x47a: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0x47b: Return(); Pop(2)

0x47c: PushEmpty(int, int)
0x47d: Push("vol_")
0x47e: Pop(1); Push(Stack[-1] + Stack[-4]);
0x47f: @ GetVariable(Stack[-1], Stack[-2])
0x480: Pop(1)
0x481: Push((int) 8)
0x482: Pop(1); Push(Stack[-2] & Stack[-1]);
0x483: Push((int) 0)
0x484: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0x485: Return(); Pop(2)

