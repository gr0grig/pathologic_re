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
	ood12Littlegirl2
	D_Mission5
	ood12Littlegirl1
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	Remove
	branch
	ui/NPC_Citizen1.png
	ui/NPC_Citizen1_b.png

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
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	HasAnimation (3 args)

RunOp = 0x186
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xae Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool, bool) Params = 0
		EVENT_0 Op = 0x18c Vars = (object)
		EVENT_26 Op = 0x1bd Vars = (string)
		EVENT_6 Op = 0x1c5 Vars = ()
		EVENT_7 Op = 0x206 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x28e

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x3c7

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x3c5

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x3c9

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x3cb

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x3b4

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
0x41: Call2 0x2d2

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

0x50: PushEmpty(object, object)
0x51: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x52: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x53: Call2 0x32f

0x54: Pop(2)
0x55: PushEmpty(string)
0x56: Stack[-1] = "Neutral"
0x57: Call2 0x98

0x58: Pop(1)
0x59: Push((int) 515005)
0x5a: @@ SetMessage(Stack[-1])
0x5b: Pop(1)
0x5c: @@ ClearReplies()
0x5d: Pop(0)
0x5e: PushEmpty(bool, object)
0x5f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x60: Call2 0x361

0x61: Pop(1)
0x62: IF (Stack[-1] == 0) GOTO 0x68; Pop(1)

0x63: Push((int) 515006)
0x64: Push((int) 42522)
0x65: Push((int) 16264)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: PushEmpty(bool, object)
0x69: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6a: Call2 0x355

0x6b: Pop(1)
0x6c: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x6d: Push((int) 515018)
0x6e: Push((int) 16278)
0x6f: Push((int) 16277)
0x70: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x71: Pop(3)
0x72: Push((int) 515017)
0x73: Push((int) -1)
0x74: Push((int) 16276)
0x75: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x76: Pop(3)
0x77: GOTO 0x7a

0x78: Return(); Pop(0)

0x79: GOTO 0x4e

0x7a: PushEmpty(bool)
0x7b: Call2 0x3cd

0x7c: Pop(0)
0x7d: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x7e: @ lshWaitForAnimEnd()
0x7f: Pop(0)
0x80: Push( Stack[3 + Tasks[-1].StackPointer] )
0x81: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x82: GOTO 0x88

0x83: PushEmpty(string)
0x84: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x85: Call2 0x2e3

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
0x9a: Call2 0x3cd

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
0xaa: Call2 0x2f3

0xab: Pop(2)
0xac: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xad: Return(); Pop(0)

0xae: PushEmpty()
0xaf: Push((int) 1)
0xb0: IF (Stack[-1] == 0) GOTO 0x185; Pop(1)

0xb1: PushEmpty()
0xb2: Call2 0x30d

0xb3: Pop(0)
0xb4: Push((int) 16264)
0xb5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb6: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xb7: PushEmpty(object, object)
0xb8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xba: Call2 0x34f

0xbb: Pop(2)
0xbc: Push((int) 16277)
0xbd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbe: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xbf: PushEmpty(object, object)
0xc0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc2: Call2 0x329

0xc3: Pop(2)
0xc4: Push((int) 16263)
0xc5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc6: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xc7: PushEmpty(object, object)
0xc8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xca: Call2 0x32f

0xcb: Pop(2)
0xcc: PushEmpty(string)
0xcd: Stack[-1] = "Neutral"
0xce: Call2 0x98

0xcf: Pop(1)
0xd0: Push((int) 515005)
0xd1: @@ SetMessage(Stack[-1])
0xd2: Pop(1)
0xd3: @@ ClearReplies()
0xd4: Pop(0)
0xd5: PushEmpty(bool, object)
0xd6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd7: Call2 0x361

0xd8: Pop(1)
0xd9: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xda: Push((int) 515006)
0xdb: Push((int) 42522)
0xdc: Push((int) 16264)
0xdd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xde: Pop(3)
0xdf: PushEmpty(bool, object)
0xe0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe1: Call2 0x355

0xe2: Pop(1)
0xe3: IF (Stack[-1] == 0) GOTO 0xe9; Pop(1)

0xe4: Push((int) 515018)
0xe5: Push((int) 16278)
0xe6: Push((int) 16277)
0xe7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe8: Pop(3)
0xe9: Push((int) 515017)
0xea: Push((int) -1)
0xeb: Push((int) 16276)
0xec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xed: Pop(3)
0xee: Return(); Pop(0)

