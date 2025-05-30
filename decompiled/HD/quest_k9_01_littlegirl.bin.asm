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
	ook9Littlegirl1
	k9q01ChildTalk
	k9q01
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
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
	self (1 args)
	GetVariable (2 args)
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	HasAnimation (3 args)

RunOp = 0x180
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xbd Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool, bool) Params = 0
		EVENT_0 Op = 0x186 Vars = (object)
		EVENT_26 Op = 0x1b7 Vars = (string)
		EVENT_6 Op = 0x1bf Vars = ()
		EVENT_7 Op = 0x200 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x288

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x394

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x392

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x396

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x398

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x381

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
0x41: Call2 0x2cd

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
0x4f: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x33f

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x55: PushEmpty(object, object)
0x56: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x57: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58: Call2 0x325

0x59: Pop(2)
0x5a: PushEmpty(object, object)
0x5b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5d: Call2 0x32b

0x5e: Pop(2)
0x5f: PushEmpty(string)
0x60: Stack[-1] = "Neutral"
0x61: Call2 0xa7

0x62: Pop(1)
0x63: Push((int) 529769)
0x64: @@ SetMessage(Stack[-1])
0x65: Pop(1)
0x66: @@ ClearReplies()
0x67: Pop(0)
0x68: Push((int) 529773)
0x69: Push((int) 31230)
0x6a: Push((int) 31229)
0x6b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c: Pop(3)
0x6d: Push((int) 529776)
0x6e: Push((int) 31233)
0x6f: Push((int) 31232)
0x70: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x71: Pop(3)
0x72: GOTO 0x89

0x73: PushEmpty(string)
0x74: Stack[-1] = "Neutral"
0x75: Call2 0xa7

0x76: Pop(1)
0x77: Push((int) 529770)
0x78: @@ SetMessage(Stack[-1])
0x79: Pop(1)
0x7a: @@ ClearReplies()
0x7b: Pop(0)
0x7c: Push((int) 529771)
0x7d: Push((int) -1)
0x7e: Push((int) 31227)
0x7f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x80: Pop(3)
0x81: Push((int) 529772)
0x82: Push((int) -1)
0x83: Push((int) 31228)
0x84: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x85: Pop(3)
0x86: GOTO 0x89

0x87: Return(); Pop(0)

0x88: GOTO 0x4e

0x89: PushEmpty(bool)
0x8a: Call2 0x39a

0x8b: Pop(0)
0x8c: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x8d: @ lshWaitForAnimEnd()
0x8e: Pop(0)
0x8f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x90: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x91: GOTO 0x97

0x92: PushEmpty(string)
0x93: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x94: Call2 0x2df

0x95: Pop(1)
0x96: GOTO 0x8d

0x97: GOTO 0xa6

0x98: Push("all")
0x99: Push("idle")
0x9a: @ PlayAnimation(Stack[-2], Stack[-1])
0x9b: Pop(2)
0x9c: @ WaitForAnimEnd()
0x9d: Pop(0)
0x9e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9f: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0xa0: GOTO 0xa6

0xa1: Push("all")
0xa2: Push("idle")
0xa3: @ PlayAnimation(Stack[-2], Stack[-1])
0xa4: Pop(2)
0xa5: GOTO 0x9c

0xa6: Return(); Pop(0)

0xa7: PushEmpty()
0xa8: PushEmpty(bool)
0xa9: Call2 0x39a

0xaa: Pop(0)
0xab: Pop(1); Push((bool) Stack[-1] == 0)
0xac: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xad: Return(); Pop(0)

0xae: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xaf: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0xb0: Return(); Pop(0)

0xb1: PushEmpty(string, bool)
0xb2: Stack[-2] = Stack[-3]
0xb3: Push("")
0xb4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb5: IF (Stack[-1] == 0) GOTO 0xb8; Pop(1)

0xb6: Stack[-1] = (bool) 0
0xb7: GOTO 0xb9

0xb8: Stack[-1] = (bool) 1
0xb9: Call2 0x2ef

0xba: Pop(2)
0xbb: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xbc: Return(); Pop(0)

0xbd: PushEmpty()
0xbe: Push((int) 1)
0xbf: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0xc0: PushEmpty()
0xc1: Call2 0x309

