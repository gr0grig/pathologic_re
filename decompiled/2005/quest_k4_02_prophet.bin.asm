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
	k4q02
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
	HasAnimation (3 args)
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x1aa
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb3 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool, bool) Params = 0
		EVENT_0 Op = 0x1b0 Vars = (object)
		EVENT_26 Op = 0x1e1 Vars = (string)
		EVENT_6 Op = 0x1e9 Vars = ()
		EVENT_7 Op = 0x22a Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x2b2

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x3c3

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x3c1

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x3c5

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x3c7

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x3b0

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
0x41: Call2 0x2f6

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
0x4f: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x36e

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x55: PushEmpty(string)
0x56: Stack[-1] = "Neutral"
0x57: Call2 0x9d

0x58: Pop(1)
0x59: Push((int) 525772)
0x5a: @@ SetMessage(Stack[-1])
0x5b: Pop(1)
0x5c: @@ ClearReplies()
0x5d: Pop(0)
0x5e: Push((int) 525773)
0x5f: Push((int) 27086)
0x60: Push((int) 27085)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: Push((int) 540955)
0x64: Push((int) 43044)
0x65: Push((int) 43040)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: GOTO 0x7f

0x69: PushEmpty(string)
0x6a: Stack[-1] = "Neutral"
0x6b: Call2 0x9d

0x6c: Pop(1)
0x6d: Push((int) 525779)
0x6e: @@ SetMessage(Stack[-1])
0x6f: Pop(1)
0x70: @@ ClearReplies()
0x71: Pop(0)
0x72: Push((int) 525780)
0x73: Push((int) -1)
0x74: Push((int) 27092)
0x75: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x76: Pop(3)
0x77: Push((int) 542525)
0x78: Push((int) -1)
0x79: Push((int) 44920)
0x7a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b: Pop(3)
0x7c: GOTO 0x7f

0x7d: Return(); Pop(0)

0x7e: GOTO 0x4e

0x7f: PushEmpty(bool)
0x80: Call2 0x3c9

0x81: Pop(0)
0x82: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x83: @ lshWaitForAnimEnd()
0x84: Pop(0)
0x85: Push( Stack[3 + Tasks[-1].StackPointer] )
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: GOTO 0x8d

0x88: PushEmpty(string)
0x89: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8a: Call2 0x307

0x8b: Pop(1)
0x8c: GOTO 0x83

0x8d: GOTO 0x9c

0x8e: Push("all")
0x8f: Push("idle")
0x90: @ PlayAnimation(Stack[-2], Stack[-1])
0x91: Pop(2)
0x92: @ WaitForAnimEnd()
0x93: Pop(0)
0x94: Push( Stack[3 + Tasks[-1].StackPointer] )
0x95: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x96: GOTO 0x9c

0x97: Push("all")
0x98: Push("idle")
0x99: @ PlayAnimation(Stack[-2], Stack[-1])
0x9a: Pop(2)
0x9b: GOTO 0x92

0x9c: Return(); Pop(0)

0x9d: PushEmpty()
0x9e: PushEmpty(bool)
0x9f: Call2 0x3c9

0xa0: Pop(0)
0xa1: Pop(1); Push((bool) Stack[-1] == 0)
0xa2: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0xa3: Return(); Pop(0)

0xa4: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa5: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0xa6: Return(); Pop(0)

0xa7: PushEmpty(string, bool)
0xa8: Stack[-2] = Stack[-3]
0xa9: Push("")
0xaa: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xab: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xac: Stack[-1] = (bool) 0
0xad: GOTO 0xaf

0xae: Stack[-1] = (bool) 1
0xaf: Call2 0x317

0xb0: Pop(2)
0xb1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb2: Return(); Pop(0)

0xb3: PushEmpty()
0xb4: Push((int) 1)
0xb5: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0xb6: PushEmpty()
0xb7: Call2 0x331

0xb8: Pop(0)
0xb9: Push((int) 27089)
0xba: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbb: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xbc: PushEmpty(object, object)
0xbd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbf: Call2 0x365

0xc0: Pop(2)
0xc1: Push((int) 27090)
0xc2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc3: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xc4: PushEmpty(object, object)
0xc5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc7: Call2 0x365

