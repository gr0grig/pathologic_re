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
	b5q02
	quest_b5_02
	remove_prophet
	oob5Prophet1
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
	CameraTransit (2 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	LookAsync (3 args)
	lshStopSpeech (0 args)
	self (1 args)
	GetVariable (2 args)
	Trigger (2 args)
	HasAnimation (3 args)
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x171
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9f Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool, bool) Params = 0
		EVENT_0 Op = 0x177 Vars = (object)
		EVENT_26 Op = 0x1a8 Vars = (string)
		EVENT_6 Op = 0x1b0 Vars = ()
		EVENT_7 Op = 0x1f1 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x279

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x3a1

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x39f

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x3a3

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x3a5

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x38e

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
0x41: Call2 0x2bd

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
0x4f: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x50: PushEmpty(string)
0x51: Stack[-1] = "Neutral"
0x52: Call2 0x89

0x53: Pop(1)
0x54: Push((int) 520182)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b: Call2 0x34c

0x5c: Pop(1)
0x5d: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x5e: Push((int) 520183)
0x5f: Push((int) 21374)
0x60: Push((int) 21373)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: Push((int) 520201)
0x64: Push((int) -1)
0x65: Push((int) 21393)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: GOTO 0x6b

0x69: Return(); Pop(0)

0x6a: GOTO 0x4e

0x6b: PushEmpty(bool)
0x6c: Call2 0x3a7

0x6d: Pop(0)
0x6e: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x6f: @ lshWaitForAnimEnd()
0x70: Pop(0)
0x71: Push( Stack[3 + Tasks[-1].StackPointer] )
0x72: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x73: GOTO 0x79

0x74: PushEmpty(string)
0x75: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x76: Call2 0x2ce

0x77: Pop(1)
0x78: GOTO 0x6f

0x79: GOTO 0x88

0x7a: Push("all")
0x7b: Push("idle")
0x7c: @ PlayAnimation(Stack[-2], Stack[-1])
0x7d: Pop(2)
0x7e: @ WaitForAnimEnd()
0x7f: Pop(0)
0x80: Push( Stack[3 + Tasks[-1].StackPointer] )
0x81: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x82: GOTO 0x88

0x83: Push("all")
0x84: Push("idle")
0x85: @ PlayAnimation(Stack[-2], Stack[-1])
0x86: Pop(2)
0x87: GOTO 0x7e

0x88: Return(); Pop(0)

0x89: PushEmpty()
0x8a: PushEmpty(bool)
0x8b: Call2 0x3a7

0x8c: Pop(0)
0x8d: Pop(1); Push((bool) Stack[-1] == 0)
0x8e: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x8f: Return(); Pop(0)

0x90: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x91: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x92: Return(); Pop(0)

0x93: PushEmpty(string, bool)
0x94: Stack[-2] = Stack[-3]
0x95: Push("")
0x96: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x97: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x98: Stack[-1] = (bool) 0
0x99: GOTO 0x9b

0x9a: Stack[-1] = (bool) 1
0x9b: Call2 0x2de

0x9c: Pop(2)
0x9d: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x9e: Return(); Pop(0)

0x9f: PushEmpty()
0xa0: Push((int) 1)
0xa1: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0xa2: PushEmpty()
0xa3: Call2 0x2f8

0xa4: Pop(0)
0xa5: Push((int) 21373)
0xa6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa7: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xa8: PushEmpty(object, object)
0xa9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xab: Call2 0x346

0xac: Pop(2)
0xad: Push((int) 21383)
0xae: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xaf: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xb0: PushEmpty(object, object)
0xb1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb3: Call2 0x338

0xb4: Pop(2)
0xb5: Push((int) 21386)
0xb6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb7: IF (Stack[-1] == 0) GOTO 0xbd; Pop(1)

0xb8: PushEmpty(object, object)
0xb9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xba: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbb: Call2 0x338

0xbc: Pop(2)
0xbd: Push((int) 21372)
0xbe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbf: IF (Stack[-1] == 0) GOTO 0xd9; Pop(1)

0xc0: PushEmpty(string)
0xc1: Stack[-1] = "Neutral"
0xc2: Call2 0x89

