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
	Untrust
	all
	idle
	Autizm
	cleanup
	restore
	player
	GetPosition
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	GetProperty
	Can't find lsh animation : 
	oob2PetrKabak1
	oob2PetrKabak2
	b2q03
	branch
	ui/NPC_Petr.png
	ui/NPC_Petr_b.png

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
	IsLoaded (1 args)
	RemoveActor (1 args)
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

RunOp = 0x193
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xea Vars = (int, int)
	GTASK_2 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x197 Vars = (string)
		EVENT_6 Op = 0x1ab Vars = ()
		EVENT_5 Op = 0x1b8 Vars = ()
		EVENT_7 Op = 0x201 Vars = (int)
		EVENT_45 Op = 0x243 Vars = (bool)
		EVENT_0 Op = 0x24f Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x2d8

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x471

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x46f

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x473

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x475

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x45e

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
0x31: Call2 0x3ec

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x32d

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
0x48: Call2 0x31c

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
0x56: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0x57: PushEmpty(bool)
0x58: Stack[-1] = (bool) 0
0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b: Call2 0x42e

0x5c: Pop(1)
0x5d: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x5e: PushEmpty(bool, object)
0x5f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x60: Call2 0x43a

0x61: Pop(1)
0x62: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x63: Stack[-1] = (bool) 1
0x64: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x65: PushEmpty(object, object)
0x66: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x67: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x68: Call2 0x422

0x69: Pop(2)
0x6a: PushEmpty(string)
0x6b: Stack[-1] = "Neutral"
0x6c: Call2 0xd4

0x6d: Pop(1)
0x6e: Push((int) 531057)
0x6f: @@ SetMessage(Stack[-1])
0x70: Pop(1)
0x71: @@ ClearReplies()
0x72: Pop(0)
0x73: Push((int) 531274)
0x74: Push((int) 32589)
0x75: Push((int) 32588)
0x76: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x77: Pop(3)
0x78: GOTO 0xb6

0x79: PushEmpty(bool)
0x7a: Stack[-1] = (bool) 0
0x7b: PushEmpty(bool, object)
0x7c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7d: Call2 0x452

0x7e: Pop(1)
0x7f: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x80: PushEmpty(bool, object)
0x81: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x82: Call2 0x446

0x83: Pop(1)
0x84: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x85: Stack[-1] = (bool) 1
0x86: IF (Stack[-1] == 0) GOTO 0xa0; Pop(1)

0x87: PushEmpty(object, object)
0x88: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x89: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8a: Call2 0x428

0x8b: Pop(2)
0x8c: PushEmpty(string)
0x8d: Stack[-1] = "Neutral"
0x8e: Call2 0xd4

0x8f: Pop(1)
0x90: Push((int) 531059)
0x91: @@ SetMessage(Stack[-1])
0x92: Pop(1)
0x93: @@ ClearReplies()
0x94: Pop(0)
0x95: Push((int) 531060)
0x96: Push((int) -1)
0x97: Push((int) 32386)
0x98: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x99: Pop(3)
0x9a: Push((int) 531242)
0x9b: Push((int) -1)
0x9c: Push((int) 32557)
0x9d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9e: Pop(3)
0x9f: GOTO 0xb6

0xa0: PushEmpty(string)
0xa1: Stack[-1] = "Untrust"
0xa2: Call2 0xd4

0xa3: Pop(1)
0xa4: Push((int) 531055)
0xa5: @@ SetMessage(Stack[-1])
0xa6: Pop(1)
0xa7: @@ ClearReplies()
0xa8: Pop(0)
0xa9: Push((int) 531056)
0xaa: Push((int) -1)
0xab: Push((int) 32382)
0xac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xad: Pop(3)
0xae: Push((int) 531241)
0xaf: Push((int) -1)
0xb0: Push((int) 32556)
0xb1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb2: Pop(3)
0xb3: GOTO 0xb6

0xb4: Return(); Pop(0)

0xb5: GOTO 0x55

0xb6: PushEmpty(bool)
0xb7: Call2 0x477

0xb8: Pop(0)
0xb9: IF (Stack[-1] == 0) GOTO 0xc5; Pop(1)

0xba: @ lshWaitForAnimEnd()
0xbb: Pop(0)
0xbc: Push( Stack[3 + Tasks[-1].StackPointer] )
0xbd: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xbe: GOTO 0xc4

0xbf: PushEmpty(string)
0xc0: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xc1: Call2 0x3b7

0xc2: Pop(1)
0xc3: GOTO 0xba

0xc4: GOTO 0xd3

0xc5: Push("all")
0xc6: Push("idle")
0xc7: @ PlayAnimation(Stack[-2], Stack[-1])
0xc8: Pop(2)
0xc9: @ WaitForAnimEnd()
0xca: Pop(0)
0xcb: Push( Stack[3 + Tasks[-1].StackPointer] )
0xcc: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xcd: GOTO 0xd3

0xce: Push("all")
0xcf: Push("idle")
0xd0: @ PlayAnimation(Stack[-2], Stack[-1])
0xd1: Pop(2)
0xd2: GOTO 0xc9

0xd3: Return(); Pop(0)

0xd4: PushEmpty()
0xd5: PushEmpty(bool)
0xd6: Call2 0x477

0xd7: Pop(0)
0xd8: Pop(1); Push((bool) Stack[-1] == 0)
0xd9: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xda: Return(); Pop(0)

