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
	player
	head
	GetPosition
	GetEyesHeight
	Can't find lsh animation : 
	ui/NPC_Citizen2.png
	ui/NPC_Citizen2_b.png
	ook11Officer1
	k11q01
	quest_k11_01
	init_house_petr
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
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
	Sleep (1 args)
	FindActor (2 args)
	SetTimer (2 args)
	KillTimer (1 args)
	UnlookAsync (1 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	rand (2 args)
	Sleep (2 args)
	ResetAAS (0 args)
	StopGroup0 (0 args)
	GetPosition (1 args)
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
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	LookAsync (3 args)
	lshStopSpeech (0 args)
	GetVariable (2 args)
	Trigger (2 args)
	HasAnimation (3 args)
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x179
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb8 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x183 Vars = (object)
		EVENT_7 Op = 0x1b8 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x240

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x2e5

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x2e3

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x2e7

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x2e9

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x35b

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
0x41: Call2 0x285

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
0x4f: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x319

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x55: PushEmpty(object, object)
0x56: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x57: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58: Call2 0x305

0x59: Pop(2)
0x5a: PushEmpty(string)
0x5b: Stack[-1] = "Neutral"
0x5c: Call2 0xa2

0x5d: Pop(1)
0x5e: Push((int) 528031)
0x5f: @@ SetMessage(Stack[-1])
0x60: Pop(1)
0x61: @@ ClearReplies()
0x62: Pop(0)
0x63: Push((int) 530252)
0x64: Push((int) 31642)
0x65: Push((int) 31641)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: Push((int) 530261)
0x69: Push((int) 31655)
0x6a: Push((int) 31650)
0x6b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c: Pop(3)
0x6d: GOTO 0x84

0x6e: PushEmpty(string)
0x6f: Stack[-1] = "Neutral"
0x70: Call2 0xa2

0x71: Pop(1)
0x72: Push((int) 528033)
0x73: @@ SetMessage(Stack[-1])
0x74: Pop(1)
0x75: @@ ClearReplies()
0x76: Pop(0)
0x77: Push((int) 528034)
0x78: Push((int) -1)
0x79: Push((int) 29396)
0x7a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b: Pop(3)
0x7c: Push((int) 530257)
0x7d: Push((int) -1)
0x7e: Push((int) 31646)
0x7f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x80: Pop(3)
0x81: GOTO 0x84

0x82: Return(); Pop(0)

0x83: GOTO 0x4e

0x84: PushEmpty(bool)
0x85: Call2 0x2eb

0x86: Pop(0)
0x87: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x88: @ lshWaitForAnimEnd()
0x89: Pop(0)
0x8a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8b: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x8c: GOTO 0x92

0x8d: PushEmpty(string)
0x8e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8f: Call2 0x297

0x90: Pop(1)
0x91: GOTO 0x88

0x92: GOTO 0xa1

0x93: Push("all")
0x94: Push("idle")
0x95: @ PlayAnimation(Stack[-2], Stack[-1])
0x96: Pop(2)
0x97: @ WaitForAnimEnd()
0x98: Pop(0)
0x99: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9a: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x9b: GOTO 0xa1

0x9c: Push("all")
0x9d: Push("idle")
0x9e: @ PlayAnimation(Stack[-2], Stack[-1])
0x9f: Pop(2)
0xa0: GOTO 0x97

0xa1: Return(); Pop(0)

0xa2: PushEmpty()
0xa3: PushEmpty(bool)
0xa4: Call2 0x2eb

0xa5: Pop(0)
0xa6: Pop(1); Push((bool) Stack[-1] == 0)
0xa7: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0xa8: Return(); Pop(0)

0xa9: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xaa: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xab: Return(); Pop(0)

0xac: PushEmpty(string, bool)
0xad: Stack[-2] = Stack[-3]
0xae: Push("")
0xaf: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb0: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xb1: Stack[-1] = (bool) 0
0xb2: GOTO 0xb4

0xb3: Stack[-1] = (bool) 1
0xb4: Call2 0x2a7

0xb5: Pop(2)
0xb6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb7: Return(); Pop(0)

0xb8: PushEmpty()
0xb9: Push((int) 1)
0xba: IF (Stack[-1] == 0) GOTO 0x178; Pop(1)

0xbb: PushEmpty()
0xbc: Call2 0x2c1

0xbd: Pop(0)
0xbe: Push((int) 29394)
0xbf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc0: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xc1: PushEmpty(object, object)
0xc2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc4: Call2 0x30b

0xc5: Pop(2)
0xc6: Push((int) 29393)
0xc7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc8: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xc9: PushEmpty(bool, object)
0xca: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcb: Call2 0x319

0xcc: Pop(1)
0xcd: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0xce: PushEmpty(object, object)
0xcf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd1: Call2 0x305

0xd2: Pop(2)
0xd3: PushEmpty(string)
0xd4: Stack[-1] = "Neutral"
0xd5: Call2 0xa2

0xd6: Pop(1)
0xd7: Push((int) 528031)
0xd8: @@ SetMessage(Stack[-1])
0xd9: Pop(1)
0xda: @@ ClearReplies()
0xdb: Pop(0)
0xdc: Push((int) 530252)
0xdd: Push((int) 31642)
0xde: Push((int) 31641)
0xdf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe0: Pop(3)
0xe1: Push((int) 530261)
0xe2: Push((int) 31655)
0xe3: Push((int) 31650)
0xe4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe5: Pop(3)
0xe6: Return(); Pop(0)

0xe7: PushEmpty(string)
0xe8: Stack[-1] = "Neutral"
0xe9: Call2 0xa2

0xea: Pop(1)
0xeb: Push((int) 528033)
0xec: @@ SetMessage(Stack[-1])
0xed: Pop(1)
0xee: @@ ClearReplies()
0xef: Pop(0)
0xf0: Push((int) 528034)
0xf1: Push((int) -1)
0xf2: Push((int) 29396)
0xf3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf4: Pop(3)
0xf5: Push((int) 530257)
0xf6: Push((int) -1)
0xf7: Push((int) 31646)
0xf8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf9: Pop(3)
0xfa: Return(); Pop(0)

0xfb: Push((int) 31655)
0xfc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfd: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0xfe: PushEmpty(string)
0xff: Stack[-1] = "Neutral"
0x100: Call2 0xa2

0x101: Pop(1)
0x102: Push((int) 530267)
0x103: @@ SetMessage(Stack[-1])
0x104: Pop(1)
0x105: @@ ClearReplies()
0x106: Pop(0)
0x107: Push((int) 530268)
0x108: Push((int) 31644)
0x109: Push((int) 31656)
0x10a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10b: Pop(3)
0x10c: Return(); Pop(0)

0x10d: Push((int) 31642)
0x10e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10f: IF (Stack[-1] == 0) GOTO 0x11f; Pop(1)

0x110: PushEmpty(string)
0x111: Stack[-1] = "Neutral"
0x112: Call2 0xa2

0x113: Pop(1)
0x114: Push((int) 530253)
0x115: @@ SetMessage(Stack[-1])
0x116: Pop(1)
0x117: @@ ClearReplies()
0x118: Pop(0)
0x119: Push((int) 530254)
0x11a: Push((int) 31644)
0x11b: Push((int) 31643)
0x11c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11d: Pop(3)
0x11e: Return(); Pop(0)

0x11f: Push((int) 31644)
0x120: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x121: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x122: PushEmpty(string)
0x123: Stack[-1] = "Neutral"
0x124: Call2 0xa2

0x125: Pop(1)
0x126: Push((int) 530255)
0x127: @@ SetMessage(Stack[-1])
0x128: Pop(1)
0x129: @@ ClearReplies()
0x12a: Pop(0)
0x12b: Push((int) 530256)
0x12c: Push((int) 31647)
0x12d: Push((int) 31645)
0x12e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12f: Pop(3)
0x130: Push((int) 530262)
0x131: Push((int) 31652)
0x132: Push((int) 31651)
0x133: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x134: Pop(3)
0x135: Return(); Pop(0)

0x136: Push((int) 31652)
0x137: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x138: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x139: PushEmpty(string)
0x13a: Stack[-1] = "Neutral"
0x13b: Call2 0xa2

0x13c: Pop(1)
0x13d: Push((int) 530263)
0x13e: @@ SetMessage(Stack[-1])
0x13f: Pop(1)
0x140: @@ ClearReplies()
0x141: Pop(0)
0x142: Push((int) 530264)
0x143: Push((int) 31647)
0x144: Push((int) 31653)
0x145: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x146: Pop(3)
0x147: Return(); Pop(0)

0x148: Push((int) 31647)
0x149: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14a: IF (Stack[-1] == 0) GOTO 0x15a; Pop(1)

0x14b: PushEmpty(string)
0x14c: Stack[-1] = "Neutral"
0x14d: Call2 0xa2

0x14e: Pop(1)
0x14f: Push((int) 530258)
0x150: @@ SetMessage(Stack[-1])
0x151: Pop(1)
0x152: @@ ClearReplies()
0x153: Pop(0)
0x154: Push((int) 530259)
0x155: Push((int) 31649)
0x156: Push((int) 31648)
0x157: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x158: Pop(3)
0x159: Return(); Pop(0)

0x15a: Push((int) 31649)
0x15b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15c: IF (Stack[-1] == 0) GOTO 0x16c; Pop(1)

0x15d: PushEmpty(string)
0x15e: Stack[-1] = "Neutral"
0x15f: Call2 0xa2

0x160: Pop(1)
0x161: Push((int) 530260)
0x162: @@ SetMessage(Stack[-1])
0x163: Pop(1)
0x164: @@ ClearReplies()
0x165: Pop(0)
0x166: Push((int) 528032)
0x167: Push((int) -1)
0x168: Push((int) 29394)
0x169: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16a: Pop(3)
0x16b: Return(); Pop(0)

0x16c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x16d: PushEmpty(bool)
0x16e: Call2 0x2eb

0x16f: Pop(0)
0x170: IF (Stack[-1] == 0) GOTO 0x174; Pop(1)

0x171: @ lshStopAnimation()
0x172: Pop(0)
0x173: GOTO 0x176

0x174: @ StopAnimation()
0x175: Pop(0)
0x176: Return(); Pop(0)

0x177: GOTO 0xb9

0x178: Return(); Pop(0)

0x179: PushEmpty(float, float)
0x17a: Stack[-2] = (int) 300
0x17b: Stack[-1] = (int) 100
0x17c: Call2 0x18e

0x17d: Pop(2)
0x17e: Push((int) 3)
0x17f: @ Sleep(Stack[-1])
0x180: Pop(1)
0x181: GOTO 0x179

0x182: Return(); Pop(0)

0x183: PushEmpty()
0x184: PushEmpty()
0x185: Call2 0x1cf

0x186: Pop(0)
0x187: PushEmpty(int, object)
0x188: Stack[-1] = Stack[-3]
0x189: Push(-2, 1); TaskCall(0)
0x18a: Call2 0x0

0x18b: Pop(-2, 1); TaskReturn
0x18c: Pop(2)
0x18d: Return(); Pop(0)

0x18e: PushEmpty()
0x18f: PushEmpty(bool)
0x190: Call2 0x23b

0x191: Pop(0)
0x192: Pop(1); Push((bool) Stack[-1] == 0)
0x193: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x194: Return(); Pop(0)

0x195: Push("player")
0x196: @ FindActor(Stack[-4], Stack[-1])
0x197: Pop(1)
0x198: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x199: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x19a: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x19b: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x19c: Push((int) 10)
0x19d: Push((float)1.0)
0x19e: @ SetTimer(Stack[-2], Stack[-1])
0x19f: Pop(2)
0x1a0: PushEmpty()
0x1a1: Call2 0x1dd

0x1a2: Pop(0)
0x1a3: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1a4: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x1a5: Push((int) 10)
0x1a6: @ KillTimer(Stack[-1])
0x1a7: Pop(1)
0x1a8: Return(); Pop(0)

0x1a9: PushEmpty(float, float)
0x1aa: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x1ab: IF (Stack[-1] == 0) GOTO 0x1ae; Pop(1)

0x1ac: Stack[-3] = (bool) 0
0x1ad: Return(); Pop(2)

0x1ae: PushEmpty(float, object)
0x1af: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1b0: Call2 0x233

0x1b1: Pop(1)
0x1b2: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1b3: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1b4: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1b5: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x1b6: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x1b7: Return(); Pop(2)

0x1b8: PushEmpty()
0x1b9: Push((int) 10)
0x1ba: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1bb: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1bc: PushEmpty(bool)
0x1bd: Call2 0x1a9

0x1be: Pop(0)
0x1bf: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1c0: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x1c1: IF (Stack[-1] == 0) GOTO 0x1c7; Pop(1)

0x1c2: PushEmpty(object)
0x1c3: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1c4: Call2 0x2b6

0x1c5: Pop(1)
0x1c6: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x1c7: GOTO 0x1ce

0x1c8: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1c9: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1ca: Push("head")
0x1cb: @ UnlookAsync(Stack[-1])
0x1cc: Pop(1)
0x1cd: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1ce: Return(); Pop(0)

0x1cf: PushEmpty()
0x1d0: Call2 0x22e

0x1d1: Pop(0)
0x1d2: Push((int) 10)
0x1d3: @ KillTimer(Stack[-1])
0x1d4: Pop(1)
0x1d5: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1d6: IF (Stack[-1] == 0) GOTO 0x1db; Pop(1)

0x1d7: Push("head")
0x1d8: @ UnlookAsync(Stack[-1])
0x1d9: Pop(1)
0x1da: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1db: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1dc: Return(); Pop(0)

0x1dd: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x1de: @ WaitForAnimEnd()
0x1df: Pop(0)
0x1e0: PushEmpty(bool)
0x1e1: Call2 0x23b

0x1e2: Pop(0)
0x1e3: Pop(1); Push((bool) Stack[-1] == 0)
0x1e4: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1e5: Return(); Pop(14)

0x1e6: PushEmpty(int)
0x1e7: Call2 0x2f4

0x1e8: Stack[-8] = Stack[-1]
0x1e9: Pop(1)
0x1ea: Stack[-6] = (int) 0
0x1eb: PushEmpty(bool)
0x1ec: Stack[-1] = (bool) 0
0x1ed: Push((int) 5)
0x1ee: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x1ef: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1f0: PushEmpty(bool)
0x1f1: Call2 0x23b

0x1f2: Pop(0)
0x1f3: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1f4: Stack[-1] = (bool) 1
0x1f5: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x1f6: Push((int) 3)
0x1f7: @ irand(Stack[-6], Stack[-1])
0x1f8: Pop(1)
0x1f9: Push((int) 0)
0x1fa: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1fb: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0x1fc: Push(Stack[-7])
0x1fd: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x1fe: @ irand(Stack[-4], Stack[-7])
0x1ff: Pop(0)
0x200: Push("all")
0x201: PushEmpty(string, int)
0x202: Stack[-1] = Stack[-7]
0x203: Call2 0x2ed

0x204: Pop(1)
0x205: @ PlayAnimation(Stack[-2], Stack[-1])
0x206: Pop(2)
0x207: @ WaitForAnimEnd(Stack[-3])
0x208: Pop(0)
0x209: Pop(0); Push((bool) Stack[-3] == 0)
0x20a: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x20b: GOTO 0x229

0x20c: GOTO 0x21e

0x20d: Push((int) 1)
0x20e: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x20f: IF (Stack[-1] == 0) GOTO 0x21b; Pop(1)

0x210: Push((int) 4)
0x211: @ rand(Stack[-3], Stack[-1])
0x212: Pop(1)
0x213: Push((int) 1)
0x214: Pop(1); Push(Stack[-3] + Stack[-1]);
0x215: @ Sleep(Stack[-1], Stack[-2])
0x216: Pop(1)
0x217: Pop(0); Push((bool) Stack[-1] == 0)
0x218: IF (Stack[-1] == 0) GOTO 0x21a; Pop(1)

0x219: GOTO 0x229

0x21a: GOTO 0x21e

0x21b: Push(Stack[-6])
0x21c: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x21d: GOTO 0x229

0x21e: PushEmpty(bool)
0x21f: Call2 0x22c

0x220: Pop(0)
0x221: Pop(1); Push((bool) Stack[-1] == 0)
0x222: IF (Stack[-1] == 0) GOTO 0x224; Pop(1)

0x223: GOTO 0x229

0x224: @ ResetAAS()
0x225: Pop(0)
0x226: Push((int) 1)
0x227: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x228: GOTO 0x1eb

0x229: @ ResetAAS()
0x22a: Pop(0)
0x22b: Return(); Pop(14)

0x22c: Stack[-1] = (bool) 1
0x22d: Return(); Pop(0)

0x22e: @ StopAnimation()
0x22f: Pop(0)
0x230: @ StopGroup0()
0x231: Pop(0)
0x232: Return(); Pop(0)

0x233: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x234: @ GetPosition(Stack[-3])
0x235: Pop(0)
0x236: @@ GetPosition(Stack[-2])
0x237: Pop(0)
0x238: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x239: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x23a: Return(); Pop(6)

0x23b: PushEmpty(bool, bool)
0x23c: @ IsLoaded(Stack[-1])
0x23d: Pop(0)
0x23e: Stack[-3] = Stack[-1]
0x23f: Return(); Pop(2)

0x240: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x241: @@ GetPosition(Stack[-8])
0x242: Pop(0)
0x243: @@ GetEyesHeight(Stack[-9])
0x244: Pop(0)
0x245: Push(CvectorIndex(Stack[-8], 1))
0x246: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x247: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x248: @ GetPosition(Stack[-7])
0x249: Pop(0)
0x24a: @ GetEyesHeight(Stack[-9])
0x24b: Pop(0)
0x24c: Push(CvectorIndex(Stack[-7], 1))
0x24d: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x24e: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x24f: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x250: Push(CvectorIndex(Stack[-6], 1))
0x251: Stack[-1] = (int) 0
0x252: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x253: Pop(0); Push(Stack[-6] | Stack[-6]);
0x254: Pop(1); Push(Sqrt(Stack[-1]))
0x255: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x256: Stack[-5] = -Stack[-6]; Pop(0);
0x257: Pop(0); Push(Stack[-6] * Stack[-19]);
0x258: PushEmpty(cvector, cvector)
0x259: Push(CVector(0.0, 1.0, 0.0))
0x25a: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x25b: Call2 0x2c8

0x25c: Pop(1)
0x25d: Push((int) 25)
0x25e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x25f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x260: Push(CVector(0.0, 10.0, 0.0))
0x261: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x262: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x263: @ IsOverrideActive(Stack[-2])
0x264: Pop(0)
0x265: Push(Stack[-2])
0x266: IF (Stack[-1] == 0) GOTO 0x269; Pop(1)

0x267: Stack[-21] = (bool) 0
0x268: Return(); Pop(18)

0x269: @ StopWorld()
0x26a: Pop(0)
0x26b: Push((bool) 1)
0x26c: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x26d: Pop(1)
0x26e: Push(CvectorIndex(Stack[-4], 0))
0x26f: Push(CvectorIndex(Stack[-5], 2))
0x270: @ Rotate(Stack[-2], Stack[-1])
0x271: Pop(2)
0x272: PushEmpty(bool)
0x273: Call2 0x2eb

0x274: Pop(0)
0x275: IF (Stack[-1] == 0) GOTO 0x277; Pop(1)

0x276: GOTO 0x27f

0x277: Push("head")
0x278: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x279: Pop(1)
0x27a: Push(Stack[-1])
0x27b: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x27c: Push("head")
0x27d: @ LookAsyncCamera(Stack[-1])
0x27e: Pop(1)
0x27f: @ CameraWaitForPlayFinish()
0x280: Pop(0)
0x281: @ ResumeWorld()
0x282: Pop(0)
0x283: Stack[-21] = (bool) 1
0x284: Return(); Pop(18)

0x285: PushEmpty(bool, bool)
0x286: Push((bool) 1)
0x287: @ CameraSwitchToNormal(Stack[-1])
0x288: Pop(1)
0x289: PushEmpty(bool)
0x28a: Call2 0x2eb

0x28b: Pop(0)
0x28c: IF (Stack[-1] == 0) GOTO 0x28e; Pop(1)

0x28d: GOTO 0x296

0x28e: Push("head")
0x28f: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x290: Pop(1)
0x291: Push(Stack[-1])
0x292: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0x293: Push("head")
0x294: @ UnlookAsync(Stack[-1])
0x295: Pop(1)
0x296: Return(); Pop(2)

0x297: PushEmpty(bool, float, float, bool, float, float)
0x298: @ lshHasAnimation(Stack[-3], Stack[-7])
0x299: Pop(0)
0x29a: Push(Stack[-3])
0x29b: IF (Stack[-1] == 0) GOTO 0x2a2; Pop(1)

0x29c: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x29d: Pop(0)
0x29e: Push((bool) 0)
0x29f: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2a0: Pop(1)
0x2a1: GOTO 0x2a6

0x2a2: Push("Can't find lsh animation : ")
0x2a3: Pop(1); Push(Stack[-1] + Stack[-8]);
0x2a4: @ Trace(Stack[-1])
0x2a5: Pop(1)
0x2a6: Return(); Pop(6)

0x2a7: PushEmpty(bool, float, float, bool, float, float)
0x2a8: @ lshHasAnimation(Stack[-3], Stack[-8])
0x2a9: Pop(0)
0x2aa: Push(Stack[-3])
0x2ab: IF (Stack[-1] == 0) GOTO 0x2b1; Pop(1)

0x2ac: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x2ad: Pop(0)
0x2ae: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x2af: Pop(0)
0x2b0: GOTO 0x2b5

0x2b1: Push("Can't find lsh animation : ")
0x2b2: Pop(1); Push(Stack[-1] + Stack[-9]);
0x2b3: @ Trace(Stack[-1])
0x2b4: Pop(1)
0x2b5: Return(); Pop(6)

0x2b6: PushEmpty(float, cvector, float, cvector)
0x2b7: @@ GetEyesHeight(Stack[-2])
0x2b8: Pop(0)
0x2b9: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x2ba: Push(CvectorIndex(Stack[-1], 1))
0x2bb: Stack[-1] = Stack[-3]
0x2bc: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x2bd: Push("head")
0x2be: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x2bf: Pop(1)
0x2c0: Return(); Pop(4)

0x2c1: PushEmpty(bool)
0x2c2: Call2 0x2eb

0x2c3: Pop(0)
0x2c4: IF (Stack[-1] == 0) GOTO 0x2c7; Pop(1)

0x2c5: @ lshStopSpeech()
0x2c6: Pop(0)
0x2c7: Return(); Pop(0)

0x2c8: PushEmpty(float, float)
0x2c9: Pop(0); Push(Stack[-3] | Stack[-3]);
0x2ca: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2cb: Push((float)0.0)
0x2cc: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2cd: IF (Stack[-1] == 0) GOTO 0x2d0; Pop(1)

0x2ce: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x2cf: Return(); Pop(2)

0x2d0: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x2d1: Return(); Pop(2)

0x2d2: PushEmpty(int, int)
0x2d3: @ GetVariable(Stack[-3], Stack[-1])
0x2d4: Pop(0)
0x2d5: Stack[-4] = Stack[-1]
0x2d6: Return(); Pop(2)

0x2d7: PushEmpty(object, object)
0x2d8: @ FindActor(Stack[-1], Stack[-4])
0x2d9: Pop(0)
0x2da: Pop(0); Push((bool) Stack[-1] == 0)
0x2db: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x2dc: Stack[-5] = (bool) 0
0x2dd: Return(); Pop(2)

0x2de: @ Trigger(Stack[-1], Stack[-3])
0x2df: Pop(0)
0x2e0: Stack[-5] = (bool) 1
0x2e1: Return(); Pop(2)

0x2e2: Stack[-1] = 0
0x2e3: Stack[-1] = (int) 515597
0x2e4: Return(); Pop(0)

0x2e5: Stack[-1] = (int) 514841
0x2e6: Return(); Pop(0)

0x2e7: Stack[-1] = "ui/NPC_Citizen2.png"
0x2e8: Return(); Pop(0)

0x2e9: Stack[-1] = "ui/NPC_Citizen2_b.png"
0x2ea: Return(); Pop(0)

0x2eb: Stack[-1] = (bool) 0
0x2ec: Return(); Pop(0)

0x2ed: PushEmpty(string, string)
0x2ee: Stack[-1] = "idle"
0x2ef: Push(Stack[-3])
0x2f0: IF (Stack[-1] == 0) GOTO 0x2f2; Pop(1)

0x2f1: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x2f2: Stack[-4] = Stack[-1]
0x2f3: Return(); Pop(2)

0x2f4: PushEmpty(int, bool, int, bool)
0x2f5: Stack[-2] = (int) 0
0x2f6: Push("all")
0x2f7: PushEmpty(string, int)
0x2f8: Stack[-1] = Stack[-5]
0x2f9: Call2 0x2ed

0x2fa: Pop(1)
0x2fb: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2fc: Pop(2)
0x2fd: Pop(0); Push((bool) Stack[-1] == 0)
0x2fe: IF (Stack[-1] == 0) GOTO 0x300; Pop(1)

0x2ff: GOTO 0x303

0x300: Push((int) 1)
0x301: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x302: GOTO 0x2f6

0x303: Stack[-5] = Stack[-2]
0x304: Return(); Pop(4)

0x305: PushEmpty()
0x306: Push("ook11Officer1")
0x307: Push((int) 1)
0x308: @ SetVariable(Stack[-2], Stack[-1])
0x309: Pop(2)
0x30a: Return(); Pop(0)

0x30b: PushEmpty()
0x30c: Push("k11q01")
0x30d: Push((int) 3)
0x30e: @ SetVariable(Stack[-2], Stack[-1])
0x30f: Pop(2)
0x310: PushEmpty()
0x311: Call2 0x325

0x312: Pop(0)
0x313: PushEmpty(bool, string, string)
0x314: Stack[-2] = "quest_k11_01"
0x315: Stack[-1] = "init_house_petr"
0x316: Call2 0x2d7

0x317: Pop(3)
0x318: Return(); Pop(0)

0x319: PushEmpty()
0x31a: PushEmpty(int, string)
0x31b: Stack[-1] = "ook11Officer1"
0x31c: Call2 0x2d2

0x31d: Pop(1)
0x31e: Push((int) 0)
0x31f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x320: IF (Stack[-1] == 0) GOTO 0x323; Pop(1)

0x321: Stack[-2] = (bool) 1
0x322: Return(); Pop(0)

0x323: Stack[-2] = (bool) 0
0x324: Return(); Pop(0)

0x325: PushEmpty(object, object)
0x326: Push((int) 486)
0x327: Push((int) 1)
0x328: Push((int) 528053)
0x329: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x32a: Pop(3)
0x32b: PushEmpty(bool, object, int)
0x32c: Stack[-2] = Stack[-4]
0x32d: Stack[-1] = (int) 480
0x32e: Call2 0x33f

0x32f: Pop(3)
0x330: Return(); Pop(2)

0x331: Stack[-1] = 0
0x332: PushEmpty(object, object)
0x333: @ GetDiaryRoot(Stack[-1])
0x334: Pop(0)
0x335: Pop(0); Push((bool) Stack[-1] == 0)
0x336: IF (Stack[-1] == 0) GOTO 0x33c; Pop(1)

0x337: Push("Can't retrieve diary root")
0x338: @ Trace(Stack[-1])
0x339: Pop(1)
0x33a: Stack[-3] = (bool) 0
0x33b: Return(); Pop(2)

0x33c: Stack[-3] = Stack[-1]
0x33d: Return(); Pop(2)

0x33e: Stack[-1] = 0
0x33f: PushEmpty(object, object, int, object, object, int)
0x340: PushEmpty(object)
0x341: Call2 0x332

0x342: Stack[-4] = Stack[-1]
0x343: Pop(1)
0x344: @@ Find(Stack[-7], Stack[-2])
0x345: Pop(0)
0x346: Pop(0); Push((bool) Stack[-2] == 0)
0x347: IF (Stack[-1] == 0) GOTO 0x34e; Pop(1)

0x348: Push("Can't find diary parent with id: ")
0x349: Pop(1); Push(Stack[-1] + Stack[-8]);
0x34a: @ Trace(Stack[-1])
0x34b: Pop(1)
0x34c: Stack[-9] = (bool) 0
0x34d: Return(); Pop(6)

0x34e: @@ AddChild(Stack[-8])
0x34f: Pop(0)
0x350: Push((int) 7)
0x351: @ SendWorldWndMessage(Stack[-1])
0x352: Pop(1)
0x353: @@ GetCategory(Stack[-1])
0x354: Pop(0)
0x355: @ SetDiarySection(Stack[-1])
0x356: Pop(0)
0x357: Stack[-9] = (bool) 0
0x358: Return(); Pop(6)

0x359: Stack[-2] = 0
0x35a: Stack[-3] = 0
0x35b: PushEmpty(int, int)
0x35c: Push("branch")
0x35d: @ GetVariable(Stack[-1], Stack[-2])
0x35e: Pop(1)
0x35f: Push((int) 0)
0x360: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x361: IF (Stack[-1] == 0) GOTO 0x365; Pop(1)

0x362: Stack[-3] = (int) 1
0x363: Return(); Pop(2)

0x364: GOTO 0x36a

0x365: Push((int) 1)
0x366: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x367: IF (Stack[-1] == 0) GOTO 0x36a; Pop(1)

0x368: Stack[-3] = (int) 2
0x369: Return(); Pop(2)

0x36a: Stack[-3] = (int) 3
0x36b: Return(); Pop(2)