0xc2: Pop(0)
0xc3: Push((int) 31225)
0xc4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc5: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xc6: PushEmpty(bool, object)
0xc7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc8: Call2 0x33f

0xc9: Pop(1)
0xca: IF (Stack[-1] == 0) GOTO 0xe9; Pop(1)

0xcb: PushEmpty(object, object)
0xcc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xce: Call2 0x325

0xcf: Pop(2)
0xd0: PushEmpty(object, object)
0xd1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd3: Call2 0x32b

0xd4: Pop(2)
0xd5: PushEmpty(string)
0xd6: Stack[-1] = "Neutral"
0xd7: Call2 0xa7

0xd8: Pop(1)
0xd9: Push((int) 529769)
0xda: @@ SetMessage(Stack[-1])
0xdb: Pop(1)
0xdc: @@ ClearReplies()
0xdd: Pop(0)
0xde: Push((int) 529773)
0xdf: Push((int) 31230)
0xe0: Push((int) 31229)
0xe1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe2: Pop(3)
0xe3: Push((int) 529776)
0xe4: Push((int) 31233)
0xe5: Push((int) 31232)
0xe6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe7: Pop(3)
0xe8: Return(); Pop(0)

0xe9: PushEmpty(string)
0xea: Stack[-1] = "Neutral"
0xeb: Call2 0xa7

0xec: Pop(1)
0xed: Push((int) 529770)
0xee: @@ SetMessage(Stack[-1])
0xef: Pop(1)
0xf0: @@ ClearReplies()
0xf1: Pop(0)
0xf2: Push((int) 529771)
0xf3: Push((int) -1)
0xf4: Push((int) 31227)
0xf5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf6: Pop(3)
0xf7: Push((int) 529772)
0xf8: Push((int) -1)
0xf9: Push((int) 31228)
0xfa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfb: Pop(3)
0xfc: Return(); Pop(0)

0xfd: Push((int) 31233)
0xfe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xff: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0x100: PushEmpty(string)
0x101: Stack[-1] = "Neutral"
0x102: Call2 0xa7

0x103: Pop(1)
0x104: Push((int) 529777)
0x105: @@ SetMessage(Stack[-1])
0x106: Pop(1)
0x107: @@ ClearReplies()
0x108: Pop(0)
0x109: Push((int) 529778)
0x10a: Push((int) 31230)
0x10b: Push((int) 31234)
0x10c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10d: Pop(3)
0x10e: Return(); Pop(0)

0x10f: Push((int) 31230)
0x110: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x111: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x112: PushEmpty(string)
0x113: Stack[-1] = "Neutral"
0x114: Call2 0xa7

0x115: Pop(1)
0x116: Push((int) 529774)
0x117: @@ SetMessage(Stack[-1])
0x118: Pop(1)
0x119: @@ ClearReplies()
0x11a: Pop(0)
0x11b: Push((int) 529775)
0x11c: Push((int) 31236)
0x11d: Push((int) 31231)
0x11e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11f: Pop(3)
0x120: Return(); Pop(0)

0x121: Push((int) 31236)
0x122: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x123: IF (Stack[-1] == 0) GOTO 0x133; Pop(1)

0x124: PushEmpty(string)
0x125: Stack[-1] = "Neutral"
0x126: Call2 0xa7

0x127: Pop(1)
0x128: Push((int) 529779)
0x129: @@ SetMessage(Stack[-1])
0x12a: Pop(1)
0x12b: @@ ClearReplies()
0x12c: Pop(0)
0x12d: Push((int) 529780)
0x12e: Push((int) 31238)
0x12f: Push((int) 31237)
0x130: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x131: Pop(3)
0x132: Return(); Pop(0)

0x133: Push((int) 31238)
0x134: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x135: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x136: PushEmpty(string)
0x137: Stack[-1] = "Neutral"
0x138: Call2 0xa7

0x139: Pop(1)
0x13a: Push((int) 529781)
0x13b: @@ SetMessage(Stack[-1])
0x13c: Pop(1)
0x13d: @@ ClearReplies()
0x13e: Pop(0)
0x13f: Push((int) 529782)
0x140: Push((int) 31243)
0x141: Push((int) 31239)
0x142: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x143: Pop(3)
0x144: Push((int) 529783)
0x145: Push((int) 31241)
0x146: Push((int) 31240)
0x147: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x148: Pop(3)
0x149: Return(); Pop(0)

