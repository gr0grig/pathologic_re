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
	GetPosition
	GetEyesHeight
	head
	Can't find lsh animation : 
	b6q02
	oob6Prophet1
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	branch
	ui/NPC_Prophet.png
	ui/NPC_Prophet_b.png

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
	Hold (0 args)
	rand (2 args)
	Sleep (1 args)
	IsLoaded (1 args)
	RemoveActor (1 args)
	StopGroup0 (0 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	Sleep (2 args)
	ResetAAS (0 args)
	GetPosition (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	UnlookAsync (1 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshStopSpeech (0 args)
	self (1 args)
	GetVariable (2 args)
	HasAnimation (3 args)
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x161
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xae Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x156 Vars = (object)
		EVENT_26 Op = 0x18a Vars = (string)
		EVENT_5 Op = 0x192 Vars = ()
		EVENT_6 Op = 0x197 Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x204

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x310

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x30e

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x312

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x314

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x2fd

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
0x41: Call2 0x248

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
0x4f: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x2bb

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x55: PushEmpty(object, object)
0x56: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x57: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58: Call2 0x2b5

0x59: Pop(2)
0x5a: PushEmpty(string)
0x5b: Stack[-1] = "Neutral"
0x5c: Call2 0x98

0x5d: Pop(1)
0x5e: Push((int) 521181)
0x5f: @@ SetMessage(Stack[-1])
0x60: Pop(1)
0x61: @@ ClearReplies()
0x62: Pop(0)
0x63: Push((int) 528428)
0x64: Push((int) 29813)
0x65: Push((int) 29812)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: GOTO 0x7a

0x69: PushEmpty(string)
0x6a: Stack[-1] = "Neutral"
0x6b: Call2 0x98

0x6c: Pop(1)
0x6d: Push((int) 521197)
0x6e: @@ SetMessage(Stack[-1])
0x6f: Pop(1)
0x70: @@ ClearReplies()
0x71: Pop(0)
0x72: Push((int) 521198)
0x73: Push((int) -1)
0x74: Push((int) 22395)
0x75: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x76: Pop(3)
0x77: GOTO 0x7a

0x78: Return(); Pop(0)

0x79: GOTO 0x4e

0x7a: PushEmpty(bool)
0x7b: Call2 0x316

0x7c: Pop(0)
0x7d: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x7e: @ lshWaitForAnimEnd()
0x7f: Pop(0)
0x80: Push( Stack[3 + Tasks[-1].StackPointer] )
0x81: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x82: GOTO 0x88

0x83: PushEmpty(string)
0x84: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x85: Call2 0x259

0x86: Pop(1)
0x87: GOTO 0x7e

0x88: GOTO 0x97

0x89: Push("all")
0x8a: Push("idle")
0x8b: @ PlayAnimation(Stack[-2], Stack[-1])
0x8c: Pop(2)
0x8d: @ WaitForAnimEnd()
0x8e: Pop(0)
0x8f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x90: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x91: GOTO 0x97

0x92: Push("all")
0x93: Push("idle")
0x94: @ PlayAnimation(Stack[-2], Stack[-1])
0x95: Pop(2)
0x96: GOTO 0x8d

0x97: Return(); Pop(0)

0x98: PushEmpty()
0x99: PushEmpty(bool)
0x9a: Call2 0x316

0x9b: Pop(0)
0x9c: Pop(1); Push((bool) Stack[-1] == 0)
0x9d: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9e: Return(); Pop(0)

0x9f: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa0: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0xa1: Return(); Pop(0)

0xa2: PushEmpty(string, bool)
0xa3: Stack[-2] = Stack[-3]
0xa4: Push("")
0xa5: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa6: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0xa7: Stack[-1] = (bool) 0
0xa8: GOTO 0xaa

0xa9: Stack[-1] = (bool) 1
0xaa: Call2 0x269

0xab: Pop(2)
0xac: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xad: Return(); Pop(0)

0xae: PushEmpty()
0xaf: Push((int) 1)
0xb0: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0xb1: PushEmpty()
0xb2: Call2 0x278

0xb3: Pop(0)
0xb4: Push((int) 22397)
0xb5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb6: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xb7: PushEmpty(object, object)
0xb8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xba: Call2 0x2ac

0xbb: Pop(2)
0xbc: Push((int) 22383)
0xbd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbe: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0xbf: PushEmpty(bool, object)
0xc0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc1: Call2 0x2bb

0xc2: Pop(1)
0xc3: IF (Stack[-1] == 0) GOTO 0xd8; Pop(1)

0xc4: PushEmpty(object, object)
0xc5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc7: Call2 0x2b5

0xc8: Pop(2)
0xc9: PushEmpty(string)
0xca: Stack[-1] = "Neutral"
0xcb: Call2 0x98

0xcc: Pop(1)
0xcd: Push((int) 521181)
0xce: @@ SetMessage(Stack[-1])
0xcf: Pop(1)
0xd0: @@ ClearReplies()
0xd1: Pop(0)
0xd2: Push((int) 528428)
0xd3: Push((int) 29813)
0xd4: Push((int) 29812)
0xd5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd6: Pop(3)
0xd7: Return(); Pop(0)

0xd8: PushEmpty(string)
0xd9: Stack[-1] = "Neutral"
0xda: Call2 0x98

0xdb: Pop(1)
0xdc: Push((int) 521197)
0xdd: @@ SetMessage(Stack[-1])
0xde: Pop(1)
0xdf: @@ ClearReplies()
0xe0: Pop(0)
0xe1: Push((int) 521198)
0xe2: Push((int) -1)
0xe3: Push((int) 22395)
0xe4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe5: Pop(3)
0xe6: Return(); Pop(0)

0xe7: Push((int) 29819)
0xe8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe9: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xea: Push((int) 29821)
0xeb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xec: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xed: PushEmpty(string)
0xee: Stack[-1] = "Neutral"
0xef: Call2 0x98

0xf0: Pop(1)
0xf1: Push((int) 528437)
0xf2: @@ SetMessage(Stack[-1])
0xf3: Pop(1)
0xf4: @@ ClearReplies()
0xf5: Pop(0)
0xf6: Push((int) 528438)
0xf7: Push((int) 29815)
0xf8: Push((int) 29822)
0xf9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfa: Pop(3)
0xfb: Return(); Pop(0)

0xfc: Push((int) 29813)
0xfd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfe: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0xff: PushEmpty(string)
0x100: Stack[-1] = "Neutral"
0x101: Call2 0x98

0x102: Pop(1)
0x103: Push((int) 528429)
0x104: @@ SetMessage(Stack[-1])
0x105: Pop(1)
0x106: @@ ClearReplies()
0x107: Pop(0)
0x108: Push((int) 528430)
0x109: Push((int) 29815)
0x10a: Push((int) 29814)
0x10b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10c: Pop(3)
0x10d: Return(); Pop(0)

0x10e: Push((int) 29815)
0x10f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x110: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x111: PushEmpty(string)
0x112: Stack[-1] = "Neutral"
0x113: Call2 0x98

0x114: Pop(1)
0x115: Push((int) 528431)
0x116: @@ SetMessage(Stack[-1])
0x117: Pop(1)
0x118: @@ ClearReplies()
0x119: Pop(0)
0x11a: Push((int) 528432)
0x11b: Push((int) 29817)
0x11c: Push((int) 29816)
0x11d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11e: Pop(3)
0x11f: Push((int) 528439)
0x120: Push((int) 29817)
0x121: Push((int) 29824)
0x122: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x123: Pop(3)
0x124: Return(); Pop(0)

0x125: Push((int) 29817)
0x126: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x127: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x128: PushEmpty(string)
0x129: Stack[-1] = "Neutral"
0x12a: Call2 0x98

0x12b: Pop(1)
0x12c: Push((int) 528433)
0x12d: @@ SetMessage(Stack[-1])
0x12e: Pop(1)
0x12f: @@ ClearReplies()
0x130: Pop(0)
0x131: Push((int) 521182)
0x132: Push((int) 22396)
0x133: Push((int) 22384)
0x134: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x135: Pop(3)
0x136: Return(); Pop(0)

0x137: Push((int) 22396)
0x138: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x139: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x13a: PushEmpty(string)
0x13b: Stack[-1] = "Neutral"
0x13c: Call2 0x98

0x13d: Pop(1)
0x13e: Push((int) 521199)
0x13f: @@ SetMessage(Stack[-1])
0x140: Pop(1)
0x141: @@ ClearReplies()
0x142: Pop(0)
0x143: Push((int) 521200)
0x144: Push((int) -1)
0x145: Push((int) 22397)
0x146: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x147: Pop(3)
0x148: Return(); Pop(0)

0x149: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x14a: PushEmpty(bool)
0x14b: Call2 0x316

0x14c: Pop(0)
0x14d: IF (Stack[-1] == 0) GOTO 0x151; Pop(1)

0x14e: @ lshStopAnimation()
0x14f: Pop(0)
0x150: GOTO 0x153

0x151: @ StopAnimation()
0x152: Pop(0)
0x153: Return(); Pop(0)

0x154: GOTO 0xaf

0x155: Return(); Pop(0)

0x156: PushEmpty()
0x157: PushEmpty()
0x158: Call2 0x1fa

0x159: Pop(0)
0x15a: PushEmpty(int, object)
0x15b: Stack[-1] = Stack[-3]
0x15c: Push(-2, 1); TaskCall(0)
0x15d: Call2 0x0

0x15e: Pop(-2, 1); TaskReturn
0x15f: Pop(2)
0x160: Return(); Pop(0)

0x161: PushEmpty(float, float)
0x162: PushEmpty(bool)
0x163: Call2 0x1ff

0x164: Pop(0)
0x165: Pop(1); Push((bool) Stack[-1] == 0)
0x166: IF (Stack[-1] == 0) GOTO 0x16a; Pop(1)

0x167: @ Hold()
0x168: Pop(0)
0x169: GOTO 0x162

0x16a: Push((int) 3)
0x16b: @ rand(Stack[-2], Stack[-1])
0x16c: Pop(1)
0x16d: Push((int) 3)
0x16e: Pop(1); Push(Stack[-2] + Stack[-1]);
0x16f: @ Sleep(Stack[-1])
0x170: Pop(1)
0x171: PushEmpty()
0x172: Call2 0x1a9

0x173: Pop(0)
0x174: GOTO 0x162

0x175: Return(); Pop(2)

0x176: PushEmpty(bool, bool)
0x177: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x178: @ IsLoaded(Stack[-1])
0x179: Pop(0)
0x17a: PushEmpty(bool)
0x17b: Stack[-1] = (bool) 0
0x17c: Pop(0); Push((bool) Stack[-2] == 0)
0x17d: IF (Stack[-1] == 0) GOTO 0x183; Pop(1)

0x17e: PushEmpty(bool)
0x17f: Call2 0x1a7

0x180: Pop(0)
0x181: IF (Stack[-1] == 0) GOTO 0x183; Pop(1)

0x182: Stack[-1] = (bool) 1
0x183: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x184: PushEmpty(object)
0x185: Call2 0x27f

0x186: Pop(0)
0x187: @ RemoveActor(Stack[-1])
0x188: Pop(1)
0x189: Return(); Pop(2)

0x18a: PushEmpty()
0x18b: Push("cleanup")
0x18c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x18d: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x18e: PushEmpty()
0x18f: Call2 0x176

0x190: Pop(0)
0x191: Return(); Pop(0)

0x192: @ StopGroup0()
0x193: Pop(0)
0x194: @ sync()
0x195: Pop(0)
0x196: Return(); Pop(0)

0x197: PushEmpty(bool)
0x198: Stack[-1] = (bool) 0
0x199: Push( Stack[0 + Tasks[-1].StackPointer] )
0x19a: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x19b: PushEmpty(bool)
0x19c: Call2 0x1a7

0x19d: Pop(0)
0x19e: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x19f: Stack[-1] = (bool) 1
0x1a0: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x1a1: PushEmpty(object)
0x1a2: Call2 0x27f

0x1a3: Pop(0)
0x1a4: @ RemoveActor(Stack[-1])
0x1a5: Pop(1)
0x1a6: Return(); Pop(0)

0x1a7: Stack[-1] = (bool) 1
0x1a8: Return(); Pop(0)

0x1a9: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x1aa: @ WaitForAnimEnd()
0x1ab: Pop(0)
0x1ac: PushEmpty(bool)
0x1ad: Call2 0x1ff

0x1ae: Pop(0)
0x1af: Pop(1); Push((bool) Stack[-1] == 0)
0x1b0: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0x1b1: Return(); Pop(14)

0x1b2: PushEmpty(int)
0x1b3: Call2 0x29b

0x1b4: Stack[-8] = Stack[-1]
0x1b5: Pop(1)
0x1b6: Stack[-6] = (int) 0
0x1b7: PushEmpty(bool)
0x1b8: Stack[-1] = (bool) 0
0x1b9: Push((int) 5)
0x1ba: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x1bb: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1bc: PushEmpty(bool)
0x1bd: Call2 0x1ff

0x1be: Pop(0)
0x1bf: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1c0: Stack[-1] = (bool) 1
0x1c1: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1c2: Push((int) 3)
0x1c3: @ irand(Stack[-6], Stack[-1])
0x1c4: Pop(1)
0x1c5: Push((int) 0)
0x1c6: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1c7: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

0x1c8: Push(Stack[-7])
0x1c9: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x1ca: @ irand(Stack[-4], Stack[-7])
0x1cb: Pop(0)
0x1cc: Push("all")
0x1cd: PushEmpty(string, int)
0x1ce: Stack[-1] = Stack[-7]
0x1cf: Call2 0x294

0x1d0: Pop(1)
0x1d1: @ PlayAnimation(Stack[-2], Stack[-1])
0x1d2: Pop(2)
0x1d3: @ WaitForAnimEnd(Stack[-3])
0x1d4: Pop(0)
0x1d5: Pop(0); Push((bool) Stack[-3] == 0)
0x1d6: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x1d7: GOTO 0x1f5

0x1d8: GOTO 0x1ea

0x1d9: Push((int) 1)
0x1da: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1db: IF (Stack[-1] == 0) GOTO 0x1e7; Pop(1)

0x1dc: Push((int) 4)
0x1dd: @ rand(Stack[-3], Stack[-1])
0x1de: Pop(1)
0x1df: Push((int) 1)
0x1e0: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1e1: @ Sleep(Stack[-1], Stack[-2])
0x1e2: Pop(1)
0x1e3: Pop(0); Push((bool) Stack[-1] == 0)
0x1e4: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1e5: GOTO 0x1f5

0x1e6: GOTO 0x1ea

0x1e7: Push(Stack[-6])
0x1e8: IF (Stack[-1] == 0) GOTO 0x1ea; Pop(1)

0x1e9: GOTO 0x1f5

0x1ea: PushEmpty(bool)
0x1eb: Call2 0x1f8

0x1ec: Pop(0)
0x1ed: Pop(1); Push((bool) Stack[-1] == 0)
0x1ee: IF (Stack[-1] == 0) GOTO 0x1f0; Pop(1)

0x1ef: GOTO 0x1f5

0x1f0: @ ResetAAS()
0x1f1: Pop(0)
0x1f2: Push((int) 1)
0x1f3: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x1f4: GOTO 0x1b7

0x1f5: @ ResetAAS()
0x1f6: Pop(0)
0x1f7: Return(); Pop(14)

0x1f8: Stack[-1] = (bool) 1
0x1f9: Return(); Pop(0)

0x1fa: @ StopAnimation()
0x1fb: Pop(0)
0x1fc: @ StopGroup0()
0x1fd: Pop(0)
0x1fe: Return(); Pop(0)

0x1ff: PushEmpty(bool, bool)
0x200: @ IsLoaded(Stack[-1])
0x201: Pop(0)
0x202: Stack[-3] = Stack[-1]
0x203: Return(); Pop(2)

0x204: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x205: @@ GetPosition(Stack[-8])
0x206: Pop(0)
0x207: @@ GetEyesHeight(Stack[-9])
0x208: Pop(0)
0x209: Push(CvectorIndex(Stack[-8], 1))
0x20a: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x20b: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x20c: @ GetPosition(Stack[-7])
0x20d: Pop(0)
0x20e: @ GetEyesHeight(Stack[-9])
0x20f: Pop(0)
0x210: Push(CvectorIndex(Stack[-7], 1))
0x211: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x212: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x213: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x214: Push(CvectorIndex(Stack[-6], 1))
0x215: Stack[-1] = (int) 0
0x216: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x217: Pop(0); Push(Stack[-6] | Stack[-6]);
0x218: Pop(1); Push(Sqrt(Stack[-1]))
0x219: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x21a: Stack[-5] = -Stack[-6]; Pop(0);
0x21b: Pop(0); Push(Stack[-6] * Stack[-19]);
0x21c: PushEmpty(cvector, cvector)
0x21d: Push(CVector(0.0, 1.0, 0.0))
0x21e: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x21f: Call2 0x285

0x220: Pop(1)
0x221: Push((int) 25)
0x222: Pop(2); Push(Stack[-2] * Stack[-1]);
0x223: Pop(2); Push(Stack[-2] + Stack[-1]);
0x224: Push(CVector(0.0, 10.0, 0.0))
0x225: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x226: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x227: @ IsOverrideActive(Stack[-2])
0x228: Pop(0)
0x229: Push(Stack[-2])
0x22a: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x22b: Stack[-21] = (bool) 0
0x22c: Return(); Pop(18)

0x22d: @ StopWorld()
0x22e: Pop(0)
0x22f: @ CameraTransit(Stack[-3], Stack[-5])
0x230: Pop(0)
0x231: Push(CvectorIndex(Stack[-4], 0))
0x232: Push(CvectorIndex(Stack[-5], 2))
0x233: @ Rotate(Stack[-2], Stack[-1])
0x234: Pop(2)
0x235: PushEmpty(bool)
0x236: Call2 0x316

0x237: Pop(0)
0x238: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x239: GOTO 0x242

0x23a: Push("head")
0x23b: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x23c: Pop(1)
0x23d: Push(Stack[-1])
0x23e: IF (Stack[-1] == 0) GOTO 0x242; Pop(1)

0x23f: Push("head")
0x240: @ LookAsyncCamera(Stack[-1])
0x241: Pop(1)
0x242: @ CameraWaitForPlayFinish()
0x243: Pop(0)
0x244: @ ResumeWorld()
0x245: Pop(0)
0x246: Stack[-21] = (bool) 1
0x247: Return(); Pop(18)

0x248: PushEmpty(bool, bool)
0x249: @ CameraSwitchToNormal()
0x24a: Pop(0)
0x24b: PushEmpty(bool)
0x24c: Call2 0x316

0x24d: Pop(0)
0x24e: IF (Stack[-1] == 0) GOTO 0x250; Pop(1)

0x24f: GOTO 0x258

0x250: Push("head")
0x251: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x252: Pop(1)
0x253: Push(Stack[-1])
0x254: IF (Stack[-1] == 0) GOTO 0x258; Pop(1)

0x255: Push("head")
0x256: @ UnlookAsync(Stack[-1])
0x257: Pop(1)
0x258: Return(); Pop(2)

0x259: PushEmpty(bool, float, float, bool, float, float)
0x25a: @ lshHasAnimation(Stack[-3], Stack[-7])
0x25b: Pop(0)
0x25c: Push(Stack[-3])
0x25d: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x25e: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x25f: Pop(0)
0x260: Push((bool) 0)
0x261: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x262: Pop(1)
0x263: GOTO 0x268

0x264: Push("Can't find lsh animation : ")
0x265: Pop(1); Push(Stack[-1] + Stack[-8]);
0x266: @ Trace(Stack[-1])
0x267: Pop(1)
0x268: Return(); Pop(6)

0x269: PushEmpty(bool, float, float, bool, float, float)
0x26a: @ lshHasAnimation(Stack[-3], Stack[-8])
0x26b: Pop(0)
0x26c: Push(Stack[-3])
0x26d: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x26e: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x26f: Pop(0)
0x270: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x271: Pop(0)
0x272: GOTO 0x277

0x273: Push("Can't find lsh animation : ")
0x274: Pop(1); Push(Stack[-1] + Stack[-9]);
0x275: @ Trace(Stack[-1])
0x276: Pop(1)
0x277: Return(); Pop(6)

0x278: PushEmpty(bool)
0x279: Call2 0x316

0x27a: Pop(0)
0x27b: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x27c: @ lshStopSpeech()
0x27d: Pop(0)
0x27e: Return(); Pop(0)

0x27f: PushEmpty(object, object)
0x280: @ self(Stack[-1])
0x281: Pop(0)
0x282: Stack[-3] = Stack[-1]
0x283: Return(); Pop(2)

0x284: Stack[-1] = 0
0x285: PushEmpty(float, float)
0x286: Pop(0); Push(Stack[-3] | Stack[-3]);
0x287: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x288: Push((float)0.0)
0x289: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x28a: IF (Stack[-1] == 0) GOTO 0x28d; Pop(1)

0x28b: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x28c: Return(); Pop(2)

0x28d: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x28e: Return(); Pop(2)

0x28f: PushEmpty(int, int)
0x290: @ GetVariable(Stack[-3], Stack[-1])
0x291: Pop(0)
0x292: Stack[-4] = Stack[-1]
0x293: Return(); Pop(2)

0x294: PushEmpty(string, string)
0x295: Stack[-1] = "idle"
0x296: Push(Stack[-3])
0x297: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x298: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x299: Stack[-4] = Stack[-1]
0x29a: Return(); Pop(2)

0x29b: PushEmpty(int, bool, int, bool)
0x29c: Stack[-2] = (int) 0
0x29d: Push("all")
0x29e: PushEmpty(string, int)
0x29f: Stack[-1] = Stack[-5]
0x2a0: Call2 0x294

0x2a1: Pop(1)
0x2a2: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2a3: Pop(2)
0x2a4: Pop(0); Push((bool) Stack[-1] == 0)
0x2a5: IF (Stack[-1] == 0) GOTO 0x2a7; Pop(1)

0x2a6: GOTO 0x2aa

0x2a7: Push((int) 1)
0x2a8: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2a9: GOTO 0x29d

0x2aa: Stack[-5] = Stack[-2]
0x2ab: Return(); Pop(4)

0x2ac: PushEmpty()
0x2ad: Push("b6q02")
0x2ae: Push((int) 2)
0x2af: @ SetVariable(Stack[-2], Stack[-1])
0x2b0: Pop(2)
0x2b1: PushEmpty()
0x2b2: Call2 0x2c7

0x2b3: Pop(0)
0x2b4: Return(); Pop(0)

0x2b5: PushEmpty()
0x2b6: Push("oob6Prophet1")
0x2b7: Push((int) 1)
0x2b8: @ SetVariable(Stack[-2], Stack[-1])
0x2b9: Pop(2)
0x2ba: Return(); Pop(0)

0x2bb: PushEmpty()
0x2bc: PushEmpty(int, string)
0x2bd: Stack[-1] = "oob6Prophet1"
0x2be: Call2 0x28f

0x2bf: Pop(1)
0x2c0: Push((int) 0)
0x2c1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2c2: IF (Stack[-1] == 0) GOTO 0x2c5; Pop(1)

0x2c3: Stack[-2] = (bool) 1
0x2c4: Return(); Pop(0)

0x2c5: Stack[-2] = (bool) 0
0x2c6: Return(); Pop(0)

0x2c7: PushEmpty(object, object)
0x2c8: Push((int) 268)
0x2c9: Push((int) 2)
0x2ca: Push((int) 521195)
0x2cb: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2cc: Pop(3)
0x2cd: PushEmpty(bool, object, int)
0x2ce: Stack[-2] = Stack[-4]
0x2cf: Stack[-1] = (int) 266
0x2d0: Call2 0x2e1

0x2d1: Pop(3)
0x2d2: Return(); Pop(2)

0x2d3: Stack[-1] = 0
0x2d4: PushEmpty(object, object)
0x2d5: @ GetDiaryRoot(Stack[-1])
0x2d6: Pop(0)
0x2d7: Pop(0); Push((bool) Stack[-1] == 0)
0x2d8: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x2d9: Push("Can't retrieve diary root")
0x2da: @ Trace(Stack[-1])
0x2db: Pop(1)
0x2dc: Stack[-3] = (bool) 0
0x2dd: Return(); Pop(2)

0x2de: Stack[-3] = Stack[-1]
0x2df: Return(); Pop(2)

0x2e0: Stack[-1] = 0
0x2e1: PushEmpty(object, object, int, object, object, int)
0x2e2: PushEmpty(object)
0x2e3: Call2 0x2d4

0x2e4: Stack[-4] = Stack[-1]
0x2e5: Pop(1)
0x2e6: @@ Find(Stack[-7], Stack[-2])
0x2e7: Pop(0)
0x2e8: Pop(0); Push((bool) Stack[-2] == 0)
0x2e9: IF (Stack[-1] == 0) GOTO 0x2f0; Pop(1)

0x2ea: Push("Can't find diary parent with id: ")
0x2eb: Pop(1); Push(Stack[-1] + Stack[-8]);
0x2ec: @ Trace(Stack[-1])
0x2ed: Pop(1)
0x2ee: Stack[-9] = (bool) 0
0x2ef: Return(); Pop(6)

0x2f0: @@ AddChild(Stack[-8])
0x2f1: Pop(0)
0x2f2: Push((int) 7)
0x2f3: @ SendWorldWndMessage(Stack[-1])
0x2f4: Pop(1)
0x2f5: @@ GetCategory(Stack[-1])
0x2f6: Pop(0)
0x2f7: @ SetDiarySection(Stack[-1])
0x2f8: Pop(0)
0x2f9: Stack[-9] = (bool) 0
0x2fa: Return(); Pop(6)

0x2fb: Stack[-2] = 0
0x2fc: Stack[-3] = 0
0x2fd: PushEmpty(int, int)
0x2fe: Push("branch")
0x2ff: @ GetVariable(Stack[-1], Stack[-2])
0x300: Pop(1)
0x301: Push((int) 0)
0x302: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x303: IF (Stack[-1] == 0) GOTO 0x307; Pop(1)

0x304: Stack[-3] = (int) 1
0x305: Return(); Pop(2)

0x306: GOTO 0x30c

0x307: Push((int) 1)
0x308: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x309: IF (Stack[-1] == 0) GOTO 0x30c; Pop(1)

0x30a: Stack[-3] = (int) 2
0x30b: Return(); Pop(2)

0x30c: Stack[-3] = (int) 3
0x30d: Return(); Pop(2)

0x30e: Stack[-1] = (int) 518716
0x30f: Return(); Pop(0)

0x310: Stack[-1] = (int) 518715
0x311: Return(); Pop(0)

0x312: Stack[-1] = "ui/NPC_Prophet.png"
0x313: Return(); Pop(0)

0x314: Stack[-1] = "ui/NPC_Prophet_b.png"
0x315: Return(); Pop(0)

0x316: Stack[-1] = (bool) 0
0x317: Return(); Pop(0)

