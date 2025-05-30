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
	Think
	Smile
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
	CameraTransit (2 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
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

RunOp = 0x88d
RunTask = 12

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa6 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1a9 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x2dd Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x3f5 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x668 Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x863 Vars = (int, int)
	GTASK_12 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x8d9 Vars = (int)
		EVENT_6 Op = 0x8ff Vars = ()
		EVENT_5 Op = 0x90e Vars = ()
		EVENT_45 Op = 0x91b Vars = (bool)
		EVENT_0 Op = 0x927 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x9b0

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0xb67

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0xb65

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0xb69

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0xb6b

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0xb54

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
0x31: Call2 0xac4

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0xa05

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
0x48: Call2 0x9f4

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

0x57: PushEmpty(string)
0x58: Stack[-1] = "Neutral"
0x59: Call2 0x90

0x5a: Pop(1)
0x5b: Push((int) 535284)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: Push((int) 535285)
0x61: Push((int) 36962)
0x62: Push((int) 36961)
0x63: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64: Pop(3)
0x65: Push((int) 535292)
0x66: Push((int) -1)
0x67: Push((int) 36968)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: Push((int) 535293)
0x6b: Push((int) -1)
0x6c: Push((int) 36969)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: GOTO 0x72

0x70: Return(); Pop(0)

0x71: GOTO 0x55

0x72: PushEmpty(bool)
0x73: Call2 0xb6d

0x74: Pop(0)
0x75: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x76: @ lshWaitForAnimEnd()
0x77: Pop(0)
0x78: Push( Stack[3 + Tasks[-1].StackPointer] )
0x79: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x7a: GOTO 0x80

0x7b: PushEmpty(string)
0x7c: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7d: Call2 0xa8f

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
0x92: Call2 0xb6d

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
0xa2: Call2 0xa9f

0xa3: Pop(2)
0xa4: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa5: Return(); Pop(0)

0xa6: PushEmpty()
0xa7: Push((int) 1)
0xa8: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0xa9: PushEmpty()
0xaa: Call2 0xabd

0xab: Pop(0)
0xac: Push((int) 36960)
0xad: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xae: IF (Stack[-1] == 0) GOTO 0xc8; Pop(1)

0xaf: PushEmpty(string)
0xb0: Stack[-1] = "Neutral"
0xb1: Call2 0x90

0xb2: Pop(1)
0xb3: Push((int) 535284)
0xb4: @@ SetMessage(Stack[-1])
0xb5: Pop(1)
0xb6: @@ ClearReplies()
0xb7: Pop(0)
0xb8: Push((int) 535285)
0xb9: Push((int) 36962)
0xba: Push((int) 36961)
0xbb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc: Pop(3)
0xbd: Push((int) 535292)
0xbe: Push((int) -1)
0xbf: Push((int) 36968)
0xc0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc1: Pop(3)
0xc2: Push((int) 535293)
0xc3: Push((int) -1)
0xc4: Push((int) 36969)
0xc5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc6: Pop(3)
0xc7: Return(); Pop(0)

0xc8: Push((int) 36962)
0xc9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xca: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xcb: PushEmpty(string)
0xcc: Stack[-1] = "Neutral"
0xcd: Call2 0x90

0xce: Pop(1)
0xcf: Push((int) 535286)
0xd0: @@ SetMessage(Stack[-1])
0xd1: Pop(1)
0xd2: @@ ClearReplies()
0xd3: Pop(0)
0xd4: Push((int) 535287)
0xd5: Push((int) 36964)
0xd6: Push((int) 36963)
0xd7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd8: Pop(3)
0xd9: Push((int) 535291)
0xda: Push((int) -1)
0xdb: Push((int) 36967)
0xdc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdd: Pop(3)
0xde: Return(); Pop(0)

0xdf: Push((int) 36964)
0xe0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe1: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xe2: PushEmpty(string)
0xe3: Stack[-1] = "Neutral"
0xe4: Call2 0x90

0xe5: Pop(1)
0xe6: Push((int) 535288)
0xe7: @@ SetMessage(Stack[-1])
0xe8: Pop(1)
0xe9: @@ ClearReplies()
0xea: Pop(0)
0xeb: Push((int) 535289)
0xec: Push((int) -1)
0xed: Push((int) 36965)
0xee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xef: Pop(3)
0xf0: Push((int) 535290)
0xf1: Push((int) -1)
0xf2: Push((int) 36966)
0xf3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf4: Pop(3)
0xf5: Return(); Pop(0)

0xf6: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xf7: PushEmpty(bool)
0xf8: Call2 0xb6d

0xf9: Pop(0)
0xfa: IF (Stack[-1] == 0) GOTO 0xfe; Pop(1)

0xfb: @ lshStopAnimation()
0xfc: Pop(0)
0xfd: GOTO 0x100

0xfe: @ StopAnimation()
0xff: Pop(0)
0x100: Return(); Pop(0)

0x101: GOTO 0xa7

0x102: Return(); Pop(0)

0x103: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x104: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x105: PushEmpty(bool, object, float)
0x106: Stack[-2] = Stack[-12]
0x107: Stack[-1] = (float) 70.0
0x108: Call2 0x9b0

0x109: Pop(2)
0x10a: Pop(1); Push((bool) Stack[-1] == 0)
0x10b: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0x10c: Stack[-10] = (int) -2
0x10d: Return(); Pop(8)

0x10e: @ CreateDialog(Stack[-4])
0x10f: Pop(0)
0x110: PushEmpty(int)
0x111: Call2 0xb67

0x112: Pop(0)
0x113: @@ SetNPCName(Stack[-1])
0x114: Pop(1)
0x115: PushEmpty(int)
0x116: Call2 0xb65

0x117: Pop(0)
0x118: @@ SetNPCDescription(Stack[-1])
0x119: Pop(1)
0x11a: PushEmpty(string)
0x11b: Call2 0xb69

0x11c: Pop(0)
0x11d: @@ SetPhoto(Stack[-1])
0x11e: Pop(1)
0x11f: PushEmpty(string)
0x120: Call2 0xb6b

0x121: Pop(0)
0x122: @@ SetPhoto2(Stack[-1])
0x123: Pop(1)
0x124: PushEmpty(int)
0x125: Call2 0xb54

0x126: Pop(0)
0x127: @@ SetPlayerName(Stack[-1])
0x128: Pop(1)
0x129: Stack[-2] = (int) -1
0x12a: @ IsOverrideActive(Stack[-3])
0x12b: Pop(0)
0x12c: Push(Stack[-3])
0x12d: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x12e: Stack[-10] = (int) -2
0x12f: Return(); Pop(8)

0x130: @ DoDialog(Stack[-4])
0x131: Pop(0)
0x132: PushEmpty(bool, object)
0x133: PushEmpty(object)
0x134: Call2 0xac4

0x135: Stack[-2] = Stack[-1]
0x136: Pop(1)
0x137: Call2 0xa05

0x138: Pop(2)
0x139: PushEmpty(object, object)
0x13a: Stack[-2] = Stack[-11]
0x13b: Stack[-1] = Stack[-6]
0x13c: Push(-2, 4); TaskCall(3)
0x13d: Call2 0x154

0x13e: Pop(-2, 4); TaskReturn
0x13f: Pop(2)
0x140: @@ IsDialogEnd(Stack[-1])
0x141: Pop(0)
0x142: Pop(0); Push((bool) Stack[-1] == 0)
0x143: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x144: @ sync()
0x145: Pop(0)
0x146: @@ IsDialogEnd(Stack[-1])
0x147: Pop(0)
0x148: GOTO 0x142

0x149: PushEmpty(object)
0x14a: Stack[-1] = Stack[-10]
0x14b: Call2 0x9f4

0x14c: Pop(1)
0x14d: @ StopDialog(Stack[-4])
0x14e: Pop(0)
0x14f: @@ GetReturnValue(Stack[-2])
0x150: Pop(0)
0x151: Stack[-10] = Stack[-2]
0x152: Return(); Pop(8)

0x153: Stack[-4] = 0
0x154: PushEmpty()
0x155: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x156: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x157: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x158: Push((int) 1)
0x159: IF (Stack[-1] == 0) GOTO 0x175; Pop(1)

0x15a: PushEmpty(object, object)
0x15b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x15c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x15d: Call2 0xb06

0x15e: Pop(2)
0x15f: PushEmpty(string)
0x160: Stack[-1] = "Neutral"
0x161: Call2 0x193

0x162: Pop(1)
0x163: Push((int) 500205)
0x164: @@ SetMessage(Stack[-1])
0x165: Pop(1)
0x166: @@ ClearReplies()
0x167: Pop(0)
0x168: Push((int) 500207)
0x169: Push((int) 256)
0x16a: Push((int) 245)
0x16b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16c: Pop(3)
0x16d: Push((int) 500206)
0x16e: Push((int) 246)
0x16f: Push((int) 244)
0x170: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x171: Pop(3)
0x172: GOTO 0x175

0x173: Return(); Pop(0)

0x174: GOTO 0x158

0x175: PushEmpty(bool)
0x176: Call2 0xb6d

0x177: Pop(0)
0x178: IF (Stack[-1] == 0) GOTO 0x184; Pop(1)

0x179: @ lshWaitForAnimEnd()
0x17a: Pop(0)
0x17b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x17c: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x17d: GOTO 0x183

0x17e: PushEmpty(string)
0x17f: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x180: Call2 0xa8f

0x181: Pop(1)
0x182: GOTO 0x179

0x183: GOTO 0x192

0x184: Push("all")
0x185: Push("idle")
0x186: @ PlayAnimation(Stack[-2], Stack[-1])
0x187: Pop(2)
0x188: @ WaitForAnimEnd()
0x189: Pop(0)
0x18a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x18b: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0x18c: GOTO 0x192

0x18d: Push("all")
0x18e: Push("idle")
0x18f: @ PlayAnimation(Stack[-2], Stack[-1])
0x190: Pop(2)
0x191: GOTO 0x188

0x192: Return(); Pop(0)

0x193: PushEmpty()
0x194: PushEmpty(bool)
0x195: Call2 0xb6d

0x196: Pop(0)
0x197: Pop(1); Push((bool) Stack[-1] == 0)
0x198: IF (Stack[-1] == 0) GOTO 0x19a; Pop(1)

0x199: Return(); Pop(0)

0x19a: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x19b: IF (Stack[-1] == 0) GOTO 0x19d; Pop(1)

0x19c: Return(); Pop(0)

0x19d: PushEmpty(string, bool)
0x19e: Stack[-2] = Stack[-3]
0x19f: Push("")
0x1a0: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1a1: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x1a2: Stack[-1] = (bool) 0
0x1a3: GOTO 0x1a5

0x1a4: Stack[-1] = (bool) 1
0x1a5: Call2 0xa9f

0x1a6: Pop(2)
0x1a7: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1a8: Return(); Pop(0)

0x1a9: PushEmpty()
0x1aa: Push((int) 1)
0x1ab: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x1ac: PushEmpty()
0x1ad: Call2 0xabd

0x1ae: Pop(0)
0x1af: Push((int) 243)
0x1b0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b1: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1b2: PushEmpty(object, object)
0x1b3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1b4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1b5: Call2 0xb06

0x1b6: Pop(2)
0x1b7: PushEmpty(string)
0x1b8: Stack[-1] = "Neutral"
0x1b9: Call2 0x193

0x1ba: Pop(1)
0x1bb: Push((int) 500205)
0x1bc: @@ SetMessage(Stack[-1])
0x1bd: Pop(1)
0x1be: @@ ClearReplies()
0x1bf: Pop(0)
0x1c0: Push((int) 500207)
0x1c1: Push((int) 256)
0x1c2: Push((int) 245)
0x1c3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c4: Pop(3)
0x1c5: Push((int) 500206)
0x1c6: Push((int) 246)
0x1c7: Push((int) 244)
0x1c8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c9: Pop(3)
0x1ca: Return(); Pop(0)

0x1cb: Push((int) 246)
0x1cc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1cd: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0x1ce: PushEmpty(string)
0x1cf: Stack[-1] = "Neutral"
0x1d0: Call2 0x193

0x1d1: Pop(1)
0x1d2: Push((int) 500208)
0x1d3: @@ SetMessage(Stack[-1])
0x1d4: Pop(1)
0x1d5: @@ ClearReplies()
0x1d6: Pop(0)
0x1d7: Push((int) 500209)
0x1d8: Push((int) 249)
0x1d9: Push((int) 247)
0x1da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1db: Pop(3)
0x1dc: Push((int) 500210)
0x1dd: Push((int) 250)
0x1de: Push((int) 248)
0x1df: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e0: Pop(3)
0x1e1: Return(); Pop(0)

0x1e2: Push((int) 250)
0x1e3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e4: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1e5: PushEmpty(string)
0x1e6: Stack[-1] = "Neutral"
0x1e7: Call2 0x193

0x1e8: Pop(1)
0x1e9: Push((int) 500212)
0x1ea: @@ SetMessage(Stack[-1])
0x1eb: Pop(1)
0x1ec: @@ ClearReplies()
0x1ed: Pop(0)
0x1ee: Push((int) 500215)
0x1ef: Push((int) 249)
0x1f0: Push((int) 253)
0x1f1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f2: Pop(3)
0x1f3: Return(); Pop(0)

0x1f4: Push((int) 249)
0x1f5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f6: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x1f7: PushEmpty(object, object)
0x1f8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1f9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1fa: Call2 0xb00

0x1fb: Pop(2)
0x1fc: PushEmpty(string)
0x1fd: Stack[-1] = "Neutral"
0x1fe: Call2 0x193

0x1ff: Pop(1)
0x200: Push((int) 500211)
0x201: @@ SetMessage(Stack[-1])
0x202: Pop(1)
0x203: @@ ClearReplies()
0x204: Pop(0)
0x205: Push((int) 500213)
0x206: Push((int) 252)
0x207: Push((int) 251)
0x208: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x209: Pop(3)
0x20a: Return(); Pop(0)

0x20b: Push((int) 252)
0x20c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x20d: IF (Stack[-1] == 0) GOTO 0x21d; Pop(1)

0x20e: PushEmpty(string)
0x20f: Stack[-1] = "Neutral"
0x210: Call2 0x193

0x211: Pop(1)
0x212: Push((int) 500214)
0x213: @@ SetMessage(Stack[-1])
0x214: Pop(1)
0x215: @@ ClearReplies()
0x216: Pop(0)
0x217: Push((int) 500216)
0x218: Push((int) -1)
0x219: Push((int) 255)
0x21a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21b: Pop(3)
0x21c: Return(); Pop(0)

0x21d: Push((int) 256)
0x21e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x21f: IF (Stack[-1] == 0) GOTO 0x234; Pop(1)

0x220: PushEmpty(string)
0x221: Stack[-1] = "Neutral"
0x222: Call2 0x193

0x223: Pop(1)
0x224: Push((int) 500217)
0x225: @@ SetMessage(Stack[-1])
0x226: Pop(1)
0x227: @@ ClearReplies()
0x228: Pop(0)
0x229: Push((int) 500218)
0x22a: Push((int) -1)
0x22b: Push((int) 257)
0x22c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22d: Pop(3)
0x22e: Push((int) 500219)
0x22f: Push((int) -1)
0x230: Push((int) 258)
0x231: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x232: Pop(3)
0x233: Return(); Pop(0)

0x234: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x235: PushEmpty(bool)
0x236: Call2 0xb6d

0x237: Pop(0)
0x238: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x239: @ lshStopAnimation()
0x23a: Pop(0)
0x23b: GOTO 0x23e

0x23c: @ StopAnimation()
0x23d: Pop(0)
0x23e: Return(); Pop(0)

0x23f: GOTO 0x1aa

0x240: Return(); Pop(0)

0x241: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x242: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x243: PushEmpty(bool, object, float)
0x244: Stack[-2] = Stack[-12]
0x245: Stack[-1] = (float) 70.0
0x246: Call2 0x9b0

0x247: Pop(2)
0x248: Pop(1); Push((bool) Stack[-1] == 0)
0x249: IF (Stack[-1] == 0) GOTO 0x24c; Pop(1)

0x24a: Stack[-10] = (int) -2
0x24b: Return(); Pop(8)

0x24c: @ CreateDialog(Stack[-4])
0x24d: Pop(0)
0x24e: PushEmpty(int)
0x24f: Call2 0xb67

0x250: Pop(0)
0x251: @@ SetNPCName(Stack[-1])
0x252: Pop(1)
0x253: PushEmpty(int)
0x254: Call2 0xb65

0x255: Pop(0)
0x256: @@ SetNPCDescription(Stack[-1])
0x257: Pop(1)
0x258: PushEmpty(string)
0x259: Call2 0xb69

0x25a: Pop(0)
0x25b: @@ SetPhoto(Stack[-1])
0x25c: Pop(1)
0x25d: PushEmpty(string)
0x25e: Call2 0xb6b

0x25f: Pop(0)
0x260: @@ SetPhoto2(Stack[-1])
0x261: Pop(1)
0x262: PushEmpty(int)
0x263: Call2 0xb54

0x264: Pop(0)
0x265: @@ SetPlayerName(Stack[-1])
0x266: Pop(1)
0x267: Stack[-2] = (int) -1
0x268: @ IsOverrideActive(Stack[-3])
0x269: Pop(0)
0x26a: Push(Stack[-3])
0x26b: IF (Stack[-1] == 0) GOTO 0x26e; Pop(1)

0x26c: Stack[-10] = (int) -2
0x26d: Return(); Pop(8)

0x26e: @ DoDialog(Stack[-4])
0x26f: Pop(0)
0x270: PushEmpty(bool, object)
0x271: PushEmpty(object)
0x272: Call2 0xac4

0x273: Stack[-2] = Stack[-1]
0x274: Pop(1)
0x275: Call2 0xa05

0x276: Pop(2)
0x277: PushEmpty(object, object)
0x278: Stack[-2] = Stack[-11]
0x279: Stack[-1] = Stack[-6]
0x27a: Push(-2, 4); TaskCall(5)
0x27b: Call2 0x292

0x27c: Pop(-2, 4); TaskReturn
0x27d: Pop(2)
0x27e: @@ IsDialogEnd(Stack[-1])
0x27f: Pop(0)
0x280: Pop(0); Push((bool) Stack[-1] == 0)
0x281: IF (Stack[-1] == 0) GOTO 0x287; Pop(1)

0x282: @ sync()
0x283: Pop(0)
0x284: @@ IsDialogEnd(Stack[-1])
0x285: Pop(0)
0x286: GOTO 0x280

0x287: PushEmpty(object)
0x288: Stack[-1] = Stack[-10]
0x289: Call2 0x9f4

0x28a: Pop(1)
0x28b: @ StopDialog(Stack[-4])
0x28c: Pop(0)
0x28d: @@ GetReturnValue(Stack[-2])
0x28e: Pop(0)
0x28f: Stack[-10] = Stack[-2]
0x290: Return(); Pop(8)

0x291: Stack[-4] = 0
0x292: PushEmpty()
0x293: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x294: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x295: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x296: Push((int) 1)
0x297: IF (Stack[-1] == 0) GOTO 0x2a9; Pop(1)

0x298: PushEmpty(string)
0x299: Stack[-1] = "Pride"
0x29a: Call2 0x2c7

0x29b: Pop(1)
0x29c: Push((int) 507472)
0x29d: @@ SetMessage(Stack[-1])
0x29e: Pop(1)
0x29f: @@ ClearReplies()
0x2a0: Pop(0)
0x2a1: Push((int) 541869)
0x2a2: Push((int) -1)
0x2a3: Push((int) 44100)
0x2a4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a5: Pop(3)
0x2a6: GOTO 0x2a9

0x2a7: Return(); Pop(0)

0x2a8: GOTO 0x296

0x2a9: PushEmpty(bool)
0x2aa: Call2 0xb6d

0x2ab: Pop(0)
0x2ac: IF (Stack[-1] == 0) GOTO 0x2b8; Pop(1)

0x2ad: @ lshWaitForAnimEnd()
0x2ae: Pop(0)
0x2af: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2b0: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x2b1: GOTO 0x2b7

0x2b2: PushEmpty(string)
0x2b3: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x2b4: Call2 0xa8f

0x2b5: Pop(1)
0x2b6: GOTO 0x2ad

0x2b7: GOTO 0x2c6

0x2b8: Push("all")
0x2b9: Push("idle")
0x2ba: @ PlayAnimation(Stack[-2], Stack[-1])
0x2bb: Pop(2)
0x2bc: @ WaitForAnimEnd()
0x2bd: Pop(0)
0x2be: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2bf: IF (Stack[-1] == 0) GOTO 0x2c1; Pop(1)

0x2c0: GOTO 0x2c6

0x2c1: Push("all")
0x2c2: Push("idle")
0x2c3: @ PlayAnimation(Stack[-2], Stack[-1])
0x2c4: Pop(2)
0x2c5: GOTO 0x2bc

0x2c6: Return(); Pop(0)

0x2c7: PushEmpty()
0x2c8: PushEmpty(bool)
0x2c9: Call2 0xb6d

0x2ca: Pop(0)
0x2cb: Pop(1); Push((bool) Stack[-1] == 0)
0x2cc: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2cd: Return(); Pop(0)

0x2ce: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x2cf: IF (Stack[-1] == 0) GOTO 0x2d1; Pop(1)

0x2d0: Return(); Pop(0)

0x2d1: PushEmpty(string, bool)
0x2d2: Stack[-2] = Stack[-3]
0x2d3: Push("")
0x2d4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2d5: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2d6: Stack[-1] = (bool) 0
0x2d7: GOTO 0x2d9

0x2d8: Stack[-1] = (bool) 1
0x2d9: Call2 0xa9f

0x2da: Pop(2)
0x2db: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x2dc: Return(); Pop(0)

0x2dd: PushEmpty()
0x2de: Push((int) 1)
0x2df: IF (Stack[-1] == 0) GOTO 0x349; Pop(1)

0x2e0: PushEmpty()
0x2e1: Call2 0xabd

0x2e2: Pop(0)
0x2e3: Push((int) 8248)
0x2e4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2e5: IF (Stack[-1] == 0) GOTO 0x2f5; Pop(1)

0x2e6: PushEmpty(string)
0x2e7: Stack[-1] = "Pride"
0x2e8: Call2 0x2c7

0x2e9: Pop(1)
0x2ea: Push((int) 507472)
0x2eb: @@ SetMessage(Stack[-1])
0x2ec: Pop(1)
0x2ed: @@ ClearReplies()
0x2ee: Pop(0)
0x2ef: Push((int) 541869)
0x2f0: Push((int) -1)
0x2f1: Push((int) 44100)
0x2f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f3: Pop(3)
0x2f4: Return(); Pop(0)

0x2f5: Push((int) 10302)
0x2f6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2f7: IF (Stack[-1] == 0) GOTO 0x2f8; Pop(1)

0x2f8: Push((int) 10304)
0x2f9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2fa: IF (Stack[-1] == 0) GOTO 0x30f; Pop(1)

0x2fb: PushEmpty(string)
0x2fc: Stack[-1] = "Neutral"
0x2fd: Call2 0x2c7

0x2fe: Pop(1)
0x2ff: Push((int) 509379)
0x300: @@ SetMessage(Stack[-1])
0x301: Pop(1)
0x302: @@ ClearReplies()
0x303: Pop(0)
0x304: Push((int) 509380)
0x305: Push((int) 10306)
0x306: Push((int) 10305)
0x307: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x308: Pop(3)
0x309: Push((int) 509387)
0x30a: Push((int) 10306)
0x30b: Push((int) 10313)
0x30c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x30d: Pop(3)
0x30e: Return(); Pop(0)

0x30f: Push((int) 10306)
0x310: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x311: IF (Stack[-1] == 0) GOTO 0x326; Pop(1)

0x312: PushEmpty(string)
0x313: Stack[-1] = "Pride"
0x314: Call2 0x2c7

0x315: Pop(1)
0x316: Push((int) 509381)
0x317: @@ SetMessage(Stack[-1])
0x318: Pop(1)
0x319: @@ ClearReplies()
0x31a: Pop(0)
0x31b: Push((int) 509382)
0x31c: Push((int) 10308)
0x31d: Push((int) 10307)
0x31e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x31f: Pop(3)
0x320: Push((int) 509386)
0x321: Push((int) 10308)
0x322: Push((int) 10311)
0x323: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x324: Pop(3)
0x325: Return(); Pop(0)

0x326: Push((int) 10308)
0x327: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x328: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x329: PushEmpty(string)
0x32a: Stack[-1] = "Distrust"
0x32b: Call2 0x2c7

0x32c: Pop(1)
0x32d: Push((int) 509383)
0x32e: @@ SetMessage(Stack[-1])
0x32f: Pop(1)
0x330: @@ ClearReplies()
0x331: Pop(0)
0x332: Push((int) 509384)
0x333: Push((int) -1)
0x334: Push((int) 10309)
0x335: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x336: Pop(3)
0x337: Push((int) 509385)
0x338: Push((int) -1)
0x339: Push((int) 10310)
0x33a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x33b: Pop(3)
0x33c: Return(); Pop(0)

0x33d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x33e: PushEmpty(bool)
0x33f: Call2 0xb6d

0x340: Pop(0)
0x341: IF (Stack[-1] == 0) GOTO 0x345; Pop(1)

0x342: @ lshStopAnimation()
0x343: Pop(0)
0x344: GOTO 0x347

0x345: @ StopAnimation()
0x346: Pop(0)
0x347: Return(); Pop(0)

0x348: GOTO 0x2de

0x349: Return(); Pop(0)

0x34a: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x34b: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x34c: PushEmpty(bool, object, float)
0x34d: Stack[-2] = Stack[-12]
0x34e: Stack[-1] = (float) 70.0
0x34f: Call2 0x9b0

0x350: Pop(2)
0x351: Pop(1); Push((bool) Stack[-1] == 0)
0x352: IF (Stack[-1] == 0) GOTO 0x355; Pop(1)

0x353: Stack[-10] = (int) -2
0x354: Return(); Pop(8)

0x355: @ CreateDialog(Stack[-4])
0x356: Pop(0)
0x357: PushEmpty(int)
0x358: Call2 0xb67

0x359: Pop(0)
0x35a: @@ SetNPCName(Stack[-1])
0x35b: Pop(1)
0x35c: PushEmpty(int)
0x35d: Call2 0xb65

0x35e: Pop(0)
0x35f: @@ SetNPCDescription(Stack[-1])
0x360: Pop(1)
0x361: PushEmpty(string)
0x362: Call2 0xb69

0x363: Pop(0)
0x364: @@ SetPhoto(Stack[-1])
0x365: Pop(1)
0x366: PushEmpty(string)
0x367: Call2 0xb6b

0x368: Pop(0)
0x369: @@ SetPhoto2(Stack[-1])
0x36a: Pop(1)
0x36b: PushEmpty(int)
0x36c: Call2 0xb54

0x36d: Pop(0)
0x36e: @@ SetPlayerName(Stack[-1])
0x36f: Pop(1)
0x370: Stack[-2] = (int) -1
0x371: @ IsOverrideActive(Stack[-3])
0x372: Pop(0)
0x373: Push(Stack[-3])
0x374: IF (Stack[-1] == 0) GOTO 0x377; Pop(1)

0x375: Stack[-10] = (int) -2
0x376: Return(); Pop(8)

0x377: @ DoDialog(Stack[-4])
0x378: Pop(0)
0x379: PushEmpty(bool, object)
0x37a: PushEmpty(object)
0x37b: Call2 0xac4

0x37c: Stack[-2] = Stack[-1]
0x37d: Pop(1)
0x37e: Call2 0xa05

0x37f: Pop(2)
0x380: PushEmpty(object, object)
0x381: Stack[-2] = Stack[-11]
0x382: Stack[-1] = Stack[-6]
0x383: Push(-2, 4); TaskCall(7)
0x384: Call2 0x39b

0x385: Pop(-2, 4); TaskReturn
0x386: Pop(2)
0x387: @@ IsDialogEnd(Stack[-1])
0x388: Pop(0)
0x389: Pop(0); Push((bool) Stack[-1] == 0)
0x38a: IF (Stack[-1] == 0) GOTO 0x390; Pop(1)

0x38b: @ sync()
0x38c: Pop(0)
0x38d: @@ IsDialogEnd(Stack[-1])
0x38e: Pop(0)
0x38f: GOTO 0x389

0x390: PushEmpty(object)
0x391: Stack[-1] = Stack[-10]
0x392: Call2 0x9f4

0x393: Pop(1)
0x394: @ StopDialog(Stack[-4])
0x395: Pop(0)
0x396: @@ GetReturnValue(Stack[-2])
0x397: Pop(0)
0x398: Stack[-10] = Stack[-2]
0x399: Return(); Pop(8)

0x39a: Stack[-4] = 0
0x39b: PushEmpty()
0x39c: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x39d: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x39e: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x39f: Push((int) 1)
0x3a0: IF (Stack[-1] == 0) GOTO 0x3c1; Pop(1)

0x3a1: PushEmpty(string)
0x3a2: Stack[-1] = "Neutral"
0x3a3: Call2 0x3df

0x3a4: Pop(1)
0x3a5: Push((int) 509978)
0x3a6: @@ SetMessage(Stack[-1])
0x3a7: Pop(1)
0x3a8: @@ ClearReplies()
0x3a9: Pop(0)
0x3aa: PushEmpty(bool, object)
0x3ab: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3ac: Call2 0xb30

0x3ad: Pop(1)
0x3ae: IF (Stack[-1] == 0) GOTO 0x3b4; Pop(1)

0x3af: Push((int) 509979)
0x3b0: Push((int) 35759)
0x3b1: Push((int) 10997)
0x3b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b3: Pop(3)
0x3b4: Push((int) 509990)
0x3b5: Push((int) -1)
0x3b6: Push((int) 11009)
0x3b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b8: Pop(3)
0x3b9: Push((int) 509991)
0x3ba: Push((int) -1)
0x3bb: Push((int) 11011)
0x3bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3bd: Pop(3)
0x3be: GOTO 0x3c1

0x3bf: Return(); Pop(0)

0x3c0: GOTO 0x39f

0x3c1: PushEmpty(bool)
0x3c2: Call2 0xb6d

0x3c3: Pop(0)
0x3c4: IF (Stack[-1] == 0) GOTO 0x3d0; Pop(1)

0x3c5: @ lshWaitForAnimEnd()
0x3c6: Pop(0)
0x3c7: Push( Stack[3 + Tasks[-1].StackPointer] )
0x3c8: IF (Stack[-1] == 0) GOTO 0x3ca; Pop(1)

0x3c9: GOTO 0x3cf

0x3ca: PushEmpty(string)
0x3cb: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x3cc: Call2 0xa8f

0x3cd: Pop(1)
0x3ce: GOTO 0x3c5

0x3cf: GOTO 0x3de

0x3d0: Push("all")
0x3d1: Push("idle")
0x3d2: @ PlayAnimation(Stack[-2], Stack[-1])
0x3d3: Pop(2)
0x3d4: @ WaitForAnimEnd()
0x3d5: Pop(0)
0x3d6: Push( Stack[3 + Tasks[-1].StackPointer] )
0x3d7: IF (Stack[-1] == 0) GOTO 0x3d9; Pop(1)

0x3d8: GOTO 0x3de

0x3d9: Push("all")
0x3da: Push("idle")
0x3db: @ PlayAnimation(Stack[-2], Stack[-1])
0x3dc: Pop(2)
0x3dd: GOTO 0x3d4

0x3de: Return(); Pop(0)

0x3df: PushEmpty()
0x3e0: PushEmpty(bool)
0x3e1: Call2 0xb6d

0x3e2: Pop(0)
0x3e3: Pop(1); Push((bool) Stack[-1] == 0)
0x3e4: IF (Stack[-1] == 0) GOTO 0x3e6; Pop(1)

0x3e5: Return(); Pop(0)

0x3e6: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x3e7: IF (Stack[-1] == 0) GOTO 0x3e9; Pop(1)

0x3e8: Return(); Pop(0)

0x3e9: PushEmpty(string, bool)
0x3ea: Stack[-2] = Stack[-3]
0x3eb: Push("")
0x3ec: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x3ed: IF (Stack[-1] == 0) GOTO 0x3f0; Pop(1)

0x3ee: Stack[-1] = (bool) 0
0x3ef: GOTO 0x3f1

0x3f0: Stack[-1] = (bool) 1
0x3f1: Call2 0xa9f

0x3f2: Pop(2)
0x3f3: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x3f4: Return(); Pop(0)

0x3f5: PushEmpty()
0x3f6: Push((int) 1)
0x3f7: IF (Stack[-1] == 0) GOTO 0x592; Pop(1)

0x3f8: PushEmpty()
0x3f9: Call2 0xabd

0x3fa: Pop(0)
0x3fb: Push((int) 10997)
0x3fc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3fd: IF (Stack[-1] == 0) GOTO 0x403; Pop(1)

0x3fe: PushEmpty(object, object)
0x3ff: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x400: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x401: Call2 0xb0c

0x402: Pop(2)
0x403: Push((int) 10996)
0x404: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x405: IF (Stack[-1] == 0) GOTO 0x424; Pop(1)

0x406: PushEmpty(string)
0x407: Stack[-1] = "Neutral"
0x408: Call2 0x3df

0x409: Pop(1)
0x40a: Push((int) 509978)
0x40b: @@ SetMessage(Stack[-1])
0x40c: Pop(1)
0x40d: @@ ClearReplies()
0x40e: Pop(0)
0x40f: PushEmpty(bool, object)
0x410: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x411: Call2 0xb30

0x412: Pop(1)
0x413: IF (Stack[-1] == 0) GOTO 0x419; Pop(1)

0x414: Push((int) 509979)
0x415: Push((int) 35759)
0x416: Push((int) 10997)
0x417: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x418: Pop(3)
0x419: Push((int) 509990)
0x41a: Push((int) -1)
0x41b: Push((int) 11009)
0x41c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x41d: Pop(3)
0x41e: Push((int) 509991)
0x41f: Push((int) -1)
0x420: Push((int) 11011)
0x421: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x422: Pop(3)
0x423: Return(); Pop(0)

0x424: Push((int) 35786)
0x425: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x426: IF (Stack[-1] == 0) GOTO 0x427; Pop(1)

0x427: Push((int) 35788)
0x428: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x429: IF (Stack[-1] == 0) GOTO 0x43e; Pop(1)

0x42a: PushEmpty(string)
0x42b: Stack[-1] = "Distrust"
0x42c: Call2 0x3df

0x42d: Pop(1)
0x42e: Push((int) 534205)
0x42f: @@ SetMessage(Stack[-1])
0x430: Pop(1)
0x431: @@ ClearReplies()
0x432: Pop(0)
0x433: Push((int) 534206)
0x434: Push((int) 35790)
0x435: Push((int) 35789)
0x436: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x437: Pop(3)
0x438: Push((int) 534214)
0x439: Push((int) -1)
0x43a: Push((int) 35797)
0x43b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x43c: Pop(3)
0x43d: Return(); Pop(0)

0x43e: Push((int) 35790)
0x43f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x440: IF (Stack[-1] == 0) GOTO 0x455; Pop(1)

0x441: PushEmpty(string)
0x442: Stack[-1] = "Neutral"
0x443: Call2 0x3df

0x444: Pop(1)
0x445: Push((int) 534207)
0x446: @@ SetMessage(Stack[-1])
0x447: Pop(1)
0x448: @@ ClearReplies()
0x449: Pop(0)
0x44a: Push((int) 534208)
0x44b: Push((int) 35792)
0x44c: Push((int) 35791)
0x44d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x44e: Pop(3)
0x44f: Push((int) 534211)
0x450: Push((int) 35795)
0x451: Push((int) 35794)
0x452: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x453: Pop(3)
0x454: Return(); Pop(0)

0x455: Push((int) 35795)
0x456: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x457: IF (Stack[-1] == 0) GOTO 0x467; Pop(1)

0x458: PushEmpty(string)
0x459: Stack[-1] = "Distrust"
0x45a: Call2 0x3df

0x45b: Pop(1)
0x45c: Push((int) 534212)
0x45d: @@ SetMessage(Stack[-1])
0x45e: Pop(1)
0x45f: @@ ClearReplies()
0x460: Pop(0)
0x461: Push((int) 534213)
0x462: Push((int) -1)
0x463: Push((int) 35796)
0x464: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x465: Pop(3)
0x466: Return(); Pop(0)

0x467: Push((int) 35792)
0x468: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x469: IF (Stack[-1] == 0) GOTO 0x479; Pop(1)

0x46a: PushEmpty(string)
0x46b: Stack[-1] = "Neutral"
0x46c: Call2 0x3df

0x46d: Pop(1)
0x46e: Push((int) 534209)
0x46f: @@ SetMessage(Stack[-1])
0x470: Pop(1)
0x471: @@ ClearReplies()
0x472: Pop(0)
0x473: Push((int) 534210)
0x474: Push((int) -1)
0x475: Push((int) 35793)
0x476: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x477: Pop(3)
0x478: Return(); Pop(0)

0x479: Push((int) 35767)
0x47a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x47b: IF (Stack[-1] == 0) GOTO 0x47c; Pop(1)

0x47c: Push((int) 35782)
0x47d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x47e: IF (Stack[-1] == 0) GOTO 0x493; Pop(1)

0x47f: PushEmpty(string)
0x480: Stack[-1] = "Think"
0x481: Call2 0x3df

0x482: Pop(1)
0x483: Push((int) 534199)
0x484: @@ SetMessage(Stack[-1])
0x485: Pop(1)
0x486: @@ ClearReplies()
0x487: Pop(0)
0x488: Push((int) 534200)
0x489: Push((int) -1)
0x48a: Push((int) 35783)
0x48b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x48c: Pop(3)
0x48d: Push((int) 534201)
0x48e: Push((int) -1)
0x48f: Push((int) 35784)
0x490: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x491: Pop(3)
0x492: Return(); Pop(0)

0x493: Push((int) 35769)
0x494: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x495: IF (Stack[-1] == 0) GOTO 0x4aa; Pop(1)

0x496: PushEmpty(string)
0x497: Stack[-1] = "Smile"
0x498: Call2 0x3df

0x499: Pop(1)
0x49a: Push((int) 534186)
0x49b: @@ SetMessage(Stack[-1])
0x49c: Pop(1)
0x49d: @@ ClearReplies()
0x49e: Pop(0)
0x49f: Push((int) 534187)
0x4a0: Push((int) 35771)
0x4a1: Push((int) 35770)
0x4a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4a3: Pop(3)
0x4a4: Push((int) 534195)
0x4a5: Push((int) 35779)
0x4a6: Push((int) 35778)
0x4a7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4a8: Pop(3)
0x4a9: Return(); Pop(0)

0x4aa: Push((int) 35779)
0x4ab: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4ac: IF (Stack[-1] == 0) GOTO 0x4bc; Pop(1)

0x4ad: PushEmpty(string)
0x4ae: Stack[-1] = "Distrust"
0x4af: Call2 0x3df

0x4b0: Pop(1)
0x4b1: Push((int) 534196)
0x4b2: @@ SetMessage(Stack[-1])
0x4b3: Pop(1)
0x4b4: @@ ClearReplies()
0x4b5: Pop(0)
0x4b6: Push((int) 534197)
0x4b7: Push((int) -1)
0x4b8: Push((int) 35780)
0x4b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ba: Pop(3)
0x4bb: Return(); Pop(0)

0x4bc: Push((int) 35771)
0x4bd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4be: IF (Stack[-1] == 0) GOTO 0x4ce; Pop(1)

0x4bf: PushEmpty(string)
0x4c0: Stack[-1] = "Neutral"
0x4c1: Call2 0x3df

0x4c2: Pop(1)
0x4c3: Push((int) 534188)
0x4c4: @@ SetMessage(Stack[-1])
0x4c5: Pop(1)
0x4c6: @@ ClearReplies()
0x4c7: Pop(0)
0x4c8: Push((int) 534189)
0x4c9: Push((int) 35773)
0x4ca: Push((int) 35772)
0x4cb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4cc: Pop(3)
0x4cd: Return(); Pop(0)

0x4ce: Push((int) 35773)
0x4cf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4d0: IF (Stack[-1] == 0) GOTO 0x4e5; Pop(1)

0x4d1: PushEmpty(string)
0x4d2: Stack[-1] = "Neutral"
0x4d3: Call2 0x3df

0x4d4: Pop(1)
0x4d5: Push((int) 534190)
0x4d6: @@ SetMessage(Stack[-1])
0x4d7: Pop(1)
0x4d8: @@ ClearReplies()
0x4d9: Pop(0)
0x4da: Push((int) 534191)
0x4db: Push((int) -1)
0x4dc: Push((int) 35774)
0x4dd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4de: Pop(3)
0x4df: Push((int) 534192)
0x4e0: Push((int) 35776)
0x4e1: Push((int) 35775)
0x4e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4e3: Pop(3)
0x4e4: Return(); Pop(0)

0x4e5: Push((int) 35776)
0x4e6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4e7: IF (Stack[-1] == 0) GOTO 0x4f7; Pop(1)

0x4e8: PushEmpty(string)
0x4e9: Stack[-1] = "Neutral"
0x4ea: Call2 0x3df

0x4eb: Pop(1)
0x4ec: Push((int) 534193)
0x4ed: @@ SetMessage(Stack[-1])
0x4ee: Pop(1)
0x4ef: @@ ClearReplies()
0x4f0: Pop(0)
0x4f1: Push((int) 534194)
0x4f2: Push((int) -1)
0x4f3: Push((int) 35777)
0x4f4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4f5: Pop(3)
0x4f6: Return(); Pop(0)

0x4f7: Push((int) 35759)
0x4f8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4f9: IF (Stack[-1] == 0) GOTO 0x50e; Pop(1)

0x4fa: PushEmpty(string)
0x4fb: Stack[-1] = "Distrust"
0x4fc: Call2 0x3df

0x4fd: Pop(1)
0x4fe: Push((int) 534176)
0x4ff: @@ SetMessage(Stack[-1])
0x500: Pop(1)
0x501: @@ ClearReplies()
0x502: Pop(0)
0x503: Push((int) 534177)
0x504: Push((int) 10998)
0x505: Push((int) 35760)
0x506: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x507: Pop(3)
0x508: Push((int) 534178)
0x509: Push((int) 35800)
0x50a: Push((int) 35761)
0x50b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x50c: Pop(3)
0x50d: Return(); Pop(0)

0x50e: Push((int) 35800)
0x50f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x510: IF (Stack[-1] == 0) GOTO 0x525; Pop(1)

0x511: PushEmpty(string)
0x512: Stack[-1] = "Distrust"
0x513: Call2 0x3df

0x514: Pop(1)
0x515: Push((int) 534217)
0x516: @@ SetMessage(Stack[-1])
0x517: Pop(1)
0x518: @@ ClearReplies()
0x519: Pop(0)
0x51a: Push((int) 534218)
0x51b: Push((int) 35802)
0x51c: Push((int) 35801)
0x51d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x51e: Pop(3)
0x51f: Push((int) 534223)
0x520: Push((int) 35802)
0x521: Push((int) 35806)
0x522: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x523: Pop(3)
0x524: Return(); Pop(0)

0x525: Push((int) 35802)
0x526: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x527: IF (Stack[-1] == 0) GOTO 0x53c; Pop(1)

0x528: PushEmpty(string)
0x529: Stack[-1] = "Neutral"
0x52a: Call2 0x3df

0x52b: Pop(1)
0x52c: Push((int) 534219)
0x52d: @@ SetMessage(Stack[-1])
0x52e: Pop(1)
0x52f: @@ ClearReplies()
0x530: Pop(0)
0x531: Push((int) 534220)
0x532: Push((int) -1)
0x533: Push((int) 35803)
0x534: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x535: Pop(3)
0x536: Push((int) 534221)
0x537: Push((int) -1)
0x538: Push((int) 35804)
0x539: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x53a: Pop(3)
0x53b: Return(); Pop(0)

0x53c: Push((int) 10998)
0x53d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x53e: IF (Stack[-1] == 0) GOTO 0x558; Pop(1)

0x53f: PushEmpty(string)
0x540: Stack[-1] = "Think"
0x541: Call2 0x3df

0x542: Pop(1)
0x543: Push((int) 509980)
0x544: @@ SetMessage(Stack[-1])
0x545: Pop(1)
0x546: @@ ClearReplies()
0x547: Pop(0)
0x548: Push((int) 509981)
0x549: Push((int) 11000)
0x54a: Push((int) 10999)
0x54b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x54c: Pop(3)
0x54d: Push((int) 509988)
0x54e: Push((int) 11000)
0x54f: Push((int) 11006)
0x550: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x551: Pop(3)
0x552: Push((int) 509989)
0x553: Push((int) -1)
0x554: Push((int) 11008)
0x555: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x556: Pop(3)
0x557: Return(); Pop(0)

0x558: Push((int) 11000)
0x559: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x55a: IF (Stack[-1] == 0) GOTO 0x56f; Pop(1)

0x55b: PushEmpty(string)
0x55c: Stack[-1] = "Distrust"
0x55d: Call2 0x3df

0x55e: Pop(1)
0x55f: Push((int) 509982)
0x560: @@ SetMessage(Stack[-1])
0x561: Pop(1)
0x562: @@ ClearReplies()
0x563: Pop(0)
0x564: Push((int) 509983)
0x565: Push((int) -1)
0x566: Push((int) 11001)
0x567: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x568: Pop(3)
0x569: Push((int) 509984)
0x56a: Push((int) 11003)
0x56b: Push((int) 11002)
0x56c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x56d: Pop(3)
0x56e: Return(); Pop(0)

0x56f: Push((int) 11003)
0x570: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x571: IF (Stack[-1] == 0) GOTO 0x586; Pop(1)

0x572: PushEmpty(string)
0x573: Stack[-1] = "Think"
0x574: Call2 0x3df

0x575: Pop(1)
0x576: Push((int) 509985)
0x577: @@ SetMessage(Stack[-1])
0x578: Pop(1)
0x579: @@ ClearReplies()
0x57a: Pop(0)
0x57b: Push((int) 509986)
0x57c: Push((int) -1)
0x57d: Push((int) 11004)
0x57e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x57f: Pop(3)
0x580: Push((int) 509987)
0x581: Push((int) -1)
0x582: Push((int) 11005)
0x583: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x584: Pop(3)
0x585: Return(); Pop(0)

0x586: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x587: PushEmpty(bool)
0x588: Call2 0xb6d

0x589: Pop(0)
0x58a: IF (Stack[-1] == 0) GOTO 0x58e; Pop(1)

0x58b: @ lshStopAnimation()
0x58c: Pop(0)
0x58d: GOTO 0x590

0x58e: @ StopAnimation()
0x58f: Pop(0)
0x590: Return(); Pop(0)

0x591: GOTO 0x3f6

0x592: Return(); Pop(0)

0x593: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x594: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x595: PushEmpty(bool, object, float)
0x596: Stack[-2] = Stack[-12]
0x597: Stack[-1] = (float) 70.0
0x598: Call2 0x9b0

0x599: Pop(2)
0x59a: Pop(1); Push((bool) Stack[-1] == 0)
0x59b: IF (Stack[-1] == 0) GOTO 0x59e; Pop(1)

0x59c: Stack[-10] = (int) -2
0x59d: Return(); Pop(8)

0x59e: @ CreateDialog(Stack[-4])
0x59f: Pop(0)
0x5a0: PushEmpty(int)
0x5a1: Call2 0xb67

0x5a2: Pop(0)
0x5a3: @@ SetNPCName(Stack[-1])
0x5a4: Pop(1)
0x5a5: PushEmpty(int)
0x5a6: Call2 0xb65

0x5a7: Pop(0)
0x5a8: @@ SetNPCDescription(Stack[-1])
0x5a9: Pop(1)
0x5aa: PushEmpty(string)
0x5ab: Call2 0xb69

0x5ac: Pop(0)
0x5ad: @@ SetPhoto(Stack[-1])
0x5ae: Pop(1)
0x5af: PushEmpty(string)
0x5b0: Call2 0xb6b

0x5b1: Pop(0)
0x5b2: @@ SetPhoto2(Stack[-1])
0x5b3: Pop(1)
0x5b4: PushEmpty(int)
0x5b5: Call2 0xb54

0x5b6: Pop(0)
0x5b7: @@ SetPlayerName(Stack[-1])
0x5b8: Pop(1)
0x5b9: Stack[-2] = (int) -1
0x5ba: @ IsOverrideActive(Stack[-3])
0x5bb: Pop(0)
0x5bc: Push(Stack[-3])
0x5bd: IF (Stack[-1] == 0) GOTO 0x5c0; Pop(1)

0x5be: Stack[-10] = (int) -2
0x5bf: Return(); Pop(8)

0x5c0: @ DoDialog(Stack[-4])
0x5c1: Pop(0)
0x5c2: PushEmpty(bool, object)
0x5c3: PushEmpty(object)
0x5c4: Call2 0xac4

0x5c5: Stack[-2] = Stack[-1]
0x5c6: Pop(1)
0x5c7: Call2 0xa05

0x5c8: Pop(2)
0x5c9: PushEmpty(object, object)
0x5ca: Stack[-2] = Stack[-11]
0x5cb: Stack[-1] = Stack[-6]
0x5cc: Push(-2, 4); TaskCall(9)
0x5cd: Call2 0x5e4

0x5ce: Pop(-2, 4); TaskReturn
0x5cf: Pop(2)
0x5d0: @@ IsDialogEnd(Stack[-1])
0x5d1: Pop(0)
0x5d2: Pop(0); Push((bool) Stack[-1] == 0)
0x5d3: IF (Stack[-1] == 0) GOTO 0x5d9; Pop(1)

0x5d4: @ sync()
0x5d5: Pop(0)
0x5d6: @@ IsDialogEnd(Stack[-1])
0x5d7: Pop(0)
0x5d8: GOTO 0x5d2

0x5d9: PushEmpty(object)
0x5da: Stack[-1] = Stack[-10]
0x5db: Call2 0x9f4

0x5dc: Pop(1)
0x5dd: @ StopDialog(Stack[-4])
0x5de: Pop(0)
0x5df: @@ GetReturnValue(Stack[-2])
0x5e0: Pop(0)
0x5e1: Stack[-10] = Stack[-2]
0x5e2: Return(); Pop(8)

0x5e3: Stack[-4] = 0
0x5e4: PushEmpty()
0x5e5: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x5e6: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x5e7: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x5e8: Push((int) 1)
0x5e9: IF (Stack[-1] == 0) GOTO 0x634; Pop(1)

0x5ea: PushEmpty(string)
0x5eb: Stack[-1] = "Neutral"
0x5ec: Call2 0x652

0x5ed: Pop(1)
0x5ee: Push((int) 511211)
0x5ef: @@ SetMessage(Stack[-1])
0x5f0: Pop(1)
0x5f1: @@ ClearReplies()
0x5f2: Pop(0)
0x5f3: PushEmpty(bool)
0x5f4: Stack[-1] = (bool) 1
0x5f5: PushEmpty(bool)
0x5f6: Stack[-1] = (bool) 0
0x5f7: PushEmpty(bool)
0x5f8: Stack[-1] = (bool) 0
0x5f9: PushEmpty(bool, object)
0x5fa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5fb: Call2 0xb18

0x5fc: Pop(1)
0x5fd: IF (Stack[-1] == 0) GOTO 0x604; Pop(1)

0x5fe: PushEmpty(bool, object)
0x5ff: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x600: Call2 0xb48

0x601: Pop(1)
0x602: IF (Stack[-1] == 0) GOTO 0x604; Pop(1)

0x603: Stack[-1] = (bool) 1
0x604: IF (Stack[-1] == 0) GOTO 0x60c; Pop(1)

0x605: PushEmpty(bool, object)
0x606: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x607: Call2 0xb24

0x608: Pop(1)
0x609: Pop(1); Push((bool) Stack[-1] == 0)
0x60a: IF (Stack[-1] == 0) GOTO 0x60c; Pop(1)

0x60b: Stack[-1] = (bool) 1
0x60c: IF (Stack[-1] == 0) GOTO 0x626; Pop(1)

0x60d: PushEmpty(bool)
0x60e: Stack[-1] = (bool) 0
0x60f: PushEmpty(bool)
0x610: Stack[-1] = (bool) 0
0x611: PushEmpty(bool, object)
0x612: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x613: Call2 0xb3c

0x614: Pop(1)
0x615: IF (Stack[-1] == 0) GOTO 0x61c; Pop(1)

0x616: PushEmpty(bool, object)
0x617: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x618: Call2 0xb48

0x619: Pop(1)
0x61a: IF (Stack[-1] == 0) GOTO 0x61c; Pop(1)

0x61b: Stack[-1] = (bool) 1
0x61c: IF (Stack[-1] == 0) GOTO 0x624; Pop(1)

0x61d: PushEmpty(bool, object)
0x61e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x61f: Call2 0xb24

0x620: Pop(1)
0x621: Pop(1); Push((bool) Stack[-1] == 0)
0x622: IF (Stack[-1] == 0) GOTO 0x624; Pop(1)

0x623: Stack[-1] = (bool) 1
0x624: IF (Stack[-1] == 0) GOTO 0x626; Pop(1)

0x625: Stack[-1] = (bool) 0
0x626: IF (Stack[-1] == 0) GOTO 0x62c; Pop(1)

0x627: Push((int) 511212)
0x628: Push((int) 12401)
0x629: Push((int) 12400)
0x62a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62b: Pop(3)
0x62c: Push((int) 515335)
0x62d: Push((int) -1)
0x62e: Push((int) 16558)
0x62f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x630: Pop(3)
0x631: GOTO 0x634

0x632: Return(); Pop(0)

0x633: GOTO 0x5e8

0x634: PushEmpty(bool)
0x635: Call2 0xb6d

0x636: Pop(0)
0x637: IF (Stack[-1] == 0) GOTO 0x643; Pop(1)

0x638: @ lshWaitForAnimEnd()
0x639: Pop(0)
0x63a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x63b: IF (Stack[-1] == 0) GOTO 0x63d; Pop(1)

0x63c: GOTO 0x642

0x63d: PushEmpty(string)
0x63e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x63f: Call2 0xa8f

0x640: Pop(1)
0x641: GOTO 0x638

0x642: GOTO 0x651

0x643: Push("all")
0x644: Push("idle")
0x645: @ PlayAnimation(Stack[-2], Stack[-1])
0x646: Pop(2)
0x647: @ WaitForAnimEnd()
0x648: Pop(0)
0x649: Push( Stack[3 + Tasks[-1].StackPointer] )
0x64a: IF (Stack[-1] == 0) GOTO 0x64c; Pop(1)

0x64b: GOTO 0x651

0x64c: Push("all")
0x64d: Push("idle")
0x64e: @ PlayAnimation(Stack[-2], Stack[-1])
0x64f: Pop(2)
0x650: GOTO 0x647

0x651: Return(); Pop(0)

0x652: PushEmpty()
0x653: PushEmpty(bool)
0x654: Call2 0xb6d

0x655: Pop(0)
0x656: Pop(1); Push((bool) Stack[-1] == 0)
0x657: IF (Stack[-1] == 0) GOTO 0x659; Pop(1)

0x658: Return(); Pop(0)

0x659: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x65a: IF (Stack[-1] == 0) GOTO 0x65c; Pop(1)

0x65b: Return(); Pop(0)

0x65c: PushEmpty(string, bool)
0x65d: Stack[-2] = Stack[-3]
0x65e: Push("")
0x65f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x660: IF (Stack[-1] == 0) GOTO 0x663; Pop(1)

0x661: Stack[-1] = (bool) 0
0x662: GOTO 0x664

0x663: Stack[-1] = (bool) 1
0x664: Call2 0xa9f

0x665: Pop(2)
0x666: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x667: Return(); Pop(0)

0x668: PushEmpty()
0x669: Push((int) 1)
0x66a: IF (Stack[-1] == 0) GOTO 0x7c1; Pop(1)

0x66b: PushEmpty()
0x66c: Call2 0xabd

0x66d: Pop(0)
0x66e: Push((int) 12400)
0x66f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x670: IF (Stack[-1] == 0) GOTO 0x676; Pop(1)

0x671: PushEmpty(object, object)
0x672: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x673: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x674: Call2 0xb12

0x675: Pop(2)
0x676: Push((int) 12399)
0x677: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x678: IF (Stack[-1] == 0) GOTO 0x6c1; Pop(1)

0x679: PushEmpty(string)
0x67a: Stack[-1] = "Neutral"
0x67b: Call2 0x652

0x67c: Pop(1)
0x67d: Push((int) 511211)
0x67e: @@ SetMessage(Stack[-1])
0x67f: Pop(1)
0x680: @@ ClearReplies()
0x681: Pop(0)
0x682: PushEmpty(bool)
0x683: Stack[-1] = (bool) 1
0x684: PushEmpty(bool)
0x685: Stack[-1] = (bool) 0
0x686: PushEmpty(bool)
0x687: Stack[-1] = (bool) 0
0x688: PushEmpty(bool, object)
0x689: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x68a: Call2 0xb18

0x68b: Pop(1)
0x68c: IF (Stack[-1] == 0) GOTO 0x693; Pop(1)

0x68d: PushEmpty(bool, object)
0x68e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x68f: Call2 0xb48

0x690: Pop(1)
0x691: IF (Stack[-1] == 0) GOTO 0x693; Pop(1)

0x692: Stack[-1] = (bool) 1
0x693: IF (Stack[-1] == 0) GOTO 0x69b; Pop(1)

0x694: PushEmpty(bool, object)
0x695: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x696: Call2 0xb24

0x697: Pop(1)
0x698: Pop(1); Push((bool) Stack[-1] == 0)
0x699: IF (Stack[-1] == 0) GOTO 0x69b; Pop(1)

0x69a: Stack[-1] = (bool) 1
0x69b: IF (Stack[-1] == 0) GOTO 0x6b5; Pop(1)

0x69c: PushEmpty(bool)
0x69d: Stack[-1] = (bool) 0
0x69e: PushEmpty(bool)
0x69f: Stack[-1] = (bool) 0
0x6a0: PushEmpty(bool, object)
0x6a1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6a2: Call2 0xb3c

0x6a3: Pop(1)
0x6a4: IF (Stack[-1] == 0) GOTO 0x6ab; Pop(1)

0x6a5: PushEmpty(bool, object)
0x6a6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6a7: Call2 0xb48

0x6a8: Pop(1)
0x6a9: IF (Stack[-1] == 0) GOTO 0x6ab; Pop(1)

0x6aa: Stack[-1] = (bool) 1
0x6ab: IF (Stack[-1] == 0) GOTO 0x6b3; Pop(1)

0x6ac: PushEmpty(bool, object)
0x6ad: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6ae: Call2 0xb24

0x6af: Pop(1)
0x6b0: Pop(1); Push((bool) Stack[-1] == 0)
0x6b1: IF (Stack[-1] == 0) GOTO 0x6b3; Pop(1)

0x6b2: Stack[-1] = (bool) 1
0x6b3: IF (Stack[-1] == 0) GOTO 0x6b5; Pop(1)

0x6b4: Stack[-1] = (bool) 0
0x6b5: IF (Stack[-1] == 0) GOTO 0x6bb; Pop(1)

0x6b6: Push((int) 511212)
0x6b7: Push((int) 12401)
0x6b8: Push((int) 12400)
0x6b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ba: Pop(3)
0x6bb: Push((int) 515335)
0x6bc: Push((int) -1)
0x6bd: Push((int) 16558)
0x6be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6bf: Pop(3)
0x6c0: Return(); Pop(0)

0x6c1: Push((int) 35840)
0x6c2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6c3: IF (Stack[-1] == 0) GOTO 0x6c4; Pop(1)

0x6c4: Push((int) 35842)
0x6c5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6c6: IF (Stack[-1] == 0) GOTO 0x6db; Pop(1)

0x6c7: PushEmpty(string)
0x6c8: Stack[-1] = "Triumph"
0x6c9: Call2 0x652

0x6ca: Pop(1)
0x6cb: Push((int) 534255)
0x6cc: @@ SetMessage(Stack[-1])
0x6cd: Pop(1)
0x6ce: @@ ClearReplies()
0x6cf: Pop(0)
0x6d0: Push((int) 534256)
0x6d1: Push((int) 35844)
0x6d2: Push((int) 35843)
0x6d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6d4: Pop(3)
0x6d5: Push((int) 534263)
0x6d6: Push((int) 35851)
0x6d7: Push((int) 35850)
0x6d8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6d9: Pop(3)
0x6da: Return(); Pop(0)

0x6db: Push((int) 35851)
0x6dc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6dd: IF (Stack[-1] == 0) GOTO 0x6ed; Pop(1)

0x6de: PushEmpty(string)
0x6df: Stack[-1] = "Neutral"
0x6e0: Call2 0x652

0x6e1: Pop(1)
0x6e2: Push((int) 534264)
0x6e3: @@ SetMessage(Stack[-1])
0x6e4: Pop(1)
0x6e5: @@ ClearReplies()
0x6e6: Pop(0)
0x6e7: Push((int) 534265)
0x6e8: Push((int) -1)
0x6e9: Push((int) 35852)
0x6ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6eb: Pop(3)
0x6ec: Return(); Pop(0)

0x6ed: Push((int) 35844)
0x6ee: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6ef: IF (Stack[-1] == 0) GOTO 0x704; Pop(1)

0x6f0: PushEmpty(string)
0x6f1: Stack[-1] = "Distrust"
0x6f2: Call2 0x652

0x6f3: Pop(1)
0x6f4: Push((int) 534257)
0x6f5: @@ SetMessage(Stack[-1])
0x6f6: Pop(1)
0x6f7: @@ ClearReplies()
0x6f8: Pop(0)
0x6f9: Push((int) 534258)
0x6fa: Push((int) 35846)
0x6fb: Push((int) 35845)
0x6fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6fd: Pop(3)
0x6fe: Push((int) 534262)
0x6ff: Push((int) -1)
0x700: Push((int) 35849)
0x701: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x702: Pop(3)
0x703: Return(); Pop(0)

0x704: Push((int) 35846)
0x705: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x706: IF (Stack[-1] == 0) GOTO 0x71b; Pop(1)

0x707: PushEmpty(string)
0x708: Stack[-1] = "Neutral"
0x709: Call2 0x652

0x70a: Pop(1)
0x70b: Push((int) 534259)
0x70c: @@ SetMessage(Stack[-1])
0x70d: Pop(1)
0x70e: @@ ClearReplies()
0x70f: Pop(0)
0x710: Push((int) 534260)
0x711: Push((int) -1)
0x712: Push((int) 35847)
0x713: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x714: Pop(3)
0x715: Push((int) 534261)
0x716: Push((int) -1)
0x717: Push((int) 35848)
0x718: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x719: Pop(3)
0x71a: Return(); Pop(0)

0x71b: Push((int) 35809)
0x71c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x71d: IF (Stack[-1] == 0) GOTO 0x71e; Pop(1)

0x71e: Push((int) 35811)
0x71f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x720: IF (Stack[-1] == 0) GOTO 0x735; Pop(1)

0x721: PushEmpty(string)
0x722: Stack[-1] = "Think"
0x723: Call2 0x652

0x724: Pop(1)
0x725: Push((int) 534227)
0x726: @@ SetMessage(Stack[-1])
0x727: Pop(1)
0x728: @@ ClearReplies()
0x729: Pop(0)
0x72a: Push((int) 534228)
0x72b: Push((int) 35813)
0x72c: Push((int) 35812)
0x72d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x72e: Pop(3)
0x72f: Push((int) 534234)
0x730: Push((int) 35813)
0x731: Push((int) 35818)
0x732: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x733: Pop(3)
0x734: Return(); Pop(0)

0x735: Push((int) 35813)
0x736: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x737: IF (Stack[-1] == 0) GOTO 0x74c; Pop(1)

0x738: PushEmpty(string)
0x739: Stack[-1] = "Neutral"
0x73a: Call2 0x652

0x73b: Pop(1)
0x73c: Push((int) 534229)
0x73d: @@ SetMessage(Stack[-1])
0x73e: Pop(1)
0x73f: @@ ClearReplies()
0x740: Pop(0)
0x741: Push((int) 534230)
0x742: Push((int) -1)
0x743: Push((int) 35814)
0x744: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x745: Pop(3)
0x746: Push((int) 534233)
0x747: Push((int) -1)
0x748: Push((int) 35817)
0x749: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x74a: Pop(3)
0x74b: Return(); Pop(0)

0x74c: Push((int) 12401)
0x74d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x74e: IF (Stack[-1] == 0) GOTO 0x763; Pop(1)

0x74f: PushEmpty(string)
0x750: Stack[-1] = "Pride"
0x751: Call2 0x652

0x752: Pop(1)
0x753: Push((int) 511213)
0x754: @@ SetMessage(Stack[-1])
0x755: Pop(1)
0x756: @@ ClearReplies()
0x757: Pop(0)
0x758: Push((int) 511214)
0x759: Push((int) 12403)
0x75a: Push((int) 12402)
0x75b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x75c: Pop(3)
0x75d: Push((int) 511223)
0x75e: Push((int) 12413)
0x75f: Push((int) 12412)
0x760: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x761: Pop(3)
0x762: Return(); Pop(0)

0x763: Push((int) 12413)
0x764: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x765: IF (Stack[-1] == 0) GOTO 0x775; Pop(1)

0x766: PushEmpty(string)
0x767: Stack[-1] = "Neutral"
0x768: Call2 0x652

0x769: Pop(1)
0x76a: Push((int) 511224)
0x76b: @@ SetMessage(Stack[-1])
0x76c: Pop(1)
0x76d: @@ ClearReplies()
0x76e: Pop(0)
0x76f: Push((int) 511225)
0x770: Push((int) 12405)
0x771: Push((int) 12414)
0x772: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x773: Pop(3)
0x774: Return(); Pop(0)

0x775: Push((int) 12403)
0x776: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x777: IF (Stack[-1] == 0) GOTO 0x78c; Pop(1)

0x778: PushEmpty(string)
0x779: Stack[-1] = "Pride"
0x77a: Call2 0x652

0x77b: Pop(1)
0x77c: Push((int) 511215)
0x77d: @@ SetMessage(Stack[-1])
0x77e: Pop(1)
0x77f: @@ ClearReplies()
0x780: Pop(0)
0x781: Push((int) 511220)
0x782: Push((int) 12409)
0x783: Push((int) 12408)
0x784: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x785: Pop(3)
0x786: Push((int) 511216)
0x787: Push((int) 12405)
0x788: Push((int) 12404)
0x789: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x78a: Pop(3)
0x78b: Return(); Pop(0)

0x78c: Push((int) 12405)
0x78d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x78e: IF (Stack[-1] == 0) GOTO 0x7a3; Pop(1)

0x78f: PushEmpty(string)
0x790: Stack[-1] = "Pride"
0x791: Call2 0x652

0x792: Pop(1)
0x793: Push((int) 511217)
0x794: @@ SetMessage(Stack[-1])
0x795: Pop(1)
0x796: @@ ClearReplies()
0x797: Pop(0)
0x798: Push((int) 511218)
0x799: Push((int) -1)
0x79a: Push((int) 12406)
0x79b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x79c: Pop(3)
0x79d: Push((int) 511219)
0x79e: Push((int) -1)
0x79f: Push((int) 12407)
0x7a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7a1: Pop(3)
0x7a2: Return(); Pop(0)

0x7a3: Push((int) 12409)
0x7a4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7a5: IF (Stack[-1] == 0) GOTO 0x7b5; Pop(1)

0x7a6: PushEmpty(string)
0x7a7: Stack[-1] = "Think"
0x7a8: Call2 0x652

0x7a9: Pop(1)
0x7aa: Push((int) 511221)
0x7ab: @@ SetMessage(Stack[-1])
0x7ac: Pop(1)
0x7ad: @@ ClearReplies()
0x7ae: Pop(0)
0x7af: Push((int) 511222)
0x7b0: Push((int) 12405)
0x7b1: Push((int) 12410)
0x7b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b3: Pop(3)
0x7b4: Return(); Pop(0)

0x7b5: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x7b6: PushEmpty(bool)
0x7b7: Call2 0xb6d

0x7b8: Pop(0)
0x7b9: IF (Stack[-1] == 0) GOTO 0x7bd; Pop(1)

0x7ba: @ lshStopAnimation()
0x7bb: Pop(0)
0x7bc: GOTO 0x7bf

0x7bd: @ StopAnimation()
0x7be: Pop(0)
0x7bf: Return(); Pop(0)

0x7c0: GOTO 0x669

0x7c1: Return(); Pop(0)

0x7c2: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x7c3: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x7c4: PushEmpty(bool, object, float)
0x7c5: Stack[-2] = Stack[-12]
0x7c6: Stack[-1] = (float) 70.0
0x7c7: Call2 0x9b0

0x7c8: Pop(2)
0x7c9: Pop(1); Push((bool) Stack[-1] == 0)
0x7ca: IF (Stack[-1] == 0) GOTO 0x7cd; Pop(1)

0x7cb: Stack[-10] = (int) -2
0x7cc: Return(); Pop(8)

0x7cd: @ CreateDialog(Stack[-4])
0x7ce: Pop(0)
0x7cf: PushEmpty(int)
0x7d0: Call2 0xb67

0x7d1: Pop(0)
0x7d2: @@ SetNPCName(Stack[-1])
0x7d3: Pop(1)
0x7d4: PushEmpty(int)
0x7d5: Call2 0xb65

0x7d6: Pop(0)
0x7d7: @@ SetNPCDescription(Stack[-1])
0x7d8: Pop(1)
0x7d9: PushEmpty(string)
0x7da: Call2 0xb69

0x7db: Pop(0)
0x7dc: @@ SetPhoto(Stack[-1])
0x7dd: Pop(1)
0x7de: PushEmpty(string)
0x7df: Call2 0xb6b

0x7e0: Pop(0)
0x7e1: @@ SetPhoto2(Stack[-1])
0x7e2: Pop(1)
0x7e3: PushEmpty(int)
0x7e4: Call2 0xb54

0x7e5: Pop(0)
0x7e6: @@ SetPlayerName(Stack[-1])
0x7e7: Pop(1)
0x7e8: Stack[-2] = (int) -1
0x7e9: @ IsOverrideActive(Stack[-3])
0x7ea: Pop(0)
0x7eb: Push(Stack[-3])
0x7ec: IF (Stack[-1] == 0) GOTO 0x7ef; Pop(1)

0x7ed: Stack[-10] = (int) -2
0x7ee: Return(); Pop(8)

0x7ef: @ DoDialog(Stack[-4])
0x7f0: Pop(0)
0x7f1: PushEmpty(bool, object)
0x7f2: PushEmpty(object)
0x7f3: Call2 0xac4

0x7f4: Stack[-2] = Stack[-1]
0x7f5: Pop(1)
0x7f6: Call2 0xa05

0x7f7: Pop(2)
0x7f8: PushEmpty(object, object)
0x7f9: Stack[-2] = Stack[-11]
0x7fa: Stack[-1] = Stack[-6]
0x7fb: Push(-2, 4); TaskCall(11)
0x7fc: Call2 0x813

0x7fd: Pop(-2, 4); TaskReturn
0x7fe: Pop(2)
0x7ff: @@ IsDialogEnd(Stack[-1])
0x800: Pop(0)
0x801: Pop(0); Push((bool) Stack[-1] == 0)
0x802: IF (Stack[-1] == 0) GOTO 0x808; Pop(1)

0x803: @ sync()
0x804: Pop(0)
0x805: @@ IsDialogEnd(Stack[-1])
0x806: Pop(0)
0x807: GOTO 0x801

0x808: PushEmpty(object)
0x809: Stack[-1] = Stack[-10]
0x80a: Call2 0x9f4

0x80b: Pop(1)
0x80c: @ StopDialog(Stack[-4])
0x80d: Pop(0)
0x80e: @@ GetReturnValue(Stack[-2])
0x80f: Pop(0)
0x810: Stack[-10] = Stack[-2]
0x811: Return(); Pop(8)

0x812: Stack[-4] = 0
0x813: PushEmpty()
0x814: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x815: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x816: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x817: Push((int) 1)
0x818: IF (Stack[-1] == 0) GOTO 0x82f; Pop(1)

0x819: PushEmpty(string)
0x81a: Stack[-1] = "Neutral"
0x81b: Call2 0x84d

0x81c: Pop(1)
0x81d: Push((int) 540542)
0x81e: @@ SetMessage(Stack[-1])
0x81f: Pop(1)
0x820: @@ ClearReplies()
0x821: Pop(0)
0x822: Push((int) 540543)
0x823: Push((int) -1)
0x824: Push((int) 42552)
0x825: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x826: Pop(3)
0x827: Push((int) 540796)
0x828: Push((int) -1)
0x829: Push((int) 42845)
0x82a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82b: Pop(3)
0x82c: GOTO 0x82f

0x82d: Return(); Pop(0)

0x82e: GOTO 0x817

0x82f: PushEmpty(bool)
0x830: Call2 0xb6d

0x831: Pop(0)
0x832: IF (Stack[-1] == 0) GOTO 0x83e; Pop(1)

0x833: @ lshWaitForAnimEnd()
0x834: Pop(0)
0x835: Push( Stack[3 + Tasks[-1].StackPointer] )
0x836: IF (Stack[-1] == 0) GOTO 0x838; Pop(1)

0x837: GOTO 0x83d

0x838: PushEmpty(string)
0x839: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x83a: Call2 0xa8f

0x83b: Pop(1)
0x83c: GOTO 0x833

0x83d: GOTO 0x84c

0x83e: Push("all")
0x83f: Push("idle")
0x840: @ PlayAnimation(Stack[-2], Stack[-1])
0x841: Pop(2)
0x842: @ WaitForAnimEnd()
0x843: Pop(0)
0x844: Push( Stack[3 + Tasks[-1].StackPointer] )
0x845: IF (Stack[-1] == 0) GOTO 0x847; Pop(1)

0x846: GOTO 0x84c

0x847: Push("all")
0x848: Push("idle")
0x849: @ PlayAnimation(Stack[-2], Stack[-1])
0x84a: Pop(2)
0x84b: GOTO 0x842

0x84c: Return(); Pop(0)

0x84d: PushEmpty()
0x84e: PushEmpty(bool)
0x84f: Call2 0xb6d

0x850: Pop(0)
0x851: Pop(1); Push((bool) Stack[-1] == 0)
0x852: IF (Stack[-1] == 0) GOTO 0x854; Pop(1)

0x853: Return(); Pop(0)

0x854: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x855: IF (Stack[-1] == 0) GOTO 0x857; Pop(1)

0x856: Return(); Pop(0)

0x857: PushEmpty(string, bool)
0x858: Stack[-2] = Stack[-3]
0x859: Push("")
0x85a: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x85b: IF (Stack[-1] == 0) GOTO 0x85e; Pop(1)

0x85c: Stack[-1] = (bool) 0
0x85d: GOTO 0x85f

0x85e: Stack[-1] = (bool) 1
0x85f: Call2 0xa9f

0x860: Pop(2)
0x861: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x862: Return(); Pop(0)

0x863: PushEmpty()
0x864: Push((int) 1)
0x865: IF (Stack[-1] == 0) GOTO 0x88c; Pop(1)

0x866: PushEmpty()
0x867: Call2 0xabd

0x868: Pop(0)
0x869: Push((int) 42551)
0x86a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x86b: IF (Stack[-1] == 0) GOTO 0x880; Pop(1)

0x86c: PushEmpty(string)
0x86d: Stack[-1] = "Neutral"
0x86e: Call2 0x84d

0x86f: Pop(1)
0x870: Push((int) 540542)
0x871: @@ SetMessage(Stack[-1])
0x872: Pop(1)
0x873: @@ ClearReplies()
0x874: Pop(0)
0x875: Push((int) 540543)
0x876: Push((int) -1)
0x877: Push((int) 42552)
0x878: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x879: Pop(3)
0x87a: Push((int) 540796)
0x87b: Push((int) -1)
0x87c: Push((int) 42845)
0x87d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x87e: Pop(3)
0x87f: Return(); Pop(0)

0x880: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x881: PushEmpty(bool)
0x882: Call2 0xb6d

0x883: Pop(0)
0x884: IF (Stack[-1] == 0) GOTO 0x888; Pop(1)

0x885: @ lshStopAnimation()
0x886: Pop(0)
0x887: GOTO 0x88a

0x888: @ StopAnimation()
0x889: Pop(0)
0x88a: Return(); Pop(0)

0x88b: GOTO 0x864

0x88c: Return(); Pop(0)

0x88d: Push(GlobalVars[1])
0x88e: Stack[-1] = (bool) 0
0x88f: GlobalVars[1] = Stack[-1]; Pop(1)
0x890: PushEmpty()
0x891: Call2 0x894

0x892: Pop(0)
0x893: Return(); Pop(0)

0x894: PushEmpty(bool)
0x895: Call2 0x9ab

0x896: Pop(0)
0x897: Pop(1); Push((bool) Stack[-1] == 0)
0x898: IF (Stack[-1] == 0) GOTO 0x89b; Pop(1)

0x899: @ Hold()
0x89a: Pop(0)
0x89b: @ GetDirection(Stack[-0])
0x89c: Pop(0)
0x89d: PushEmpty()
0x89e: Call2 0x944

0x89f: Pop(0)
0x8a0: GOTO 0x89d

0x8a1: Return(); Pop(0)

0x8a2: PushEmpty(object, object)
0x8a3: Push("player")
0x8a4: @ FindActor(Stack[-2], Stack[-1])
0x8a5: Pop(1)
0x8a6: Pop(0); Push((bool) Stack[-1] == 0)
0x8a7: IF (Stack[-1] == 0) GOTO 0x8aa; Pop(1)

0x8a8: Stack[-3] = (bool) 0
0x8a9: Return(); Pop(2)

0x8aa: PushEmpty(bool, object)
0x8ab: Stack[-1] = Stack[-3]
0x8ac: Call2 0x9a2

0x8ad: Stack[-5] = Stack[-2]
0x8ae: Pop(2)
0x8af: Return(); Pop(2)

0x8b0: Stack[-1] = 0
0x8b1: Push(CvectorIndex(Stack[-0], 0))
0x8b2: Push(CvectorIndex(Stack[-0], 2))
0x8b3: @ RotateAsync(Stack[-2], Stack[-1])
0x8b4: Pop(2)
0x8b5: Return(); Pop(0)

0x8b6: PushEmpty(object, bool, object, bool)
0x8b7: Push("player")
0x8b8: @ FindActor(Stack[-3], Stack[-1])
0x8b9: Pop(1)
0x8ba: Pop(0); Push((bool) Stack[-2] == 0)
0x8bb: IF (Stack[-1] == 0) GOTO 0x8be; Pop(1)

0x8bc: Stack[-5] = (bool) 0
0x8bd: Return(); Pop(4)

0x8be: PushEmpty(float, object)
0x8bf: Stack[-1] = Stack[-4]
0x8c0: Call2 0x990

0x8c1: Pop(1)
0x8c2: Push((float)90000.0)
0x8c3: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x8c4: IF (Stack[-1] == 0) GOTO 0x8c7; Pop(1)

0x8c5: Stack[-5] = (bool) 0
0x8c6: Return(); Pop(4)

0x8c7: @ CanSee(Stack[-1], Stack[-2])
0x8c8: Pop(0)
0x8c9: Stack[-5] = Stack[-1]
0x8ca: Return(); Pop(4)

0x8cb: Stack[-2] = 0
0x8cc: PushEmpty(float, float)
0x8cd: Push((int) 8)
0x8ce: Push((int) 16)
0x8cf: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x8d0: Pop(2)
0x8d1: Push((int) 10)
0x8d2: @ SetTimer(Stack[-1], Stack[-2])
0x8d3: Pop(1)
0x8d4: Return(); Pop(2)

0x8d5: Push((int) 10)
0x8d6: @ KillTimer(Stack[-1])
0x8d7: Pop(1)
0x8d8: Return(); Pop(0)

0x8d9: PushEmpty()
0x8da: Push((int) 10)
0x8db: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8dc: IF (Stack[-1] == 0) GOTO 0x8fe; Pop(1)

0x8dd: PushEmpty()
0x8de: Call2 0x8d5

0x8df: Pop(0)
0x8e0: PushEmpty(bool)
0x8e1: Stack[-1] = (bool) 0
0x8e2: PushEmpty(bool)
0x8e3: Call2 0x9ab

0x8e4: Pop(0)
0x8e5: IF (Stack[-1] == 0) GOTO 0x8eb; Pop(1)

0x8e6: PushEmpty(bool)
0x8e7: Call2 0x8b6

0x8e8: Pop(0)
0x8e9: IF (Stack[-1] == 0) GOTO 0x8eb; Pop(1)

0x8ea: Stack[-1] = (bool) 1
0x8eb: IF (Stack[-1] == 0) GOTO 0x8f8; Pop(1)

0x8ec: PushEmpty(bool)
0x8ed: Call2 0x8a2

0x8ee: Pop(0)
0x8ef: IF (Stack[-1] == 0) GOTO 0x8f7; Pop(1)

0x8f0: PushEmpty(bool, object)
0x8f1: PushEmpty(object)
0x8f2: Call2 0xac4

0x8f3: Stack[-2] = Stack[-1]
0x8f4: Pop(1)
0x8f5: Call2 0xa3f

0x8f6: Pop(2)
0x8f7: GOTO 0x8fe

0x8f8: PushEmpty()
0x8f9: Call2 0x8b1

0x8fa: Pop(0)
0x8fb: PushEmpty()
0x8fc: Call2 0x8cc

0x8fd: Pop(0)
0x8fe: Return(); Pop(0)

0x8ff: PushEmpty()
0x900: Call2 0x98b

0x901: Pop(0)
0x902: PushEmpty()
0x903: Call2 0x8d5

0x904: Pop(0)
0x905: @ lshStopSpeech()
0x906: Pop(0)
0x907: @ lshStopAnimation()
0x908: Pop(0)
0x909: @ StopAsync()
0x90a: Pop(0)
0x90b: @ Hold()
0x90c: Pop(0)
0x90d: Return(); Pop(0)

0x90e: @ StopGroup0()
0x90f: Pop(0)
0x910: PushEmpty()
0x911: Call2 0x8d5

0x912: Pop(0)
0x913: PushEmpty(string)
0x914: Stack[-1] = "Neutral"
0x915: Call2 0xa8f

0x916: Pop(1)
0x917: PushEmpty()
0x918: Call2 0x8cc

0x919: Pop(0)
0x91a: Return(); Pop(0)

0x91b: PushEmpty()
0x91c: Push(Stack[-1])
0x91d: IF (Stack[-1] == 0) GOTO 0x922; Pop(1)

0x91e: PushEmpty()
0x91f: Call2 0x8cc

0x920: Pop(0)
0x921: GOTO 0x926

0x922: PushEmpty(string)
0x923: Stack[-1] = "Neutral"
0x924: Call2 0xa8f

0x925: Pop(1)
0x926: Return(); Pop(0)

0x927: PushEmpty(bool, bool)
0x928: @ IsOverrideActive(Stack[-1])
0x929: Pop(0)
0x92a: Pop(0); Push((bool) Stack[-1] == 0)
0x92b: IF (Stack[-1] == 0) GOTO 0x943; Pop(1)

0x92c: EventDisable(0)
0x92d: PushEmpty()
0x92e: Call2 0x98b

0x92f: Pop(0)
0x930: PushEmpty(bool, object)
0x931: Stack[-1] = Stack[-5]
0x932: Call2 0x9a2

0x933: Pop(2)
0x934: EventEnable(0)
0x935: PushEmpty(object)
0x936: Stack[-1] = Stack[-4]
0x937: Call2 0xb6f

0x938: Pop(1)
0x939: PushEmpty(string)
0x93a: Stack[-1] = "Neutral"
0x93b: Call2 0xa8f

0x93c: Pop(1)
0x93d: PushEmpty()
0x93e: Call2 0x8d5

0x93f: Pop(0)
0x940: PushEmpty()
0x941: Call2 0x8cc

0x942: Pop(0)
0x943: Return(); Pop(2)

0x944: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x945: @ WaitForAnimEnd()
0x946: Pop(0)
0x947: PushEmpty(bool)
0x948: Call2 0x9ab

0x949: Pop(0)
0x94a: Pop(1); Push((bool) Stack[-1] == 0)
0x94b: IF (Stack[-1] == 0) GOTO 0x94d; Pop(1)

0x94c: Return(); Pop(12)

0x94d: PushEmpty(int)
0x94e: Call2 0xaef

0x94f: Stack[-7] = Stack[-1]
0x950: Pop(1)
0x951: Stack[-5] = (int) 0
0x952: PushEmpty(bool)
0x953: Stack[-1] = (bool) 0
0x954: Push((int) 5)
0x955: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x956: IF (Stack[-1] == 0) GOTO 0x95c; Pop(1)

0x957: PushEmpty(bool)
0x958: Call2 0x9ab

0x959: Pop(0)
0x95a: IF (Stack[-1] == 0) GOTO 0x95c; Pop(1)

0x95b: Stack[-1] = (bool) 1
0x95c: IF (Stack[-1] == 0) GOTO 0x986; Pop(1)

0x95d: Pop(0); Push((bool) Stack[-6] == 0)
0x95e: IF (Stack[-1] == 0) GOTO 0x966; Pop(1)

0x95f: Push((int) 3)
0x960: @ Sleep(Stack[-1], Stack[-5])
0x961: Pop(1)
0x962: Pop(0); Push((bool) Stack[-4] == 0)
0x963: IF (Stack[-1] == 0) GOTO 0x965; Pop(1)

0x964: GOTO 0x986

0x965: GOTO 0x97b

0x966: @ irand(Stack[-3], Stack[-6])
0x967: Pop(0)
0x968: Push((int) 5)
0x969: @ irand(Stack[-3], Stack[-1])
0x96a: Pop(1)
0x96b: Push((int) 0)
0x96c: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x96d: IF (Stack[-1] == 0) GOTO 0x96f; Pop(1)

0x96e: Stack[-3] = (int) 0
0x96f: Push("all")
0x970: PushEmpty(string, int)
0x971: Stack[-1] = Stack[-6]
0x972: Call2 0xae8

0x973: Pop(1)
0x974: @ PlayAnimation(Stack[-2], Stack[-1])
0x975: Pop(2)
0x976: @ WaitForAnimEnd(Stack[-1])
0x977: Pop(0)
0x978: Pop(0); Push((bool) Stack[-1] == 0)
0x979: IF (Stack[-1] == 0) GOTO 0x97b; Pop(1)

0x97a: GOTO 0x986

0x97b: PushEmpty(bool)
0x97c: Call2 0x989

0x97d: Pop(0)
0x97e: Pop(1); Push((bool) Stack[-1] == 0)
0x97f: IF (Stack[-1] == 0) GOTO 0x981; Pop(1)

0x980: GOTO 0x986

0x981: @ ResetAAS()
0x982: Pop(0)
0x983: Push((int) 1)
0x984: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x985: GOTO 0x952

0x986: @ ResetAAS()
0x987: Pop(0)
0x988: Return(); Pop(12)

0x989: Stack[-1] = (bool) 1
0x98a: Return(); Pop(0)

0x98b: @ StopAnimation()
0x98c: Pop(0)
0x98d: @ StopGroup0()
0x98e: Pop(0)
0x98f: Return(); Pop(0)

0x990: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x991: @ GetPosition(Stack[-3])
0x992: Pop(0)
0x993: @@ GetPosition(Stack[-2])
0x994: Pop(0)
0x995: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x996: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x997: Return(); Pop(6)

0x998: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x999: @ GetPosition(Stack[-3])
0x99a: Pop(0)
0x99b: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x99c: Push(CvectorIndex(Stack[-2], 0))
0x99d: Push(CvectorIndex(Stack[-3], 2))
0x99e: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x99f: Pop(2)
0x9a0: Stack[-8] = Stack[-1]
0x9a1: Return(); Pop(6)

0x9a2: PushEmpty(cvector, cvector)
0x9a3: @@ GetPosition(Stack[-1])
0x9a4: Pop(0)
0x9a5: PushEmpty(bool, cvector)
0x9a6: Stack[-1] = Stack[-3]
0x9a7: Call2 0x998

0x9a8: Stack[-6] = Stack[-2]
0x9a9: Pop(2)
0x9aa: Return(); Pop(2)

0x9ab: PushEmpty(bool, bool)
0x9ac: @ IsLoaded(Stack[-1])
0x9ad: Pop(0)
0x9ae: Stack[-3] = Stack[-1]
0x9af: Return(); Pop(2)

0x9b0: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x9b1: @@ GetPosition(Stack[-8])
0x9b2: Pop(0)
0x9b3: @@ GetEyesHeight(Stack[-9])
0x9b4: Pop(0)
0x9b5: Push(CvectorIndex(Stack[-8], 1))
0x9b6: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x9b7: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x9b8: @ GetPosition(Stack[-7])
0x9b9: Pop(0)
0x9ba: @ GetEyesHeight(Stack[-9])
0x9bb: Pop(0)
0x9bc: Push(CvectorIndex(Stack[-7], 1))
0x9bd: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x9be: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x9bf: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x9c0: Push(CvectorIndex(Stack[-6], 1))
0x9c1: Stack[-1] = (int) 0
0x9c2: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x9c3: Pop(0); Push(Stack[-6] | Stack[-6]);
0x9c4: Pop(1); Push(Sqrt(Stack[-1]))
0x9c5: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x9c6: Stack[-5] = -Stack[-6]; Pop(0);
0x9c7: Pop(0); Push(Stack[-6] * Stack[-19]);
0x9c8: PushEmpty(cvector, cvector)
0x9c9: Push(CVector(0.0, 1.0, 0.0))
0x9ca: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x9cb: Call2 0xaca

0x9cc: Pop(1)
0x9cd: Push((int) 25)
0x9ce: Pop(2); Push(Stack[-2] * Stack[-1]);
0x9cf: Pop(2); Push(Stack[-2] + Stack[-1]);
0x9d0: Push(CVector(0.0, 10.0, 0.0))
0x9d1: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x9d2: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x9d3: @ IsOverrideActive(Stack[-2])
0x9d4: Pop(0)
0x9d5: Push(Stack[-2])
0x9d6: IF (Stack[-1] == 0) GOTO 0x9d9; Pop(1)

0x9d7: Stack[-21] = (bool) 0
0x9d8: Return(); Pop(18)

0x9d9: @ StopWorld()
0x9da: Pop(0)
0x9db: @ CameraTransit(Stack[-3], Stack[-5])
0x9dc: Pop(0)
0x9dd: Push(CvectorIndex(Stack[-4], 0))
0x9de: Push(CvectorIndex(Stack[-5], 2))
0x9df: @ Rotate(Stack[-2], Stack[-1])
0x9e0: Pop(2)
0x9e1: PushEmpty(bool)
0x9e2: Call2 0xb6d

0x9e3: Pop(0)
0x9e4: IF (Stack[-1] == 0) GOTO 0x9e6; Pop(1)

0x9e5: GOTO 0x9ee

0x9e6: Push("head")
0x9e7: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x9e8: Pop(1)
0x9e9: Push(Stack[-1])
0x9ea: IF (Stack[-1] == 0) GOTO 0x9ee; Pop(1)

0x9eb: Push("head")
0x9ec: @ LookAsyncCamera(Stack[-1])
0x9ed: Pop(1)
0x9ee: @ CameraWaitForPlayFinish()
0x9ef: Pop(0)
0x9f0: @ ResumeWorld()
0x9f1: Pop(0)
0x9f2: Stack[-21] = (bool) 1
0x9f3: Return(); Pop(18)

0x9f4: PushEmpty(bool, bool)
0x9f5: @ CameraSwitchToNormal()
0x9f6: Pop(0)
0x9f7: PushEmpty(bool)
0x9f8: Call2 0xb6d

0x9f9: Pop(0)
0x9fa: IF (Stack[-1] == 0) GOTO 0x9fc; Pop(1)

0x9fb: GOTO 0xa04

0x9fc: Push("head")
0x9fd: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x9fe: Pop(1)
0x9ff: Push(Stack[-1])
0xa00: IF (Stack[-1] == 0) GOTO 0xa04; Pop(1)

0xa01: Push("head")
0xa02: @ UnlookAsync(Stack[-1])
0xa03: Pop(1)
0xa04: Return(); Pop(2)

0xa05: PushEmpty(int, int, int, int)
0xa06: Push("voice_common")
0xa07: @ GetVariable(Stack[-1], Stack[-3])
0xa08: Pop(1)
0xa09: Push(Stack[-2])
0xa0a: IF (Stack[-1] == 0) GOTO 0xa2b; Pop(1)

0xa0b: PushEmpty(bool, object)
0xa0c: Stack[-1] = Stack[-7]
0xa0d: Call2 0xa3f

0xa0e: Pop(1)
0xa0f: Pop(1); Push((bool) Stack[-1] == 0)
0xa10: IF (Stack[-1] == 0) GOTO 0xa19; Pop(1)

0xa11: PushEmpty(bool, object)
0xa12: Stack[-1] = Stack[-7]
0xa13: Call2 0xa64

0xa14: Pop(1)
0xa15: Pop(1); Push((bool) Stack[-1] == 0)
0xa16: IF (Stack[-1] == 0) GOTO 0xa19; Pop(1)

0xa17: Stack[-6] = (bool) 0
0xa18: Return(); Pop(4)

0xa19: Push((int) 2)
0xa1a: @ irand(Stack[-2], Stack[-1])
0xa1b: Pop(1)
0xa1c: Push(Stack[-1])
0xa1d: IF (Stack[-1] == 0) GOTO 0xa26; Pop(1)

0xa1e: Push("voice_common")
0xa1f: Push((int) 1)
0xa20: Pop(1); Push(Stack[-4] + Stack[-1]);
0xa21: Push((int) 3)
0xa22: Pop(2); Push(Stack[-2] % Stack[-1]);
0xa23: @ SetVariable(Stack[-2], Stack[-1])
0xa24: Pop(2)
0xa25: GOTO 0xa2a

0xa26: Push("voice_common")
0xa27: Push((int) 0)
0xa28: @ SetVariable(Stack[-2], Stack[-1])
0xa29: Pop(2)
0xa2a: GOTO 0xa3d

0xa2b: PushEmpty(bool, object)
0xa2c: Stack[-1] = Stack[-7]
0xa2d: Call2 0xa64

0xa2e: Pop(1)
0xa2f: Pop(1); Push((bool) Stack[-1] == 0)
0xa30: IF (Stack[-1] == 0) GOTO 0xa39; Pop(1)

0xa31: PushEmpty(bool, object)
0xa32: Stack[-1] = Stack[-7]
0xa33: Call2 0xa3f

0xa34: Pop(1)
0xa35: Pop(1); Push((bool) Stack[-1] == 0)
0xa36: IF (Stack[-1] == 0) GOTO 0xa39; Pop(1)

0xa37: Stack[-6] = (bool) 0
0xa38: Return(); Pop(4)

0xa39: Push("voice_common")
0xa3a: Push((int) 1)
0xa3b: @ SetVariable(Stack[-2], Stack[-1])
0xa3c: Pop(2)
0xa3d: Stack[-6] = (bool) 1
0xa3e: Return(); Pop(4)

0xa3f: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xa40: Stack[-5] = "c"
0xa41: Stack[-4] = (int) 0
0xa42: Push((int) 1)
0xa43: IF (Stack[-1] == 0) GOTO 0xa4f; Pop(1)

0xa44: Push((int) 1)
0xa45: Pop(1); Push(Stack[-5] + Stack[-1]);
0xa46: Pop(1); Push(Stack[-6] + Stack[-1]);
0xa47: @@ HasProperty(Stack[-1], Stack[-4])
0xa48: Pop(1)
0xa49: Pop(0); Push((bool) Stack[-3] == 0)
0xa4a: IF (Stack[-1] == 0) GOTO 0xa4c; Pop(1)

0xa4b: GOTO 0xa4f

0xa4c: Push((int) 1)
0xa4d: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xa4e: GOTO 0xa42

0xa4f: Pop(0); Push((bool) Stack[-4] == 0)
0xa50: IF (Stack[-1] == 0) GOTO 0xa53; Pop(1)

0xa51: Stack[-12] = (bool) 0
0xa52: Return(); Pop(10)

0xa53: Stack[-2] = (int) 0
0xa54: Push((int) 1)
0xa55: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xa56: IF (Stack[-1] == 0) GOTO 0xa59; Pop(1)

0xa57: @ irand(Stack[-2], Stack[-4])
0xa58: Pop(0)
0xa59: Push((int) 1)
0xa5a: Pop(1); Push(Stack[-3] + Stack[-1]);
0xa5b: Pop(1); Push(Stack[-6] + Stack[-1]);
0xa5c: @@ GetProperty(Stack[-1], Stack[-2])
0xa5d: Pop(1)
0xa5e: PushEmpty(bool, string)
0xa5f: Stack[-1] = Stack[-3]
0xa60: Call2 0xaae

0xa61: Stack[-14] = Stack[-2]
0xa62: Pop(2)
0xa63: Return(); Pop(10)

0xa64: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xa65: Push("d")
0xa66: PushEmpty(int)
0xa67: Call2 0xad9

0xa68: Pop(0)
0xa69: Pop(2); Push(Stack[-2] + Stack[-1]);
0xa6a: Push("m")
0xa6b: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0xa6c: Stack[-4] = (int) 0
0xa6d: Push((int) 1)
0xa6e: IF (Stack[-1] == 0) GOTO 0xa7a; Pop(1)

0xa6f: Push((int) 1)
0xa70: Pop(1); Push(Stack[-5] + Stack[-1]);
0xa71: Pop(1); Push(Stack[-6] + Stack[-1]);
0xa72: @@ HasProperty(Stack[-1], Stack[-4])
0xa73: Pop(1)
0xa74: Pop(0); Push((bool) Stack[-3] == 0)
0xa75: IF (Stack[-1] == 0) GOTO 0xa77; Pop(1)

0xa76: GOTO 0xa7a

0xa77: Push((int) 1)
0xa78: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xa79: GOTO 0xa6d

0xa7a: Pop(0); Push((bool) Stack[-4] == 0)
0xa7b: IF (Stack[-1] == 0) GOTO 0xa7e; Pop(1)

0xa7c: Stack[-12] = (bool) 0
0xa7d: Return(); Pop(10)

0xa7e: Stack[-2] = (int) 0
0xa7f: Push((int) 1)
0xa80: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xa81: IF (Stack[-1] == 0) GOTO 0xa84; Pop(1)

0xa82: @ irand(Stack[-2], Stack[-4])
0xa83: Pop(0)
0xa84: Push((int) 1)
0xa85: Pop(1); Push(Stack[-3] + Stack[-1]);
0xa86: Pop(1); Push(Stack[-6] + Stack[-1]);
0xa87: @@ GetProperty(Stack[-1], Stack[-2])
0xa88: Pop(1)
0xa89: PushEmpty(bool, string)
0xa8a: Stack[-1] = Stack[-3]
0xa8b: Call2 0xaae

0xa8c: Stack[-14] = Stack[-2]
0xa8d: Pop(2)
0xa8e: Return(); Pop(10)

0xa8f: PushEmpty(bool, float, float, bool, float, float)
0xa90: @ lshHasAnimation(Stack[-3], Stack[-7])
0xa91: Pop(0)
0xa92: Push(Stack[-3])
0xa93: IF (Stack[-1] == 0) GOTO 0xa9a; Pop(1)

0xa94: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0xa95: Pop(0)
0xa96: Push((bool) 0)
0xa97: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xa98: Pop(1)
0xa99: GOTO 0xa9e

0xa9a: Push("Can't find lsh animation : ")
0xa9b: Pop(1); Push(Stack[-1] + Stack[-8]);
0xa9c: @ Trace(Stack[-1])
0xa9d: Pop(1)
0xa9e: Return(); Pop(6)

0xa9f: PushEmpty(bool, float, float, bool, float, float)
0xaa0: @ lshHasAnimation(Stack[-3], Stack[-8])
0xaa1: Pop(0)
0xaa2: Push(Stack[-3])
0xaa3: IF (Stack[-1] == 0) GOTO 0xaa9; Pop(1)

0xaa4: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0xaa5: Pop(0)
0xaa6: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0xaa7: Pop(0)
0xaa8: GOTO 0xaad

0xaa9: Push("Can't find lsh animation : ")
0xaaa: Pop(1); Push(Stack[-1] + Stack[-9]);
0xaab: @ Trace(Stack[-1])
0xaac: Pop(1)
0xaad: Return(); Pop(6)

0xaae: PushEmpty(bool, bool)
0xaaf: PushEmpty(bool)
0xab0: Call2 0xb6d

0xab1: Pop(0)
0xab2: IF (Stack[-1] == 0) GOTO 0xabb; Pop(1)

0xab3: @ lshHasSpeech(Stack[-1], Stack[-3])
0xab4: Pop(0)
0xab5: Push(Stack[-1])
0xab6: IF (Stack[-1] == 0) GOTO 0xabb; Pop(1)

0xab7: @ lshPlaySpeech(Stack[-3])
0xab8: Pop(0)
0xab9: Stack[-4] = (bool) 1
0xaba: Return(); Pop(2)

0xabb: Stack[-4] = (bool) 0
0xabc: Return(); Pop(2)

0xabd: PushEmpty(bool)
0xabe: Call2 0xb6d

0xabf: Pop(0)
0xac0: IF (Stack[-1] == 0) GOTO 0xac3; Pop(1)

0xac1: @ lshStopSpeech()
0xac2: Pop(0)
0xac3: Return(); Pop(0)

0xac4: PushEmpty(object, object)
0xac5: @ self(Stack[-1])
0xac6: Pop(0)
0xac7: Stack[-3] = Stack[-1]
0xac8: Return(); Pop(2)

0xac9: Stack[-1] = 0
0xaca: PushEmpty(float, float)
0xacb: Pop(0); Push(Stack[-3] | Stack[-3]);
0xacc: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xacd: Push((float)0.0)
0xace: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xacf: IF (Stack[-1] == 0) GOTO 0xad2; Pop(1)

0xad0: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xad1: Return(); Pop(2)

0xad2: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xad3: Return(); Pop(2)

0xad4: PushEmpty(int, int)
0xad5: @ GetVariable(Stack[-3], Stack[-1])
0xad6: Pop(0)
0xad7: Stack[-4] = Stack[-1]
0xad8: Return(); Pop(2)

0xad9: PushEmpty(float, float)
0xada: @ GetGameTime(Stack[-1])
0xadb: Pop(0)
0xadc: Push((int) 1)
0xadd: PushEmpty(int)
0xade: Push((int) 24)
0xadf: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xae0: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xae1: Return(); Pop(2)

0xae2: PushEmpty()
0xae3: PushEmpty(int)
0xae4: Call2 0xad9

0xae5: Pop(0)
0xae6: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0xae7: Return(); Pop(0)

0xae8: PushEmpty(string, string)
0xae9: Stack[-1] = "idle"
0xaea: Push(Stack[-3])
0xaeb: IF (Stack[-1] == 0) GOTO 0xaed; Pop(1)

0xaec: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xaed: Stack[-4] = Stack[-1]
0xaee: Return(); Pop(2)

0xaef: PushEmpty(int, bool, int, bool)
0xaf0: Stack[-2] = (int) 0
0xaf1: Push("all")
0xaf2: PushEmpty(string, int)
0xaf3: Stack[-1] = Stack[-5]
0xaf4: Call2 0xae8

0xaf5: Pop(1)
0xaf6: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xaf7: Pop(2)
0xaf8: Pop(0); Push((bool) Stack[-1] == 0)
0xaf9: IF (Stack[-1] == 0) GOTO 0xafb; Pop(1)

0xafa: GOTO 0xafe

0xafb: Push((int) 1)
0xafc: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xafd: GOTO 0xaf1

0xafe: Stack[-5] = Stack[-2]
0xaff: Return(); Pop(4)

0xb00: PushEmpty()
0xb01: Push("KnowTwoSouls")
0xb02: Push((int) 1)
0xb03: @ SetVariable(Stack[-2], Stack[-1])
0xb04: Pop(2)
0xb05: Return(); Pop(0)

0xb06: PushEmpty()
0xb07: Push("KnowNotkin")
0xb08: Push((int) 1)
0xb09: @ SetVariable(Stack[-2], Stack[-1])
0xb0a: Pop(2)
0xb0b: Return(); Pop(0)

0xb0c: PushEmpty()
0xb0d: Push("ood3Notkin1")
0xb0e: Push((int) 1)
0xb0f: @ SetVariable(Stack[-2], Stack[-1])
0xb10: Pop(2)
0xb11: Return(); Pop(0)

0xb12: PushEmpty()
0xb13: Push("ood4Notkin1")
0xb14: Push((int) 1)
0xb15: @ SetVariable(Stack[-2], Stack[-1])
0xb16: Pop(2)
0xb17: Return(); Pop(0)

0xb18: PushEmpty()
0xb19: PushEmpty(int, string)
0xb1a: Stack[-1] = "d4q03"
0xb1b: Call2 0xad4

0xb1c: Pop(1)
0xb1d: Push((int) 2)
0xb1e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xb1f: IF (Stack[-1] == 0) GOTO 0xb22; Pop(1)

0xb20: Stack[-2] = (bool) 1
0xb21: Return(); Pop(0)

0xb22: Stack[-2] = (bool) 0
0xb23: Return(); Pop(0)

0xb24: PushEmpty()
0xb25: PushEmpty(int, string)
0xb26: Stack[-1] = "d4q03_alldead"
0xb27: Call2 0xad4

0xb28: Pop(1)
0xb29: Push((int) 1)
0xb2a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xb2b: IF (Stack[-1] == 0) GOTO 0xb2e; Pop(1)

0xb2c: Stack[-2] = (bool) 1
0xb2d: Return(); Pop(0)

0xb2e: Stack[-2] = (bool) 0
0xb2f: Return(); Pop(0)

0xb30: PushEmpty()
0xb31: PushEmpty(int, string)
0xb32: Stack[-1] = "ood3Notkin1"
0xb33: Call2 0xad4

0xb34: Pop(1)
0xb35: Push((int) 0)
0xb36: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xb37: IF (Stack[-1] == 0) GOTO 0xb3a; Pop(1)

0xb38: Stack[-2] = (bool) 1
0xb39: Return(); Pop(0)

0xb3a: Stack[-2] = (bool) 0
0xb3b: Return(); Pop(0)

0xb3c: PushEmpty()
0xb3d: PushEmpty(int, string)
0xb3e: Stack[-1] = "d4q03"
0xb3f: Call2 0xad4

0xb40: Pop(1)
0xb41: Push((int) 3)
0xb42: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xb43: IF (Stack[-1] == 0) GOTO 0xb46; Pop(1)

0xb44: Stack[-2] = (bool) 1
0xb45: Return(); Pop(0)

0xb46: Stack[-2] = (bool) 0
0xb47: Return(); Pop(0)

0xb48: PushEmpty()
0xb49: PushEmpty(int, string)
0xb4a: Stack[-1] = "ood4Notkin1"
0xb4b: Call2 0xad4

0xb4c: Pop(1)
0xb4d: Push((int) 0)
0xb4e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xb4f: IF (Stack[-1] == 0) GOTO 0xb52; Pop(1)

0xb50: Stack[-2] = (bool) 1
0xb51: Return(); Pop(0)

0xb52: Stack[-2] = (bool) 0
0xb53: Return(); Pop(0)

0xb54: PushEmpty(int, int)
0xb55: Push("branch")
0xb56: @ GetVariable(Stack[-1], Stack[-2])
0xb57: Pop(1)
0xb58: Push((int) 0)
0xb59: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb5a: IF (Stack[-1] == 0) GOTO 0xb5e; Pop(1)

0xb5b: Stack[-3] = (int) 1
0xb5c: Return(); Pop(2)

0xb5d: GOTO 0xb63

0xb5e: Push((int) 1)
0xb5f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb60: IF (Stack[-1] == 0) GOTO 0xb63; Pop(1)

0xb61: Stack[-3] = (int) 2
0xb62: Return(); Pop(2)

0xb63: Stack[-3] = (int) 3
0xb64: Return(); Pop(2)

0xb65: Stack[-1] = (int) 515548
0xb66: Return(); Pop(0)

0xb67: Stack[-1] = (int) 502873
0xb68: Return(); Pop(0)

0xb69: Stack[-1] = "ui/NPC_Notkin.png"
0xb6a: Return(); Pop(0)

0xb6b: Stack[-1] = "ui/NPC_Notkin_b.png"
0xb6c: Return(); Pop(0)

0xb6d: Stack[-1] = (bool) 1
0xb6e: Return(); Pop(0)

0xb6f: PushEmpty()
0xb70: Push(GlobalVars[1])
0xb71: Pop(1); Push((bool) Stack[-1] == 0)
0xb72: IF (Stack[-1] == 0) GOTO 0xb7c; Pop(1)

0xb73: PushEmpty(int, object)
0xb74: Stack[-1] = Stack[-3]
0xb75: Push(-2, 1); TaskCall(2)
0xb76: Call2 0x103

0xb77: Pop(-2, 1); TaskReturn
0xb78: Pop(2)
0xb79: Push(GlobalVars[1])
0xb7a: Stack[-1] = (bool) 1
0xb7b: GlobalVars[1] = Stack[-1]; Pop(1)
0xb7c: PushEmpty(bool, int)
0xb7d: Stack[-1] = (int) 1
0xb7e: Call2 0xae2

0xb7f: Pop(1)
0xb80: IF (Stack[-1] == 0) GOTO 0xb82; Pop(1)

0xb81: Return(); Pop(0)

0xb82: PushEmpty(bool, int)
0xb83: Stack[-1] = (int) 3
0xb84: Call2 0xae2

0xb85: Pop(1)
0xb86: IF (Stack[-1] == 0) GOTO 0xb8e; Pop(1)

0xb87: PushEmpty(int, object)
0xb88: Stack[-1] = Stack[-3]
0xb89: Push(-2, 1); TaskCall(6)
0xb8a: Call2 0x34a

0xb8b: Pop(-2, 1); TaskReturn
0xb8c: Pop(2)
0xb8d: Return(); Pop(0)

0xb8e: PushEmpty(bool, int)
0xb8f: Stack[-1] = (int) 4
0xb90: Call2 0xae2

0xb91: Pop(1)
0xb92: IF (Stack[-1] == 0) GOTO 0xb9a; Pop(1)

0xb93: PushEmpty(int, object)
0xb94: Stack[-1] = Stack[-3]
0xb95: Push(-2, 1); TaskCall(8)
0xb96: Call2 0x593

0xb97: Pop(-2, 1); TaskReturn
0xb98: Pop(2)
0xb99: Return(); Pop(0)

0xb9a: PushEmpty(bool, int)
0xb9b: Stack[-1] = (int) 7
0xb9c: Call2 0xae2

0xb9d: Pop(1)
0xb9e: IF (Stack[-1] == 0) GOTO 0xba6; Pop(1)

0xb9f: PushEmpty(int, object)
0xba0: Stack[-1] = Stack[-3]
0xba1: Push(-2, 1); TaskCall(4)
0xba2: Call2 0x241

0xba3: Pop(-2, 1); TaskReturn
0xba4: Pop(2)
0xba5: Return(); Pop(0)

0xba6: PushEmpty(bool, int)
0xba7: Stack[-1] = (int) 12
0xba8: Call2 0xae2

0xba9: Pop(1)
0xbaa: IF (Stack[-1] == 0) GOTO 0xbb2; Pop(1)

0xbab: PushEmpty(int, object)
0xbac: Stack[-1] = Stack[-3]
0xbad: Push(-2, 1); TaskCall(0)
0xbae: Call2 0x0

0xbaf: Pop(-2, 1); TaskReturn
0xbb0: Pop(2)
0xbb1: Return(); Pop(0)

0xbb2: PushEmpty(int, object)
0xbb3: Stack[-1] = Stack[-3]
0xbb4: Push(-2, 1); TaskCall(10)
0xbb5: Call2 0x7c2

0xbb6: Pop(-2, 1); TaskReturn
0xbb7: Pop(2)
0xbb8: Return(); Pop(0)