0xc8: Pop(2)
0xc9: Push((int) 27084)
0xca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcb: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xcc: PushEmpty(bool, object)
0xcd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xce: Call2 0x36e

0xcf: Pop(1)
0xd0: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xd1: PushEmpty(string)
0xd2: Stack[-1] = "Neutral"
0xd3: Call2 0x9d

0xd4: Pop(1)
0xd5: Push((int) 525772)
0xd6: @@ SetMessage(Stack[-1])
0xd7: Pop(1)
0xd8: @@ ClearReplies()
0xd9: Pop(0)
0xda: Push((int) 525773)
0xdb: Push((int) 27086)
0xdc: Push((int) 27085)
0xdd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xde: Pop(3)
0xdf: Push((int) 540955)
0xe0: Push((int) 43044)
0xe1: Push((int) 43040)
0xe2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe3: Pop(3)
0xe4: Return(); Pop(0)

0xe5: PushEmpty(string)
0xe6: Stack[-1] = "Neutral"
0xe7: Call2 0x9d

0xe8: Pop(1)
0xe9: Push((int) 525779)
0xea: @@ SetMessage(Stack[-1])
0xeb: Pop(1)
0xec: @@ ClearReplies()
0xed: Pop(0)
0xee: Push((int) 525780)
0xef: Push((int) -1)
0xf0: Push((int) 27092)
0xf1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf2: Pop(3)
0xf3: Push((int) 542525)
0xf4: Push((int) -1)
0xf5: Push((int) 44920)
0xf6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf7: Pop(3)
0xf8: Return(); Pop(0)

0xf9: Push((int) 27086)
0xfa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfb: IF (Stack[-1] == 0) GOTO 0x110; Pop(1)

0xfc: PushEmpty(string)
0xfd: Stack[-1] = "Neutral"
0xfe: Call2 0x9d

0xff: Pop(1)
0x100: Push((int) 525774)
0x101: @@ SetMessage(Stack[-1])
0x102: Pop(1)
0x103: @@ ClearReplies()
0x104: Pop(0)
0x105: Push((int) 540956)
0x106: Push((int) 43044)
0x107: Push((int) 43041)
0x108: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x109: Pop(3)
0x10a: Push((int) 540958)
0x10b: Push((int) 43042)
0x10c: Push((int) 43043)
0x10d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10e: Pop(3)
0x10f: Return(); Pop(0)

0x110: Push((int) 43042)
0x111: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x112: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x113: PushEmpty(string)
0x114: Stack[-1] = "Neutral"
0x115: Call2 0x9d

0x116: Pop(1)
0x117: Push((int) 540957)
0x118: @@ SetMessage(Stack[-1])
0x119: Pop(1)
0x11a: @@ ClearReplies()
0x11b: Pop(0)
0x11c: Push((int) 540963)
0x11d: Push((int) 43046)
0x11e: Push((int) 43048)
0x11f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x120: Pop(3)
0x121: Return(); Pop(0)

0x122: Push((int) 43044)
0x123: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x124: IF (Stack[-1] == 0) GOTO 0x139; Pop(1)

0x125: PushEmpty(string)
0x126: Stack[-1] = "Neutral"
0x127: Call2 0x9d

0x128: Pop(1)
0x129: Push((int) 540959)
0x12a: @@ SetMessage(Stack[-1])
0x12b: Pop(1)
0x12c: @@ ClearReplies()
0x12d: Pop(0)
0x12e: Push((int) 540960)
0x12f: Push((int) 43046)
0x130: Push((int) 43045)
0x131: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x132: Pop(3)
0x133: Push((int) 525775)
0x134: Push((int) 27088)
0x135: Push((int) 27087)
0x136: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x137: Pop(3)
0x138: Return(); Pop(0)

0x139: Push((int) 27088)
0x13a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13b: IF (Stack[-1] == 0) GOTO 0x14b; Pop(1)

0x13c: PushEmpty(string)
0x13d: Stack[-1] = "Neutral"
0x13e: Call2 0x9d

0x13f: Pop(1)
0x140: Push((int) 525776)
0x141: @@ SetMessage(Stack[-1])
0x142: Pop(1)
0x143: @@ ClearReplies()
0x144: Pop(0)
0x145: Push((int) 540969)
0x146: Push((int) 43053)
0x147: Push((int) 43056)
0x148: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x149: Pop(3)
0x14a: Return(); Pop(0)