0xc3: Pop(1)
0xc4: Push((int) 520182)
0xc5: @@ SetMessage(Stack[-1])
0xc6: Pop(1)
0xc7: @@ ClearReplies()
0xc8: Pop(0)
0xc9: PushEmpty(bool, object)
0xca: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcb: Call2 0x34c

0xcc: Pop(1)
0xcd: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xce: Push((int) 520183)
0xcf: Push((int) 21374)
0xd0: Push((int) 21373)
0xd1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd2: Pop(3)
0xd3: Push((int) 520201)
0xd4: Push((int) -1)
0xd5: Push((int) 21393)
0xd6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd7: Pop(3)
0xd8: Return(); Pop(0)

0xd9: Push((int) 21374)
0xda: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdb: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xdc: PushEmpty(string)
0xdd: Stack[-1] = "Neutral"
0xde: Call2 0x89

0xdf: Pop(1)
0xe0: Push((int) 520184)
0xe1: @@ SetMessage(Stack[-1])
0xe2: Pop(1)
0xe3: @@ ClearReplies()
0xe4: Pop(0)
0xe5: Push((int) 520185)
0xe6: Push((int) 21376)
0xe7: Push((int) 21375)
0xe8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe9: Pop(3)
0xea: Return(); Pop(0)

0xeb: Push((int) 21390)
0xec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xed: IF (Stack[-1] == 0) GOTO 0xee; Pop(1)

0xee: Push((int) 29678)
0xef: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf0: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xf1: PushEmpty(string)
0xf2: Stack[-1] = "Neutral"
0xf3: Call2 0x89

0xf4: Pop(1)
0xf5: Push((int) 528308)
0xf6: @@ SetMessage(Stack[-1])
0xf7: Pop(1)
0xf8: @@ ClearReplies()
0xf9: Pop(0)
0xfa: Push((int) 520200)
0xfb: Push((int) 21376)
0xfc: Push((int) 21391)
0xfd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfe: Pop(3)
0xff: Return(); Pop(0)

0x100: Push((int) 21376)
0x101: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x102: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0x103: PushEmpty(string)
0x104: Stack[-1] = "Neutral"
0x105: Call2 0x89

0x106: Pop(1)
0x107: Push((int) 520186)
0x108: @@ SetMessage(Stack[-1])
0x109: Pop(1)
0x10a: @@ ClearReplies()
0x10b: Pop(0)
0x10c: Push((int) 520187)
0x10d: Push((int) 21378)
0x10e: Push((int) 21377)
0x10f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x110: Pop(3)
0x111: Push((int) 520197)
0x112: Push((int) 21378)
0x113: Push((int) 21387)
0x114: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x115: Pop(3)
0x116: Return(); Pop(0)

0x117: Push((int) 21378)
0x118: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x119: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0x11a: PushEmpty(string)
0x11b: Stack[-1] = "Neutral"
0x11c: Call2 0x89

0x11d: Pop(1)
0x11e: Push((int) 520188)
0x11f: @@ SetMessage(Stack[-1])
0x120: Pop(1)
0x121: @@ ClearReplies()
0x122: Pop(0)
0x123: Push((int) 520189)
0x124: Push((int) 21380)
0x125: Push((int) 21379)
0x126: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x127: Pop(3)
0x128: Push((int) 520194)
0x129: Push((int) 21385)
0x12a: Push((int) 21384)
0x12b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12c: Pop(3)
0x12d: Return(); Pop(0)

0x12e: Push((int) 21385)
0x12f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x130: IF (Stack[-1] == 0) GOTO 0x140; Pop(1)

0x131: PushEmpty(string)
0x132: Stack[-1] = "Neutral"
0x133: Call2 0x89

0x134: Pop(1)
0x135: Push((int) 520195)
0x136: @@ SetMessage(Stack[-1])
0x137: Pop(1)
0x138: @@ ClearReplies()
0x139: Pop(0)
0x13a: Push((int) 520196)
0x13b: Push((int) -1)
0x13c: Push((int) 21386)
0x13d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13e: Pop(3)
0x13f: Return(); Pop(0)

0x140: Push((int) 21380)
0x141: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x142: IF (Stack[-1] == 0) GOTO 0x152; Pop(1)

0x143: PushEmpty(string)
0x144: Stack[-1] = "Neutral"
0x145: Call2 0x89

