GlobalVarCount = 0

Strings:
	size
	get
	default
	name
	separator
	birdmask
	scrollbar
	people
	ui/NPC_Alexandr.png
	ui/NPC_Andrei.png
	ui/NPC_Anna.png
	ui/NPC_BigVlad.png
	ui/NPC_Eva.png
	ui/NPC_Georg.png
	ui/NPC_Grif.png
	ui/NPC_Han.png
	ui/NPC_Julia.png
	ui/NPC_Kapella.png
	ui/NPC_Katerina.png
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
	ui/NPC_Citizen2.png
	ui/NPC_Citizen3.png
	ui/NPC_Citizen1.png
	ui/NPC_wmask.png
	ui/NPC_Black.png
	ui/NPC_bmask.png
	ui/NPC_Bakalavr.png
	ui/NPC_Burah.png
	ui/NPC_Albinos.png
	ui/NPC_Aglaja.png
	ui/NPC_Block.png
	ui/NPC_Prophet.png
	add
	vol_
	branch

Import:
	GetWindowSize (2 args)
	EnableClipping (1 args)
	SetOwnerDraw (1 args)
	ProcessEvents (0 args)
	CreateIntVector (1 args)
	LoadImage (1 args)
	GetStringByID (2 args)
	GetTextHeightInWidth (4 args)
	PrintInWidth (9 args)
	StretchBlit (5 args)
	Blit (3 args)
	SendMessage (2 args)
	GetVariable (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool, int, int, int, int, object) Params = 0
		EVENT_0 Op = 0x54 Vars = ()
		EVENT_15 Op = 0x121 Vars = (int, int, float)
		EVENT_200 Op = 0x156 Vars = (int, string, object)


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
0xa: Call2 0xf

0xb: Pop(0)
0xc: @ ProcessEvents()
0xd: Pop(0)
0xe: Return(); Pop(0)

0xf: PushEmpty(int, int, int, int, int, int)
0x10: @ CreateIntVector(Stack[-5])
0x11: Pop(0)
0x12: PushEmpty(int)
0x13: Call2 0x55d

0x14: Pop(0)
0x15: Push((int) 1)
0x16: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x17: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x18: PushEmpty(object, bool, int)
0x19: Stack[-3] = Stack[5 + Tasks[-1].StackPointer]
0x1a: Stack[-2] = (bool) 0
0x1b: Stack[-1] = (int) 1
0x1c: Call2 0x4dd

0x1d: Pop(3)
0x1e: GOTO 0x32

0x1f: PushEmpty(int)
0x20: Call2 0x55d

0x21: Pop(0)
0x22: Push((int) 0)
0x23: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x24: IF (Stack[-1] == 0) GOTO 0x2c; Pop(1)

0x25: PushEmpty(object, bool, int)
0x26: Stack[-3] = Stack[5 + Tasks[-1].StackPointer]
0x27: Stack[-2] = (bool) 0
0x28: Stack[-1] = (int) 0
0x29: Call2 0x4fe

0x2a: Pop(3)
0x2b: GOTO 0x32

0x2c: PushEmpty(object, bool, int)
0x2d: Stack[-3] = Stack[5 + Tasks[-1].StackPointer]
0x2e: Stack[-2] = (bool) 0
0x2f: Stack[-1] = (int) 2
0x30: Call2 0x51f

0x31: Pop(3)
0x32: @@ size(Stack[-3])
0x33: Pop(0)
0x34: Stack[-2] = (int) 0
0x35: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x36: IF (Stack[-1] == 0) GOTO 0x53; Pop(1)

0x37: @@ get(Stack[-1], Stack[-2])
0x38: Pop(0)
0x39: PushEmpty(bool, int)
0x3a: Stack[-1] = Stack[-3]
0x3b: Call2 0x549

0x3c: Pop(1)
0x3d: IF (Stack[-1] == 0) GOTO 0x45; Pop(1)

0x3e: PushEmpty(string, int)
0x3f: Stack[-1] = Stack[-3]
0x40: Call2 0x327

0x41: Pop(1)
0x42: @ LoadImage(Stack[-1])
0x43: Pop(1)
0x44: GOTO 0x50

0x45: PushEmpty(bool, int)
0x46: Stack[-1] = Stack[-3]
0x47: Call2 0x553

0x48: Pop(1)
0x49: IF (Stack[-1] == 0) GOTO 0x50; Pop(1)

0x4a: PushEmpty(string, int)
0x4b: Stack[-1] = Stack[-3]
0x4c: Call2 0x327

0x4d: Pop(1)
0x4e: @ LoadImage(Stack[-1])
0x4f: Pop(1)
0x50: Push((int) 1)
0x51: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x52: GOTO 0x35

0x53: Return(); Pop(6)

0x54: PushEmpty(int, string, int, int, string, int)
0x55: Stack[-3] = (int) 0
0x56: Push((int) 200)
0x57: @ GetStringByID(Stack[-3], Stack[-1])
0x58: Pop(1)
0x59: Push("default")
0x5a: @ GetTextHeightInWidth(Stack[-4], Stack[-1], Stack[-3], Stack[-3])
0x5b: Pop(1)
0x5c: PushEmpty(int, int)
0x5d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer] + Stack[-5]; Pop(0);
0x5e: Call2 0x77

0x5f: Stack[-3] = Stack[-2]
0x60: Pop(2)
0x61: PushEmpty(int, int)
0x62: Stack[-1] = Stack[-3]
0x63: Call2 0xd3

0x64: Stack[-3] = Stack[-2]
0x65: Pop(2)
0x66: Pop(0); Push(Stack[1 + StackPtr] + Stack[-3]);
0x67: Pop(1); Push((bool) Stack[-1] < Stack[-2])
0x68: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x69: Push("default")
0x6a: Push((int) 0)
0x6b: Push((float)1.0)
0x6c: Push((float)1.0)
0x6d: Push((float)1.0)
0x6e: @ PrintInWidth(Stack[-8], Stack[-5], Stack[-4], Stack[-1], Stack[-3], Stack[-7], Stack[-3], Stack[-2], Stack[-1])
0x6f: Pop(5)
0x70: Pop(0); Push(Stack[-1] - Stack[1 + StackPtr]);
0x71: Stack[2 + Tasks[-1].StackPointer] = Stack[-1] - Stack[4 + Tasks[-1].StackPointer]; Pop(1);
0x72: Push((int) 0)
0x73: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] < Stack[-1])
0x74: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x75: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x76: Return(); Pop(6)

0x77: PushEmpty(int, int, bool, int, int, int, int, string, int, string, int, int, bool, int, int, int, int, string, int, string)
0x78: Push((int) 15)
0x79: Stack[-11] = Stack[-22] + Stack[-1]; Pop(1);
0x7a: Stack[-8] = (bool) 1
0x7b: @@ size(Stack[-7])
0x7c: Pop(0)
0x7d: Stack[-6] = (int) 0
0x7e: Pop(0); Push((bool) Stack[-6] < Stack[-7])
0x7f: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0x80: @@ get(Stack[-5], Stack[-6])
0x81: Pop(0)
0x82: PushEmpty(bool, int)
0x83: Stack[-1] = Stack[-7]
0x84: Call2 0x549

0x85: Pop(1)
0x86: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0x87: Stack[-8] = (bool) 0
0x88: PushEmpty(string, int)
0x89: Stack[-1] = Stack[-7]
0x8a: Call2 0x327

0x8b: Pop(1)
0x8c: Push((int) 0)
0x8d: Push((int) 152)
0x8e: Push((int) 126)
0x8f: @ StretchBlit(Stack[-4], Stack[-3], Stack[-14], Stack[-2], Stack[-1])
0x90: Pop(4)
0x91: PushEmpty(int, int)
0x92: Stack[-1] = Stack[-7]
0x93: Call2 0x171