0x14b: Push((int) 43046)
0x14c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14d: IF (Stack[-1] == 0) GOTO 0x162; Pop(1)

0x14e: PushEmpty(string)
0x14f: Stack[-1] = "Neutral"
0x150: Call2 0x9d

0x151: Pop(1)
0x152: Push((int) 540961)
0x153: @@ SetMessage(Stack[-1])
0x154: Pop(1)
0x155: @@ ClearReplies()
0x156: Pop(0)
0x157: Push((int) 540962)
0x158: Push((int) 43050)
0x159: Push((int) 43047)
0x15a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15b: Pop(3)
0x15c: Push((int) 540967)
0x15d: Push((int) 43055)
0x15e: Push((int) 43054)
0x15f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x160: Pop(3)
0x161: Return(); Pop(0)

0x162: Push((int) 43055)
0x163: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x164: IF (Stack[-1] == 0) GOTO 0x174; Pop(1)

0x165: PushEmpty(string)
0x166: Stack[-1] = "Neutral"
0x167: Call2 0x9d

0x168: Pop(1)
0x169: Push((int) 540968)
0x16a: @@ SetMessage(Stack[-1])
0x16b: Pop(1)
0x16c: @@ ClearReplies()
0x16d: Pop(0)
0x16e: Push((int) 540970)
0x16f: Push((int) 43053)
0x170: Push((int) 43057)
0x171: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x172: Pop(3)
0x173: Return(); Pop(0)

0x174: Push((int) 43050)
0x175: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x176: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x177: PushEmpty(string)
0x178: Stack[-1] = "Neutral"
0x179: Call2 0x9d

0x17a: Pop(1)
0x17b: Push((int) 540964)
0x17c: @@ SetMessage(Stack[-1])
0x17d: Pop(1)
0x17e: @@ ClearReplies()
0x17f: Pop(0)
0x180: Push((int) 540965)
0x181: Push((int) 43053)
0x182: Push((int) 43052)
0x183: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x184: Pop(3)
0x185: Return(); Pop(0)

0x186: Push((int) 43053)
0x187: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x188: IF (Stack[-1] == 0) GOTO 0x19d; Pop(1)

0x189: PushEmpty(string)
0x18a: Stack[-1] = "Neutral"
0x18b: Call2 0x9d

0x18c: Pop(1)
0x18d: Push((int) 540966)
0x18e: @@ SetMessage(Stack[-1])
0x18f: Pop(1)
0x190: @@ ClearReplies()
0x191: Pop(0)
0x192: Push((int) 525777)
0x193: Push((int) -1)
0x194: Push((int) 27089)
0x195: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x196: Pop(3)
0x197: Push((int) 525778)
0x198: Push((int) -1)
0x199: Push((int) 27090)
0x19a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19b: Pop(3)
0x19c: Return(); Pop(0)

0x19d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x19e: PushEmpty(bool)
0x19f: Call2 0x3c9

0x1a0: Pop(0)
0x1a1: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x1a2: @ lshStopAnimation()
0x1a3: Pop(0)
0x1a4: GOTO 0x1a7

0x1a5: @ StopAnimation()
0x1a6: Pop(0)
0x1a7: Return(); Pop(0)

0x1a8: GOTO 0xb4

0x1a9: Return(); Pop(0)

0x1aa: PushEmpty(float, float)
0x1ab: Stack[-2] = (int) 300
0x1ac: Stack[-1] = (int) 100
0x1ad: Call2 0x1bb

0x1ae: Pop(2)
0x1af: Return(); Pop(0)

0x1b0: PushEmpty()
0x1b1: PushEmpty()
0x1b2: Call2 0x241

0x1b3: Pop(0)
0x1b4: PushEmpty(int, object)
0x1b5: Stack[-1] = Stack[-3]
0x1b6: Push(-2, 1); TaskCall(0)
0x1b7: Call2 0x0

0x1b8: Pop(-2, 1); TaskReturn
0x1b9: Pop(2)
0x1ba: Return(); Pop(0)

