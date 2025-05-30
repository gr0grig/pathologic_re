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
	Azart
	SetMessage
	ClearReplies
	AddReply
	Neutral
	all
	idle
	Serious
	Fear
	Secret
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
	m
	Can't find lsh animation : 
	ui/NPC_Spi4ka.png
	ui/NPC_Spi4ka_b.png
	oob9Spi4ka_Kapella1
	branch

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

RunOp = 0x1a6
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xba Vars = (int, int)
	GTASK_2 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x1aa Vars = (string)
		EVENT_6 Op = 0x1be Vars = ()
		EVENT_5 Op = 0x1cb Vars = ()
		EVENT_7 Op = 0x214 Vars = (int)
		EVENT_45 Op = 0x256 Vars = (bool)
		EVENT_0 Op = 0x262 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x2eb

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x437

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x435

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x439

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x43b

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x451

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
0x31: Call2 0x3ff

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x340

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
0x48: Call2 0x32f

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
0x56: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x445

0x5a: Pop(1)
0x5b: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x5c: PushEmpty(object, object)
0x5d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5f: Call2 0x43f

0x60: Pop(2)
0x61: PushEmpty(string)
0x62: Stack[-1] = "Azart"
0x63: Call2 0xa4

0x64: Pop(1)
0x65: Push((int) 530337)
0x66: @@ SetMessage(Stack[-1])
0x67: Pop(1)
0x68: @@ ClearReplies()
0x69: Pop(0)
0x6a: Push((int) 530338)
0x6b: Push((int) 32415)
0x6c: Push((int) 31725)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: Push((int) 531096)
0x70: Push((int) 32418)
0x71: Push((int) 32414)
0x72: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73: Pop(3)
0x74: GOTO 0x86

0x75: PushEmpty(string)
0x76: Stack[-1] = "Neutral"
0x77: Call2 0xa4

0x78: Pop(1)
0x79: Push((int) 530341)
0x7a: @@ SetMessage(Stack[-1])
0x7b: Pop(1)
0x7c: @@ ClearReplies()
0x7d: Pop(0)
0x7e: Push((int) 530342)
0x7f: Push((int) -1)
0x80: Push((int) 31729)
0x81: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82: Pop(3)
0x83: GOTO 0x86

0x84: Return(); Pop(0)

0x85: GOTO 0x55

0x86: PushEmpty(bool)
0x87: Call2 0x43d

0x88: Pop(0)
0x89: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x8a: @ lshWaitForAnimEnd()
0x8b: Pop(0)
0x8c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8d: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x8e: GOTO 0x94

0x8f: PushEmpty(string)
0x90: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x91: Call2 0x3ca

0x92: Pop(1)
0x93: GOTO 0x8a

0x94: GOTO 0xa3

0x95: Push("all")
0x96: Push("idle")
0x97: @ PlayAnimation(Stack[-2], Stack[-1])
0x98: Pop(2)
0x99: @ WaitForAnimEnd()
0x9a: Pop(0)
0x9b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9c: IF (Stack[-1] == 0) GOTO 0x9e; Pop(1)

0x9d: GOTO 0xa3

0x9e: Push("all")
0x9f: Push("idle")
0xa0: @ PlayAnimation(Stack[-2], Stack[-1])
0xa1: Pop(2)
0xa2: GOTO 0x99

0xa3: Return(); Pop(0)

0xa4: PushEmpty()
0xa5: PushEmpty(bool)
0xa6: Call2 0x43d

0xa7: Pop(0)
0xa8: Pop(1); Push((bool) Stack[-1] == 0)
0xa9: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xaa: Return(); Pop(0)

0xab: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xac: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xad: Return(); Pop(0)

0xae: PushEmpty(string, bool)
0xaf: Stack[-2] = Stack[-3]
0xb0: Push("")
0xb1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb2: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xb3: Stack[-1] = (bool) 0
0xb4: GOTO 0xb6

0xb5: Stack[-1] = (bool) 1
0xb6: Call2 0x3da

0xb7: Pop(2)
0xb8: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb9: Return(); Pop(0)

0xba: PushEmpty()
0xbb: Push((int) 1)
0xbc: IF (Stack[-1] == 0) GOTO 0x19d; Pop(1)

0xbd: PushEmpty()
0xbe: Call2 0x3f8

0xbf: Pop(0)
0xc0: Push((int) 31724)
0xc1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc2: IF (Stack[-1] == 0) GOTO 0xf0; Pop(1)

0xc3: PushEmpty(bool, object)
0xc4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc5: Call2 0x445

0xc6: Pop(1)
0xc7: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xc8: PushEmpty(object, object)
0xc9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xca: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcb: Call2 0x43f

0xcc: Pop(2)
0xcd: PushEmpty(string)
0xce: Stack[-1] = "Azart"
0xcf: Call2 0xa4

0xd0: Pop(1)
0xd1: Push((int) 530337)
0xd2: @@ SetMessage(Stack[-1])
0xd3: Pop(1)
0xd4: @@ ClearReplies()
0xd5: Pop(0)
0xd6: Push((int) 530338)
0xd7: Push((int) 32415)
0xd8: Push((int) 31725)
0xd9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xda: Pop(3)
0xdb: Push((int) 531096)
0xdc: Push((int) 32418)
0xdd: Push((int) 32414)
0xde: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdf: Pop(3)
0xe0: Return(); Pop(0)

