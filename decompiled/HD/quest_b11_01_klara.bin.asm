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
	Fear
	all
	idle
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
	ui/NPC_Klara.png
	ui/NPC_Klara_b.png
	oob11KlaraD1
	b11q01VictimChoosed
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

RunOp = 0x26c
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xe2 Vars = (int, int)
	GTASK_2 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x270 Vars = (string)
		EVENT_6 Op = 0x284 Vars = ()
		EVENT_5 Op = 0x291 Vars = ()
		EVENT_7 Op = 0x2da Vars = (int)
		EVENT_45 Op = 0x31c Vars = (bool)
		EVENT_0 Op = 0x328 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x3b1

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x4ff

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x4fd

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x501

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x503

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x525

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
0x31: Call2 0x4c7

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x408

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
0x48: Call2 0x3f6

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
0x56: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0x57: PushEmpty(bool)
0x58: Stack[-1] = (bool) 0
0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b: Call2 0x50d

0x5c: Pop(1)
0x5d: Pop(1); Push((bool) Stack[-1] == 0)
0x5e: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x5f: PushEmpty(bool, object)
0x60: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x61: Call2 0x519

0x62: Pop(1)
0x63: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x64: Stack[-1] = (bool) 1
0x65: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x66: PushEmpty(object, object)
0x67: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x68: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x69: Call2 0x507

0x6a: Pop(2)
0x6b: PushEmpty(string)
0x6c: Stack[-1] = "Neutral"
0x6d: Call2 0xcc

0x6e: Pop(1)
0x6f: Push((int) 522009)
0x70: @@ SetMessage(Stack[-1])
0x71: Pop(1)
0x72: @@ ClearReplies()
0x73: Pop(0)
0x74: Push((int) 523279)
0x75: Push((int) 24484)
0x76: Push((int) 24483)
0x77: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x78: Pop(3)
0x79: Push((int) 522010)
0x7a: Push((int) 24503)
0x7b: Push((int) 23180)
0x7c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d: Pop(3)
0x7e: Push((int) 523284)
0x7f: Push((int) 24490)
0x80: Push((int) 24489)
0x81: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82: Pop(3)
0x83: Push((int) 523286)
0x84: Push((int) 24492)
0x85: Push((int) 24491)
0x86: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x87: Pop(3)
0x88: Push((int) 523305)
0x89: Push((int) 24514)
0x8a: Push((int) 24513)
0x8b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8c: Pop(3)
0x8d: Push((int) 523278)
0x8e: Push((int) 24486)
0x8f: Push((int) 24482)
0x90: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x91: Pop(3)
0x92: Push((int) 523304)
0x93: Push((int) -1)
0x94: Push((int) 24512)
0x95: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x96: Pop(3)
0x97: GOTO 0xae

0x98: PushEmpty(string)
0x99: Stack[-1] = "Fear"
0x9a: Call2 0xcc

0x9b: Pop(1)
0x9c: Push((int) 522096)
0x9d: @@ SetMessage(Stack[-1])
0x9e: Pop(1)
0x9f: @@ ClearReplies()
0xa0: Pop(0)
0xa1: Push((int) 522097)
0xa2: Push((int) -1)
0xa3: Push((int) 23266)
0xa4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa5: Pop(3)
0xa6: Push((int) 523318)
0xa7: Push((int) 24533)
0xa8: Push((int) 24532)
0xa9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaa: Pop(3)
0xab: GOTO 0xae

0xac: Return(); Pop(0)

0xad: GOTO 0x55

0xae: PushEmpty(bool)
0xaf: Call2 0x505

0xb0: Pop(0)
0xb1: IF (Stack[-1] == 0) GOTO 0xbd; Pop(1)

0xb2: @ lshWaitForAnimEnd()
0xb3: Pop(0)
0xb4: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb5: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xb6: GOTO 0xbc

0xb7: PushEmpty(string)
0xb8: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xb9: Call2 0x492

0xba: Pop(1)
0xbb: GOTO 0xb2

0xbc: GOTO 0xcb

0xbd: Push("all")
0xbe: Push("idle")
0xbf: @ PlayAnimation(Stack[-2], Stack[-1])
0xc0: Pop(2)
0xc1: @ WaitForAnimEnd()
0xc2: Pop(0)
0xc3: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc4: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xc5: GOTO 0xcb

0xc6: Push("all")
0xc7: Push("idle")
0xc8: @ PlayAnimation(Stack[-2], Stack[-1])
0xc9: Pop(2)
0xca: GOTO 0xc1

0xcb: Return(); Pop(0)

0xcc: PushEmpty()
0xcd: PushEmpty(bool)
0xce: Call2 0x505

0xcf: Pop(0)
0xd0: Pop(1); Push((bool) Stack[-1] == 0)
0xd1: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xd2: Return(); Pop(0)

0xd3: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xd4: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xd5: Return(); Pop(0)

0xd6: PushEmpty(string, bool)
0xd7: Stack[-2] = Stack[-3]
0xd8: Push("")
0xd9: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xda: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xdb: Stack[-1] = (bool) 0
0xdc: GOTO 0xde

0xdd: Stack[-1] = (bool) 1
0xde: Call2 0x4a2

0xdf: Pop(2)
0xe0: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xe1: Return(); Pop(0)

0xe2: PushEmpty()
0xe3: Push((int) 1)
0xe4: IF (Stack[-1] == 0) GOTO 0x263; Pop(1)

0xe5: PushEmpty()
0xe6: Call2 0x4c0

0xe7: Pop(0)
0xe8: Push((int) 23179)
0xe9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xea: IF (Stack[-1] == 0) GOTO 0x140; Pop(1)

0xeb: PushEmpty(bool)
0xec: Stack[-1] = (bool) 0
0xed: PushEmpty(bool, object)
0xee: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xef: Call2 0x50d

0xf0: Pop(1)
0xf1: Pop(1); Push((bool) Stack[-1] == 0)
0xf2: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xf3: PushEmpty(bool, object)
0xf4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf5: Call2 0x519

0xf6: Pop(1)
0xf7: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xf8: Stack[-1] = (bool) 1
0xf9: IF (Stack[-1] == 0) GOTO 0x12c; Pop(1)