0x1bb: PushEmpty(float, bool, float, bool)
0x1bc: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x1bd: Push((int) 3)
0x1be: @ rand(Stack[-3], Stack[-1])
0x1bf: Pop(1)
0x1c0: Push((int) 3)
0x1c1: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1c2: @ Sleep(Stack[-1], Stack[-2])
0x1c3: Pop(1)
0x1c4: Stack[6 + Tasks[-1].StackPointer] = (bool)1
0x1c5: PushEmpty(float, float)
0x1c6: Stack[-2] = Stack[-8]
0x1c7: Stack[-1] = Stack[-7]
0x1c8: Call2 0x200

0x1c9: Pop(2)
0x1ca: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x1cb: GOTO 0x1bd

0x1cc: Return(); Pop(4)

0x1cd: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x1ce: PushEmpty(bool)
0x1cf: Stack[-1] = (bool) 0
0x1d0: PushEmpty(bool)
0x1d1: Call2 0x2ad

0x1d2: Pop(0)
0x1d3: Pop(1); Push((bool) Stack[-1] == 0)
0x1d4: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1d5: PushEmpty(bool)
0x1d6: Call2 0x1fe

0x1d7: Pop(0)
0x1d8: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1d9: Stack[-1] = (bool) 1
0x1da: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1db: PushEmpty(object)
0x1dc: Call2 0x338

0x1dd: Pop(0)
0x1de: @ RemoveActor(Stack[-1])
0x1df: Pop(1)
0x1e0: Return(); Pop(0)

0x1e1: PushEmpty()
0x1e2: Push("cleanup")
0x1e3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1e4: IF (Stack[-1] == 0) GOTO 0x1e8; Pop(1)

0x1e5: PushEmpty()
0x1e6: Call2 0x1cd

0x1e7: Pop(0)
0x1e8: Return(); Pop(0)

0x1e9: Push( Stack[6 + Tasks[-1].StackPointer] )
0x1ea: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1eb: PushEmpty()
0x1ec: Call2 0x241

0x1ed: Pop(0)
0x1ee: PushEmpty(bool)
0x1ef: Stack[-1] = (bool) 0
0x1f0: Push( Stack[5 + Tasks[-1].StackPointer] )
0x1f1: IF (Stack[-1] == 0) GOTO 0x1f7; Pop(1)

0x1f2: PushEmpty(bool)
0x1f3: Call2 0x1fe

0x1f4: Pop(0)
0x1f5: IF (Stack[-1] == 0) GOTO 0x1f7; Pop(1)

0x1f6: Stack[-1] = (bool) 1
0x1f7: IF (Stack[-1] == 0) GOTO 0x1fd; Pop(1)

0x1f8: PushEmpty(object)
0x1f9: Call2 0x338

0x1fa: Pop(0)
0x1fb: @ RemoveActor(Stack[-1])
0x1fc: Pop(1)
0x1fd: Return(); Pop(0)

0x1fe: Stack[-1] = (bool) 1
0x1ff: Return(); Pop(0)

0x200: PushEmpty()
0x201: PushEmpty(bool)
0x202: Call2 0x2ad

0x203: Pop(0)
0x204: Pop(1); Push((bool) Stack[-1] == 0)
0x205: IF (Stack[-1] == 0) GOTO 0x207; Pop(1)

0x206: Return(); Pop(0)

0x207: Push("player")
0x208: @ FindActor(Stack[-4], Stack[-1])
0x209: Pop(1)
0x20a: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x20b: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x20c: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x20d: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x20e: Push((int) 10)
0x20f: Push((float)1.0)
0x210: @ SetTimer(Stack[-2], Stack[-1])
0x211: Pop(2)
0x212: PushEmpty()
0x213: Call2 0x24f

0x214: Pop(0)
0x215: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x216: IF (Stack[-1] == 0) GOTO 0x21a; Pop(1)

0x217: Push((int) 10)
0x218: @ KillTimer(Stack[-1])
0x219: Pop(1)
0x21a: Return(); Pop(0)

0x21b: PushEmpty(float, float)
0x21c: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x21d: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x21e: Stack[-3] = (bool) 0
0x21f: Return(); Pop(2)

0x220: PushEmpty(float, object)
0x221: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x222: Call2 0x2a5

0x223: Pop(1)
0x224: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x225: Push( Stack[2 + Tasks[-1].StackPointer] )
0x226: IF (Stack[-1] == 0) GOTO 0x228; Pop(1)

0x227: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x228: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x229: Return(); Pop(2)

