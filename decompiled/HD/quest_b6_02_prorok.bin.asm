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
	CameraTransit (3 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (1 args)
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

RunOp = 0x17a
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb3 Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x16f Vars = (object)
		EVENT_26 Op = 0x1a3 Vars = (string)
		EVENT_5 Op = 0x1ab Vars = ()
		EVENT_6 Op = 0x1b0 Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x21d

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x32b

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x329

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x32d

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x32f

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x318

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
0x41: Call2 0x262

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
0x4f: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x2d6

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x55: PushEmpty(object, object)
0x56: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x57: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58: Call2 0x2d0

0x59: Pop(2)
0x5a: PushEmpty(string)
0x5b: Stack[-1] = "Neutral"
0x5c: Call2 0x9d

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
0x68: Push((int) 528434)
0x69: Push((int) 29819)
0x6a: Push((int) 29818)
0x6b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c: Pop(3)
0x6d: GOTO 0x7f

0x6e: PushEmpty(string)
0x6f: Stack[-1] = "Neutral"
0x70: Call2 0x9d

0x71: Pop(1)
0x72: Push((int) 521197)
0x73: @@ SetMessage(Stack[-1])
0x74: Pop(1)
0x75: @@ ClearReplies()
0x76: Pop(0)
0x77: Push((int) 521198)
0x78: Push((int) -1)
0x79: Push((int) 22395)
0x7a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b: Pop(3)
0x7c: GOTO 0x7f

0x7d: Return(); Pop(0)

0x7e: GOTO 0x4e

0x7f: PushEmpty(bool)
0x80: Call2 0x331

0x81: Pop(0)
0x82: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x83: @ lshWaitForAnimEnd()
0x84: Pop(0)
0x85: Push( Stack[3 + Tasks[-1].StackPointer] )
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: GOTO 0x8d

0x88: PushEmpty(string)
0x89: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8a: Call2 0x274

0x8b: Pop(1)
0x8c: GOTO 0x83

0x8d: GOTO 0x9c

0x8e: Push("all")
0x8f: Push("idle")
0x90: @ PlayAnimation(Stack[-2], Stack[-1])
0x91: Pop(2)
0x92: @ WaitForAnimEnd()
0x93: Pop(0)
0x94: Push( Stack[3 + Tasks[-1].StackPointer] )
0x95: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x96: GOTO 0x9c

0x97: Push("all")
0x98: Push("idle")
0x99: @ PlayAnimation(Stack[-2], Stack[-1])
0x9a: Pop(2)
0x9b: GOTO 0x92

0x9c: Return(); Pop(0)

0x9d: PushEmpty()
0x9e: PushEmpty(bool)
0x9f: Call2 0x331

0xa0: Pop(0)
0xa1: Pop(1); Push((bool) Stack[-1] == 0)
0xa2: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0xa3: Return(); Pop(0)

0xa4: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa5: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0xa6: Return(); Pop(0)

0xa7: PushEmpty(string, bool)
0xa8: Stack[-2] = Stack[-3]
0xa9: Push("")
0xaa: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xab: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xac: Stack[-1] = (bool) 0
0xad: GOTO 0xaf

0xae: Stack[-1] = (bool) 1
0xaf: Call2 0x284

0xb0: Pop(2)
0xb1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb2: Return(); Pop(0)

0xb3: PushEmpty()
0xb4: Push((int) 1)
0xb5: IF (Stack[-1] == 0) GOTO 0x16e; Pop(1)

0xb6: PushEmpty()
0xb7: Call2 0x293

0xb8: Pop(0)
0xb9: Push((int) 22397)
0xba: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbb: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xbc: PushEmpty(object, object)
0xbd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbf: Call2 0x2c7

0xc0: Pop(2)
0xc1: Push((int) 22383)
0xc2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc3: IF (Stack[-1] == 0) GOTO 0xf1; Pop(1)

0xc4: PushEmpty(bool, object)
0xc5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc6: Call2 0x2d6

0xc7: Pop(1)
0xc8: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xc9: PushEmpty(object, object)
0xca: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcc: Call2 0x2d0

0xcd: Pop(2)
0xce: PushEmpty(string)
0xcf: Stack[-1] = "Neutral"
0xd0: Call2 0x9d

0xd1: Pop(1)
0xd2: Push((int) 521181)
0xd3: @@ SetMessage(Stack[-1])
0xd4: Pop(1)
0xd5: @@ ClearReplies()
0xd6: Pop(0)
0xd7: Push((int) 528428)
0xd8: Push((int) 29813)
0xd9: Push((int) 29812)
0xda: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdb: Pop(3)
0xdc: Push((int) 528434)
0xdd: Push((int) 29819)
0xde: Push((int) 29818)
0xdf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe0: Pop(3)
0xe1: Return(); Pop(0)

0xe2: PushEmpty(string)
0xe3: Stack[-1] = "Neutral"
0xe4: Call2 0x9d

0xe5: Pop(1)
0xe6: Push((int) 521197)
0xe7: @@ SetMessage(Stack[-1])
0xe8: Pop(1)
0xe9: @@ ClearReplies()
0xea: Pop(0)
0xeb: Push((int) 521198)
0xec: Push((int) -1)
0xed: Push((int) 22395)
0xee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xef: Pop(3)
0xf0: Return(); Pop(0)

0xf1: Push((int) 29819)
0xf2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf3: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xf4: PushEmpty(string)
0xf5: Stack[-1] = "Neutral"
0xf6: Call2 0x9d

0xf7: Pop(1)
0xf8: Push((int) 528435)
0xf9: @@ SetMessage(Stack[-1])
0xfa: Pop(1)
0xfb: @@ ClearReplies()
0xfc: Pop(0)
0xfd: Push((int) 528436)
0xfe: Push((int) 29821)
0xff: Push((int) 29820)
0x100: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x101: Pop(3)
0x102: Return(); Pop(0)

0x103: Push((int) 29821)
0x104: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x105: IF (Stack[-1] == 0) GOTO 0x115; Pop(1)

0x106: PushEmpty(string)
0x107: Stack[-1] = "Neutral"
0x108: Call2 0x9d

0x109: Pop(1)
0x10a: Push((int) 528437)
0x10b: @@ SetMessage(Stack[-1])
0x10c: Pop(1)
0x10d: @@ ClearReplies()
0x10e: Pop(0)
0x10f: Push((int) 528438)
0x110: Push((int) 29815)
0x111: Push((int) 29822)
0x112: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x113: Pop(3)
0x114: Return(); Pop(0)

0x115: Push((int) 29813)
0x116: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x117: IF (Stack[-1] == 0) GOTO 0x127; Pop(1)

0x118: PushEmpty(string)
0x119: Stack[-1] = "Neutral"
0x11a: Call2 0x9d

0x11b: Pop(1)
0x11c: Push((int) 528429)
0x11d: @@ SetMessage(Stack[-1])
0x11e: Pop(1)
0x11f: @@ ClearReplies()
0x120: Pop(0)
0x121: Push((int) 528430)
0x122: Push((int) 29815)
0x123: Push((int) 29814)
0x124: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x125: Pop(3)
0x126: Return(); Pop(0)

0x127: Push((int) 29815)
0x128: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x129: IF (Stack[-1] == 0) GOTO 0x13e; Pop(1)

0x12a: PushEmpty(string)
0x12b: Stack[-1] = "Neutral"
0x12c: Call2 0x9d

0x12d: Pop(1)
0x12e: Push((int) 528431)
0x12f: @@ SetMessage(Stack[-1])
0x130: Pop(1)
0x131: @@ ClearReplies()
0x132: Pop(0)
0x133: Push((int) 528432)
0x134: Push((int) 29817)
0x135: Push((int) 29816)
0x136: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x137: Pop(3)
0x138: Push((int) 528439)
0x139: Push((int) 29817)
0x13a: Push((int) 29824)
0x13b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13c: Pop(3)
0x13d: Return(); Pop(0)

0x13e: Push((int) 29817)
0x13f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x140: IF (Stack[-1] == 0) GOTO 0x150; Pop(1)

0x141: PushEmpty(string)
0x142: Stack[-1] = "Neutral"
0x143: Call2 0x9d

0x144: Pop(1)
0x145: Push((int) 528433)
0x146: @@ SetMessage(Stack[-1])
0x147: Pop(1)
0x148: @@ ClearReplies()
0x149: Pop(0)
0x14a: Push((int) 521182)
0x14b: Push((int) 22396)
0x14c: Push((int) 22384)
0x14d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14e: Pop(3)
0x14f: Return(); Pop(0)

0x150: Push((int) 22396)
0x151: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x152: IF (Stack[-1] == 0) GOTO 0x162; Pop(1)

0x153: PushEmpty(string)
0x154: Stack[-1] = "Neutral"
0x155: Call2 0x9d

0x156: Pop(1)
0x157: Push((int) 521199)
0x158: @@ SetMessage(Stack[-1])
0x159: Pop(1)
0x15a: @@ ClearReplies()
0x15b: Pop(0)
0x15c: Push((int) 521200)
0x15d: Push((int) -1)
0x15e: Push((int) 22397)
0x15f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x160: Pop(3)
0x161: Return(); Pop(0)

0x162: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x163: PushEmpty(bool)
0x164: Call2 0x331

0x165: Pop(0)
0x166: IF (Stack[-1] == 0) GOTO 0x16a; Pop(1)

0x167: @ lshStopAnimation()
0x168: Pop(0)
0x169: GOTO 0x16c

0x16a: @ StopAnimation()
0x16b: Pop(0)
0x16c: Return(); Pop(0)

0x16d: GOTO 0xb4

0x16e: Return(); Pop(0)

0x16f: PushEmpty()
0x170: PushEmpty()
0x171: Call2 0x213

0x172: Pop(0)
0x173: PushEmpty(int, object)
0x174: Stack[-1] = Stack[-3]
0x175: Push(-2, 1); TaskCall(0)
0x176: Call2 0x0

0x177: Pop(-2, 1); TaskReturn
0x178: Pop(2)
0x179: Return(); Pop(0)

0x17a: PushEmpty(float, float)
0x17b: PushEmpty(bool)
0x17c: Call2 0x218

0x17d: Pop(0)
0x17e: Pop(1); Push((bool) Stack[-1] == 0)
0x17f: IF (Stack[-1] == 0) GOTO 0x183; Pop(1)

0x180: @ Hold()
0x181: Pop(0)
0x182: GOTO 0x17b

0x183: Push((int) 3)
0x184: @ rand(Stack[-2], Stack[-1])
0x185: Pop(1)
0x186: Push((int) 3)
0x187: Pop(1); Push(Stack[-2] + Stack[-1]);
0x188: @ Sleep(Stack[-1])
0x189: Pop(1)
0x18a: PushEmpty()
0x18b: Call2 0x1c2

0x18c: Pop(0)
0x18d: GOTO 0x17b

0x18e: Return(); Pop(2)

0x18f: PushEmpty(bool, bool)
0x190: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x191: @ IsLoaded(Stack[-1])
0x192: Pop(0)
0x193: PushEmpty(bool)
0x194: Stack[-1] = (bool) 0
0x195: Pop(0); Push((bool) Stack[-2] == 0)
0x196: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x197: PushEmpty(bool)
0x198: Call2 0x1c0

0x199: Pop(0)
0x19a: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x19b: Stack[-1] = (bool) 1
0x19c: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x19d: PushEmpty(object)
0x19e: Call2 0x29a

0x19f: Pop(0)
0x1a0: @ RemoveActor(Stack[-1])
0x1a1: Pop(1)
0x1a2: Return(); Pop(2)

0x1a3: PushEmpty()
0x1a4: Push("cleanup")
0x1a5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1a6: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x1a7: PushEmpty()
0x1a8: Call2 0x18f

0x1a9: Pop(0)
0x1aa: Return(); Pop(0)

0x1ab: @ StopGroup0()
0x1ac: Pop(0)
0x1ad: @ sync()
0x1ae: Pop(0)
0x1af: Return(); Pop(0)

0x1b0: PushEmpty(bool)
0x1b1: Stack[-1] = (bool) 0
0x1b2: Push( Stack[0 + Tasks[-1].StackPointer] )
0x1b3: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1b4: PushEmpty(bool)
0x1b5: Call2 0x1c0

0x1b6: Pop(0)
0x1b7: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1b8: Stack[-1] = (bool) 1
0x1b9: IF (Stack[-1] == 0) GOTO 0x1bf; Pop(1)

0x1ba: PushEmpty(object)
0x1bb: Call2 0x29a

0x1bc: Pop(0)
0x1bd: @ RemoveActor(Stack[-1])
0x1be: Pop(1)
0x1bf: Return(); Pop(0)

0x1c0: Stack[-1] = (bool) 1
0x1c1: Return(); Pop(0)

0x1c2: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x1c3: @ WaitForAnimEnd()
0x1c4: Pop(0)
0x1c5: PushEmpty(bool)
0x1c6: Call2 0x218

0x1c7: Pop(0)
0x1c8: Pop(1); Push((bool) Stack[-1] == 0)
0x1c9: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1ca: Return(); Pop(14)

0x1cb: PushEmpty(int)
0x1cc: Call2 0x2b6

0x1cd: Stack[-8] = Stack[-1]
0x1ce: Pop(1)
0x1cf: Stack[-6] = (int) 0
0x1d0: PushEmpty(bool)
0x1d1: Stack[-1] = (bool) 0
0x1d2: Push((int) 5)
0x1d3: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x1d4: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1d5: PushEmpty(bool)
0x1d6: Call2 0x218

0x1d7: Pop(0)
0x1d8: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1d9: Stack[-1] = (bool) 1
0x1da: IF (Stack[-1] == 0) GOTO 0x20e; Pop(1)

0x1db: Push((int) 3)
0x1dc: @ irand(Stack[-6], Stack[-1])
0x1dd: Pop(1)
0x1de: Push((int) 0)
0x1df: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1e0: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1e1: Push(Stack[-7])
0x1e2: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1e3: @ irand(Stack[-4], Stack[-7])
0x1e4: Pop(0)
0x1e5: Push("all")
0x1e6: PushEmpty(string, int)
0x1e7: Stack[-1] = Stack[-7]
0x1e8: Call2 0x2af

0x1e9: Pop(1)
0x1ea: @ PlayAnimation(Stack[-2], Stack[-1])
0x1eb: Pop(2)
0x1ec: @ WaitForAnimEnd(Stack[-3])
0x1ed: Pop(0)
0x1ee: Pop(0); Push((bool) Stack[-3] == 0)
0x1ef: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1f0: GOTO 0x20e

0x1f1: GOTO 0x203

0x1f2: Push((int) 1)
0x1f3: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1f4: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1f5: Push((int) 4)
0x1f6: @ rand(Stack[-3], Stack[-1])
0x1f7: Pop(1)
0x1f8: Push((int) 1)
0x1f9: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1fa: @ Sleep(Stack[-1], Stack[-2])
0x1fb: Pop(1)
0x1fc: Pop(0); Push((bool) Stack[-1] == 0)
0x1fd: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0x1fe: GOTO 0x20e

0x1ff: GOTO 0x203

0x200: Push(Stack[-6])
0x201: IF (Stack[-1] == 0) GOTO 0x203; Pop(1)

0x202: GOTO 0x20e

0x203: PushEmpty(bool)
0x204: Call2 0x211

0x205: Pop(0)
0x206: Pop(1); Push((bool) Stack[-1] == 0)
0x207: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x208: GOTO 0x20e

0x209: @ ResetAAS()
0x20a: Pop(0)
0x20b: Push((int) 1)
0x20c: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x20d: GOTO 0x1d0

0x20e: @ ResetAAS()
0x20f: Pop(0)
0x210: Return(); Pop(14)

0x211: Stack[-1] = (bool) 1
0x212: Return(); Pop(0)

0x213: @ StopAnimation()
0x214: Pop(0)
0x215: @ StopGroup0()
0x216: Pop(0)
0x217: Return(); Pop(0)

0x218: PushEmpty(bool, bool)
0x219: @ IsLoaded(Stack[-1])
0x21a: Pop(0)
0x21b: Stack[-3] = Stack[-1]
0x21c: Return(); Pop(2)

0x21d: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x21e: @@ GetPosition(Stack[-8])
0x21f: Pop(0)
0x220: @@ GetEyesHeight(Stack[-9])
0x221: Pop(0)
0x222: Push(CvectorIndex(Stack[-8], 1))
0x223: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x224: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x225: @ GetPosition(Stack[-7])
0x226: Pop(0)
0x227: @ GetEyesHeight(Stack[-9])
0x228: Pop(0)
0x229: Push(CvectorIndex(Stack[-7], 1))
0x22a: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x22b: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x22c: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x22d: Push(CvectorIndex(Stack[-6], 1))
0x22e: Stack[-1] = (int) 0
0x22f: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x230: Pop(0); Push(Stack[-6] | Stack[-6]);
0x231: Pop(1); Push(Sqrt(Stack[-1]))
0x232: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x233: Stack[-5] = -Stack[-6]; Pop(0);
0x234: Pop(0); Push(Stack[-6] * Stack[-19]);
0x235: PushEmpty(cvector, cvector)
0x236: Push(CVector(0.0, 1.0, 0.0))
0x237: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x238: Call2 0x2a0

0x239: Pop(1)
0x23a: Push((int) 25)
0x23b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x23c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x23d: Push(CVector(0.0, 10.0, 0.0))
0x23e: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x23f: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x240: @ IsOverrideActive(Stack[-2])
0x241: Pop(0)
0x242: Push(Stack[-2])
0x243: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x244: Stack[-21] = (bool) 0
0x245: Return(); Pop(18)

0x246: @ StopWorld()
0x247: Pop(0)
0x248: Push((bool) 1)
0x249: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x24a: Pop(1)
0x24b: Push(CvectorIndex(Stack[-4], 0))
0x24c: Push(CvectorIndex(Stack[-5], 2))
0x24d: @ Rotate(Stack[-2], Stack[-1])
0x24e: Pop(2)
0x24f: PushEmpty(bool)
0x250: Call2 0x331

0x251: Pop(0)
0x252: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x253: GOTO 0x25c

0x254: Push("head")
0x255: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x256: Pop(1)
0x257: Push(Stack[-1])
0x258: IF (Stack[-1] == 0) GOTO 0x25c; Pop(1)

0x259: Push("head")
0x25a: @ LookAsyncCamera(Stack[-1])
0x25b: Pop(1)
0x25c: @ CameraWaitForPlayFinish()
0x25d: Pop(0)
0x25e: @ ResumeWorld()
0x25f: Pop(0)
0x260: Stack[-21] = (bool) 1
0x261: Return(); Pop(18)

0x262: PushEmpty(bool, bool)
0x263: Push((bool) 1)
0x264: @ CameraSwitchToNormal(Stack[-1])
0x265: Pop(1)
0x266: PushEmpty(bool)
0x267: Call2 0x331

0x268: Pop(0)
0x269: IF (Stack[-1] == 0) GOTO 0x26b; Pop(1)

0x26a: GOTO 0x273

0x26b: Push("head")
0x26c: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x26d: Pop(1)
0x26e: Push(Stack[-1])
0x26f: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x270: Push("head")
0x271: @ UnlookAsync(Stack[-1])
0x272: Pop(1)
0x273: Return(); Pop(2)

0x274: PushEmpty(bool, float, float, bool, float, float)
0x275: @ lshHasAnimation(Stack[-3], Stack[-7])
0x276: Pop(0)
0x277: Push(Stack[-3])
0x278: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x279: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x27a: Pop(0)
0x27b: Push((bool) 0)
0x27c: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x27d: Pop(1)
0x27e: GOTO 0x283

0x27f: Push("Can't find lsh animation : ")
0x280: Pop(1); Push(Stack[-1] + Stack[-8]);
0x281: @ Trace(Stack[-1])
0x282: Pop(1)
0x283: Return(); Pop(6)

0x284: PushEmpty(bool, float, float, bool, float, float)
0x285: @ lshHasAnimation(Stack[-3], Stack[-8])
0x286: Pop(0)
0x287: Push(Stack[-3])
0x288: IF (Stack[-1] == 0) GOTO 0x28e; Pop(1)

0x289: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x28a: Pop(0)
0x28b: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x28c: Pop(0)
0x28d: GOTO 0x292

0x28e: Push("Can't find lsh animation : ")
0x28f: Pop(1); Push(Stack[-1] + Stack[-9]);
0x290: @ Trace(Stack[-1])
0x291: Pop(1)
0x292: Return(); Pop(6)

0x293: PushEmpty(bool)
0x294: Call2 0x331

0x295: Pop(0)
0x296: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x297: @ lshStopSpeech()
0x298: Pop(0)
0x299: Return(); Pop(0)

0x29a: PushEmpty(object, object)
0x29b: @ self(Stack[-1])
0x29c: Pop(0)
0x29d: Stack[-3] = Stack[-1]
0x29e: Return(); Pop(2)

0x29f: Stack[-1] = 0
0x2a0: PushEmpty(float, float)
0x2a1: Pop(0); Push(Stack[-3] | Stack[-3]);
0x2a2: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2a3: Push((float)0.0)
0x2a4: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2a5: IF (Stack[-1] == 0) GOTO 0x2a8; Pop(1)

0x2a6: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x2a7: Return(); Pop(2)

0x2a8: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x2a9: Return(); Pop(2)

0x2aa: PushEmpty(int, int)
0x2ab: @ GetVariable(Stack[-3], Stack[-1])
0x2ac: Pop(0)
0x2ad: Stack[-4] = Stack[-1]
0x2ae: Return(); Pop(2)

0x2af: PushEmpty(string, string)
0x2b0: Stack[-1] = "idle"
0x2b1: Push(Stack[-3])
0x2b2: IF (Stack[-1] == 0) GOTO 0x2b4; Pop(1)

0x2b3: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x2b4: Stack[-4] = Stack[-1]
0x2b5: Return(); Pop(2)

0x2b6: PushEmpty(int, bool, int, bool)
0x2b7: Stack[-2] = (int) 0
0x2b8: Push("all")
0x2b9: PushEmpty(string, int)
0x2ba: Stack[-1] = Stack[-5]
0x2bb: Call2 0x2af

0x2bc: Pop(1)
0x2bd: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2be: Pop(2)
0x2bf: Pop(0); Push((bool) Stack[-1] == 0)
0x2c0: IF (Stack[-1] == 0) GOTO 0x2c2; Pop(1)

0x2c1: GOTO 0x2c5

0x2c2: Push((int) 1)
0x2c3: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2c4: GOTO 0x2b8

0x2c5: Stack[-5] = Stack[-2]
0x2c6: Return(); Pop(4)

0x2c7: PushEmpty()
0x2c8: Push("b6q02")
0x2c9: Push((int) 2)
0x2ca: @ SetVariable(Stack[-2], Stack[-1])
0x2cb: Pop(2)
0x2cc: PushEmpty()
0x2cd: Call2 0x2e2

0x2ce: Pop(0)
0x2cf: Return(); Pop(0)

0x2d0: PushEmpty()
0x2d1: Push("oob6Prophet1")
0x2d2: Push((int) 1)
0x2d3: @ SetVariable(Stack[-2], Stack[-1])
0x2d4: Pop(2)
0x2d5: Return(); Pop(0)

0x2d6: PushEmpty()
0x2d7: PushEmpty(int, string)
0x2d8: Stack[-1] = "oob6Prophet1"
0x2d9: Call2 0x2aa

0x2da: Pop(1)
0x2db: Push((int) 0)
0x2dc: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2dd: IF (Stack[-1] == 0) GOTO 0x2e0; Pop(1)

0x2de: Stack[-2] = (bool) 1
0x2df: Return(); Pop(0)

0x2e0: Stack[-2] = (bool) 0
0x2e1: Return(); Pop(0)

0x2e2: PushEmpty(object, object)
0x2e3: Push((int) 268)
0x2e4: Push((int) 2)
0x2e5: Push((int) 521195)
0x2e6: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2e7: Pop(3)
0x2e8: PushEmpty(bool, object, int)
0x2e9: Stack[-2] = Stack[-4]
0x2ea: Stack[-1] = (int) 266
0x2eb: Call2 0x2fc

0x2ec: Pop(3)
0x2ed: Return(); Pop(2)

0x2ee: Stack[-1] = 0
0x2ef: PushEmpty(object, object)
0x2f0: @ GetDiaryRoot(Stack[-1])
0x2f1: Pop(0)
0x2f2: Pop(0); Push((bool) Stack[-1] == 0)
0x2f3: IF (Stack[-1] == 0) GOTO 0x2f9; Pop(1)

0x2f4: Push("Can't retrieve diary root")
0x2f5: @ Trace(Stack[-1])
0x2f6: Pop(1)
0x2f7: Stack[-3] = (bool) 0
0x2f8: Return(); Pop(2)

0x2f9: Stack[-3] = Stack[-1]
0x2fa: Return(); Pop(2)

0x2fb: Stack[-1] = 0
0x2fc: PushEmpty(object, object, int, object, object, int)
0x2fd: PushEmpty(object)
0x2fe: Call2 0x2ef

0x2ff: Stack[-4] = Stack[-1]
0x300: Pop(1)
0x301: @@ Find(Stack[-7], Stack[-2])
0x302: Pop(0)
0x303: Pop(0); Push((bool) Stack[-2] == 0)
0x304: IF (Stack[-1] == 0) GOTO 0x30b; Pop(1)

0x305: Push("Can't find diary parent with id: ")
0x306: Pop(1); Push(Stack[-1] + Stack[-8]);
0x307: @ Trace(Stack[-1])
0x308: Pop(1)
0x309: Stack[-9] = (bool) 0
0x30a: Return(); Pop(6)

0x30b: @@ AddChild(Stack[-8])
0x30c: Pop(0)
0x30d: Push((int) 7)
0x30e: @ SendWorldWndMessage(Stack[-1])
0x30f: Pop(1)
0x310: @@ GetCategory(Stack[-1])
0x311: Pop(0)
0x312: @ SetDiarySection(Stack[-1])
0x313: Pop(0)
0x314: Stack[-9] = (bool) 0
0x315: Return(); Pop(6)

0x316: Stack[-2] = 0
0x317: Stack[-3] = 0
0x318: PushEmpty(int, int)
0x319: Push("branch")
0x31a: @ GetVariable(Stack[-1], Stack[-2])
0x31b: Pop(1)
0x31c: Push((int) 0)
0x31d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x31e: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x31f: Stack[-3] = (int) 1
0x320: Return(); Pop(2)

0x321: GOTO 0x327

0x322: Push((int) 1)
0x323: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x324: IF (Stack[-1] == 0) GOTO 0x327; Pop(1)

0x325: Stack[-3] = (int) 2
0x326: Return(); Pop(2)

0x327: Stack[-3] = (int) 3
0x328: Return(); Pop(2)

0x329: Stack[-1] = (int) 518716
0x32a: Return(); Pop(0)

0x32b: Stack[-1] = (int) 518715
0x32c: Return(); Pop(0)

0x32d: Stack[-1] = "ui/NPC_Prophet.png"
0x32e: Return(); Pop(0)

0x32f: Stack[-1] = "ui/NPC_Prophet_b.png"
0x330: Return(); Pop(0)

0x331: Stack[-1] = (bool) 0
0x332: Return(); Pop(0)