0xdb: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xdc: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xdd: Return(); Pop(0)

0xde: PushEmpty(string, bool)
0xdf: Stack[-2] = Stack[-3]
0xe0: Push("")
0xe1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xe2: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xe3: Stack[-1] = (bool) 0
0xe4: GOTO 0xe6

0xe5: Stack[-1] = (bool) 1
0xe6: Call2 0x3c7

0xe7: Pop(2)
0xe8: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xe9: Return(); Pop(0)

0xea: PushEmpty()
0xeb: Push((int) 1)
0xec: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0xed: PushEmpty()
0xee: Call2 0x3e5

0xef: Pop(0)
0xf0: Push((int) 32383)
0xf1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf2: IF (Stack[-1] == 0) GOTO 0x150; Pop(1)

0xf3: PushEmpty(bool)
0xf4: Stack[-1] = (bool) 0
0xf5: PushEmpty(bool, object)
0xf6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf7: Call2 0x42e

0xf8: Pop(1)
0xf9: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xfa: PushEmpty(bool, object)
0xfb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xfc: Call2 0x43a

0xfd: Pop(1)
0xfe: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xff: Stack[-1] = (bool) 1
0x100: IF (Stack[-1] == 0) GOTO 0x115; Pop(1)

0x101: PushEmpty(object, object)
0x102: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x103: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x104: Call2 0x422

0x105: Pop(2)
0x106: PushEmpty(string)
0x107: Stack[-1] = "Neutral"
0x108: Call2 0xd4

0x109: Pop(1)
0x10a: Push((int) 531057)
0x10b: @@ SetMessage(Stack[-1])
0x10c: Pop(1)
0x10d: @@ ClearReplies()
0x10e: Pop(0)
0x10f: Push((int) 531274)
0x110: Push((int) 32589)
0x111: Push((int) 32588)
0x112: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x113: Pop(3)
0x114: Return(); Pop(0)

0x115: PushEmpty(bool)
0x116: Stack[-1] = (bool) 0
0x117: PushEmpty(bool, object)
0x118: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x119: Call2 0x452

0x11a: Pop(1)
0x11b: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x11c: PushEmpty(bool, object)
0x11d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x11e: Call2 0x446

0x11f: Pop(1)
0x120: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x121: Stack[-1] = (bool) 1
0x122: IF (Stack[-1] == 0) GOTO 0x13c; Pop(1)

0x123: PushEmpty(object, object)
0x124: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x125: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x126: Call2 0x428

0x127: Pop(2)
0x128: PushEmpty(string)
0x129: Stack[-1] = "Neutral"
0x12a: Call2 0xd4

0x12b: Pop(1)
0x12c: Push((int) 531059)
0x12d: @@ SetMessage(Stack[-1])
0x12e: Pop(1)
0x12f: @@ ClearReplies()
0x130: Pop(0)
0x131: Push((int) 531060)
0x132: Push((int) -1)
0x133: Push((int) 32386)
0x134: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x135: Pop(3)
0x136: Push((int) 531242)
0x137: Push((int) -1)
0x138: Push((int) 32557)
0x139: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13a: Pop(3)
0x13b: Return(); Pop(0)

0x13c: PushEmpty(string)
0x13d: Stack[-1] = "Untrust"
0x13e: Call2 0xd4

0x13f: Pop(1)
0x140: Push((int) 531055)
0x141: @@ SetMessage(Stack[-1])
0x142: Pop(1)
0x143: @@ ClearReplies()
0x144: Pop(0)
0x145: Push((int) 531056)
0x146: Push((int) -1)
0x147: Push((int) 32382)
0x148: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x149: Pop(3)
0x14a: Push((int) 531241)
0x14b: Push((int) -1)
0x14c: Push((int) 32556)
0x14d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14e: Pop(3)
0x14f: Return(); Pop(0)

0x150: Push((int) 32589)
0x151: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x152: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x153: PushEmpty(string)
0x154: Stack[-1] = "Autizm"
0x155: Call2 0xd4

0x156: Pop(1)
0x157: Push((int) 531275)
0x158: @@ SetMessage(Stack[-1])
0x159: Pop(1)
0x15a: @@ ClearReplies()
0x15b: Pop(0)
0x15c: Push((int) 531243)
0x15d: Push((int) 32559)
0x15e: Push((int) 32558)
0x15f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x160: Pop(3)
0x161: Push((int) 531058)
0x162: Push((int) -1)
0x163: Push((int) 32384)
0x164: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x165: Pop(3)
0x166: Return(); Pop(0)

0x167: Push((int) 32559)
0x168: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x169: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x16a: PushEmpty(string)
0x16b: Stack[-1] = "Autizm"
0x16c: Call2 0xd4

0x16d: Pop(1)
0x16e: Push((int) 531244)
0x16f: @@ SetMessage(Stack[-1])
0x170: Pop(1)
0x171: @@ ClearReplies()
0x172: Pop(0)
0x173: Push((int) 531245)
0x174: Push((int) -1)
0x175: Push((int) 32560)
0x176: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x177: Pop(3)
0x178: Push((int) 531246)
0x179: Push((int) -1)
0x17a: Push((int) 32561)
0x17b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17c: Pop(3)
0x17d: Return(); Pop(0)

0x17e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x17f: PushEmpty(bool)
0x180: Call2 0x477

