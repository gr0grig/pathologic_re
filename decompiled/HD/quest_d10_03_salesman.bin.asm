GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	SetNPCName
	SetNPCDescription
	SetPhoto
	SetPhoto2
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	Neutral
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	cleanup
	player
	head
	GetPosition
	GetEyesHeight
	Can't find lsh animation : 
	ood10Salesman1
	d10q03
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	branch
	ui/NPC_Citizen3.png
	ui/NPC_Citizen3_b.png

Import:
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	sync (0 args)
	StopDialog (1 args)
	lshWaitForAnimEnd (0 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	rand (2 args)
	Sleep (2 args)
	RemoveActor (1 args)
	FindActor (2 args)
	SetTimer (2 args)
	KillTimer (1 args)
	UnlookAsync (1 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	ResetAAS (0 args)
	StopGroup0 (0 args)
	GetPosition (1 args)
	IsLoaded (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (3 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (1 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	LookAsync (3 args)
	lshStopSpeech (0 args)
	self (1 args)
	GetVariable (2 args)
	HasAnimation (3 args)
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x131
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb8 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool, bool) Params = 0
		EVENT_0 Op = 0x137 Vars = (object)
		EVENT_26 Op = 0x168 Vars = (string)
		EVENT_6 Op = 0x170 Vars = ()
		EVENT_7 Op = 0x1b1 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x239

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x352

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x350

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x354

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x356

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x33f

0x23: Pop(0)
0x24: @@ SetPlayerName(Stack[-1])
0x25: Pop(1)
0x26: Stack[-2] = (int) -1
0x27: @ IsOverrideActive(Stack[-3])
0x28: Pop(0)
0x29: Push(Stack[-3])
0x2a: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x2b: Stack[-10] = (int) -2
0x2c: Return(); Pop(8)

0x2d: @ DoDialog(Stack[-4])
0x2e: Pop(0)
0x2f: PushEmpty(object, object)
0x30: Stack[-2] = Stack[-11]
0x31: Stack[-1] = Stack[-6]
0x32: Push(-2, 4); TaskCall(1)
0x33: Call2 0x4a

0x34: Pop(-2, 4); TaskReturn
0x35: Pop(2)
0x36: @@ IsDialogEnd(Stack[-1])
0x37: Pop(0)
0x38: Pop(0); Push((bool) Stack[-1] == 0)
0x39: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3a: @ sync()
0x3b: Pop(0)
0x3c: @@ IsDialogEnd(Stack[-1])
0x3d: Pop(0)
0x3e: GOTO 0x38

0x3f: PushEmpty(object)
0x40: Stack[-1] = Stack[-10]
0x41: Call2 0x27e

0x42: Pop(1)
0x43: @ StopDialog(Stack[-4])
0x44: Pop(0)
0x45: @@ GetReturnValue(Stack[-2])
0x46: Pop(0)
0x47: Stack[-10] = Stack[-2]
0x48: Return(); Pop(8)

0x49: Stack[-4] = 0
0x4a: PushEmpty()
0x4b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x4d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4e: Push((int) 1)
0x4f: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x2fd

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x55: PushEmpty(object, object)
0x56: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x57: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58: Call2 0x2ee

0x59: Pop(2)
0x5a: PushEmpty(string)
0x5b: Stack[-1] = "Neutral"
0x5c: Call2 0xa2

0x5d: Pop(1)
0x5e: Push((int) 534142)
0x5f: @@ SetMessage(Stack[-1])
0x60: Pop(1)
0x61: @@ ClearReplies()
0x62: Pop(0)
0x63: Push((int) 534435)
0x64: Push((int) 36067)
0x65: Push((int) 36066)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: Push((int) 534437)
0x69: Push((int) 36067)
0x6a: Push((int) 36068)
0x6b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c: Pop(3)
0x6d: GOTO 0x84

0x6e: PushEmpty(string)
0x6f: Stack[-1] = "Neutral"
0x70: Call2 0xa2

0x71: Pop(1)
0x72: Push((int) 534144)
0x73: @@ SetMessage(Stack[-1])
0x74: Pop(1)
0x75: @@ ClearReplies()
0x76: Pop(0)
0x77: Push((int) 534145)
0x78: Push((int) -1)
0x79: Push((int) 35732)
0x7a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b: Pop(3)
0x7c: Push((int) 534443)
0x7d: Push((int) -1)
0x7e: Push((int) 36076)
0x7f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x80: Pop(3)
0x81: GOTO 0x84

0x82: Return(); Pop(0)

0x83: GOTO 0x4e

0x84: PushEmpty(bool)
0x85: Call2 0x358

0x86: Pop(0)
0x87: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x88: @ lshWaitForAnimEnd()
0x89: Pop(0)
0x8a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8b: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x8c: GOTO 0x92

0x8d: PushEmpty(string)
0x8e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8f: Call2 0x290

0x90: Pop(1)
0x91: GOTO 0x88

0x92: GOTO 0xa1

0x93: Push("all")
0x94: Push("idle")
0x95: @ PlayAnimation(Stack[-2], Stack[-1])
0x96: Pop(2)
0x97: @ WaitForAnimEnd()
0x98: Pop(0)
0x99: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9a: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x9b: GOTO 0xa1

0x9c: Push("all")
0x9d: Push("idle")
0x9e: @ PlayAnimation(Stack[-2], Stack[-1])
0x9f: Pop(2)
0xa0: GOTO 0x97

0xa1: Return(); Pop(0)

0xa2: PushEmpty()
0xa3: PushEmpty(bool)
0xa4: Call2 0x358

0xa5: Pop(0)
0xa6: Pop(1); Push((bool) Stack[-1] == 0)
0xa7: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0xa8: Return(); Pop(0)

0xa9: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xaa: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xab: Return(); Pop(0)

0xac: PushEmpty(string, bool)
0xad: Stack[-2] = Stack[-3]
0xae: Push("")
0xaf: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb0: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xb1: Stack[-1] = (bool) 0
0xb2: GOTO 0xb4

0xb3: Stack[-1] = (bool) 1
0xb4: Call2 0x2a0

0xb5: Pop(2)
0xb6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb7: Return(); Pop(0)

0xb8: PushEmpty()
0xb9: Push((int) 1)
0xba: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0xbb: PushEmpty()
0xbc: Call2 0x2ba

0xbd: Pop(0)
0xbe: Push((int) 35730)
0xbf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc0: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xc1: PushEmpty(object, object)
0xc2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc4: Call2 0x2f4

0xc5: Pop(2)
0xc6: Push((int) 35729)
0xc7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc8: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xc9: PushEmpty(bool, object)
0xca: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcb: Call2 0x2fd

0xcc: Pop(1)
0xcd: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0xce: PushEmpty(object, object)
0xcf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd1: Call2 0x2ee

0xd2: Pop(2)
0xd3: PushEmpty(string)
0xd4: Stack[-1] = "Neutral"
0xd5: Call2 0xa2

0xd6: Pop(1)
0xd7: Push((int) 534142)
0xd8: @@ SetMessage(Stack[-1])
0xd9: Pop(1)
0xda: @@ ClearReplies()
0xdb: Pop(0)
0xdc: Push((int) 534435)
0xdd: Push((int) 36067)
0xde: Push((int) 36066)
0xdf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe0: Pop(3)
0xe1: Push((int) 534437)
0xe2: Push((int) 36067)
0xe3: Push((int) 36068)
0xe4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe5: Pop(3)
0xe6: Return(); Pop(0)

0xe7: PushEmpty(string)
0xe8: Stack[-1] = "Neutral"
0xe9: Call2 0xa2

0xea: Pop(1)
0xeb: Push((int) 534144)
0xec: @@ SetMessage(Stack[-1])
0xed: Pop(1)
0xee: @@ ClearReplies()
0xef: Pop(0)
0xf0: Push((int) 534145)
0xf1: Push((int) -1)
0xf2: Push((int) 35732)
0xf3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf4: Pop(3)
0xf5: Push((int) 534443)
0xf6: Push((int) -1)
0xf7: Push((int) 36076)
0xf8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf9: Pop(3)
0xfa: Return(); Pop(0)

0xfb: Push((int) 36067)
0xfc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfd: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0xfe: PushEmpty(string)
0xff: Stack[-1] = "Neutral"
0x100: Call2 0xa2

0x101: Pop(1)
0x102: Push((int) 534436)
0x103: @@ SetMessage(Stack[-1])
0x104: Pop(1)
0x105: @@ ClearReplies()
0x106: Pop(0)
0x107: Push((int) 534438)
0x108: Push((int) 36070)
0x109: Push((int) 36069)
0x10a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10b: Pop(3)
0x10c: Push((int) 534442)
0x10d: Push((int) 36070)
0x10e: Push((int) 36074)
0x10f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x110: Pop(3)
0x111: Return(); Pop(0)

0x112: Push((int) 36070)
0x113: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x114: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0x115: PushEmpty(string)
0x116: Stack[-1] = "Neutral"
0x117: Call2 0xa2

0x118: Pop(1)
0x119: Push((int) 534439)
0x11a: @@ SetMessage(Stack[-1])
0x11b: Pop(1)
0x11c: @@ ClearReplies()
0x11d: Pop(0)
0x11e: Push((int) 534143)
0x11f: Push((int) -1)
0x120: Push((int) 35730)
0x121: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x122: Pop(3)
0x123: Return(); Pop(0)

0x124: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x125: PushEmpty(bool)
0x126: Call2 0x358

0x127: Pop(0)
0x128: IF (Stack[-1] == 0) GOTO 0x12c; Pop(1)

0x129: @ lshStopAnimation()
0x12a: Pop(0)
0x12b: GOTO 0x12e

0x12c: @ StopAnimation()
0x12d: Pop(0)
0x12e: Return(); Pop(0)

0x12f: GOTO 0xb9

0x130: Return(); Pop(0)

0x131: PushEmpty(float, float)
0x132: Stack[-2] = (int) 300
0x133: Stack[-1] = (int) 100
0x134: Call2 0x142

0x135: Pop(2)
0x136: Return(); Pop(0)

0x137: PushEmpty()
0x138: PushEmpty()
0x139: Call2 0x1c8

0x13a: Pop(0)
0x13b: PushEmpty(int, object)
0x13c: Stack[-1] = Stack[-3]
0x13d: Push(-2, 1); TaskCall(0)
0x13e: Call2 0x0

0x13f: Pop(-2, 1); TaskReturn
0x140: Pop(2)
0x141: Return(); Pop(0)

0x142: PushEmpty(float, bool, float, bool)
0x143: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x144: Push((int) 3)
0x145: @ rand(Stack[-3], Stack[-1])
0x146: Pop(1)
0x147: Push((int) 3)
0x148: Pop(1); Push(Stack[-3] + Stack[-1]);
0x149: @ Sleep(Stack[-1], Stack[-2])
0x14a: Pop(1)
0x14b: Stack[6 + Tasks[-1].StackPointer] = (bool)1
0x14c: PushEmpty(float, float)
0x14d: Stack[-2] = Stack[-8]
0x14e: Stack[-1] = Stack[-7]
0x14f: Call2 0x187

0x150: Pop(2)
0x151: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x152: GOTO 0x144

0x153: Return(); Pop(4)

0x154: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x155: PushEmpty(bool)
0x156: Stack[-1] = (bool) 0
0x157: PushEmpty(bool)
0x158: Call2 0x234

0x159: Pop(0)
0x15a: Pop(1); Push((bool) Stack[-1] == 0)
0x15b: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x15c: PushEmpty(bool)
0x15d: Call2 0x185

0x15e: Pop(0)
0x15f: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x160: Stack[-1] = (bool) 1
0x161: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x162: PushEmpty(object)
0x163: Call2 0x2c1

0x164: Pop(0)
0x165: @ RemoveActor(Stack[-1])
0x166: Pop(1)
0x167: Return(); Pop(0)

0x168: PushEmpty()
0x169: Push("cleanup")
0x16a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x16b: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x16c: PushEmpty()
0x16d: Call2 0x154

0x16e: Pop(0)
0x16f: Return(); Pop(0)

0x170: Push( Stack[6 + Tasks[-1].StackPointer] )
0x171: IF (Stack[-1] == 0) GOTO 0x175; Pop(1)

0x172: PushEmpty()
0x173: Call2 0x1c8

0x174: Pop(0)
0x175: PushEmpty(bool)
0x176: Stack[-1] = (bool) 0
0x177: Push( Stack[5 + Tasks[-1].StackPointer] )
0x178: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x179: PushEmpty(bool)
0x17a: Call2 0x185

0x17b: Pop(0)
0x17c: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x17d: Stack[-1] = (bool) 1
0x17e: IF (Stack[-1] == 0) GOTO 0x184; Pop(1)

0x17f: PushEmpty(object)
0x180: Call2 0x2c1

0x181: Pop(0)
0x182: @ RemoveActor(Stack[-1])
0x183: Pop(1)
0x184: Return(); Pop(0)

0x185: Stack[-1] = (bool) 1
0x186: Return(); Pop(0)

0x187: PushEmpty()
0x188: PushEmpty(bool)
0x189: Call2 0x234

0x18a: Pop(0)
0x18b: Pop(1); Push((bool) Stack[-1] == 0)
0x18c: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x18d: Return(); Pop(0)

0x18e: Push("player")
0x18f: @ FindActor(Stack[-4], Stack[-1])
0x190: Pop(1)
0x191: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x192: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x193: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x194: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x195: Push((int) 10)
0x196: Push((float)1.0)
0x197: @ SetTimer(Stack[-2], Stack[-1])
0x198: Pop(2)
0x199: PushEmpty()
0x19a: Call2 0x1d6

0x19b: Pop(0)
0x19c: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x19d: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x19e: Push((int) 10)
0x19f: @ KillTimer(Stack[-1])
0x1a0: Pop(1)
0x1a1: Return(); Pop(0)

0x1a2: PushEmpty(float, float)
0x1a3: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x1a4: IF (Stack[-1] == 0) GOTO 0x1a7; Pop(1)

0x1a5: Stack[-3] = (bool) 0
0x1a6: Return(); Pop(2)

0x1a7: PushEmpty(float, object)
0x1a8: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1a9: Call2 0x22c

0x1aa: Pop(1)
0x1ab: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1ac: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1ad: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x1ae: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x1af: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x1b0: Return(); Pop(2)

0x1b1: PushEmpty()
0x1b2: Push((int) 10)
0x1b3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1b4: IF (Stack[-1] == 0) GOTO 0x1c7; Pop(1)

0x1b5: PushEmpty(bool)
0x1b6: Call2 0x1a2

0x1b7: Pop(0)
0x1b8: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1b9: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x1ba: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1bb: PushEmpty(object)
0x1bc: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1bd: Call2 0x2af

0x1be: Pop(1)
0x1bf: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x1c0: GOTO 0x1c7

0x1c1: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1c2: IF (Stack[-1] == 0) GOTO 0x1c7; Pop(1)

0x1c3: Push("head")
0x1c4: @ UnlookAsync(Stack[-1])
0x1c5: Pop(1)
0x1c6: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1c7: Return(); Pop(0)

0x1c8: PushEmpty()
0x1c9: Call2 0x227

0x1ca: Pop(0)
0x1cb: Push((int) 10)
0x1cc: @ KillTimer(Stack[-1])
0x1cd: Pop(1)
0x1ce: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1cf: IF (Stack[-1] == 0) GOTO 0x1d4; Pop(1)

0x1d0: Push("head")
0x1d1: @ UnlookAsync(Stack[-1])
0x1d2: Pop(1)
0x1d3: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1d4: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1d5: Return(); Pop(0)

0x1d6: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x1d7: @ WaitForAnimEnd()
0x1d8: Pop(0)
0x1d9: PushEmpty(bool)
0x1da: Call2 0x234

0x1db: Pop(0)
0x1dc: Pop(1); Push((bool) Stack[-1] == 0)
0x1dd: IF (Stack[-1] == 0) GOTO 0x1df; Pop(1)

0x1de: Return(); Pop(14)

0x1df: PushEmpty(int)
0x1e0: Call2 0x2dd

0x1e1: Stack[-8] = Stack[-1]
0x1e2: Pop(1)
0x1e3: Stack[-6] = (int) 0
0x1e4: PushEmpty(bool)
0x1e5: Stack[-1] = (bool) 0
0x1e6: Push((int) 5)
0x1e7: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x1e8: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1e9: PushEmpty(bool)
0x1ea: Call2 0x234

0x1eb: Pop(0)
0x1ec: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1ed: Stack[-1] = (bool) 1
0x1ee: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x1ef: Push((int) 3)
0x1f0: @ irand(Stack[-6], Stack[-1])
0x1f1: Pop(1)
0x1f2: Push((int) 0)
0x1f3: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1f4: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x1f5: Push(Stack[-7])
0x1f6: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x1f7: @ irand(Stack[-4], Stack[-7])
0x1f8: Pop(0)
0x1f9: Push("all")
0x1fa: PushEmpty(string, int)
0x1fb: Stack[-1] = Stack[-7]
0x1fc: Call2 0x2d6

0x1fd: Pop(1)
0x1fe: @ PlayAnimation(Stack[-2], Stack[-1])
0x1ff: Pop(2)
0x200: @ WaitForAnimEnd(Stack[-3])
0x201: Pop(0)
0x202: Pop(0); Push((bool) Stack[-3] == 0)
0x203: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x204: GOTO 0x222

0x205: GOTO 0x217

0x206: Push((int) 1)
0x207: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x208: IF (Stack[-1] == 0) GOTO 0x214; Pop(1)

0x209: Push((int) 4)
0x20a: @ rand(Stack[-3], Stack[-1])
0x20b: Pop(1)
0x20c: Push((int) 1)
0x20d: Pop(1); Push(Stack[-3] + Stack[-1]);
0x20e: @ Sleep(Stack[-1], Stack[-2])
0x20f: Pop(1)
0x210: Pop(0); Push((bool) Stack[-1] == 0)
0x211: IF (Stack[-1] == 0) GOTO 0x213; Pop(1)

0x212: GOTO 0x222

0x213: GOTO 0x217

0x214: Push(Stack[-6])
0x215: IF (Stack[-1] == 0) GOTO 0x217; Pop(1)

0x216: GOTO 0x222

0x217: PushEmpty(bool)
0x218: Call2 0x225

0x219: Pop(0)
0x21a: Pop(1); Push((bool) Stack[-1] == 0)
0x21b: IF (Stack[-1] == 0) GOTO 0x21d; Pop(1)

0x21c: GOTO 0x222

0x21d: @ ResetAAS()
0x21e: Pop(0)
0x21f: Push((int) 1)
0x220: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x221: GOTO 0x1e4

0x222: @ ResetAAS()
0x223: Pop(0)
0x224: Return(); Pop(14)

0x225: Stack[-1] = (bool) 1
0x226: Return(); Pop(0)

0x227: @ StopAnimation()
0x228: Pop(0)
0x229: @ StopGroup0()
0x22a: Pop(0)
0x22b: Return(); Pop(0)

0x22c: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x22d: @ GetPosition(Stack[-3])
0x22e: Pop(0)
0x22f: @@ GetPosition(Stack[-2])
0x230: Pop(0)
0x231: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x232: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x233: Return(); Pop(6)

0x234: PushEmpty(bool, bool)
0x235: @ IsLoaded(Stack[-1])
0x236: Pop(0)
0x237: Stack[-3] = Stack[-1]
0x238: Return(); Pop(2)

0x239: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x23a: @@ GetPosition(Stack[-8])
0x23b: Pop(0)
0x23c: @@ GetEyesHeight(Stack[-9])
0x23d: Pop(0)
0x23e: Push(CvectorIndex(Stack[-8], 1))
0x23f: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x240: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x241: @ GetPosition(Stack[-7])
0x242: Pop(0)
0x243: @ GetEyesHeight(Stack[-9])
0x244: Pop(0)
0x245: Push(CvectorIndex(Stack[-7], 1))
0x246: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x247: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x248: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x249: Push(CvectorIndex(Stack[-6], 1))
0x24a: Stack[-1] = (int) 0
0x24b: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x24c: Pop(0); Push(Stack[-6] | Stack[-6]);
0x24d: Pop(1); Push(Sqrt(Stack[-1]))
0x24e: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x24f: Stack[-5] = -Stack[-6]; Pop(0);
0x250: Pop(0); Push(Stack[-6] * Stack[-19]);
0x251: PushEmpty(cvector, cvector)
0x252: Push(CVector(0.0, 1.0, 0.0))
0x253: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x254: Call2 0x2c7

0x255: Pop(1)
0x256: Push((int) 25)
0x257: Pop(2); Push(Stack[-2] * Stack[-1]);
0x258: Pop(2); Push(Stack[-2] + Stack[-1]);
0x259: Push(CVector(0.0, 10.0, 0.0))
0x25a: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x25b: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x25c: @ IsOverrideActive(Stack[-2])
0x25d: Pop(0)
0x25e: Push(Stack[-2])
0x25f: IF (Stack[-1] == 0) GOTO 0x262; Pop(1)

0x260: Stack[-21] = (bool) 0
0x261: Return(); Pop(18)

0x262: @ StopWorld()
0x263: Pop(0)
0x264: Push((bool) 1)
0x265: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x266: Pop(1)
0x267: Push(CvectorIndex(Stack[-4], 0))
0x268: Push(CvectorIndex(Stack[-5], 2))
0x269: @ Rotate(Stack[-2], Stack[-1])
0x26a: Pop(2)
0x26b: PushEmpty(bool)
0x26c: Call2 0x358

0x26d: Pop(0)
0x26e: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x26f: GOTO 0x278

0x270: Push("head")
0x271: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x272: Pop(1)
0x273: Push(Stack[-1])
0x274: IF (Stack[-1] == 0) GOTO 0x278; Pop(1)

0x275: Push("head")
0x276: @ LookAsyncCamera(Stack[-1])
0x277: Pop(1)
0x278: @ CameraWaitForPlayFinish()
0x279: Pop(0)
0x27a: @ ResumeWorld()
0x27b: Pop(0)
0x27c: Stack[-21] = (bool) 1
0x27d: Return(); Pop(18)

0x27e: PushEmpty(bool, bool)
0x27f: Push((bool) 1)
0x280: @ CameraSwitchToNormal(Stack[-1])
0x281: Pop(1)
0x282: PushEmpty(bool)
0x283: Call2 0x358

0x284: Pop(0)
0x285: IF (Stack[-1] == 0) GOTO 0x287; Pop(1)

0x286: GOTO 0x28f

0x287: Push("head")
0x288: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x289: Pop(1)
0x28a: Push(Stack[-1])
0x28b: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x28c: Push("head")
0x28d: @ UnlookAsync(Stack[-1])
0x28e: Pop(1)
0x28f: Return(); Pop(2)

0x290: PushEmpty(bool, float, float, bool, float, float)
0x291: @ lshHasAnimation(Stack[-3], Stack[-7])
0x292: Pop(0)
0x293: Push(Stack[-3])
0x294: IF (Stack[-1] == 0) GOTO 0x29b; Pop(1)

0x295: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x296: Pop(0)
0x297: Push((bool) 0)
0x298: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x299: Pop(1)
0x29a: GOTO 0x29f

0x29b: Push("Can't find lsh animation : ")
0x29c: Pop(1); Push(Stack[-1] + Stack[-8]);
0x29d: @ Trace(Stack[-1])
0x29e: Pop(1)
0x29f: Return(); Pop(6)

0x2a0: PushEmpty(bool, float, float, bool, float, float)
0x2a1: @ lshHasAnimation(Stack[-3], Stack[-8])
0x2a2: Pop(0)
0x2a3: Push(Stack[-3])
0x2a4: IF (Stack[-1] == 0) GOTO 0x2aa; Pop(1)

0x2a5: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x2a6: Pop(0)
0x2a7: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x2a8: Pop(0)
0x2a9: GOTO 0x2ae

0x2aa: Push("Can't find lsh animation : ")
0x2ab: Pop(1); Push(Stack[-1] + Stack[-9]);
0x2ac: @ Trace(Stack[-1])
0x2ad: Pop(1)
0x2ae: Return(); Pop(6)

0x2af: PushEmpty(float, cvector, float, cvector)
0x2b0: @@ GetEyesHeight(Stack[-2])
0x2b1: Pop(0)
0x2b2: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x2b3: Push(CvectorIndex(Stack[-1], 1))
0x2b4: Stack[-1] = Stack[-3]
0x2b5: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x2b6: Push("head")
0x2b7: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x2b8: Pop(1)
0x2b9: Return(); Pop(4)

0x2ba: PushEmpty(bool)
0x2bb: Call2 0x358

0x2bc: Pop(0)
0x2bd: IF (Stack[-1] == 0) GOTO 0x2c0; Pop(1)

0x2be: @ lshStopSpeech()
0x2bf: Pop(0)
0x2c0: Return(); Pop(0)

0x2c1: PushEmpty(object, object)
0x2c2: @ self(Stack[-1])
0x2c3: Pop(0)
0x2c4: Stack[-3] = Stack[-1]
0x2c5: Return(); Pop(2)

0x2c6: Stack[-1] = 0
0x2c7: PushEmpty(float, float)
0x2c8: Pop(0); Push(Stack[-3] | Stack[-3]);
0x2c9: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2ca: Push((float)0.0)
0x2cb: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2cc: IF (Stack[-1] == 0) GOTO 0x2cf; Pop(1)

0x2cd: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x2ce: Return(); Pop(2)

0x2cf: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x2d0: Return(); Pop(2)

0x2d1: PushEmpty(int, int)
0x2d2: @ GetVariable(Stack[-3], Stack[-1])
0x2d3: Pop(0)
0x2d4: Stack[-4] = Stack[-1]
0x2d5: Return(); Pop(2)

0x2d6: PushEmpty(string, string)
0x2d7: Stack[-1] = "idle"
0x2d8: Push(Stack[-3])
0x2d9: IF (Stack[-1] == 0) GOTO 0x2db; Pop(1)

0x2da: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x2db: Stack[-4] = Stack[-1]
0x2dc: Return(); Pop(2)

0x2dd: PushEmpty(int, bool, int, bool)
0x2de: Stack[-2] = (int) 0
0x2df: Push("all")
0x2e0: PushEmpty(string, int)
0x2e1: Stack[-1] = Stack[-5]
0x2e2: Call2 0x2d6

0x2e3: Pop(1)
0x2e4: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2e5: Pop(2)
0x2e6: Pop(0); Push((bool) Stack[-1] == 0)
0x2e7: IF (Stack[-1] == 0) GOTO 0x2e9; Pop(1)

0x2e8: GOTO 0x2ec

0x2e9: Push((int) 1)
0x2ea: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2eb: GOTO 0x2df

0x2ec: Stack[-5] = Stack[-2]
0x2ed: Return(); Pop(4)

0x2ee: PushEmpty()
0x2ef: Push("ood10Salesman1")
0x2f0: Push((int) 1)
0x2f1: @ SetVariable(Stack[-2], Stack[-1])
0x2f2: Pop(2)
0x2f3: Return(); Pop(0)

0x2f4: PushEmpty()
0x2f5: Push("d10q03")
0x2f6: Push((int) 2)
0x2f7: @ SetVariable(Stack[-2], Stack[-1])
0x2f8: Pop(2)
0x2f9: PushEmpty()
0x2fa: Call2 0x309

0x2fb: Pop(0)
0x2fc: Return(); Pop(0)

0x2fd: PushEmpty()
0x2fe: PushEmpty(int, string)
0x2ff: Stack[-1] = "ood10Salesman1"
0x300: Call2 0x2d1

0x301: Pop(1)
0x302: Push((int) 0)
0x303: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x304: IF (Stack[-1] == 0) GOTO 0x307; Pop(1)

0x305: Stack[-2] = (bool) 1
0x306: Return(); Pop(0)

0x307: Stack[-2] = (bool) 0
0x308: Return(); Pop(0)

0x309: PushEmpty(object, object)
0x30a: Push((int) 674)
0x30b: Push((int) 2)
0x30c: Push((int) 534159)
0x30d: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x30e: Pop(3)
0x30f: PushEmpty(bool, object, int)
0x310: Stack[-2] = Stack[-4]
0x311: Stack[-1] = (int) 672
0x312: Call2 0x323

0x313: Pop(3)
0x314: Return(); Pop(2)

0x315: Stack[-1] = 0
0x316: PushEmpty(object, object)
0x317: @ GetDiaryRoot(Stack[-1])
0x318: Pop(0)
0x319: Pop(0); Push((bool) Stack[-1] == 0)
0x31a: IF (Stack[-1] == 0) GOTO 0x320; Pop(1)

0x31b: Push("Can't retrieve diary root")
0x31c: @ Trace(Stack[-1])
0x31d: Pop(1)
0x31e: Stack[-3] = (bool) 0
0x31f: Return(); Pop(2)

0x320: Stack[-3] = Stack[-1]
0x321: Return(); Pop(2)

0x322: Stack[-1] = 0
0x323: PushEmpty(object, object, int, object, object, int)
0x324: PushEmpty(object)
0x325: Call2 0x316

0x326: Stack[-4] = Stack[-1]
0x327: Pop(1)
0x328: @@ Find(Stack[-7], Stack[-2])
0x329: Pop(0)
0x32a: Pop(0); Push((bool) Stack[-2] == 0)
0x32b: IF (Stack[-1] == 0) GOTO 0x332; Pop(1)

0x32c: Push("Can't find diary parent with id: ")
0x32d: Pop(1); Push(Stack[-1] + Stack[-8]);
0x32e: @ Trace(Stack[-1])
0x32f: Pop(1)
0x330: Stack[-9] = (bool) 0
0x331: Return(); Pop(6)

0x332: @@ AddChild(Stack[-8])
0x333: Pop(0)
0x334: Push((int) 7)
0x335: @ SendWorldWndMessage(Stack[-1])
0x336: Pop(1)
0x337: @@ GetCategory(Stack[-1])
0x338: Pop(0)
0x339: @ SetDiarySection(Stack[-1])
0x33a: Pop(0)
0x33b: Stack[-9] = (bool) 0
0x33c: Return(); Pop(6)

0x33d: Stack[-2] = 0
0x33e: Stack[-3] = 0
0x33f: PushEmpty(int, int)
0x340: Push("branch")
0x341: @ GetVariable(Stack[-1], Stack[-2])
0x342: Pop(1)
0x343: Push((int) 0)
0x344: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x345: IF (Stack[-1] == 0) GOTO 0x349; Pop(1)

0x346: Stack[-3] = (int) 1
0x347: Return(); Pop(2)

0x348: GOTO 0x34e

0x349: Push((int) 1)
0x34a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x34b: IF (Stack[-1] == 0) GOTO 0x34e; Pop(1)

0x34c: Stack[-3] = (int) 2
0x34d: Return(); Pop(2)

0x34e: Stack[-3] = (int) 3
0x34f: Return(); Pop(2)

0x350: Stack[-1] = (int) 541582
0x351: Return(); Pop(0)

0x352: Stack[-1] = (int) 541581
0x353: Return(); Pop(0)

0x354: Stack[-1] = "ui/NPC_Citizen3.png"
0x355: Return(); Pop(0)

0x356: Stack[-1] = "ui/NPC_Citizen3_b.png"
0x357: Return(); Pop(0)

0x358: Stack[-1] = (bool) 0
0x359: Return(); Pop(0)