0xe1: PushEmpty(string)
0xe2: Stack[-1] = "Neutral"
0xe3: Call2 0xa4

0xe4: Pop(1)
0xe5: Push((int) 530341)
0xe6: @@ SetMessage(Stack[-1])
0xe7: Pop(1)
0xe8: @@ ClearReplies()
0xe9: Pop(0)
0xea: Push((int) 530342)
0xeb: Push((int) -1)
0xec: Push((int) 31729)
0xed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xee: Pop(3)
0xef: Return(); Pop(0)

0xf0: Push((int) 32418)
0xf1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf2: IF (Stack[-1] == 0) GOTO 0x107; Pop(1)

0xf3: PushEmpty(string)
0xf4: Stack[-1] = "Azart"
0xf5: Call2 0xa4

0xf6: Pop(1)
0xf7: Push((int) 531100)
0xf8: @@ SetMessage(Stack[-1])
0xf9: Pop(1)
0xfa: @@ ClearReplies()
0xfb: Pop(0)
0xfc: Push((int) 531101)
0xfd: Push((int) -1)
0xfe: Push((int) 32419)
0xff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x100: Pop(3)
0x101: Push((int) 531102)
0x102: Push((int) 31726)
0x103: Push((int) 32420)
0x104: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x105: Pop(3)
0x106: Return(); Pop(0)

0x107: Push((int) 31726)
0x108: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x109: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0x10a: PushEmpty(string)
0x10b: Stack[-1] = "Serious"
0x10c: Call2 0xa4

0x10d: Pop(1)
0x10e: Push((int) 530339)
0x10f: @@ SetMessage(Stack[-1])
0x110: Pop(1)
0x111: @@ ClearReplies()
0x112: Pop(0)
0x113: Push((int) 531202)
0x114: Push((int) 32518)
0x115: Push((int) 32511)
0x116: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x117: Pop(3)
0x118: Push((int) 530340)
0x119: Push((int) -1)
0x11a: Push((int) 31727)
0x11b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11c: Pop(3)
0x11d: Return(); Pop(0)

0x11e: Push((int) 32518)
0x11f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x120: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0x121: PushEmpty(string)
0x122: Stack[-1] = "Serious"
0x123: Call2 0xa4

0x124: Pop(1)
0x125: Push((int) 531208)
0x126: @@ SetMessage(Stack[-1])
0x127: Pop(1)
0x128: @@ ClearReplies()
0x129: Pop(0)
0x12a: Push((int) 531209)
0x12b: Push((int) -1)
0x12c: Push((int) 32519)
0x12d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12e: Pop(3)
0x12f: Push((int) 531210)
0x130: Push((int) 32521)
0x131: Push((int) 32520)
0x132: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x133: Pop(3)
0x134: Return(); Pop(0)

0x135: Push((int) 32521)
0x136: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x137: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x138: PushEmpty(string)
0x139: Stack[-1] = "Fear"
0x13a: Call2 0xa4

0x13b: Pop(1)
0x13c: Push((int) 531211)
0x13d: @@ SetMessage(Stack[-1])
0x13e: Pop(1)
0x13f: @@ ClearReplies()
0x140: Pop(0)
0x141: Push((int) 531212)
0x142: Push((int) -1)
0x143: Push((int) 32522)
0x144: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x145: Pop(3)
0x146: Push((int) 531213)
0x147: Push((int) -1)
0x148: Push((int) 32523)
0x149: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14a: Pop(3)
0x14b: Return(); Pop(0)

0x14c: Push((int) 32415)
0x14d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14e: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x14f: PushEmpty(string)
0x150: Stack[-1] = "Azart"
0x151: Call2 0xa4

0x152: Pop(1)
0x153: Push((int) 531097)
0x154: @@ SetMessage(Stack[-1])
0x155: Pop(1)
0x156: @@ ClearReplies()
0x157: Pop(0)
0x158: Push((int) 531098)
0x159: Push((int) 32417)
0x15a: Push((int) 32416)
0x15b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15c: Pop(3)
0x15d: Push((int) 531207)
0x15e: Push((int) 32417)
0x15f: Push((int) 32516)
0x160: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x161: Pop(3)
0x162: Return(); Pop(0)

0x163: Push((int) 32417)
0x164: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x165: IF (Stack[-1] == 0) GOTO 0x17a; Pop(1)

0x166: PushEmpty(string)
0x167: Stack[-1] = "Secret"
0x168: Call2 0xa4

0x169: Pop(1)
0x16a: Push((int) 531099)
0x16b: @@ SetMessage(Stack[-1])
0x16c: Pop(1)
0x16d: @@ ClearReplies()
0x16e: Pop(0)
0x16f: Push((int) 531103)
0x170: Push((int) 32512)
0x171: Push((int) 32421)
0x172: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x173: Pop(3)
0x174: Push((int) 531206)
0x175: Push((int) -1)
0x176: Push((int) 32515)
0x177: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x178: Pop(3)
0x179: Return(); Pop(0)

0x17a: Push((int) 32512)
0x17b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17c: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x17d: PushEmpty(string)
0x17e: Stack[-1] = "Secret"
0x17f: Call2 0xa4