0x181: Pop(0)
0x182: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x183: @ lshStopAnimation()
0x184: Pop(0)
0x185: GOTO 0x188

0x186: @ StopAnimation()
0x187: Pop(0)
0x188: Return(); Pop(0)

0x189: GOTO 0xeb

0x18a: Return(); Pop(0)

0x18b: PushEmpty()
0x18c: PushEmpty(int, object)
0x18d: Stack[-1] = Stack[-3]
0x18e: Push(-2, 1); TaskCall(0)
0x18f: Call2 0x0

0x190: Pop(-2, 1); TaskReturn
0x191: Pop(2)
0x192: Return(); Pop(0)

0x193: PushEmpty()
0x194: Call2 0x1bc

0x195: Pop(0)
0x196: Return(); Pop(0)

0x197: PushEmpty(bool, bool)
0x198: Push("cleanup")
0x199: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x19a: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x19b: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x19c: @ IsLoaded(Stack[-1])
0x19d: Pop(0)
0x19e: Pop(0); Push((bool) Stack[-1] == 0)
0x19f: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x1a0: PushEmpty(object)
0x1a1: Call2 0x3ec

0x1a2: Pop(0)
0x1a3: @ RemoveActor(Stack[-1])
0x1a4: Pop(1)
0x1a5: GOTO 0x1aa

0x1a6: Push("restore")
0x1a7: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1a8: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x1a9: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x1aa: Return(); Pop(2)

0x1ab: Push( Stack[1 + Tasks[-1].StackPointer] )
0x1ac: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1ad: PushEmpty(object)
0x1ae: Call2 0x3ec

0x1af: Pop(0)
0x1b0: @ RemoveActor(Stack[-1])
0x1b1: Pop(1)
0x1b2: @ Hold()
0x1b3: Pop(0)
0x1b4: PushEmpty()
0x1b5: Call2 0x227

0x1b6: Pop(0)
0x1b7: Return(); Pop(0)

0x1b8: PushEmpty()
0x1b9: Call2 0x236

0x1ba: Pop(0)
0x1bb: Return(); Pop(0)

0x1bc: PushEmpty(bool)
0x1bd: Call2 0x2d3

0x1be: Pop(0)
0x1bf: Pop(1); Push((bool) Stack[-1] == 0)
0x1c0: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x1c1: @ Hold()
0x1c2: Pop(0)
0x1c3: @ GetDirection(Stack[-0])
0x1c4: Pop(0)
0x1c5: PushEmpty()
0x1c6: Call2 0x26c

0x1c7: Pop(0)
0x1c8: GOTO 0x1c5

0x1c9: Return(); Pop(0)

0x1ca: PushEmpty(object, object)
0x1cb: Push("player")
0x1cc: @ FindActor(Stack[-2], Stack[-1])
0x1cd: Pop(1)
0x1ce: Pop(0); Push((bool) Stack[-1] == 0)
0x1cf: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1d0: Stack[-3] = (bool) 0
0x1d1: Return(); Pop(2)

0x1d2: PushEmpty(bool, object)
0x1d3: Stack[-1] = Stack[-3]
0x1d4: Call2 0x2ca

0x1d5: Stack[-5] = Stack[-2]
0x1d6: Pop(2)
0x1d7: Return(); Pop(2)

0x1d8: Stack[-1] = 0
0x1d9: Push(CvectorIndex(Stack[-0], 0))
0x1da: Push(CvectorIndex(Stack[-0], 2))
0x1db: @ RotateAsync(Stack[-2], Stack[-1])
0x1dc: Pop(2)
0x1dd: Return(); Pop(0)

0x1de: PushEmpty(object, bool, object, bool)
0x1df: Push("player")
0x1e0: @ FindActor(Stack[-3], Stack[-1])
0x1e1: Pop(1)
0x1e2: Pop(0); Push((bool) Stack[-2] == 0)
0x1e3: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1e4: Stack[-5] = (bool) 0
0x1e5: Return(); Pop(4)

0x1e6: PushEmpty(float, object)
0x1e7: Stack[-1] = Stack[-4]
0x1e8: Call2 0x2b8

0x1e9: Pop(1)
0x1ea: Push((float)90000.0)
0x1eb: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x1ec: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x1ed: Stack[-5] = (bool) 0
0x1ee: Return(); Pop(4)

0x1ef: @ CanSee(Stack[-1], Stack[-2])
0x1f0: Pop(0)
0x1f1: Stack[-5] = Stack[-1]
0x1f2: Return(); Pop(4)

0x1f3: Stack[-2] = 0
0x1f4: PushEmpty(float, float)
0x1f5: Push((int) 8)
0x1f6: Push((int) 16)
0x1f7: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x1f8: Pop(2)
0x1f9: Push((int) 10)
0x1fa: @ SetTimer(Stack[-1], Stack[-2])
0x1fb: Pop(1)
0x1fc: Return(); Pop(2)

0x1fd: Push((int) 10)
0x1fe: @ KillTimer(Stack[-1])
0x1ff: Pop(1)
0x200: Return(); Pop(0)

0x201: PushEmpty()
0x202: Push((int) 10)
0x203: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x204: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x205: PushEmpty()
0x206: Call2 0x1fd

0x207: Pop(0)
0x208: PushEmpty(bool)
0x209: Stack[-1] = (bool) 0
0x20a: PushEmpty(bool)
0x20b: Call2 0x2d3