0x22a: PushEmpty()
0x22b: Push((int) 10)
0x22c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x22d: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x22e: PushEmpty(bool)
0x22f: Call2 0x21b

0x230: Pop(0)
0x231: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x232: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x233: IF (Stack[-1] == 0) GOTO 0x239; Pop(1)

0x234: PushEmpty(object)
0x235: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x236: Call2 0x326

0x237: Pop(1)
0x238: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x239: GOTO 0x240

0x23a: Push( Stack[2 + Tasks[-1].StackPointer] )
0x23b: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x23c: Push("head")
0x23d: @ UnlookAsync(Stack[-1])
0x23e: Pop(1)
0x23f: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x240: Return(); Pop(0)

0x241: PushEmpty()
0x242: Call2 0x2a0

0x243: Pop(0)
0x244: Push((int) 10)
0x245: @ KillTimer(Stack[-1])
0x246: Pop(1)
0x247: Push( Stack[2 + Tasks[-1].StackPointer] )
0x248: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x249: Push("head")
0x24a: @ UnlookAsync(Stack[-1])
0x24b: Pop(1)
0x24c: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x24d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x24e: Return(); Pop(0)

0x24f: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x250: @ WaitForAnimEnd()
0x251: Pop(0)
0x252: PushEmpty(bool)
0x253: Call2 0x2ad

0x254: Pop(0)
0x255: Pop(1); Push((bool) Stack[-1] == 0)
0x256: IF (Stack[-1] == 0) GOTO 0x258; Pop(1)

0x257: Return(); Pop(14)

0x258: PushEmpty(int)
0x259: Call2 0x354

0x25a: Stack[-8] = Stack[-1]
0x25b: Pop(1)
0x25c: Stack[-6] = (int) 0
0x25d: PushEmpty(bool)
0x25e: Stack[-1] = (bool) 0
0x25f: Push((int) 5)
0x260: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x261: IF (Stack[-1] == 0) GOTO 0x267; Pop(1)

0x262: PushEmpty(bool)
0x263: Call2 0x2ad

0x264: Pop(0)
0x265: IF (Stack[-1] == 0) GOTO 0x267; Pop(1)

0x266: Stack[-1] = (bool) 1
0x267: IF (Stack[-1] == 0) GOTO 0x29b; Pop(1)

0x268: Push((int) 3)
0x269: @ irand(Stack[-6], Stack[-1])
0x26a: Pop(1)
0x26b: Push((int) 0)
0x26c: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x26d: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x26e: Push(Stack[-7])
0x26f: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x270: @ irand(Stack[-4], Stack[-7])
0x271: Pop(0)
0x272: Push("all")
0x273: PushEmpty(string, int)
0x274: Stack[-1] = Stack[-7]
0x275: Call2 0x34d

0x276: Pop(1)
0x277: @ PlayAnimation(Stack[-2], Stack[-1])
0x278: Pop(2)
0x279: @ WaitForAnimEnd(Stack[-3])
0x27a: Pop(0)
0x27b: Pop(0); Push((bool) Stack[-3] == 0)
0x27c: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x27d: GOTO 0x29b

0x27e: GOTO 0x290

0x27f: Push((int) 1)
0x280: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x281: IF (Stack[-1] == 0) GOTO 0x28d; Pop(1)

0x282: Push((int) 4)
0x283: @ rand(Stack[-3], Stack[-1])
0x284: Pop(1)
0x285: Push((int) 1)
0x286: Pop(1); Push(Stack[-3] + Stack[-1]);
0x287: @ Sleep(Stack[-1], Stack[-2])
0x288: Pop(1)
0x289: Pop(0); Push((bool) Stack[-1] == 0)
0x28a: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x28b: GOTO 0x29b

0x28c: GOTO 0x290

0x28d: Push(Stack[-6])
0x28e: IF (Stack[-1] == 0) GOTO 0x290; Pop(1)

0x28f: GOTO 0x29b

0x290: PushEmpty(bool)
0x291: Call2 0x29e

0x292: Pop(0)
0x293: Pop(1); Push((bool) Stack[-1] == 0)
0x294: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0x295: GOTO 0x29b

0x296: @ ResetAAS()
0x297: Pop(0)
0x298: Push((int) 1)
0x299: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x29a: GOTO 0x25d