0xfa: PushEmpty(object, object)
0xfb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfd: Call2 0x507

0xfe: Pop(2)
0xff: PushEmpty(string)
0x100: Stack[-1] = "Neutral"
0x101: Call2 0xcc

0x102: Pop(1)
0x103: Push((int) 522009)
0x104: @@ SetMessage(Stack[-1])
0x105: Pop(1)
0x106: @@ ClearReplies()
0x107: Pop(0)
0x108: Push((int) 523279)
0x109: Push((int) 24484)
0x10a: Push((int) 24483)
0x10b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10c: Pop(3)
0x10d: Push((int) 522010)
0x10e: Push((int) 24503)
0x10f: Push((int) 23180)
0x110: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x111: Pop(3)
0x112: Push((int) 523284)
0x113: Push((int) 24490)
0x114: Push((int) 24489)
0x115: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x116: Pop(3)
0x117: Push((int) 523286)
0x118: Push((int) 24492)
0x119: Push((int) 24491)
0x11a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11b: Pop(3)
0x11c: Push((int) 523305)
0x11d: Push((int) 24514)
0x11e: Push((int) 24513)
0x11f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x120: Pop(3)
0x121: Push((int) 523278)
0x122: Push((int) 24486)
0x123: Push((int) 24482)
0x124: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x125: Pop(3)
0x126: Push((int) 523304)
0x127: Push((int) -1)
0x128: Push((int) 24512)
0x129: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12a: Pop(3)
0x12b: Return(); Pop(0)

0x12c: PushEmpty(string)
0x12d: Stack[-1] = "Fear"
0x12e: Call2 0xcc

0x12f: Pop(1)
0x130: Push((int) 522096)
0x131: @@ SetMessage(Stack[-1])
0x132: Pop(1)
0x133: @@ ClearReplies()
0x134: Pop(0)
0x135: Push((int) 522097)
0x136: Push((int) -1)
0x137: Push((int) 23266)
0x138: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x139: Pop(3)
0x13a: Push((int) 523318)
0x13b: Push((int) 24533)
0x13c: Push((int) 24532)
0x13d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13e: Pop(3)
0x13f: Return(); Pop(0)

0x140: Push((int) 24533)
0x141: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x142: IF (Stack[-1] == 0) GOTO 0x152; Pop(1)

0x143: PushEmpty(string)
0x144: Stack[-1] = "Fear"
0x145: Call2 0xcc

0x146: Pop(1)
0x147: Push((int) 523319)
0x148: @@ SetMessage(Stack[-1])
0x149: Pop(1)
0x14a: @@ ClearReplies()
0x14b: Pop(0)
0x14c: Push((int) 523320)
0x14d: Push((int) -1)
0x14e: Push((int) 24534)
0x14f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x150: Pop(3)
0x151: Return(); Pop(0)

0x152: Push((int) 24514)
0x153: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x154: IF (Stack[-1] == 0) GOTO 0x169; Pop(1)

0x155: PushEmpty(string)
0x156: Stack[-1] = "Fear"
0x157: Call2 0xcc

0x158: Pop(1)
0x159: Push((int) 523306)
0x15a: @@ SetMessage(Stack[-1])
0x15b: Pop(1)
0x15c: @@ ClearReplies()
0x15d: Pop(0)
0x15e: Push((int) 523307)
0x15f: Push((int) 24516)
0x160: Push((int) 24515)
0x161: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x162: Pop(3)
0x163: Push((int) 523309)
0x164: Push((int) 24518)
0x165: Push((int) 24517)
0x166: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x167: Pop(3)
0x168: Return(); Pop(0)

0x169: Push((int) 24518)
0x16a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16b: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x16c: PushEmpty(string)
0x16d: Stack[-1] = "Fear"
0x16e: Call2 0xcc

0x16f: Pop(1)
0x170: Push((int) 523310)
0x171: @@ SetMessage(Stack[-1])
0x172: Pop(1)
0x173: @@ ClearReplies()
0x174: Pop(0)
0x175: Push((int) 523312)
0x176: Push((int) 24508)
0x177: Push((int) 24521)
0x178: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x179: Pop(3)
0x17a: Push((int) 523314)
0x17b: Push((int) 24484)
0x17c: Push((int) 24524)
0x17d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17e: Pop(3)
0x17f: Return(); Pop(0)

0x180: Push((int) 24516)
0x181: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x182: IF (Stack[-1] == 0) GOTO 0x197; Pop(1)

0x183: PushEmpty(string)
0x184: Stack[-1] = "Fear"
0x185: Call2 0xcc

0x186: Pop(1)
0x187: Push((int) 523308)
0x188: @@ SetMessage(Stack[-1])
0x189: Pop(1)
0x18a: @@ ClearReplies()
0x18b: Pop(0)
0x18c: Push((int) 523311)
0x18d: Push((int) 24508)
0x18e: Push((int) 24519)
0x18f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x190: Pop(3)
0x191: Push((int) 523313)
0x192: Push((int) 24484)
0x193: Push((int) 24523)
0x194: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x195: Pop(3)
0x196: Return(); Pop(0)

0x197: Push((int) 24492)
0x198: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x199: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x19a: PushEmpty(string)
0x19b: Stack[-1] = "Fear"
0x19c: Call2 0xcc

0x19d: Pop(1)
0x19e: Push((int) 523287)
0x19f: @@ SetMessage(Stack[-1])
0x1a0: Pop(1)
0x1a1: @@ ClearReplies()
0x1a2: Pop(0)
0x1a3: Push((int) 523300)
0x1a4: Push((int) 24508)
0x1a5: Push((int) 24506)
0x1a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a7: Pop(3)
0x1a8: Return(); Pop(0)

0x1a9: Push((int) 24490)
0x1aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ab: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1ac: PushEmpty(string)
0x1ad: Stack[-1] = "Fear"
0x1ae: Call2 0xcc

0x1af: Pop(1)
0x1b0: Push((int) 523285)
0x1b1: @@ SetMessage(Stack[-1])
0x1b2: Pop(1)
0x1b3: @@ ClearReplies()
0x1b4: Pop(0)
0x1b5: Push((int) 523290)
0x1b6: Push((int) -1)
0x1b7: Push((int) 24495)
0x1b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b9: Pop(3)
0x1ba: Push((int) 523291)
0x1bb: Push((int) -1)
0x1bc: Push((int) 24496)
0x1bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1be: Pop(3)
0x1bf: Return(); Pop(0)