0x14a: Push((int) 31241)
0x14b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14c: IF (Stack[-1] == 0) GOTO 0x15c; Pop(1)

0x14d: PushEmpty(string)
0x14e: Stack[-1] = "Neutral"
0x14f: Call2 0xa7

0x150: Pop(1)
0x151: Push((int) 529784)
0x152: @@ SetMessage(Stack[-1])
0x153: Pop(1)
0x154: @@ ClearReplies()
0x155: Pop(0)
0x156: Push((int) 529785)
0x157: Push((int) 31243)
0x158: Push((int) 31242)
0x159: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15a: Pop(3)
0x15b: Return(); Pop(0)

0x15c: Push((int) 31243)
0x15d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15e: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x15f: PushEmpty(string)
0x160: Stack[-1] = "Neutral"
0x161: Call2 0xa7

0x162: Pop(1)
0x163: Push((int) 529786)
0x164: @@ SetMessage(Stack[-1])
0x165: Pop(1)
0x166: @@ ClearReplies()
0x167: Pop(0)
0x168: Push((int) 529787)
0x169: Push((int) -1)
0x16a: Push((int) 31245)
0x16b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16c: Pop(3)
0x16d: Push((int) 529788)
0x16e: Push((int) -1)
0x16f: Push((int) 31246)
0x170: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x171: Pop(3)
0x172: Return(); Pop(0)

0x173: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x174: PushEmpty(bool)
0x175: Call2 0x39a

0x176: Pop(0)
0x177: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x178: @ lshStopAnimation()
0x179: Pop(0)
0x17a: GOTO 0x17d

0x17b: @ StopAnimation()
0x17c: Pop(0)
0x17d: Return(); Pop(0)

0x17e: GOTO 0xbe

0x17f: Return(); Pop(0)

0x180: PushEmpty(float, float)
0x181: Stack[-2] = (int) 300
0x182: Stack[-1] = (int) 100
0x183: Call2 0x191

0x184: Pop(2)
0x185: Return(); Pop(0)

0x186: PushEmpty()
0x187: PushEmpty()
0x188: Call2 0x217

0x189: Pop(0)
0x18a: PushEmpty(int, object)
0x18b: Stack[-1] = Stack[-3]
0x18c: Push(-2, 1); TaskCall(0)
0x18d: Call2 0x0

0x18e: Pop(-2, 1); TaskReturn
0x18f: Pop(2)
0x190: Return(); Pop(0)

0x191: PushEmpty(float, bool, float, bool)
0x192: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x193: Push((int) 3)
0x194: @ rand(Stack[-3], Stack[-1])
0x195: Pop(1)
0x196: Push((int) 3)
0x197: Pop(1); Push(Stack[-3] + Stack[-1]);
0x198: @ Sleep(Stack[-1], Stack[-2])
0x199: Pop(1)
0x19a: Stack[6 + Tasks[-1].StackPointer] = (bool)1
0x19b: PushEmpty(float, float)
0x19c: Stack[-2] = Stack[-8]
0x19d: Stack[-1] = Stack[-7]
0x19e: Call2 0x1d6

0x19f: Pop(2)
0x1a0: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x1a1: GOTO 0x193

0x1a2: Return(); Pop(4)

0x1a3: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x1a4: PushEmpty(bool)
0x1a5: Stack[-1] = (bool) 0
0x1a6: PushEmpty(bool)
0x1a7: Call2 0x283

0x1a8: Pop(0)
0x1a9: Pop(1); Push((bool) Stack[-1] == 0)
0x1aa: IF (Stack[-1] == 0) GOTO 0x1b0; Pop(1)

0x1ab: PushEmpty(bool)
0x1ac: Call2 0x1d4

0x1ad: Pop(0)
0x1ae: IF (Stack[-1] == 0) GOTO 0x1b0; Pop(1)

0x1af: Stack[-1] = (bool) 1
0x1b0: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1b1: PushEmpty(object)
0x1b2: Call2 0x310

0x1b3: Pop(0)
0x1b4: @ RemoveActor(Stack[-1])
0x1b5: Pop(1)
0x1b6: Return(); Pop(0)