0xef: Push((int) 16278)
0xf0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf1: IF (Stack[-1] == 0) GOTO 0x106; Pop(1)

0xf2: PushEmpty(string)
0xf3: Stack[-1] = "Neutral"
0xf4: Call2 0x98

0xf5: Pop(1)
0xf6: Push((int) 515019)
0xf7: @@ SetMessage(Stack[-1])
0xf8: Pop(1)
0xf9: @@ ClearReplies()
0xfa: Pop(0)
0xfb: Push((int) 515020)
0xfc: Push((int) -1)
0xfd: Push((int) 16279)
0xfe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xff: Pop(3)
0x100: Push((int) 515021)
0x101: Push((int) -1)
0x102: Push((int) 16280)
0x103: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x104: Pop(3)
0x105: Return(); Pop(0)

0x106: Push((int) 42522)
0x107: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x108: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x109: PushEmpty(string)
0x10a: Stack[-1] = "Neutral"
0x10b: Call2 0x98

0x10c: Pop(1)
0x10d: Push((int) 540515)
0x10e: @@ SetMessage(Stack[-1])
0x10f: Pop(1)
0x110: @@ ClearReplies()
0x111: Pop(0)
0x112: Push((int) 540516)
0x113: Push((int) 16265)
0x114: Push((int) 42523)
0x115: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x116: Pop(3)
0x117: Push((int) 540517)
0x118: Push((int) 42525)
0x119: Push((int) 42524)
0x11a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11b: Pop(3)
0x11c: Return(); Pop(0)

0x11d: Push((int) 42525)
0x11e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11f: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x120: PushEmpty(string)
0x121: Stack[-1] = "Neutral"
0x122: Call2 0x98

0x123: Pop(1)
0x124: Push((int) 540518)
0x125: @@ SetMessage(Stack[-1])
0x126: Pop(1)
0x127: @@ ClearReplies()
0x128: Pop(0)
0x129: Push((int) 540519)
0x12a: Push((int) -1)
0x12b: Push((int) 42526)
0x12c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12d: Pop(3)
0x12e: Return(); Pop(0)

0x12f: Push((int) 16265)
0x130: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x131: IF (Stack[-1] == 0) GOTO 0x141; Pop(1)

0x132: PushEmpty(string)
0x133: Stack[-1] = "Neutral"
0x134: Call2 0x98

0x135: Pop(1)
0x136: Push((int) 515007)
0x137: @@ SetMessage(Stack[-1])
0x138: Pop(1)
0x139: @@ ClearReplies()
0x13a: Pop(0)
0x13b: Push((int) 515008)
0x13c: Push((int) 16267)
0x13d: Push((int) 16266)
0x13e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13f: Pop(3)
0x140: Return(); Pop(0)

0x141: Push((int) 16267)
0x142: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x143: IF (Stack[-1] == 0) GOTO 0x162; Pop(1)

0x144: PushEmpty(string)
0x145: Stack[-1] = "Neutral"
0x146: Call2 0x98

0x147: Pop(1)
0x148: Push((int) 515009)
0x149: @@ SetMessage(Stack[-1])
0x14a: Pop(1)
0x14b: @@ ClearReplies()
0x14c: Pop(0)
0x14d: Push((int) 515010)
0x14e: Push((int) -1)
0x14f: Push((int) 16268)
0x150: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x151: Pop(3)
0x152: Push((int) 515011)
0x153: Push((int) -1)
0x154: Push((int) 16269)
0x155: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x156: Pop(3)
0x157: Push((int) 515012)
0x158: Push((int) 16271)
0x159: Push((int) 16270)
0x15a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15b: Pop(3)
0x15c: Push((int) 515016)
0x15d: Push((int) 16271)
0x15e: Push((int) 16274)
0x15f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x160: Pop(3)
0x161: Return(); Pop(0)

0x162: Push((int) 16271)
0x163: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x164: IF (Stack[-1] == 0) GOTO 0x179; Pop(1)

0x165: PushEmpty(string)
0x166: Stack[-1] = "Neutral"
0x167: Call2 0x98