0x180: Pop(1)
0x181: Push((int) 531203)
0x182: @@ SetMessage(Stack[-1])
0x183: Pop(1)
0x184: @@ ClearReplies()
0x185: Pop(0)
0x186: Push((int) 531204)
0x187: Push((int) -1)
0x188: Push((int) 32513)
0x189: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18a: Pop(3)
0x18b: Push((int) 531205)
0x18c: Push((int) -1)
0x18d: Push((int) 32514)
0x18e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18f: Pop(3)
0x190: Return(); Pop(0)

0x191: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x192: PushEmpty(bool)
0x193: Call2 0x43d

0x194: Pop(0)
0x195: IF (Stack[-1] == 0) GOTO 0x199; Pop(1)

0x196: @ lshStopAnimation()
0x197: Pop(0)
0x198: GOTO 0x19b

0x199: @ StopAnimation()
0x19a: Pop(0)
0x19b: Return(); Pop(0)

0x19c: GOTO 0xbb

0x19d: Return(); Pop(0)

0x19e: PushEmpty()
0x19f: PushEmpty(int, object)
0x1a0: Stack[-1] = Stack[-3]
0x1a1: Push(-2, 1); TaskCall(0)
0x1a2: Call2 0x0

0x1a3: Pop(-2, 1); TaskReturn
0x1a4: Pop(2)
0x1a5: Return(); Pop(0)

0x1a6: PushEmpty()
0x1a7: Call2 0x1cf

0x1a8: Pop(0)
0x1a9: Return(); Pop(0)

0x1aa: PushEmpty(bool, bool)
0x1ab: Push("cleanup")
0x1ac: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1ad: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1ae: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x1af: @ IsLoaded(Stack[-1])
0x1b0: Pop(0)
0x1b1: Pop(0); Push((bool) Stack[-1] == 0)
0x1b2: IF (Stack[-1] == 0) GOTO 0x1b8; Pop(1)

0x1b3: PushEmpty(object)
0x1b4: Call2 0x3ff

0x1b5: Pop(0)
0x1b6: @ RemoveActor(Stack[-1])
0x1b7: Pop(1)
0x1b8: GOTO 0x1bd

0x1b9: Push("restore")
0x1ba: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1bb: IF (Stack[-1] == 0) GOTO 0x1bd; Pop(1)

0x1bc: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x1bd: Return(); Pop(2)

0x1be: Push( Stack[1 + Tasks[-1].StackPointer] )
0x1bf: IF (Stack[-1] == 0) GOTO 0x1c7; Pop(1)

0x1c0: PushEmpty(object)
0x1c1: Call2 0x3ff

0x1c2: Pop(0)
0x1c3: @ RemoveActor(Stack[-1])
0x1c4: Pop(1)
0x1c5: @ Hold()
0x1c6: Pop(0)
0x1c7: PushEmpty()
0x1c8: Call2 0x23a

0x1c9: Pop(0)
0x1ca: Return(); Pop(0)

0x1cb: PushEmpty()
0x1cc: Call2 0x249

0x1cd: Pop(0)
0x1ce: Return(); Pop(0)

0x1cf: PushEmpty(bool)
0x1d0: Call2 0x2e6

0x1d1: Pop(0)
0x1d2: Pop(1); Push((bool) Stack[-1] == 0)
0x1d3: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1d4: @ Hold()
0x1d5: Pop(0)
0x1d6: @ GetDirection(Stack[-0])
0x1d7: Pop(0)
0x1d8: PushEmpty()
0x1d9: Call2 0x27f

0x1da: Pop(0)
0x1db: GOTO 0x1d8

0x1dc: Return(); Pop(0)

0x1dd: PushEmpty(object, object)
0x1de: Push("player")
0x1df: @ FindActor(Stack[-2], Stack[-1])
0x1e0: Pop(1)
0x1e1: Pop(0); Push((bool) Stack[-1] == 0)
0x1e2: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1e3: Stack[-3] = (bool) 0
0x1e4: Return(); Pop(2)

0x1e5: PushEmpty(bool, object)
0x1e6: Stack[-1] = Stack[-3]
0x1e7: Call2 0x2dd

0x1e8: Stack[-5] = Stack[-2]
0x1e9: Pop(2)
0x1ea: Return(); Pop(2)

0x1eb: Stack[-1] = 0
0x1ec: Push(CvectorIndex(Stack[-0], 0))
0x1ed: Push(CvectorIndex(Stack[-0], 2))
0x1ee: @ RotateAsync(Stack[-2], Stack[-1])
0x1ef: Pop(2)
0x1f0: Return(); Pop(0)

0x1f1: PushEmpty(object, bool, object, bool)
0x1f2: Push("player")
0x1f3: @ FindActor(Stack[-3], Stack[-1])
0x1f4: Pop(1)
0x1f5: Pop(0); Push((bool) Stack[-2] == 0)
0x1f6: IF (Stack[-1] == 0) GOTO 0x1f9; Pop(1)

0x1f7: Stack[-5] = (bool) 0
0x1f8: Return(); Pop(4)

0x1f9: PushEmpty(float, object)
0x1fa: Stack[-1] = Stack[-4]
0x1fb: Call2 0x2cb