0x1b7: PushEmpty()
0x1b8: Push("cleanup")
0x1b9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1ba: IF (Stack[-1] == 0) GOTO 0x1be; Pop(1)

0x1bb: PushEmpty()
0x1bc: Call2 0x1a3

0x1bd: Pop(0)
0x1be: Return(); Pop(0)

0x1bf: Push( Stack[6 + Tasks[-1].StackPointer] )
0x1c0: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1c1: PushEmpty()
0x1c2: Call2 0x217

0x1c3: Pop(0)
0x1c4: PushEmpty(bool)
0x1c5: Stack[-1] = (bool) 0
0x1c6: Push( Stack[5 + Tasks[-1].StackPointer] )
0x1c7: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1c8: PushEmpty(bool)
0x1c9: Call2 0x1d4

0x1ca: Pop(0)
0x1cb: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1cc: Stack[-1] = (bool) 1
0x1cd: IF (Stack[-1] == 0) GOTO 0x1d3; Pop(1)

0x1ce: PushEmpty(object)
0x1cf: Call2 0x310

0x1d0: Pop(0)
0x1d1: @ RemoveActor(Stack[-1])
0x1d2: Pop(1)
0x1d3: Return(); Pop(0)

0x1d4: Stack[-1] = (bool) 1
0x1d5: Return(); Pop(0)

0x1d6: PushEmpty()
0x1d7: PushEmpty(bool)
0x1d8: Call2 0x283

0x1d9: Pop(0)
0x1da: Pop(1); Push((bool) Stack[-1] == 0)
0x1db: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1dc: Return(); Pop(0)

0x1dd: Push("player")
0x1de: @ FindActor(Stack[-4], Stack[-1])
0x1df: Pop(1)
0x1e0: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1e1: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1e2: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x1e3: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x1e4: Push((int) 10)
0x1e5: Push((float)1.0)
0x1e6: @ SetTimer(Stack[-2], Stack[-1])
0x1e7: Pop(2)
0x1e8: PushEmpty()
0x1e9: Call2 0x225

0x1ea: Pop(0)
0x1eb: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1ec: IF (Stack[-1] == 0) GOTO 0x1f0; Pop(1)

0x1ed: Push((int) 10)
0x1ee: @ KillTimer(Stack[-1])
0x1ef: Pop(1)
0x1f0: Return(); Pop(0)

0x1f1: PushEmpty(float, float)
0x1f2: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x1f3: IF (Stack[-1] == 0) GOTO 0x1f6; Pop(1)

0x1f4: Stack[-3] = (bool) 0
0x1f5: Return(); Pop(2)

0x1f6: PushEmpty(float, object)
0x1f7: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1f8: Call2 0x27b

0x1f9: Pop(1)
0x1fa: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1fb: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1fc: IF (Stack[-1] == 0) GOTO 0x1fe; Pop(1)

0x1fd: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x1fe: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x1ff: Return(); Pop(2)

0x200: PushEmpty()
0x201: Push((int) 10)
0x202: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x203: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x204: PushEmpty(bool)
0x205: Call2 0x1f1

0x206: Pop(0)
0x207: IF (Stack[-1] == 0) GOTO 0x210; Pop(1)

0x208: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x209: IF (Stack[-1] == 0) GOTO 0x20f; Pop(1)

0x20a: PushEmpty(object)
0x20b: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x20c: Call2 0x2fe

0x20d: Pop(1)
0x20e: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x20f: GOTO 0x216

0x210: Push( Stack[2 + Tasks[-1].StackPointer] )
0x211: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x212: Push("head")
0x213: @ UnlookAsync(Stack[-1])
0x214: Pop(1)
0x215: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x216: Return(); Pop(0)

0x217: PushEmpty()
0x218: Call2 0x276

0x219: Pop(0)
0x21a: Push((int) 10)
0x21b: @ KillTimer(Stack[-1])
0x21c: Pop(1)
0x21d: Push( Stack[2 + Tasks[-1].StackPointer] )
0x21e: IF (Stack[-1] == 0) GOTO 0x223; Pop(1)

0x21f: Push("head")
0x220: @ UnlookAsync(Stack[-1])
0x221: Pop(1)
0x222: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x223: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x224: Return(); Pop(0)