0x94: Stack[-6] = Stack[-2]
0x95: Pop(2)
0x96: @ GetStringByID(Stack[-3], Stack[-4])
0x97: Pop(0)
0x98: Push("name")
0x99: Push((int) 2)
0x9a: Pop(1); Push(Stack[-1] * Stack[3 + StackPtr]);
0x9b: Push((int) 5)
0x9c: Pop(2); Push(Stack[-2] / Stack[-1]);
0x9d: @ GetTextHeightInWidth(Stack[-4], Stack[-2], Stack[-1], Stack[-5])
0x9e: Pop(2)
0x9f: Push("name")
0xa0: Push((int) 3)
0xa1: Pop(1); Push(Stack[-1] * Stack[3 + StackPtr]);
0xa2: Push((int) 5)
0xa3: Pop(2); Push(Stack[-2] / Stack[-1]);
0xa4: Push((int) 140)
0xa5: Pop(1); Push(Stack[-13] + Stack[-1]);
0xa6: Pop(1); Push(Stack[-1] - Stack[-5]);
0xa7: Push((int) 2)
0xa8: Pop(1); Push(Stack[-1] * Stack[3 + StackPtr]);
0xa9: Push((int) 5)
0xaa: Pop(2); Push(Stack[-2] / Stack[-1]);
0xab: Push((float)0.6)
0xac: Push((float)0.6)
0xad: Push((float)0.6)
0xae: @ PrintInWidth(Stack[-9], Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-10], Stack[-3], Stack[-2], Stack[-1])
0xaf: Pop(7)
0xb0: Push((int) 140)
0xb1: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0xb2: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xb3: Stack[-10] = Stack[-10] + Stack[-2]; Pop(0);
0xb4: GOTO 0xb7

0xb5: Push((int) 140)
0xb6: Stack[-11] = Stack[-11] + Stack[-1]; Pop(1);
0xb7: Push((int) 1)
0xb8: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0xb9: GOTO 0x7e

0xba: Push(Stack[-8])
0xbb: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xbc: Stack[-22] = Stack[-21]
0xbd: Return(); Pop(20)

0xbe: Push((int) 201)
0xbf: @ GetStringByID(Stack[-2], Stack[-1])
0xc0: Pop(1)
0xc1: Push("default")
0xc2: Push((int) 0)
0xc3: Push((float)1.0)
0xc4: Push((float)1.0)
0xc5: Push((float)1.0)
0xc6: @ PrintInWidth(Stack[-14], Stack[-5], Stack[-4], Stack[-15], Stack[-3], Stack[-6], Stack[-3], Stack[-2], Stack[-1])
0xc7: Pop(5)
0xc8: Push((int) 7)
0xc9: Pop(1); Push(Stack[-10] + Stack[-1]);
0xca: Stack[-11] = Stack[-11] + Stack[-1]; Pop(1);
0xcb: Push("separator")
0xcc: Push((int) 0)
0xcd: Push((int) 1)
0xce: @ StretchBlit(Stack[-3], Stack[-2], Stack[-13], Stack[-3], Stack[-1])
0xcf: Pop(3)
0xd0: Push((int) 7)
0xd1: Stack[-23] = Stack[-11] + Stack[-1]; Pop(1);
0xd2: Return(); Pop(20)

0xd3: PushEmpty(int, int, int, bool, int, int, int, string, int, int, int, int, bool, int, int, int, string, int)
0xd4: Stack[-9] = Stack[-19]
0xd5: @@ size(Stack[-7])
0xd6: Pop(0)
0xd7: Stack[-6] = (bool) 1
0xd8: Stack[-5] = (int) 0
0xd9: Pop(0); Push((bool) Stack[-5] < Stack[-7])
0xda: IF (Stack[-1] == 0) GOTO 0x11b; Pop(1)

0xdb: @@ get(Stack[-4], Stack[-5])
0xdc: Pop(0)
0xdd: PushEmpty(bool, int)
0xde: Stack[-1] = Stack[-6]
0xdf: Call2 0x553

0xe0: Pop(1)
0xe1: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0xe2: Stack[-6] = (bool) 0
0xe3: PushEmpty(string, int)
0xe4: Stack[-1] = Stack[-6]
0xe5: Call2 0x327

0xe6: Pop(1)
0xe7: Push((int) 0)
0xe8: Push((int) 152)
0xe9: Push((int) 126)
0xea: @ StretchBlit(Stack[-4], Stack[-3], Stack[-13], Stack[-2], Stack[-1])
0xeb: Pop(4)
0xec: PushEmpty(bool, int)
0xed: Stack[-1] = Stack[-6]
0xee: Call2 0x53f

0xef: Pop(1)
0xf0: IF (Stack[-1] == 0) GOTO 0xf5; Pop(1)

0xf1: Push("birdmask")
0xf2: Push((int) 0)
0xf3: @ Blit(Stack[-2], Stack[-1], Stack[-11])
0xf4: Pop(2)
0xf5: PushEmpty(int, int)
0xf6: Stack[-1] = Stack[-6]
0xf7: Call2 0x171

0xf8: Stack[-5] = Stack[-2]
0xf9: Pop(2)
0xfa: @ GetStringByID(Stack[-2], Stack[-3])
0xfb: Pop(0)
0xfc: Push("name")
0xfd: Push((int) 2)
0xfe: Pop(1); Push(Stack[-1] * Stack[3 + StackPtr]);
0xff: Push((int) 5)
0x100: Pop(2); Push(Stack[-2] / Stack[-1]);
0x101: @ GetTextHeightInWidth(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0x102: Pop(2)
0x103: Push("name")
0x104: Push((int) 3)
0x105: Pop(1); Push(Stack[-1] * Stack[3 + StackPtr]);
0x106: Push((int) 5)
0x107: Pop(2); Push(Stack[-2] / Stack[-1]);
0x108: Push((int) 140)
0x109: Pop(1); Push(Stack[-12] + Stack[-1]);
0x10a: Pop(1); Push(Stack[-1] - Stack[-4]);
0x10b: Push((int) 15)
0x10c: Pop(2); Push(Stack[-2] - Stack[-1]);
0x10d: Push((int) 2)
0x10e: Pop(1); Push(Stack[-1] * Stack[3 + StackPtr]);
0x10f: Push((int) 5)
0x110: Pop(2); Push(Stack[-2] / Stack[-1]);
0x111: Push((float)0.6)
0x112: Push((float)0.6)
0x113: Push((float)0.6)
0x114: @ PrintInWidth(Stack[-8], Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-9], Stack[-3], Stack[-2], Stack[-1])
0x115: Pop(7)
0x116: Push((int) 140)
0x117: Stack[-10] = Stack[-10] + Stack[-1]; Pop(1);
0x118: Push((int) 1)
0x119: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x11a: GOTO 0xd9

0x11b: Push(Stack[-6])
0x11c: IF (Stack[-1] == 0) GOTO 0x11f; Pop(1)

0x11d: Stack[-20] = Stack[-19]
0x11e: Return(); Pop(18)

0x11f: Stack[-20] = Stack[-9]
0x120: Return(); Pop(18)

0x121: PushEmpty(int, int)
0x122: Push((int) 140)
0x123: Pop(1); Push(Stack[-4] * Stack[-1]);
0x124: Push((int) 2)
0x125: Stack[-3] = Stack[-2] / Stack[-1]; Pop(2);
0x126: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(0);
0x127: PushEmpty()
0x128: Call2 0x139

0x129: Pop(0)
0x12a: Return(); Pop(2)

0x12b: PushEmpty(int, int)
0x12c: Stack[-1] = (int) 140
0x12d: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(0);
0x12e: PushEmpty()
0x12f: Call2 0x139

0x130: Pop(0)
0x131: Return(); Pop(2)

0x132: PushEmpty(int, int)
0x133: Stack[-1] = (int) -140
0x134: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(0);
0x135: PushEmpty()
0x136: Call2 0x139