0x168: Pop(1)
0x169: Push((int) 515013)
0x16a: @@ SetMessage(Stack[-1])
0x16b: Pop(1)
0x16c: @@ ClearReplies()
0x16d: Pop(0)
0x16e: Push((int) 515014)
0x16f: Push((int) -1)
0x170: Push((int) 16272)
0x171: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x172: Pop(3)
0x173: Push((int) 515015)
0x174: Push((int) -1)
0x175: Push((int) 16273)
0x176: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x177: Pop(3)
0x178: Return(); Pop(0)

0x179: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x17a: PushEmpty(bool)
0x17b: Call2 0x3cd

0x17c: Pop(0)
0x17d: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x17e: @ lshStopAnimation()
0x17f: Pop(0)
0x180: GOTO 0x183

0x181: @ StopAnimation()
0x182: Pop(0)
0x183: Return(); Pop(0)

0x184: GOTO 0xaf

0x185: Return(); Pop(0)

0x186: PushEmpty(float, float)
0x187: Stack[-2] = (int) 300
0x188: Stack[-1] = (int) 100
0x189: Call2 0x197

0x18a: Pop(2)
0x18b: Return(); Pop(0)

0x18c: PushEmpty()
0x18d: PushEmpty()
0x18e: Call2 0x21d

0x18f: Pop(0)
0x190: PushEmpty(int, object)
0x191: Stack[-1] = Stack[-3]
0x192: Push(-2, 1); TaskCall(0)
0x193: Call2 0x0

0x194: Pop(-2, 1); TaskReturn
0x195: Pop(2)
0x196: Return(); Pop(0)

0x197: PushEmpty(float, bool, float, bool)
0x198: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x199: Push((int) 3)
0x19a: @ rand(Stack[-3], Stack[-1])
0x19b: Pop(1)
0x19c: Push((int) 3)
0x19d: Pop(1); Push(Stack[-3] + Stack[-1]);
0x19e: @ Sleep(Stack[-1], Stack[-2])
0x19f: Pop(1)
0x1a0: Stack[6 + Tasks[-1].StackPointer] = (bool)1
0x1a1: PushEmpty(float, float)
0x1a2: Stack[-2] = Stack[-8]
0x1a3: Stack[-1] = Stack[-7]
0x1a4: Call2 0x1dc

0x1a5: Pop(2)
0x1a6: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x1a7: GOTO 0x199

0x1a8: Return(); Pop(4)

0x1a9: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x1aa: PushEmpty(bool)
0x1ab: Stack[-1] = (bool) 0
0x1ac: PushEmpty(bool)
0x1ad: Call2 0x289

0x1ae: Pop(0)
0x1af: Pop(1); Push((bool) Stack[-1] == 0)
0x1b0: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1b1: PushEmpty(bool)
0x1b2: Call2 0x1da

0x1b3: Pop(0)
0x1b4: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1b5: Stack[-1] = (bool) 1
0x1b6: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1b7: PushEmpty(object)
0x1b8: Call2 0x314

0x1b9: Pop(0)
0x1ba: @ RemoveActor(Stack[-1])
0x1bb: Pop(1)
0x1bc: Return(); Pop(0)

0x1bd: PushEmpty()
0x1be: Push("cleanup")
0x1bf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1c0: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1c1: PushEmpty()
0x1c2: Call2 0x1a9

0x1c3: Pop(0)
0x1c4: Return(); Pop(0)

0x1c5: Push( Stack[6 + Tasks[-1].StackPointer] )
0x1c6: IF (Stack[-1] == 0) GOTO 0x1ca; Pop(1)

0x1c7: PushEmpty()
0x1c8: Call2 0x21d

0x1c9: Pop(0)
0x1ca: PushEmpty(bool)
0x1cb: Stack[-1] = (bool) 0
0x1cc: Push( Stack[5 + Tasks[-1].StackPointer] )
0x1cd: IF (Stack[-1] == 0) GOTO 0x1d3; Pop(1)

0x1ce: PushEmpty(bool)
0x1cf: Call2 0x1da

0x1d0: Pop(0)
0x1d1: IF (Stack[-1] == 0) GOTO 0x1d3; Pop(1)

0x1d2: Stack[-1] = (bool) 1
0x1d3: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

0x1d4: PushEmpty(object)
0x1d5: Call2 0x314

0x1d6: Pop(0)
0x1d7: @ RemoveActor(Stack[-1])
0x1d8: Pop(1)
0x1d9: Return(); Pop(0)

0x1da: Stack[-1] = (bool) 1
0x1db: Return(); Pop(0)

0x1dc: PushEmpty()
0x1dd: PushEmpty(bool)
0x1de: Call2 0x289