0x29b: @ ResetAAS()
0x29c: Pop(0)
0x29d: Return(); Pop(14)

0x29e: Stack[-1] = (bool) 1
0x29f: Return(); Pop(0)

0x2a0: @ StopAnimation()
0x2a1: Pop(0)
0x2a2: @ StopGroup0()
0x2a3: Pop(0)
0x2a4: Return(); Pop(0)

0x2a5: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x2a6: @ GetPosition(Stack[-3])
0x2a7: Pop(0)
0x2a8: @@ GetPosition(Stack[-2])
0x2a9: Pop(0)
0x2aa: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x2ab: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x2ac: Return(); Pop(6)

0x2ad: PushEmpty(bool, bool)
0x2ae: @ IsLoaded(Stack[-1])
0x2af: Pop(0)
0x2b0: Stack[-3] = Stack[-1]
0x2b1: Return(); Pop(2)

0x2b2: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x2b3: @@ GetPosition(Stack[-8])
0x2b4: Pop(0)
0x2b5: @@ GetEyesHeight(Stack[-9])
0x2b6: Pop(0)
0x2b7: Push(CvectorIndex(Stack[-8], 1))
0x2b8: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2b9: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2ba: @ GetPosition(Stack[-7])
0x2bb: Pop(0)
0x2bc: @ GetEyesHeight(Stack[-9])
0x2bd: Pop(0)
0x2be: Push(CvectorIndex(Stack[-7], 1))
0x2bf: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2c0: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2c1: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2c2: Push(CvectorIndex(Stack[-6], 1))
0x2c3: Stack[-1] = (int) 0
0x2c4: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2c5: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2c6: Pop(1); Push(Sqrt(Stack[-1]))
0x2c7: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2c8: Stack[-5] = -Stack[-6]; Pop(0);
0x2c9: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2ca: PushEmpty(cvector, cvector)
0x2cb: Push(CVector(0.0, 1.0, 0.0))
0x2cc: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2cd: Call2 0x33e

0x2ce: Pop(1)
0x2cf: Push((int) 25)
0x2d0: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2d1: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2d2: Push(CVector(0.0, 10.0, 0.0))
0x2d3: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2d4: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2d5: @ IsOverrideActive(Stack[-2])
0x2d6: Pop(0)
0x2d7: Push(Stack[-2])
0x2d8: IF (Stack[-1] == 0) GOTO 0x2db; Pop(1)

0x2d9: Stack[-21] = (bool) 0
0x2da: Return(); Pop(18)

0x2db: @ StopWorld()
0x2dc: Pop(0)
0x2dd: @ CameraTransit(Stack[-3], Stack[-5])
0x2de: Pop(0)
0x2df: Push(CvectorIndex(Stack[-4], 0))
0x2e0: Push(CvectorIndex(Stack[-5], 2))
0x2e1: @ Rotate(Stack[-2], Stack[-1])
0x2e2: Pop(2)
0x2e3: PushEmpty(bool)
0x2e4: Call2 0x3c9

0x2e5: Pop(0)
0x2e6: IF (Stack[-1] == 0) GOTO 0x2e8; Pop(1)

0x2e7: GOTO 0x2f0

0x2e8: Push("head")
0x2e9: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2ea: Pop(1)
0x2eb: Push(Stack[-1])
0x2ec: IF (Stack[-1] == 0) GOTO 0x2f0; Pop(1)

0x2ed: Push("head")
0x2ee: @ LookAsyncCamera(Stack[-1])
0x2ef: Pop(1)
0x2f0: @ CameraWaitForPlayFinish()
0x2f1: Pop(0)
0x2f2: @ ResumeWorld()
0x2f3: Pop(0)
0x2f4: Stack[-21] = (bool) 1
0x2f5: Return(); Pop(18)

0x2f6: PushEmpty(bool, bool)
0x2f7: @ CameraSwitchToNormal()
0x2f8: Pop(0)
0x2f9: PushEmpty(bool)
0x2fa: Call2 0x3c9

0x2fb: Pop(0)
0x2fc: IF (Stack[-1] == 0) GOTO 0x2fe; Pop(1)

0x2fd: GOTO 0x306

0x2fe: Push("head")
0x2ff: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x300: Pop(1)
0x301: Push(Stack[-1])
0x302: IF (Stack[-1] == 0) GOTO 0x306; Pop(1)