0x225: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x226: @ WaitForAnimEnd()
0x227: Pop(0)
0x228: PushEmpty(bool)
0x229: Call2 0x283

0x22a: Pop(0)
0x22b: Pop(1); Push((bool) Stack[-1] == 0)
0x22c: IF (Stack[-1] == 0) GOTO 0x22e; Pop(1)

0x22d: Return(); Pop(14)

0x22e: PushEmpty(int)
0x22f: Call2 0x3a3

0x230: Stack[-8] = Stack[-1]
0x231: Pop(1)
0x232: Stack[-6] = (int) 0
0x233: PushEmpty(bool)
0x234: Stack[-1] = (bool) 0
0x235: Push((int) 5)
0x236: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x237: IF (Stack[-1] == 0) GOTO 0x23d; Pop(1)

0x238: PushEmpty(bool)
0x239: Call2 0x283

0x23a: Pop(0)
0x23b: IF (Stack[-1] == 0) GOTO 0x23d; Pop(1)

0x23c: Stack[-1] = (bool) 1
0x23d: IF (Stack[-1] == 0) GOTO 0x271; Pop(1)

0x23e: Push((int) 3)
0x23f: @ irand(Stack[-6], Stack[-1])
0x240: Pop(1)
0x241: Push((int) 0)
0x242: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x243: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x244: Push(Stack[-7])
0x245: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x246: @ irand(Stack[-4], Stack[-7])
0x247: Pop(0)
0x248: Push("all")
0x249: PushEmpty(string, int)
0x24a: Stack[-1] = Stack[-7]
0x24b: Call2 0x39c

0x24c: Pop(1)
0x24d: @ PlayAnimation(Stack[-2], Stack[-1])
0x24e: Pop(2)
0x24f: @ WaitForAnimEnd(Stack[-3])
0x250: Pop(0)
0x251: Pop(0); Push((bool) Stack[-3] == 0)
0x252: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x253: GOTO 0x271

0x254: GOTO 0x266

0x255: Push((int) 1)
0x256: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x257: IF (Stack[-1] == 0) GOTO 0x263; Pop(1)

0x258: Push((int) 4)
0x259: @ rand(Stack[-3], Stack[-1])
0x25a: Pop(1)
0x25b: Push((int) 1)
0x25c: Pop(1); Push(Stack[-3] + Stack[-1]);
0x25d: @ Sleep(Stack[-1], Stack[-2])
0x25e: Pop(1)
0x25f: Pop(0); Push((bool) Stack[-1] == 0)
0x260: IF (Stack[-1] == 0) GOTO 0x262; Pop(1)

0x261: GOTO 0x271

0x262: GOTO 0x266

0x263: Push(Stack[-6])
0x264: IF (Stack[-1] == 0) GOTO 0x266; Pop(1)

0x265: GOTO 0x271

0x266: PushEmpty(bool)
0x267: Call2 0x274

0x268: Pop(0)
0x269: Pop(1); Push((bool) Stack[-1] == 0)
0x26a: IF (Stack[-1] == 0) GOTO 0x26c; Pop(1)

0x26b: GOTO 0x271

0x26c: @ ResetAAS()
0x26d: Pop(0)
0x26e: Push((int) 1)
0x26f: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x270: GOTO 0x233

0x271: @ ResetAAS()
0x272: Pop(0)
0x273: Return(); Pop(14)

0x274: Stack[-1] = (bool) 1
0x275: Return(); Pop(0)

0x276: @ StopAnimation()
0x277: Pop(0)
0x278: @ StopGroup0()
0x279: Pop(0)
0x27a: Return(); Pop(0)

0x27b: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x27c: @ GetPosition(Stack[-3])
0x27d: Pop(0)
0x27e: @@ GetPosition(Stack[-2])
0x27f: Pop(0)
0x280: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x281: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x282: Return(); Pop(6)

0x283: PushEmpty(bool, bool)
0x284: @ IsLoaded(Stack[-1])
0x285: Pop(0)
0x286: Stack[-3] = Stack[-1]
0x287: Return(); Pop(2)