0x1c0: Push((int) 24503)
0x1c1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c2: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1c3: PushEmpty(string)
0x1c4: Stack[-1] = "Fear"
0x1c5: Call2 0xcc

0x1c6: Pop(1)
0x1c7: Push((int) 523298)
0x1c8: @@ SetMessage(Stack[-1])
0x1c9: Pop(1)
0x1ca: @@ ClearReplies()
0x1cb: Pop(0)
0x1cc: Push((int) 523299)
0x1cd: Push((int) 24494)
0x1ce: Push((int) 24504)
0x1cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d0: Pop(3)
0x1d1: Return(); Pop(0)

0x1d2: Push((int) 24484)
0x1d3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d4: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x1d5: PushEmpty(string)
0x1d6: Stack[-1] = "Neutral"
0x1d7: Call2 0xcc

0x1d8: Pop(1)
0x1d9: Push((int) 523280)
0x1da: @@ SetMessage(Stack[-1])
0x1db: Pop(1)
0x1dc: @@ ClearReplies()
0x1dd: Pop(0)
0x1de: Push((int) 523281)
0x1df: Push((int) 24486)
0x1e0: Push((int) 24485)
0x1e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e2: Pop(3)
0x1e3: Push((int) 523315)
0x1e4: Push((int) 24494)
0x1e5: Push((int) 24527)
0x1e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e7: Pop(3)
0x1e8: Return(); Pop(0)

0x1e9: Push((int) 24486)
0x1ea: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1eb: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1ec: PushEmpty(string)
0x1ed: Stack[-1] = "Fear"
0x1ee: Call2 0xcc

0x1ef: Pop(1)
0x1f0: Push((int) 523282)
0x1f1: @@ SetMessage(Stack[-1])
0x1f2: Pop(1)
0x1f3: @@ ClearReplies()
0x1f4: Pop(0)
0x1f5: Push((int) 523288)
0x1f6: Push((int) 24494)
0x1f7: Push((int) 24493)
0x1f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f9: Pop(3)
0x1fa: Push((int) 523316)
0x1fb: Push((int) 24498)
0x1fc: Push((int) 24529)
0x1fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1fe: Pop(3)
0x1ff: Return(); Pop(0)

0x200: Push((int) 24494)
0x201: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x202: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x203: PushEmpty(string)
0x204: Stack[-1] = "Neutral"
0x205: Call2 0xcc

0x206: Pop(1)
0x207: Push((int) 523289)
0x208: @@ SetMessage(Stack[-1])
0x209: Pop(1)
0x20a: @@ ClearReplies()
0x20b: Pop(0)
0x20c: Push((int) 523292)
0x20d: Push((int) 24498)
0x20e: Push((int) 24497)
0x20f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x210: Pop(3)
0x211: Return(); Pop(0)

0x212: Push((int) 24498)
0x213: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x214: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x215: PushEmpty(string)
0x216: Stack[-1] = "Neutral"
0x217: Call2 0xcc

0x218: Pop(1)
0x219: Push((int) 523293)
0x21a: @@ SetMessage(Stack[-1])
0x21b: Pop(1)
0x21c: @@ ClearReplies()
0x21d: Pop(0)
0x21e: Push((int) 523294)
0x21f: Push((int) 24508)
0x220: Push((int) 24499)
0x221: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x222: Pop(3)
0x223: Push((int) 523295)
0x224: Push((int) 24501)
0x225: Push((int) 24500)
0x226: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x227: Pop(3)
0x228: Return(); Pop(0)

0x229: Push((int) 24501)
0x22a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x22b: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x22c: PushEmpty(string)
0x22d: Stack[-1] = "Neutral"
0x22e: Call2 0xcc

0x22f: Pop(1)
0x230: Push((int) 523296)
0x231: @@ SetMessage(Stack[-1])
0x232: Pop(1)
0x233: @@ ClearReplies()
0x234: Pop(0)
0x235: Push((int) 523301)
0x236: Push((int) 24508)
0x237: Push((int) 24507)
0x238: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x239: Pop(3)
0x23a: Push((int) 523297)
0x23b: Push((int) -1)
0x23c: Push((int) 24502)
0x23d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x23e: Pop(3)
0x23f: Return(); Pop(0)

0x240: Push((int) 24508)
0x241: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x242: IF (Stack[-1] == 0) GOTO 0x257; Pop(1)

0x243: PushEmpty(string)
0x244: Stack[-1] = "Neutral"
0x245: Call2 0xcc

0x246: Pop(1)
0x247: Push((int) 523302)
0x248: @@ SetMessage(Stack[-1])
0x249: Pop(1)
0x24a: @@ ClearReplies()
0x24b: Pop(0)
0x24c: Push((int) 523303)
0x24d: Push((int) -1)
0x24e: Push((int) 24509)
0x24f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x250: Pop(3)
0x251: Push((int) 523317)
0x252: Push((int) -1)
0x253: Push((int) 24531)
0x254: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x255: Pop(3)
0x256: Return(); Pop(0)

0x257: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x258: PushEmpty(bool)
0x259: Call2 0x505

0x25a: Pop(0)
0x25b: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x25c: @ lshStopAnimation()
0x25d: Pop(0)
0x25e: GOTO 0x261

0x25f: @ StopAnimation()
0x260: Pop(0)
0x261: Return(); Pop(0)

0x262: GOTO 0xe3

0x263: Return(); Pop(0)

0x264: PushEmpty()
0x265: PushEmpty(int, object)
0x266: Stack[-1] = Stack[-3]
0x267: Push(-2, 1); TaskCall(0)
0x268: Call2 0x0

0x269: Pop(-2, 1); TaskReturn
0x26a: Pop(2)
0x26b: Return(); Pop(0)

0x26c: PushEmpty()
0x26d: Call2 0x295

0x26e: Pop(0)
0x26f: Return(); Pop(0)