0x1fc: Pop(1)
0x1fd: Push((float)90000.0)
0x1fe: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x1ff: IF (Stack[-1] == 0) GOTO 0x202; Pop(1)

0x200: Stack[-5] = (bool) 0
0x201: Return(); Pop(4)

0x202: @ CanSee(Stack[-1], Stack[-2])
0x203: Pop(0)
0x204: Stack[-5] = Stack[-1]
0x205: Return(); Pop(4)

0x206: Stack[-2] = 0
0x207: PushEmpty(float, float)
0x208: Push((int) 8)
0x209: Push((int) 16)
0x20a: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x20b: Pop(2)
0x20c: Push((int) 10)
0x20d: @ SetTimer(Stack[-1], Stack[-2])
0x20e: Pop(1)
0x20f: Return(); Pop(2)

0x210: Push((int) 10)
0x211: @ KillTimer(Stack[-1])
0x212: Pop(1)
0x213: Return(); Pop(0)

0x214: PushEmpty()
0x215: Push((int) 10)
0x216: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x217: IF (Stack[-1] == 0) GOTO 0x239; Pop(1)

0x218: PushEmpty()
0x219: Call2 0x210

0x21a: Pop(0)
0x21b: PushEmpty(bool)
0x21c: Stack[-1] = (bool) 0
0x21d: PushEmpty(bool)
0x21e: Call2 0x2e6

0x21f: Pop(0)
0x220: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x221: PushEmpty(bool)
0x222: Call2 0x1f1

0x223: Pop(0)
0x224: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x225: Stack[-1] = (bool) 1
0x226: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x227: PushEmpty(bool)
0x228: Call2 0x1dd

0x229: Pop(0)
0x22a: IF (Stack[-1] == 0) GOTO 0x232; Pop(1)

0x22b: PushEmpty(bool, object)
0x22c: PushEmpty(object)
0x22d: Call2 0x3ff

0x22e: Stack[-2] = Stack[-1]
0x22f: Pop(1)
0x230: Call2 0x37a

0x231: Pop(2)
0x232: GOTO 0x239

0x233: PushEmpty()
0x234: Call2 0x1ec

0x235: Pop(0)
0x236: PushEmpty()
0x237: Call2 0x207

0x238: Pop(0)
0x239: Return(); Pop(0)

0x23a: PushEmpty()
0x23b: Call2 0x2c6

0x23c: Pop(0)
0x23d: PushEmpty()
0x23e: Call2 0x210

0x23f: Pop(0)
0x240: @ lshStopSpeech()
0x241: Pop(0)
0x242: @ lshStopAnimation()
0x243: Pop(0)
0x244: @ StopAsync()
0x245: Pop(0)
0x246: @ Hold()
0x247: Pop(0)
0x248: Return(); Pop(0)

0x249: @ StopGroup0()
0x24a: Pop(0)
0x24b: PushEmpty()
0x24c: Call2 0x210

0x24d: Pop(0)
0x24e: PushEmpty(string)
0x24f: Stack[-1] = "Neutral"
0x250: Call2 0x3ca

0x251: Pop(1)
0x252: PushEmpty()
0x253: Call2 0x207

0x254: Pop(0)
0x255: Return(); Pop(0)

0x256: PushEmpty()
0x257: Push(Stack[-1])
0x258: IF (Stack[-1] == 0) GOTO 0x25d; Pop(1)

0x259: PushEmpty()
0x25a: Call2 0x207

0x25b: Pop(0)
0x25c: GOTO 0x261

0x25d: PushEmpty(string)
0x25e: Stack[-1] = "Neutral"
0x25f: Call2 0x3ca

0x260: Pop(1)
0x261: Return(); Pop(0)

0x262: PushEmpty(bool, bool)
0x263: @ IsOverrideActive(Stack[-1])
0x264: Pop(0)
0x265: Pop(0); Push((bool) Stack[-1] == 0)
0x266: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x267: EventDisable(0)
0x268: PushEmpty()
0x269: Call2 0x2c6

0x26a: Pop(0)
0x26b: PushEmpty(bool, object)
0x26c: Stack[-1] = Stack[-5]
0x26d: Call2 0x2dd

0x26e: Pop(2)
0x26f: EventEnable(0)
0x270: PushEmpty(object)
0x271: Stack[-1] = Stack[-4]
0x272: Call2 0x19e

0x273: Pop(1)
0x274: PushEmpty(string)
0x275: Stack[-1] = "Neutral"
0x276: Call2 0x3ca

0x277: Pop(1)
0x278: PushEmpty()
0x279: Call2 0x210

0x27a: Pop(0)
0x27b: PushEmpty()
0x27c: Call2 0x207

0x27d: Pop(0)
0x27e: Return(); Pop(2)

0x27f: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x280: @ WaitForAnimEnd()
0x281: Pop(0)
0x282: PushEmpty(bool)
0x283: Call2 0x2e6

0x284: Pop(0)
0x285: Pop(1); Push((bool) Stack[-1] == 0)
0x286: IF (Stack[-1] == 0) GOTO 0x288; Pop(1)

0x287: Return(); Pop(12)

0x288: PushEmpty(int)
0x289: Call2 0x424