0x1df: Pop(0)
0x1e0: Pop(1); Push((bool) Stack[-1] == 0)
0x1e1: IF (Stack[-1] == 0) GOTO 0x1e3; Pop(1)

0x1e2: Return(); Pop(0)

0x1e3: Push("player")
0x1e4: @ FindActor(Stack[-4], Stack[-1])
0x1e5: Pop(1)
0x1e6: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1e7: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1e8: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x1e9: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x1ea: Push((int) 10)
0x1eb: Push((float)1.0)
0x1ec: @ SetTimer(Stack[-2], Stack[-1])
0x1ed: Pop(2)
0x1ee: PushEmpty()
0x1ef: Call2 0x22b

0x1f0: Pop(0)
0x1f1: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1f2: IF (Stack[-1] == 0) GOTO 0x1f6; Pop(1)

0x1f3: Push((int) 10)
0x1f4: @ KillTimer(Stack[-1])
0x1f5: Pop(1)
0x1f6: Return(); Pop(0)

0x1f7: PushEmpty(float, float)
0x1f8: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x1f9: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0x1fa: Stack[-3] = (bool) 0
0x1fb: Return(); Pop(2)

0x1fc: PushEmpty(float, object)
0x1fd: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1fe: Call2 0x281

0x1ff: Pop(1)
0x200: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x201: Push( Stack[2 + Tasks[-1].StackPointer] )
0x202: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0x203: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x204: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x205: Return(); Pop(2)

0x206: PushEmpty()
0x207: Push((int) 10)
0x208: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x209: IF (Stack[-1] == 0) GOTO 0x21c; Pop(1)

0x20a: PushEmpty(bool)
0x20b: Call2 0x1f7

0x20c: Pop(0)
0x20d: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x20e: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x20f: IF (Stack[-1] == 0) GOTO 0x215; Pop(1)

0x210: PushEmpty(object)
0x211: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x212: Call2 0x302

0x213: Pop(1)
0x214: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x215: GOTO 0x21c

0x216: Push( Stack[2 + Tasks[-1].StackPointer] )
0x217: IF (Stack[-1] == 0) GOTO 0x21c; Pop(1)

0x218: Push("head")
0x219: @ UnlookAsync(Stack[-1])
0x21a: Pop(1)
0x21b: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x21c: Return(); Pop(0)

0x21d: PushEmpty()
0x21e: Call2 0x27c

0x21f: Pop(0)
0x220: Push((int) 10)
0x221: @ KillTimer(Stack[-1])
0x222: Pop(1)
0x223: Push( Stack[2 + Tasks[-1].StackPointer] )
0x224: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x225: Push("head")
0x226: @ UnlookAsync(Stack[-1])
0x227: Pop(1)
0x228: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x229: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x22a: Return(); Pop(0)

0x22b: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x22c: @ WaitForAnimEnd()
0x22d: Pop(0)
0x22e: PushEmpty(bool)
0x22f: Call2 0x289

0x230: Pop(0)
0x231: Pop(1); Push((bool) Stack[-1] == 0)
0x232: IF (Stack[-1] == 0) GOTO 0x234; Pop(1)

0x233: Return(); Pop(14)

0x234: PushEmpty(int)
0x235: Call2 0x3d6

0x236: Stack[-8] = Stack[-1]
0x237: Pop(1)
0x238: Stack[-6] = (int) 0
0x239: PushEmpty(bool)
0x23a: Stack[-1] = (bool) 0
0x23b: Push((int) 5)
0x23c: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x23d: IF (Stack[-1] == 0) GOTO 0x243; Pop(1)

0x23e: PushEmpty(bool)
0x23f: Call2 0x289

0x240: Pop(0)
0x241: IF (Stack[-1] == 0) GOTO 0x243; Pop(1)

0x242: Stack[-1] = (bool) 1
0x243: IF (Stack[-1] == 0) GOTO 0x277; Pop(1)

0x244: Push((int) 3)
0x245: @ irand(Stack[-6], Stack[-1])
0x246: Pop(1)
0x247: Push((int) 0)
0x248: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x249: IF (Stack[-1] == 0) GOTO 0x25b; Pop(1)

0x24a: Push(Stack[-7])
0x24b: IF (Stack[-1] == 0) GOTO 0x25a; Pop(1)