0x270: PushEmpty(bool, bool)
0x271: Push("cleanup")
0x272: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x273: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x274: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x275: @ IsLoaded(Stack[-1])
0x276: Pop(0)
0x277: Pop(0); Push((bool) Stack[-1] == 0)
0x278: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x279: PushEmpty(object)
0x27a: Call2 0x4c7

0x27b: Pop(0)
0x27c: @ RemoveActor(Stack[-1])
0x27d: Pop(1)
0x27e: GOTO 0x283

0x27f: Push("restore")
0x280: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x281: IF (Stack[-1] == 0) GOTO 0x283; Pop(1)

0x282: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x283: Return(); Pop(2)

0x284: Push( Stack[1 + Tasks[-1].StackPointer] )
0x285: IF (Stack[-1] == 0) GOTO 0x28d; Pop(1)

0x286: PushEmpty(object)
0x287: Call2 0x4c7

0x288: Pop(0)
0x289: @ RemoveActor(Stack[-1])
0x28a: Pop(1)
0x28b: @ Hold()
0x28c: Pop(0)
0x28d: PushEmpty()
0x28e: Call2 0x300

0x28f: Pop(0)
0x290: Return(); Pop(0)

0x291: PushEmpty()
0x292: Call2 0x30f

0x293: Pop(0)
0x294: Return(); Pop(0)

0x295: PushEmpty(bool)
0x296: Call2 0x3ac

0x297: Pop(0)
0x298: Pop(1); Push((bool) Stack[-1] == 0)
0x299: IF (Stack[-1] == 0) GOTO 0x29c; Pop(1)

0x29a: @ Hold()
0x29b: Pop(0)
0x29c: @ GetDirection(Stack[-0])
0x29d: Pop(0)
0x29e: PushEmpty()
0x29f: Call2 0x345

0x2a0: Pop(0)
0x2a1: GOTO 0x29e

0x2a2: Return(); Pop(0)

0x2a3: PushEmpty(object, object)
0x2a4: Push("player")
0x2a5: @ FindActor(Stack[-2], Stack[-1])
0x2a6: Pop(1)
0x2a7: Pop(0); Push((bool) Stack[-1] == 0)
0x2a8: IF (Stack[-1] == 0) GOTO 0x2ab; Pop(1)

0x2a9: Stack[-3] = (bool) 0
0x2aa: Return(); Pop(2)

0x2ab: PushEmpty(bool, object)
0x2ac: Stack[-1] = Stack[-3]
0x2ad: Call2 0x3a3

0x2ae: Stack[-5] = Stack[-2]
0x2af: Pop(2)
0x2b0: Return(); Pop(2)

0x2b1: Stack[-1] = 0
0x2b2: Push(CvectorIndex(Stack[-0], 0))
0x2b3: Push(CvectorIndex(Stack[-0], 2))
0x2b4: @ RotateAsync(Stack[-2], Stack[-1])
0x2b5: Pop(2)
0x2b6: Return(); Pop(0)

0x2b7: PushEmpty(object, bool, object, bool)
0x2b8: Push("player")
0x2b9: @ FindActor(Stack[-3], Stack[-1])
0x2ba: Pop(1)
0x2bb: Pop(0); Push((bool) Stack[-2] == 0)
0x2bc: IF (Stack[-1] == 0) GOTO 0x2bf; Pop(1)

0x2bd: Stack[-5] = (bool) 0
0x2be: Return(); Pop(4)

0x2bf: PushEmpty(float, object)
0x2c0: Stack[-1] = Stack[-4]
0x2c1: Call2 0x391

0x2c2: Pop(1)
0x2c3: Push((float)90000.0)
0x2c4: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x2c5: IF (Stack[-1] == 0) GOTO 0x2c8; Pop(1)

0x2c6: Stack[-5] = (bool) 0
0x2c7: Return(); Pop(4)

0x2c8: @ CanSee(Stack[-1], Stack[-2])
0x2c9: Pop(0)
0x2ca: Stack[-5] = Stack[-1]
0x2cb: Return(); Pop(4)

0x2cc: Stack[-2] = 0
0x2cd: PushEmpty(float, float)
0x2ce: Push((int) 8)
0x2cf: Push((int) 16)
0x2d0: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x2d1: Pop(2)
0x2d2: Push((int) 10)
0x2d3: @ SetTimer(Stack[-1], Stack[-2])
0x2d4: Pop(1)
0x2d5: Return(); Pop(2)

0x2d6: Push((int) 10)
0x2d7: @ KillTimer(Stack[-1])
0x2d8: Pop(1)
0x2d9: Return(); Pop(0)

0x2da: PushEmpty()
0x2db: Push((int) 10)
0x2dc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2dd: IF (Stack[-1] == 0) GOTO 0x2ff; Pop(1)

0x2de: PushEmpty()
0x2df: Call2 0x2d6

0x2e0: Pop(0)
0x2e1: PushEmpty(bool)
0x2e2: Stack[-1] = (bool) 0
0x2e3: PushEmpty(bool)
0x2e4: Call2 0x3ac

0x2e5: Pop(0)
0x2e6: IF (Stack[-1] == 0) GOTO 0x2ec; Pop(1)

0x2e7: PushEmpty(bool)
0x2e8: Call2 0x2b7

0x2e9: Pop(0)
0x2ea: IF (Stack[-1] == 0) GOTO 0x2ec; Pop(1)

0x2eb: Stack[-1] = (bool) 1
0x2ec: IF (Stack[-1] == 0) GOTO 0x2f9; Pop(1)

0x2ed: PushEmpty(bool)
0x2ee: Call2 0x2a3

0x2ef: Pop(0)
0x2f0: IF (Stack[-1] == 0) GOTO 0x2f8; Pop(1)

0x2f1: PushEmpty(bool, object)
0x2f2: PushEmpty(object)
0x2f3: Call2 0x4c7

0x2f4: Stack[-2] = Stack[-1]
0x2f5: Pop(1)
0x2f6: Call2 0x442

0x2f7: Pop(2)
0x2f8: GOTO 0x2ff

0x2f9: PushEmpty()
0x2fa: Call2 0x2b2

0x2fb: Pop(0)
0x2fc: PushEmpty()
0x2fd: Call2 0x2cd

0x2fe: Pop(0)
0x2ff: Return(); Pop(0)