0x28a: Stack[-7] = Stack[-1]
0x28b: Pop(1)
0x28c: Stack[-5] = (int) 0
0x28d: PushEmpty(bool)
0x28e: Stack[-1] = (bool) 0
0x28f: Push((int) 5)
0x290: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x291: IF (Stack[-1] == 0) GOTO 0x297; Pop(1)

0x292: PushEmpty(bool)
0x293: Call2 0x2e6

0x294: Pop(0)
0x295: IF (Stack[-1] == 0) GOTO 0x297; Pop(1)

0x296: Stack[-1] = (bool) 1
0x297: IF (Stack[-1] == 0) GOTO 0x2c1; Pop(1)

0x298: Pop(0); Push((bool) Stack[-6] == 0)
0x299: IF (Stack[-1] == 0) GOTO 0x2a1; Pop(1)

0x29a: Push((int) 3)
0x29b: @ Sleep(Stack[-1], Stack[-5])
0x29c: Pop(1)
0x29d: Pop(0); Push((bool) Stack[-4] == 0)
0x29e: IF (Stack[-1] == 0) GOTO 0x2a0; Pop(1)

0x29f: GOTO 0x2c1

0x2a0: GOTO 0x2b6

0x2a1: @ irand(Stack[-3], Stack[-6])
0x2a2: Pop(0)
0x2a3: Push((int) 5)
0x2a4: @ irand(Stack[-3], Stack[-1])
0x2a5: Pop(1)
0x2a6: Push((int) 0)
0x2a7: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x2a8: IF (Stack[-1] == 0) GOTO 0x2aa; Pop(1)

0x2a9: Stack[-3] = (int) 0
0x2aa: Push("all")
0x2ab: PushEmpty(string, int)
0x2ac: Stack[-1] = Stack[-6]
0x2ad: Call2 0x41d

0x2ae: Pop(1)
0x2af: @ PlayAnimation(Stack[-2], Stack[-1])
0x2b0: Pop(2)
0x2b1: @ WaitForAnimEnd(Stack[-1])
0x2b2: Pop(0)
0x2b3: Pop(0); Push((bool) Stack[-1] == 0)
0x2b4: IF (Stack[-1] == 0) GOTO 0x2b6; Pop(1)

0x2b5: GOTO 0x2c1

0x2b6: PushEmpty(bool)
0x2b7: Call2 0x2c4

0x2b8: Pop(0)
0x2b9: Pop(1); Push((bool) Stack[-1] == 0)
0x2ba: IF (Stack[-1] == 0) GOTO 0x2bc; Pop(1)

0x2bb: GOTO 0x2c1

0x2bc: @ ResetAAS()
0x2bd: Pop(0)
0x2be: Push((int) 1)
0x2bf: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x2c0: GOTO 0x28d

0x2c1: @ ResetAAS()
0x2c2: Pop(0)
0x2c3: Return(); Pop(12)

0x2c4: Stack[-1] = (bool) 1
0x2c5: Return(); Pop(0)

0x2c6: @ StopAnimation()
0x2c7: Pop(0)
0x2c8: @ StopGroup0()
0x2c9: Pop(0)
0x2ca: Return(); Pop(0)

0x2cb: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x2cc: @ GetPosition(Stack[-3])
0x2cd: Pop(0)
0x2ce: @@ GetPosition(Stack[-2])
0x2cf: Pop(0)
0x2d0: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x2d1: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x2d2: Return(); Pop(6)

0x2d3: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x2d4: @ GetPosition(Stack[-3])
0x2d5: Pop(0)
0x2d6: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x2d7: Push(CvectorIndex(Stack[-2], 0))
0x2d8: Push(CvectorIndex(Stack[-3], 2))
0x2d9: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x2da: Pop(2)
0x2db: Stack[-8] = Stack[-1]
0x2dc: Return(); Pop(6)

0x2dd: PushEmpty(cvector, cvector)
0x2de: @@ GetPosition(Stack[-1])
0x2df: Pop(0)
0x2e0: PushEmpty(bool, cvector)
0x2e1: Stack[-1] = Stack[-3]
0x2e2: Call2 0x2d3

0x2e3: Stack[-6] = Stack[-2]
0x2e4: Pop(2)
0x2e5: Return(); Pop(2)

0x2e6: PushEmpty(bool, bool)
0x2e7: @ IsLoaded(Stack[-1])
0x2e8: Pop(0)
0x2e9: Stack[-3] = Stack[-1]
0x2ea: Return(); Pop(2)

0x2eb: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x2ec: @@ GetPosition(Stack[-8])
0x2ed: Pop(0)
0x2ee: @@ GetEyesHeight(Stack[-9])
0x2ef: Pop(0)
0x2f0: Push(CvectorIndex(Stack[-8], 1))
0x2f1: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2f2: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2f3: @ GetPosition(Stack[-7])
0x2f4: Pop(0)
0x2f5: @ GetEyesHeight(Stack[-9])
0x2f6: Pop(0)
0x2f7: Push(CvectorIndex(Stack[-7], 1))
0x2f8: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2f9: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2fa: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2fb: Push(CvectorIndex(Stack[-6], 1))
0x2fc: Stack[-1] = (int) 0
0x2fd: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2fe: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2ff: Pop(1); Push(Sqrt(Stack[-1]))
0x300: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x301: Stack[-5] = -Stack[-6]; Pop(0);
0x302: Pop(0); Push(Stack[-6] * Stack[-19]);
0x303: PushEmpty(cvector, cvector)
0x304: Push(CVector(0.0, 1.0, 0.0))
0x305: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x306: Call2 0x405