0x24c: @ irand(Stack[-4], Stack[-7])
0x24d: Pop(0)
0x24e: Push("all")
0x24f: PushEmpty(string, int)
0x250: Stack[-1] = Stack[-7]
0x251: Call2 0x3cf

0x252: Pop(1)
0x253: @ PlayAnimation(Stack[-2], Stack[-1])
0x254: Pop(2)
0x255: @ WaitForAnimEnd(Stack[-3])
0x256: Pop(0)
0x257: Pop(0); Push((bool) Stack[-3] == 0)
0x258: IF (Stack[-1] == 0) GOTO 0x25a; Pop(1)

0x259: GOTO 0x277

0x25a: GOTO 0x26c

0x25b: Push((int) 1)
0x25c: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x25d: IF (Stack[-1] == 0) GOTO 0x269; Pop(1)

0x25e: Push((int) 4)
0x25f: @ rand(Stack[-3], Stack[-1])
0x260: Pop(1)
0x261: Push((int) 1)
0x262: Pop(1); Push(Stack[-3] + Stack[-1]);
0x263: @ Sleep(Stack[-1], Stack[-2])
0x264: Pop(1)
0x265: Pop(0); Push((bool) Stack[-1] == 0)
0x266: IF (Stack[-1] == 0) GOTO 0x268; Pop(1)

0x267: GOTO 0x277

0x268: GOTO 0x26c

0x269: Push(Stack[-6])
0x26a: IF (Stack[-1] == 0) GOTO 0x26c; Pop(1)

0x26b: GOTO 0x277

0x26c: PushEmpty(bool)
0x26d: Call2 0x27a

0x26e: Pop(0)
0x26f: Pop(1); Push((bool) Stack[-1] == 0)
0x270: IF (Stack[-1] == 0) GOTO 0x272; Pop(1)

0x271: GOTO 0x277

0x272: @ ResetAAS()
0x273: Pop(0)
0x274: Push((int) 1)
0x275: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x276: GOTO 0x239

0x277: @ ResetAAS()
0x278: Pop(0)
0x279: Return(); Pop(14)

0x27a: Stack[-1] = (bool) 1
0x27b: Return(); Pop(0)

0x27c: @ StopAnimation()
0x27d: Pop(0)
0x27e: @ StopGroup0()
0x27f: Pop(0)
0x280: Return(); Pop(0)

0x281: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x282: @ GetPosition(Stack[-3])
0x283: Pop(0)
0x284: @@ GetPosition(Stack[-2])
0x285: Pop(0)
0x286: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x287: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x288: Return(); Pop(6)

0x289: PushEmpty(bool, bool)
0x28a: @ IsLoaded(Stack[-1])
0x28b: Pop(0)
0x28c: Stack[-3] = Stack[-1]
0x28d: Return(); Pop(2)

0x28e: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x28f: @@ GetPosition(Stack[-8])
0x290: Pop(0)
0x291: @@ GetEyesHeight(Stack[-9])
0x292: Pop(0)
0x293: Push(CvectorIndex(Stack[-8], 1))
0x294: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x295: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x296: @ GetPosition(Stack[-7])
0x297: Pop(0)
0x298: @ GetEyesHeight(Stack[-9])
0x299: Pop(0)
0x29a: Push(CvectorIndex(Stack[-7], 1))
0x29b: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x29c: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x29d: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x29e: Push(CvectorIndex(Stack[-6], 1))
0x29f: Stack[-1] = (int) 0
0x2a0: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2a1: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2a2: Pop(1); Push(Sqrt(Stack[-1]))
0x2a3: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2a4: Stack[-5] = -Stack[-6]; Pop(0);
0x2a5: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2a6: PushEmpty(cvector, cvector)
0x2a7: Push(CVector(0.0, 1.0, 0.0))
0x2a8: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2a9: Call2 0x31a

0x2aa: Pop(1)
0x2ab: Push((int) 25)
0x2ac: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2ad: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2ae: Push(CVector(0.0, 10.0, 0.0))
0x2af: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2b0: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2b1: @ IsOverrideActive(Stack[-2])
0x2b2: Pop(0)
0x2b3: Push(Stack[-2])
0x2b4: IF (Stack[-1] == 0) GOTO 0x2b7; Pop(1)

0x2b5: Stack[-21] = (bool) 0
0x2b6: Return(); Pop(18)