0x288: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x289: @@ GetPosition(Stack[-8])
0x28a: Pop(0)
0x28b: @@ GetEyesHeight(Stack[-9])
0x28c: Pop(0)
0x28d: Push(CvectorIndex(Stack[-8], 1))
0x28e: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x28f: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x290: @ GetPosition(Stack[-7])
0x291: Pop(0)
0x292: @ GetEyesHeight(Stack[-9])
0x293: Pop(0)
0x294: Push(CvectorIndex(Stack[-7], 1))
0x295: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x296: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x297: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x298: Push(CvectorIndex(Stack[-6], 1))
0x299: Stack[-1] = (int) 0
0x29a: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x29b: Pop(0); Push(Stack[-6] | Stack[-6]);
0x29c: Pop(1); Push(Sqrt(Stack[-1]))
0x29d: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x29e: Stack[-5] = -Stack[-6]; Pop(0);
0x29f: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2a0: PushEmpty(cvector, cvector)
0x2a1: Push(CVector(0.0, 1.0, 0.0))
0x2a2: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2a3: Call2 0x316

0x2a4: Pop(1)
0x2a5: Push((int) 25)
0x2a6: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2a7: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2a8: Push(CVector(0.0, 10.0, 0.0))
0x2a9: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2aa: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2ab: @ IsOverrideActive(Stack[-2])
0x2ac: Pop(0)
0x2ad: Push(Stack[-2])
0x2ae: IF (Stack[-1] == 0) GOTO 0x2b1; Pop(1)

0x2af: Stack[-21] = (bool) 0
0x2b0: Return(); Pop(18)

0x2b1: @ StopWorld()
0x2b2: Pop(0)
0x2b3: Push((bool) 1)
0x2b4: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x2b5: Pop(1)
0x2b6: Push(CvectorIndex(Stack[-4], 0))
0x2b7: Push(CvectorIndex(Stack[-5], 2))
0x2b8: @ Rotate(Stack[-2], Stack[-1])
0x2b9: Pop(2)
0x2ba: PushEmpty(bool)
0x2bb: Call2 0x39a

0x2bc: Pop(0)
0x2bd: IF (Stack[-1] == 0) GOTO 0x2bf; Pop(1)

0x2be: GOTO 0x2c7

0x2bf: Push("head")
0x2c0: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2c1: Pop(1)
0x2c2: Push(Stack[-1])
0x2c3: IF (Stack[-1] == 0) GOTO 0x2c7; Pop(1)

0x2c4: Push("head")
0x2c5: @ LookAsyncCamera(Stack[-1])
0x2c6: Pop(1)
0x2c7: @ CameraWaitForPlayFinish()
0x2c8: Pop(0)
0x2c9: @ ResumeWorld()
0x2ca: Pop(0)
0x2cb: Stack[-21] = (bool) 1
0x2cc: Return(); Pop(18)

0x2cd: PushEmpty(bool, bool)
0x2ce: Push((bool) 1)
0x2cf: @ CameraSwitchToNormal(Stack[-1])
0x2d0: Pop(1)
0x2d1: PushEmpty(bool)
0x2d2: Call2 0x39a

0x2d3: Pop(0)
0x2d4: IF (Stack[-1] == 0) GOTO 0x2d6; Pop(1)

0x2d5: GOTO 0x2de

0x2d6: Push("head")
0x2d7: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2d8: Pop(1)
0x2d9: Push(Stack[-1])
0x2da: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x2db: Push("head")
0x2dc: @ UnlookAsync(Stack[-1])
0x2dd: Pop(1)
0x2de: Return(); Pop(2)

0x2df: PushEmpty(bool, float, float, bool, float, float)
0x2e0: @ lshHasAnimation(Stack[-3], Stack[-7])
0x2e1: Pop(0)
0x2e2: Push(Stack[-3])
0x2e3: IF (Stack[-1] == 0) GOTO 0x2ea; Pop(1)

0x2e4: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x2e5: Pop(0)
0x2e6: Push((bool) 0)
0x2e7: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2e8: Pop(1)
0x2e9: GOTO 0x2ee

0x2ea: Push("Can't find lsh animation : ")
0x2eb: Pop(1); Push(Stack[-1] + Stack[-8]);
0x2ec: @ Trace(Stack[-1])
0x2ed: Pop(1)
0x2ee: Return(); Pop(6)