0x307: Pop(1)
0x308: Push((int) 25)
0x309: Pop(2); Push(Stack[-2] * Stack[-1]);
0x30a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x30b: Push(CVector(0.0, 10.0, 0.0))
0x30c: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x30d: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x30e: @ IsOverrideActive(Stack[-2])
0x30f: Pop(0)
0x310: Push(Stack[-2])
0x311: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x312: Stack[-21] = (bool) 0
0x313: Return(); Pop(18)

0x314: @ StopWorld()
0x315: Pop(0)
0x316: @ CameraTransit(Stack[-3], Stack[-5])
0x317: Pop(0)
0x318: Push(CvectorIndex(Stack[-4], 0))
0x319: Push(CvectorIndex(Stack[-5], 2))
0x31a: @ Rotate(Stack[-2], Stack[-1])
0x31b: Pop(2)
0x31c: PushEmpty(bool)
0x31d: Call2 0x43d

0x31e: Pop(0)
0x31f: IF (Stack[-1] == 0) GOTO 0x321; Pop(1)

0x320: GOTO 0x329

0x321: Push("head")
0x322: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x323: Pop(1)
0x324: Push(Stack[-1])
0x325: IF (Stack[-1] == 0) GOTO 0x329; Pop(1)

0x326: Push("head")
0x327: @ LookAsyncCamera(Stack[-1])
0x328: Pop(1)
0x329: @ CameraWaitForPlayFinish()
0x32a: Pop(0)
0x32b: @ ResumeWorld()
0x32c: Pop(0)
0x32d: Stack[-21] = (bool) 1
0x32e: Return(); Pop(18)

0x32f: PushEmpty(bool, bool)
0x330: @ CameraSwitchToNormal()
0x331: Pop(0)
0x332: PushEmpty(bool)
0x333: Call2 0x43d

0x334: Pop(0)
0x335: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x336: GOTO 0x33f

0x337: Push("head")
0x338: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x339: Pop(1)
0x33a: Push(Stack[-1])
0x33b: IF (Stack[-1] == 0) GOTO 0x33f; Pop(1)

0x33c: Push("head")
0x33d: @ UnlookAsync(Stack[-1])
0x33e: Pop(1)
0x33f: Return(); Pop(2)

0x340: PushEmpty(int, int, int, int)
0x341: Push("voice_common")
0x342: @ GetVariable(Stack[-1], Stack[-3])
0x343: Pop(1)
0x344: Push(Stack[-2])
0x345: IF (Stack[-1] == 0) GOTO 0x366; Pop(1)

0x346: PushEmpty(bool, object)
0x347: Stack[-1] = Stack[-7]
0x348: Call2 0x37a

0x349: Pop(1)
0x34a: Pop(1); Push((bool) Stack[-1] == 0)
0x34b: IF (Stack[-1] == 0) GOTO 0x354; Pop(1)

0x34c: PushEmpty(bool, object)
0x34d: Stack[-1] = Stack[-7]
0x34e: Call2 0x39f

0x34f: Pop(1)
0x350: Pop(1); Push((bool) Stack[-1] == 0)
0x351: IF (Stack[-1] == 0) GOTO 0x354; Pop(1)

0x352: Stack[-6] = (bool) 0
0x353: Return(); Pop(4)

0x354: Push((int) 2)
0x355: @ irand(Stack[-2], Stack[-1])
0x356: Pop(1)
0x357: Push(Stack[-1])
0x358: IF (Stack[-1] == 0) GOTO 0x361; Pop(1)

0x359: Push("voice_common")
0x35a: Push((int) 1)
0x35b: Pop(1); Push(Stack[-4] + Stack[-1]);
0x35c: Push((int) 3)
0x35d: Pop(2); Push(Stack[-2] % Stack[-1]);
0x35e: @ SetVariable(Stack[-2], Stack[-1])
0x35f: Pop(2)
0x360: GOTO 0x365

0x361: Push("voice_common")
0x362: Push((int) 0)
0x363: @ SetVariable(Stack[-2], Stack[-1])
0x364: Pop(2)
0x365: GOTO 0x378

0x366: PushEmpty(bool, object)
0x367: Stack[-1] = Stack[-7]
0x368: Call2 0x39f

0x369: Pop(1)
0x36a: Pop(1); Push((bool) Stack[-1] == 0)
0x36b: IF (Stack[-1] == 0) GOTO 0x374; Pop(1)

0x36c: PushEmpty(bool, object)
0x36d: Stack[-1] = Stack[-7]
0x36e: Call2 0x37a

0x36f: Pop(1)
0x370: Pop(1); Push((bool) Stack[-1] == 0)
0x371: IF (Stack[-1] == 0) GOTO 0x374; Pop(1)

0x372: Stack[-6] = (bool) 0
0x373: Return(); Pop(4)

0x374: Push("voice_common")
0x375: Push((int) 1)
0x376: @ SetVariable(Stack[-2], Stack[-1])
0x377: Pop(2)
0x378: Stack[-6] = (bool) 1
0x379: Return(); Pop(4)

