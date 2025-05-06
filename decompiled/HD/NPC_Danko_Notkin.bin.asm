GlobalVarCount = 2
	G_VAR_0 object 
	G_VAR_1 bool 

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
	Pride
	Distrust
	Smile
	Think
	Triumph
	player
	GetPosition
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	GetProperty
	m
	Can't find lsh animation : 
	ood3Notkin2
	ood3Notkin3
	ood4Notkin2
	ood4Notkin3
	ood7Notkin1
	KnowTwoSouls
	KnowNotkin
	ood3Notkin1
	ood4Notkin1
	d4q03
	d4q03_alldead
	branch
	ui/NPC_Notkin.png
	ui/NPC_Notkin_b.png

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
	GetDirection (1 args)
	FindActor (2 args)
	RotateAsync (2 args)
	CanSee (2 args)
	rand (3 args)
	SetTimer (2 args)
	KillTimer (1 args)
	lshStopSpeech (0 args)
	StopAsync (0 args)
	StopGroup0 (0 args)
	Sleep (2 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	ResetAAS (0 args)
	GetPosition (1 args)
	Rotate (3 args)
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
	UnlookAsync (1 args)
	GetVariable (2 args)
	SetVariable (2 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshHasSpeech (2 args)
	lshPlaySpeech (1 args)
	self (1 args)
	GetGameTime (1 args)
	HasAnimation (3 args)

RunOp = 0x973
RunTask = 12

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa6 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1e4 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x331 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x604 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x84b Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x949 Vars = (int, int)
	GTASK_12 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x9bf Vars = (int)
		EVENT_6 Op = 0x9e5 Vars = ()
		EVENT_5 Op = 0x9f4 Vars = ()
		EVENT_45 Op = 0xa01 Vars = (bool)
		EVENT_0 Op = 0xa0d Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0xa96

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0xca9

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0xca7

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0xcab

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0xcad

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0xc96

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
0x2f: PushEmpty(bool, object)
0x30: PushEmpty(object)
0x31: Call2 0xbac

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0xaed

0x35: Pop(2)
0x36: PushEmpty(object, object)
0x37: Stack[-2] = Stack[-11]
0x38: Stack[-1] = Stack[-6]
0x39: Push(-2, 4); TaskCall(1)
0x3a: Call2 0x51

0x3b: Pop(-2, 4); TaskReturn
0x3c: Pop(2)
0x3d: @@ IsDialogEnd(Stack[-1])
0x3e: Pop(0)
0x3f: Pop(0); Push((bool) Stack[-1] == 0)
0x40: IF (Stack[-1] == 0) GOTO 0x46; Pop(1)

0x41: @ sync()
0x42: Pop(0)
0x43: @@ IsDialogEnd(Stack[-1])
0x44: Pop(0)
0x45: GOTO 0x3f

0x46: PushEmpty(object)
0x47: Stack[-1] = Stack[-10]
0x48: Call2 0xadb

0x49: Pop(1)
0x4a: @ StopDialog(Stack[-4])
0x4b: Pop(0)
0x4c: @@ GetReturnValue(Stack[-2])
0x4d: Pop(0)
0x4e: Stack[-10] = Stack[-2]
0x4f: Return(); Pop(8)

0x50: Stack[-4] = 0
0x51: PushEmpty()
0x52: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x53: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x54: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x55: Push((int) 1)
0x56: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x57: PushEmpty(object, object)
0x58: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x59: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5a: Call2 0xc0c

0x5b: Pop(2)
0x5c: PushEmpty(string)
0x5d: Stack[-1] = "Neutral"
0x5e: Call2 0x90

0x5f: Pop(1)
0x60: Push((int) 500205)
0x61: @@ SetMessage(Stack[-1])
0x62: Pop(1)
0x63: @@ ClearReplies()
0x64: Pop(0)
0x65: Push((int) 500207)
0x66: Push((int) 256)
0x67: Push((int) 245)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: Push((int) 500206)
0x6b: Push((int) 246)
0x6c: Push((int) 244)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: GOTO 0x72

0x70: Return(); Pop(0)

0x71: GOTO 0x55

0x72: PushEmpty(bool)
0x73: Call2 0xcaf

0x74: Pop(0)
0x75: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x76: @ lshWaitForAnimEnd()
0x77: Pop(0)
0x78: Push( Stack[3 + Tasks[-1].StackPointer] )
0x79: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x7a: GOTO 0x80

0x7b: PushEmpty(string)
0x7c: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7d: Call2 0xb77

0x7e: Pop(1)
0x7f: GOTO 0x76

0x80: GOTO 0x8f

0x81: Push("all")
0x82: Push("idle")
0x83: @ PlayAnimation(Stack[-2], Stack[-1])
0x84: Pop(2)
0x85: @ WaitForAnimEnd()
0x86: Pop(0)
0x87: Push( Stack[3 + Tasks[-1].StackPointer] )
0x88: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x89: GOTO 0x8f

0x8a: Push("all")
0x8b: Push("idle")
0x8c: @ PlayAnimation(Stack[-2], Stack[-1])
0x8d: Pop(2)
0x8e: GOTO 0x85

0x8f: Return(); Pop(0)

0x90: PushEmpty()
0x91: PushEmpty(bool)
0x92: Call2 0xcaf

0x93: Pop(0)
0x94: Pop(1); Push((bool) Stack[-1] == 0)
0x95: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x96: Return(); Pop(0)

0x97: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x98: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x99: Return(); Pop(0)

0x9a: PushEmpty(string, bool)
0x9b: Stack[-2] = Stack[-3]
0x9c: Push("")
0x9d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x9e: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0x9f: Stack[-1] = (bool) 0
0xa0: GOTO 0xa2

0xa1: Stack[-1] = (bool) 1
0xa2: Call2 0xb87

0xa3: Pop(2)
0xa4: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa5: Return(); Pop(0)

0xa6: PushEmpty()
0xa7: Push((int) 1)
0xa8: IF (Stack[-1] == 0) GOTO 0x13d; Pop(1)

0xa9: PushEmpty()
0xaa: Call2 0xba5

0xab: Pop(0)
0xac: Push((int) 243)
0xad: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xae: IF (Stack[-1] == 0) GOTO 0xc8; Pop(1)

0xaf: PushEmpty(object, object)
0xb0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb2: Call2 0xc0c

0xb3: Pop(2)
0xb4: PushEmpty(string)
0xb5: Stack[-1] = "Neutral"
0xb6: Call2 0x90

0xb7: Pop(1)
0xb8: Push((int) 500205)
0xb9: @@ SetMessage(Stack[-1])
0xba: Pop(1)
0xbb: @@ ClearReplies()
0xbc: Pop(0)
0xbd: Push((int) 500207)
0xbe: Push((int) 256)
0xbf: Push((int) 245)
0xc0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc1: Pop(3)
0xc2: Push((int) 500206)
0xc3: Push((int) 246)
0xc4: Push((int) 244)
0xc5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc6: Pop(3)
0xc7: Return(); Pop(0)

0xc8: Push((int) 246)
0xc9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xca: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xcb: PushEmpty(string)
0xcc: Stack[-1] = "Neutral"
0xcd: Call2 0x90

0xce: Pop(1)
0xcf: Push((int) 500208)
0xd0: @@ SetMessage(Stack[-1])
0xd1: Pop(1)
0xd2: @@ ClearReplies()
0xd3: Pop(0)
0xd4: Push((int) 500209)
0xd5: Push((int) 249)
0xd6: Push((int) 247)
0xd7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd8: Pop(3)
0xd9: Push((int) 500210)
0xda: Push((int) 250)
0xdb: Push((int) 248)
0xdc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdd: Pop(3)
0xde: Return(); Pop(0)

0xdf: Push((int) 250)
0xe0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe1: IF (Stack[-1] == 0) GOTO 0xf1; Pop(1)

0xe2: PushEmpty(string)
0xe3: Stack[-1] = "Neutral"
0xe4: Call2 0x90

0xe5: Pop(1)
0xe6: Push((int) 500212)
0xe7: @@ SetMessage(Stack[-1])
0xe8: Pop(1)
0xe9: @@ ClearReplies()
0xea: Pop(0)
0xeb: Push((int) 500215)
0xec: Push((int) 249)
0xed: Push((int) 253)
0xee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xef: Pop(3)
0xf0: Return(); Pop(0)

0xf1: Push((int) 249)
0xf2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf3: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0xf4: PushEmpty(object, object)
0xf5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf7: Call2 0xc06

0xf8: Pop(2)
0xf9: PushEmpty(string)
0xfa: Stack[-1] = "Neutral"
0xfb: Call2 0x90

0xfc: Pop(1)
0xfd: Push((int) 500211)
0xfe: @@ SetMessage(Stack[-1])
0xff: Pop(1)
0x100: @@ ClearReplies()
0x101: Pop(0)
0x102: Push((int) 500213)
0x103: Push((int) 252)
0x104: Push((int) 251)
0x105: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x106: Pop(3)
0x107: Return(); Pop(0)

0x108: Push((int) 252)
0x109: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10a: IF (Stack[-1] == 0) GOTO 0x11a; Pop(1)

0x10b: PushEmpty(string)
0x10c: Stack[-1] = "Neutral"
0x10d: Call2 0x90

0x10e: Pop(1)
0x10f: Push((int) 500214)
0x110: @@ SetMessage(Stack[-1])
0x111: Pop(1)
0x112: @@ ClearReplies()
0x113: Pop(0)
0x114: Push((int) 500216)
0x115: Push((int) -1)
0x116: Push((int) 255)
0x117: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x118: Pop(3)
0x119: Return(); Pop(0)

0x11a: Push((int) 256)
0x11b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11c: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x11d: PushEmpty(string)
0x11e: Stack[-1] = "Neutral"
0x11f: Call2 0x90

0x120: Pop(1)
0x121: Push((int) 500217)
0x122: @@ SetMessage(Stack[-1])
0x123: Pop(1)
0x124: @@ ClearReplies()
0x125: Pop(0)
0x126: Push((int) 500218)
0x127: Push((int) -1)
0x128: Push((int) 257)
0x129: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12a: Pop(3)
0x12b: Push((int) 500219)
0x12c: Push((int) -1)
0x12d: Push((int) 258)
0x12e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12f: Pop(3)
0x130: Return(); Pop(0)

0x131: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x132: PushEmpty(bool)
0x133: Call2 0xcaf

0x134: Pop(0)
0x135: IF (Stack[-1] == 0) GOTO 0x139; Pop(1)

0x136: @ lshStopAnimation()
0x137: Pop(0)
0x138: GOTO 0x13b

0x139: @ StopAnimation()
0x13a: Pop(0)
0x13b: Return(); Pop(0)

0x13c: GOTO 0xa7

0x13d: Return(); Pop(0)

0x13e: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x13f: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x140: PushEmpty(bool, object, float)
0x141: Stack[-2] = Stack[-12]
0x142: Stack[-1] = (float) 70.0
0x143: Call2 0xa96

0x144: Pop(2)
0x145: Pop(1); Push((bool) Stack[-1] == 0)
0x146: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x147: Stack[-10] = (int) -2
0x148: Return(); Pop(8)

0x149: @ CreateDialog(Stack[-4])
0x14a: Pop(0)
0x14b: PushEmpty(int)
0x14c: Call2 0xca9

0x14d: Pop(0)
0x14e: @@ SetNPCName(Stack[-1])
0x14f: Pop(1)
0x150: PushEmpty(int)
0x151: Call2 0xca7

0x152: Pop(0)
0x153: @@ SetNPCDescription(Stack[-1])
0x154: Pop(1)
0x155: PushEmpty(string)
0x156: Call2 0xcab

0x157: Pop(0)
0x158: @@ SetPhoto(Stack[-1])
0x159: Pop(1)
0x15a: PushEmpty(string)
0x15b: Call2 0xcad

0x15c: Pop(0)
0x15d: @@ SetPhoto2(Stack[-1])
0x15e: Pop(1)
0x15f: PushEmpty(int)
0x160: Call2 0xc96

0x161: Pop(0)
0x162: @@ SetPlayerName(Stack[-1])
0x163: Pop(1)
0x164: Stack[-2] = (int) -1
0x165: @ IsOverrideActive(Stack[-3])
0x166: Pop(0)
0x167: Push(Stack[-3])
0x168: IF (Stack[-1] == 0) GOTO 0x16b; Pop(1)

0x169: Stack[-10] = (int) -2
0x16a: Return(); Pop(8)

0x16b: @ DoDialog(Stack[-4])
0x16c: Pop(0)
0x16d: PushEmpty(bool, object)
0x16e: PushEmpty(object)
0x16f: Call2 0xbac

0x170: Stack[-2] = Stack[-1]
0x171: Pop(1)
0x172: Call2 0xaed

0x173: Pop(2)
0x174: PushEmpty(object, object)
0x175: Stack[-2] = Stack[-11]
0x176: Stack[-1] = Stack[-6]
0x177: Push(-2, 4); TaskCall(3)
0x178: Call2 0x18f

0x179: Pop(-2, 4); TaskReturn
0x17a: Pop(2)
0x17b: @@ IsDialogEnd(Stack[-1])
0x17c: Pop(0)
0x17d: Pop(0); Push((bool) Stack[-1] == 0)
0x17e: IF (Stack[-1] == 0) GOTO 0x184; Pop(1)

0x17f: @ sync()
0x180: Pop(0)
0x181: @@ IsDialogEnd(Stack[-1])
0x182: Pop(0)
0x183: GOTO 0x17d

0x184: PushEmpty(object)
0x185: Stack[-1] = Stack[-10]
0x186: Call2 0xadb

0x187: Pop(1)
0x188: @ StopDialog(Stack[-4])
0x189: Pop(0)
0x18a: @@ GetReturnValue(Stack[-2])
0x18b: Pop(0)
0x18c: Stack[-10] = Stack[-2]
0x18d: Return(); Pop(8)

0x18e: Stack[-4] = 0
0x18f: PushEmpty()
0x190: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x191: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x192: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x193: Push((int) 1)
0x194: IF (Stack[-1] == 0) GOTO 0x1b0; Pop(1)

0x195: PushEmpty(string)
0x196: Stack[-1] = "Pride"
0x197: Call2 0x1ce

0x198: Pop(1)
0x199: Push((int) 507472)
0x19a: @@ SetMessage(Stack[-1])
0x19b: Pop(1)
0x19c: @@ ClearReplies()
0x19d: Pop(0)
0x19e: PushEmpty(bool, object)
0x19f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a0: Call2 0xc4e

0x1a1: Pop(1)
0x1a2: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x1a3: Push((int) 541871)
0x1a4: Push((int) 10302)
0x1a5: Push((int) 44102)
0x1a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a7: Pop(3)
0x1a8: Push((int) 541869)
0x1a9: Push((int) -1)
0x1aa: Push((int) 44100)
0x1ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ac: Pop(3)
0x1ad: GOTO 0x1b0

0x1ae: Return(); Pop(0)

0x1af: GOTO 0x193

0x1b0: PushEmpty(bool)
0x1b1: Call2 0xcaf

0x1b2: Pop(0)
0x1b3: IF (Stack[-1] == 0) GOTO 0x1bf; Pop(1)

0x1b4: @ lshWaitForAnimEnd()
0x1b5: Pop(0)
0x1b6: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1b7: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1b8: GOTO 0x1be

0x1b9: PushEmpty(string)
0x1ba: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x1bb: Call2 0xb77

0x1bc: Pop(1)
0x1bd: GOTO 0x1b4

0x1be: GOTO 0x1cd

0x1bf: Push("all")
0x1c0: Push("idle")
0x1c1: @ PlayAnimation(Stack[-2], Stack[-1])
0x1c2: Pop(2)
0x1c3: @ WaitForAnimEnd()
0x1c4: Pop(0)
0x1c5: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1c6: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1c7: GOTO 0x1cd

0x1c8: Push("all")
0x1c9: Push("idle")
0x1ca: @ PlayAnimation(Stack[-2], Stack[-1])
0x1cb: Pop(2)
0x1cc: GOTO 0x1c3

0x1cd: Return(); Pop(0)

0x1ce: PushEmpty()
0x1cf: PushEmpty(bool)
0x1d0: Call2 0xcaf

0x1d1: Pop(0)
0x1d2: Pop(1); Push((bool) Stack[-1] == 0)
0x1d3: IF (Stack[-1] == 0) GOTO 0x1d5; Pop(1)

0x1d4: Return(); Pop(0)

0x1d5: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1d6: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x1d7: Return(); Pop(0)

0x1d8: PushEmpty(string, bool)
0x1d9: Stack[-2] = Stack[-3]
0x1da: Push("")
0x1db: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1dc: IF (Stack[-1] == 0) GOTO 0x1df; Pop(1)

0x1dd: Stack[-1] = (bool) 0
0x1de: GOTO 0x1e0

0x1df: Stack[-1] = (bool) 1
0x1e0: Call2 0xb87

0x1e1: Pop(2)
0x1e2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1e3: Return(); Pop(0)

0x1e4: PushEmpty()
0x1e5: Push((int) 1)
0x1e6: IF (Stack[-1] == 0) GOTO 0x271; Pop(1)

0x1e7: PushEmpty()
0x1e8: Call2 0xba5

0x1e9: Pop(0)
0x1ea: Push((int) 44102)
0x1eb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1ec: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1ed: PushEmpty(object, object)
0x1ee: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1ef: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1f0: Call2 0xc00

0x1f1: Pop(2)
0x1f2: Push((int) 8248)
0x1f3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f4: IF (Stack[-1] == 0) GOTO 0x20e; Pop(1)

0x1f5: PushEmpty(string)
0x1f6: Stack[-1] = "Pride"
0x1f7: Call2 0x1ce

0x1f8: Pop(1)
0x1f9: Push((int) 507472)
0x1fa: @@ SetMessage(Stack[-1])
0x1fb: Pop(1)
0x1fc: @@ ClearReplies()
0x1fd: Pop(0)
0x1fe: PushEmpty(bool, object)
0x1ff: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x200: Call2 0xc4e

0x201: Pop(1)
0x202: IF (Stack[-1] == 0) GOTO 0x208; Pop(1)

0x203: Push((int) 541871)
0x204: Push((int) 10302)
0x205: Push((int) 44102)
0x206: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x207: Pop(3)
0x208: Push((int) 541869)
0x209: Push((int) -1)
0x20a: Push((int) 44100)
0x20b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20c: Pop(3)
0x20d: Return(); Pop(0)

0x20e: Push((int) 10302)
0x20f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x210: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x211: PushEmpty(string)
0x212: Stack[-1] = "Neutral"
0x213: Call2 0x1ce

0x214: Pop(1)
0x215: Push((int) 509377)
0x216: @@ SetMessage(Stack[-1])
0x217: Pop(1)
0x218: @@ ClearReplies()
0x219: Pop(0)
0x21a: Push((int) 509378)
0x21b: Push((int) 10304)
0x21c: Push((int) 10303)
0x21d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21e: Pop(3)
0x21f: Return(); Pop(0)

0x220: Push((int) 10304)
0x221: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x222: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x223: PushEmpty(string)
0x224: Stack[-1] = "Neutral"
0x225: Call2 0x1ce

0x226: Pop(1)
0x227: Push((int) 509379)
0x228: @@ SetMessage(Stack[-1])
0x229: Pop(1)
0x22a: @@ ClearReplies()
0x22b: Pop(0)
0x22c: Push((int) 509380)
0x22d: Push((int) 10306)
0x22e: Push((int) 10305)
0x22f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x230: Pop(3)
0x231: Push((int) 509387)
0x232: Push((int) 10306)
0x233: Push((int) 10313)
0x234: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x235: Pop(3)
0x236: Return(); Pop(0)

0x237: Push((int) 10306)
0x238: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x239: IF (Stack[-1] == 0) GOTO 0x24e; Pop(1)

0x23a: PushEmpty(string)
0x23b: Stack[-1] = "Pride"
0x23c: Call2 0x1ce

0x23d: Pop(1)
0x23e: Push((int) 509381)
0x23f: @@ SetMessage(Stack[-1])
0x240: Pop(1)
0x241: @@ ClearReplies()
0x242: Pop(0)
0x243: Push((int) 509382)
0x244: Push((int) 10308)
0x245: Push((int) 10307)
0x246: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x247: Pop(3)
0x248: Push((int) 509386)
0x249: Push((int) 10308)
0x24a: Push((int) 10311)
0x24b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24c: Pop(3)
0x24d: Return(); Pop(0)

0x24e: Push((int) 10308)
0x24f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x250: IF (Stack[-1] == 0) GOTO 0x265; Pop(1)

0x251: PushEmpty(string)
0x252: Stack[-1] = "Distrust"
0x253: Call2 0x1ce

0x254: Pop(1)
0x255: Push((int) 509383)
0x256: @@ SetMessage(Stack[-1])
0x257: Pop(1)
0x258: @@ ClearReplies()
0x259: Pop(0)
0x25a: Push((int) 509384)
0x25b: Push((int) -1)
0x25c: Push((int) 10309)
0x25d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x25e: Pop(3)
0x25f: Push((int) 509385)
0x260: Push((int) -1)
0x261: Push((int) 10310)
0x262: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x263: Pop(3)
0x264: Return(); Pop(0)

0x265: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x266: PushEmpty(bool)
0x267: Call2 0xcaf

0x268: Pop(0)
0x269: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x26a: @ lshStopAnimation()
0x26b: Pop(0)
0x26c: GOTO 0x26f

0x26d: @ StopAnimation()
0x26e: Pop(0)
0x26f: Return(); Pop(0)

0x270: GOTO 0x1e5

0x271: Return(); Pop(0)

0x272: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x273: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x274: PushEmpty(bool, object, float)
0x275: Stack[-2] = Stack[-12]
0x276: Stack[-1] = (float) 70.0
0x277: Call2 0xa96

0x278: Pop(2)
0x279: Pop(1); Push((bool) Stack[-1] == 0)
0x27a: IF (Stack[-1] == 0) GOTO 0x27d; Pop(1)

0x27b: Stack[-10] = (int) -2
0x27c: Return(); Pop(8)

0x27d: @ CreateDialog(Stack[-4])
0x27e: Pop(0)
0x27f: PushEmpty(int)
0x280: Call2 0xca9

0x281: Pop(0)
0x282: @@ SetNPCName(Stack[-1])
0x283: Pop(1)
0x284: PushEmpty(int)
0x285: Call2 0xca7

0x286: Pop(0)
0x287: @@ SetNPCDescription(Stack[-1])
0x288: Pop(1)
0x289: PushEmpty(string)
0x28a: Call2 0xcab

0x28b: Pop(0)
0x28c: @@ SetPhoto(Stack[-1])
0x28d: Pop(1)
0x28e: PushEmpty(string)
0x28f: Call2 0xcad

0x290: Pop(0)
0x291: @@ SetPhoto2(Stack[-1])
0x292: Pop(1)
0x293: PushEmpty(int)
0x294: Call2 0xc96

0x295: Pop(0)
0x296: @@ SetPlayerName(Stack[-1])
0x297: Pop(1)
0x298: Stack[-2] = (int) -1
0x299: @ IsOverrideActive(Stack[-3])
0x29a: Pop(0)
0x29b: Push(Stack[-3])
0x29c: IF (Stack[-1] == 0) GOTO 0x29f; Pop(1)

0x29d: Stack[-10] = (int) -2
0x29e: Return(); Pop(8)

0x29f: @ DoDialog(Stack[-4])
0x2a0: Pop(0)
0x2a1: PushEmpty(bool, object)
0x2a2: PushEmpty(object)
0x2a3: Call2 0xbac

0x2a4: Stack[-2] = Stack[-1]
0x2a5: Pop(1)
0x2a6: Call2 0xaed

0x2a7: Pop(2)
0x2a8: PushEmpty(object, object)
0x2a9: Stack[-2] = Stack[-11]
0x2aa: Stack[-1] = Stack[-6]
0x2ab: Push(-2, 4); TaskCall(5)
0x2ac: Call2 0x2c3

0x2ad: Pop(-2, 4); TaskReturn
0x2ae: Pop(2)
0x2af: @@ IsDialogEnd(Stack[-1])
0x2b0: Pop(0)
0x2b1: Pop(0); Push((bool) Stack[-1] == 0)
0x2b2: IF (Stack[-1] == 0) GOTO 0x2b8; Pop(1)

0x2b3: @ sync()
0x2b4: Pop(0)
0x2b5: @@ IsDialogEnd(Stack[-1])
0x2b6: Pop(0)
0x2b7: GOTO 0x2b1

0x2b8: PushEmpty(object)
0x2b9: Stack[-1] = Stack[-10]
0x2ba: Call2 0xadb

0x2bb: Pop(1)
0x2bc: @ StopDialog(Stack[-4])
0x2bd: Pop(0)
0x2be: @@ GetReturnValue(Stack[-2])
0x2bf: Pop(0)
0x2c0: Stack[-10] = Stack[-2]
0x2c1: Return(); Pop(8)

0x2c2: Stack[-4] = 0
0x2c3: PushEmpty()
0x2c4: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x2c5: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x2c6: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x2c7: Push((int) 1)
0x2c8: IF (Stack[-1] == 0) GOTO 0x2fd; Pop(1)

0x2c9: PushEmpty(string)
0x2ca: Stack[-1] = "Neutral"
0x2cb: Call2 0x31b

0x2cc: Pop(1)
0x2cd: Push((int) 509978)
0x2ce: @@ SetMessage(Stack[-1])
0x2cf: Pop(1)
0x2d0: @@ ClearReplies()
0x2d1: Pop(0)
0x2d2: PushEmpty(bool, object)
0x2d3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2d4: Call2 0xc72

0x2d5: Pop(1)
0x2d6: IF (Stack[-1] == 0) GOTO 0x2dc; Pop(1)

0x2d7: Push((int) 509979)
0x2d8: Push((int) 35759)
0x2d9: Push((int) 10997)
0x2da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2db: Pop(3)
0x2dc: PushEmpty(bool, object)
0x2dd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2de: Call2 0xc1e

0x2df: Pop(1)
0x2e0: IF (Stack[-1] == 0) GOTO 0x2e6; Pop(1)

0x2e1: Push((int) 534183)
0x2e2: Push((int) 35767)
0x2e3: Push((int) 35766)
0x2e4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e5: Pop(3)
0x2e6: PushEmpty(bool, object)
0x2e7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2e8: Call2 0xc2a

0x2e9: Pop(1)
0x2ea: IF (Stack[-1] == 0) GOTO 0x2f0; Pop(1)

0x2eb: Push((int) 534202)
0x2ec: Push((int) 35786)
0x2ed: Push((int) 35785)
0x2ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ef: Pop(3)
0x2f0: Push((int) 509990)
0x2f1: Push((int) -1)
0x2f2: Push((int) 11009)
0x2f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f4: Pop(3)
0x2f5: Push((int) 509991)
0x2f6: Push((int) -1)
0x2f7: Push((int) 11011)
0x2f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f9: Pop(3)
0x2fa: GOTO 0x2fd

0x2fb: Return(); Pop(0)

0x2fc: GOTO 0x2c7

0x2fd: PushEmpty(bool)
0x2fe: Call2 0xcaf

0x2ff: Pop(0)
0x300: IF (Stack[-1] == 0) GOTO 0x30c; Pop(1)

0x301: @ lshWaitForAnimEnd()
0x302: Pop(0)
0x303: Push( Stack[3 + Tasks[-1].StackPointer] )
0x304: IF (Stack[-1] == 0) GOTO 0x306; Pop(1)

0x305: GOTO 0x30b

0x306: PushEmpty(string)
0x307: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x308: Call2 0xb77

0x309: Pop(1)
0x30a: GOTO 0x301

0x30b: GOTO 0x31a

0x30c: Push("all")
0x30d: Push("idle")
0x30e: @ PlayAnimation(Stack[-2], Stack[-1])
0x30f: Pop(2)
0x310: @ WaitForAnimEnd()
0x311: Pop(0)
0x312: Push( Stack[3 + Tasks[-1].StackPointer] )
0x313: IF (Stack[-1] == 0) GOTO 0x315; Pop(1)

0x314: GOTO 0x31a

0x315: Push("all")
0x316: Push("idle")
0x317: @ PlayAnimation(Stack[-2], Stack[-1])
0x318: Pop(2)
0x319: GOTO 0x310

0x31a: Return(); Pop(0)

0x31b: PushEmpty()
0x31c: PushEmpty(bool)
0x31d: Call2 0xcaf

0x31e: Pop(0)
0x31f: Pop(1); Push((bool) Stack[-1] == 0)
0x320: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x321: Return(); Pop(0)

0x322: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x323: IF (Stack[-1] == 0) GOTO 0x325; Pop(1)

0x324: Return(); Pop(0)

0x325: PushEmpty(string, bool)
0x326: Stack[-2] = Stack[-3]
0x327: Push("")
0x328: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x329: IF (Stack[-1] == 0) GOTO 0x32c; Pop(1)

0x32a: Stack[-1] = (bool) 0
0x32b: GOTO 0x32d

0x32c: Stack[-1] = (bool) 1
0x32d: Call2 0xb87

0x32e: Pop(2)
0x32f: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x330: Return(); Pop(0)

0x331: PushEmpty()
0x332: Push((int) 1)
0x333: IF (Stack[-1] == 0) GOTO 0x51a; Pop(1)

0x334: PushEmpty()
0x335: Call2 0xba5

0x336: Pop(0)
0x337: Push((int) 10997)
0x338: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x339: IF (Stack[-1] == 0) GOTO 0x33f; Pop(1)

0x33a: PushEmpty(object, object)
0x33b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x33c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x33d: Call2 0xc12

0x33e: Pop(2)
0x33f: Push((int) 35766)
0x340: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x341: IF (Stack[-1] == 0) GOTO 0x347; Pop(1)

0x342: PushEmpty(object, object)
0x343: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x344: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x345: Call2 0xbe8

0x346: Pop(2)
0x347: Push((int) 35785)
0x348: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x349: IF (Stack[-1] == 0) GOTO 0x34f; Pop(1)

0x34a: PushEmpty(object, object)
0x34b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x34c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x34d: Call2 0xbee

0x34e: Pop(2)
0x34f: Push((int) 10996)
0x350: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x351: IF (Stack[-1] == 0) GOTO 0x384; Pop(1)

0x352: PushEmpty(string)
0x353: Stack[-1] = "Neutral"
0x354: Call2 0x31b

0x355: Pop(1)
0x356: Push((int) 509978)
0x357: @@ SetMessage(Stack[-1])
0x358: Pop(1)
0x359: @@ ClearReplies()
0x35a: Pop(0)
0x35b: PushEmpty(bool, object)
0x35c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x35d: Call2 0xc72

0x35e: Pop(1)
0x35f: IF (Stack[-1] == 0) GOTO 0x365; Pop(1)

0x360: Push((int) 509979)
0x361: Push((int) 35759)
0x362: Push((int) 10997)
0x363: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x364: Pop(3)
0x365: PushEmpty(bool, object)
0x366: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x367: Call2 0xc1e

0x368: Pop(1)
0x369: IF (Stack[-1] == 0) GOTO 0x36f; Pop(1)

0x36a: Push((int) 534183)
0x36b: Push((int) 35767)
0x36c: Push((int) 35766)
0x36d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x36e: Pop(3)
0x36f: PushEmpty(bool, object)
0x370: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x371: Call2 0xc2a

0x372: Pop(1)
0x373: IF (Stack[-1] == 0) GOTO 0x379; Pop(1)

0x374: Push((int) 534202)
0x375: Push((int) 35786)
0x376: Push((int) 35785)
0x377: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x378: Pop(3)
0x379: Push((int) 509990)
0x37a: Push((int) -1)
0x37b: Push((int) 11009)
0x37c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x37d: Pop(3)
0x37e: Push((int) 509991)
0x37f: Push((int) -1)
0x380: Push((int) 11011)
0x381: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x382: Pop(3)
0x383: Return(); Pop(0)

0x384: Push((int) 35786)
0x385: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x386: IF (Stack[-1] == 0) GOTO 0x39b; Pop(1)

0x387: PushEmpty(string)
0x388: Stack[-1] = "Distrust"
0x389: Call2 0x31b

0x38a: Pop(1)
0x38b: Push((int) 534203)
0x38c: @@ SetMessage(Stack[-1])
0x38d: Pop(1)
0x38e: @@ ClearReplies()
0x38f: Pop(0)
0x390: Push((int) 534204)
0x391: Push((int) 35788)
0x392: Push((int) 35787)
0x393: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x394: Pop(3)
0x395: Push((int) 534215)
0x396: Push((int) -1)
0x397: Push((int) 35798)
0x398: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x399: Pop(3)
0x39a: Return(); Pop(0)

0x39b: Push((int) 35788)
0x39c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x39d: IF (Stack[-1] == 0) GOTO 0x3b2; Pop(1)

0x39e: PushEmpty(string)
0x39f: Stack[-1] = "Distrust"
0x3a0: Call2 0x31b

0x3a1: Pop(1)
0x3a2: Push((int) 534205)
0x3a3: @@ SetMessage(Stack[-1])
0x3a4: Pop(1)
0x3a5: @@ ClearReplies()
0x3a6: Pop(0)
0x3a7: Push((int) 534206)
0x3a8: Push((int) 35790)
0x3a9: Push((int) 35789)
0x3aa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ab: Pop(3)
0x3ac: Push((int) 534214)
0x3ad: Push((int) -1)
0x3ae: Push((int) 35797)
0x3af: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b0: Pop(3)
0x3b1: Return(); Pop(0)

0x3b2: Push((int) 35790)
0x3b3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3b4: IF (Stack[-1] == 0) GOTO 0x3c9; Pop(1)

0x3b5: PushEmpty(string)
0x3b6: Stack[-1] = "Neutral"
0x3b7: Call2 0x31b

0x3b8: Pop(1)
0x3b9: Push((int) 534207)
0x3ba: @@ SetMessage(Stack[-1])
0x3bb: Pop(1)
0x3bc: @@ ClearReplies()
0x3bd: Pop(0)
0x3be: Push((int) 534208)
0x3bf: Push((int) 35792)
0x3c0: Push((int) 35791)
0x3c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c2: Pop(3)
0x3c3: Push((int) 534211)
0x3c4: Push((int) 35795)
0x3c5: Push((int) 35794)
0x3c6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c7: Pop(3)
0x3c8: Return(); Pop(0)

0x3c9: Push((int) 35795)
0x3ca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3cb: IF (Stack[-1] == 0) GOTO 0x3db; Pop(1)

0x3cc: PushEmpty(string)
0x3cd: Stack[-1] = "Distrust"
0x3ce: Call2 0x31b

0x3cf: Pop(1)
0x3d0: Push((int) 534212)
0x3d1: @@ SetMessage(Stack[-1])
0x3d2: Pop(1)
0x3d3: @@ ClearReplies()
0x3d4: Pop(0)
0x3d5: Push((int) 534213)
0x3d6: Push((int) -1)
0x3d7: Push((int) 35796)
0x3d8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d9: Pop(3)
0x3da: Return(); Pop(0)

0x3db: Push((int) 35792)
0x3dc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3dd: IF (Stack[-1] == 0) GOTO 0x3ed; Pop(1)

0x3de: PushEmpty(string)
0x3df: Stack[-1] = "Neutral"
0x3e0: Call2 0x31b

0x3e1: Pop(1)
0x3e2: Push((int) 534209)
0x3e3: @@ SetMessage(Stack[-1])
0x3e4: Pop(1)
0x3e5: @@ ClearReplies()
0x3e6: Pop(0)
0x3e7: Push((int) 534210)
0x3e8: Push((int) -1)
0x3e9: Push((int) 35793)
0x3ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3eb: Pop(3)
0x3ec: Return(); Pop(0)

0x3ed: Push((int) 35767)
0x3ee: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ef: IF (Stack[-1] == 0) GOTO 0x404; Pop(1)

0x3f0: PushEmpty(string)
0x3f1: Stack[-1] = "Smile"
0x3f2: Call2 0x31b

0x3f3: Pop(1)
0x3f4: Push((int) 534184)
0x3f5: @@ SetMessage(Stack[-1])
0x3f6: Pop(1)
0x3f7: @@ ClearReplies()
0x3f8: Pop(0)
0x3f9: Push((int) 534185)
0x3fa: Push((int) 35769)
0x3fb: Push((int) 35768)
0x3fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3fd: Pop(3)
0x3fe: Push((int) 534198)
0x3ff: Push((int) 35782)
0x400: Push((int) 35781)
0x401: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x402: Pop(3)
0x403: Return(); Pop(0)

0x404: Push((int) 35782)
0x405: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x406: IF (Stack[-1] == 0) GOTO 0x41b; Pop(1)

0x407: PushEmpty(string)
0x408: Stack[-1] = "Think"
0x409: Call2 0x31b

0x40a: Pop(1)
0x40b: Push((int) 534199)
0x40c: @@ SetMessage(Stack[-1])
0x40d: Pop(1)
0x40e: @@ ClearReplies()
0x40f: Pop(0)
0x410: Push((int) 534200)
0x411: Push((int) -1)
0x412: Push((int) 35783)
0x413: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x414: Pop(3)
0x415: Push((int) 534201)
0x416: Push((int) -1)
0x417: Push((int) 35784)
0x418: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x419: Pop(3)
0x41a: Return(); Pop(0)

0x41b: Push((int) 35769)
0x41c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x41d: IF (Stack[-1] == 0) GOTO 0x432; Pop(1)

0x41e: PushEmpty(string)
0x41f: Stack[-1] = "Smile"
0x420: Call2 0x31b

0x421: Pop(1)
0x422: Push((int) 534186)
0x423: @@ SetMessage(Stack[-1])
0x424: Pop(1)
0x425: @@ ClearReplies()
0x426: Pop(0)
0x427: Push((int) 534187)
0x428: Push((int) 35771)
0x429: Push((int) 35770)
0x42a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x42b: Pop(3)
0x42c: Push((int) 534195)
0x42d: Push((int) 35779)
0x42e: Push((int) 35778)
0x42f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x430: Pop(3)
0x431: Return(); Pop(0)

0x432: Push((int) 35779)
0x433: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x434: IF (Stack[-1] == 0) GOTO 0x444; Pop(1)

0x435: PushEmpty(string)
0x436: Stack[-1] = "Distrust"
0x437: Call2 0x31b

0x438: Pop(1)
0x439: Push((int) 534196)
0x43a: @@ SetMessage(Stack[-1])
0x43b: Pop(1)
0x43c: @@ ClearReplies()
0x43d: Pop(0)
0x43e: Push((int) 534197)
0x43f: Push((int) -1)
0x440: Push((int) 35780)
0x441: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x442: Pop(3)
0x443: Return(); Pop(0)

0x444: Push((int) 35771)
0x445: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x446: IF (Stack[-1] == 0) GOTO 0x456; Pop(1)

0x447: PushEmpty(string)
0x448: Stack[-1] = "Neutral"
0x449: Call2 0x31b

0x44a: Pop(1)
0x44b: Push((int) 534188)
0x44c: @@ SetMessage(Stack[-1])
0x44d: Pop(1)
0x44e: @@ ClearReplies()
0x44f: Pop(0)
0x450: Push((int) 534189)
0x451: Push((int) 35773)
0x452: Push((int) 35772)
0x453: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x454: Pop(3)
0x455: Return(); Pop(0)

0x456: Push((int) 35773)
0x457: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x458: IF (Stack[-1] == 0) GOTO 0x46d; Pop(1)

0x459: PushEmpty(string)
0x45a: Stack[-1] = "Neutral"
0x45b: Call2 0x31b

0x45c: Pop(1)
0x45d: Push((int) 534190)
0x45e: @@ SetMessage(Stack[-1])
0x45f: Pop(1)
0x460: @@ ClearReplies()
0x461: Pop(0)
0x462: Push((int) 534191)
0x463: Push((int) -1)
0x464: Push((int) 35774)
0x465: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x466: Pop(3)
0x467: Push((int) 534192)
0x468: Push((int) 35776)
0x469: Push((int) 35775)
0x46a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x46b: Pop(3)
0x46c: Return(); Pop(0)

0x46d: Push((int) 35776)
0x46e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x46f: IF (Stack[-1] == 0) GOTO 0x47f; Pop(1)

0x470: PushEmpty(string)
0x471: Stack[-1] = "Neutral"
0x472: Call2 0x31b

0x473: Pop(1)
0x474: Push((int) 534193)
0x475: @@ SetMessage(Stack[-1])
0x476: Pop(1)
0x477: @@ ClearReplies()
0x478: Pop(0)
0x479: Push((int) 534194)
0x47a: Push((int) -1)
0x47b: Push((int) 35777)
0x47c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x47d: Pop(3)
0x47e: Return(); Pop(0)

0x47f: Push((int) 35759)
0x480: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x481: IF (Stack[-1] == 0) GOTO 0x496; Pop(1)

0x482: PushEmpty(string)
0x483: Stack[-1] = "Distrust"
0x484: Call2 0x31b

0x485: Pop(1)
0x486: Push((int) 534176)
0x487: @@ SetMessage(Stack[-1])
0x488: Pop(1)
0x489: @@ ClearReplies()
0x48a: Pop(0)
0x48b: Push((int) 534177)
0x48c: Push((int) 10998)
0x48d: Push((int) 35760)
0x48e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x48f: Pop(3)
0x490: Push((int) 534178)
0x491: Push((int) 35800)
0x492: Push((int) 35761)
0x493: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x494: Pop(3)
0x495: Return(); Pop(0)

0x496: Push((int) 35800)
0x497: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x498: IF (Stack[-1] == 0) GOTO 0x4ad; Pop(1)

0x499: PushEmpty(string)
0x49a: Stack[-1] = "Distrust"
0x49b: Call2 0x31b

0x49c: Pop(1)
0x49d: Push((int) 534217)
0x49e: @@ SetMessage(Stack[-1])
0x49f: Pop(1)
0x4a0: @@ ClearReplies()
0x4a1: Pop(0)
0x4a2: Push((int) 534218)
0x4a3: Push((int) 35802)
0x4a4: Push((int) 35801)
0x4a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4a6: Pop(3)
0x4a7: Push((int) 534223)
0x4a8: Push((int) 35802)
0x4a9: Push((int) 35806)
0x4aa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ab: Pop(3)
0x4ac: Return(); Pop(0)

0x4ad: Push((int) 35802)
0x4ae: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4af: IF (Stack[-1] == 0) GOTO 0x4c4; Pop(1)

0x4b0: PushEmpty(string)
0x4b1: Stack[-1] = "Neutral"
0x4b2: Call2 0x31b

0x4b3: Pop(1)
0x4b4: Push((int) 534219)
0x4b5: @@ SetMessage(Stack[-1])
0x4b6: Pop(1)
0x4b7: @@ ClearReplies()
0x4b8: Pop(0)
0x4b9: Push((int) 534220)
0x4ba: Push((int) -1)
0x4bb: Push((int) 35803)
0x4bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4bd: Pop(3)
0x4be: Push((int) 534221)
0x4bf: Push((int) -1)
0x4c0: Push((int) 35804)
0x4c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4c2: Pop(3)
0x4c3: Return(); Pop(0)

0x4c4: Push((int) 10998)
0x4c5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4c6: IF (Stack[-1] == 0) GOTO 0x4e0; Pop(1)

0x4c7: PushEmpty(string)
0x4c8: Stack[-1] = "Think"
0x4c9: Call2 0x31b

0x4ca: Pop(1)
0x4cb: Push((int) 509980)
0x4cc: @@ SetMessage(Stack[-1])
0x4cd: Pop(1)
0x4ce: @@ ClearReplies()
0x4cf: Pop(0)
0x4d0: Push((int) 509981)
0x4d1: Push((int) 11000)
0x4d2: Push((int) 10999)
0x4d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4d4: Pop(3)
0x4d5: Push((int) 509988)
0x4d6: Push((int) 11000)
0x4d7: Push((int) 11006)
0x4d8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4d9: Pop(3)
0x4da: Push((int) 509989)
0x4db: Push((int) -1)
0x4dc: Push((int) 11008)
0x4dd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4de: Pop(3)
0x4df: Return(); Pop(0)

0x4e0: Push((int) 11000)
0x4e1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4e2: IF (Stack[-1] == 0) GOTO 0x4f7; Pop(1)

0x4e3: PushEmpty(string)
0x4e4: Stack[-1] = "Distrust"
0x4e5: Call2 0x31b

0x4e6: Pop(1)
0x4e7: Push((int) 509982)
0x4e8: @@ SetMessage(Stack[-1])
0x4e9: Pop(1)
0x4ea: @@ ClearReplies()
0x4eb: Pop(0)
0x4ec: Push((int) 509983)
0x4ed: Push((int) -1)
0x4ee: Push((int) 11001)
0x4ef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4f0: Pop(3)
0x4f1: Push((int) 509984)
0x4f2: Push((int) 11003)
0x4f3: Push((int) 11002)
0x4f4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4f5: Pop(3)
0x4f6: Return(); Pop(0)

0x4f7: Push((int) 11003)
0x4f8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4f9: IF (Stack[-1] == 0) GOTO 0x50e; Pop(1)

0x4fa: PushEmpty(string)
0x4fb: Stack[-1] = "Think"
0x4fc: Call2 0x31b

0x4fd: Pop(1)
0x4fe: Push((int) 509985)
0x4ff: @@ SetMessage(Stack[-1])
0x500: Pop(1)
0x501: @@ ClearReplies()
0x502: Pop(0)
0x503: Push((int) 509986)
0x504: Push((int) -1)
0x505: Push((int) 11004)
0x506: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x507: Pop(3)
0x508: Push((int) 509987)
0x509: Push((int) -1)
0x50a: Push((int) 11005)
0x50b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x50c: Pop(3)
0x50d: Return(); Pop(0)

0x50e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x50f: PushEmpty(bool)
0x510: Call2 0xcaf

0x511: Pop(0)
0x512: IF (Stack[-1] == 0) GOTO 0x516; Pop(1)

0x513: @ lshStopAnimation()
0x514: Pop(0)
0x515: GOTO 0x518

0x516: @ StopAnimation()
0x517: Pop(0)
0x518: Return(); Pop(0)

0x519: GOTO 0x332

0x51a: Return(); Pop(0)

0x51b: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x51c: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x51d: PushEmpty(bool, object, float)
0x51e: Stack[-2] = Stack[-12]
0x51f: Stack[-1] = (float) 70.0
0x520: Call2 0xa96

0x521: Pop(2)
0x522: Pop(1); Push((bool) Stack[-1] == 0)
0x523: IF (Stack[-1] == 0) GOTO 0x526; Pop(1)

0x524: Stack[-10] = (int) -2
0x525: Return(); Pop(8)

0x526: @ CreateDialog(Stack[-4])
0x527: Pop(0)
0x528: PushEmpty(int)
0x529: Call2 0xca9

0x52a: Pop(0)
0x52b: @@ SetNPCName(Stack[-1])
0x52c: Pop(1)
0x52d: PushEmpty(int)
0x52e: Call2 0xca7

0x52f: Pop(0)
0x530: @@ SetNPCDescription(Stack[-1])
0x531: Pop(1)
0x532: PushEmpty(string)
0x533: Call2 0xcab

0x534: Pop(0)
0x535: @@ SetPhoto(Stack[-1])
0x536: Pop(1)
0x537: PushEmpty(string)
0x538: Call2 0xcad

0x539: Pop(0)
0x53a: @@ SetPhoto2(Stack[-1])
0x53b: Pop(1)
0x53c: PushEmpty(int)
0x53d: Call2 0xc96

0x53e: Pop(0)
0x53f: @@ SetPlayerName(Stack[-1])
0x540: Pop(1)
0x541: Stack[-2] = (int) -1
0x542: @ IsOverrideActive(Stack[-3])
0x543: Pop(0)
0x544: Push(Stack[-3])
0x545: IF (Stack[-1] == 0) GOTO 0x548; Pop(1)

0x546: Stack[-10] = (int) -2
0x547: Return(); Pop(8)

0x548: @ DoDialog(Stack[-4])
0x549: Pop(0)
0x54a: PushEmpty(bool, object)
0x54b: PushEmpty(object)
0x54c: Call2 0xbac

0x54d: Stack[-2] = Stack[-1]
0x54e: Pop(1)
0x54f: Call2 0xaed

0x550: Pop(2)
0x551: PushEmpty(object, object)
0x552: Stack[-2] = Stack[-11]
0x553: Stack[-1] = Stack[-6]
0x554: Push(-2, 4); TaskCall(7)
0x555: Call2 0x56c

0x556: Pop(-2, 4); TaskReturn
0x557: Pop(2)
0x558: @@ IsDialogEnd(Stack[-1])
0x559: Pop(0)
0x55a: Pop(0); Push((bool) Stack[-1] == 0)
0x55b: IF (Stack[-1] == 0) GOTO 0x561; Pop(1)

0x55c: @ sync()
0x55d: Pop(0)
0x55e: @@ IsDialogEnd(Stack[-1])
0x55f: Pop(0)
0x560: GOTO 0x55a

0x561: PushEmpty(object)
0x562: Stack[-1] = Stack[-10]
0x563: Call2 0xadb

0x564: Pop(1)
0x565: @ StopDialog(Stack[-4])
0x566: Pop(0)
0x567: @@ GetReturnValue(Stack[-2])
0x568: Pop(0)
0x569: Stack[-10] = Stack[-2]
0x56a: Return(); Pop(8)

0x56b: Stack[-4] = 0
0x56c: PushEmpty()
0x56d: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x56e: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x56f: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x570: Push((int) 1)
0x571: IF (Stack[-1] == 0) GOTO 0x5d0; Pop(1)

0x572: PushEmpty(string)
0x573: Stack[-1] = "Neutral"
0x574: Call2 0x5ee

0x575: Pop(1)
0x576: Push((int) 511211)
0x577: @@ SetMessage(Stack[-1])
0x578: Pop(1)
0x579: @@ ClearReplies()
0x57a: Pop(0)
0x57b: PushEmpty(bool)
0x57c: Stack[-1] = (bool) 1
0x57d: PushEmpty(bool)
0x57e: Stack[-1] = (bool) 0
0x57f: PushEmpty(bool)
0x580: Stack[-1] = (bool) 0
0x581: PushEmpty(bool, object)
0x582: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x583: Call2 0xc5a

0x584: Pop(1)
0x585: IF (Stack[-1] == 0) GOTO 0x58c; Pop(1)

0x586: PushEmpty(bool, object)
0x587: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x588: Call2 0xc8a

0x589: Pop(1)
0x58a: IF (Stack[-1] == 0) GOTO 0x58c; Pop(1)

0x58b: Stack[-1] = (bool) 1
0x58c: IF (Stack[-1] == 0) GOTO 0x594; Pop(1)

0x58d: PushEmpty(bool, object)
0x58e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x58f: Call2 0xc66

0x590: Pop(1)
0x591: Pop(1); Push((bool) Stack[-1] == 0)
0x592: IF (Stack[-1] == 0) GOTO 0x594; Pop(1)

0x593: Stack[-1] = (bool) 1
0x594: IF (Stack[-1] == 0) GOTO 0x5ae; Pop(1)

0x595: PushEmpty(bool)
0x596: Stack[-1] = (bool) 0
0x597: PushEmpty(bool)
0x598: Stack[-1] = (bool) 0
0x599: PushEmpty(bool, object)
0x59a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59b: Call2 0xc7e

0x59c: Pop(1)
0x59d: IF (Stack[-1] == 0) GOTO 0x5a4; Pop(1)

0x59e: PushEmpty(bool, object)
0x59f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5a0: Call2 0xc8a

0x5a1: Pop(1)
0x5a2: IF (Stack[-1] == 0) GOTO 0x5a4; Pop(1)

0x5a3: Stack[-1] = (bool) 1
0x5a4: IF (Stack[-1] == 0) GOTO 0x5ac; Pop(1)

0x5a5: PushEmpty(bool, object)
0x5a6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5a7: Call2 0xc66

0x5a8: Pop(1)
0x5a9: Pop(1); Push((bool) Stack[-1] == 0)
0x5aa: IF (Stack[-1] == 0) GOTO 0x5ac; Pop(1)

0x5ab: Stack[-1] = (bool) 1
0x5ac: IF (Stack[-1] == 0) GOTO 0x5ae; Pop(1)

0x5ad: Stack[-1] = (bool) 0
0x5ae: IF (Stack[-1] == 0) GOTO 0x5b4; Pop(1)

0x5af: Push((int) 511212)
0x5b0: Push((int) 12401)
0x5b1: Push((int) 12400)
0x5b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5b3: Pop(3)
0x5b4: PushEmpty(bool, object)
0x5b5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b6: Call2 0xc36

0x5b7: Pop(1)
0x5b8: IF (Stack[-1] == 0) GOTO 0x5be; Pop(1)

0x5b9: Push((int) 534224)
0x5ba: Push((int) 35809)
0x5bb: Push((int) 35808)
0x5bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5bd: Pop(3)
0x5be: PushEmpty(bool, object)
0x5bf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5c0: Call2 0xc42

0x5c1: Pop(1)
0x5c2: IF (Stack[-1] == 0) GOTO 0x5c8; Pop(1)

0x5c3: Push((int) 534252)
0x5c4: Push((int) 35840)
0x5c5: Push((int) 35839)
0x5c6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c7: Pop(3)
0x5c8: Push((int) 515335)
0x5c9: Push((int) -1)
0x5ca: Push((int) 16558)
0x5cb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5cc: Pop(3)
0x5cd: GOTO 0x5d0

0x5ce: Return(); Pop(0)

0x5cf: GOTO 0x570

0x5d0: PushEmpty(bool)
0x5d1: Call2 0xcaf

0x5d2: Pop(0)
0x5d3: IF (Stack[-1] == 0) GOTO 0x5df; Pop(1)

0x5d4: @ lshWaitForAnimEnd()
0x5d5: Pop(0)
0x5d6: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5d7: IF (Stack[-1] == 0) GOTO 0x5d9; Pop(1)

0x5d8: GOTO 0x5de

0x5d9: PushEmpty(string)
0x5da: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x5db: Call2 0xb77

0x5dc: Pop(1)
0x5dd: GOTO 0x5d4

0x5de: GOTO 0x5ed

0x5df: Push("all")
0x5e0: Push("idle")
0x5e1: @ PlayAnimation(Stack[-2], Stack[-1])
0x5e2: Pop(2)
0x5e3: @ WaitForAnimEnd()
0x5e4: Pop(0)
0x5e5: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5e6: IF (Stack[-1] == 0) GOTO 0x5e8; Pop(1)

0x5e7: GOTO 0x5ed

0x5e8: Push("all")
0x5e9: Push("idle")
0x5ea: @ PlayAnimation(Stack[-2], Stack[-1])
0x5eb: Pop(2)
0x5ec: GOTO 0x5e3

0x5ed: Return(); Pop(0)

0x5ee: PushEmpty()
0x5ef: PushEmpty(bool)
0x5f0: Call2 0xcaf

0x5f1: Pop(0)
0x5f2: Pop(1); Push((bool) Stack[-1] == 0)
0x5f3: IF (Stack[-1] == 0) GOTO 0x5f5; Pop(1)

0x5f4: Return(); Pop(0)

0x5f5: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x5f6: IF (Stack[-1] == 0) GOTO 0x5f8; Pop(1)

0x5f7: Return(); Pop(0)

0x5f8: PushEmpty(string, bool)
0x5f9: Stack[-2] = Stack[-3]
0x5fa: Push("")
0x5fb: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x5fc: IF (Stack[-1] == 0) GOTO 0x5ff; Pop(1)

0x5fd: Stack[-1] = (bool) 0
0x5fe: GOTO 0x600

0x5ff: Stack[-1] = (bool) 1
0x600: Call2 0xb87

0x601: Pop(2)
0x602: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x603: Return(); Pop(0)

0x604: PushEmpty()
0x605: Push((int) 1)
0x606: IF (Stack[-1] == 0) GOTO 0x7a4; Pop(1)

0x607: PushEmpty()
0x608: Call2 0xba5

0x609: Pop(0)
0x60a: Push((int) 12400)
0x60b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x60c: IF (Stack[-1] == 0) GOTO 0x612; Pop(1)

0x60d: PushEmpty(object, object)
0x60e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x60f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x610: Call2 0xc18

0x611: Pop(2)
0x612: Push((int) 35808)
0x613: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x614: IF (Stack[-1] == 0) GOTO 0x61a; Pop(1)

0x615: PushEmpty(object, object)
0x616: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x617: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x618: Call2 0xbf4

0x619: Pop(2)
0x61a: Push((int) 35839)
0x61b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x61c: IF (Stack[-1] == 0) GOTO 0x622; Pop(1)

0x61d: PushEmpty(object, object)
0x61e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x61f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x620: Call2 0xbfa

0x621: Pop(2)
0x622: Push((int) 12399)
0x623: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x624: IF (Stack[-1] == 0) GOTO 0x681; Pop(1)

0x625: PushEmpty(string)
0x626: Stack[-1] = "Neutral"
0x627: Call2 0x5ee

0x628: Pop(1)
0x629: Push((int) 511211)
0x62a: @@ SetMessage(Stack[-1])
0x62b: Pop(1)
0x62c: @@ ClearReplies()
0x62d: Pop(0)
0x62e: PushEmpty(bool)
0x62f: Stack[-1] = (bool) 1
0x630: PushEmpty(bool)
0x631: Stack[-1] = (bool) 0
0x632: PushEmpty(bool)
0x633: Stack[-1] = (bool) 0
0x634: PushEmpty(bool, object)
0x635: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x636: Call2 0xc5a

0x637: Pop(1)
0x638: IF (Stack[-1] == 0) GOTO 0x63f; Pop(1)

0x639: PushEmpty(bool, object)
0x63a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x63b: Call2 0xc8a

0x63c: Pop(1)
0x63d: IF (Stack[-1] == 0) GOTO 0x63f; Pop(1)

0x63e: Stack[-1] = (bool) 1
0x63f: IF (Stack[-1] == 0) GOTO 0x647; Pop(1)

0x640: PushEmpty(bool, object)
0x641: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x642: Call2 0xc66

0x643: Pop(1)
0x644: Pop(1); Push((bool) Stack[-1] == 0)
0x645: IF (Stack[-1] == 0) GOTO 0x647; Pop(1)

0x646: Stack[-1] = (bool) 1
0x647: IF (Stack[-1] == 0) GOTO 0x661; Pop(1)

0x648: PushEmpty(bool)
0x649: Stack[-1] = (bool) 0
0x64a: PushEmpty(bool)
0x64b: Stack[-1] = (bool) 0
0x64c: PushEmpty(bool, object)
0x64d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x64e: Call2 0xc7e

0x64f: Pop(1)
0x650: IF (Stack[-1] == 0) GOTO 0x657; Pop(1)

0x651: PushEmpty(bool, object)
0x652: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x653: Call2 0xc8a

0x654: Pop(1)
0x655: IF (Stack[-1] == 0) GOTO 0x657; Pop(1)

0x656: Stack[-1] = (bool) 1
0x657: IF (Stack[-1] == 0) GOTO 0x65f; Pop(1)

0x658: PushEmpty(bool, object)
0x659: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x65a: Call2 0xc66

0x65b: Pop(1)
0x65c: Pop(1); Push((bool) Stack[-1] == 0)
0x65d: IF (Stack[-1] == 0) GOTO 0x65f; Pop(1)

0x65e: Stack[-1] = (bool) 1
0x65f: IF (Stack[-1] == 0) GOTO 0x661; Pop(1)

0x660: Stack[-1] = (bool) 0
0x661: IF (Stack[-1] == 0) GOTO 0x667; Pop(1)

0x662: Push((int) 511212)
0x663: Push((int) 12401)
0x664: Push((int) 12400)
0x665: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x666: Pop(3)
0x667: PushEmpty(bool, object)
0x668: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x669: Call2 0xc36

0x66a: Pop(1)
0x66b: IF (Stack[-1] == 0) GOTO 0x671; Pop(1)

0x66c: Push((int) 534224)
0x66d: Push((int) 35809)
0x66e: Push((int) 35808)
0x66f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x670: Pop(3)
0x671: PushEmpty(bool, object)
0x672: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x673: Call2 0xc42

0x674: Pop(1)
0x675: IF (Stack[-1] == 0) GOTO 0x67b; Pop(1)

0x676: Push((int) 534252)
0x677: Push((int) 35840)
0x678: Push((int) 35839)
0x679: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67a: Pop(3)
0x67b: Push((int) 515335)
0x67c: Push((int) -1)
0x67d: Push((int) 16558)
0x67e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67f: Pop(3)
0x680: Return(); Pop(0)

0x681: Push((int) 35840)
0x682: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x683: IF (Stack[-1] == 0) GOTO 0x698; Pop(1)

0x684: PushEmpty(string)
0x685: Stack[-1] = "Triumph"
0x686: Call2 0x5ee

0x687: Pop(1)
0x688: Push((int) 534253)
0x689: @@ SetMessage(Stack[-1])
0x68a: Pop(1)
0x68b: @@ ClearReplies()
0x68c: Pop(0)
0x68d: Push((int) 534254)
0x68e: Push((int) 35842)
0x68f: Push((int) 35841)
0x690: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x691: Pop(3)
0x692: Push((int) 534266)
0x693: Push((int) 35842)
0x694: Push((int) 35853)
0x695: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x696: Pop(3)
0x697: Return(); Pop(0)

0x698: Push((int) 35842)
0x699: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x69a: IF (Stack[-1] == 0) GOTO 0x6af; Pop(1)

0x69b: PushEmpty(string)
0x69c: Stack[-1] = "Triumph"
0x69d: Call2 0x5ee

0x69e: Pop(1)
0x69f: Push((int) 534255)
0x6a0: @@ SetMessage(Stack[-1])
0x6a1: Pop(1)
0x6a2: @@ ClearReplies()
0x6a3: Pop(0)
0x6a4: Push((int) 534256)
0x6a5: Push((int) 35844)
0x6a6: Push((int) 35843)
0x6a7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6a8: Pop(3)
0x6a9: Push((int) 534263)
0x6aa: Push((int) 35851)
0x6ab: Push((int) 35850)
0x6ac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ad: Pop(3)
0x6ae: Return(); Pop(0)

0x6af: Push((int) 35851)
0x6b0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6b1: IF (Stack[-1] == 0) GOTO 0x6c1; Pop(1)

0x6b2: PushEmpty(string)
0x6b3: Stack[-1] = "Neutral"
0x6b4: Call2 0x5ee

0x6b5: Pop(1)
0x6b6: Push((int) 534264)
0x6b7: @@ SetMessage(Stack[-1])
0x6b8: Pop(1)
0x6b9: @@ ClearReplies()
0x6ba: Pop(0)
0x6bb: Push((int) 534265)
0x6bc: Push((int) -1)
0x6bd: Push((int) 35852)
0x6be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6bf: Pop(3)
0x6c0: Return(); Pop(0)

0x6c1: Push((int) 35844)
0x6c2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6c3: IF (Stack[-1] == 0) GOTO 0x6d8; Pop(1)

0x6c4: PushEmpty(string)
0x6c5: Stack[-1] = "Distrust"
0x6c6: Call2 0x5ee

0x6c7: Pop(1)
0x6c8: Push((int) 534257)
0x6c9: @@ SetMessage(Stack[-1])
0x6ca: Pop(1)
0x6cb: @@ ClearReplies()
0x6cc: Pop(0)
0x6cd: Push((int) 534258)
0x6ce: Push((int) 35846)
0x6cf: Push((int) 35845)
0x6d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6d1: Pop(3)
0x6d2: Push((int) 534262)
0x6d3: Push((int) -1)
0x6d4: Push((int) 35849)
0x6d5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6d6: Pop(3)
0x6d7: Return(); Pop(0)

0x6d8: Push((int) 35846)
0x6d9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6da: IF (Stack[-1] == 0) GOTO 0x6ef; Pop(1)

0x6db: PushEmpty(string)
0x6dc: Stack[-1] = "Neutral"
0x6dd: Call2 0x5ee

0x6de: Pop(1)
0x6df: Push((int) 534259)
0x6e0: @@ SetMessage(Stack[-1])
0x6e1: Pop(1)
0x6e2: @@ ClearReplies()
0x6e3: Pop(0)
0x6e4: Push((int) 534260)
0x6e5: Push((int) -1)
0x6e6: Push((int) 35847)
0x6e7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e8: Pop(3)
0x6e9: Push((int) 534261)
0x6ea: Push((int) -1)
0x6eb: Push((int) 35848)
0x6ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ed: Pop(3)
0x6ee: Return(); Pop(0)

0x6ef: Push((int) 35809)
0x6f0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6f1: IF (Stack[-1] == 0) GOTO 0x701; Pop(1)

0x6f2: PushEmpty(string)
0x6f3: Stack[-1] = "Think"
0x6f4: Call2 0x5ee

0x6f5: Pop(1)
0x6f6: Push((int) 534225)
0x6f7: @@ SetMessage(Stack[-1])
0x6f8: Pop(1)
0x6f9: @@ ClearReplies()
0x6fa: Pop(0)
0x6fb: Push((int) 534226)
0x6fc: Push((int) 35811)
0x6fd: Push((int) 35810)
0x6fe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ff: Pop(3)
0x700: Return(); Pop(0)

0x701: Push((int) 35811)
0x702: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x703: IF (Stack[-1] == 0) GOTO 0x718; Pop(1)

0x704: PushEmpty(string)
0x705: Stack[-1] = "Think"
0x706: Call2 0x5ee

0x707: Pop(1)
0x708: Push((int) 534227)
0x709: @@ SetMessage(Stack[-1])
0x70a: Pop(1)
0x70b: @@ ClearReplies()
0x70c: Pop(0)
0x70d: Push((int) 534228)
0x70e: Push((int) 35813)
0x70f: Push((int) 35812)
0x710: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x711: Pop(3)
0x712: Push((int) 534234)
0x713: Push((int) 35813)
0x714: Push((int) 35818)
0x715: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x716: Pop(3)
0x717: Return(); Pop(0)

0x718: Push((int) 35813)
0x719: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x71a: IF (Stack[-1] == 0) GOTO 0x72f; Pop(1)

0x71b: PushEmpty(string)
0x71c: Stack[-1] = "Neutral"
0x71d: Call2 0x5ee

0x71e: Pop(1)
0x71f: Push((int) 534229)
0x720: @@ SetMessage(Stack[-1])
0x721: Pop(1)
0x722: @@ ClearReplies()
0x723: Pop(0)
0x724: Push((int) 534230)
0x725: Push((int) -1)
0x726: Push((int) 35814)
0x727: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x728: Pop(3)
0x729: Push((int) 534233)
0x72a: Push((int) -1)
0x72b: Push((int) 35817)
0x72c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x72d: Pop(3)
0x72e: Return(); Pop(0)

0x72f: Push((int) 12401)
0x730: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x731: IF (Stack[-1] == 0) GOTO 0x746; Pop(1)

0x732: PushEmpty(string)
0x733: Stack[-1] = "Pride"
0x734: Call2 0x5ee

0x735: Pop(1)
0x736: Push((int) 511213)
0x737: @@ SetMessage(Stack[-1])
0x738: Pop(1)
0x739: @@ ClearReplies()
0x73a: Pop(0)
0x73b: Push((int) 511214)
0x73c: Push((int) 12403)
0x73d: Push((int) 12402)
0x73e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73f: Pop(3)
0x740: Push((int) 511223)
0x741: Push((int) 12413)
0x742: Push((int) 12412)
0x743: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x744: Pop(3)
0x745: Return(); Pop(0)

0x746: Push((int) 12413)
0x747: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x748: IF (Stack[-1] == 0) GOTO 0x758; Pop(1)

0x749: PushEmpty(string)
0x74a: Stack[-1] = "Neutral"
0x74b: Call2 0x5ee

0x74c: Pop(1)
0x74d: Push((int) 511224)
0x74e: @@ SetMessage(Stack[-1])
0x74f: Pop(1)
0x750: @@ ClearReplies()
0x751: Pop(0)
0x752: Push((int) 511225)
0x753: Push((int) 12405)
0x754: Push((int) 12414)
0x755: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x756: Pop(3)
0x757: Return(); Pop(0)

0x758: Push((int) 12403)
0x759: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x75a: IF (Stack[-1] == 0) GOTO 0x76f; Pop(1)

0x75b: PushEmpty(string)
0x75c: Stack[-1] = "Pride"
0x75d: Call2 0x5ee

0x75e: Pop(1)
0x75f: Push((int) 511215)
0x760: @@ SetMessage(Stack[-1])
0x761: Pop(1)
0x762: @@ ClearReplies()
0x763: Pop(0)
0x764: Push((int) 511220)
0x765: Push((int) 12409)
0x766: Push((int) 12408)
0x767: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x768: Pop(3)
0x769: Push((int) 511216)
0x76a: Push((int) 12405)
0x76b: Push((int) 12404)
0x76c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x76d: Pop(3)
0x76e: Return(); Pop(0)

0x76f: Push((int) 12405)
0x770: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x771: IF (Stack[-1] == 0) GOTO 0x786; Pop(1)

0x772: PushEmpty(string)
0x773: Stack[-1] = "Pride"
0x774: Call2 0x5ee

0x775: Pop(1)
0x776: Push((int) 511217)
0x777: @@ SetMessage(Stack[-1])
0x778: Pop(1)
0x779: @@ ClearReplies()
0x77a: Pop(0)
0x77b: Push((int) 511218)
0x77c: Push((int) -1)
0x77d: Push((int) 12406)
0x77e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x77f: Pop(3)
0x780: Push((int) 511219)
0x781: Push((int) -1)
0x782: Push((int) 12407)
0x783: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x784: Pop(3)
0x785: Return(); Pop(0)

0x786: Push((int) 12409)
0x787: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x788: IF (Stack[-1] == 0) GOTO 0x798; Pop(1)

0x789: PushEmpty(string)
0x78a: Stack[-1] = "Think"
0x78b: Call2 0x5ee

0x78c: Pop(1)
0x78d: Push((int) 511221)
0x78e: @@ SetMessage(Stack[-1])
0x78f: Pop(1)
0x790: @@ ClearReplies()
0x791: Pop(0)
0x792: Push((int) 511222)
0x793: Push((int) 12405)
0x794: Push((int) 12410)
0x795: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x796: Pop(3)
0x797: Return(); Pop(0)

0x798: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x799: PushEmpty(bool)
0x79a: Call2 0xcaf

0x79b: Pop(0)
0x79c: IF (Stack[-1] == 0) GOTO 0x7a0; Pop(1)

0x79d: @ lshStopAnimation()
0x79e: Pop(0)
0x79f: GOTO 0x7a2

0x7a0: @ StopAnimation()
0x7a1: Pop(0)
0x7a2: Return(); Pop(0)

0x7a3: GOTO 0x605

0x7a4: Return(); Pop(0)

0x7a5: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x7a6: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x7a7: PushEmpty(bool, object, float)
0x7a8: Stack[-2] = Stack[-12]
0x7a9: Stack[-1] = (float) 70.0
0x7aa: Call2 0xa96

0x7ab: Pop(2)
0x7ac: Pop(1); Push((bool) Stack[-1] == 0)
0x7ad: IF (Stack[-1] == 0) GOTO 0x7b0; Pop(1)

0x7ae: Stack[-10] = (int) -2
0x7af: Return(); Pop(8)

0x7b0: @ CreateDialog(Stack[-4])
0x7b1: Pop(0)
0x7b2: PushEmpty(int)
0x7b3: Call2 0xca9

0x7b4: Pop(0)
0x7b5: @@ SetNPCName(Stack[-1])
0x7b6: Pop(1)
0x7b7: PushEmpty(int)
0x7b8: Call2 0xca7

0x7b9: Pop(0)
0x7ba: @@ SetNPCDescription(Stack[-1])
0x7bb: Pop(1)
0x7bc: PushEmpty(string)
0x7bd: Call2 0xcab

0x7be: Pop(0)
0x7bf: @@ SetPhoto(Stack[-1])
0x7c0: Pop(1)
0x7c1: PushEmpty(string)
0x7c2: Call2 0xcad

0x7c3: Pop(0)
0x7c4: @@ SetPhoto2(Stack[-1])
0x7c5: Pop(1)
0x7c6: PushEmpty(int)
0x7c7: Call2 0xc96

0x7c8: Pop(0)
0x7c9: @@ SetPlayerName(Stack[-1])
0x7ca: Pop(1)
0x7cb: Stack[-2] = (int) -1
0x7cc: @ IsOverrideActive(Stack[-3])
0x7cd: Pop(0)
0x7ce: Push(Stack[-3])
0x7cf: IF (Stack[-1] == 0) GOTO 0x7d2; Pop(1)

0x7d0: Stack[-10] = (int) -2
0x7d1: Return(); Pop(8)

0x7d2: @ DoDialog(Stack[-4])
0x7d3: Pop(0)
0x7d4: PushEmpty(bool, object)
0x7d5: PushEmpty(object)
0x7d6: Call2 0xbac

0x7d7: Stack[-2] = Stack[-1]
0x7d8: Pop(1)
0x7d9: Call2 0xaed

0x7da: Pop(2)
0x7db: PushEmpty(object, object)
0x7dc: Stack[-2] = Stack[-11]
0x7dd: Stack[-1] = Stack[-6]
0x7de: Push(-2, 4); TaskCall(9)
0x7df: Call2 0x7f6

0x7e0: Pop(-2, 4); TaskReturn
0x7e1: Pop(2)
0x7e2: @@ IsDialogEnd(Stack[-1])
0x7e3: Pop(0)
0x7e4: Pop(0); Push((bool) Stack[-1] == 0)
0x7e5: IF (Stack[-1] == 0) GOTO 0x7eb; Pop(1)

0x7e6: @ sync()
0x7e7: Pop(0)
0x7e8: @@ IsDialogEnd(Stack[-1])
0x7e9: Pop(0)
0x7ea: GOTO 0x7e4

0x7eb: PushEmpty(object)
0x7ec: Stack[-1] = Stack[-10]
0x7ed: Call2 0xadb

0x7ee: Pop(1)
0x7ef: @ StopDialog(Stack[-4])
0x7f0: Pop(0)
0x7f1: @@ GetReturnValue(Stack[-2])
0x7f2: Pop(0)
0x7f3: Stack[-10] = Stack[-2]
0x7f4: Return(); Pop(8)

0x7f5: Stack[-4] = 0
0x7f6: PushEmpty()
0x7f7: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x7f8: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x7f9: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x7fa: Push((int) 1)
0x7fb: IF (Stack[-1] == 0) GOTO 0x817; Pop(1)

0x7fc: PushEmpty(string)
0x7fd: Stack[-1] = "Neutral"
0x7fe: Call2 0x835

0x7ff: Pop(1)
0x800: Push((int) 535284)
0x801: @@ SetMessage(Stack[-1])
0x802: Pop(1)
0x803: @@ ClearReplies()
0x804: Pop(0)
0x805: Push((int) 535285)
0x806: Push((int) 36962)
0x807: Push((int) 36961)
0x808: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x809: Pop(3)
0x80a: Push((int) 535292)
0x80b: Push((int) -1)
0x80c: Push((int) 36968)
0x80d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x80e: Pop(3)
0x80f: Push((int) 535293)
0x810: Push((int) -1)
0x811: Push((int) 36969)
0x812: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x813: Pop(3)
0x814: GOTO 0x817

0x815: Return(); Pop(0)

0x816: GOTO 0x7fa

0x817: PushEmpty(bool)
0x818: Call2 0xcaf

0x819: Pop(0)
0x81a: IF (Stack[-1] == 0) GOTO 0x826; Pop(1)

0x81b: @ lshWaitForAnimEnd()
0x81c: Pop(0)
0x81d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x81e: IF (Stack[-1] == 0) GOTO 0x820; Pop(1)

0x81f: GOTO 0x825

0x820: PushEmpty(string)
0x821: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x822: Call2 0xb77

0x823: Pop(1)
0x824: GOTO 0x81b

0x825: GOTO 0x834

0x826: Push("all")
0x827: Push("idle")
0x828: @ PlayAnimation(Stack[-2], Stack[-1])
0x829: Pop(2)
0x82a: @ WaitForAnimEnd()
0x82b: Pop(0)
0x82c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x82d: IF (Stack[-1] == 0) GOTO 0x82f; Pop(1)

0x82e: GOTO 0x834

0x82f: Push("all")
0x830: Push("idle")
0x831: @ PlayAnimation(Stack[-2], Stack[-1])
0x832: Pop(2)
0x833: GOTO 0x82a

0x834: Return(); Pop(0)

0x835: PushEmpty()
0x836: PushEmpty(bool)
0x837: Call2 0xcaf

0x838: Pop(0)
0x839: Pop(1); Push((bool) Stack[-1] == 0)
0x83a: IF (Stack[-1] == 0) GOTO 0x83c; Pop(1)

0x83b: Return(); Pop(0)

0x83c: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x83d: IF (Stack[-1] == 0) GOTO 0x83f; Pop(1)

0x83e: Return(); Pop(0)

0x83f: PushEmpty(string, bool)
0x840: Stack[-2] = Stack[-3]
0x841: Push("")
0x842: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x843: IF (Stack[-1] == 0) GOTO 0x846; Pop(1)

0x844: Stack[-1] = (bool) 0
0x845: GOTO 0x847

0x846: Stack[-1] = (bool) 1
0x847: Call2 0xb87

0x848: Pop(2)
0x849: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x84a: Return(); Pop(0)

0x84b: PushEmpty()
0x84c: Push((int) 1)
0x84d: IF (Stack[-1] == 0) GOTO 0x8a7; Pop(1)

0x84e: PushEmpty()
0x84f: Call2 0xba5

0x850: Pop(0)
0x851: Push((int) 36960)
0x852: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x853: IF (Stack[-1] == 0) GOTO 0x86d; Pop(1)

0x854: PushEmpty(string)
0x855: Stack[-1] = "Neutral"
0x856: Call2 0x835

0x857: Pop(1)
0x858: Push((int) 535284)
0x859: @@ SetMessage(Stack[-1])
0x85a: Pop(1)
0x85b: @@ ClearReplies()
0x85c: Pop(0)
0x85d: Push((int) 535285)
0x85e: Push((int) 36962)
0x85f: Push((int) 36961)
0x860: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x861: Pop(3)
0x862: Push((int) 535292)
0x863: Push((int) -1)
0x864: Push((int) 36968)
0x865: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x866: Pop(3)
0x867: Push((int) 535293)
0x868: Push((int) -1)
0x869: Push((int) 36969)
0x86a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x86b: Pop(3)
0x86c: Return(); Pop(0)

0x86d: Push((int) 36962)
0x86e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x86f: IF (Stack[-1] == 0) GOTO 0x884; Pop(1)

0x870: PushEmpty(string)
0x871: Stack[-1] = "Neutral"
0x872: Call2 0x835

0x873: Pop(1)
0x874: Push((int) 535286)
0x875: @@ SetMessage(Stack[-1])
0x876: Pop(1)
0x877: @@ ClearReplies()
0x878: Pop(0)
0x879: Push((int) 535287)
0x87a: Push((int) 36964)
0x87b: Push((int) 36963)
0x87c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x87d: Pop(3)
0x87e: Push((int) 535291)
0x87f: Push((int) -1)
0x880: Push((int) 36967)
0x881: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x882: Pop(3)
0x883: Return(); Pop(0)

0x884: Push((int) 36964)
0x885: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x886: IF (Stack[-1] == 0) GOTO 0x89b; Pop(1)

0x887: PushEmpty(string)
0x888: Stack[-1] = "Neutral"
0x889: Call2 0x835

0x88a: Pop(1)
0x88b: Push((int) 535288)
0x88c: @@ SetMessage(Stack[-1])
0x88d: Pop(1)
0x88e: @@ ClearReplies()
0x88f: Pop(0)
0x890: Push((int) 535289)
0x891: Push((int) -1)
0x892: Push((int) 36965)
0x893: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x894: Pop(3)
0x895: Push((int) 535290)
0x896: Push((int) -1)
0x897: Push((int) 36966)
0x898: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x899: Pop(3)
0x89a: Return(); Pop(0)

0x89b: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x89c: PushEmpty(bool)
0x89d: Call2 0xcaf

0x89e: Pop(0)
0x89f: IF (Stack[-1] == 0) GOTO 0x8a3; Pop(1)

0x8a0: @ lshStopAnimation()
0x8a1: Pop(0)
0x8a2: GOTO 0x8a5

0x8a3: @ StopAnimation()
0x8a4: Pop(0)
0x8a5: Return(); Pop(0)

0x8a6: GOTO 0x84c

0x8a7: Return(); Pop(0)

0x8a8: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x8a9: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x8aa: PushEmpty(bool, object, float)
0x8ab: Stack[-2] = Stack[-12]
0x8ac: Stack[-1] = (float) 70.0
0x8ad: Call2 0xa96

0x8ae: Pop(2)
0x8af: Pop(1); Push((bool) Stack[-1] == 0)
0x8b0: IF (Stack[-1] == 0) GOTO 0x8b3; Pop(1)

0x8b1: Stack[-10] = (int) -2
0x8b2: Return(); Pop(8)

0x8b3: @ CreateDialog(Stack[-4])
0x8b4: Pop(0)
0x8b5: PushEmpty(int)
0x8b6: Call2 0xca9

0x8b7: Pop(0)
0x8b8: @@ SetNPCName(Stack[-1])
0x8b9: Pop(1)
0x8ba: PushEmpty(int)
0x8bb: Call2 0xca7

0x8bc: Pop(0)
0x8bd: @@ SetNPCDescription(Stack[-1])
0x8be: Pop(1)
0x8bf: PushEmpty(string)
0x8c0: Call2 0xcab

0x8c1: Pop(0)
0x8c2: @@ SetPhoto(Stack[-1])
0x8c3: Pop(1)
0x8c4: PushEmpty(string)
0x8c5: Call2 0xcad

0x8c6: Pop(0)
0x8c7: @@ SetPhoto2(Stack[-1])
0x8c8: Pop(1)
0x8c9: PushEmpty(int)
0x8ca: Call2 0xc96

0x8cb: Pop(0)
0x8cc: @@ SetPlayerName(Stack[-1])
0x8cd: Pop(1)
0x8ce: Stack[-2] = (int) -1
0x8cf: @ IsOverrideActive(Stack[-3])
0x8d0: Pop(0)
0x8d1: Push(Stack[-3])
0x8d2: IF (Stack[-1] == 0) GOTO 0x8d5; Pop(1)

0x8d3: Stack[-10] = (int) -2
0x8d4: Return(); Pop(8)

0x8d5: @ DoDialog(Stack[-4])
0x8d6: Pop(0)
0x8d7: PushEmpty(bool, object)
0x8d8: PushEmpty(object)
0x8d9: Call2 0xbac

0x8da: Stack[-2] = Stack[-1]
0x8db: Pop(1)
0x8dc: Call2 0xaed

0x8dd: Pop(2)
0x8de: PushEmpty(object, object)
0x8df: Stack[-2] = Stack[-11]
0x8e0: Stack[-1] = Stack[-6]
0x8e1: Push(-2, 4); TaskCall(11)
0x8e2: Call2 0x8f9

0x8e3: Pop(-2, 4); TaskReturn
0x8e4: Pop(2)
0x8e5: @@ IsDialogEnd(Stack[-1])
0x8e6: Pop(0)
0x8e7: Pop(0); Push((bool) Stack[-1] == 0)
0x8e8: IF (Stack[-1] == 0) GOTO 0x8ee; Pop(1)

0x8e9: @ sync()
0x8ea: Pop(0)
0x8eb: @@ IsDialogEnd(Stack[-1])
0x8ec: Pop(0)
0x8ed: GOTO 0x8e7

0x8ee: PushEmpty(object)
0x8ef: Stack[-1] = Stack[-10]
0x8f0: Call2 0xadb

0x8f1: Pop(1)
0x8f2: @ StopDialog(Stack[-4])
0x8f3: Pop(0)
0x8f4: @@ GetReturnValue(Stack[-2])
0x8f5: Pop(0)
0x8f6: Stack[-10] = Stack[-2]
0x8f7: Return(); Pop(8)

0x8f8: Stack[-4] = 0
0x8f9: PushEmpty()
0x8fa: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x8fb: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x8fc: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x8fd: Push((int) 1)
0x8fe: IF (Stack[-1] == 0) GOTO 0x915; Pop(1)

0x8ff: PushEmpty(string)
0x900: Stack[-1] = "Neutral"
0x901: Call2 0x933

0x902: Pop(1)
0x903: Push((int) 540542)
0x904: @@ SetMessage(Stack[-1])
0x905: Pop(1)
0x906: @@ ClearReplies()
0x907: Pop(0)
0x908: Push((int) 540543)
0x909: Push((int) -1)
0x90a: Push((int) 42552)
0x90b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x90c: Pop(3)
0x90d: Push((int) 540796)
0x90e: Push((int) -1)
0x90f: Push((int) 42845)
0x910: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x911: Pop(3)
0x912: GOTO 0x915

0x913: Return(); Pop(0)

0x914: GOTO 0x8fd

0x915: PushEmpty(bool)
0x916: Call2 0xcaf

0x917: Pop(0)
0x918: IF (Stack[-1] == 0) GOTO 0x924; Pop(1)

0x919: @ lshWaitForAnimEnd()
0x91a: Pop(0)
0x91b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x91c: IF (Stack[-1] == 0) GOTO 0x91e; Pop(1)

0x91d: GOTO 0x923

0x91e: PushEmpty(string)
0x91f: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x920: Call2 0xb77

0x921: Pop(1)
0x922: GOTO 0x919

0x923: GOTO 0x932

0x924: Push("all")
0x925: Push("idle")
0x926: @ PlayAnimation(Stack[-2], Stack[-1])
0x927: Pop(2)
0x928: @ WaitForAnimEnd()
0x929: Pop(0)
0x92a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x92b: IF (Stack[-1] == 0) GOTO 0x92d; Pop(1)

0x92c: GOTO 0x932

0x92d: Push("all")
0x92e: Push("idle")
0x92f: @ PlayAnimation(Stack[-2], Stack[-1])
0x930: Pop(2)
0x931: GOTO 0x928

0x932: Return(); Pop(0)

0x933: PushEmpty()
0x934: PushEmpty(bool)
0x935: Call2 0xcaf

0x936: Pop(0)
0x937: Pop(1); Push((bool) Stack[-1] == 0)
0x938: IF (Stack[-1] == 0) GOTO 0x93a; Pop(1)

0x939: Return(); Pop(0)

0x93a: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x93b: IF (Stack[-1] == 0) GOTO 0x93d; Pop(1)

0x93c: Return(); Pop(0)

0x93d: PushEmpty(string, bool)
0x93e: Stack[-2] = Stack[-3]
0x93f: Push("")
0x940: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x941: IF (Stack[-1] == 0) GOTO 0x944; Pop(1)

0x942: Stack[-1] = (bool) 0
0x943: GOTO 0x945

0x944: Stack[-1] = (bool) 1
0x945: Call2 0xb87

0x946: Pop(2)
0x947: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x948: Return(); Pop(0)

0x949: PushEmpty()
0x94a: Push((int) 1)
0x94b: IF (Stack[-1] == 0) GOTO 0x972; Pop(1)

0x94c: PushEmpty()
0x94d: Call2 0xba5

0x94e: Pop(0)
0x94f: Push((int) 42551)
0x950: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x951: IF (Stack[-1] == 0) GOTO 0x966; Pop(1)

0x952: PushEmpty(string)
0x953: Stack[-1] = "Neutral"
0x954: Call2 0x933

0x955: Pop(1)
0x956: Push((int) 540542)
0x957: @@ SetMessage(Stack[-1])
0x958: Pop(1)
0x959: @@ ClearReplies()
0x95a: Pop(0)
0x95b: Push((int) 540543)
0x95c: Push((int) -1)
0x95d: Push((int) 42552)
0x95e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x95f: Pop(3)
0x960: Push((int) 540796)
0x961: Push((int) -1)
0x962: Push((int) 42845)
0x963: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x964: Pop(3)
0x965: Return(); Pop(0)

0x966: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x967: PushEmpty(bool)
0x968: Call2 0xcaf

0x969: Pop(0)
0x96a: IF (Stack[-1] == 0) GOTO 0x96e; Pop(1)

0x96b: @ lshStopAnimation()
0x96c: Pop(0)
0x96d: GOTO 0x970

0x96e: @ StopAnimation()
0x96f: Pop(0)
0x970: Return(); Pop(0)

0x971: GOTO 0x94a

0x972: Return(); Pop(0)

0x973: Push(GlobalVars[1])
0x974: Stack[-1] = (bool) 0
0x975: GlobalVars[1] = Stack[-1]; Pop(1)
0x976: PushEmpty()
0x977: Call2 0x97a

0x978: Pop(0)
0x979: Return(); Pop(0)

0x97a: PushEmpty(bool)
0x97b: Call2 0xa91

0x97c: Pop(0)
0x97d: Pop(1); Push((bool) Stack[-1] == 0)
0x97e: IF (Stack[-1] == 0) GOTO 0x981; Pop(1)

0x97f: @ Hold()
0x980: Pop(0)
0x981: @ GetDirection(Stack[-0])
0x982: Pop(0)
0x983: PushEmpty()
0x984: Call2 0xa2a

0x985: Pop(0)
0x986: GOTO 0x983

0x987: Return(); Pop(0)

0x988: PushEmpty(object, object)
0x989: Push("player")
0x98a: @ FindActor(Stack[-2], Stack[-1])
0x98b: Pop(1)
0x98c: Pop(0); Push((bool) Stack[-1] == 0)
0x98d: IF (Stack[-1] == 0) GOTO 0x990; Pop(1)

0x98e: Stack[-3] = (bool) 0
0x98f: Return(); Pop(2)

0x990: PushEmpty(bool, object)
0x991: Stack[-1] = Stack[-3]
0x992: Call2 0xa88

0x993: Stack[-5] = Stack[-2]
0x994: Pop(2)
0x995: Return(); Pop(2)

0x996: Stack[-1] = 0
0x997: Push(CvectorIndex(Stack[-0], 0))
0x998: Push(CvectorIndex(Stack[-0], 2))
0x999: @ RotateAsync(Stack[-2], Stack[-1])
0x99a: Pop(2)
0x99b: Return(); Pop(0)

0x99c: PushEmpty(object, bool, object, bool)
0x99d: Push("player")
0x99e: @ FindActor(Stack[-3], Stack[-1])
0x99f: Pop(1)
0x9a0: Pop(0); Push((bool) Stack[-2] == 0)
0x9a1: IF (Stack[-1] == 0) GOTO 0x9a4; Pop(1)

0x9a2: Stack[-5] = (bool) 0
0x9a3: Return(); Pop(4)

0x9a4: PushEmpty(float, object)
0x9a5: Stack[-1] = Stack[-4]
0x9a6: Call2 0xa76

0x9a7: Pop(1)
0x9a8: Push((float)90000.0)
0x9a9: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x9aa: IF (Stack[-1] == 0) GOTO 0x9ad; Pop(1)

0x9ab: Stack[-5] = (bool) 0
0x9ac: Return(); Pop(4)

0x9ad: @ CanSee(Stack[-1], Stack[-2])
0x9ae: Pop(0)
0x9af: Stack[-5] = Stack[-1]
0x9b0: Return(); Pop(4)

0x9b1: Stack[-2] = 0
0x9b2: PushEmpty(float, float)
0x9b3: Push((int) 8)
0x9b4: Push((int) 16)
0x9b5: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x9b6: Pop(2)
0x9b7: Push((int) 10)
0x9b8: @ SetTimer(Stack[-1], Stack[-2])
0x9b9: Pop(1)
0x9ba: Return(); Pop(2)

0x9bb: Push((int) 10)
0x9bc: @ KillTimer(Stack[-1])
0x9bd: Pop(1)
0x9be: Return(); Pop(0)

0x9bf: PushEmpty()
0x9c0: Push((int) 10)
0x9c1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9c2: IF (Stack[-1] == 0) GOTO 0x9e4; Pop(1)

0x9c3: PushEmpty()
0x9c4: Call2 0x9bb

0x9c5: Pop(0)
0x9c6: PushEmpty(bool)
0x9c7: Stack[-1] = (bool) 0
0x9c8: PushEmpty(bool)
0x9c9: Call2 0xa91

0x9ca: Pop(0)
0x9cb: IF (Stack[-1] == 0) GOTO 0x9d1; Pop(1)

0x9cc: PushEmpty(bool)
0x9cd: Call2 0x99c

0x9ce: Pop(0)
0x9cf: IF (Stack[-1] == 0) GOTO 0x9d1; Pop(1)

0x9d0: Stack[-1] = (bool) 1
0x9d1: IF (Stack[-1] == 0) GOTO 0x9de; Pop(1)

0x9d2: PushEmpty(bool)
0x9d3: Call2 0x988

0x9d4: Pop(0)
0x9d5: IF (Stack[-1] == 0) GOTO 0x9dd; Pop(1)

0x9d6: PushEmpty(bool, object)
0x9d7: PushEmpty(object)
0x9d8: Call2 0xbac

0x9d9: Stack[-2] = Stack[-1]
0x9da: Pop(1)
0x9db: Call2 0xb27

0x9dc: Pop(2)
0x9dd: GOTO 0x9e4

0x9de: PushEmpty()
0x9df: Call2 0x997

0x9e0: Pop(0)
0x9e1: PushEmpty()
0x9e2: Call2 0x9b2

0x9e3: Pop(0)
0x9e4: Return(); Pop(0)

0x9e5: PushEmpty()
0x9e6: Call2 0xa71

0x9e7: Pop(0)
0x9e8: PushEmpty()
0x9e9: Call2 0x9bb

0x9ea: Pop(0)
0x9eb: @ lshStopSpeech()
0x9ec: Pop(0)
0x9ed: @ lshStopAnimation()
0x9ee: Pop(0)
0x9ef: @ StopAsync()
0x9f0: Pop(0)
0x9f1: @ Hold()
0x9f2: Pop(0)
0x9f3: Return(); Pop(0)

0x9f4: @ StopGroup0()
0x9f5: Pop(0)
0x9f6: PushEmpty()
0x9f7: Call2 0x9bb

0x9f8: Pop(0)
0x9f9: PushEmpty(string)
0x9fa: Stack[-1] = "Neutral"
0x9fb: Call2 0xb77

0x9fc: Pop(1)
0x9fd: PushEmpty()
0x9fe: Call2 0x9b2

0x9ff: Pop(0)
0xa00: Return(); Pop(0)

0xa01: PushEmpty()
0xa02: Push(Stack[-1])
0xa03: IF (Stack[-1] == 0) GOTO 0xa08; Pop(1)

0xa04: PushEmpty()
0xa05: Call2 0x9b2

0xa06: Pop(0)
0xa07: GOTO 0xa0c

0xa08: PushEmpty(string)
0xa09: Stack[-1] = "Neutral"
0xa0a: Call2 0xb77

0xa0b: Pop(1)
0xa0c: Return(); Pop(0)

0xa0d: PushEmpty(bool, bool)
0xa0e: @ IsOverrideActive(Stack[-1])
0xa0f: Pop(0)
0xa10: Pop(0); Push((bool) Stack[-1] == 0)
0xa11: IF (Stack[-1] == 0) GOTO 0xa29; Pop(1)

0xa12: EventDisable(0)
0xa13: PushEmpty()
0xa14: Call2 0xa71

0xa15: Pop(0)
0xa16: PushEmpty(bool, object)
0xa17: Stack[-1] = Stack[-5]
0xa18: Call2 0xa88

0xa19: Pop(2)
0xa1a: EventEnable(0)
0xa1b: PushEmpty(object)
0xa1c: Stack[-1] = Stack[-4]
0xa1d: Call2 0xcb1

0xa1e: Pop(1)
0xa1f: PushEmpty(string)
0xa20: Stack[-1] = "Neutral"
0xa21: Call2 0xb77

0xa22: Pop(1)
0xa23: PushEmpty()
0xa24: Call2 0x9bb

0xa25: Pop(0)
0xa26: PushEmpty()
0xa27: Call2 0x9b2

0xa28: Pop(0)
0xa29: Return(); Pop(2)

0xa2a: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0xa2b: @ WaitForAnimEnd()
0xa2c: Pop(0)
0xa2d: PushEmpty(bool)
0xa2e: Call2 0xa91

0xa2f: Pop(0)
0xa30: Pop(1); Push((bool) Stack[-1] == 0)
0xa31: IF (Stack[-1] == 0) GOTO 0xa33; Pop(1)

0xa32: Return(); Pop(12)

0xa33: PushEmpty(int)
0xa34: Call2 0xbd7

0xa35: Stack[-7] = Stack[-1]
0xa36: Pop(1)
0xa37: Stack[-5] = (int) 0
0xa38: PushEmpty(bool)
0xa39: Stack[-1] = (bool) 0
0xa3a: Push((int) 5)
0xa3b: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0xa3c: IF (Stack[-1] == 0) GOTO 0xa42; Pop(1)

0xa3d: PushEmpty(bool)
0xa3e: Call2 0xa91

0xa3f: Pop(0)
0xa40: IF (Stack[-1] == 0) GOTO 0xa42; Pop(1)

0xa41: Stack[-1] = (bool) 1
0xa42: IF (Stack[-1] == 0) GOTO 0xa6c; Pop(1)

0xa43: Pop(0); Push((bool) Stack[-6] == 0)
0xa44: IF (Stack[-1] == 0) GOTO 0xa4c; Pop(1)

0xa45: Push((int) 3)
0xa46: @ Sleep(Stack[-1], Stack[-5])
0xa47: Pop(1)
0xa48: Pop(0); Push((bool) Stack[-4] == 0)
0xa49: IF (Stack[-1] == 0) GOTO 0xa4b; Pop(1)

0xa4a: GOTO 0xa6c

0xa4b: GOTO 0xa61

0xa4c: @ irand(Stack[-3], Stack[-6])
0xa4d: Pop(0)
0xa4e: Push((int) 5)
0xa4f: @ irand(Stack[-3], Stack[-1])
0xa50: Pop(1)
0xa51: Push((int) 0)
0xa52: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0xa53: IF (Stack[-1] == 0) GOTO 0xa55; Pop(1)

0xa54: Stack[-3] = (int) 0
0xa55: Push("all")
0xa56: PushEmpty(string, int)
0xa57: Stack[-1] = Stack[-6]
0xa58: Call2 0xbd0

0xa59: Pop(1)
0xa5a: @ PlayAnimation(Stack[-2], Stack[-1])
0xa5b: Pop(2)
0xa5c: @ WaitForAnimEnd(Stack[-1])
0xa5d: Pop(0)
0xa5e: Pop(0); Push((bool) Stack[-1] == 0)
0xa5f: IF (Stack[-1] == 0) GOTO 0xa61; Pop(1)

0xa60: GOTO 0xa6c

0xa61: PushEmpty(bool)
0xa62: Call2 0xa6f

0xa63: Pop(0)
0xa64: Pop(1); Push((bool) Stack[-1] == 0)
0xa65: IF (Stack[-1] == 0) GOTO 0xa67; Pop(1)

0xa66: GOTO 0xa6c

0xa67: @ ResetAAS()
0xa68: Pop(0)
0xa69: Push((int) 1)
0xa6a: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0xa6b: GOTO 0xa38

0xa6c: @ ResetAAS()
0xa6d: Pop(0)
0xa6e: Return(); Pop(12)

0xa6f: Stack[-1] = (bool) 1
0xa70: Return(); Pop(0)

0xa71: @ StopAnimation()
0xa72: Pop(0)
0xa73: @ StopGroup0()
0xa74: Pop(0)
0xa75: Return(); Pop(0)

0xa76: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xa77: @ GetPosition(Stack[-3])
0xa78: Pop(0)
0xa79: @@ GetPosition(Stack[-2])
0xa7a: Pop(0)
0xa7b: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0xa7c: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0xa7d: Return(); Pop(6)

0xa7e: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0xa7f: @ GetPosition(Stack[-3])
0xa80: Pop(0)
0xa81: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0xa82: Push(CvectorIndex(Stack[-2], 0))
0xa83: Push(CvectorIndex(Stack[-3], 2))
0xa84: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0xa85: Pop(2)
0xa86: Stack[-8] = Stack[-1]
0xa87: Return(); Pop(6)

0xa88: PushEmpty(cvector, cvector)
0xa89: @@ GetPosition(Stack[-1])
0xa8a: Pop(0)
0xa8b: PushEmpty(bool, cvector)
0xa8c: Stack[-1] = Stack[-3]
0xa8d: Call2 0xa7e

0xa8e: Stack[-6] = Stack[-2]
0xa8f: Pop(2)
0xa90: Return(); Pop(2)

0xa91: PushEmpty(bool, bool)
0xa92: @ IsLoaded(Stack[-1])
0xa93: Pop(0)
0xa94: Stack[-3] = Stack[-1]
0xa95: Return(); Pop(2)

0xa96: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0xa97: @@ GetPosition(Stack[-8])
0xa98: Pop(0)
0xa99: @@ GetEyesHeight(Stack[-9])
0xa9a: Pop(0)
0xa9b: Push(CvectorIndex(Stack[-8], 1))
0xa9c: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xa9d: CvectorIndex(Stack[-9], 1) = Stack[-1];
0xa9e: @ GetPosition(Stack[-7])
0xa9f: Pop(0)
0xaa0: @ GetEyesHeight(Stack[-9])
0xaa1: Pop(0)
0xaa2: Push(CvectorIndex(Stack[-7], 1))
0xaa3: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xaa4: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xaa5: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xaa6: Push(CvectorIndex(Stack[-6], 1))
0xaa7: Stack[-1] = (int) 0
0xaa8: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xaa9: Pop(0); Push(Stack[-6] | Stack[-6]);
0xaaa: Pop(1); Push(Sqrt(Stack[-1]))
0xaab: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0xaac: Stack[-5] = -Stack[-6]; Pop(0);
0xaad: Pop(0); Push(Stack[-6] * Stack[-19]);
0xaae: PushEmpty(cvector, cvector)
0xaaf: Push(CVector(0.0, 1.0, 0.0))
0xab0: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0xab1: Call2 0xbb2

0xab2: Pop(1)
0xab3: Push((int) 25)
0xab4: Pop(2); Push(Stack[-2] * Stack[-1]);
0xab5: Pop(2); Push(Stack[-2] + Stack[-1]);
0xab6: Push(CVector(0.0, 10.0, 0.0))
0xab7: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xab8: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0xab9: @ IsOverrideActive(Stack[-2])
0xaba: Pop(0)
0xabb: Push(Stack[-2])
0xabc: IF (Stack[-1] == 0) GOTO 0xabf; Pop(1)

0xabd: Stack[-21] = (bool) 0
0xabe: Return(); Pop(18)

0xabf: @ StopWorld()
0xac0: Pop(0)
0xac1: Push((bool) 1)
0xac2: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0xac3: Pop(1)
0xac4: Push(CvectorIndex(Stack[-4], 0))
0xac5: Push(CvectorIndex(Stack[-5], 2))
0xac6: @ Rotate(Stack[-2], Stack[-1])
0xac7: Pop(2)
0xac8: PushEmpty(bool)
0xac9: Call2 0xcaf

0xaca: Pop(0)
0xacb: IF (Stack[-1] == 0) GOTO 0xacd; Pop(1)

0xacc: GOTO 0xad5

0xacd: Push("head")
0xace: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xacf: Pop(1)
0xad0: Push(Stack[-1])
0xad1: IF (Stack[-1] == 0) GOTO 0xad5; Pop(1)

0xad2: Push("head")
0xad3: @ LookAsyncCamera(Stack[-1])
0xad4: Pop(1)
0xad5: @ CameraWaitForPlayFinish()
0xad6: Pop(0)
0xad7: @ ResumeWorld()
0xad8: Pop(0)
0xad9: Stack[-21] = (bool) 1
0xada: Return(); Pop(18)

0xadb: PushEmpty(bool, bool)
0xadc: Push((bool) 1)
0xadd: @ CameraSwitchToNormal(Stack[-1])
0xade: Pop(1)
0xadf: PushEmpty(bool)
0xae0: Call2 0xcaf

0xae1: Pop(0)
0xae2: IF (Stack[-1] == 0) GOTO 0xae4; Pop(1)

0xae3: GOTO 0xaec

0xae4: Push("head")
0xae5: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xae6: Pop(1)
0xae7: Push(Stack[-1])
0xae8: IF (Stack[-1] == 0) GOTO 0xaec; Pop(1)

0xae9: Push("head")
0xaea: @ UnlookAsync(Stack[-1])
0xaeb: Pop(1)
0xaec: Return(); Pop(2)

0xaed: PushEmpty(int, int, int, int)
0xaee: Push("voice_common")
0xaef: @ GetVariable(Stack[-1], Stack[-3])
0xaf0: Pop(1)
0xaf1: Push(Stack[-2])
0xaf2: IF (Stack[-1] == 0) GOTO 0xb13; Pop(1)

0xaf3: PushEmpty(bool, object)
0xaf4: Stack[-1] = Stack[-7]
0xaf5: Call2 0xb27

0xaf6: Pop(1)
0xaf7: Pop(1); Push((bool) Stack[-1] == 0)
0xaf8: IF (Stack[-1] == 0) GOTO 0xb01; Pop(1)

0xaf9: PushEmpty(bool, object)
0xafa: Stack[-1] = Stack[-7]
0xafb: Call2 0xb4c

0xafc: Pop(1)
0xafd: Pop(1); Push((bool) Stack[-1] == 0)
0xafe: IF (Stack[-1] == 0) GOTO 0xb01; Pop(1)

0xaff: Stack[-6] = (bool) 0
0xb00: Return(); Pop(4)

0xb01: Push((int) 2)
0xb02: @ irand(Stack[-2], Stack[-1])
0xb03: Pop(1)
0xb04: Push(Stack[-1])
0xb05: IF (Stack[-1] == 0) GOTO 0xb0e; Pop(1)

0xb06: Push("voice_common")
0xb07: Push((int) 1)
0xb08: Pop(1); Push(Stack[-4] + Stack[-1]);
0xb09: Push((int) 3)
0xb0a: Pop(2); Push(Stack[-2] % Stack[-1]);
0xb0b: @ SetVariable(Stack[-2], Stack[-1])
0xb0c: Pop(2)
0xb0d: GOTO 0xb12

0xb0e: Push("voice_common")
0xb0f: Push((int) 0)
0xb10: @ SetVariable(Stack[-2], Stack[-1])
0xb11: Pop(2)
0xb12: GOTO 0xb25

0xb13: PushEmpty(bool, object)
0xb14: Stack[-1] = Stack[-7]
0xb15: Call2 0xb4c

0xb16: Pop(1)
0xb17: Pop(1); Push((bool) Stack[-1] == 0)
0xb18: IF (Stack[-1] == 0) GOTO 0xb21; Pop(1)

0xb19: PushEmpty(bool, object)
0xb1a: Stack[-1] = Stack[-7]
0xb1b: Call2 0xb27

0xb1c: Pop(1)
0xb1d: Pop(1); Push((bool) Stack[-1] == 0)
0xb1e: IF (Stack[-1] == 0) GOTO 0xb21; Pop(1)

0xb1f: Stack[-6] = (bool) 0
0xb20: Return(); Pop(4)

0xb21: Push("voice_common")
0xb22: Push((int) 1)
0xb23: @ SetVariable(Stack[-2], Stack[-1])
0xb24: Pop(2)
0xb25: Stack[-6] = (bool) 1
0xb26: Return(); Pop(4)

0xb27: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xb28: Stack[-5] = "c"
0xb29: Stack[-4] = (int) 0
0xb2a: Push((int) 1)
0xb2b: IF (Stack[-1] == 0) GOTO 0xb37; Pop(1)

0xb2c: Push((int) 1)
0xb2d: Pop(1); Push(Stack[-5] + Stack[-1]);
0xb2e: Pop(1); Push(Stack[-6] + Stack[-1]);
0xb2f: @@ HasProperty(Stack[-1], Stack[-4])
0xb30: Pop(1)
0xb31: Pop(0); Push((bool) Stack[-3] == 0)
0xb32: IF (Stack[-1] == 0) GOTO 0xb34; Pop(1)

0xb33: GOTO 0xb37

0xb34: Push((int) 1)
0xb35: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xb36: GOTO 0xb2a

0xb37: Pop(0); Push((bool) Stack[-4] == 0)
0xb38: IF (Stack[-1] == 0) GOTO 0xb3b; Pop(1)

0xb39: Stack[-12] = (bool) 0
0xb3a: Return(); Pop(10)

0xb3b: Stack[-2] = (int) 0
0xb3c: Push((int) 1)
0xb3d: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xb3e: IF (Stack[-1] == 0) GOTO 0xb41; Pop(1)

0xb3f: @ irand(Stack[-2], Stack[-4])
0xb40: Pop(0)
0xb41: Push((int) 1)
0xb42: Pop(1); Push(Stack[-3] + Stack[-1]);
0xb43: Pop(1); Push(Stack[-6] + Stack[-1]);
0xb44: @@ GetProperty(Stack[-1], Stack[-2])
0xb45: Pop(1)
0xb46: PushEmpty(bool, string)
0xb47: Stack[-1] = Stack[-3]
0xb48: Call2 0xb96

0xb49: Stack[-14] = Stack[-2]
0xb4a: Pop(2)
0xb4b: Return(); Pop(10)

0xb4c: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xb4d: Push("d")
0xb4e: PushEmpty(int)
0xb4f: Call2 0xbc1

0xb50: Pop(0)
0xb51: Pop(2); Push(Stack[-2] + Stack[-1]);
0xb52: Push("m")
0xb53: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0xb54: Stack[-4] = (int) 0
0xb55: Push((int) 1)
0xb56: IF (Stack[-1] == 0) GOTO 0xb62; Pop(1)

0xb57: Push((int) 1)
0xb58: Pop(1); Push(Stack[-5] + Stack[-1]);
0xb59: Pop(1); Push(Stack[-6] + Stack[-1]);
0xb5a: @@ HasProperty(Stack[-1], Stack[-4])
0xb5b: Pop(1)
0xb5c: Pop(0); Push((bool) Stack[-3] == 0)
0xb5d: IF (Stack[-1] == 0) GOTO 0xb5f; Pop(1)

0xb5e: GOTO 0xb62

0xb5f: Push((int) 1)
0xb60: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xb61: GOTO 0xb55

0xb62: Pop(0); Push((bool) Stack[-4] == 0)
0xb63: IF (Stack[-1] == 0) GOTO 0xb66; Pop(1)

0xb64: Stack[-12] = (bool) 0
0xb65: Return(); Pop(10)

0xb66: Stack[-2] = (int) 0
0xb67: Push((int) 1)
0xb68: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xb69: IF (Stack[-1] == 0) GOTO 0xb6c; Pop(1)

0xb6a: @ irand(Stack[-2], Stack[-4])
0xb6b: Pop(0)
0xb6c: Push((int) 1)
0xb6d: Pop(1); Push(Stack[-3] + Stack[-1]);
0xb6e: Pop(1); Push(Stack[-6] + Stack[-1]);
0xb6f: @@ GetProperty(Stack[-1], Stack[-2])
0xb70: Pop(1)
0xb71: PushEmpty(bool, string)
0xb72: Stack[-1] = Stack[-3]
0xb73: Call2 0xb96

0xb74: Stack[-14] = Stack[-2]
0xb75: Pop(2)
0xb76: Return(); Pop(10)

0xb77: PushEmpty(bool, float, float, bool, float, float)
0xb78: @ lshHasAnimation(Stack[-3], Stack[-7])
0xb79: Pop(0)
0xb7a: Push(Stack[-3])
0xb7b: IF (Stack[-1] == 0) GOTO 0xb82; Pop(1)

0xb7c: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0xb7d: Pop(0)
0xb7e: Push((bool) 0)
0xb7f: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xb80: Pop(1)
0xb81: GOTO 0xb86

0xb82: Push("Can't find lsh animation : ")
0xb83: Pop(1); Push(Stack[-1] + Stack[-8]);
0xb84: @ Trace(Stack[-1])
0xb85: Pop(1)
0xb86: Return(); Pop(6)

0xb87: PushEmpty(bool, float, float, bool, float, float)
0xb88: @ lshHasAnimation(Stack[-3], Stack[-8])
0xb89: Pop(0)
0xb8a: Push(Stack[-3])
0xb8b: IF (Stack[-1] == 0) GOTO 0xb91; Pop(1)

0xb8c: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0xb8d: Pop(0)
0xb8e: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0xb8f: Pop(0)
0xb90: GOTO 0xb95

0xb91: Push("Can't find lsh animation : ")
0xb92: Pop(1); Push(Stack[-1] + Stack[-9]);
0xb93: @ Trace(Stack[-1])
0xb94: Pop(1)
0xb95: Return(); Pop(6)

0xb96: PushEmpty(bool, bool)
0xb97: PushEmpty(bool)
0xb98: Call2 0xcaf

0xb99: Pop(0)
0xb9a: IF (Stack[-1] == 0) GOTO 0xba3; Pop(1)

0xb9b: @ lshHasSpeech(Stack[-1], Stack[-3])
0xb9c: Pop(0)
0xb9d: Push(Stack[-1])
0xb9e: IF (Stack[-1] == 0) GOTO 0xba3; Pop(1)

0xb9f: @ lshPlaySpeech(Stack[-3])
0xba0: Pop(0)
0xba1: Stack[-4] = (bool) 1
0xba2: Return(); Pop(2)

0xba3: Stack[-4] = (bool) 0
0xba4: Return(); Pop(2)

0xba5: PushEmpty(bool)
0xba6: Call2 0xcaf

0xba7: Pop(0)
0xba8: IF (Stack[-1] == 0) GOTO 0xbab; Pop(1)

0xba9: @ lshStopSpeech()
0xbaa: Pop(0)
0xbab: Return(); Pop(0)

0xbac: PushEmpty(object, object)
0xbad: @ self(Stack[-1])
0xbae: Pop(0)
0xbaf: Stack[-3] = Stack[-1]
0xbb0: Return(); Pop(2)

0xbb1: Stack[-1] = 0
0xbb2: PushEmpty(float, float)
0xbb3: Pop(0); Push(Stack[-3] | Stack[-3]);
0xbb4: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xbb5: Push((float)0.0)
0xbb6: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xbb7: IF (Stack[-1] == 0) GOTO 0xbba; Pop(1)

0xbb8: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xbb9: Return(); Pop(2)

0xbba: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xbbb: Return(); Pop(2)

0xbbc: PushEmpty(int, int)
0xbbd: @ GetVariable(Stack[-3], Stack[-1])
0xbbe: Pop(0)
0xbbf: Stack[-4] = Stack[-1]
0xbc0: Return(); Pop(2)

0xbc1: PushEmpty(float, float)
0xbc2: @ GetGameTime(Stack[-1])
0xbc3: Pop(0)
0xbc4: Push((int) 1)
0xbc5: PushEmpty(int)
0xbc6: Push((int) 24)
0xbc7: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xbc8: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xbc9: Return(); Pop(2)

0xbca: PushEmpty()
0xbcb: PushEmpty(int)
0xbcc: Call2 0xbc1

0xbcd: Pop(0)
0xbce: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0xbcf: Return(); Pop(0)

0xbd0: PushEmpty(string, string)
0xbd1: Stack[-1] = "idle"
0xbd2: Push(Stack[-3])
0xbd3: IF (Stack[-1] == 0) GOTO 0xbd5; Pop(1)

0xbd4: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xbd5: Stack[-4] = Stack[-1]
0xbd6: Return(); Pop(2)

0xbd7: PushEmpty(int, bool, int, bool)
0xbd8: Stack[-2] = (int) 0
0xbd9: Push("all")
0xbda: PushEmpty(string, int)
0xbdb: Stack[-1] = Stack[-5]
0xbdc: Call2 0xbd0

0xbdd: Pop(1)
0xbde: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xbdf: Pop(2)
0xbe0: Pop(0); Push((bool) Stack[-1] == 0)
0xbe1: IF (Stack[-1] == 0) GOTO 0xbe3; Pop(1)

0xbe2: GOTO 0xbe6

0xbe3: Push((int) 1)
0xbe4: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xbe5: GOTO 0xbd9

0xbe6: Stack[-5] = Stack[-2]
0xbe7: Return(); Pop(4)

0xbe8: PushEmpty()
0xbe9: Push("ood3Notkin2")
0xbea: Push((int) 1)
0xbeb: @ SetVariable(Stack[-2], Stack[-1])
0xbec: Pop(2)
0xbed: Return(); Pop(0)

0xbee: PushEmpty()
0xbef: Push("ood3Notkin3")
0xbf0: Push((int) 1)
0xbf1: @ SetVariable(Stack[-2], Stack[-1])
0xbf2: Pop(2)
0xbf3: Return(); Pop(0)

0xbf4: PushEmpty()
0xbf5: Push("ood4Notkin2")
0xbf6: Push((int) 1)
0xbf7: @ SetVariable(Stack[-2], Stack[-1])
0xbf8: Pop(2)
0xbf9: Return(); Pop(0)

0xbfa: PushEmpty()
0xbfb: Push("ood4Notkin3")
0xbfc: Push((int) 1)
0xbfd: @ SetVariable(Stack[-2], Stack[-1])
0xbfe: Pop(2)
0xbff: Return(); Pop(0)

0xc00: PushEmpty()
0xc01: Push("ood7Notkin1")
0xc02: Push((int) 1)
0xc03: @ SetVariable(Stack[-2], Stack[-1])
0xc04: Pop(2)
0xc05: Return(); Pop(0)

0xc06: PushEmpty()
0xc07: Push("KnowTwoSouls")
0xc08: Push((int) 1)
0xc09: @ SetVariable(Stack[-2], Stack[-1])
0xc0a: Pop(2)
0xc0b: Return(); Pop(0)

0xc0c: PushEmpty()
0xc0d: Push("KnowNotkin")
0xc0e: Push((int) 1)
0xc0f: @ SetVariable(Stack[-2], Stack[-1])
0xc10: Pop(2)
0xc11: Return(); Pop(0)

0xc12: PushEmpty()
0xc13: Push("ood3Notkin1")
0xc14: Push((int) 1)
0xc15: @ SetVariable(Stack[-2], Stack[-1])
0xc16: Pop(2)
0xc17: Return(); Pop(0)

0xc18: PushEmpty()
0xc19: Push("ood4Notkin1")
0xc1a: Push((int) 1)
0xc1b: @ SetVariable(Stack[-2], Stack[-1])
0xc1c: Pop(2)
0xc1d: Return(); Pop(0)

0xc1e: PushEmpty()
0xc1f: PushEmpty(int, string)
0xc20: Stack[-1] = "ood3Notkin2"
0xc21: Call2 0xbbc

0xc22: Pop(1)
0xc23: Push((int) 0)
0xc24: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc25: IF (Stack[-1] == 0) GOTO 0xc28; Pop(1)

0xc26: Stack[-2] = (bool) 1
0xc27: Return(); Pop(0)

0xc28: Stack[-2] = (bool) 0
0xc29: Return(); Pop(0)

0xc2a: PushEmpty()
0xc2b: PushEmpty(int, string)
0xc2c: Stack[-1] = "ood3Notkin3"
0xc2d: Call2 0xbbc

0xc2e: Pop(1)
0xc2f: Push((int) 0)
0xc30: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc31: IF (Stack[-1] == 0) GOTO 0xc34; Pop(1)

0xc32: Stack[-2] = (bool) 1
0xc33: Return(); Pop(0)

0xc34: Stack[-2] = (bool) 0
0xc35: Return(); Pop(0)

0xc36: PushEmpty()
0xc37: PushEmpty(int, string)
0xc38: Stack[-1] = "ood4Notkin2"
0xc39: Call2 0xbbc

0xc3a: Pop(1)
0xc3b: Push((int) 0)
0xc3c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc3d: IF (Stack[-1] == 0) GOTO 0xc40; Pop(1)

0xc3e: Stack[-2] = (bool) 1
0xc3f: Return(); Pop(0)

0xc40: Stack[-2] = (bool) 0
0xc41: Return(); Pop(0)

0xc42: PushEmpty()
0xc43: PushEmpty(int, string)
0xc44: Stack[-1] = "ood4Notkin3"
0xc45: Call2 0xbbc

0xc46: Pop(1)
0xc47: Push((int) 0)
0xc48: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc49: IF (Stack[-1] == 0) GOTO 0xc4c; Pop(1)

0xc4a: Stack[-2] = (bool) 1
0xc4b: Return(); Pop(0)

0xc4c: Stack[-2] = (bool) 0
0xc4d: Return(); Pop(0)

0xc4e: PushEmpty()
0xc4f: PushEmpty(int, string)
0xc50: Stack[-1] = "ood7Notkin1"
0xc51: Call2 0xbbc

0xc52: Pop(1)
0xc53: Push((int) 0)
0xc54: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc55: IF (Stack[-1] == 0) GOTO 0xc58; Pop(1)

0xc56: Stack[-2] = (bool) 1
0xc57: Return(); Pop(0)

0xc58: Stack[-2] = (bool) 0
0xc59: Return(); Pop(0)

0xc5a: PushEmpty()
0xc5b: PushEmpty(int, string)
0xc5c: Stack[-1] = "d4q03"
0xc5d: Call2 0xbbc

0xc5e: Pop(1)
0xc5f: Push((int) 2)
0xc60: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc61: IF (Stack[-1] == 0) GOTO 0xc64; Pop(1)

0xc62: Stack[-2] = (bool) 1
0xc63: Return(); Pop(0)

0xc64: Stack[-2] = (bool) 0
0xc65: Return(); Pop(0)

0xc66: PushEmpty()
0xc67: PushEmpty(int, string)
0xc68: Stack[-1] = "d4q03_alldead"
0xc69: Call2 0xbbc

0xc6a: Pop(1)
0xc6b: Push((int) 1)
0xc6c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc6d: IF (Stack[-1] == 0) GOTO 0xc70; Pop(1)

0xc6e: Stack[-2] = (bool) 1
0xc6f: Return(); Pop(0)

0xc70: Stack[-2] = (bool) 0
0xc71: Return(); Pop(0)

0xc72: PushEmpty()
0xc73: PushEmpty(int, string)
0xc74: Stack[-1] = "ood3Notkin1"
0xc75: Call2 0xbbc

0xc76: Pop(1)
0xc77: Push((int) 0)
0xc78: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc79: IF (Stack[-1] == 0) GOTO 0xc7c; Pop(1)

0xc7a: Stack[-2] = (bool) 1
0xc7b: Return(); Pop(0)

0xc7c: Stack[-2] = (bool) 0
0xc7d: Return(); Pop(0)

0xc7e: PushEmpty()
0xc7f: PushEmpty(int, string)
0xc80: Stack[-1] = "d4q03"
0xc81: Call2 0xbbc

0xc82: Pop(1)
0xc83: Push((int) 3)
0xc84: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc85: IF (Stack[-1] == 0) GOTO 0xc88; Pop(1)

0xc86: Stack[-2] = (bool) 1
0xc87: Return(); Pop(0)

0xc88: Stack[-2] = (bool) 0
0xc89: Return(); Pop(0)

0xc8a: PushEmpty()
0xc8b: PushEmpty(int, string)
0xc8c: Stack[-1] = "ood4Notkin1"
0xc8d: Call2 0xbbc

0xc8e: Pop(1)
0xc8f: Push((int) 0)
0xc90: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc91: IF (Stack[-1] == 0) GOTO 0xc94; Pop(1)

0xc92: Stack[-2] = (bool) 1
0xc93: Return(); Pop(0)

0xc94: Stack[-2] = (bool) 0
0xc95: Return(); Pop(0)

0xc96: PushEmpty(int, int)
0xc97: Push("branch")
0xc98: @ GetVariable(Stack[-1], Stack[-2])
0xc99: Pop(1)
0xc9a: Push((int) 0)
0xc9b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc9c: IF (Stack[-1] == 0) GOTO 0xca0; Pop(1)

0xc9d: Stack[-3] = (int) 1
0xc9e: Return(); Pop(2)

0xc9f: GOTO 0xca5

0xca0: Push((int) 1)
0xca1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xca2: IF (Stack[-1] == 0) GOTO 0xca5; Pop(1)

0xca3: Stack[-3] = (int) 2
0xca4: Return(); Pop(2)

0xca5: Stack[-3] = (int) 3
0xca6: Return(); Pop(2)

0xca7: Stack[-1] = (int) 515548
0xca8: Return(); Pop(0)

0xca9: Stack[-1] = (int) 502873
0xcaa: Return(); Pop(0)

0xcab: Stack[-1] = "ui/NPC_Notkin.png"
0xcac: Return(); Pop(0)

0xcad: Stack[-1] = "ui/NPC_Notkin_b.png"
0xcae: Return(); Pop(0)

0xcaf: Stack[-1] = (bool) 1
0xcb0: Return(); Pop(0)

0xcb1: PushEmpty()
0xcb2: Push(GlobalVars[1])
0xcb3: Pop(1); Push((bool) Stack[-1] == 0)
0xcb4: IF (Stack[-1] == 0) GOTO 0xcbe; Pop(1)

0xcb5: PushEmpty(int, object)
0xcb6: Stack[-1] = Stack[-3]
0xcb7: Push(-2, 1); TaskCall(0)
0xcb8: Call2 0x0

0xcb9: Pop(-2, 1); TaskReturn
0xcba: Pop(2)
0xcbb: Push(GlobalVars[1])
0xcbc: Stack[-1] = (bool) 1
0xcbd: GlobalVars[1] = Stack[-1]; Pop(1)
0xcbe: PushEmpty(bool, int)
0xcbf: Stack[-1] = (int) 1
0xcc0: Call2 0xbca

0xcc1: Pop(1)
0xcc2: IF (Stack[-1] == 0) GOTO 0xcc4; Pop(1)

0xcc3: Return(); Pop(0)

0xcc4: PushEmpty(bool, int)
0xcc5: Stack[-1] = (int) 3
0xcc6: Call2 0xbca

0xcc7: Pop(1)
0xcc8: IF (Stack[-1] == 0) GOTO 0xcd0; Pop(1)

0xcc9: PushEmpty(int, object)
0xcca: Stack[-1] = Stack[-3]
0xccb: Push(-2, 1); TaskCall(4)
0xccc: Call2 0x272

0xccd: Pop(-2, 1); TaskReturn
0xcce: Pop(2)
0xccf: Return(); Pop(0)

0xcd0: PushEmpty(bool, int)
0xcd1: Stack[-1] = (int) 4
0xcd2: Call2 0xbca

0xcd3: Pop(1)
0xcd4: IF (Stack[-1] == 0) GOTO 0xcdc; Pop(1)

0xcd5: PushEmpty(int, object)
0xcd6: Stack[-1] = Stack[-3]
0xcd7: Push(-2, 1); TaskCall(6)
0xcd8: Call2 0x51b

0xcd9: Pop(-2, 1); TaskReturn
0xcda: Pop(2)
0xcdb: Return(); Pop(0)

0xcdc: PushEmpty(bool, int)
0xcdd: Stack[-1] = (int) 7
0xcde: Call2 0xbca

0xcdf: Pop(1)
0xce0: IF (Stack[-1] == 0) GOTO 0xce8; Pop(1)

0xce1: PushEmpty(int, object)
0xce2: Stack[-1] = Stack[-3]
0xce3: Push(-2, 1); TaskCall(2)
0xce4: Call2 0x13e

0xce5: Pop(-2, 1); TaskReturn
0xce6: Pop(2)
0xce7: Return(); Pop(0)

0xce8: PushEmpty(bool, int)
0xce9: Stack[-1] = (int) 12
0xcea: Call2 0xbca

0xceb: Pop(1)
0xcec: IF (Stack[-1] == 0) GOTO 0xcf4; Pop(1)

0xced: PushEmpty(int, object)
0xcee: Stack[-1] = Stack[-3]
0xcef: Push(-2, 1); TaskCall(8)
0xcf0: Call2 0x7a5

0xcf1: Pop(-2, 1); TaskReturn
0xcf2: Pop(2)
0xcf3: Return(); Pop(0)

0xcf4: PushEmpty(int, object)
0xcf5: Stack[-1] = Stack[-3]
0xcf6: Push(-2, 1); TaskCall(10)
0xcf7: Call2 0x8a8

0xcf8: Pop(-2, 1); TaskReturn
0xcf9: Pop(2)
0xcfa: Return(); Pop(0)