0x2b7: @ StopWorld()
0x2b8: Pop(0)
0x2b9: @ CameraTransit(Stack[-3], Stack[-5])
0x2ba: Pop(0)
0x2bb: Push(CvectorIndex(Stack[-4], 0))
0x2bc: Push(CvectorIndex(Stack[-5], 2))
0x2bd: @ Rotate(Stack[-2], Stack[-1])
0x2be: Pop(2)
0x2bf: PushEmpty(bool)
0x2c0: Call2 0x3cd

0x2c1: Pop(0)
0x2c2: IF (Stack[-1] == 0) GOTO 0x2c4; Pop(1)

0x2c3: GOTO 0x2cc

0x2c4: Push("head")
0x2c5: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2c6: Pop(1)
0x2c7: Push(Stack[-1])
0x2c8: IF (Stack[-1] == 0) GOTO 0x2cc; Pop(1)

0x2c9: Push("head")
0x2ca: @ LookAsyncCamera(Stack[-1])
0x2cb: Pop(1)
0x2cc: @ CameraWaitForPlayFinish()
0x2cd: Pop(0)
0x2ce: @ ResumeWorld()
0x2cf: Pop(0)
0x2d0: Stack[-21] = (bool) 1
0x2d1: Return(); Pop(18)

0x2d2: PushEmpty(bool, bool)
0x2d3: @ CameraSwitchToNormal()
0x2d4: Pop(0)
0x2d5: PushEmpty(bool)
0x2d6: Call2 0x3cd

0x2d7: Pop(0)
0x2d8: IF (Stack[-1] == 0) GOTO 0x2da; Pop(1)

0x2d9: GOTO 0x2e2

0x2da: Push("head")
0x2db: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2dc: Pop(1)
0x2dd: Push(Stack[-1])
0x2de: IF (Stack[-1] == 0) GOTO 0x2e2; Pop(1)

0x2df: Push("head")
0x2e0: @ UnlookAsync(Stack[-1])
0x2e1: Pop(1)
0x2e2: Return(); Pop(2)

0x2e3: PushEmpty(bool, float, float, bool, float, float)
0x2e4: @ lshHasAnimation(Stack[-3], Stack[-7])
0x2e5: Pop(0)
0x2e6: Push(Stack[-3])
0x2e7: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x2e8: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x2e9: Pop(0)
0x2ea: Push((bool) 0)
0x2eb: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2ec: Pop(1)
0x2ed: GOTO 0x2f2

0x2ee: Push("Can't find lsh animation : ")
0x2ef: Pop(1); Push(Stack[-1] + Stack[-8]);
0x2f0: @ Trace(Stack[-1])
0x2f1: Pop(1)
0x2f2: Return(); Pop(6)

0x2f3: PushEmpty(bool, float, float, bool, float, float)
0x2f4: @ lshHasAnimation(Stack[-3], Stack[-8])
0x2f5: Pop(0)
0x2f6: Push(Stack[-3])
0x2f7: IF (Stack[-1] == 0) GOTO 0x2fd; Pop(1)

0x2f8: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x2f9: Pop(0)
0x2fa: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x2fb: Pop(0)
0x2fc: GOTO 0x301

0x2fd: Push("Can't find lsh animation : ")
0x2fe: Pop(1); Push(Stack[-1] + Stack[-9]);
0x2ff: @ Trace(Stack[-1])
0x300: Pop(1)
0x301: Return(); Pop(6)

0x302: PushEmpty(float, cvector, float, cvector)
0x303: @@ GetEyesHeight(Stack[-2])
0x304: Pop(0)
0x305: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x306: Push(CvectorIndex(Stack[-1], 1))
0x307: Stack[-1] = Stack[-3]
0x308: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x309: Push("head")
0x30a: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x30b: Pop(1)
0x30c: Return(); Pop(4)

0x30d: PushEmpty(bool)
0x30e: Call2 0x3cd

0x30f: Pop(0)
0x310: IF (Stack[-1] == 0) GOTO 0x313; Pop(1)

0x311: @ lshStopSpeech()
0x312: Pop(0)
0x313: Return(); Pop(0)

0x314: PushEmpty(object, object)
0x315: @ self(Stack[-1])
0x316: Pop(0)
0x317: Stack[-3] = Stack[-1]
0x318: Return(); Pop(2)

0x319: Stack[-1] = 0
0x31a: PushEmpty(float, float)
0x31b: Pop(0); Push(Stack[-3] | Stack[-3]);
0x31c: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x31d: Push((float)0.0)
0x31e: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x31f: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x320: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x321: Return(); Pop(2)