0x20c: Pop(0)
0x20d: IF (Stack[-1] == 0) GOTO 0x213; Pop(1)

0x20e: PushEmpty(bool)
0x20f: Call2 0x1de

0x210: Pop(0)
0x211: IF (Stack[-1] == 0) GOTO 0x213; Pop(1)

0x212: Stack[-1] = (bool) 1
0x213: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x214: PushEmpty(bool)
0x215: Call2 0x1ca

0x216: Pop(0)
0x217: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0x218: PushEmpty(bool, object)
0x219: PushEmpty(object)
0x21a: Call2 0x3ec

0x21b: Stack[-2] = Stack[-1]
0x21c: Pop(1)
0x21d: Call2 0x367

0x21e: Pop(2)
0x21f: GOTO 0x226

0x220: PushEmpty()
0x221: Call2 0x1d9

0x222: Pop(0)
0x223: PushEmpty()
0x224: Call2 0x1f4

0x225: Pop(0)
0x226: Return(); Pop(0)

0x227: PushEmpty()
0x228: Call2 0x2b3

0x229: Pop(0)
0x22a: PushEmpty()
0x22b: Call2 0x1fd

0x22c: Pop(0)
0x22d: @ lshStopSpeech()
0x22e: Pop(0)
0x22f: @ lshStopAnimation()
0x230: Pop(0)
0x231: @ StopAsync()
0x232: Pop(0)
0x233: @ Hold()
0x234: Pop(0)
0x235: Return(); Pop(0)

0x236: @ StopGroup0()
0x237: Pop(0)
0x238: PushEmpty()
0x239: Call2 0x1fd

0x23a: Pop(0)
0x23b: PushEmpty(string)
0x23c: Stack[-1] = "Neutral"
0x23d: Call2 0x3b7

0x23e: Pop(1)
0x23f: PushEmpty()
0x240: Call2 0x1f4

0x241: Pop(0)
0x242: Return(); Pop(0)

0x243: PushEmpty()
0x244: Push(Stack[-1])
0x245: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x246: PushEmpty()
0x247: Call2 0x1f4

0x248: Pop(0)
0x249: GOTO 0x24e

0x24a: PushEmpty(string)
0x24b: Stack[-1] = "Neutral"
0x24c: Call2 0x3b7

0x24d: Pop(1)
0x24e: Return(); Pop(0)

0x24f: PushEmpty(bool, bool)
0x250: @ IsOverrideActive(Stack[-1])
0x251: Pop(0)
0x252: Pop(0); Push((bool) Stack[-1] == 0)
0x253: IF (Stack[-1] == 0) GOTO 0x26b; Pop(1)

0x254: EventDisable(0)
0x255: PushEmpty()
0x256: Call2 0x2b3

0x257: Pop(0)
0x258: PushEmpty(bool, object)
0x259: Stack[-1] = Stack[-5]
0x25a: Call2 0x2ca

0x25b: Pop(2)
0x25c: EventEnable(0)
0x25d: PushEmpty(object)
0x25e: Stack[-1] = Stack[-4]
0x25f: Call2 0x18b

0x260: Pop(1)
0x261: PushEmpty(string)
0x262: Stack[-1] = "Neutral"
0x263: Call2 0x3b7

0x264: Pop(1)
0x265: PushEmpty()
0x266: Call2 0x1fd

0x267: Pop(0)
0x268: PushEmpty()
0x269: Call2 0x1f4

0x26a: Pop(0)
0x26b: Return(); Pop(2)

0x26c: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x26d: @ WaitForAnimEnd()
0x26e: Pop(0)
0x26f: PushEmpty(bool)
0x270: Call2 0x2d3

0x271: Pop(0)
0x272: Pop(1); Push((bool) Stack[-1] == 0)
0x273: IF (Stack[-1] == 0) GOTO 0x275; Pop(1)

0x274: Return(); Pop(12)

0x275: PushEmpty(int)
0x276: Call2 0x411

0x277: Stack[-7] = Stack[-1]
0x278: Pop(1)
0x279: Stack[-5] = (int) 0
0x27a: PushEmpty(bool)
0x27b: Stack[-1] = (bool) 0
0x27c: Push((int) 5)
0x27d: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x27e: IF (Stack[-1] == 0) GOTO 0x284; Pop(1)

0x27f: PushEmpty(bool)
0x280: Call2 0x2d3

0x281: Pop(0)
0x282: IF (Stack[-1] == 0) GOTO 0x284; Pop(1)

0x283: Stack[-1] = (bool) 1
0x284: IF (Stack[-1] == 0) GOTO 0x2ae; Pop(1)

0x285: Pop(0); Push((bool) Stack[-6] == 0)
0x286: IF (Stack[-1] == 0) GOTO 0x28e; Pop(1)

0x287: Push((int) 3)
0x288: @ Sleep(Stack[-1], Stack[-5])
0x289: Pop(1)
0x28a: Pop(0); Push((bool) Stack[-4] == 0)
0x28b: IF (Stack[-1] == 0) GOTO 0x28d; Pop(1)

0x28c: GOTO 0x2ae

0x28d: GOTO 0x2a3

0x28e: @ irand(Stack[-3], Stack[-6])
0x28f: Pop(0)
0x290: Push((int) 5)
0x291: @ irand(Stack[-3], Stack[-1])
0x292: Pop(1)
0x293: Push((int) 0)
0x294: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x295: IF (Stack[-1] == 0) GOTO 0x297; Pop(1)

