GlobalVarCount = 0

Strings:
	W:Neutral
	W:all
	W:idle
	W:tr_salesman_kabak
	W:Updating salesman
	W:player
	W:head
	A:GetPosition
	A:GetEyesHeight
	A:AddItem
	W:coffee
	W:tvirin
	W:silver_ring
	W:gold_ring
	W:bracelet
	W:watch
	W:beads
	W:ear_ring
	W:flower
	W:hook
	W:morfin
// @pool_raw:4e00650075007400720061006c00000061006c006c000000690064006c0065000000740072005f00730061006c00650073006d0061006e005f006b006100620061006b0000005500700064006100740069006e0067002000730061006c00650073006d0061006e00000070006c006100790065007200000068006500610064000000476574506f736974696f6e0047657445796573486569676874004164644974656d0063006f0066006600650065000000740076006900720069006e000000730069006c007600650072005f00720069006e006700000067006f006c0064005f00720069006e0067000000620072006100630065006c006500740000007700610074006300680000006200650061006400730000006500610072005f00720069006e006700000066006c006f00770065007200000068006f006f006b0000006d006f007200660069006e000000

Import:
	DoTrade (0 args)
	lshWaitForAnimEnd (0 args)
	WaitForAnimEnd (0 args)
	PlayAnimation (2 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	StopTrade (0 args)
	Hold (0 args)
	StopGroup0 (0 args)
	GetVariable (2 args)
	Trace (1 args)
	SetVariable (2 args)
	ClearSubContainer (1 args)
	FindActor (2 args)
	SetTimer (2 args)
	KillTimer (1 args)
	UnlookAsync (1 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	rand (2 args)
	Sleep (2 args)
	ResetAAS (0 args)
	GetPosition (1 args)
	IsLoaded (1 args)
	GetEyesHeight (1 args)
	IsOverrideActive (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	Rotate (2 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	LookAsync (3 args)
	self (1 args)
	GetGameTime (1 args)
	HasAnimation (3 args)

RunOp = 0x28
RunTask = 1

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 1
		EVENT_11 Op = 0x1a Vars = (int)
	GTASK_1 Vars = (int, int, bool, bool, object, bool, bool, bool, bool, bool, float) Params = 0
		EVENT_6 Op = 0x38 Vars = ()
		EVENT_5 Op = 0x3e Vars = ()
		EVENT_0 Op = 0x41 Vars = (object)
		EVENT_7 Op = 0xa4 Vars = (int)


0x0: PushEmpty()
0x1: @ DoTrade()
0x2: Pop(0)
0x3: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x4: PushEmpty(bool)
0x5: Call2 0x211

0x6: Pop(0)
0x7: IF (Stack[-1] == 0) GOTO 0xf; Pop(1)

0x8: PushEmpty(string)
0x9: Stack[-1] = "Neutral" // @poff=0
0xa: Call2 0x167

0xb: Pop(1)
0xc: @ lshWaitForAnimEnd()
0xd: Pop(0)
0xe: GOTO 0x15

0xf: @ WaitForAnimEnd()
0x10: Pop(0)
0x11: Push("all") // @poff=16
0x12: Push("idle") // @poff=24
0x13: @ PlayAnimation(Stack[-2], Stack[-1])
0x14: Pop(2)
0x15: Push( Stack[0 + Tasks[-1].StackPointer] )
0x16: IF (Stack[-1] == 0) GOTO 0x18; Pop(1)

0x17: Return(); Pop(0)

0x18: GOTO 0x4

0x19: Return(); Pop(0)

0x1a: PushEmpty()
0x1b: PushEmpty(bool)
0x1c: Call2 0x211

0x1d: Pop(0)
0x1e: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x1f: @ lshStopAnimation()
0x20: Pop(0)
0x21: GOTO 0x24

0x22: @ StopAnimation()
0x23: Pop(0)
0x24: @ StopTrade()
0x25: Pop(0)
0x26: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x27: Return(); Pop(0)

0x28: PushEmpty(bool)
0x29: Call2 0x127

0x2a: Pop(0)
0x2b: Pop(1); Push((bool) Stack[-1] == 0)
0x2c: IF (Stack[-1] == 0) GOTO 0x2f; Pop(1)

0x2d: @ Hold()
0x2e: Pop(0)
0x2f: Push((bool) 1)
0x30: IF (Stack[-1] == 0) GOTO 0x37; Pop(1)

0x31: PushEmpty(float, float)
0x32: Stack[-2] = (int) 300
0x33: Stack[-1] = (int) 100
0x34: Call2 0x7a

0x35: Pop(2)
0x36: GOTO 0x2f

0x37: Return(); Pop(0)

0x38: PushEmpty()
0x39: Call2 0xbb

0x3a: Pop(0)
0x3b: @ Hold()
0x3c: Pop(0)
0x3d: Return(); Pop(0)

0x3e: @ StopGroup0()
0x3f: Pop(0)
0x40: Return(); Pop(0)

0x41: PushEmpty(int, int)
0x42: Push("tr_salesman_kabak") // @poff=34
0x43: @ GetVariable(Stack[-1], Stack[-2])
0x44: Pop(1)
0x45: PushEmpty(int)
0x46: Call2 0x19e

0x47: Pop(0)
0x48: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x49: IF (Stack[-1] == 0) GOTO 0x56; Pop(1)

0x4a: Push("Updating salesman") // @poff=70
0x4b: @ Trace(Stack[-1])
0x4c: Pop(1)
0x4d: Push("tr_salesman_kabak") // @poff=34
0x4e: PushEmpty(int)
0x4f: Call2 0x19e

0x50: Pop(0)
0x51: @ SetVariable(Stack[-2], Stack[-1])
0x52: Pop(2)
0x53: PushEmpty()
0x54: Call2 0x66

0x55: Pop(0)
0x56: PushEmpty(bool, object)
0x57: Stack[-5] = Stack[-1]
0x58: Call2 0x12c

0x59: Pop(1)
0x5a: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x5b: PushEmpty(object)
0x5c: Stack[-4] = Stack[-1]
0x5d: Push(-1, 1); TaskCall(0)
0x5e: Call2 0x0

0x5f: Pop(-1, 1); TaskReturn
0x60: Pop(1)
0x61: PushEmpty(object)
0x62: Stack[-4] = Stack[-1]
0x63: Call2 0x163

0x64: Pop(1)
0x65: Return(); Pop(2)

0x66: PushEmpty(int, int)
0x67: PushEmpty(int)
0x68: Call2 0x19e

0x69: Stack[-1] = Stack[-2]
0x6a: Pop(1)
0x6b: Push((int) 0)
0x6c: @ ClearSubContainer(Stack[-1])
0x6d: Pop(1)
0x6e: PushEmpty(bool, object, int)
0x6f: PushEmpty(object)
0x70: Call2 0x193

0x71: Stack[-1] = Stack[-3]
0x72: Pop(1)
0x73: PushEmpty(int)
0x74: Call2 0x19e

0x75: Stack[-1] = Stack[-2]
0x76: Pop(1)
0x77: Call2 0x1a7

0x78: Pop(3)
0x79: Return(); Pop(2)

0x7a: PushEmpty()
0x7b: PushEmpty(bool)
0x7c: Call2 0x127

0x7d: Pop(0)
0x7e: Pop(1); Push((bool) Stack[-1] == 0)
0x7f: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x80: Return(); Pop(0)

0x81: Push("player") // @poff=106
0x82: @ FindActor(Stack[-4]T, Stack[-1])
0x83: Pop(1)
0x84: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x85: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x86: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x87: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x88: Push((int) 10)
0x89: Push((float)1.0)
0x8a: @ SetTimer(Stack[-2], Stack[-1])
0x8b: Pop(2)
0x8c: PushEmpty()
0x8d: Call2 0xc9

0x8e: Pop(0)
0x8f: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x90: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x91: Push((int) 10)
0x92: @ KillTimer(Stack[-1])
0x93: Pop(1)
0x94: Return(); Pop(0)

0x95: PushEmpty(float, float)
0x96: Pop(0); PushNull((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x97: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x98: Stack[-3] = (bool) 0
0x99: Return(); Pop(2)

0x9a: PushEmpty(float, object)
0x9b: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x9c: Call2 0x11f

0x9d: Pop(1)
0x9e: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x9f: Push( Stack[2 + Tasks[-1].StackPointer] )
0xa0: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0xa1: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0xa2: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0xa3: Return(); Pop(2)

0xa4: PushEmpty()
0xa5: Push((int) 10)
0xa6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa7: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xa8: PushEmpty(bool)
0xa9: Call2 0x95

0xaa: Pop(0)
0xab: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xac: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xad: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xae: PushEmpty(object)
0xaf: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0xb0: Call2 0x16e

0xb1: Pop(1)
0xb2: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xb3: GOTO 0xba

0xb4: Push( Stack[2 + Tasks[-1].StackPointer] )
0xb5: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb6: Push("head") // @poff=120
0xb7: @ UnlookAsync(Stack[-1])
0xb8: Pop(1)
0xb9: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xba: Return(); Pop(0)

0xbb: PushEmpty()
0xbc: Call2 0x11a

0xbd: Pop(0)
0xbe: Push((int) 10)
0xbf: @ KillTimer(Stack[-1])
0xc0: Pop(1)
0xc1: Push( Stack[2 + Tasks[-1].StackPointer] )
0xc2: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xc3: Push("head") // @poff=120
0xc4: @ UnlookAsync(Stack[-1])
0xc5: Pop(1)
0xc6: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xc7: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xc8: Return(); Pop(0)

0xc9: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0xca: @ WaitForAnimEnd()
0xcb: Pop(0)
0xcc: PushEmpty(bool)
0xcd: Call2 0x127

0xce: Pop(0)
0xcf: Pop(1); Push((bool) Stack[-1] == 0)
0xd0: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xd1: Return(); Pop(14)

0xd2: PushEmpty(int)
0xd3: Call2 0x200

0xd4: Stack[-1] = Stack[-8]
0xd5: Pop(1)
0xd6: Stack[-6] = (int) 0
0xd7: PushEmpty(bool)
0xd8: Stack[-1] = (bool) 0
0xd9: Push((int) 5)
0xda: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0xdb: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xdc: PushEmpty(bool)
0xdd: Call2 0x127

0xde: Pop(0)
0xdf: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xe0: Stack[-1] = (bool) 1
0xe1: IF (Stack[-1] == 0) GOTO 0x115; Pop(1)

0xe2: Push((int) 3)
0xe3: @ irand(Stack[-6], Stack[-1])
0xe4: Pop(1)
0xe5: Push((int) 0)
0xe6: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xe7: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xe8: Push(Stack[-7])
0xe9: IF (Stack[-1] == 0) GOTO 0xf8; Pop(1)

0xea: @ irand(Stack[-4], Stack[-7])
0xeb: Pop(0)
0xec: Push("all") // @poff=16
0xed: PushEmpty(string, int)
0xee: Stack[-7] = Stack[-1]
0xef: Call2 0x1f9

0xf0: Pop(1)
0xf1: @ PlayAnimation(Stack[-2], Stack[-1])
0xf2: Pop(2)
0xf3: @ WaitForAnimEnd(Stack[-3])
0xf4: Pop(0)
0xf5: Pop(0); Push((bool) Stack[-3] == 0)
0xf6: IF (Stack[-1] == 0) GOTO 0xf8; Pop(1)

0xf7: GOTO 0x115

0xf8: GOTO 0x10a

0xf9: Push((int) 1)
0xfa: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xfb: IF (Stack[-1] == 0) GOTO 0x107; Pop(1)

0xfc: Push((int) 4)
0xfd: @ rand(Stack[-3], Stack[-1])
0xfe: Pop(1)
0xff: Push((int) 1)
0x100: Pop(1); Push(Stack[-3] + Stack[-1]);
0x101: @ Sleep(Stack[-1], Stack[-2])
0x102: Pop(1)
0x103: Pop(0); Push((bool) Stack[-1] == 0)
0x104: IF (Stack[-1] == 0) GOTO 0x106; Pop(1)

0x105: GOTO 0x115

0x106: GOTO 0x10a

0x107: Push(Stack[-6])
0x108: IF (Stack[-1] == 0) GOTO 0x10a; Pop(1)

0x109: GOTO 0x115

0x10a: PushEmpty(bool)
0x10b: Call2 0x118

0x10c: Pop(0)
0x10d: Pop(1); Push((bool) Stack[-1] == 0)
0x10e: IF (Stack[-1] == 0) GOTO 0x110; Pop(1)

0x10f: GOTO 0x115

0x110: @ ResetAAS()
0x111: Pop(0)
0x112: Push((int) 1)
0x113: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x114: GOTO 0xd7

0x115: @ ResetAAS()
0x116: Pop(0)
0x117: Return(); Pop(14)

0x118: Stack[-1] = (bool) 1
0x119: Return(); Pop(0)

0x11a: @ StopAnimation()
0x11b: Pop(0)
0x11c: @ StopGroup0()
0x11d: Pop(0)
0x11e: Return(); Pop(0)

0x11f: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x120: @ GetPosition(Stack[-3])
0x121: Pop(0)
0x122: @@ GetPosition(Stack[-2]); Obj=7 // @poff=130
0x123: Pop(0)
0x124: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x125: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x126: Return(); Pop(6)

0x127: PushEmpty(bool, bool)
0x128: @ IsLoaded(Stack[-1])
0x129: Pop(0)
0x12a: Stack[-1] = Stack[-3]
0x12b: Return(); Pop(2)

0x12c: PushEmpty()
0x12d: PushEmpty(bool, object, float)
0x12e: Stack[-4] = Stack[-2]
0x12f: Stack[-1] = (int) 70
0x130: Call2 0x134

0x131: Stack[-3] = Stack[-5]
0x132: Pop(3)
0x133: Return(); Pop(0)

0x134: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x135: @@ GetPosition(Stack[-7]); Obj=18 // @poff=130
0x136: Pop(0)
0x137: @@ GetEyesHeight(Stack[-8]); Obj=18 // @poff=142
0x138: Pop(0)
0x139: Push(CvectorIndex(Stack[-7], 1))
0x13a: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x13b: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x13c: @ GetPosition(Stack[-6])
0x13d: Pop(0)
0x13e: @ GetEyesHeight(Stack[-8])
0x13f: Pop(0)
0x140: Push(CvectorIndex(Stack[-6], 1))
0x141: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x142: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x143: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x144: Push(CvectorIndex(Stack[-5], 1))
0x145: Stack[-1] = (int) 0
0x146: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x147: Pop(0); Push(Stack[-5] | Stack[-5]);
0x148: Pop(1); Push(Sqrt(Stack[-1]))
0x149: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x14a: Stack[-4] = -Stack[-5]; Pop(0);
0x14b: Pop(0); Push(Stack[-5] * Stack[-17]);
0x14c: Push([0.0, 10.0, 0.0])
0x14d: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x14e: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x14f: @ IsOverrideActive(Stack[-1])
0x150: Pop(0)
0x151: Push(Stack[-1])
0x152: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0x153: Stack[-19] = (bool) 0
0x154: Return(); Pop(16)

0x155: @ StopWorld()
0x156: Pop(0)
0x157: @ CameraTransit(Stack[-2], Stack[-4])
0x158: Pop(0)
0x159: Push(CvectorIndex(Stack[-3], 0))
0x15a: Push(CvectorIndex(Stack[-4], 2))
0x15b: @ Rotate(Stack[-2], Stack[-1])
0x15c: Pop(2)
0x15d: @ CameraWaitForPlayFinish()
0x15e: Pop(0)
0x15f: @ ResumeWorld()
0x160: Pop(0)
0x161: Stack[-19] = (bool) 1
0x162: Return(); Pop(16)

0x163: PushEmpty()
0x164: @ CameraSwitchToNormal()
0x165: Pop(0)
0x166: Return(); Pop(0)

0x167: PushEmpty(float, float, float, float)
0x168: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x169: Pop(0)
0x16a: Push((bool) 0)
0x16b: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x16c: Pop(1)
0x16d: Return(); Pop(4)

0x16e: PushEmpty(float, cvector, float, cvector)
0x16f: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=142
0x170: Pop(0)
0x171: Stack[-1] = [0.0, 0.0, 0.0]
0x172: Push(CvectorIndex(Stack[-1], 1))
0x173: Stack[-3] = Stack[-1]
0x174: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x175: Push("head") // @poff=120
0x176: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x177: Pop(1)
0x178: Return(); Pop(4)

0x179: PushEmpty(bool, bool)
0x17a: PushEmpty(bool, int, int)
0x17b: Stack[-7] = Stack[-2]
0x17c: Stack[-6] = Stack[-1]
0x17d: Call2 0x199

0x17e: Pop(2)
0x17f: IF (Stack[-1] == 0) GOTO 0x183; Pop(1)

0x180: Push((int) 0)
0x181: @@ AddItem(Stack[-2], Stack[-6], Stack[-1]); Obj=7 // @poff=156
0x182: Pop(1)
0x183: Return(); Pop(2)

0x184: PushEmpty(int, bool, int, bool)
0x185: PushEmpty(bool, int, int)
0x186: Stack[-10] = Stack[-2]
0x187: Stack[-9] = Stack[-1]
0x188: Call2 0x199

0x189: Pop(2)
0x18a: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x18b: @ irand(Stack[-2], Stack[-5])
0x18c: Pop(0)
0x18d: Push((int) 0)
0x18e: Push((int) 1)
0x18f: Pop(1); Push(Stack[-7] + Stack[-1]);
0x190: @@ AddItem(Stack[-3], Stack[-10], Stack[-2], Stack[-1]); Obj=11 // @poff=156
0x191: Pop(2)
0x192: Return(); Pop(4)

0x193: PushEmpty(object, object)
0x194: @ self(Stack[-1])
0x195: Pop(0)
0x196: Stack[-1] = Stack[-3]
0x197: Return(); Pop(2)

0x198: Stack[-1] = 0
0x199: PushEmpty(int, int)
0x19a: @ irand(Stack[-1], Stack[-3])
0x19b: Pop(0)
0x19c: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0x19d: Return(); Pop(2)

0x19e: PushEmpty(float, float)
0x19f: @ GetGameTime(Stack[-1])
0x1a0: Pop(0)
0x1a1: Push((int) 1)
0x1a2: PushEmpty(int)
0x1a3: Push((int) 24)
0x1a4: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x1a5: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x1a6: Return(); Pop(2)

0x1a7: PushEmpty()
0x1a8: PushEmpty(object, string, int, int, int)
0x1a9: Stack[-7] = Stack[-5]
0x1aa: Stack[-4] = "coffee" // @poff=164
0x1ab: Stack[-3] = (int) 1
0x1ac: Stack[-2] = (int) 1
0x1ad: Stack[-1] = (int) 2
0x1ae: Call2 0x184

0x1af: Pop(5)
0x1b0: PushEmpty(object, string, int, int, int)
0x1b1: Stack[-7] = Stack[-5]
0x1b2: Stack[-4] = "tvirin" // @poff=178
0x1b3: Stack[-3] = (int) 1
0x1b4: Stack[-2] = (int) 1
0x1b5: Stack[-1] = (int) 2
0x1b6: Call2 0x184

0x1b7: Pop(5)
0x1b8: PushEmpty(object, string, int, int)
0x1b9: Stack[-6] = Stack[-4]
0x1ba: Stack[-3] = "silver_ring" // @poff=192
0x1bb: Stack[-2] = (int) 1
0x1bc: Stack[-1] = (int) 2
0x1bd: Call2 0x179

0x1be: Pop(4)
0x1bf: PushEmpty(object, string, int, int)
0x1c0: Stack[-6] = Stack[-4]
0x1c1: Stack[-3] = "gold_ring" // @poff=216
0x1c2: Stack[-2] = (int) 1
0x1c3: Stack[-1] = (int) 2
0x1c4: Call2 0x179

0x1c5: Pop(4)
0x1c6: PushEmpty(object, string, int, int)
0x1c7: Stack[-6] = Stack[-4]
0x1c8: Stack[-3] = "bracelet" // @poff=236
0x1c9: Stack[-2] = (int) 1
0x1ca: Stack[-1] = (int) 2
0x1cb: Call2 0x179

0x1cc: Pop(4)
0x1cd: PushEmpty(object, string, int, int)
0x1ce: Stack[-6] = Stack[-4]
0x1cf: Stack[-3] = "watch" // @poff=254
0x1d0: Stack[-2] = (int) 1
0x1d1: Stack[-1] = (int) 2
0x1d2: Call2 0x179

0x1d3: Pop(4)
0x1d4: PushEmpty(object, string, int, int)
0x1d5: Stack[-6] = Stack[-4]
0x1d6: Stack[-3] = "beads" // @poff=266
0x1d7: Stack[-2] = (int) 1
0x1d8: Stack[-1] = (int) 2
0x1d9: Call2 0x179

0x1da: Pop(4)
0x1db: PushEmpty(object, string, int, int)
0x1dc: Stack[-6] = Stack[-4]
0x1dd: Stack[-3] = "ear_ring" // @poff=278
0x1de: Stack[-2] = (int) 1
0x1df: Stack[-1] = (int) 2
0x1e0: Call2 0x179

0x1e1: Pop(4)
0x1e2: PushEmpty(object, string, int, int)
0x1e3: Stack[-6] = Stack[-4]
0x1e4: Stack[-3] = "flower" // @poff=296
0x1e5: Stack[-2] = (int) 1
0x1e6: Stack[-1] = (int) 2
0x1e7: Call2 0x179

0x1e8: Pop(4)
0x1e9: PushEmpty(object, string, int, int)
0x1ea: Stack[-6] = Stack[-4]
0x1eb: Stack[-3] = "hook" // @poff=310
0x1ec: Stack[-2] = (int) 1
0x1ed: Stack[-1] = (int) 4
0x1ee: Call2 0x179

0x1ef: Pop(4)
0x1f0: PushEmpty(object, string, int, int)
0x1f1: Stack[-6] = Stack[-4]
0x1f2: Stack[-3] = "morfin" // @poff=320
0x1f3: Stack[-2] = (int) 1
0x1f4: Stack[-1] = (int) 4
0x1f5: Call2 0x179

0x1f6: Pop(4)
0x1f7: Stack[-3] = (bool) 1
0x1f8: Return(); Pop(0)

0x1f9: PushEmpty(string, string)
0x1fa: Stack[-1] = "idle" // @poff=24
0x1fb: Push(Stack[-3])
0x1fc: IF (Stack[-1] == 0) GOTO 0x1fe; Pop(1)

0x1fd: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x1fe: Stack[-1] = Stack[-4]
0x1ff: Return(); Pop(2)

0x200: PushEmpty(int, bool, int, bool)
0x201: Stack[-2] = (int) 0
0x202: Push("all") // @poff=16
0x203: PushEmpty(string, int)
0x204: Stack[-5] = Stack[-1]
0x205: Call2 0x1f9

0x206: Pop(1)
0x207: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x208: Pop(2)
0x209: Pop(0); Push((bool) Stack[-1] == 0)
0x20a: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x20b: GOTO 0x20f

0x20c: Push((int) 1)
0x20d: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x20e: GOTO 0x202

0x20f: Stack[-2] = Stack[-5]
0x210: Return(); Pop(4)

0x211: Stack[-1] = (bool) 0
0x212: Return(); Pop(0)