0x2ef: PushEmpty(bool, float, float, bool, float, float)
0x2f0: @ lshHasAnimation(Stack[-3], Stack[-8])
0x2f1: Pop(0)
0x2f2: Push(Stack[-3])
0x2f3: IF (Stack[-1] == 0) GOTO 0x2f9; Pop(1)

0x2f4: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x2f5: Pop(0)
0x2f6: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x2f7: Pop(0)
0x2f8: GOTO 0x2fd

0x2f9: Push("Can't find lsh animation : ")
0x2fa: Pop(1); Push(Stack[-1] + Stack[-9]);
0x2fb: @ Trace(Stack[-1])
0x2fc: Pop(1)
0x2fd: Return(); Pop(6)

0x2fe: PushEmpty(float, cvector, float, cvector)
0x2ff: @@ GetEyesHeight(Stack[-2])
0x300: Pop(0)
0x301: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x302: Push(CvectorIndex(Stack[-1], 1))
0x303: Stack[-1] = Stack[-3]
0x304: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x305: Push("head")
0x306: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x307: Pop(1)
0x308: Return(); Pop(4)

0x309: PushEmpty(bool)
0x30a: Call2 0x39a

0x30b: Pop(0)
0x30c: IF (Stack[-1] == 0) GOTO 0x30f; Pop(1)

0x30d: @ lshStopSpeech()
0x30e: Pop(0)
0x30f: Return(); Pop(0)

0x310: PushEmpty(object, object)
0x311: @ self(Stack[-1])
0x312: Pop(0)
0x313: Stack[-3] = Stack[-1]
0x314: Return(); Pop(2)

0x315: Stack[-1] = 0
0x316: PushEmpty(float, float)
0x317: Pop(0); Push(Stack[-3] | Stack[-3]);
0x318: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x319: Push((float)0.0)
0x31a: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x31b: IF (Stack[-1] == 0) GOTO 0x31e; Pop(1)

0x31c: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x31d: Return(); Pop(2)

0x31e: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x31f: Return(); Pop(2)

0x320: PushEmpty(int, int)
0x321: @ GetVariable(Stack[-3], Stack[-1])
0x322: Pop(0)
0x323: Stack[-4] = Stack[-1]
0x324: Return(); Pop(2)

0x325: PushEmpty()
0x326: Push("ook9Littlegirl1")
0x327: Push((int) 1)
0x328: @ SetVariable(Stack[-2], Stack[-1])
0x329: Pop(2)
0x32a: Return(); Pop(0)

0x32b: PushEmpty()
0x32c: PushEmpty(int, string)
0x32d: Stack[-1] = "k9q01ChildTalk"
0x32e: Call2 0x320

0x32f: Pop(1)
0x330: Push((int) 0)
0x331: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x332: IF (Stack[-1] == 0) GOTO 0x33e; Pop(1)

0x333: Push("k9q01ChildTalk")
0x334: Push((int) 1)
0x335: @ SetVariable(Stack[-2], Stack[-1])
0x336: Pop(2)
0x337: Push("k9q01")
0x338: Push((int) 7)
0x339: @ SetVariable(Stack[-2], Stack[-1])
0x33a: Pop(2)
0x33b: PushEmpty()
0x33c: Call2 0x34b

0x33d: Pop(0)
0x33e: Return(); Pop(0)

0x33f: PushEmpty()
0x340: PushEmpty(int, string)
0x341: Stack[-1] = "ook9Littlegirl1"
0x342: Call2 0x320

0x343: Pop(1)
0x344: Push((int) 0)
0x345: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x346: IF (Stack[-1] == 0) GOTO 0x349; Pop(1)

0x347: Stack[-2] = (bool) 1
0x348: Return(); Pop(0)

0x349: Stack[-2] = (bool) 0
0x34a: Return(); Pop(0)

0x34b: PushEmpty(object, object)
0x34c: Push((int) 524)
0x34d: Push((int) 1)
0x34e: Push((int) 529816)
0x34f: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x350: Pop(3)
0x351: PushEmpty(bool, object, int)
0x352: Stack[-2] = Stack[-4]
0x353: Stack[-1] = (int) 517
0x354: Call2 0x365

0x355: Pop(3)
0x356: Return(); Pop(2)