0x296: Stack[-3] = (int) 0
0x297: Push("all")
0x298: PushEmpty(string, int)
0x299: Stack[-1] = Stack[-6]
0x29a: Call2 0x40a

0x29b: Pop(1)
0x29c: @ PlayAnimation(Stack[-2], Stack[-1])
0x29d: Pop(2)
0x29e: @ WaitForAnimEnd(Stack[-1])
0x29f: Pop(0)
0x2a0: Pop(0); Push((bool) Stack[-1] == 0)
0x2a1: IF (Stack[-1] == 0) GOTO 0x2a3; Pop(1)

0x2a2: GOTO 0x2ae

0x2a3: PushEmpty(bool)
0x2a4: Call2 0x2b1

0x2a5: Pop(0)
0x2a6: Pop(1); Push((bool) Stack[-1] == 0)
0x2a7: IF (Stack[-1] == 0) GOTO 0x2a9; Pop(1)

0x2a8: GOTO 0x2ae

0x2a9: @ ResetAAS()
0x2aa: Pop(0)
0x2ab: Push((int) 1)
0x2ac: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x2ad: GOTO 0x27a

0x2ae: @ ResetAAS()
0x2af: Pop(0)
0x2b0: Return(); Pop(12)

0x2b1: Stack[-1] = (bool) 1
0x2b2: Return(); Pop(0)

0x2b3: @ StopAnimation()
0x2b4: Pop(0)
0x2b5: @ StopGroup0()
0x2b6: Pop(0)
0x2b7: Return(); Pop(0)

0x2b8: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x2b9: @ GetPosition(Stack[-3])
0x2ba: Pop(0)
0x2bb: @@ GetPosition(Stack[-2])
0x2bc: Pop(0)
0x2bd: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x2be: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x2bf: Return(); Pop(6)

0x2c0: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x2c1: @ GetPosition(Stack[-3])
0x2c2: Pop(0)
0x2c3: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x2c4: Push(CvectorIndex(Stack[-2], 0))
0x2c5: Push(CvectorIndex(Stack[-3], 2))
0x2c6: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x2c7: Pop(2)
0x2c8: Stack[-8] = Stack[-1]
0x2c9: Return(); Pop(6)

0x2ca: PushEmpty(cvector, cvector)
0x2cb: @@ GetPosition(Stack[-1])
0x2cc: Pop(0)
0x2cd: PushEmpty(bool, cvector)
0x2ce: Stack[-1] = Stack[-3]
0x2cf: Call2 0x2c0

0x2d0: Stack[-6] = Stack[-2]
0x2d1: Pop(2)
0x2d2: Return(); Pop(2)

0x2d3: PushEmpty(bool, bool)
0x2d4: @ IsLoaded(Stack[-1])
0x2d5: Pop(0)
0x2d6: Stack[-3] = Stack[-1]
0x2d7: Return(); Pop(2)

0x2d8: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x2d9: @@ GetPosition(Stack[-8])
0x2da: Pop(0)
0x2db: @@ GetEyesHeight(Stack[-9])
0x2dc: Pop(0)
0x2dd: Push(CvectorIndex(Stack[-8], 1))
0x2de: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2df: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2e0: @ GetPosition(Stack[-7])
0x2e1: Pop(0)
0x2e2: @ GetEyesHeight(Stack[-9])
0x2e3: Pop(0)
0x2e4: Push(CvectorIndex(Stack[-7], 1))
0x2e5: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2e6: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2e7: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2e8: Push(CvectorIndex(Stack[-6], 1))
0x2e9: Stack[-1] = (int) 0
0x2ea: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2eb: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2ec: Pop(1); Push(Sqrt(Stack[-1]))
0x2ed: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2ee: Stack[-5] = -Stack[-6]; Pop(0);
0x2ef: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2f0: PushEmpty(cvector, cvector)
0x2f1: Push(CVector(0.0, 1.0, 0.0))
0x2f2: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2f3: Call2 0x3f2

0x2f4: Pop(1)
0x2f5: Push((int) 25)
0x2f6: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2f7: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2f8: Push(CVector(0.0, 10.0, 0.0))
0x2f9: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2fa: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2fb: @ IsOverrideActive(Stack[-2])
0x2fc: Pop(0)
0x2fd: Push(Stack[-2])
0x2fe: IF (Stack[-1] == 0) GOTO 0x301; Pop(1)

0x2ff: Stack[-21] = (bool) 0
0x300: Return(); Pop(18)

0x301: @ StopWorld()
0x302: Pop(0)
0x303: @ CameraTransit(Stack[-3], Stack[-5])
0x304: Pop(0)
0x305: Push(CvectorIndex(Stack[-4], 0))
0x306: Push(CvectorIndex(Stack[-5], 2))
0x307: @ Rotate(Stack[-2], Stack[-1])
0x308: Pop(2)
0x309: PushEmpty(bool)
0x30a: Call2 0x477

0x30b: Pop(0)
0x30c: IF (Stack[-1] == 0) GOTO 0x30e; Pop(1)

0x30d: GOTO 0x316

0x30e: Push("head")
0x30f: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x310: Pop(1)
0x311: Push(Stack[-1])
0x312: IF (Stack[-1] == 0) GOTO 0x316; Pop(1)