0x146: Pop(1)
0x147: Push((int) 520190)
0x148: @@ SetMessage(Stack[-1])
0x149: Pop(1)
0x14a: @@ ClearReplies()
0x14b: Pop(0)
0x14c: Push((int) 520191)
0x14d: Push((int) 21382)
0x14e: Push((int) 21381)
0x14f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x150: Pop(3)
0x151: Return(); Pop(0)

0x152: Push((int) 21382)
0x153: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x154: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0x155: PushEmpty(string)
0x156: Stack[-1] = "Neutral"
0x157: Call2 0x89

0x158: Pop(1)
0x159: Push((int) 520192)
0x15a: @@ SetMessage(Stack[-1])
0x15b: Pop(1)
0x15c: @@ ClearReplies()
0x15d: Pop(0)
0x15e: Push((int) 520193)
0x15f: Push((int) -1)
0x160: Push((int) 21383)
0x161: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x162: Pop(3)
0x163: Return(); Pop(0)

0x164: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x165: PushEmpty(bool)
0x166: Call2 0x3a7

0x167: Pop(0)
0x168: IF (Stack[-1] == 0) GOTO 0x16c; Pop(1)

0x169: @ lshStopAnimation()
0x16a: Pop(0)
0x16b: GOTO 0x16e

0x16c: @ StopAnimation()
0x16d: Pop(0)
0x16e: Return(); Pop(0)

0x16f: GOTO 0xa0

0x170: Return(); Pop(0)

0x171: PushEmpty(float, float)
0x172: Stack[-2] = (int) 300
0x173: Stack[-1] = (int) 100
0x174: Call2 0x182

0x175: Pop(2)
0x176: Return(); Pop(0)

0x177: PushEmpty()
0x178: PushEmpty()
0x179: Call2 0x208

0x17a: Pop(0)
0x17b: PushEmpty(int, object)
0x17c: Stack[-1] = Stack[-3]
0x17d: Push(-2, 1); TaskCall(0)
0x17e: Call2 0x0

0x17f: Pop(-2, 1); TaskReturn
0x180: Pop(2)
0x181: Return(); Pop(0)

0x182: PushEmpty(float, bool, float, bool)
0x183: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x184: Push((int) 3)
0x185: @ rand(Stack[-3], Stack[-1])
0x186: Pop(1)
0x187: Push((int) 3)
0x188: Pop(1); Push(Stack[-3] + Stack[-1]);
0x189: @ Sleep(Stack[-1], Stack[-2])
0x18a: Pop(1)
0x18b: Stack[6 + Tasks[-1].StackPointer] = (bool)1
0x18c: PushEmpty(float, float)
0x18d: Stack[-2] = Stack[-8]
0x18e: Stack[-1] = Stack[-7]
0x18f: Call2 0x1c7

0x190: Pop(2)
0x191: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x192: GOTO 0x184

0x193: Return(); Pop(4)

0x194: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x195: PushEmpty(bool)
0x196: Stack[-1] = (bool) 0
0x197: PushEmpty(bool)
0x198: Call2 0x274

0x199: Pop(0)
0x19a: Pop(1); Push((bool) Stack[-1] == 0)
0x19b: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x19c: PushEmpty(bool)
0x19d: Call2 0x1c5

0x19e: Pop(0)
0x19f: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x1a0: Stack[-1] = (bool) 1
0x1a1: IF (Stack[-1] == 0) GOTO 0x1a7; Pop(1)

0x1a2: PushEmpty(object)
0x1a3: Call2 0x2ff

0x1a4: Pop(0)
0x1a5: @ RemoveActor(Stack[-1])
0x1a6: Pop(1)
0x1a7: Return(); Pop(0)

0x1a8: PushEmpty()
0x1a9: Push("cleanup")
0x1aa: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1ab: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x1ac: PushEmpty()
0x1ad: Call2 0x194

0x1ae: Pop(0)
0x1af: Return(); Pop(0)

0x1b0: Push( Stack[6 + Tasks[-1].StackPointer] )
0x1b1: IF (Stack[-1] == 0) GOTO 0x1b5; Pop(1)

0x1b2: PushEmpty()
0x1b3: Call2 0x208