0x37a: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x37b: Stack[-5] = "c"
0x37c: Stack[-4] = (int) 0
0x37d: Push((int) 1)
0x37e: IF (Stack[-1] == 0) GOTO 0x38a; Pop(1)

0x37f: Push((int) 1)
0x380: Pop(1); Push(Stack[-5] + Stack[-1]);
0x381: Pop(1); Push(Stack[-6] + Stack[-1]);
0x382: @@ HasProperty(Stack[-1], Stack[-4])
0x383: Pop(1)
0x384: Pop(0); Push((bool) Stack[-3] == 0)
0x385: IF (Stack[-1] == 0) GOTO 0x387; Pop(1)

0x386: GOTO 0x38a

0x387: Push((int) 1)
0x388: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x389: GOTO 0x37d

0x38a: Pop(0); Push((bool) Stack[-4] == 0)
0x38b: IF (Stack[-1] == 0) GOTO 0x38e; Pop(1)

0x38c: Stack[-12] = (bool) 0
0x38d: Return(); Pop(10)

0x38e: Stack[-2] = (int) 0
0x38f: Push((int) 1)
0x390: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x391: IF (Stack[-1] == 0) GOTO 0x394; Pop(1)

0x392: @ irand(Stack[-2], Stack[-4])
0x393: Pop(0)
0x394: Push((int) 1)
0x395: Pop(1); Push(Stack[-3] + Stack[-1]);
0x396: Pop(1); Push(Stack[-6] + Stack[-1]);
0x397: @@ GetProperty(Stack[-1], Stack[-2])
0x398: Pop(1)
0x399: PushEmpty(bool, string)
0x39a: Stack[-1] = Stack[-3]
0x39b: Call2 0x3e9

0x39c: Stack[-14] = Stack[-2]
0x39d: Pop(2)
0x39e: Return(); Pop(10)

0x39f: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x3a0: Push("d")
0x3a1: PushEmpty(int)
0x3a2: Call2 0x414

0x3a3: Pop(0)
0x3a4: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3a5: Push("m")
0x3a6: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x3a7: Stack[-4] = (int) 0
0x3a8: Push((int) 1)
0x3a9: IF (Stack[-1] == 0) GOTO 0x3b5; Pop(1)

0x3aa: Push((int) 1)
0x3ab: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3ac: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3ad: @@ HasProperty(Stack[-1], Stack[-4])
0x3ae: Pop(1)
0x3af: Pop(0); Push((bool) Stack[-3] == 0)
0x3b0: IF (Stack[-1] == 0) GOTO 0x3b2; Pop(1)

0x3b1: GOTO 0x3b5

0x3b2: Push((int) 1)
0x3b3: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3b4: GOTO 0x3a8

0x3b5: Pop(0); Push((bool) Stack[-4] == 0)
0x3b6: IF (Stack[-1] == 0) GOTO 0x3b9; Pop(1)

0x3b7: Stack[-12] = (bool) 0
0x3b8: Return(); Pop(10)

0x3b9: Stack[-2] = (int) 0
0x3ba: Push((int) 1)
0x3bb: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x3bc: IF (Stack[-1] == 0) GOTO 0x3bf; Pop(1)

0x3bd: @ irand(Stack[-2], Stack[-4])
0x3be: Pop(0)
0x3bf: Push((int) 1)
0x3c0: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3c1: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3c2: @@ GetProperty(Stack[-1], Stack[-2])
0x3c3: Pop(1)
0x3c4: PushEmpty(bool, string)
0x3c5: Stack[-1] = Stack[-3]
0x3c6: Call2 0x3e9

0x3c7: Stack[-14] = Stack[-2]
0x3c8: Pop(2)
0x3c9: Return(); Pop(10)

0x3ca: PushEmpty(bool, float, float, bool, float, float)
0x3cb: @ lshHasAnimation(Stack[-3], Stack[-7])
0x3cc: Pop(0)
0x3cd: Push(Stack[-3])
0x3ce: IF (Stack[-1] == 0) GOTO 0x3d5; Pop(1)

0x3cf: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x3d0: Pop(0)
0x3d1: Push((bool) 0)
0x3d2: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3d3: Pop(1)
0x3d4: GOTO 0x3d9

0x3d5: Push("Can't find lsh animation : ")
0x3d6: Pop(1); Push(Stack[-1] + Stack[-8]);
0x3d7: @ Trace(Stack[-1])
0x3d8: Pop(1)
0x3d9: Return(); Pop(6)

0x3da: PushEmpty(bool, float, float, bool, float, float)
0x3db: @ lshHasAnimation(Stack[-3], Stack[-8])
0x3dc: Pop(0)
0x3dd: Push(Stack[-3])
0x3de: IF (Stack[-1] == 0) GOTO 0x3e4; Pop(1)

0x3df: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x3e0: Pop(0)
0x3e1: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x3e2: Pop(0)
0x3e3: GOTO 0x3e8

0x3e4: Push("Can't find lsh animation : ")
0x3e5: Pop(1); Push(Stack[-1] + Stack[-9]);
0x3e6: @ Trace(Stack[-1])
0x3e7: Pop(1)
0x3e8: Return(); Pop(6)