0x357: Stack[-1] = 0
0x358: PushEmpty(object, object)
0x359: @ GetDiaryRoot(Stack[-1])
0x35a: Pop(0)
0x35b: Pop(0); Push((bool) Stack[-1] == 0)
0x35c: IF (Stack[-1] == 0) GOTO 0x362; Pop(1)

0x35d: Push("Can't retrieve diary root")
0x35e: @ Trace(Stack[-1])
0x35f: Pop(1)
0x360: Stack[-3] = (bool) 0
0x361: Return(); Pop(2)

0x362: Stack[-3] = Stack[-1]
0x363: Return(); Pop(2)

0x364: Stack[-1] = 0
0x365: PushEmpty(object, object, int, object, object, int)
0x366: PushEmpty(object)
0x367: Call2 0x358

0x368: Stack[-4] = Stack[-1]
0x369: Pop(1)
0x36a: @@ Find(Stack[-7], Stack[-2])
0x36b: Pop(0)
0x36c: Pop(0); Push((bool) Stack[-2] == 0)
0x36d: IF (Stack[-1] == 0) GOTO 0x374; Pop(1)

0x36e: Push("Can't find diary parent with id: ")
0x36f: Pop(1); Push(Stack[-1] + Stack[-8]);
0x370: @ Trace(Stack[-1])
0x371: Pop(1)
0x372: Stack[-9] = (bool) 0
0x373: Return(); Pop(6)

0x374: @@ AddChild(Stack[-8])
0x375: Pop(0)
0x376: Push((int) 7)
0x377: @ SendWorldWndMessage(Stack[-1])
0x378: Pop(1)
0x379: @@ GetCategory(Stack[-1])
0x37a: Pop(0)
0x37b: @ SetDiarySection(Stack[-1])
0x37c: Pop(0)
0x37d: Stack[-9] = (bool) 0
0x37e: Return(); Pop(6)

0x37f: Stack[-2] = 0
0x380: Stack[-3] = 0
0x381: PushEmpty(int, int)
0x382: Push("branch")
0x383: @ GetVariable(Stack[-1], Stack[-2])
0x384: Pop(1)
0x385: Push((int) 0)
0x386: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x387: IF (Stack[-1] == 0) GOTO 0x38b; Pop(1)

0x388: Stack[-3] = (int) 1
0x389: Return(); Pop(2)

0x38a: GOTO 0x390

0x38b: Push((int) 1)
0x38c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x38d: IF (Stack[-1] == 0) GOTO 0x390; Pop(1)

0x38e: Stack[-3] = (int) 2
0x38f: Return(); Pop(2)

0x390: Stack[-3] = (int) 3
0x391: Return(); Pop(2)

0x392: Stack[-1] = (int) 515561
0x393: Return(); Pop(0)

0x394: Stack[-1] = (int) 503346
0x395: Return(); Pop(0)

0x396: Stack[-1] = "ui/NPC_Citizen1.png"
0x397: Return(); Pop(0)

0x398: Stack[-1] = "ui/NPC_Citizen1_b.png"
0x399: Return(); Pop(0)

0x39a: Stack[-1] = (bool) 0
0x39b: Return(); Pop(0)

0x39c: PushEmpty(string, string)
0x39d: Stack[-1] = "idle"
0x39e: Push(Stack[-3])
0x39f: IF (Stack[-1] == 0) GOTO 0x3a1; Pop(1)

0x3a0: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x3a1: Stack[-4] = Stack[-1]
0x3a2: Return(); Pop(2)

0x3a3: PushEmpty(int, bool, int, bool)
0x3a4: Stack[-2] = (int) 0
0x3a5: Push("all")
0x3a6: PushEmpty(string, int)
0x3a7: Stack[-1] = Stack[-5]
0x3a8: Call2 0x39c

0x3a9: Pop(1)
0x3aa: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3ab: Pop(2)
0x3ac: Pop(0); Push((bool) Stack[-1] == 0)
0x3ad: IF (Stack[-1] == 0) GOTO 0x3af; Pop(1)

0x3ae: GOTO 0x3b2

0x3af: Push((int) 1)
0x3b0: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x3b1: GOTO 0x3a5

0x3b2: Stack[-5] = Stack[-2]
0x3b3: Return(); Pop(4)