0x1b4: Pop(0)
0x1b5: PushEmpty(bool)
0x1b6: Stack[-1] = (bool) 0
0x1b7: Push( Stack[5 + Tasks[-1].StackPointer] )
0x1b8: IF (Stack[-1] == 0) GOTO 0x1be; Pop(1)

0x1b9: PushEmpty(bool)
0x1ba: Call2 0x1c5

0x1bb: Pop(0)
0x1bc: IF (Stack[-1] == 0) GOTO 0x1be; Pop(1)

0x1bd: Stack[-1] = (bool) 1
0x1be: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1bf: PushEmpty(object)
0x1c0: Call2 0x2ff

0x1c1: Pop(0)
0x1c2: @ RemoveActor(Stack[-1])
0x1c3: Pop(1)
0x1c4: Return(); Pop(0)

0x1c5: Stack[-1] = (bool) 1
0x1c6: Return(); Pop(0)

0x1c7: PushEmpty()
0x1c8: PushEmpty(bool)
0x1c9: Call2 0x274

0x1ca: Pop(0)
0x1cb: Pop(1); Push((bool) Stack[-1] == 0)
0x1cc: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1cd: Return(); Pop(0)

0x1ce: Push("player")
0x1cf: @ FindActor(Stack[-4], Stack[-1])
0x1d0: Pop(1)
0x1d1: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1d2: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1d3: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x1d4: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x1d5: Push((int) 10)
0x1d6: Push((float)1.0)
0x1d7: @ SetTimer(Stack[-2], Stack[-1])
0x1d8: Pop(2)
0x1d9: PushEmpty()
0x1da: Call2 0x216

0x1db: Pop(0)
0x1dc: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1dd: IF (Stack[-1] == 0) GOTO 0x1e1; Pop(1)

0x1de: Push((int) 10)
0x1df: @ KillTimer(Stack[-1])
0x1e0: Pop(1)
0x1e1: Return(); Pop(0)

0x1e2: PushEmpty(float, float)
0x1e3: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x1e4: IF (Stack[-1] == 0) GOTO 0x1e7; Pop(1)

0x1e5: Stack[-3] = (bool) 0
0x1e6: Return(); Pop(2)

0x1e7: PushEmpty(float, object)
0x1e8: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1e9: Call2 0x26c

0x1ea: Pop(1)
0x1eb: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1ec: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1ed: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x1ee: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x1ef: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x1f0: Return(); Pop(2)

0x1f1: PushEmpty()
0x1f2: Push((int) 10)
0x1f3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1f4: IF (Stack[-1] == 0) GOTO 0x207; Pop(1)

0x1f5: PushEmpty(bool)
0x1f6: Call2 0x1e2

0x1f7: Pop(0)
0x1f8: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x1f9: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x1fa: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1fb: PushEmpty(object)
0x1fc: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1fd: Call2 0x2ed

0x1fe: Pop(1)
0x1ff: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x200: GOTO 0x207

0x201: Push( Stack[2 + Tasks[-1].StackPointer] )
0x202: IF (Stack[-1] == 0) GOTO 0x207; Pop(1)

0x203: Push("head")
0x204: @ UnlookAsync(Stack[-1])
0x205: Pop(1)
0x206: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x207: Return(); Pop(0)

0x208: PushEmpty()
0x209: Call2 0x267

0x20a: Pop(0)
0x20b: Push((int) 10)
0x20c: @ KillTimer(Stack[-1])
0x20d: Pop(1)
0x20e: Push( Stack[2 + Tasks[-1].StackPointer] )
0x20f: IF (Stack[-1] == 0) GOTO 0x214; Pop(1)

0x210: Push("head")
0x211: @ UnlookAsync(Stack[-1])
0x212: Pop(1)
0x213: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x214: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x215: Return(); Pop(0)

0x216: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x217: @ WaitForAnimEnd()
0x218: Pop(0)
0x219: PushEmpty(bool)
0x21a: Call2 0x274

0x21b: Pop(0)
0x21c: Pop(1); Push((bool) Stack[-1] == 0)
0x21d: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0x21e: Return(); Pop(14)

0x21f: PushEmpty(int)
0x220: Call2 0x327