0x300: PushEmpty()
0x301: Call2 0x38c

0x302: Pop(0)
0x303: PushEmpty()
0x304: Call2 0x2d6

0x305: Pop(0)
0x306: @ lshStopSpeech()
0x307: Pop(0)
0x308: @ lshStopAnimation()
0x309: Pop(0)
0x30a: @ StopAsync()
0x30b: Pop(0)
0x30c: @ Hold()
0x30d: Pop(0)
0x30e: Return(); Pop(0)

0x30f: @ StopGroup0()
0x310: Pop(0)
0x311: PushEmpty()
0x312: Call2 0x2d6

0x313: Pop(0)
0x314: PushEmpty(string)
0x315: Stack[-1] = "Neutral"
0x316: Call2 0x492

0x317: Pop(1)
0x318: PushEmpty()
0x319: Call2 0x2cd

0x31a: Pop(0)
0x31b: Return(); Pop(0)

0x31c: PushEmpty()
0x31d: Push(Stack[-1])
0x31e: IF (Stack[-1] == 0) GOTO 0x323; Pop(1)

0x31f: PushEmpty()
0x320: Call2 0x2cd

0x321: Pop(0)
0x322: GOTO 0x327

0x323: PushEmpty(string)
0x324: Stack[-1] = "Neutral"
0x325: Call2 0x492

0x326: Pop(1)
0x327: Return(); Pop(0)

0x328: PushEmpty(bool, bool)
0x329: @ IsOverrideActive(Stack[-1])
0x32a: Pop(0)
0x32b: Pop(0); Push((bool) Stack[-1] == 0)
0x32c: IF (Stack[-1] == 0) GOTO 0x344; Pop(1)

0x32d: EventDisable(0)
0x32e: PushEmpty()
0x32f: Call2 0x38c

0x330: Pop(0)
0x331: PushEmpty(bool, object)
0x332: Stack[-1] = Stack[-5]
0x333: Call2 0x3a3

0x334: Pop(2)
0x335: EventEnable(0)
0x336: PushEmpty(object)
0x337: Stack[-1] = Stack[-4]
0x338: Call2 0x264

0x339: Pop(1)
0x33a: PushEmpty(string)
0x33b: Stack[-1] = "Neutral"
0x33c: Call2 0x492

0x33d: Pop(1)
0x33e: PushEmpty()
0x33f: Call2 0x2d6

0x340: Pop(0)
0x341: PushEmpty()
0x342: Call2 0x2cd

0x343: Pop(0)
0x344: Return(); Pop(2)

0x345: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x346: @ WaitForAnimEnd()
0x347: Pop(0)
0x348: PushEmpty(bool)
0x349: Call2 0x3ac

0x34a: Pop(0)
0x34b: Pop(1); Push((bool) Stack[-1] == 0)
0x34c: IF (Stack[-1] == 0) GOTO 0x34e; Pop(1)

0x34d: Return(); Pop(12)

0x34e: PushEmpty(int)
0x34f: Call2 0x4ec

0x350: Stack[-7] = Stack[-1]
0x351: Pop(1)
0x352: Stack[-5] = (int) 0
0x353: PushEmpty(bool)
0x354: Stack[-1] = (bool) 0
0x355: Push((int) 5)
0x356: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x357: IF (Stack[-1] == 0) GOTO 0x35d; Pop(1)

0x358: PushEmpty(bool)
0x359: Call2 0x3ac

0x35a: Pop(0)
0x35b: IF (Stack[-1] == 0) GOTO 0x35d; Pop(1)

0x35c: Stack[-1] = (bool) 1
0x35d: IF (Stack[-1] == 0) GOTO 0x387; Pop(1)

0x35e: Pop(0); Push((bool) Stack[-6] == 0)
0x35f: IF (Stack[-1] == 0) GOTO 0x367; Pop(1)

0x360: Push((int) 3)
0x361: @ Sleep(Stack[-1], Stack[-5])
0x362: Pop(1)
0x363: Pop(0); Push((bool) Stack[-4] == 0)
0x364: IF (Stack[-1] == 0) GOTO 0x366; Pop(1)

0x365: GOTO 0x387

0x366: GOTO 0x37c

0x367: @ irand(Stack[-3], Stack[-6])
0x368: Pop(0)
0x369: Push((int) 5)
0x36a: @ irand(Stack[-3], Stack[-1])
0x36b: Pop(1)
0x36c: Push((int) 0)
0x36d: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x36e: IF (Stack[-1] == 0) GOTO 0x370; Pop(1)

0x36f: Stack[-3] = (int) 0
0x370: Push("all")
0x371: PushEmpty(string, int)
0x372: Stack[-1] = Stack[-6]
0x373: Call2 0x4e5

0x374: Pop(1)
0x375: @ PlayAnimation(Stack[-2], Stack[-1])
0x376: Pop(2)
0x377: @ WaitForAnimEnd(Stack[-1])
0x378: Pop(0)
0x379: Pop(0); Push((bool) Stack[-1] == 0)
0x37a: IF (Stack[-1] == 0) GOTO 0x37c; Pop(1)

0x37b: GOTO 0x387

0x37c: PushEmpty(bool)
0x37d: Call2 0x38a

0x37e: Pop(0)
0x37f: Pop(1); Push((bool) Stack[-1] == 0)
0x380: IF (Stack[-1] == 0) GOTO 0x382; Pop(1)

0x381: GOTO 0x387

0x382: @ ResetAAS()
0x383: Pop(0)
0x384: Push((int) 1)
0x385: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x386: GOTO 0x353

0x387: @ ResetAAS()
0x388: Pop(0)
0x389: Return(); Pop(12)

0x38a: Stack[-1] = (bool) 1
0x38b: Return(); Pop(0)

0x38c: @ StopAnimation()
0x38d: Pop(0)
0x38e: @ StopGroup0()
0x38f: Pop(0)
0x390: Return(); Pop(0)

0x391: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x392: @ GetPosition(Stack[-3])
0x393: Pop(0)
0x394: @@ GetPosition(Stack[-2])
0x395: Pop(0)
0x396: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x397: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x398: Return(); Pop(6)