0x313: Push("head")
0x314: @ LookAsyncCamera(Stack[-1])
0x315: Pop(1)
0x316: @ CameraWaitForPlayFinish()
0x317: Pop(0)
0x318: @ ResumeWorld()
0x319: Pop(0)
0x31a: Stack[-21] = (bool) 1
0x31b: Return(); Pop(18)

0x31c: PushEmpty(bool, bool)
0x31d: @ CameraSwitchToNormal()
0x31e: Pop(0)
0x31f: PushEmpty(bool)
0x320: Call2 0x477

0x321: Pop(0)
0x322: IF (Stack[-1] == 0) GOTO 0x324; Pop(1)

0x323: GOTO 0x32c

0x324: Push("head")
0x325: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x326: Pop(1)
0x327: Push(Stack[-1])
0x328: IF (Stack[-1] == 0) GOTO 0x32c; Pop(1)

0x329: Push("head")
0x32a: @ UnlookAsync(Stack[-1])
0x32b: Pop(1)
0x32c: Return(); Pop(2)

0x32d: PushEmpty(int, int, int, int)
0x32e: Push("voice_common")
0x32f: @ GetVariable(Stack[-1], Stack[-3])
0x330: Pop(1)
0x331: Push(Stack[-2])
0x332: IF (Stack[-1] == 0) GOTO 0x353; Pop(1)

0x333: PushEmpty(bool, object)
0x334: Stack[-1] = Stack[-7]
0x335: Call2 0x367

0x336: Pop(1)
0x337: Pop(1); Push((bool) Stack[-1] == 0)
0x338: IF (Stack[-1] == 0) GOTO 0x341; Pop(1)

0x339: PushEmpty(bool, object)
0x33a: Stack[-1] = Stack[-7]
0x33b: Call2 0x38c

0x33c: Pop(1)
0x33d: Pop(1); Push((bool) Stack[-1] == 0)
0x33e: IF (Stack[-1] == 0) GOTO 0x341; Pop(1)

0x33f: Stack[-6] = (bool) 0
0x340: Return(); Pop(4)

0x341: Push((int) 2)
0x342: @ irand(Stack[-2], Stack[-1])
0x343: Pop(1)
0x344: Push(Stack[-1])
0x345: IF (Stack[-1] == 0) GOTO 0x34e; Pop(1)

0x346: Push("voice_common")
0x347: Push((int) 1)
0x348: Pop(1); Push(Stack[-4] + Stack[-1]);
0x349: Push((int) 3)
0x34a: Pop(2); Push(Stack[-2] % Stack[-1]);
0x34b: @ SetVariable(Stack[-2], Stack[-1])
0x34c: Pop(2)
0x34d: GOTO 0x352

0x34e: Push("voice_common")
0x34f: Push((int) 0)
0x350: @ SetVariable(Stack[-2], Stack[-1])
0x351: Pop(2)
0x352: GOTO 0x365

0x353: PushEmpty(bool, object)
0x354: Stack[-1] = Stack[-7]
0x355: Call2 0x38c

0x356: Pop(1)
0x357: Pop(1); Push((bool) Stack[-1] == 0)
0x358: IF (Stack[-1] == 0) GOTO 0x361; Pop(1)

0x359: PushEmpty(bool, object)
0x35a: Stack[-1] = Stack[-7]
0x35b: Call2 0x367

0x35c: Pop(1)
0x35d: Pop(1); Push((bool) Stack[-1] == 0)
0x35e: IF (Stack[-1] == 0) GOTO 0x361; Pop(1)

0x35f: Stack[-6] = (bool) 0
0x360: Return(); Pop(4)

0x361: Push("voice_common")
0x362: Push((int) 1)
0x363: @ SetVariable(Stack[-2], Stack[-1])
0x364: Pop(2)
0x365: Stack[-6] = (bool) 1
0x366: Return(); Pop(4)

0x367: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x368: Stack[-5] = "c"
0x369: Stack[-4] = (int) 0
0x36a: Push((int) 1)
0x36b: IF (Stack[-1] == 0) GOTO 0x377; Pop(1)

0x36c: Push((int) 1)
0x36d: Pop(1); Push(Stack[-5] + Stack[-1]);
0x36e: Pop(1); Push(Stack[-6] + Stack[-1]);
0x36f: @@ HasProperty(Stack[-1], Stack[-4])
0x370: Pop(1)
0x371: Pop(0); Push((bool) Stack[-3] == 0)
0x372: IF (Stack[-1] == 0) GOTO 0x374; Pop(1)

0x373: GOTO 0x377

0x374: Push((int) 1)
0x375: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x376: GOTO 0x36a

0x377: Pop(0); Push((bool) Stack[-4] == 0)
0x378: IF (Stack[-1] == 0) GOTO 0x37b; Pop(1)

0x379: Stack[-12] = (bool) 0
0x37a: Return(); Pop(10)

0x37b: Stack[-2] = (int) 0
0x37c: Push((int) 1)
0x37d: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x37e: IF (Stack[-1] == 0) GOTO 0x381; Pop(1)

0x37f: @ irand(Stack[-2], Stack[-4])
0x380: Pop(0)
0x381: Push((int) 1)
0x382: Pop(1); Push(Stack[-3] + Stack[-1]);
0x383: Pop(1); Push(Stack[-6] + Stack[-1]);
0x384: @@ GetProperty(Stack[-1], Stack[-2])
0x385: Pop(1)
0x386: PushEmpty(bool, string)
0x387: Stack[-1] = Stack[-3]
0x388: Call2 0x3d6