0x322: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x323: Return(); Pop(2)

0x324: PushEmpty(int, int)
0x325: @ GetVariable(Stack[-3], Stack[-1])
0x326: Pop(0)
0x327: Stack[-4] = Stack[-1]
0x328: Return(); Pop(2)

0x329: PushEmpty()
0x32a: Push("ood12Littlegirl2")
0x32b: Push((int) 1)
0x32c: @ SetVariable(Stack[-2], Stack[-1])
0x32d: Pop(2)
0x32e: Return(); Pop(0)

0x32f: PushEmpty()
0x330: PushEmpty(int, string)
0x331: Stack[-1] = "D_Mission5"
0x332: Call2 0x324

0x333: Pop(1)
0x334: Push((int) 0)
0x335: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x336: IF (Stack[-1] == 0) GOTO 0x34e; Pop(1)

0x337: Push("D_Mission5")
0x338: Push((int) 1)
0x339: @ SetVariable(Stack[-2], Stack[-1])
0x33a: Pop(2)
0x33b: PushEmpty()
0x33c: Call2 0x36d

0x33d: Pop(0)
0x33e: PushEmpty(bool, int)
0x33f: Stack[-1] = (int) 30
0x340: Call2 0x3a3

0x341: Pop(2)
0x342: PushEmpty(bool, int)
0x343: Stack[-1] = (int) 3
0x344: Call2 0x3a3

0x345: Pop(2)
0x346: PushEmpty(bool, int)
0x347: Stack[-1] = (int) 4
0x348: Call2 0x3a3

0x349: Pop(2)
0x34a: PushEmpty(bool, int)
0x34b: Stack[-1] = (int) 5
0x34c: Call2 0x3a3

0x34d: Pop(2)
0x34e: Return(); Pop(0)

0x34f: PushEmpty()
0x350: Push("ood12Littlegirl1")
0x351: Push((int) 1)
0x352: @ SetVariable(Stack[-2], Stack[-1])
0x353: Pop(2)
0x354: Return(); Pop(0)

0x355: PushEmpty()
0x356: PushEmpty(int, string)
0x357: Stack[-1] = "ood12Littlegirl2"
0x358: Call2 0x324

0x359: Pop(1)
0x35a: Push((int) 0)
0x35b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x35c: IF (Stack[-1] == 0) GOTO 0x35f; Pop(1)

0x35d: Stack[-2] = (bool) 1
0x35e: Return(); Pop(0)

0x35f: Stack[-2] = (bool) 0
0x360: Return(); Pop(0)

0x361: PushEmpty()
0x362: PushEmpty(int, string)
0x363: Stack[-1] = "ood12Littlegirl1"
0x364: Call2 0x324

0x365: Pop(1)
0x366: Push((int) 0)
0x367: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x368: IF (Stack[-1] == 0) GOTO 0x36b; Pop(1)

0x369: Stack[-2] = (bool) 1
0x36a: Return(); Pop(0)

0x36b: Stack[-2] = (bool) 0
0x36c: Return(); Pop(0)

0x36d: PushEmpty(object, object)
0x36e: Push((int) 561)
0x36f: Push((int) 0)
0x370: Push((int) 530575)
0x371: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x372: Pop(3)
0x373: PushEmpty(bool, object, int)
0x374: Stack[-2] = Stack[-4]
0x375: Stack[-1] = (int) -1
0x376: Call2 0x387

0x377: Pop(3)
0x378: Return(); Pop(2)

0x379: Stack[-1] = 0
0x37a: PushEmpty(object, object)
0x37b: @ GetDiaryRoot(Stack[-1])
0x37c: Pop(0)
0x37d: Pop(0); Push((bool) Stack[-1] == 0)
0x37e: IF (Stack[-1] == 0) GOTO 0x384; Pop(1)

0x37f: Push("Can't retrieve diary root")
0x380: @ Trace(Stack[-1])
0x381: Pop(1)
0x382: Stack[-3] = (bool) 0
0x383: Return(); Pop(2)

0x384: Stack[-3] = Stack[-1]
0x385: Return(); Pop(2)

0x386: Stack[-1] = 0
0x387: PushEmpty(object, object, int, object, object, int)
0x388: PushEmpty(object)
0x389: Call2 0x37a