0x399: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x39a: @ GetPosition(Stack[-3])
0x39b: Pop(0)
0x39c: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x39d: Push(CvectorIndex(Stack[-2], 0))
0x39e: Push(CvectorIndex(Stack[-3], 2))
0x39f: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x3a0: Pop(2)
0x3a1: Stack[-8] = Stack[-1]
0x3a2: Return(); Pop(6)

0x3a3: PushEmpty(cvector, cvector)
0x3a4: @@ GetPosition(Stack[-1])
0x3a5: Pop(0)
0x3a6: PushEmpty(bool, cvector)
0x3a7: Stack[-1] = Stack[-3]
0x3a8: Call2 0x399

0x3a9: Stack[-6] = Stack[-2]
0x3aa: Pop(2)
0x3ab: Return(); Pop(2)

0x3ac: PushEmpty(bool, bool)
0x3ad: @ IsLoaded(Stack[-1])
0x3ae: Pop(0)
0x3af: Stack[-3] = Stack[-1]
0x3b0: Return(); Pop(2)

0x3b1: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x3b2: @@ GetPosition(Stack[-8])
0x3b3: Pop(0)
0x3b4: @@ GetEyesHeight(Stack[-9])
0x3b5: Pop(0)
0x3b6: Push(CvectorIndex(Stack[-8], 1))
0x3b7: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x3b8: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x3b9: @ GetPosition(Stack[-7])
0x3ba: Pop(0)
0x3bb: @ GetEyesHeight(Stack[-9])
0x3bc: Pop(0)
0x3bd: Push(CvectorIndex(Stack[-7], 1))
0x3be: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x3bf: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x3c0: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x3c1: Push(CvectorIndex(Stack[-6], 1))
0x3c2: Stack[-1] = (int) 0
0x3c3: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x3c4: Pop(0); Push(Stack[-6] | Stack[-6]);
0x3c5: Pop(1); Push(Sqrt(Stack[-1]))
0x3c6: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x3c7: Stack[-5] = -Stack[-6]; Pop(0);
0x3c8: Pop(0); Push(Stack[-6] * Stack[-19]);
0x3c9: PushEmpty(cvector, cvector)
0x3ca: Push(CVector(0.0, 1.0, 0.0))
0x3cb: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x3cc: Call2 0x4cd

0x3cd: Pop(1)
0x3ce: Push((int) 25)
0x3cf: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3d0: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3d1: Push(CVector(0.0, 10.0, 0.0))
0x3d2: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x3d3: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x3d4: @ IsOverrideActive(Stack[-2])
0x3d5: Pop(0)
0x3d6: Push(Stack[-2])
0x3d7: IF (Stack[-1] == 0) GOTO 0x3da; Pop(1)

0x3d8: Stack[-21] = (bool) 0
0x3d9: Return(); Pop(18)

0x3da: @ StopWorld()
0x3db: Pop(0)
0x3dc: Push((bool) 1)
0x3dd: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x3de: Pop(1)
0x3df: Push(CvectorIndex(Stack[-4], 0))
0x3e0: Push(CvectorIndex(Stack[-5], 2))
0x3e1: @ Rotate(Stack[-2], Stack[-1])
0x3e2: Pop(2)
0x3e3: PushEmpty(bool)
0x3e4: Call2 0x505

0x3e5: Pop(0)
0x3e6: IF (Stack[-1] == 0) GOTO 0x3e8; Pop(1)

0x3e7: GOTO 0x3f0

0x3e8: Push("head")
0x3e9: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x3ea: Pop(1)
0x3eb: Push(Stack[-1])
0x3ec: IF (Stack[-1] == 0) GOTO 0x3f0; Pop(1)

0x3ed: Push("head")
0x3ee: @ LookAsyncCamera(Stack[-1])
0x3ef: Pop(1)
0x3f0: @ CameraWaitForPlayFinish()
0x3f1: Pop(0)
0x3f2: @ ResumeWorld()
0x3f3: Pop(0)
0x3f4: Stack[-21] = (bool) 1
0x3f5: Return(); Pop(18)

0x3f6: PushEmpty(bool, bool)
0x3f7: Push((bool) 1)
0x3f8: @ CameraSwitchToNormal(Stack[-1])
0x3f9: Pop(1)
0x3fa: PushEmpty(bool)
0x3fb: Call2 0x505

0x3fc: Pop(0)
0x3fd: IF (Stack[-1] == 0) GOTO 0x3ff; Pop(1)

0x3fe: GOTO 0x407

0x3ff: Push("head")
0x400: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x401: Pop(1)
0x402: Push(Stack[-1])
0x403: IF (Stack[-1] == 0) GOTO 0x407; Pop(1)

0x404: Push("head")
0x405: @ UnlookAsync(Stack[-1])
0x406: Pop(1)
0x407: Return(); Pop(2)

0x408: PushEmpty(int, int, int, int)
0x409: Push("voice_common")
0x40a: @ GetVariable(Stack[-1], Stack[-3])
0x40b: Pop(1)
0x40c: Push(Stack[-2])
0x40d: IF (Stack[-1] == 0) GOTO 0x42e; Pop(1)

0x40e: PushEmpty(bool, object)
0x40f: Stack[-1] = Stack[-7]
0x410: Call2 0x442

0x411: Pop(1)
0x412: Pop(1); Push((bool) Stack[-1] == 0)
0x413: IF (Stack[-1] == 0) GOTO 0x41c; Pop(1)

0x414: PushEmpty(bool, object)
0x415: Stack[-1] = Stack[-7]
0x416: Call2 0x467

0x417: Pop(1)
0x418: Pop(1); Push((bool) Stack[-1] == 0)
0x419: IF (Stack[-1] == 0) GOTO 0x41c; Pop(1)

0x41a: Stack[-6] = (bool) 0
0x41b: Return(); Pop(4)

0x41c: Push((int) 2)
0x41d: @ irand(Stack[-2], Stack[-1])
0x41e: Pop(1)
0x41f: Push(Stack[-1])
0x420: IF (Stack[-1] == 0) GOTO 0x429; Pop(1)

0x421: Push("voice_common")
0x422: Push((int) 1)
0x423: Pop(1); Push(Stack[-4] + Stack[-1]);
0x424: Push((int) 3)
0x425: Pop(2); Push(Stack[-2] % Stack[-1]);
0x426: @ SetVariable(Stack[-2], Stack[-1])
0x427: Pop(2)
0x428: GOTO 0x42d