0x389: Stack[-14] = Stack[-2]
0x38a: Pop(2)
0x38b: Return(); Pop(10)

0x38c: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x38d: Push("d")
0x38e: PushEmpty(int)
0x38f: Call2 0x401

0x390: Pop(0)
0x391: Pop(2); Push(Stack[-2] + Stack[-1]);
0x392: Push("m")
0x393: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x394: Stack[-4] = (int) 0
0x395: Push((int) 1)
0x396: IF (Stack[-1] == 0) GOTO 0x3a2; Pop(1)

0x397: Push((int) 1)
0x398: Pop(1); Push(Stack[-5] + Stack[-1]);
0x399: Pop(1); Push(Stack[-6] + Stack[-1]);
0x39a: @@ HasProperty(Stack[-1], Stack[-4])
0x39b: Pop(1)
0x39c: Pop(0); Push((bool) Stack[-3] == 0)
0x39d: IF (Stack[-1] == 0) GOTO 0x39f; Pop(1)

0x39e: GOTO 0x3a2

0x39f: Push((int) 1)
0x3a0: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3a1: GOTO 0x395

0x3a2: Pop(0); Push((bool) Stack[-4] == 0)
0x3a3: IF (Stack[-1] == 0) GOTO 0x3a6; Pop(1)

0x3a4: Stack[-12] = (bool) 0
0x3a5: Return(); Pop(10)

0x3a6: Stack[-2] = (int) 0
0x3a7: Push((int) 1)
0x3a8: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x3a9: IF (Stack[-1] == 0) GOTO 0x3ac; Pop(1)

0x3aa: @ irand(Stack[-2], Stack[-4])
0x3ab: Pop(0)
0x3ac: Push((int) 1)
0x3ad: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3ae: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3af: @@ GetProperty(Stack[-1], Stack[-2])
0x3b0: Pop(1)
0x3b1: PushEmpty(bool, string)
0x3b2: Stack[-1] = Stack[-3]
0x3b3: Call2 0x3d6

0x3b4: Stack[-14] = Stack[-2]
0x3b5: Pop(2)
0x3b6: Return(); Pop(10)

0x3b7: PushEmpty(bool, float, float, bool, float, float)
0x3b8: @ lshHasAnimation(Stack[-3], Stack[-7])
0x3b9: Pop(0)
0x3ba: Push(Stack[-3])
0x3bb: IF (Stack[-1] == 0) GOTO 0x3c2; Pop(1)

0x3bc: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x3bd: Pop(0)
0x3be: Push((bool) 0)
0x3bf: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3c0: Pop(1)
0x3c1: GOTO 0x3c6

0x3c2: Push("Can't find lsh animation : ")
0x3c3: Pop(1); Push(Stack[-1] + Stack[-8]);
0x3c4: @ Trace(Stack[-1])
0x3c5: Pop(1)
0x3c6: Return(); Pop(6)

0x3c7: PushEmpty(bool, float, float, bool, float, float)
0x3c8: @ lshHasAnimation(Stack[-3], Stack[-8])
0x3c9: Pop(0)
0x3ca: Push(Stack[-3])
0x3cb: IF (Stack[-1] == 0) GOTO 0x3d1; Pop(1)

0x3cc: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x3cd: Pop(0)
0x3ce: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x3cf: Pop(0)
0x3d0: GOTO 0x3d5

0x3d1: Push("Can't find lsh animation : ")
0x3d2: Pop(1); Push(Stack[-1] + Stack[-9]);
0x3d3: @ Trace(Stack[-1])
0x3d4: Pop(1)
0x3d5: Return(); Pop(6)

0x3d6: PushEmpty(bool, bool)
0x3d7: PushEmpty(bool)
0x3d8: Call2 0x477

0x3d9: Pop(0)
0x3da: IF (Stack[-1] == 0) GOTO 0x3e3; Pop(1)

0x3db: @ lshHasSpeech(Stack[-1], Stack[-3])
0x3dc: Pop(0)
0x3dd: Push(Stack[-1])
0x3de: IF (Stack[-1] == 0) GOTO 0x3e3; Pop(1)

0x3df: @ lshPlaySpeech(Stack[-3])
0x3e0: Pop(0)
0x3e1: Stack[-4] = (bool) 1
0x3e2: Return(); Pop(2)

0x3e3: Stack[-4] = (bool) 0
0x3e4: Return(); Pop(2)

0x3e5: PushEmpty(bool)
0x3e6: Call2 0x477

0x3e7: Pop(0)
0x3e8: IF (Stack[-1] == 0) GOTO 0x3eb; Pop(1)

0x3e9: @ lshStopSpeech()
0x3ea: Pop(0)
0x3eb: Return(); Pop(0)

0x3ec: PushEmpty(object, object)
0x3ed: @ self(Stack[-1])
0x3ee: Pop(0)
0x3ef: Stack[-3] = Stack[-1]
0x3f0: Return(); Pop(2)

0x3f1: Stack[-1] = 0
0x3f2: PushEmpty(float, float)
0x3f3: Pop(0); Push(Stack[-3] | Stack[-3]);
0x3f4: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x3f5: Push((float)0.0)
0x3f6: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3f7: IF (Stack[-1] == 0) GOTO 0x3fa; Pop(1)