0x221: Stack[-8] = Stack[-1]
0x222: Pop(1)
0x223: Stack[-6] = (int) 0
0x224: PushEmpty(bool)
0x225: Stack[-1] = (bool) 0
0x226: Push((int) 5)
0x227: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x228: IF (Stack[-1] == 0) GOTO 0x22e; Pop(1)

0x229: PushEmpty(bool)
0x22a: Call2 0x274

0x22b: Pop(0)
0x22c: IF (Stack[-1] == 0) GOTO 0x22e; Pop(1)

0x22d: Stack[-1] = (bool) 1
0x22e: IF (Stack[-1] == 0) GOTO 0x262; Pop(1)

0x22f: Push((int) 3)
0x230: @ irand(Stack[-6], Stack[-1])
0x231: Pop(1)
0x232: Push((int) 0)
0x233: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x234: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x235: Push(Stack[-7])
0x236: IF (Stack[-1] == 0) GOTO 0x245; Pop(1)

0x237: @ irand(Stack[-4], Stack[-7])
0x238: Pop(0)
0x239: Push("all")
0x23a: PushEmpty(string, int)
0x23b: Stack[-1] = Stack[-7]
0x23c: Call2 0x320

0x23d: Pop(1)
0x23e: @ PlayAnimation(Stack[-2], Stack[-1])
0x23f: Pop(2)
0x240: @ WaitForAnimEnd(Stack[-3])
0x241: Pop(0)
0x242: Pop(0); Push((bool) Stack[-3] == 0)
0x243: IF (Stack[-1] == 0) GOTO 0x245; Pop(1)

0x244: GOTO 0x262

0x245: GOTO 0x257

0x246: Push((int) 1)
0x247: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x248: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x249: Push((int) 4)
0x24a: @ rand(Stack[-3], Stack[-1])
0x24b: Pop(1)
0x24c: Push((int) 1)
0x24d: Pop(1); Push(Stack[-3] + Stack[-1]);
0x24e: @ Sleep(Stack[-1], Stack[-2])
0x24f: Pop(1)
0x250: Pop(0); Push((bool) Stack[-1] == 0)
0x251: IF (Stack[-1] == 0) GOTO 0x253; Pop(1)

0x252: GOTO 0x262

0x253: GOTO 0x257

0x254: Push(Stack[-6])
0x255: IF (Stack[-1] == 0) GOTO 0x257; Pop(1)

0x256: GOTO 0x262

0x257: PushEmpty(bool)
0x258: Call2 0x265

0x259: Pop(0)
0x25a: Pop(1); Push((bool) Stack[-1] == 0)
0x25b: IF (Stack[-1] == 0) GOTO 0x25d; Pop(1)

0x25c: GOTO 0x262

0x25d: @ ResetAAS()
0x25e: Pop(0)
0x25f: Push((int) 1)
0x260: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x261: GOTO 0x224

0x262: @ ResetAAS()
0x263: Pop(0)
0x264: Return(); Pop(14)

0x265: Stack[-1] = (bool) 1
0x266: Return(); Pop(0)

0x267: @ StopAnimation()
0x268: Pop(0)
0x269: @ StopGroup0()
0x26a: Pop(0)
0x26b: Return(); Pop(0)

0x26c: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x26d: @ GetPosition(Stack[-3])
0x26e: Pop(0)
0x26f: @@ GetPosition(Stack[-2])
0x270: Pop(0)
0x271: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x272: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x273: Return(); Pop(6)

0x274: PushEmpty(bool, bool)
0x275: @ IsLoaded(Stack[-1])
0x276: Pop(0)
0x277: Stack[-3] = Stack[-1]
0x278: Return(); Pop(2)

0x279: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x27a: @@ GetPosition(Stack[-8])
0x27b: Pop(0)
0x27c: @@ GetEyesHeight(Stack[-9])
0x27d: Pop(0)
0x27e: Push(CvectorIndex(Stack[-8], 1))
0x27f: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x280: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x281: @ GetPosition(Stack[-7])
0x282: Pop(0)
0x283: @ GetEyesHeight(Stack[-9])
0x284: Pop(0)
0x285: Push(CvectorIndex(Stack[-7], 1))
0x286: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x287: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x288: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x289: Push(CvectorIndex(Stack[-6], 1))
0x28a: Stack[-1] = (int) 0
0x28b: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x28c: Pop(0); Push(Stack[-6] | Stack[-6]);
0x28d: Pop(1); Push(Sqrt(Stack[-1]))
0x28e: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x28f: Stack[-5] = -Stack[-6]; Pop(0);
0x290: Pop(0); Push(Stack[-6] * Stack[-19]);
0x291: PushEmpty(cvector, cvector)
0x292: Push(CVector(0.0, 1.0, 0.0))
0x293: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x294: Call2 0x305