0x303: Push("head")
0x304: @ UnlookAsync(Stack[-1])
0x305: Pop(1)
0x306: Return(); Pop(2)

0x307: PushEmpty(bool, float, float, bool, float, float)
0x308: @ lshHasAnimation(Stack[-3], Stack[-7])
0x309: Pop(0)
0x30a: Push(Stack[-3])
0x30b: IF (Stack[-1] == 0) GOTO 0x312; Pop(1)

0x30c: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x30d: Pop(0)
0x30e: Push((bool) 0)
0x30f: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x310: Pop(1)
0x311: GOTO 0x316

0x312: Push("Can't find lsh animation : ")
0x313: Pop(1); Push(Stack[-1] + Stack[-8]);
0x314: @ Trace(Stack[-1])
0x315: Pop(1)
0x316: Return(); Pop(6)

0x317: PushEmpty(bool, float, float, bool, float, float)
0x318: @ lshHasAnimation(Stack[-3], Stack[-8])
0x319: Pop(0)
0x31a: Push(Stack[-3])
0x31b: IF (Stack[-1] == 0) GOTO 0x321; Pop(1)

0x31c: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x31d: Pop(0)
0x31e: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x31f: Pop(0)
0x320: GOTO 0x325

0x321: Push("Can't find lsh animation : ")
0x322: Pop(1); Push(Stack[-1] + Stack[-9]);
0x323: @ Trace(Stack[-1])
0x324: Pop(1)
0x325: Return(); Pop(6)

0x326: PushEmpty(float, cvector, float, cvector)
0x327: @@ GetEyesHeight(Stack[-2])
0x328: Pop(0)
0x329: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x32a: Push(CvectorIndex(Stack[-1], 1))
0x32b: Stack[-1] = Stack[-3]
0x32c: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x32d: Push("head")
0x32e: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x32f: Pop(1)
0x330: Return(); Pop(4)

0x331: PushEmpty(bool)
0x332: Call2 0x3c9

0x333: Pop(0)
0x334: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x335: @ lshStopSpeech()
0x336: Pop(0)
0x337: Return(); Pop(0)

0x338: PushEmpty(object, object)
0x339: @ self(Stack[-1])
0x33a: Pop(0)
0x33b: Stack[-3] = Stack[-1]
0x33c: Return(); Pop(2)

0x33d: Stack[-1] = 0
0x33e: PushEmpty(float, float)
0x33f: Pop(0); Push(Stack[-3] | Stack[-3]);
0x340: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x341: Push((float)0.0)
0x342: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x343: IF (Stack[-1] == 0) GOTO 0x346; Pop(1)

0x344: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x345: Return(); Pop(2)

0x346: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x347: Return(); Pop(2)

0x348: PushEmpty(int, int)
0x349: @ GetVariable(Stack[-3], Stack[-1])
0x34a: Pop(0)
0x34b: Stack[-4] = Stack[-1]
0x34c: Return(); Pop(2)

0x34d: PushEmpty(string, string)
0x34e: Stack[-1] = "idle"
0x34f: Push(Stack[-3])
0x350: IF (Stack[-1] == 0) GOTO 0x352; Pop(1)

0x351: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x352: Stack[-4] = Stack[-1]
0x353: Return(); Pop(2)

0x354: PushEmpty(int, bool, int, bool)
0x355: Stack[-2] = (int) 0
0x356: Push("all")
0x357: PushEmpty(string, int)
0x358: Stack[-1] = Stack[-5]
0x359: Call2 0x34d

0x35a: Pop(1)
0x35b: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x35c: Pop(2)
0x35d: Pop(0); Push((bool) Stack[-1] == 0)
0x35e: IF (Stack[-1] == 0) GOTO 0x360; Pop(1)

0x35f: GOTO 0x363

0x360: Push((int) 1)
0x361: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x362: GOTO 0x356

0x363: Stack[-5] = Stack[-2]
0x364: Return(); Pop(4)

0x365: PushEmpty()
0x366: Push("k4q02")
0x367: Push((int) 3)
0x368: @ SetVariable(Stack[-2], Stack[-1])
0x369: Pop(2)
0x36a: PushEmpty()
0x36b: Call2 0x37a

0x36c: Pop(0)
0x36d: Return(); Pop(0)