0x3e9: PushEmpty(bool, bool)
0x3ea: PushEmpty(bool)
0x3eb: Call2 0x43d

0x3ec: Pop(0)
0x3ed: IF (Stack[-1] == 0) GOTO 0x3f6; Pop(1)

0x3ee: @ lshHasSpeech(Stack[-1], Stack[-3])
0x3ef: Pop(0)
0x3f0: Push(Stack[-1])
0x3f1: IF (Stack[-1] == 0) GOTO 0x3f6; Pop(1)

0x3f2: @ lshPlaySpeech(Stack[-3])
0x3f3: Pop(0)
0x3f4: Stack[-4] = (bool) 1
0x3f5: Return(); Pop(2)

0x3f6: Stack[-4] = (bool) 0
0x3f7: Return(); Pop(2)

0x3f8: PushEmpty(bool)
0x3f9: Call2 0x43d

0x3fa: Pop(0)
0x3fb: IF (Stack[-1] == 0) GOTO 0x3fe; Pop(1)

0x3fc: @ lshStopSpeech()
0x3fd: Pop(0)
0x3fe: Return(); Pop(0)

0x3ff: PushEmpty(object, object)
0x400: @ self(Stack[-1])
0x401: Pop(0)
0x402: Stack[-3] = Stack[-1]
0x403: Return(); Pop(2)

0x404: Stack[-1] = 0
0x405: PushEmpty(float, float)
0x406: Pop(0); Push(Stack[-3] | Stack[-3]);
0x407: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x408: Push((float)0.0)
0x409: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x40a: IF (Stack[-1] == 0) GOTO 0x40d; Pop(1)

0x40b: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x40c: Return(); Pop(2)

0x40d: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x40e: Return(); Pop(2)

0x40f: PushEmpty(int, int)
0x410: @ GetVariable(Stack[-3], Stack[-1])
0x411: Pop(0)
0x412: Stack[-4] = Stack[-1]
0x413: Return(); Pop(2)

0x414: PushEmpty(float, float)
0x415: @ GetGameTime(Stack[-1])
0x416: Pop(0)
0x417: Push((int) 1)
0x418: PushEmpty(int)
0x419: Push((int) 24)
0x41a: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x41b: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x41c: Return(); Pop(2)

0x41d: PushEmpty(string, string)
0x41e: Stack[-1] = "idle"
0x41f: Push(Stack[-3])
0x420: IF (Stack[-1] == 0) GOTO 0x422; Pop(1)

0x421: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x422: Stack[-4] = Stack[-1]
0x423: Return(); Pop(2)

0x424: PushEmpty(int, bool, int, bool)
0x425: Stack[-2] = (int) 0
0x426: Push("all")
0x427: PushEmpty(string, int)
0x428: Stack[-1] = Stack[-5]
0x429: Call2 0x41d

0x42a: Pop(1)
0x42b: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x42c: Pop(2)
0x42d: Pop(0); Push((bool) Stack[-1] == 0)
0x42e: IF (Stack[-1] == 0) GOTO 0x430; Pop(1)

0x42f: GOTO 0x433

0x430: Push((int) 1)
0x431: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x432: GOTO 0x426

0x433: Stack[-5] = Stack[-2]
0x434: Return(); Pop(4)

0x435: Stack[-1] = (int) 515552
0x436: Return(); Pop(0)

0x437: Stack[-1] = (int) 502877
0x438: Return(); Pop(0)

0x439: Stack[-1] = "ui/NPC_Spi4ka.png"
0x43a: Return(); Pop(0)

0x43b: Stack[-1] = "ui/NPC_Spi4ka_b.png"
0x43c: Return(); Pop(0)

0x43d: Stack[-1] = (bool) 1
0x43e: Return(); Pop(0)

0x43f: PushEmpty()
0x440: Push("oob9Spi4ka_Kapella1")
0x441: Push((int) 1)
0x442: @ SetVariable(Stack[-2], Stack[-1])
0x443: Pop(2)
0x444: Return(); Pop(0)

0x445: PushEmpty()
0x446: PushEmpty(int, string)
0x447: Stack[-1] = "oob9Spi4ka_Kapella1"
0x448: Call2 0x40f

0x449: Pop(1)
0x44a: Push((int) 0)
0x44b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x44c: IF (Stack[-1] == 0) GOTO 0x44f; Pop(1)

0x44d: Stack[-2] = (bool) 1
0x44e: Return(); Pop(0)

0x44f: Stack[-2] = (bool) 0
0x450: Return(); Pop(0)

0x451: PushEmpty(int, int)
0x452: Push("branch")
0x453: @ GetVariable(Stack[-1], Stack[-2])
0x454: Pop(1)
0x455: Push((int) 0)
0x456: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x457: IF (Stack[-1] == 0) GOTO 0x45b; Pop(1)

0x458: Stack[-3] = (int) 1
0x459: Return(); Pop(2)

0x45a: GOTO 0x460

0x45b: Push((int) 1)
0x45c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x45d: IF (Stack[-1] == 0) GOTO 0x460; Pop(1)

0x45e: Stack[-3] = (int) 2
0x45f: Return(); Pop(2)

0x460: Stack[-3] = (int) 3
0x461: Return(); Pop(2)