0x295: Pop(1)
0x296: Push((int) 25)
0x297: Pop(2); Push(Stack[-2] * Stack[-1]);
0x298: Pop(2); Push(Stack[-2] + Stack[-1]);
0x299: Push(CVector(0.0, 10.0, 0.0))
0x29a: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x29b: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x29c: @ IsOverrideActive(Stack[-2])
0x29d: Pop(0)
0x29e: Push(Stack[-2])
0x29f: IF (Stack[-1] == 0) GOTO 0x2a2; Pop(1)

0x2a0: Stack[-21] = (bool) 0
0x2a1: Return(); Pop(18)

0x2a2: @ StopWorld()
0x2a3: Pop(0)
0x2a4: @ CameraTransit(Stack[-3], Stack[-5])
0x2a5: Pop(0)
0x2a6: Push(CvectorIndex(Stack[-4], 0))
0x2a7: Push(CvectorIndex(Stack[-5], 2))
0x2a8: @ Rotate(Stack[-2], Stack[-1])
0x2a9: Pop(2)
0x2aa: PushEmpty(bool)
0x2ab: Call2 0x3a7

0x2ac: Pop(0)
0x2ad: IF (Stack[-1] == 0) GOTO 0x2af; Pop(1)

0x2ae: GOTO 0x2b7

0x2af: Push("head")
0x2b0: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2b1: Pop(1)
0x2b2: Push(Stack[-1])
0x2b3: IF (Stack[-1] == 0) GOTO 0x2b7; Pop(1)

0x2b4: Push("head")
0x2b5: @ LookAsyncCamera(Stack[-1])
0x2b6: Pop(1)
0x2b7: @ CameraWaitForPlayFinish()
0x2b8: Pop(0)
0x2b9: @ ResumeWorld()
0x2ba: Pop(0)
0x2bb: Stack[-21] = (bool) 1
0x2bc: Return(); Pop(18)

0x2bd: PushEmpty(bool, bool)
0x2be: @ CameraSwitchToNormal()
0x2bf: Pop(0)
0x2c0: PushEmpty(bool)
0x2c1: Call2 0x3a7

0x2c2: Pop(0)
0x2c3: IF (Stack[-1] == 0) GOTO 0x2c5; Pop(1)

0x2c4: GOTO 0x2cd

0x2c5: Push("head")
0x2c6: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2c7: Pop(1)
0x2c8: Push(Stack[-1])
0x2c9: IF (Stack[-1] == 0) GOTO 0x2cd; Pop(1)

0x2ca: Push("head")
0x2cb: @ UnlookAsync(Stack[-1])
0x2cc: Pop(1)
0x2cd: Return(); Pop(2)

0x2ce: PushEmpty(bool, float, float, bool, float, float)
0x2cf: @ lshHasAnimation(Stack[-3], Stack[-7])
0x2d0: Pop(0)
0x2d1: Push(Stack[-3])
0x2d2: IF (Stack[-1] == 0) GOTO 0x2d9; Pop(1)

0x2d3: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x2d4: Pop(0)
0x2d5: Push((bool) 0)
0x2d6: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2d7: Pop(1)
0x2d8: GOTO 0x2dd

0x2d9: Push("Can't find lsh animation : ")
0x2da: Pop(1); Push(Stack[-1] + Stack[-8]);
0x2db: @ Trace(Stack[-1])
0x2dc: Pop(1)
0x2dd: Return(); Pop(6)

0x2de: PushEmpty(bool, float, float, bool, float, float)
0x2df: @ lshHasAnimation(Stack[-3], Stack[-8])
0x2e0: Pop(0)
0x2e1: Push(Stack[-3])
0x2e2: IF (Stack[-1] == 0) GOTO 0x2e8; Pop(1)