0x137: Pop(0)
0x138: Return(); Pop(2)

0x139: Push((int) 0)
0x13a: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] < Stack[-1])
0x13b: IF (Stack[-1] == 0) GOTO 0x13d; Pop(1)

0x13c: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x13d: Pop(0); Push(( -Stack[1 + Tasks[-1].StackPointer])
0x13e: Pop(1); Push((bool) Stack[-1] > Stack[2 + Tasks[-1].StackPointer])
0x13f: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x140: Stack[1 + Tasks[-1].StackPointer] = -Stack[2 + Tasks[-1].StackPointer]; Pop(0);
0x141: GOTO 0x146

0x142: Push((int) 0)
0x143: Pop(1); Push((bool) Stack[1 + Tasks[-1].StackPointer] > Stack[-1])
0x144: IF (Stack[-1] == 0) GOTO 0x146; Pop(1)

0x145: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x146: Push((int) 0)
0x147: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x148: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x149: Push((int) 16384)
0x14a: Push("scrollbar")
0x14b: @ SendMessage(Stack[-2], Stack[-1])
0x14c: Pop(2)
0x14d: GOTO 0x155

0x14e: Pop(0); Push(( -Stack[1 + Tasks[-1].StackPointer])
0x14f: Push((int) 100)
0x150: Pop(2); Push(Stack[-2] * Stack[-1]);
0x151: Pop(1); Push(Stack[-1] / Stack[2 + StackPtr]);
0x152: Push("scrollbar")
0x153: @ SendMessage(Stack[-2], Stack[-1])
0x154: Pop(2)
0x155: Return(); Pop(0)

0x156: PushEmpty()
0x157: Push("scrollbar")
0x158: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x159: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x15a: Pop(0); Push(( -Stack[2 + Tasks[-1].StackPointer])
0x15b: Pop(1); Push(Stack[-1] * Stack[-4]);
0x15c: Push((int) 100)
0x15d: Stack[1 + Tasks[-1].StackPointer] = Stack[-2] / Stack[-1]; Pop(2);
0x15e: Return(); Pop(0)

0x15f: GOTO 0x170

0x160: Push("people")
0x161: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x162: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x163: Push((int) 1000)
0x164: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x165: IF (Stack[-1] == 0) GOTO 0x16a; Pop(1)

0x166: PushEmpty()
0x167: Call2 0x132

0x168: Pop(0)
0x169: GOTO 0x170

0x16a: Push((int) 1001)
0x16b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x16c: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x16d: PushEmpty()
0x16e: Call2 0x12b

0x16f: Pop(0)
0x170: Return(); Pop(0)

0x171: PushEmpty()
0x172: Push((int) 1)
0x173: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x174: IF (Stack[-1] == 0) GOTO 0x177; Pop(1)

0x175: Stack[-2] = (int) 502854
0x176: Return(); Pop(0)

0x177: Push((int) 2)
0x178: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x179: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0x17a: Stack[-2] = (int) 502855
0x17b: Return(); Pop(0)

0x17c: Push((int) 3)
0x17d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x17e: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x17f: Stack[-2] = (int) 502856
0x180: Return(); Pop(0)

0x181: Push((int) 4)
0x182: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x183: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x184: Stack[-2] = (int) 502857
0x185: Return(); Pop(0)

0x186: Push((int) 5)
0x187: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x188: IF (Stack[-1] == 0) GOTO 0x18b; Pop(1)

0x189: Stack[-2] = (int) 502858
0x18a: Return(); Pop(0)

0x18b: Push((int) 6)
0x18c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x18d: IF (Stack[-1] == 0) GOTO 0x190; Pop(1)

0x18e: Stack[-2] = (int) 502859
0x18f: Return(); Pop(0)

0x190: Push((int) 7)
0x191: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x192: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x193: Stack[-2] = (int) 502860
0x194: Return(); Pop(0)

0x195: Push((int) 8)
0x196: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x197: IF (Stack[-1] == 0) GOTO 0x19a; Pop(1)

0x198: Stack[-2] = (int) 502861
0x199: Return(); Pop(0)

0x19a: Push((int) 9)
0x19b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x19c: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0x19d: Stack[-2] = (int) 502862
0x19e: Return(); Pop(0)

0x19f: Push((int) 10)
0x1a0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1a1: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x1a2: Stack[-2] = (int) 502863
0x1a3: Return(); Pop(0)

0x1a4: Push((int) 11)
0x1a5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1a6: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x1a7: Stack[-2] = (int) 502864
0x1a8: Return(); Pop(0)

0x1a9: Push((int) 12)
0x1aa: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1ab: IF (Stack[-1] == 0) GOTO 0x1ae; Pop(1)

0x1ac: Stack[-2] = (int) 502865
0x1ad: Return(); Pop(0)

0x1ae: Push((int) 13)
0x1af: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1b0: IF (Stack[-1] == 0) GOTO 0x1b3; Pop(1)

0x1b1: Stack[-2] = (int) 502866
0x1b2: Return(); Pop(0)

0x1b3: Push((int) 14)
0x1b4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1b5: IF (Stack[-1] == 0) GOTO 0x1b8; Pop(1)

0x1b6: Stack[-2] = (int) 502867
0x1b7: Return(); Pop(0)

0x1b8: Push((int) 15)
0x1b9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1ba: IF (Stack[-1] == 0) GOTO 0x1bd; Pop(1)

0x1bb: Stack[-2] = (int) 502868
0x1bc: Return(); Pop(0)

0x1bd: Push((int) 16)
0x1be: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1bf: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0x1c0: Stack[-2] = (int) 502869
0x1c1: Return(); Pop(0)

0x1c2: Push((int) 17)
0x1c3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1c4: IF (Stack[-1] == 0) GOTO 0x1c7; Pop(1)

0x1c5: Stack[-2] = (int) 502870
0x1c6: Return(); Pop(0)

0x1c7: Push((int) 18)
0x1c8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1c9: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1ca: Stack[-2] = (int) 502871
0x1cb: Return(); Pop(0)

0x1cc: Push((int) 19)
0x1cd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1ce: IF (Stack[-1] == 0) GOTO 0x1d1; Pop(1)

0x1cf: Stack[-2] = (int) 502872
0x1d0: Return(); Pop(0)

0x1d1: Push((int) 20)
0x1d2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d3: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1d4: Stack[-2] = (int) 502873
0x1d5: Return(); Pop(0)

0x1d6: Push((int) 21)
0x1d7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d8: IF (Stack[-1] == 0) GOTO 0x1db; Pop(1)

0x1d9: Stack[-2] = (int) 502874
0x1da: Return(); Pop(0)

0x1db: Push((int) 22)
0x1dc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1dd: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1de: Stack[-2] = (int) 502875
0x1df: Return(); Pop(0)

0x1e0: Push((int) 23)
0x1e1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1e2: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1e3: Stack[-2] = (int) 502876
0x1e4: Return(); Pop(0)

0x1e5: Push((int) 24)
0x1e6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1e7: IF (Stack[-1] == 0) GOTO 0x1ea; Pop(1)

0x1e8: Stack[-2] = (int) 502877
0x1e9: Return(); Pop(0)

0x1ea: Push((int) 25)
0x1eb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1ec: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x1ed: Stack[-2] = (int) 502878
0x1ee: Return(); Pop(0)

0x1ef: Push((int) 26)
0x1f0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1f1: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1f2: Stack[-2] = (int) 502879
0x1f3: Return(); Pop(0)

0x1f4: Push((int) 27)
0x1f5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1f6: IF (Stack[-1] == 0) GOTO 0x1f9; Pop(1)

0x1f7: Stack[-2] = (int) 503340
0x1f8: Return(); Pop(0)

0x1f9: Push((int) 28)
0x1fa: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1fb: IF (Stack[-1] == 0) GOTO 0x1fe; Pop(1)

0x1fc: Stack[-2] = (int) 503341
0x1fd: Return(); Pop(0)

0x1fe: Push((int) 29)
0x1ff: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x200: IF (Stack[-1] == 0) GOTO 0x203; Pop(1)

0x201: Stack[-2] = (int) 503342
0x202: Return(); Pop(0)

0x203: Push((int) 30)
0x204: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x205: IF (Stack[-1] == 0) GOTO 0x208; Pop(1)

0x206: Stack[-2] = (int) 503343
0x207: Return(); Pop(0)

0x208: Push((int) 31)
0x209: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x20a: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0x20b: Stack[-2] = (int) 503344
0x20c: Return(); Pop(0)

0x20d: Push((int) 32)
0x20e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x20f: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x210: Stack[-2] = (int) 503345
0x211: Return(); Pop(0)

0x212: Push((int) 33)
0x213: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x214: IF (Stack[-1] == 0) GOTO 0x217; Pop(1)

0x215: Stack[-2] = (int) 503346
0x216: Return(); Pop(0)

0x217: Push((int) 34)
0x218: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x219: IF (Stack[-1] == 0) GOTO 0x21c; Pop(1)

0x21a: Stack[-2] = (int) 503347
0x21b: Return(); Pop(0)

0x21c: Push((int) 35)
0x21d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x21e: IF (Stack[-1] == 0) GOTO 0x221; Pop(1)

0x21f: Stack[-2] = (int) 503348
0x220: Return(); Pop(0)

0x221: Push((int) 36)
0x222: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x223: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x224: Stack[-2] = (int) 503349
0x225: Return(); Pop(0)

0x226: Push((int) 37)
0x227: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x228: IF (Stack[-1] == 0) GOTO 0x22b; Pop(1)

0x229: Stack[-2] = (int) 503350
0x22a: Return(); Pop(0)

0x22b: Push((int) 38)
0x22c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x22d: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x22e: Stack[-2] = (int) 503351
0x22f: Return(); Pop(0)

0x230: Push((int) 39)
0x231: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x232: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x233: Stack[-2] = (int) 503352
0x234: Return(); Pop(0)

0x235: Push((int) 40)
0x236: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x237: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x238: Stack[-2] = (int) 503353
0x239: Return(); Pop(0)

0x23a: Push((int) 42)
0x23b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x23c: IF (Stack[-1] == 0) GOTO 0x23f; Pop(1)

0x23d: Stack[-2] = (int) 503354
0x23e: Return(); Pop(0)

0x23f: Push((int) 43)
0x240: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x241: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x242: Stack[-2] = (int) 503355
0x243: Return(); Pop(0)

0x244: Push((int) 44)
0x245: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x246: IF (Stack[-1] == 0) GOTO 0x249; Pop(1)

0x247: Stack[-2] = (int) 504029
0x248: Return(); Pop(0)

0x249: Push((int) 46)
0x24a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x24b: IF (Stack[-1] == 0) GOTO 0x24e; Pop(1)

0x24c: Stack[-2] = (int) 504031
0x24d: Return(); Pop(0)

0x24e: Push((int) 47)
0x24f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x250: IF (Stack[-1] == 0) GOTO 0x253; Pop(1)

0x251: Stack[-2] = (int) 504032
0x252: Return(); Pop(0)

0x253: Push((int) 48)
0x254: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x255: IF (Stack[-1] == 0) GOTO 0x258; Pop(1)

0x256: Stack[-2] = (int) 506270
0x257: Return(); Pop(0)

0x258: Push((int) 49)
0x259: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x25a: IF (Stack[-1] == 0) GOTO 0x25d; Pop(1)

0x25b: Stack[-2] = (int) 506271
0x25c: Return(); Pop(0)

0x25d: Push((int) 50)
0x25e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x25f: IF (Stack[-1] == 0) GOTO 0x262; Pop(1)

0x260: Stack[-2] = (int) 506272
0x261: Return(); Pop(0)

0x262: Push((int) 51)
0x263: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x264: IF (Stack[-1] == 0) GOTO 0x267; Pop(1)

0x265: Stack[-2] = (int) 506273
0x266: Return(); Pop(0)

0x267: Push((int) 52)
0x268: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x269: IF (Stack[-1] == 0) GOTO 0x26c; Pop(1)

0x26a: Stack[-2] = (int) 506274
0x26b: Return(); Pop(0)

0x26c: Push((int) 53)
0x26d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x26e: IF (Stack[-1] == 0) GOTO 0x271; Pop(1)

0x26f: Stack[-2] = (int) 506275
0x270: Return(); Pop(0)

0x271: Push((int) 54)
0x272: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x273: IF (Stack[-1] == 0) GOTO 0x276; Pop(1)

0x274: Stack[-2] = (int) 506276
0x275: Return(); Pop(0)

0x276: Push((int) 55)
0x277: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x278: IF (Stack[-1] == 0) GOTO 0x27b; Pop(1)

0x279: Stack[-2] = (int) 506277
0x27a: Return(); Pop(0)

0x27b: Push((int) 56)
0x27c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x27d: IF (Stack[-1] == 0) GOTO 0x280; Pop(1)

0x27e: Stack[-2] = (int) 506278
0x27f: Return(); Pop(0)

0x280: Push((int) 57)
0x281: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x282: IF (Stack[-1] == 0) GOTO 0x285; Pop(1)

0x283: Stack[-2] = (int) 506279
0x284: Return(); Pop(0)

0x285: Push((int) 58)
0x286: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x287: IF (Stack[-1] == 0) GOTO 0x28a; Pop(1)

0x288: Stack[-2] = (int) 506280
0x289: Return(); Pop(0)

0x28a: Push((int) 59)
0x28b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x28c: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x28d: Stack[-2] = (int) 506281
0x28e: Return(); Pop(0)

0x28f: Push((int) 60)
0x290: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x291: IF (Stack[-1] == 0) GOTO 0x294; Pop(1)

0x292: Stack[-2] = (int) 506282
0x293: Return(); Pop(0)

0x294: Push((int) 61)
0x295: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x296: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x297: Stack[-2] = (int) 506283
0x298: Return(); Pop(0)

0x299: Push((int) 62)
0x29a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x29b: IF (Stack[-1] == 0) GOTO 0x29e; Pop(1)

0x29c: Stack[-2] = (int) 506284
0x29d: Return(); Pop(0)

0x29e: Push((int) 63)
0x29f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2a0: IF (Stack[-1] == 0) GOTO 0x2a3; Pop(1)

0x2a1: Stack[-2] = (int) 506285
0x2a2: Return(); Pop(0)

0x2a3: Push((int) 64)
0x2a4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2a5: IF (Stack[-1] == 0) GOTO 0x2a8; Pop(1)

0x2a6: Stack[-2] = (int) 506286
0x2a7: Return(); Pop(0)

0x2a8: Push((int) 65)
0x2a9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2aa: IF (Stack[-1] == 0) GOTO 0x2ad; Pop(1)

0x2ab: Stack[-2] = (int) 506287
0x2ac: Return(); Pop(0)

0x2ad: Push((int) 66)
0x2ae: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2af: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x2b0: Stack[-2] = (int) 511961
0x2b1: Return(); Pop(0)

0x2b2: Push((int) 67)
0x2b3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2b4: IF (Stack[-1] == 0) GOTO 0x2b7; Pop(1)

0x2b5: Stack[-2] = (int) 512582
0x2b6: Return(); Pop(0)

0x2b7: Push((int) 68)
0x2b8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2b9: IF (Stack[-1] == 0) GOTO 0x2bc; Pop(1)

0x2ba: Stack[-2] = (int) 512583
0x2bb: Return(); Pop(0)

0x2bc: Push((int) 69)
0x2bd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2be: IF (Stack[-1] == 0) GOTO 0x2c1; Pop(1)

0x2bf: Stack[-2] = (int) 512611
0x2c0: Return(); Pop(0)

0x2c1: Push((int) 70)
0x2c2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2c3: IF (Stack[-1] == 0) GOTO 0x2c6; Pop(1)

0x2c4: Stack[-2] = (int) 513334
0x2c5: Return(); Pop(0)

0x2c6: Push((int) 71)
0x2c7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2c8: IF (Stack[-1] == 0) GOTO 0x2cb; Pop(1)

0x2c9: Stack[-2] = (int) 514839
0x2ca: Return(); Pop(0)

0x2cb: Push((int) 72)
0x2cc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2cd: IF (Stack[-1] == 0) GOTO 0x2d0; Pop(1)

0x2ce: Stack[-2] = (int) 514840
0x2cf: Return(); Pop(0)

0x2d0: Push((int) 73)
0x2d1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2d2: IF (Stack[-1] == 0) GOTO 0x2d5; Pop(1)

0x2d3: Stack[-2] = (int) 514841
0x2d4: Return(); Pop(0)

0x2d5: Push((int) 74)
0x2d6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2d7: IF (Stack[-1] == 0) GOTO 0x2da; Pop(1)

0x2d8: Stack[-2] = (int) 518096
0x2d9: Return(); Pop(0)

0x2da: Push((int) 75)
0x2db: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2dc: IF (Stack[-1] == 0) GOTO 0x2df; Pop(1)

0x2dd: Stack[-2] = (int) 518410
0x2de: Return(); Pop(0)

0x2df: Push((int) 76)
0x2e0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2e1: IF (Stack[-1] == 0) GOTO 0x2e4; Pop(1)

0x2e2: Stack[-2] = (int) 518606
0x2e3: Return(); Pop(0)

0x2e4: Push((int) 77)
0x2e5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2e6: IF (Stack[-1] == 0) GOTO 0x2e9; Pop(1)

0x2e7: Stack[-2] = (int) 518715
0x2e8: Return(); Pop(0)

0x2e9: Push((int) 78)
0x2ea: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2eb: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x2ec: Stack[-2] = (int) 521047
0x2ed: Return(); Pop(0)

0x2ee: Push((int) 79)
0x2ef: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2f0: IF (Stack[-1] == 0) GOTO 0x2f3; Pop(1)

0x2f1: Stack[-2] = (int) 527720
0x2f2: Return(); Pop(0)

0x2f3: Push((int) 80)
0x2f4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2f5: IF (Stack[-1] == 0) GOTO 0x2f8; Pop(1)

0x2f6: Stack[-2] = (int) 529825
0x2f7: Return(); Pop(0)

0x2f8: Push((int) 81)
0x2f9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2fa: IF (Stack[-1] == 0) GOTO 0x2fd; Pop(1)

0x2fb: Stack[-2] = (int) 529835
0x2fc: Return(); Pop(0)

0x2fd: Push((int) 82)
0x2fe: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2ff: IF (Stack[-1] == 0) GOTO 0x302; Pop(1)

0x300: Stack[-2] = (int) 530493
0x301: Return(); Pop(0)

0x302: Push((int) 83)
0x303: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x304: IF (Stack[-1] == 0) GOTO 0x307; Pop(1)

0x305: Stack[-2] = (int) 531556
0x306: Return(); Pop(0)

0x307: Push((int) 84)
0x308: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x309: IF (Stack[-1] == 0) GOTO 0x30c; Pop(1)

0x30a: Stack[-2] = (int) 533304
0x30b: Return(); Pop(0)

0x30c: Push((int) 85)
0x30d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x30e: IF (Stack[-1] == 0) GOTO 0x311; Pop(1)

0x30f: Stack[-2] = (int) 539027
0x310: Return(); Pop(0)

0x311: Push((int) 86)
0x312: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x313: IF (Stack[-1] == 0) GOTO 0x316; Pop(1)

0x314: Stack[-2] = (int) 541571
0x315: Return(); Pop(0)

0x316: Push((int) 87)
0x317: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x318: IF (Stack[-1] == 0) GOTO 0x31b; Pop(1)

0x319: Stack[-2] = (int) 541581
0x31a: Return(); Pop(0)

0x31b: Push((int) 88)
0x31c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x31d: IF (Stack[-1] == 0) GOTO 0x320; Pop(1)

0x31e: Stack[-2] = (int) 543370
0x31f: Return(); Pop(0)

0x320: Push((int) 89)
0x321: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x322: IF (Stack[-1] == 0) GOTO 0x325; Pop(1)

0x323: Stack[-2] = (int) 543372
0x324: Return(); Pop(0)

0x325: Stack[-2] = (int) -1
0x326: Return(); Pop(0)

0x327: PushEmpty()
0x328: Push((int) 1)
0x329: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x32a: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x32b: Stack[-2] = "ui/NPC_Alexandr.png"
0x32c: Return(); Pop(0)

0x32d: Push((int) 2)
0x32e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x32f: IF (Stack[-1] == 0) GOTO 0x332; Pop(1)

0x330: Stack[-2] = "ui/NPC_Andrei.png"
0x331: Return(); Pop(0)

0x332: Push((int) 3)
0x333: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x334: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x335: Stack[-2] = "ui/NPC_Anna.png"
0x336: Return(); Pop(0)

0x337: Push((int) 4)
0x338: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x339: IF (Stack[-1] == 0) GOTO 0x33c; Pop(1)

0x33a: Stack[-2] = "ui/NPC_BigVlad.png"
0x33b: Return(); Pop(0)

0x33c: Push((int) 5)
0x33d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x33e: IF (Stack[-1] == 0) GOTO 0x341; Pop(1)

0x33f: Stack[-2] = "ui/NPC_Eva.png"
0x340: Return(); Pop(0)

0x341: Push((int) 6)
0x342: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x343: IF (Stack[-1] == 0) GOTO 0x346; Pop(1)

0x344: Stack[-2] = "ui/NPC_Georg.png"
0x345: Return(); Pop(0)

0x346: Push((int) 7)
0x347: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x348: IF (Stack[-1] == 0) GOTO 0x34b; Pop(1)

0x349: Stack[-2] = "ui/NPC_Grif.png"
0x34a: Return(); Pop(0)

0x34b: Push((int) 8)
0x34c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x34d: IF (Stack[-1] == 0) GOTO 0x350; Pop(1)

0x34e: Stack[-2] = "ui/NPC_Han.png"
0x34f: Return(); Pop(0)

0x350: Push((int) 9)
0x351: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x352: IF (Stack[-1] == 0) GOTO 0x355; Pop(1)

0x353: Stack[-2] = "ui/NPC_Julia.png"
0x354: Return(); Pop(0)

0x355: Push((int) 10)
0x356: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x357: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x358: Stack[-2] = "ui/NPC_Kapella.png"
0x359: Return(); Pop(0)

0x35a: Push((int) 11)
0x35b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x35c: IF (Stack[-1] == 0) GOTO 0x35f; Pop(1)

0x35d: Stack[-2] = "ui/NPC_Katerina.png"
0x35e: Return(); Pop(0)

0x35f: Push((int) 12)
0x360: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x361: IF (Stack[-1] == 0) GOTO 0x364; Pop(1)

0x362: Stack[-2] = "ui/NPC_Klara.png"
0x363: Return(); Pop(0)

0x364: Push((int) 13)
0x365: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x366: IF (Stack[-1] == 0) GOTO 0x369; Pop(1)

0x367: Stack[-2] = "ui/NPC_Lara.png"
0x368: Return(); Pop(0)

0x369: Push((int) 14)
0x36a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x36b: IF (Stack[-1] == 0) GOTO 0x36e; Pop(1)

0x36c: Stack[-2] = "ui/NPC_Laska.png"
0x36d: Return(); Pop(0)

0x36e: Push((int) 15)
0x36f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x370: IF (Stack[-1] == 0) GOTO 0x373; Pop(1)

0x371: Stack[-2] = "ui/NPC_Maria.png"
0x372: Return(); Pop(0)

0x373: Push((int) 16)
0x374: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x375: IF (Stack[-1] == 0) GOTO 0x378; Pop(1)

0x376: Stack[-2] = "ui/NPC_Mark.png"
0x377: Return(); Pop(0)

0x378: Push((int) 17)
0x379: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x37a: IF (Stack[-1] == 0) GOTO 0x37d; Pop(1)

0x37b: Stack[-2] = "ui/NPC_Mat.png"
0x37c: Return(); Pop(0)

0x37d: Push((int) 18)
0x37e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x37f: IF (Stack[-1] == 0) GOTO 0x382; Pop(1)

0x380: Stack[-2] = "ui/NPC_Mishka.png"
0x381: Return(); Pop(0)

0x382: Push((int) 19)
0x383: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x384: IF (Stack[-1] == 0) GOTO 0x387; Pop(1)

0x385: Stack[-2] = "ui/NPC_MladVlad.png"
0x386: Return(); Pop(0)

0x387: Push((int) 20)
0x388: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x389: IF (Stack[-1] == 0) GOTO 0x38c; Pop(1)

0x38a: Stack[-2] = "ui/NPC_Notkin.png"
0x38b: Return(); Pop(0)

0x38c: Push((int) 21)
0x38d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x38e: IF (Stack[-1] == 0) GOTO 0x391; Pop(1)

0x38f: Stack[-2] = "ui/NPC_Ospina.png"
0x390: Return(); Pop(0)

0x391: Push((int) 22)
0x392: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x393: IF (Stack[-1] == 0) GOTO 0x396; Pop(1)

0x394: Stack[-2] = "ui/NPC_Petr.png"
0x395: Return(); Pop(0)

0x396: Push((int) 23)
0x397: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x398: IF (Stack[-1] == 0) GOTO 0x39b; Pop(1)

0x399: Stack[-2] = "ui/NPC_Rubin.png"
0x39a: Return(); Pop(0)

0x39b: Push((int) 24)
0x39c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x39d: IF (Stack[-1] == 0) GOTO 0x3a0; Pop(1)

0x39e: Stack[-2] = "ui/NPC_Spi4ka.png"
0x39f: Return(); Pop(0)

0x3a0: Push((int) 25)
0x3a1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3a2: IF (Stack[-1] == 0) GOTO 0x3a5; Pop(1)

0x3a3: Stack[-2] = "ui/NPC_Starshina.png"
0x3a4: Return(); Pop(0)

0x3a5: Push((int) 26)
0x3a6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3a7: IF (Stack[-1] == 0) GOTO 0x3aa; Pop(1)

0x3a8: Stack[-2] = "ui/NPC_Viktor.png"
0x3a9: Return(); Pop(0)

0x3aa: Push((int) 27)
0x3ab: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3ac: IF (Stack[-1] == 0) GOTO 0x3af; Pop(1)

0x3ad: Stack[-2] = "ui/NPC_Citizen2.png"
0x3ae: Return(); Pop(0)

0x3af: Push((int) 28)
0x3b0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3b1: IF (Stack[-1] == 0) GOTO 0x3b4; Pop(1)

0x3b2: Stack[-2] = "ui/NPC_Citizen3.png"
0x3b3: Return(); Pop(0)

0x3b4: Push((int) 29)
0x3b5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3b6: IF (Stack[-1] == 0) GOTO 0x3b9; Pop(1)

0x3b7: Stack[-2] = "ui/NPC_Citizen1.png"
0x3b8: Return(); Pop(0)

0x3b9: Push((int) 30)
0x3ba: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3bb: IF (Stack[-1] == 0) GOTO 0x3be; Pop(1)

0x3bc: Stack[-2] = "ui/NPC_Citizen3.png"
0x3bd: Return(); Pop(0)

0x3be: Push((int) 31)
0x3bf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3c0: IF (Stack[-1] == 0) GOTO 0x3c3; Pop(1)

0x3c1: Stack[-2] = "ui/NPC_Citizen1.png"
0x3c2: Return(); Pop(0)

0x3c3: Push((int) 32)
0x3c4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3c5: IF (Stack[-1] == 0) GOTO 0x3c8; Pop(1)

0x3c6: Stack[-2] = "ui/NPC_Citizen3.png"
0x3c7: Return(); Pop(0)

0x3c8: Push((int) 33)
0x3c9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3ca: IF (Stack[-1] == 0) GOTO 0x3cd; Pop(1)

0x3cb: Stack[-2] = "ui/NPC_Citizen1.png"
0x3cc: Return(); Pop(0)

0x3cd: Push((int) 34)
0x3ce: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3cf: IF (Stack[-1] == 0) GOTO 0x3d2; Pop(1)

0x3d0: Stack[-2] = "ui/NPC_Citizen1.png"
0x3d1: Return(); Pop(0)

0x3d2: Push((int) 35)
0x3d3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3d4: IF (Stack[-1] == 0) GOTO 0x3d7; Pop(1)

0x3d5: Stack[-2] = "ui/NPC_Citizen3.png"
0x3d6: Return(); Pop(0)

0x3d7: Push((int) 36)
0x3d8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3d9: IF (Stack[-1] == 0) GOTO 0x3dc; Pop(1)

0x3da: Stack[-2] = "ui/NPC_Citizen2.png"
0x3db: Return(); Pop(0)

0x3dc: Push((int) 37)
0x3dd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3de: IF (Stack[-1] == 0) GOTO 0x3e1; Pop(1)

0x3df: Stack[-2] = "ui/NPC_Citizen3.png"
0x3e0: Return(); Pop(0)

0x3e1: Push((int) 38)
0x3e2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3e3: IF (Stack[-1] == 0) GOTO 0x3e6; Pop(1)

0x3e4: Stack[-2] = "ui/NPC_Citizen1.png"
0x3e5: Return(); Pop(0)

0x3e6: Push((int) 39)
0x3e7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3e8: IF (Stack[-1] == 0) GOTO 0x3eb; Pop(1)

0x3e9: Stack[-2] = "ui/NPC_Citizen3.png"
0x3ea: Return(); Pop(0)

0x3eb: Push((int) 40)
0x3ec: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3ed: IF (Stack[-1] == 0) GOTO 0x3f0; Pop(1)

0x3ee: Stack[-2] = "ui/NPC_Citizen1.png"
0x3ef: Return(); Pop(0)

0x3f0: Push((int) 42)
0x3f1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3f2: IF (Stack[-1] == 0) GOTO 0x3f5; Pop(1)

0x3f3: Stack[-2] = "ui/NPC_wmask.png"
0x3f4: Return(); Pop(0)

0x3f5: Push((int) 43)
0x3f6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3f7: IF (Stack[-1] == 0) GOTO 0x3fa; Pop(1)

0x3f8: Stack[-2] = "ui/NPC_Black.png"
0x3f9: Return(); Pop(0)

0x3fa: Push((int) 44)
0x3fb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3fc: IF (Stack[-1] == 0) GOTO 0x3ff; Pop(1)

0x3fd: Stack[-2] = "ui/NPC_bmask.png"
0x3fe: Return(); Pop(0)

0x3ff: Push((int) 46)
0x400: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x401: IF (Stack[-1] == 0) GOTO 0x404; Pop(1)

0x402: Stack[-2] = "ui/NPC_Citizen2.png"
0x403: Return(); Pop(0)

0x404: Push((int) 47)
0x405: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x406: IF (Stack[-1] == 0) GOTO 0x409; Pop(1)

0x407: Stack[-2] = "ui/NPC_Bakalavr.png"
0x408: Return(); Pop(0)

0x409: Push((int) 48)
0x40a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x40b: IF (Stack[-1] == 0) GOTO 0x40e; Pop(1)

0x40c: Stack[-2] = "ui/NPC_Citizen2.png"
0x40d: Return(); Pop(0)

0x40e: Push((int) 49)
0x40f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x410: IF (Stack[-1] == 0) GOTO 0x413; Pop(1)

0x411: Stack[-2] = "ui/NPC_Citizen3.png"
0x412: Return(); Pop(0)

0x413: Push((int) 50)
0x414: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x415: IF (Stack[-1] == 0) GOTO 0x418; Pop(1)

0x416: Stack[-2] = "ui/NPC_Citizen1.png"
0x417: Return(); Pop(0)

0x418: Push((int) 51)
0x419: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x41a: IF (Stack[-1] == 0) GOTO 0x41d; Pop(1)

0x41b: Stack[-2] = "ui/NPC_Citizen3.png"
0x41c: Return(); Pop(0)

0x41d: Push((int) 52)
0x41e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x41f: IF (Stack[-1] == 0) GOTO 0x422; Pop(1)

0x420: Stack[-2] = "ui/NPC_Citizen1.png"
0x421: Return(); Pop(0)

0x422: Push((int) 53)
0x423: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x424: IF (Stack[-1] == 0) GOTO 0x427; Pop(1)

0x425: Stack[-2] = "ui/NPC_Citizen3.png"
0x426: Return(); Pop(0)

0x427: Push((int) 54)
0x428: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x429: IF (Stack[-1] == 0) GOTO 0x42c; Pop(1)

0x42a: Stack[-2] = "ui/NPC_Citizen1.png"
0x42b: Return(); Pop(0)

0x42c: Push((int) 55)
0x42d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x42e: IF (Stack[-1] == 0) GOTO 0x431; Pop(1)

0x42f: Stack[-2] = "ui/NPC_Citizen2.png"
0x430: Return(); Pop(0)

0x431: Push((int) 56)
0x432: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x433: IF (Stack[-1] == 0) GOTO 0x436; Pop(1)

0x434: Stack[-2] = "ui/NPC_Citizen2.png"
0x435: Return(); Pop(0)

0x436: Push((int) 57)
0x437: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x438: IF (Stack[-1] == 0) GOTO 0x43b; Pop(1)

0x439: Stack[-2] = "ui/NPC_Citizen2.png"
0x43a: Return(); Pop(0)

0x43b: Push((int) 58)
0x43c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x43d: IF (Stack[-1] == 0) GOTO 0x440; Pop(1)

0x43e: Stack[-2] = "ui/NPC_Citizen3.png"
0x43f: Return(); Pop(0)

0x440: Push((int) 59)
0x441: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x442: IF (Stack[-1] == 0) GOTO 0x445; Pop(1)

0x443: Stack[-2] = "ui/NPC_Citizen2.png"
0x444: Return(); Pop(0)

0x445: Push((int) 60)
0x446: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x447: IF (Stack[-1] == 0) GOTO 0x44a; Pop(1)

0x448: Stack[-2] = "ui/NPC_Citizen1.png"
0x449: Return(); Pop(0)

0x44a: Push((int) 61)
0x44b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x44c: IF (Stack[-1] == 0) GOTO 0x44f; Pop(1)

0x44d: Stack[-2] = "ui/NPC_Citizen2.png"
0x44e: Return(); Pop(0)

0x44f: Push((int) 62)
0x450: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x451: IF (Stack[-1] == 0) GOTO 0x454; Pop(1)

0x452: Stack[-2] = "ui/NPC_Citizen3.png"
0x453: Return(); Pop(0)

0x454: Push((int) 63)
0x455: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x456: IF (Stack[-1] == 0) GOTO 0x459; Pop(1)

0x457: Stack[-2] = "ui/NPC_Citizen1.png"
0x458: Return(); Pop(0)

0x459: Push((int) 64)
0x45a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x45b: IF (Stack[-1] == 0) GOTO 0x45e; Pop(1)

0x45c: Stack[-2] = "ui/NPC_Citizen1.png"
0x45d: Return(); Pop(0)

0x45e: Push((int) 65)
0x45f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x460: IF (Stack[-1] == 0) GOTO 0x463; Pop(1)

0x461: Stack[-2] = "ui/NPC_Citizen1.png"
0x462: Return(); Pop(0)

0x463: Push((int) 66)
0x464: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x465: IF (Stack[-1] == 0) GOTO 0x468; Pop(1)

0x466: Stack[-2] = "ui/NPC_Burah.png"
0x467: Return(); Pop(0)

0x468: Push((int) 67)
0x469: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x46a: IF (Stack[-1] == 0) GOTO 0x46d; Pop(1)

0x46b: Stack[-2] = "ui/NPC_Citizen1.png"
0x46c: Return(); Pop(0)

0x46d: Push((int) 68)
0x46e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x46f: IF (Stack[-1] == 0) GOTO 0x472; Pop(1)

0x470: Stack[-2] = "ui/NPC_Citizen3.png"
0x471: Return(); Pop(0)

0x472: Push((int) 69)
0x473: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x474: IF (Stack[-1] == 0) GOTO 0x477; Pop(1)

0x475: Stack[-2] = "ui/NPC_Albinos.png"
0x476: Return(); Pop(0)

0x477: Push((int) 70)
0x478: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x479: IF (Stack[-1] == 0) GOTO 0x47c; Pop(1)

0x47a: Stack[-2] = "ui/NPC_Aglaja.png"
0x47b: Return(); Pop(0)

0x47c: Push((int) 71)
0x47d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x47e: IF (Stack[-1] == 0) GOTO 0x481; Pop(1)

0x47f: Stack[-2] = "ui/NPC_Citizen3.png"
0x480: Return(); Pop(0)

0x481: Push((int) 72)
0x482: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x483: IF (Stack[-1] == 0) GOTO 0x486; Pop(1)

0x484: Stack[-2] = "ui/NPC_Block.png"
0x485: Return(); Pop(0)

0x486: Push((int) 73)
0x487: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x488: IF (Stack[-1] == 0) GOTO 0x48b; Pop(1)

0x489: Stack[-2] = "ui/NPC_Citizen2.png"
0x48a: Return(); Pop(0)

0x48b: Push((int) 74)
0x48c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x48d: IF (Stack[-1] == 0) GOTO 0x490; Pop(1)

0x48e: Stack[-2] = "ui/NPC_Citizen2.png"
0x48f: Return(); Pop(0)

0x490: Push((int) 75)
0x491: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x492: IF (Stack[-1] == 0) GOTO 0x495; Pop(1)

0x493: Stack[-2] = "ui/NPC_Citizen1.png"
0x494: Return(); Pop(0)

0x495: Push((int) 76)
0x496: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x497: IF (Stack[-1] == 0) GOTO 0x49a; Pop(1)

0x498: Stack[-2] = "ui/NPC_Citizen2.png"
0x499: Return(); Pop(0)

0x49a: Push((int) 77)
0x49b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x49c: IF (Stack[-1] == 0) GOTO 0x49f; Pop(1)

0x49d: Stack[-2] = "ui/NPC_Prophet.png"
0x49e: Return(); Pop(0)

0x49f: Push((int) 78)
0x4a0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4a1: IF (Stack[-1] == 0) GOTO 0x4a4; Pop(1)

0x4a2: Stack[-2] = "ui/NPC_Citizen2.png"
0x4a3: Return(); Pop(0)

0x4a4: Push((int) 79)
0x4a5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4a6: IF (Stack[-1] == 0) GOTO 0x4a9; Pop(1)

0x4a7: Stack[-2] = "ui/NPC_Citizen1.png"
0x4a8: Return(); Pop(0)

0x4a9: Push((int) 80)
0x4aa: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4ab: IF (Stack[-1] == 0) GOTO 0x4ae; Pop(1)

0x4ac: Stack[-2] = "ui/NPC_Citizen1.png"
0x4ad: Return(); Pop(0)

0x4ae: Push((int) 81)
0x4af: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4b0: IF (Stack[-1] == 0) GOTO 0x4b3; Pop(1)

0x4b1: Stack[-2] = "ui/NPC_Citizen2.png"
0x4b2: Return(); Pop(0)

0x4b3: Push((int) 82)
0x4b4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4b5: IF (Stack[-1] == 0) GOTO 0x4b8; Pop(1)

0x4b6: Stack[-2] = "ui/NPC_Citizen3.png"
0x4b7: Return(); Pop(0)

0x4b8: Push((int) 83)
0x4b9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4ba: IF (Stack[-1] == 0) GOTO 0x4bd; Pop(1)

0x4bb: Stack[-2] = "ui/NPC_Citizen1.png"
0x4bc: Return(); Pop(0)

0x4bd: Push((int) 84)
0x4be: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4bf: IF (Stack[-1] == 0) GOTO 0x4c2; Pop(1)

0x4c0: Stack[-2] = "ui/NPC_Citizen1.png"
0x4c1: Return(); Pop(0)

0x4c2: Push((int) 85)
0x4c3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4c4: IF (Stack[-1] == 0) GOTO 0x4c7; Pop(1)

0x4c5: Stack[-2] = "ui/NPC_Petr.png"
0x4c6: Return(); Pop(0)

0x4c7: Push((int) 86)
0x4c8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4c9: IF (Stack[-1] == 0) GOTO 0x4cc; Pop(1)

0x4ca: Stack[-2] = "ui/NPC_Citizen1.png"
0x4cb: Return(); Pop(0)

0x4cc: Push((int) 87)
0x4cd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4ce: IF (Stack[-1] == 0) GOTO 0x4d1; Pop(1)

0x4cf: Stack[-2] = "ui/NPC_Citizen3.png"
0x4d0: Return(); Pop(0)

0x4d1: Push((int) 88)
0x4d2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4d3: IF (Stack[-1] == 0) GOTO 0x4d6; Pop(1)

0x4d4: Stack[-2] = "ui/NPC_Citizen2.png"
0x4d5: Return(); Pop(0)

0x4d6: Push((int) 89)
0x4d7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4d8: IF (Stack[-1] == 0) GOTO 0x4db; Pop(1)

0x4d9: Stack[-2] = "ui/NPC_Citizen1.png"
0x4da: Return(); Pop(0)

0x4db: Stack[-2] = ""
0x4dc: Return(); Pop(0)

0x4dd: PushEmpty()
0x4de: Push((int) 18)
0x4df: @@ add(Stack[-1])
0x4e0: Pop(1)
0x4e1: Push((int) 24)
0x4e2: @@ add(Stack[-1])
0x4e3: Pop(1)
0x4e4: Push((int) 20)
0x4e5: @@ add(Stack[-1])
0x4e6: Pop(1)
0x4e7: Push((int) 14)
0x4e8: @@ add(Stack[-1])
0x4e9: Pop(1)
0x4ea: Push((bool) 0)
0x4eb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4ec: IF (Stack[-1] == 0) GOTO 0x4f7; Pop(1)

0x4ed: Push((int) 10)
0x4ee: @@ add(Stack[-1])
0x4ef: Pop(1)
0x4f0: Push((int) 17)
0x4f1: @@ add(Stack[-1])
0x4f2: Pop(1)
0x4f3: Push((int) 8)
0x4f4: @@ add(Stack[-1])
0x4f5: Pop(1)
0x4f6: GOTO 0x4fd

0x4f7: Push((int) 1)
0x4f8: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x4f9: IF (Stack[-1] == 0) GOTO 0x4fd; Pop(1)

0x4fa: Push((int) 10)
0x4fb: @@ add(Stack[-1])
0x4fc: Pop(1)
0x4fd: Return(); Pop(0)

0x4fe: PushEmpty()
0x4ff: Push((int) 6)
0x500: @@ add(Stack[-1])
0x501: Pop(1)
0x502: Push((int) 26)
0x503: @@ add(Stack[-1])
0x504: Pop(1)
0x505: Push((int) 2)
0x506: @@ add(Stack[-1])
0x507: Pop(1)
0x508: Push((int) 22)
0x509: @@ add(Stack[-1])
0x50a: Pop(1)
0x50b: Push((bool) 0)
0x50c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x50d: IF (Stack[-1] == 0) GOTO 0x518; Pop(1)

0x50e: Push((int) 15)
0x50f: @@ add(Stack[-1])
0x510: Pop(1)
0x511: Push((int) 5)
0x512: @@ add(Stack[-1])
0x513: Pop(1)
0x514: Push((int) 16)
0x515: @@ add(Stack[-1])
0x516: Pop(1)
0x517: GOTO 0x51e

0x518: Push((int) 0)
0x519: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x51a: IF (Stack[-1] == 0) GOTO 0x51e; Pop(1)

0x51b: Push((int) 15)
0x51c: @@ add(Stack[-1])
0x51d: Pop(1)
0x51e: Return(); Pop(0)

0x51f: PushEmpty()
0x520: Push((int) 7)
0x521: @@ add(Stack[-1])
0x522: Pop(1)
0x523: Push((int) 23)
0x524: @@ add(Stack[-1])
0x525: Pop(1)
0x526: Push((int) 21)
0x527: @@ add(Stack[-1])
0x528: Pop(1)
0x529: Push((int) 9)
0x52a: @@ add(Stack[-1])
0x52b: Pop(1)
0x52c: Push((int) 3)
0x52d: @@ add(Stack[-1])
0x52e: Pop(1)
0x52f: Push((int) 1)
0x530: @@ add(Stack[-1])
0x531: Pop(1)
0x532: Push((int) 11)
0x533: @@ add(Stack[-1])
0x534: Pop(1)
0x535: Push((int) 13)
0x536: @@ add(Stack[-1])
0x537: Pop(1)
0x538: Push((bool) 0)
0x539: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x53a: IF (Stack[-1] == 0) GOTO 0x53e; Pop(1)

0x53b: Push((int) 25)
0x53c: @@ add(Stack[-1])
0x53d: Pop(1)
0x53e: Return(); Pop(0)

0x53f: PushEmpty(int, int)
0x540: Push("vol_")
0x541: Pop(1); Push(Stack[-1] + Stack[-4]);
0x542: @ GetVariable(Stack[-1], Stack[-2])
0x543: Pop(1)
0x544: Push((int) 4)
0x545: Pop(1); Push(Stack[-2] & Stack[-1]);
0x546: Push((int) 0)
0x547: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0x548: Return(); Pop(2)

0x549: PushEmpty(int, int)
0x54a: Push("vol_")
0x54b: Pop(1); Push(Stack[-1] + Stack[-4]);
0x54c: @ GetVariable(Stack[-1], Stack[-2])
0x54d: Pop(1)
0x54e: Push((int) 2)
0x54f: Pop(1); Push(Stack[-2] & Stack[-1]);
0x550: Push((int) 0)
0x551: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0x552: Return(); Pop(2)

0x553: PushEmpty(int, int)
0x554: Push("vol_")
0x555: Pop(1); Push(Stack[-1] + Stack[-4]);
0x556: @ GetVariable(Stack[-1], Stack[-2])
0x557: Pop(1)
0x558: Push((int) 8)
0x559: Pop(1); Push(Stack[-2] & Stack[-1]);
0x55a: Push((int) 0)
0x55b: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0x55c: Return(); Pop(2)

0x55d: PushEmpty(int, int)
0x55e: Push("branch")
0x55f: @ GetVariable(Stack[-1], Stack[-2])
0x560: Pop(1)
0x561: Stack[-3] = Stack[-1]
0x562: Return(); Pop(2)