0x429: Push("voice_common")
0x42a: Push((int) 0)
0x42b: @ SetVariable(Stack[-2], Stack[-1])
0x42c: Pop(2)
0x42d: GOTO 0x440

0x42e: PushEmpty(bool, object)
0x42f: Stack[-1] = Stack[-7]
0x430: Call2 0x467

0x431: Pop(1)
0x432: Pop(1); Push((bool) Stack[-1] == 0)
0x433: IF (Stack[-1] == 0) GOTO 0x43c; Pop(1)

0x434: PushEmpty(bool, object)
0x435: Stack[-1] = Stack[-7]
0x436: Call2 0x442

0x437: Pop(1)
0x438: Pop(1); Push((bool) Stack[-1] == 0)
0x439: IF (Stack[-1] == 0) GOTO 0x43c; Pop(1)

0x43a: Stack[-6] = (bool) 0
0x43b: Return(); Pop(4)

0x43c: Push("voice_common")
0x43d: Push((int) 1)
0x43e: @ SetVariable(Stack[-2], Stack[-1])
0x43f: Pop(2)
0x440: Stack[-6] = (bool) 1
0x441: Return(); Pop(4)

0x442: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x443: Stack[-5] = "c"
0x444: Stack[-4] = (int) 0
0x445: Push((int) 1)
0x446: IF (Stack[-1] == 0) GOTO 0x452; Pop(1)

0x447: Push((int) 1)
0x448: Pop(1); Push(Stack[-5] + Stack[-1]);
0x449: Pop(1); Push(Stack[-6] + Stack[-1]);
0x44a: @@ HasProperty(Stack[-1], Stack[-4])
0x44b: Pop(1)
0x44c: Pop(0); Push((bool) Stack[-3] == 0)
0x44d: IF (Stack[-1] == 0) GOTO 0x44f; Pop(1)

0x44e: GOTO 0x452

0x44f: Push((int) 1)
0x450: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x451: GOTO 0x445

0x452: Pop(0); Push((bool) Stack[-4] == 0)
0x453: IF (Stack[-1] == 0) GOTO 0x456; Pop(1)

0x454: Stack[-12] = (bool) 0
0x455: Return(); Pop(10)

0x456: Stack[-2] = (int) 0
0x457: Push((int) 1)
0x458: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x459: IF (Stack[-1] == 0) GOTO 0x45c; Pop(1)

0x45a: @ irand(Stack[-2], Stack[-4])
0x45b: Pop(0)
0x45c: Push((int) 1)
0x45d: Pop(1); Push(Stack[-3] + Stack[-1]);
0x45e: Pop(1); Push(Stack[-6] + Stack[-1]);
0x45f: @@ GetProperty(Stack[-1], Stack[-2])
0x460: Pop(1)
0x461: PushEmpty(bool, string)
0x462: Stack[-1] = Stack[-3]
0x463: Call2 0x4b1

0x464: Stack[-14] = Stack[-2]
0x465: Pop(2)
0x466: Return(); Pop(10)

0x467: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x468: Push("d")
0x469: PushEmpty(int)
0x46a: Call2 0x4dc

0x46b: Pop(0)
0x46c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x46d: Push("m")
0x46e: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x46f: Stack[-4] = (int) 0
0x470: Push((int) 1)
0x471: IF (Stack[-1] == 0) GOTO 0x47d; Pop(1)

0x472: Push((int) 1)
0x473: Pop(1); Push(Stack[-5] + Stack[-1]);
0x474: Pop(1); Push(Stack[-6] + Stack[-1]);
0x475: @@ HasProperty(Stack[-1], Stack[-4])
0x476: Pop(1)
0x477: Pop(0); Push((bool) Stack[-3] == 0)
0x478: IF (Stack[-1] == 0) GOTO 0x47a; Pop(1)

0x479: GOTO 0x47d

0x47a: Push((int) 1)
0x47b: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x47c: GOTO 0x470

0x47d: Pop(0); Push((bool) Stack[-4] == 0)
0x47e: IF (Stack[-1] == 0) GOTO 0x481; Pop(1)

0x47f: Stack[-12] = (bool) 0
0x480: Return(); Pop(10)

0x481: Stack[-2] = (int) 0
0x482: Push((int) 1)
0x483: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x484: IF (Stack[-1] == 0) GOTO 0x487; Pop(1)

0x485: @ irand(Stack[-2], Stack[-4])
0x486: Pop(0)
0x487: Push((int) 1)
0x488: Pop(1); Push(Stack[-3] + Stack[-1]);
0x489: Pop(1); Push(Stack[-6] + Stack[-1]);
0x48a: @@ GetProperty(Stack[-1], Stack[-2])
0x48b: Pop(1)
0x48c: PushEmpty(bool, string)
0x48d: Stack[-1] = Stack[-3]
0x48e: Call2 0x4b1

0x48f: Stack[-14] = Stack[-2]
0x490: Pop(2)
0x491: Return(); Pop(10)

0x492: PushEmpty(bool, float, float, bool, float, float)
0x493: @ lshHasAnimation(Stack[-3], Stack[-7])
0x494: Pop(0)
0x495: Push(Stack[-3])
0x496: IF (Stack[-1] == 0) GOTO 0x49d; Pop(1)

0x497: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x498: Pop(0)
0x499: Push((bool) 0)
0x49a: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x49b: Pop(1)
0x49c: GOTO 0x4a1

0x49d: Push("Can't find lsh animation : ")
0x49e: Pop(1); Push(Stack[-1] + Stack[-8]);
0x49f: @ Trace(Stack[-1])
0x4a0: Pop(1)
0x4a1: Return(); Pop(6)

0x4a2: PushEmpty(bool, float, float, bool, float, float)
0x4a3: @ lshHasAnimation(Stack[-3], Stack[-8])
0x4a4: Pop(0)
0x4a5: Push(Stack[-3])
0x4a6: IF (Stack[-1] == 0) GOTO 0x4ac; Pop(1)

0x4a7: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x4a8: Pop(0)
0x4a9: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x4aa: Pop(0)
0x4ab: GOTO 0x4b0