0x36e: PushEmpty()
0x36f: PushEmpty(int, string)
0x370: Stack[-1] = "k4q02"
0x371: Call2 0x348

0x372: Pop(1)
0x373: Push((int) 2)
0x374: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x375: IF (Stack[-1] == 0) GOTO 0x378; Pop(1)

0x376: Stack[-2] = (bool) 1
0x377: Return(); Pop(0)

0x378: Stack[-2] = (bool) 0
0x379: Return(); Pop(0)

0x37a: PushEmpty(object, object)
0x37b: Push((int) 382)
0x37c: Push((int) 2)
0x37d: Push((int) 525788)
0x37e: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x37f: Pop(3)
0x380: PushEmpty(bool, object, int)
0x381: Stack[-2] = Stack[-4]
0x382: Stack[-1] = (int) 378
0x383: Call2 0x394

0x384: Pop(3)
0x385: Return(); Pop(2)

0x386: Stack[-1] = 0
0x387: PushEmpty(object, object)
0x388: @ GetDiaryRoot(Stack[-1])
0x389: Pop(0)
0x38a: Pop(0); Push((bool) Stack[-1] == 0)
0x38b: IF (Stack[-1] == 0) GOTO 0x391; Pop(1)

0x38c: Push("Can't retrieve diary root")
0x38d: @ Trace(Stack[-1])
0x38e: Pop(1)
0x38f: Stack[-3] = (bool) 0
0x390: Return(); Pop(2)

0x391: Stack[-3] = Stack[-1]
0x392: Return(); Pop(2)

0x393: Stack[-1] = 0
0x394: PushEmpty(object, object, int, object, object, int)
0x395: PushEmpty(object)
0x396: Call2 0x387

0x397: Stack[-4] = Stack[-1]
0x398: Pop(1)
0x399: @@ Find(Stack[-7], Stack[-2])
0x39a: Pop(0)
0x39b: Pop(0); Push((bool) Stack[-2] == 0)
0x39c: IF (Stack[-1] == 0) GOTO 0x3a3; Pop(1)

0x39d: Push("Can't find diary parent with id: ")
0x39e: Pop(1); Push(Stack[-1] + Stack[-8]);
0x39f: @ Trace(Stack[-1])
0x3a0: Pop(1)
0x3a1: Stack[-9] = (bool) 0
0x3a2: Return(); Pop(6)

0x3a3: @@ AddChild(Stack[-8])
0x3a4: Pop(0)
0x3a5: Push((int) 7)
0x3a6: @ SendWorldWndMessage(Stack[-1])
0x3a7: Pop(1)
0x3a8: @@ GetCategory(Stack[-1])
0x3a9: Pop(0)
0x3aa: @ SetDiarySection(Stack[-1])
0x3ab: Pop(0)
0x3ac: Stack[-9] = (bool) 0
0x3ad: Return(); Pop(6)

0x3ae: Stack[-2] = 0
0x3af: Stack[-3] = 0
0x3b0: PushEmpty(int, int)
0x3b1: Push("branch")
0x3b2: @ GetVariable(Stack[-1], Stack[-2])
0x3b3: Pop(1)
0x3b4: Push((int) 0)
0x3b5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3b6: IF (Stack[-1] == 0) GOTO 0x3ba; Pop(1)

0x3b7: Stack[-3] = (int) 1
0x3b8: Return(); Pop(2)

0x3b9: GOTO 0x3bf

0x3ba: Push((int) 1)
0x3bb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3bc: IF (Stack[-1] == 0) GOTO 0x3bf; Pop(1)

0x3bd: Stack[-3] = (int) 2
0x3be: Return(); Pop(2)

0x3bf: Stack[-3] = (int) 3
0x3c0: Return(); Pop(2)

0x3c1: Stack[-1] = (int) 518716
0x3c2: Return(); Pop(0)

0x3c3: Stack[-1] = (int) 518715
0x3c4: Return(); Pop(0)

0x3c5: Stack[-1] = "ui/NPC_Prophet.png"
0x3c6: Return(); Pop(0)

0x3c7: Stack[-1] = "ui/NPC_Prophet_b.png"
0x3c8: Return(); Pop(0)

0x3c9: Stack[-1] = (bool) 0
0x3ca: Return(); Pop(0)