0x2e3: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x2e4: Pop(0)
0x2e5: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x2e6: Pop(0)
0x2e7: GOTO 0x2ec

0x2e8: Push("Can't find lsh animation : ")
0x2e9: Pop(1); Push(Stack[-1] + Stack[-9]);
0x2ea: @ Trace(Stack[-1])
0x2eb: Pop(1)
0x2ec: Return(); Pop(6)

0x2ed: PushEmpty(float, cvector, float, cvector)
0x2ee: @@ GetEyesHeight(Stack[-2])
0x2ef: Pop(0)
0x2f0: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x2f1: Push(CvectorIndex(Stack[-1], 1))
0x2f2: Stack[-1] = Stack[-3]
0x2f3: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x2f4: Push("head")
0x2f5: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x2f6: Pop(1)
0x2f7: Return(); Pop(4)

0x2f8: PushEmpty(bool)
0x2f9: Call2 0x3a7

0x2fa: Pop(0)
0x2fb: IF (Stack[-1] == 0) GOTO 0x2fe; Pop(1)

0x2fc: @ lshStopSpeech()
0x2fd: Pop(0)
0x2fe: Return(); Pop(0)

0x2ff: PushEmpty(object, object)
0x300: @ self(Stack[-1])
0x301: Pop(0)
0x302: Stack[-3] = Stack[-1]
0x303: Return(); Pop(2)

0x304: Stack[-1] = 0
0x305: PushEmpty(float, float)
0x306: Pop(0); Push(Stack[-3] | Stack[-3]);
0x307: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x308: Push((float)0.0)
0x309: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x30a: IF (Stack[-1] == 0) GOTO 0x30d; Pop(1)

0x30b: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x30c: Return(); Pop(2)

0x30d: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x30e: Return(); Pop(2)

0x30f: PushEmpty(int, int)
0x310: @ GetVariable(Stack[-3], Stack[-1])
0x311: Pop(0)
0x312: Stack[-4] = Stack[-1]
0x313: Return(); Pop(2)

0x314: PushEmpty(object, object)
0x315: @ FindActor(Stack[-1], Stack[-4])
0x316: Pop(0)
0x317: Pop(0); Push((bool) Stack[-1] == 0)
0x318: IF (Stack[-1] == 0) GOTO 0x31b; Pop(1)

0x319: Stack[-5] = (bool) 0
0x31a: Return(); Pop(2)

0x31b: @ Trigger(Stack[-1], Stack[-3])
0x31c: Pop(0)
0x31d: Stack[-5] = (bool) 1
0x31e: Return(); Pop(2)

0x31f: Stack[-1] = 0
0x320: PushEmpty(string, string)
0x321: Stack[-1] = "idle"
0x322: Push(Stack[-3])
0x323: IF (Stack[-1] == 0) GOTO 0x325; Pop(1)

0x324: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x325: Stack[-4] = Stack[-1]
0x326: Return(); Pop(2)

0x327: PushEmpty(int, bool, int, bool)
0x328: Stack[-2] = (int) 0
0x329: Push("all")
0x32a: PushEmpty(string, int)
0x32b: Stack[-1] = Stack[-5]
0x32c: Call2 0x320

0x32d: Pop(1)
0x32e: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x32f: Pop(2)
0x330: Pop(0); Push((bool) Stack[-1] == 0)
0x331: IF (Stack[-1] == 0) GOTO 0x333; Pop(1)

0x332: GOTO 0x336

0x333: Push((int) 1)
0x334: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x335: GOTO 0x329

0x336: Stack[-5] = Stack[-2]
0x337: Return(); Pop(4)

0x338: PushEmpty()
0x339: Push("b5q02")
0x33a: Push((int) 2)
0x33b: @ SetVariable(Stack[-2], Stack[-1])
0x33c: Pop(2)
0x33d: PushEmpty()
0x33e: Call2 0x358

0x33f: Pop(0)
0x340: PushEmpty(bool, string, string)
0x341: Stack[-2] = "quest_b5_02"
0x342: Stack[-1] = "remove_prophet"
0x343: Call2 0x314

0x344: Pop(3)
0x345: Return(); Pop(0)

0x346: PushEmpty()
0x347: Push("oob5Prophet1")
0x348: Push((int) 1)
0x349: @ SetVariable(Stack[-2], Stack[-1])
0x34a: Pop(2)
0x34b: Return(); Pop(0)

