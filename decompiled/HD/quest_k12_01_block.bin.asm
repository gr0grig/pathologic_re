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
	Doubt
	SetMessage
	ClearReplies
	AddReply
	Neutral
	all
	idle
	Untrust
	cleanup
	restore
	GetPosition
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	GetProperty
	m
	Can't find lsh animation : 
	Door 
	 not found
	locked
	SetProperty
	game_final
	isobor@door1
	k12q01BurahInSobor
	k12q01DankoInSobor
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	branch
	ui/NPC_Block.png
	ui/NPC_Block_b.png

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
	IsLoaded (1 args)
	RemoveActor (1 args)
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
	GetVariable (2 args)
	irand (2 args)
	SetVariable (2 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshHasSpeech (2 args)
	lshPlaySpeech (1 args)
	lshStopSpeech (0 args)
	self (1 args)
	FindActor (2 args)
	GetGameTime (1 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x271
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xd9 Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x275 Vars = (object)
		EVENT_26 Op = 0x281 Vars = (string)
		EVENT_6 Op = 0x29d Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x2af

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x4bb

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x4b9

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x4bd

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x4bf

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x4a8

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
0x31: Call2 0x3c5

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x306

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
0x48: Call2 0x2f4

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
0x56: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x427

0x5a: Pop(1)
0x5b: Pop(1); Push((bool) Stack[-1] == 0)
0x5c: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x5d: PushEmpty(string)
0x5e: Stack[-1] = "Doubt"
0x5f: Call2 0xc3

0x60: Pop(1)
0x61: Push((int) 539253)
0x62: @@ SetMessage(Stack[-1])
0x63: Pop(1)
0x64: @@ ClearReplies()
0x65: Pop(0)
0x66: Push((int) 539254)
0x67: Push((int) 41198)
0x68: Push((int) 41197)
0x69: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6a: Pop(3)
0x6b: Push((int) 539271)
0x6c: Push((int) 41215)
0x6d: Push((int) 41214)
0x6e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f: Pop(3)
0x70: PushEmpty(bool, object)
0x71: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x72: Call2 0x43f

0x73: Pop(1)
0x74: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x75: Push((int) 539257)
0x76: Push((int) 41201)
0x77: Push((int) 41200)
0x78: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x79: Pop(3)
0x7a: PushEmpty(bool, object)
0x7b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7c: Call2 0x433

0x7d: Pop(1)
0x7e: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x7f: Push((int) 539262)
0x80: Push((int) 41206)
0x81: Push((int) 41205)
0x82: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x83: Pop(3)
0x84: Push((int) 540270)
0x85: Push((int) 42254)
0x86: Push((int) 42253)
0x87: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x88: Pop(3)
0x89: GOTO 0xa5

0x8a: PushEmpty(string)
0x8b: Stack[-1] = "Neutral"
0x8c: Call2 0xc3

0x8d: Pop(1)
0x8e: Push((int) 539276)
0x8f: @@ SetMessage(Stack[-1])
0x90: Pop(1)
0x91: @@ ClearReplies()
0x92: Pop(0)
0x93: Push((int) 539277)
0x94: Push((int) -1)
0x95: Push((int) 41220)
0x96: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x97: Pop(3)
0x98: Push((int) 542911)
0x99: Push((int) -1)
0x9a: Push((int) 45342)
0x9b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9c: Pop(3)
0x9d: Push((int) 542912)
0x9e: Push((int) -1)
0x9f: Push((int) 45343)
0xa0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa1: Pop(3)
0xa2: GOTO 0xa5

0xa3: Return(); Pop(0)

0xa4: GOTO 0x55

0xa5: PushEmpty(bool)
0xa6: Call2 0x4c1

0xa7: Pop(0)
0xa8: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xa9: @ lshWaitForAnimEnd()
0xaa: Pop(0)
0xab: Push( Stack[3 + Tasks[-1].StackPointer] )
0xac: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xad: GOTO 0xb3

0xae: PushEmpty(string)
0xaf: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xb0: Call2 0x390

0xb1: Pop(1)
0xb2: GOTO 0xa9

0xb3: GOTO 0xc2

0xb4: Push("all")
0xb5: Push("idle")
0xb6: @ PlayAnimation(Stack[-2], Stack[-1])
0xb7: Pop(2)
0xb8: @ WaitForAnimEnd()
0xb9: Pop(0)
0xba: Push( Stack[3 + Tasks[-1].StackPointer] )
0xbb: IF (Stack[-1] == 0) GOTO 0xbd; Pop(1)

0xbc: GOTO 0xc2

0xbd: Push("all")
0xbe: Push("idle")
0xbf: @ PlayAnimation(Stack[-2], Stack[-1])
0xc0: Pop(2)
0xc1: GOTO 0xb8

0xc2: Return(); Pop(0)

0xc3: PushEmpty()
0xc4: PushEmpty(bool)
0xc5: Call2 0x4c1

0xc6: Pop(0)
0xc7: Pop(1); Push((bool) Stack[-1] == 0)
0xc8: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xc9: Return(); Pop(0)

0xca: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xcb: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xcc: Return(); Pop(0)

0xcd: PushEmpty(string, bool)
0xce: Stack[-2] = Stack[-3]
0xcf: Push("")
0xd0: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xd1: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xd2: Stack[-1] = (bool) 0
0xd3: GOTO 0xd5

0xd4: Stack[-1] = (bool) 1
0xd5: Call2 0x3a0

0xd6: Pop(2)
0xd7: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xd8: Return(); Pop(0)

0xd9: PushEmpty()
0xda: Push((int) 1)
0xdb: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0xdc: PushEmpty()
0xdd: Call2 0x3be

0xde: Pop(0)
0xdf: Push((int) 41218)
0xe0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe1: IF (Stack[-1] == 0) GOTO 0xf1; Pop(1)

0xe2: PushEmpty(object, object)
0xe3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe5: Call2 0x400

0xe6: Pop(2)
0xe7: PushEmpty(object, object)
0xe8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xea: Call2 0x406

0xeb: Pop(2)
0xec: PushEmpty(object, object)
0xed: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xee: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xef: Call2 0x412

0xf0: Pop(2)
0xf1: Push((int) 41204)
0xf2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf3: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xf4: PushEmpty(object, object)
0xf5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf7: Call2 0x3fa

0xf8: Pop(2)
0xf9: PushEmpty(object, object)
0xfa: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfc: Call2 0x406

0xfd: Pop(2)
0xfe: PushEmpty(object, object)
0xff: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x100: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x101: Call2 0x40d

0x102: Pop(2)
0x103: Push((int) 41213)
0x104: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x105: IF (Stack[-1] == 0) GOTO 0x115; Pop(1)

0x106: PushEmpty(object, object)
0x107: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x108: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x109: Call2 0x3f4

0x10a: Pop(2)
0x10b: PushEmpty(object, object)
0x10c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10e: Call2 0x406

0x10f: Pop(2)
0x110: PushEmpty(object, object)
0x111: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x112: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x113: Call2 0x417

0x114: Pop(2)
0x115: Push((int) 42255)
0x116: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x117: IF (Stack[-1] == 0) GOTO 0x127; Pop(1)

0x118: PushEmpty(object, object)
0x119: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11b: Call2 0x41c

0x11c: Pop(2)
0x11d: PushEmpty(object, object)
0x11e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x120: Call2 0x406

0x121: Pop(2)
0x122: PushEmpty(object, object)
0x123: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x124: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x125: Call2 0x422

0x126: Pop(2)
0x127: Push((int) 41196)
0x128: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x129: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x12a: PushEmpty(bool, object)
0x12b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x12c: Call2 0x427

0x12d: Pop(1)
0x12e: Pop(1); Push((bool) Stack[-1] == 0)
0x12f: IF (Stack[-1] == 0) GOTO 0x15d; Pop(1)

0x130: PushEmpty(string)
0x131: Stack[-1] = "Doubt"
0x132: Call2 0xc3

0x133: Pop(1)
0x134: Push((int) 539253)
0x135: @@ SetMessage(Stack[-1])
0x136: Pop(1)
0x137: @@ ClearReplies()
0x138: Pop(0)
0x139: Push((int) 539254)
0x13a: Push((int) 41198)
0x13b: Push((int) 41197)
0x13c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13d: Pop(3)
0x13e: Push((int) 539271)
0x13f: Push((int) 41215)
0x140: Push((int) 41214)
0x141: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x142: Pop(3)
0x143: PushEmpty(bool, object)
0x144: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x145: Call2 0x43f

0x146: Pop(1)
0x147: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x148: Push((int) 539257)
0x149: Push((int) 41201)
0x14a: Push((int) 41200)
0x14b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14c: Pop(3)
0x14d: PushEmpty(bool, object)
0x14e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x14f: Call2 0x433

0x150: Pop(1)
0x151: IF (Stack[-1] == 0) GOTO 0x157; Pop(1)

0x152: Push((int) 539262)
0x153: Push((int) 41206)
0x154: Push((int) 41205)
0x155: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x156: Pop(3)
0x157: Push((int) 540270)
0x158: Push((int) 42254)
0x159: Push((int) 42253)
0x15a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15b: Pop(3)
0x15c: Return(); Pop(0)

0x15d: PushEmpty(string)
0x15e: Stack[-1] = "Neutral"
0x15f: Call2 0xc3

0x160: Pop(1)
0x161: Push((int) 539276)
0x162: @@ SetMessage(Stack[-1])
0x163: Pop(1)
0x164: @@ ClearReplies()
0x165: Pop(0)
0x166: Push((int) 539277)
0x167: Push((int) -1)
0x168: Push((int) 41220)
0x169: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16a: Pop(3)
0x16b: Push((int) 542911)
0x16c: Push((int) -1)
0x16d: Push((int) 45342)
0x16e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16f: Pop(3)
0x170: Push((int) 542912)
0x171: Push((int) -1)
0x172: Push((int) 45343)
0x173: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x174: Pop(3)
0x175: Return(); Pop(0)

0x176: Push((int) 42254)
0x177: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x178: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x179: PushEmpty(string)
0x17a: Stack[-1] = "Neutral"
0x17b: Call2 0xc3

0x17c: Pop(1)
0x17d: Push((int) 540271)
0x17e: @@ SetMessage(Stack[-1])
0x17f: Pop(1)
0x180: @@ ClearReplies()
0x181: Pop(0)
0x182: Push((int) 542922)
0x183: Push((int) 45358)
0x184: Push((int) 45356)
0x185: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x186: Pop(3)
0x187: Push((int) 542923)
0x188: Push((int) 45358)
0x189: Push((int) 45357)
0x18a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18b: Pop(3)
0x18c: Push((int) 542925)
0x18d: Push((int) 45358)
0x18e: Push((int) 45359)
0x18f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x190: Pop(3)
0x191: Return(); Pop(0)

0x192: Push((int) 45358)
0x193: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x194: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x195: PushEmpty(string)
0x196: Stack[-1] = "Doubt"
0x197: Call2 0xc3

0x198: Pop(1)
0x199: Push((int) 542924)
0x19a: @@ SetMessage(Stack[-1])
0x19b: Pop(1)
0x19c: @@ ClearReplies()
0x19d: Pop(0)
0x19e: Push((int) 540272)
0x19f: Push((int) -1)
0x1a0: Push((int) 42255)
0x1a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a2: Pop(3)
0x1a3: Return(); Pop(0)

0x1a4: Push((int) 41206)
0x1a5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a6: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1a7: PushEmpty(string)
0x1a8: Stack[-1] = "Neutral"
0x1a9: Call2 0xc3

0x1aa: Pop(1)
0x1ab: Push((int) 539263)
0x1ac: @@ SetMessage(Stack[-1])
0x1ad: Pop(1)
0x1ae: @@ ClearReplies()
0x1af: Pop(0)
0x1b0: Push((int) 542926)
0x1b1: Push((int) 45363)
0x1b2: Push((int) 45362)
0x1b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b4: Pop(3)
0x1b5: Return(); Pop(0)

0x1b6: Push((int) 45363)
0x1b7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b8: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1b9: PushEmpty(string)
0x1ba: Stack[-1] = "Doubt"
0x1bb: Call2 0xc3

0x1bc: Pop(1)
0x1bd: Push((int) 542927)
0x1be: @@ SetMessage(Stack[-1])
0x1bf: Pop(1)
0x1c0: @@ ClearReplies()
0x1c1: Pop(0)
0x1c2: Push((int) 539270)
0x1c3: Push((int) -1)
0x1c4: Push((int) 41213)
0x1c5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c6: Pop(3)
0x1c7: Return(); Pop(0)

0x1c8: Push((int) 41201)
0x1c9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ca: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1cb: PushEmpty(string)
0x1cc: Stack[-1] = "Untrust"
0x1cd: Call2 0xc3

0x1ce: Pop(1)
0x1cf: Push((int) 539258)
0x1d0: @@ SetMessage(Stack[-1])
0x1d1: Pop(1)
0x1d2: @@ ClearReplies()
0x1d3: Pop(0)
0x1d4: Push((int) 539259)
0x1d5: Push((int) 41203)
0x1d6: Push((int) 41202)
0x1d7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d8: Pop(3)
0x1d9: Return(); Pop(0)

0x1da: Push((int) 41203)
0x1db: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1dc: IF (Stack[-1] == 0) GOTO 0x1ec; Pop(1)

0x1dd: PushEmpty(string)
0x1de: Stack[-1] = "Untrust"
0x1df: Call2 0xc3

0x1e0: Pop(1)
0x1e1: Push((int) 539260)
0x1e2: @@ SetMessage(Stack[-1])
0x1e3: Pop(1)
0x1e4: @@ ClearReplies()
0x1e5: Pop(0)
0x1e6: Push((int) 539261)
0x1e7: Push((int) -1)
0x1e8: Push((int) 41204)
0x1e9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ea: Pop(3)
0x1eb: Return(); Pop(0)

0x1ec: Push((int) 41215)
0x1ed: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ee: IF (Stack[-1] == 0) GOTO 0x203; Pop(1)

0x1ef: PushEmpty(string)
0x1f0: Stack[-1] = "Neutral"
0x1f1: Call2 0xc3

0x1f2: Pop(1)
0x1f3: Push((int) 539272)
0x1f4: @@ SetMessage(Stack[-1])
0x1f5: Pop(1)
0x1f6: @@ ClearReplies()
0x1f7: Pop(0)
0x1f8: Push((int) 539273)
0x1f9: Push((int) 41217)
0x1fa: Push((int) 41216)
0x1fb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1fc: Pop(3)
0x1fd: Push((int) 542914)
0x1fe: Push((int) 45346)
0x1ff: Push((int) 45345)
0x200: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x201: Pop(3)
0x202: Return(); Pop(0)

0x203: Push((int) 45346)
0x204: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x205: IF (Stack[-1] == 0) GOTO 0x215; Pop(1)

0x206: PushEmpty(string)
0x207: Stack[-1] = "Neutral"
0x208: Call2 0xc3

0x209: Pop(1)
0x20a: Push((int) 542915)
0x20b: @@ SetMessage(Stack[-1])
0x20c: Pop(1)
0x20d: @@ ClearReplies()
0x20e: Pop(0)
0x20f: Push((int) 542916)
0x210: Push((int) 41217)
0x211: Push((int) 45347)
0x212: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x213: Pop(3)
0x214: Return(); Pop(0)

0x215: Push((int) 41217)
0x216: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x217: IF (Stack[-1] == 0) GOTO 0x23b; Pop(1)

0x218: PushEmpty(string)
0x219: Stack[-1] = "Neutral"
0x21a: Call2 0xc3

0x21b: Pop(1)
0x21c: Push((int) 539274)
0x21d: @@ SetMessage(Stack[-1])
0x21e: Pop(1)
0x21f: @@ ClearReplies()
0x220: Pop(0)
0x221: Push((int) 539275)
0x222: Push((int) -1)
0x223: Push((int) 41218)
0x224: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x225: Pop(3)
0x226: Return(); Pop(0)

0x227: PushEmpty(string)
0x228: Stack[-1] = "Neutral"
0x229: Call2 0xc3

0x22a: Pop(1)
0x22b: Push((int) 542917)
0x22c: @@ SetMessage(Stack[-1])
0x22d: Pop(1)
0x22e: @@ ClearReplies()
0x22f: Pop(0)
0x230: Push((int) 542918)
0x231: Push((int) 41217)
0x232: Push((int) 45349)
0x233: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x234: Pop(3)
0x235: Push((int) 542919)
0x236: Push((int) 45351)
0x237: Push((int) 45350)
0x238: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x239: Pop(3)
0x23a: Return(); Pop(0)

0x23b: Push((int) 45351)
0x23c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x23d: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x23e: PushEmpty(string)
0x23f: Stack[-1] = "Neutral"
0x240: Call2 0xc3

0x241: Pop(1)
0x242: Push((int) 542920)
0x243: @@ SetMessage(Stack[-1])
0x244: Pop(1)
0x245: @@ ClearReplies()
0x246: Pop(0)
0x247: Push((int) 542921)
0x248: Push((int) 41217)
0x249: Push((int) 45352)
0x24a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24b: Pop(3)
0x24c: Return(); Pop(0)

0x24d: Push((int) 41198)
0x24e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x24f: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x250: PushEmpty(string)
0x251: Stack[-1] = "Untrust"
0x252: Call2 0xc3

0x253: Pop(1)
0x254: Push((int) 539255)
0x255: @@ SetMessage(Stack[-1])
0x256: Pop(1)
0x257: @@ ClearReplies()
0x258: Pop(0)
0x259: Push((int) 539256)
0x25a: Push((int) -1)
0x25b: Push((int) 41199)
0x25c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x25d: Pop(3)
0x25e: Push((int) 542913)
0x25f: Push((int) -1)
0x260: Push((int) 45344)
0x261: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x262: Pop(3)
0x263: Return(); Pop(0)

0x264: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x265: PushEmpty(bool)
0x266: Call2 0x4c1

0x267: Pop(0)
0x268: IF (Stack[-1] == 0) GOTO 0x26c; Pop(1)

0x269: @ lshStopAnimation()
0x26a: Pop(0)
0x26b: GOTO 0x26e

0x26c: @ StopAnimation()
0x26d: Pop(0)
0x26e: Return(); Pop(0)

0x26f: GOTO 0xda

0x270: Return(); Pop(0)

0x271: PushEmpty()
0x272: Call2 0x27d

0x273: Pop(0)
0x274: Return(); Pop(0)

0x275: PushEmpty()
0x276: PushEmpty(int, object)
0x277: Stack[-1] = Stack[-3]
0x278: Push(-2, 1); TaskCall(0)
0x279: Call2 0x0

0x27a: Pop(-2, 1); TaskReturn
0x27b: Pop(2)
0x27c: Return(); Pop(0)

0x27d: @ Hold()
0x27e: Pop(0)
0x27f: GOTO 0x27d

0x280: Return(); Pop(0)

0x281: PushEmpty(bool, bool)
0x282: Push("cleanup")
0x283: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x284: IF (Stack[-1] == 0) GOTO 0x298; Pop(1)

0x285: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x286: @ IsLoaded(Stack[-1])
0x287: Pop(0)
0x288: PushEmpty(bool)
0x289: Stack[-1] = (bool) 0
0x28a: Pop(0); Push((bool) Stack[-2] == 0)
0x28b: IF (Stack[-1] == 0) GOTO 0x291; Pop(1)

0x28c: PushEmpty(bool)
0x28d: Call2 0x2ad

0x28e: Pop(0)
0x28f: IF (Stack[-1] == 0) GOTO 0x291; Pop(1)

0x290: Stack[-1] = (bool) 1
0x291: IF (Stack[-1] == 0) GOTO 0x297; Pop(1)

0x292: PushEmpty(object)
0x293: Call2 0x3c5

0x294: Pop(0)
0x295: @ RemoveActor(Stack[-1])
0x296: Pop(1)
0x297: GOTO 0x29c

0x298: Push("restore")
0x299: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x29a: IF (Stack[-1] == 0) GOTO 0x29c; Pop(1)

0x29b: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x29c: Return(); Pop(2)

0x29d: PushEmpty(bool)
0x29e: Stack[-1] = (bool) 0
0x29f: Push( Stack[0 + Tasks[-1].StackPointer] )
0x2a0: IF (Stack[-1] == 0) GOTO 0x2a6; Pop(1)

0x2a1: PushEmpty(bool)
0x2a2: Call2 0x2ad

0x2a3: Pop(0)
0x2a4: IF (Stack[-1] == 0) GOTO 0x2a6; Pop(1)

0x2a5: Stack[-1] = (bool) 1
0x2a6: IF (Stack[-1] == 0) GOTO 0x2ac; Pop(1)

0x2a7: PushEmpty(object)
0x2a8: Call2 0x3c5

0x2a9: Pop(0)
0x2aa: @ RemoveActor(Stack[-1])
0x2ab: Pop(1)
0x2ac: Return(); Pop(0)

0x2ad: Stack[-1] = (bool) 1
0x2ae: Return(); Pop(0)

0x2af: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x2b0: @@ GetPosition(Stack[-8])
0x2b1: Pop(0)
0x2b2: @@ GetEyesHeight(Stack[-9])
0x2b3: Pop(0)
0x2b4: Push(CvectorIndex(Stack[-8], 1))
0x2b5: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2b6: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2b7: @ GetPosition(Stack[-7])
0x2b8: Pop(0)
0x2b9: @ GetEyesHeight(Stack[-9])
0x2ba: Pop(0)
0x2bb: Push(CvectorIndex(Stack[-7], 1))
0x2bc: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2bd: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2be: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2bf: Push(CvectorIndex(Stack[-6], 1))
0x2c0: Stack[-1] = (int) 0
0x2c1: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2c2: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2c3: Pop(1); Push(Sqrt(Stack[-1]))
0x2c4: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2c5: Stack[-5] = -Stack[-6]; Pop(0);
0x2c6: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2c7: PushEmpty(cvector, cvector)
0x2c8: Push(CVector(0.0, 1.0, 0.0))
0x2c9: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2ca: Call2 0x3cb

0x2cb: Pop(1)
0x2cc: Push((int) 25)
0x2cd: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2ce: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2cf: Push(CVector(0.0, 10.0, 0.0))
0x2d0: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2d1: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2d2: @ IsOverrideActive(Stack[-2])
0x2d3: Pop(0)
0x2d4: Push(Stack[-2])
0x2d5: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2d6: Stack[-21] = (bool) 0
0x2d7: Return(); Pop(18)

0x2d8: @ StopWorld()
0x2d9: Pop(0)
0x2da: Push((bool) 1)
0x2db: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x2dc: Pop(1)
0x2dd: Push(CvectorIndex(Stack[-4], 0))
0x2de: Push(CvectorIndex(Stack[-5], 2))
0x2df: @ Rotate(Stack[-2], Stack[-1])
0x2e0: Pop(2)
0x2e1: PushEmpty(bool)
0x2e2: Call2 0x4c1

0x2e3: Pop(0)
0x2e4: IF (Stack[-1] == 0) GOTO 0x2e6; Pop(1)

0x2e5: GOTO 0x2ee

0x2e6: Push("head")
0x2e7: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2e8: Pop(1)
0x2e9: Push(Stack[-1])
0x2ea: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x2eb: Push("head")
0x2ec: @ LookAsyncCamera(Stack[-1])
0x2ed: Pop(1)
0x2ee: @ CameraWaitForPlayFinish()
0x2ef: Pop(0)
0x2f0: @ ResumeWorld()
0x2f1: Pop(0)
0x2f2: Stack[-21] = (bool) 1
0x2f3: Return(); Pop(18)

0x2f4: PushEmpty(bool, bool)
0x2f5: Push((bool) 1)
0x2f6: @ CameraSwitchToNormal(Stack[-1])
0x2f7: Pop(1)
0x2f8: PushEmpty(bool)
0x2f9: Call2 0x4c1

0x2fa: Pop(0)
0x2fb: IF (Stack[-1] == 0) GOTO 0x2fd; Pop(1)

0x2fc: GOTO 0x305

0x2fd: Push("head")
0x2fe: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2ff: Pop(1)
0x300: Push(Stack[-1])
0x301: IF (Stack[-1] == 0) GOTO 0x305; Pop(1)

0x302: Push("head")
0x303: @ UnlookAsync(Stack[-1])
0x304: Pop(1)
0x305: Return(); Pop(2)

0x306: PushEmpty(int, int, int, int)
0x307: Push("voice_common")
0x308: @ GetVariable(Stack[-1], Stack[-3])
0x309: Pop(1)
0x30a: Push(Stack[-2])
0x30b: IF (Stack[-1] == 0) GOTO 0x32c; Pop(1)

0x30c: PushEmpty(bool, object)
0x30d: Stack[-1] = Stack[-7]
0x30e: Call2 0x340

0x30f: Pop(1)
0x310: Pop(1); Push((bool) Stack[-1] == 0)
0x311: IF (Stack[-1] == 0) GOTO 0x31a; Pop(1)

0x312: PushEmpty(bool, object)
0x313: Stack[-1] = Stack[-7]
0x314: Call2 0x365

0x315: Pop(1)
0x316: Pop(1); Push((bool) Stack[-1] == 0)
0x317: IF (Stack[-1] == 0) GOTO 0x31a; Pop(1)

0x318: Stack[-6] = (bool) 0
0x319: Return(); Pop(4)

0x31a: Push((int) 2)
0x31b: @ irand(Stack[-2], Stack[-1])
0x31c: Pop(1)
0x31d: Push(Stack[-1])
0x31e: IF (Stack[-1] == 0) GOTO 0x327; Pop(1)

0x31f: Push("voice_common")
0x320: Push((int) 1)
0x321: Pop(1); Push(Stack[-4] + Stack[-1]);
0x322: Push((int) 3)
0x323: Pop(2); Push(Stack[-2] % Stack[-1]);
0x324: @ SetVariable(Stack[-2], Stack[-1])
0x325: Pop(2)
0x326: GOTO 0x32b

0x327: Push("voice_common")
0x328: Push((int) 0)
0x329: @ SetVariable(Stack[-2], Stack[-1])
0x32a: Pop(2)
0x32b: GOTO 0x33e

0x32c: PushEmpty(bool, object)
0x32d: Stack[-1] = Stack[-7]
0x32e: Call2 0x365

0x32f: Pop(1)
0x330: Pop(1); Push((bool) Stack[-1] == 0)
0x331: IF (Stack[-1] == 0) GOTO 0x33a; Pop(1)

0x332: PushEmpty(bool, object)
0x333: Stack[-1] = Stack[-7]
0x334: Call2 0x340

0x335: Pop(1)
0x336: Pop(1); Push((bool) Stack[-1] == 0)
0x337: IF (Stack[-1] == 0) GOTO 0x33a; Pop(1)

0x338: Stack[-6] = (bool) 0
0x339: Return(); Pop(4)

0x33a: Push("voice_common")
0x33b: Push((int) 1)
0x33c: @ SetVariable(Stack[-2], Stack[-1])
0x33d: Pop(2)
0x33e: Stack[-6] = (bool) 1
0x33f: Return(); Pop(4)

0x340: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x341: Stack[-5] = "c"
0x342: Stack[-4] = (int) 0
0x343: Push((int) 1)
0x344: IF (Stack[-1] == 0) GOTO 0x350; Pop(1)

0x345: Push((int) 1)
0x346: Pop(1); Push(Stack[-5] + Stack[-1]);
0x347: Pop(1); Push(Stack[-6] + Stack[-1]);
0x348: @@ HasProperty(Stack[-1], Stack[-4])
0x349: Pop(1)
0x34a: Pop(0); Push((bool) Stack[-3] == 0)
0x34b: IF (Stack[-1] == 0) GOTO 0x34d; Pop(1)

0x34c: GOTO 0x350

0x34d: Push((int) 1)
0x34e: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x34f: GOTO 0x343

0x350: Pop(0); Push((bool) Stack[-4] == 0)
0x351: IF (Stack[-1] == 0) GOTO 0x354; Pop(1)

0x352: Stack[-12] = (bool) 0
0x353: Return(); Pop(10)

0x354: Stack[-2] = (int) 0
0x355: Push((int) 1)
0x356: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x357: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x358: @ irand(Stack[-2], Stack[-4])
0x359: Pop(0)
0x35a: Push((int) 1)
0x35b: Pop(1); Push(Stack[-3] + Stack[-1]);
0x35c: Pop(1); Push(Stack[-6] + Stack[-1]);
0x35d: @@ GetProperty(Stack[-1], Stack[-2])
0x35e: Pop(1)
0x35f: PushEmpty(bool, string)
0x360: Stack[-1] = Stack[-3]
0x361: Call2 0x3af

0x362: Stack[-14] = Stack[-2]
0x363: Pop(2)
0x364: Return(); Pop(10)

0x365: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x366: Push("d")
0x367: PushEmpty(int)
0x368: Call2 0x3eb

0x369: Pop(0)
0x36a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x36b: Push("m")
0x36c: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x36d: Stack[-4] = (int) 0
0x36e: Push((int) 1)
0x36f: IF (Stack[-1] == 0) GOTO 0x37b; Pop(1)

0x370: Push((int) 1)
0x371: Pop(1); Push(Stack[-5] + Stack[-1]);
0x372: Pop(1); Push(Stack[-6] + Stack[-1]);
0x373: @@ HasProperty(Stack[-1], Stack[-4])
0x374: Pop(1)
0x375: Pop(0); Push((bool) Stack[-3] == 0)
0x376: IF (Stack[-1] == 0) GOTO 0x378; Pop(1)

0x377: GOTO 0x37b

0x378: Push((int) 1)
0x379: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x37a: GOTO 0x36e

0x37b: Pop(0); Push((bool) Stack[-4] == 0)
0x37c: IF (Stack[-1] == 0) GOTO 0x37f; Pop(1)

0x37d: Stack[-12] = (bool) 0
0x37e: Return(); Pop(10)

0x37f: Stack[-2] = (int) 0
0x380: Push((int) 1)
0x381: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x382: IF (Stack[-1] == 0) GOTO 0x385; Pop(1)

0x383: @ irand(Stack[-2], Stack[-4])
0x384: Pop(0)
0x385: Push((int) 1)
0x386: Pop(1); Push(Stack[-3] + Stack[-1]);
0x387: Pop(1); Push(Stack[-6] + Stack[-1]);
0x388: @@ GetProperty(Stack[-1], Stack[-2])
0x389: Pop(1)
0x38a: PushEmpty(bool, string)
0x38b: Stack[-1] = Stack[-3]
0x38c: Call2 0x3af

0x38d: Stack[-14] = Stack[-2]
0x38e: Pop(2)
0x38f: Return(); Pop(10)

0x390: PushEmpty(bool, float, float, bool, float, float)
0x391: @ lshHasAnimation(Stack[-3], Stack[-7])
0x392: Pop(0)
0x393: Push(Stack[-3])
0x394: IF (Stack[-1] == 0) GOTO 0x39b; Pop(1)

0x395: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x396: Pop(0)
0x397: Push((bool) 0)
0x398: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x399: Pop(1)
0x39a: GOTO 0x39f

0x39b: Push("Can't find lsh animation : ")
0x39c: Pop(1); Push(Stack[-1] + Stack[-8]);
0x39d: @ Trace(Stack[-1])
0x39e: Pop(1)
0x39f: Return(); Pop(6)

0x3a0: PushEmpty(bool, float, float, bool, float, float)
0x3a1: @ lshHasAnimation(Stack[-3], Stack[-8])
0x3a2: Pop(0)
0x3a3: Push(Stack[-3])
0x3a4: IF (Stack[-1] == 0) GOTO 0x3aa; Pop(1)

0x3a5: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x3a6: Pop(0)
0x3a7: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x3a8: Pop(0)
0x3a9: GOTO 0x3ae

0x3aa: Push("Can't find lsh animation : ")
0x3ab: Pop(1); Push(Stack[-1] + Stack[-9]);
0x3ac: @ Trace(Stack[-1])
0x3ad: Pop(1)
0x3ae: Return(); Pop(6)

0x3af: PushEmpty(bool, bool)
0x3b0: PushEmpty(bool)
0x3b1: Call2 0x4c1

0x3b2: Pop(0)
0x3b3: IF (Stack[-1] == 0) GOTO 0x3bc; Pop(1)

0x3b4: @ lshHasSpeech(Stack[-1], Stack[-3])
0x3b5: Pop(0)
0x3b6: Push(Stack[-1])
0x3b7: IF (Stack[-1] == 0) GOTO 0x3bc; Pop(1)

0x3b8: @ lshPlaySpeech(Stack[-3])
0x3b9: Pop(0)
0x3ba: Stack[-4] = (bool) 1
0x3bb: Return(); Pop(2)

0x3bc: Stack[-4] = (bool) 0
0x3bd: Return(); Pop(2)

0x3be: PushEmpty(bool)
0x3bf: Call2 0x4c1

0x3c0: Pop(0)
0x3c1: IF (Stack[-1] == 0) GOTO 0x3c4; Pop(1)

0x3c2: @ lshStopSpeech()
0x3c3: Pop(0)
0x3c4: Return(); Pop(0)

0x3c5: PushEmpty(object, object)
0x3c6: @ self(Stack[-1])
0x3c7: Pop(0)
0x3c8: Stack[-3] = Stack[-1]
0x3c9: Return(); Pop(2)

0x3ca: Stack[-1] = 0
0x3cb: PushEmpty(float, float)
0x3cc: Pop(0); Push(Stack[-3] | Stack[-3]);
0x3cd: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x3ce: Push((float)0.0)
0x3cf: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3d0: IF (Stack[-1] == 0) GOTO 0x3d3; Pop(1)

0x3d1: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x3d2: Return(); Pop(2)

0x3d3: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x3d4: Return(); Pop(2)

0x3d5: PushEmpty(int, int)
0x3d6: @ GetVariable(Stack[-3], Stack[-1])
0x3d7: Pop(0)
0x3d8: Stack[-4] = Stack[-1]
0x3d9: Return(); Pop(2)

0x3da: PushEmpty(object, object)
0x3db: @ FindActor(Stack[-1], Stack[-4])
0x3dc: Pop(0)
0x3dd: Pop(0); Push((bool) Stack[-1] == 0)
0x3de: IF (Stack[-1] == 0) GOTO 0x3e6; Pop(1)

0x3df: Push("Door ")
0x3e0: Pop(1); Push(Stack[-1] + Stack[-5]);
0x3e1: Push(" not found")
0x3e2: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3e3: @ Trace(Stack[-1])
0x3e4: Pop(1)
0x3e5: GOTO 0x3e9

0x3e6: Push("locked")
0x3e7: @@ SetProperty(Stack[-1], Stack[-4])
0x3e8: Pop(1)
0x3e9: Return(); Pop(2)

0x3ea: Stack[-1] = 0
0x3eb: PushEmpty(float, float)
0x3ec: @ GetGameTime(Stack[-1])
0x3ed: Pop(0)
0x3ee: Push((int) 1)
0x3ef: PushEmpty(int)
0x3f0: Push((int) 24)
0x3f1: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x3f2: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x3f3: Return(); Pop(2)

0x3f4: PushEmpty()
0x3f5: Push("game_final")
0x3f6: Push((int) 1)
0x3f7: @ SetVariable(Stack[-2], Stack[-1])
0x3f8: Pop(2)
0x3f9: Return(); Pop(0)

0x3fa: PushEmpty()
0x3fb: Push("game_final")
0x3fc: Push((int) 2)
0x3fd: @ SetVariable(Stack[-2], Stack[-1])
0x3fe: Pop(2)
0x3ff: Return(); Pop(0)

0x400: PushEmpty()
0x401: Push("game_final")
0x402: Push((int) 3)
0x403: @ SetVariable(Stack[-2], Stack[-1])
0x404: Pop(2)
0x405: Return(); Pop(0)

0x406: PushEmpty()
0x407: PushEmpty(string, bool)
0x408: Stack[-2] = "isobor@door1"
0x409: Stack[-1] = (bool) 0
0x40a: Call2 0x3da

0x40b: Pop(2)
0x40c: Return(); Pop(0)

0x40d: PushEmpty()
0x40e: PushEmpty()
0x40f: Call2 0x472

0x410: Pop(0)
0x411: Return(); Pop(0)

0x412: PushEmpty()
0x413: PushEmpty()
0x414: Call2 0x458

0x415: Pop(0)
0x416: Return(); Pop(0)

0x417: PushEmpty()
0x418: PushEmpty()
0x419: Call2 0x465

0x41a: Pop(0)
0x41b: Return(); Pop(0)

0x41c: PushEmpty()
0x41d: Push("game_final")
0x41e: Push((int) 4)
0x41f: @ SetVariable(Stack[-2], Stack[-1])
0x420: Pop(2)
0x421: Return(); Pop(0)

0x422: PushEmpty()
0x423: PushEmpty()
0x424: Call2 0x44b

0x425: Pop(0)
0x426: Return(); Pop(0)

0x427: PushEmpty()
0x428: PushEmpty(int, string)
0x429: Stack[-1] = "game_final"
0x42a: Call2 0x3d5

0x42b: Pop(1)
0x42c: Push((int) 0)
0x42d: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x42e: IF (Stack[-1] == 0) GOTO 0x431; Pop(1)

0x42f: Stack[-2] = (bool) 1
0x430: Return(); Pop(0)

0x431: Stack[-2] = (bool) 0
0x432: Return(); Pop(0)

0x433: PushEmpty()
0x434: PushEmpty(int, string)
0x435: Stack[-1] = "k12q01BurahInSobor"
0x436: Call2 0x3d5

0x437: Pop(1)
0x438: Push((int) 0)
0x439: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x43a: IF (Stack[-1] == 0) GOTO 0x43d; Pop(1)

0x43b: Stack[-2] = (bool) 1
0x43c: Return(); Pop(0)

0x43d: Stack[-2] = (bool) 0
0x43e: Return(); Pop(0)

0x43f: PushEmpty()
0x440: PushEmpty(int, string)
0x441: Stack[-1] = "k12q01DankoInSobor"
0x442: Call2 0x3d5

0x443: Pop(1)
0x444: Push((int) 0)
0x445: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x446: IF (Stack[-1] == 0) GOTO 0x449; Pop(1)

0x447: Stack[-2] = (bool) 1
0x448: Return(); Pop(0)

0x449: Stack[-2] = (bool) 0
0x44a: Return(); Pop(0)

0x44b: PushEmpty(object, object)
0x44c: Push((int) 774)
0x44d: Push((int) 1)
0x44e: Push((int) 540275)
0x44f: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x450: Pop(3)
0x451: PushEmpty(bool, object, int)
0x452: Stack[-2] = Stack[-4]
0x453: Stack[-1] = (int) 729
0x454: Call2 0x48c

0x455: Pop(3)
0x456: Return(); Pop(2)

0x457: Stack[-1] = 0
0x458: PushEmpty(object, object)
0x459: Push((int) 734)
0x45a: Push((int) 1)
0x45b: Push((int) 539364)
0x45c: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x45d: Pop(3)
0x45e: PushEmpty(bool, object, int)
0x45f: Stack[-2] = Stack[-4]
0x460: Stack[-1] = (int) 729
0x461: Call2 0x48c

0x462: Pop(3)
0x463: Return(); Pop(2)

0x464: Stack[-1] = 0
0x465: PushEmpty(object, object)
0x466: Push((int) 732)
0x467: Push((int) 1)
0x468: Push((int) 539362)
0x469: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x46a: Pop(3)
0x46b: PushEmpty(bool, object, int)
0x46c: Stack[-2] = Stack[-4]
0x46d: Stack[-1] = (int) 729
0x46e: Call2 0x48c

0x46f: Pop(3)
0x470: Return(); Pop(2)

0x471: Stack[-1] = 0
0x472: PushEmpty(object, object)
0x473: Push((int) 733)
0x474: Push((int) 1)
0x475: Push((int) 539363)
0x476: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x477: Pop(3)
0x478: PushEmpty(bool, object, int)
0x479: Stack[-2] = Stack[-4]
0x47a: Stack[-1] = (int) 729
0x47b: Call2 0x48c

0x47c: Pop(3)
0x47d: Return(); Pop(2)

0x47e: Stack[-1] = 0
0x47f: PushEmpty(object, object)
0x480: @ GetDiaryRoot(Stack[-1])
0x481: Pop(0)
0x482: Pop(0); Push((bool) Stack[-1] == 0)
0x483: IF (Stack[-1] == 0) GOTO 0x489; Pop(1)

0x484: Push("Can't retrieve diary root")
0x485: @ Trace(Stack[-1])
0x486: Pop(1)
0x487: Stack[-3] = (bool) 0
0x488: Return(); Pop(2)

0x489: Stack[-3] = Stack[-1]
0x48a: Return(); Pop(2)

0x48b: Stack[-1] = 0
0x48c: PushEmpty(object, object, int, object, object, int)
0x48d: PushEmpty(object)
0x48e: Call2 0x47f

0x48f: Stack[-4] = Stack[-1]
0x490: Pop(1)
0x491: @@ Find(Stack[-7], Stack[-2])
0x492: Pop(0)
0x493: Pop(0); Push((bool) Stack[-2] == 0)
0x494: IF (Stack[-1] == 0) GOTO 0x49b; Pop(1)

0x495: Push("Can't find diary parent with id: ")
0x496: Pop(1); Push(Stack[-1] + Stack[-8]);
0x497: @ Trace(Stack[-1])
0x498: Pop(1)
0x499: Stack[-9] = (bool) 0
0x49a: Return(); Pop(6)

0x49b: @@ AddChild(Stack[-8])
0x49c: Pop(0)
0x49d: Push((int) 7)
0x49e: @ SendWorldWndMessage(Stack[-1])
0x49f: Pop(1)
0x4a0: @@ GetCategory(Stack[-1])
0x4a1: Pop(0)
0x4a2: @ SetDiarySection(Stack[-1])
0x4a3: Pop(0)
0x4a4: Stack[-9] = (bool) 0
0x4a5: Return(); Pop(6)

0x4a6: Stack[-2] = 0
0x4a7: Stack[-3] = 0
0x4a8: PushEmpty(int, int)
0x4a9: Push("branch")
0x4aa: @ GetVariable(Stack[-1], Stack[-2])
0x4ab: Pop(1)
0x4ac: Push((int) 0)
0x4ad: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4ae: IF (Stack[-1] == 0) GOTO 0x4b2; Pop(1)

0x4af: Stack[-3] = (int) 1
0x4b0: Return(); Pop(2)

0x4b1: GOTO 0x4b7

0x4b2: Push((int) 1)
0x4b3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4b4: IF (Stack[-1] == 0) GOTO 0x4b7; Pop(1)

0x4b5: Stack[-3] = (int) 2
0x4b6: Return(); Pop(2)

0x4b7: Stack[-3] = (int) 3
0x4b8: Return(); Pop(2)

0x4b9: Stack[-1] = (int) 515532
0x4ba: Return(); Pop(0)

0x4bb: Stack[-1] = (int) 514840
0x4bc: Return(); Pop(0)

0x4bd: Stack[-1] = "ui/NPC_Block.png"
0x4be: Return(); Pop(0)

0x4bf: Stack[-1] = "ui/NPC_Block_b.png"
0x4c0: Return(); Pop(0)

0x4c1: Stack[-1] = (bool) 1
0x4c2: Return(); Pop(0)