0x38a: Stack[-4] = Stack[-1]
0x38b: Pop(1)
0x38c: @@ Find(Stack[-7], Stack[-2])
0x38d: Pop(0)
0x38e: Pop(0); Push((bool) Stack[-2] == 0)
0x38f: IF (Stack[-1] == 0) GOTO 0x396; Pop(1)

0x390: Push("Can't find diary parent with id: ")
0x391: Pop(1); Push(Stack[-1] + Stack[-8]);
0x392: @ Trace(Stack[-1])
0x393: Pop(1)
0x394: Stack[-9] = (bool) 0
0x395: Return(); Pop(6)

0x396: @@ AddChild(Stack[-8])
0x397: Pop(0)
0x398: Push((int) 7)
0x399: @ SendWorldWndMessage(Stack[-1])
0x39a: Pop(1)
0x39b: @@ GetCategory(Stack[-1])
0x39c: Pop(0)
0x39d: @ SetDiarySection(Stack[-1])
0x39e: Pop(0)
0x39f: Stack[-9] = (bool) 0
0x3a0: Return(); Pop(6)

0x3a1: Stack[-2] = 0
0x3a2: Stack[-3] = 0
0x3a3: PushEmpty(object, object, object, object)
0x3a4: PushEmpty(object)
0x3a5: Call2 0x37a

0x3a6: Stack[-3] = Stack[-1]
0x3a7: Pop(1)
0x3a8: @@ Find(Stack[-5], Stack[-1])
0x3a9: Pop(0)
0x3aa: Pop(0); Push((bool) Stack[-1] == 0)
0x3ab: IF (Stack[-1] == 0) GOTO 0x3ae; Pop(1)

0x3ac: Stack[-6] = (bool) 0
0x3ad: Return(); Pop(4)

0x3ae: @@ Remove()
0x3af: Pop(0)
0x3b0: Stack[-6] = (bool) 1
0x3b1: Return(); Pop(4)

0x3b2: Stack[-1] = 0
0x3b3: Stack[-2] = 0
0x3b4: PushEmpty(int, int)
0x3b5: Push("branch")
0x3b6: @ GetVariable(Stack[-1], Stack[-2])
0x3b7: Pop(1)
0x3b8: Push((int) 0)
0x3b9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3ba: IF (Stack[-1] == 0) GOTO 0x3be; Pop(1)

0x3bb: Stack[-3] = (int) 1
0x3bc: Return(); Pop(2)

0x3bd: GOTO 0x3c3

0x3be: Push((int) 1)
0x3bf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3c0: IF (Stack[-1] == 0) GOTO 0x3c3; Pop(1)

0x3c1: Stack[-3] = (int) 2
0x3c2: Return(); Pop(2)

0x3c3: Stack[-3] = (int) 3
0x3c4: Return(); Pop(2)

0x3c5: Stack[-1] = (int) 515561
0x3c6: Return(); Pop(0)

0x3c7: Stack[-1] = (int) 503346
0x3c8: Return(); Pop(0)

0x3c9: Stack[-1] = "ui/NPC_Citizen1.png"
0x3ca: Return(); Pop(0)

0x3cb: Stack[-1] = "ui/NPC_Citizen1_b.png"
0x3cc: Return(); Pop(0)

0x3cd: Stack[-1] = (bool) 0
0x3ce: Return(); Pop(0)

0x3cf: PushEmpty(string, string)
0x3d0: Stack[-1] = "idle"
0x3d1: Push(Stack[-3])
0x3d2: IF (Stack[-1] == 0) GOTO 0x3d4; Pop(1)

0x3d3: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x3d4: Stack[-4] = Stack[-1]
0x3d5: Return(); Pop(2)

0x3d6: PushEmpty(int, bool, int, bool)
0x3d7: Stack[-2] = (int) 0
0x3d8: Push("all")
0x3d9: PushEmpty(string, int)
0x3da: Stack[-1] = Stack[-5]
0x3db: Call2 0x3cf

0x3dc: Pop(1)
0x3dd: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3de: Pop(2)
0x3df: Pop(0); Push((bool) Stack[-1] == 0)
0x3e0: IF (Stack[-1] == 0) GOTO 0x3e2; Pop(1)

0x3e1: GOTO 0x3e5

0x3e2: Push((int) 1)
0x3e3: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x3e4: GOTO 0x3d8

0x3e5: Stack[-5] = Stack[-2]
0x3e6: Return(); Pop(4)