0x34c: PushEmpty()
0x34d: PushEmpty(int, string)
0x34e: Stack[-1] = "oob5Prophet1"
0x34f: Call2 0x30f

0x350: Pop(1)
0x351: Push((int) 0)
0x352: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x353: IF (Stack[-1] == 0) GOTO 0x356; Pop(1)

0x354: Stack[-2] = (bool) 1
0x355: Return(); Pop(0)

0x356: Stack[-2] = (bool) 0
0x357: Return(); Pop(0)

0x358: PushEmpty(object, object)
0x359: Push((int) 251)
0x35a: Push((int) 2)
0x35b: Push((int) 520667)
0x35c: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x35d: Pop(3)
0x35e: PushEmpty(bool, object, int)
0x35f: Stack[-2] = Stack[-4]
0x360: Stack[-1] = (int) 249
0x361: Call2 0x372

0x362: Pop(3)
0x363: Return(); Pop(2)

0x364: Stack[-1] = 0
0x365: PushEmpty(object, object)
0x366: @ GetDiaryRoot(Stack[-1])
0x367: Pop(0)
0x368: Pop(0); Push((bool) Stack[-1] == 0)
0x369: IF (Stack[-1] == 0) GOTO 0x36f; Pop(1)

0x36a: Push("Can't retrieve diary root")
0x36b: @ Trace(Stack[-1])
0x36c: Pop(1)
0x36d: Stack[-3] = (bool) 0
0x36e: Return(); Pop(2)

0x36f: Stack[-3] = Stack[-1]
0x370: Return(); Pop(2)

0x371: Stack[-1] = 0
0x372: PushEmpty(object, object, int, object, object, int)
0x373: PushEmpty(object)
0x374: Call2 0x365

0x375: Stack[-4] = Stack[-1]
0x376: Pop(1)
0x377: @@ Find(Stack[-7], Stack[-2])
0x378: Pop(0)
0x379: Pop(0); Push((bool) Stack[-2] == 0)
0x37a: IF (Stack[-1] == 0) GOTO 0x381; Pop(1)

0x37b: Push("Can't find diary parent with id: ")
0x37c: Pop(1); Push(Stack[-1] + Stack[-8]);
0x37d: @ Trace(Stack[-1])
0x37e: Pop(1)
0x37f: Stack[-9] = (bool) 0
0x380: Return(); Pop(6)

0x381: @@ AddChild(Stack[-8])
0x382: Pop(0)
0x383: Push((int) 7)
0x384: @ SendWorldWndMessage(Stack[-1])
0x385: Pop(1)
0x386: @@ GetCategory(Stack[-1])
0x387: Pop(0)
0x388: @ SetDiarySection(Stack[-1])
0x389: Pop(0)
0x38a: Stack[-9] = (bool) 0
0x38b: Return(); Pop(6)

0x38c: Stack[-2] = 0
0x38d: Stack[-3] = 0
0x38e: PushEmpty(int, int)
0x38f: Push("branch")
0x390: @ GetVariable(Stack[-1], Stack[-2])
0x391: Pop(1)
0x392: Push((int) 0)
0x393: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x394: IF (Stack[-1] == 0) GOTO 0x398; Pop(1)

0x395: Stack[-3] = (int) 1
0x396: Return(); Pop(2)

0x397: GOTO 0x39d

0x398: Push((int) 1)
0x399: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x39a: IF (Stack[-1] == 0) GOTO 0x39d; Pop(1)

0x39b: Stack[-3] = (int) 2
0x39c: Return(); Pop(2)

0x39d: Stack[-3] = (int) 3
0x39e: Return(); Pop(2)

0x39f: Stack[-1] = (int) 518716
0x3a0: Return(); Pop(0)

0x3a1: Stack[-1] = (int) 518715
0x3a2: Return(); Pop(0)

0x3a3: Stack[-1] = "ui/NPC_Prophet.png"
0x3a4: Return(); Pop(0)

0x3a5: Stack[-1] = "ui/NPC_Prophet_b.png"
0x3a6: Return(); Pop(0)

0x3a7: Stack[-1] = (bool) 0
0x3a8: Return(); Pop(0)