0x4ac: Push("Can't find lsh animation : ")
0x4ad: Pop(1); Push(Stack[-1] + Stack[-9]);
0x4ae: @ Trace(Stack[-1])
0x4af: Pop(1)
0x4b0: Return(); Pop(6)

0x4b1: PushEmpty(bool, bool)
0x4b2: PushEmpty(bool)
0x4b3: Call2 0x505

0x4b4: Pop(0)
0x4b5: IF (Stack[-1] == 0) GOTO 0x4be; Pop(1)

0x4b6: @ lshHasSpeech(Stack[-1], Stack[-3])
0x4b7: Pop(0)
0x4b8: Push(Stack[-1])
0x4b9: IF (Stack[-1] == 0) GOTO 0x4be; Pop(1)

0x4ba: @ lshPlaySpeech(Stack[-3])
0x4bb: Pop(0)
0x4bc: Stack[-4] = (bool) 1
0x4bd: Return(); Pop(2)

0x4be: Stack[-4] = (bool) 0
0x4bf: Return(); Pop(2)

0x4c0: PushEmpty(bool)
0x4c1: Call2 0x505

0x4c2: Pop(0)
0x4c3: IF (Stack[-1] == 0) GOTO 0x4c6; Pop(1)

0x4c4: @ lshStopSpeech()
0x4c5: Pop(0)
0x4c6: Return(); Pop(0)

0x4c7: PushEmpty(object, object)
0x4c8: @ self(Stack[-1])
0x4c9: Pop(0)
0x4ca: Stack[-3] = Stack[-1]
0x4cb: Return(); Pop(2)

0x4cc: Stack[-1] = 0
0x4cd: PushEmpty(float, float)
0x4ce: Pop(0); Push(Stack[-3] | Stack[-3]);
0x4cf: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x4d0: Push((float)0.0)
0x4d1: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x4d2: IF (Stack[-1] == 0) GOTO 0x4d5; Pop(1)

0x4d3: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x4d4: Return(); Pop(2)

0x4d5: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x4d6: Return(); Pop(2)

0x4d7: PushEmpty(int, int)
0x4d8: @ GetVariable(Stack[-3], Stack[-1])
0x4d9: Pop(0)
0x4da: Stack[-4] = Stack[-1]
0x4db: Return(); Pop(2)

0x4dc: PushEmpty(float, float)
0x4dd: @ GetGameTime(Stack[-1])
0x4de: Pop(0)
0x4df: Push((int) 1)
0x4e0: PushEmpty(int)
0x4e1: Push((int) 24)
0x4e2: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x4e3: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x4e4: Return(); Pop(2)

0x4e5: PushEmpty(string, string)
0x4e6: Stack[-1] = "idle"
0x4e7: Push(Stack[-3])
0x4e8: IF (Stack[-1] == 0) GOTO 0x4ea; Pop(1)

0x4e9: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x4ea: Stack[-4] = Stack[-1]
0x4eb: Return(); Pop(2)

0x4ec: PushEmpty(int, bool, int, bool)
0x4ed: Stack[-2] = (int) 0
0x4ee: Push("all")
0x4ef: PushEmpty(string, int)
0x4f0: Stack[-1] = Stack[-5]
0x4f1: Call2 0x4e5

0x4f2: Pop(1)
0x4f3: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x4f4: Pop(2)
0x4f5: Pop(0); Push((bool) Stack[-1] == 0)
0x4f6: IF (Stack[-1] == 0) GOTO 0x4f8; Pop(1)

0x4f7: GOTO 0x4fb

0x4f8: Push((int) 1)
0x4f9: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x4fa: GOTO 0x4ee

0x4fb: Stack[-5] = Stack[-2]
0x4fc: Return(); Pop(4)

0x4fd: Stack[-1] = (int) 515540
0x4fe: Return(); Pop(0)

0x4ff: Stack[-1] = (int) 502865
0x500: Return(); Pop(0)

0x501: Stack[-1] = "ui/NPC_Klara.png"
0x502: Return(); Pop(0)

0x503: Stack[-1] = "ui/NPC_Klara_b.png"
0x504: Return(); Pop(0)

0x505: Stack[-1] = (bool) 1
0x506: Return(); Pop(0)

0x507: PushEmpty()
0x508: Push("oob11KlaraD1")
0x509: Push((int) 1)
0x50a: @ SetVariable(Stack[-2], Stack[-1])
0x50b: Pop(2)
0x50c: Return(); Pop(0)

0x50d: PushEmpty()
0x50e: PushEmpty(int, string)
0x50f: Stack[-1] = "b11q01VictimChoosed"
0x510: Call2 0x4d7

0x511: Pop(1)
0x512: Push((int) 0)
0x513: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x514: IF (Stack[-1] == 0) GOTO 0x517; Pop(1)

0x515: Stack[-2] = (bool) 1
0x516: Return(); Pop(0)

0x517: Stack[-2] = (bool) 0
0x518: Return(); Pop(0)

0x519: PushEmpty()
0x51a: PushEmpty(int, string)
0x51b: Stack[-1] = "oob11KlaraD1"
0x51c: Call2 0x4d7

0x51d: Pop(1)
0x51e: Push((int) 0)
0x51f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x520: IF (Stack[-1] == 0) GOTO 0x523; Pop(1)

0x521: Stack[-2] = (bool) 1
0x522: Return(); Pop(0)

0x523: Stack[-2] = (bool) 0
0x524: Return(); Pop(0)

0x525: PushEmpty(int, int)
0x526: Push("branch")
0x527: @ GetVariable(Stack[-1], Stack[-2])
0x528: Pop(1)
0x529: Push((int) 0)
0x52a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x52b: IF (Stack[-1] == 0) GOTO 0x52f; Pop(1)

0x52c: Stack[-3] = (int) 1
0x52d: Return(); Pop(2)

0x52e: GOTO 0x534

0x52f: Push((int) 1)
0x530: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x531: IF (Stack[-1] == 0) GOTO 0x534; Pop(1)

0x532: Stack[-3] = (int) 2
0x533: Return(); Pop(2)

0x534: Stack[-3] = (int) 3
0x535: Return(); Pop(2)