0x3f8: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x3f9: Return(); Pop(2)

0x3fa: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x3fb: Return(); Pop(2)

0x3fc: PushEmpty(int, int)
0x3fd: @ GetVariable(Stack[-3], Stack[-1])
0x3fe: Pop(0)
0x3ff: Stack[-4] = Stack[-1]
0x400: Return(); Pop(2)

0x401: PushEmpty(float, float)
0x402: @ GetGameTime(Stack[-1])
0x403: Pop(0)
0x404: Push((int) 1)
0x405: PushEmpty(int)
0x406: Push((int) 24)
0x407: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x408: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x409: Return(); Pop(2)

0x40a: PushEmpty(string, string)
0x40b: Stack[-1] = "idle"
0x40c: Push(Stack[-3])
0x40d: IF (Stack[-1] == 0) GOTO 0x40f; Pop(1)

0x40e: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x40f: Stack[-4] = Stack[-1]
0x410: Return(); Pop(2)

0x411: PushEmpty(int, bool, int, bool)
0x412: Stack[-2] = (int) 0
0x413: Push("all")
0x414: PushEmpty(string, int)
0x415: Stack[-1] = Stack[-5]
0x416: Call2 0x40a

0x417: Pop(1)
0x418: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x419: Pop(2)
0x41a: Pop(0); Push((bool) Stack[-1] == 0)
0x41b: IF (Stack[-1] == 0) GOTO 0x41d; Pop(1)

0x41c: GOTO 0x420

0x41d: Push((int) 1)
0x41e: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x41f: GOTO 0x413

0x420: Stack[-5] = Stack[-2]
0x421: Return(); Pop(4)

0x422: PushEmpty()
0x423: Push("oob2PetrKabak1")
0x424: Push((int) 1)
0x425: @ SetVariable(Stack[-2], Stack[-1])
0x426: Pop(2)
0x427: Return(); Pop(0)

0x428: PushEmpty()
0x429: Push("oob2PetrKabak2")
0x42a: Push((int) 1)
0x42b: @ SetVariable(Stack[-2], Stack[-1])
0x42c: Pop(2)
0x42d: Return(); Pop(0)

0x42e: PushEmpty()
0x42f: PushEmpty(int, string)
0x430: Stack[-1] = "b2q03"
0x431: Call2 0x3fc

0x432: Pop(1)
0x433: Push((int) 1)
0x434: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x435: IF (Stack[-1] == 0) GOTO 0x438; Pop(1)

0x436: Stack[-2] = (bool) 1
0x437: Return(); Pop(0)

0x438: Stack[-2] = (bool) 0
0x439: Return(); Pop(0)

0x43a: PushEmpty()
0x43b: PushEmpty(int, string)
0x43c: Stack[-1] = "oob2PetrKabak1"
0x43d: Call2 0x3fc

0x43e: Pop(1)
0x43f: Push((int) 0)
0x440: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x441: IF (Stack[-1] == 0) GOTO 0x444; Pop(1)

0x442: Stack[-2] = (bool) 1
0x443: Return(); Pop(0)

0x444: Stack[-2] = (bool) 0
0x445: Return(); Pop(0)

0x446: PushEmpty()
0x447: PushEmpty(int, string)
0x448: Stack[-1] = "oob2PetrKabak2"
0x449: Call2 0x3fc

0x44a: Pop(1)
0x44b: Push((int) 0)
0x44c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x44d: IF (Stack[-1] == 0) GOTO 0x450; Pop(1)

0x44e: Stack[-2] = (bool) 1
0x44f: Return(); Pop(0)

0x450: Stack[-2] = (bool) 0
0x451: Return(); Pop(0)

0x452: PushEmpty()
0x453: PushEmpty(int, string)
0x454: Stack[-1] = "b2q03"
0x455: Call2 0x3fc

0x456: Pop(1)
0x457: Push((int) 1000)
0x458: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x459: IF (Stack[-1] == 0) GOTO 0x45c; Pop(1)

0x45a: Stack[-2] = (bool) 1
0x45b: Return(); Pop(0)

0x45c: Stack[-2] = (bool) 0
0x45d: Return(); Pop(0)

0x45e: PushEmpty(int, int)
0x45f: Push("branch")
0x460: @ GetVariable(Stack[-1], Stack[-2])
0x461: Pop(1)
0x462: Push((int) 0)
0x463: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x464: IF (Stack[-1] == 0) GOTO 0x468; Pop(1)

0x465: Stack[-3] = (int) 1
0x466: Return(); Pop(2)

0x467: GOTO 0x46d

0x468: Push((int) 1)
0x469: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x46a: IF (Stack[-1] == 0) GOTO 0x46d; Pop(1)

0x46b: Stack[-3] = (int) 2
0x46c: Return(); Pop(2)

0x46d: Stack[-3] = (int) 3
0x46e: Return(); Pop(2)

0x46f: Stack[-1] = (int) 515550
0x470: Return(); Pop(0)

0x471: Stack[-1] = (int) 502875
0x472: Return(); Pop(0)

0x473: Stack[-1] = "ui/NPC_Petr.png"
0x474: Return(); Pop(0)

0x475: Stack[-1] = "ui/NPC_Petr_b.png"
0x476: Return(); Pop(0)

0x477: Stack[-1] = (bool) 1
0x478: Return(); Pop(0)

