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
	HasProperty
	HasProperty
	GetProperty
	SetProperty
	GetEyesHeight
	Can't find lsh animation : 
	reputation
	add
	k7q03
	tvirin
	RemoveItemByType
	quest_k7_03
	fail
	playsound
	giveitem
	GetItemCountOfType
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	branch
	ui/NPC_Citizen2.png
	ui/NPC_Citizen2_b.png

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
	SendWorldWndMessage (1 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)
	Trigger (2 args)
	HasAnimation (3 args)
	SetVariable (2 args)
	TriggerWorld (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SetDiarySection (1 args)

RunOp = 0x144
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xad Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool, bool) Params = 0
		EVENT_0 Op = 0x14a Vars = (object)
		EVENT_26 Op = 0x17b Vars = (string)
		EVENT_6 Op = 0x183 Vars = ()
		EVENT_7 Op = 0x1c4 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x26e

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x400

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x3fe

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x402

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x404

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x3ed

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
0x41: Call2 0x2b2

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
0x4f: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x50: PushEmpty(string)
0x51: Stack[-1] = "Neutral"
0x52: Call2 0x97

0x53: Pop(1)
0x54: Push((int) 526382)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: PushEmpty(bool)
0x5a: Stack[-1] = (bool) 0
0x5b: PushEmpty(bool, object)
0x5c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5d: Call2 0x389

0x5e: Pop(1)
0x5f: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x60: PushEmpty(bool, object)
0x61: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62: Call2 0x395

0x63: Pop(1)
0x64: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x65: Stack[-1] = (bool) 1
0x66: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x67: Push((int) 526383)
0x68: Push((int) 27664)
0x69: Push((int) 27663)
0x6a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b: Pop(3)
0x6c: Push((int) 526386)
0x6d: Push((int) -1)
0x6e: Push((int) 27666)
0x6f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x70: Pop(3)
0x71: Push((int) 528664)
0x72: Push((int) -1)
0x73: Push((int) 30075)
0x74: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x75: Pop(3)
0x76: GOTO 0x79

0x77: Return(); Pop(0)

0x78: GOTO 0x4e

0x79: PushEmpty(bool)
0x7a: Call2 0x406

0x7b: Pop(0)
0x7c: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x7d: @ lshWaitForAnimEnd()
0x7e: Pop(0)
0x7f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x80: IF (Stack[-1] == 0) GOTO 0x82; Pop(1)

0x81: GOTO 0x87

0x82: PushEmpty(string)
0x83: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x84: Call2 0x2c3

0x85: Pop(1)
0x86: GOTO 0x7d

0x87: GOTO 0x96

0x88: Push("all")
0x89: Push("idle")
0x8a: @ PlayAnimation(Stack[-2], Stack[-1])
0x8b: Pop(2)
0x8c: @ WaitForAnimEnd()
0x8d: Pop(0)
0x8e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8f: IF (Stack[-1] == 0) GOTO 0x91; Pop(1)

0x90: GOTO 0x96

0x91: Push("all")
0x92: Push("idle")
0x93: @ PlayAnimation(Stack[-2], Stack[-1])
0x94: Pop(2)
0x95: GOTO 0x8c

0x96: Return(); Pop(0)

0x97: PushEmpty()
0x98: PushEmpty(bool)
0x99: Call2 0x406

0x9a: Pop(0)
0x9b: Pop(1); Push((bool) Stack[-1] == 0)
0x9c: IF (Stack[-1] == 0) GOTO 0x9e; Pop(1)

0x9d: Return(); Pop(0)

0x9e: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x9f: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0xa0: Return(); Pop(0)

0xa1: PushEmpty(string, bool)
0xa2: Stack[-2] = Stack[-3]
0xa3: Push("")
0xa4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa5: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa6: Stack[-1] = (bool) 0
0xa7: GOTO 0xa9

0xa8: Stack[-1] = (bool) 1
0xa9: Call2 0x2d3

0xaa: Pop(2)
0xab: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xac: Return(); Pop(0)

0xad: PushEmpty()
0xae: Push((int) 1)
0xaf: IF (Stack[-1] == 0) GOTO 0x143; Pop(1)

0xb0: PushEmpty()
0xb1: Call2 0x2ed

0xb2: Pop(0)
0xb3: Push((int) 27665)
0xb4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb5: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0xb6: PushEmpty(object, object)
0xb7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb9: Call2 0x36c

0xba: Pop(2)
0xbb: PushEmpty(object, object)
0xbc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbe: Call2 0x383

0xbf: Pop(2)
0xc0: Push((int) 30081)
0xc1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc2: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xc3: PushEmpty(object, object)
0xc4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc6: Call2 0x379

0xc7: Pop(2)
0xc8: PushEmpty(object, object)
0xc9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xca: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcb: Call2 0x365

0xcc: Pop(2)
0xcd: Push((int) 27662)
0xce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcf: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xd0: PushEmpty(string)
0xd1: Stack[-1] = "Neutral"
0xd2: Call2 0x97

0xd3: Pop(1)
0xd4: Push((int) 526382)
0xd5: @@ SetMessage(Stack[-1])
0xd6: Pop(1)
0xd7: @@ ClearReplies()
0xd8: Pop(0)
0xd9: PushEmpty(bool)
0xda: Stack[-1] = (bool) 0
0xdb: PushEmpty(bool, object)
0xdc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xdd: Call2 0x389

0xde: Pop(1)
0xdf: IF (Stack[-1] == 0) GOTO 0xe6; Pop(1)

0xe0: PushEmpty(bool, object)
0xe1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe2: Call2 0x395

0xe3: Pop(1)
0xe4: IF (Stack[-1] == 0) GOTO 0xe6; Pop(1)

0xe5: Stack[-1] = (bool) 1
0xe6: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xe7: Push((int) 526383)
0xe8: Push((int) 27664)
0xe9: Push((int) 27663)
0xea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeb: Pop(3)
0xec: Push((int) 526386)
0xed: Push((int) -1)
0xee: Push((int) 27666)
0xef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf0: Pop(3)
0xf1: Push((int) 528664)
0xf2: Push((int) -1)
0xf3: Push((int) 30075)
0xf4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf5: Pop(3)
0xf6: Return(); Pop(0)

0xf7: Push((int) 27664)
0xf8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf9: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0xfa: PushEmpty(string)
0xfb: Stack[-1] = "Neutral"
0xfc: Call2 0x97

0xfd: Pop(1)
0xfe: Push((int) 526384)
0xff: @@ SetMessage(Stack[-1])
0x100: Pop(1)
0x101: @@ ClearReplies()
0x102: Pop(0)
0x103: Push((int) 528665)
0x104: Push((int) 30078)
0x105: Push((int) 30076)
0x106: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x107: Pop(3)
0x108: Push((int) 528666)
0x109: Push((int) 30078)
0x10a: Push((int) 30077)
0x10b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10c: Pop(3)
0x10d: Return(); Pop(0)

0x10e: Push((int) 30078)
0x10f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x110: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x111: PushEmpty(string)
0x112: Stack[-1] = "Neutral"
0x113: Call2 0x97

0x114: Pop(1)
0x115: Push((int) 528667)
0x116: @@ SetMessage(Stack[-1])
0x117: Pop(1)
0x118: @@ ClearReplies()
0x119: Pop(0)
0x11a: Push((int) 528668)
0x11b: Push((int) 30082)
0x11c: Push((int) 30079)
0x11d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11e: Pop(3)
0x11f: Push((int) 528669)
0x120: Push((int) -1)
0x121: Push((int) 30081)
0x122: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x123: Pop(3)
0x124: Return(); Pop(0)

0x125: Push((int) 30082)
0x126: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x127: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x128: PushEmpty(string)
0x129: Stack[-1] = "Neutral"
0x12a: Call2 0x97

0x12b: Pop(1)
0x12c: Push((int) 528670)
0x12d: @@ SetMessage(Stack[-1])
0x12e: Pop(1)
0x12f: @@ ClearReplies()
0x130: Pop(0)
0x131: Push((int) 526385)
0x132: Push((int) -1)
0x133: Push((int) 27665)
0x134: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x135: Pop(3)
0x136: Return(); Pop(0)

0x137: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x138: PushEmpty(bool)
0x139: Call2 0x406

0x13a: Pop(0)
0x13b: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x13c: @ lshStopAnimation()
0x13d: Pop(0)
0x13e: GOTO 0x141

0x13f: @ StopAnimation()
0x140: Pop(0)
0x141: Return(); Pop(0)

0x142: GOTO 0xae

0x143: Return(); Pop(0)

0x144: PushEmpty(float, float)
0x145: Stack[-2] = (int) 300
0x146: Stack[-1] = (int) 100
0x147: Call2 0x155

0x148: Pop(2)
0x149: Return(); Pop(0)

0x14a: PushEmpty()
0x14b: PushEmpty()
0x14c: Call2 0x1db

0x14d: Pop(0)
0x14e: PushEmpty(int, object)
0x14f: Stack[-1] = Stack[-3]
0x150: Push(-2, 1); TaskCall(0)
0x151: Call2 0x0

0x152: Pop(-2, 1); TaskReturn
0x153: Pop(2)
0x154: Return(); Pop(0)

0x155: PushEmpty(float, bool, float, bool)
0x156: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x157: Push((int) 3)
0x158: @ rand(Stack[-3], Stack[-1])
0x159: Pop(1)
0x15a: Push((int) 3)
0x15b: Pop(1); Push(Stack[-3] + Stack[-1]);
0x15c: @ Sleep(Stack[-1], Stack[-2])
0x15d: Pop(1)
0x15e: Stack[6 + Tasks[-1].StackPointer] = (bool)1
0x15f: PushEmpty(float, float)
0x160: Stack[-2] = Stack[-8]
0x161: Stack[-1] = Stack[-7]
0x162: Call2 0x19a

0x163: Pop(2)
0x164: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x165: GOTO 0x157

0x166: Return(); Pop(4)

0x167: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x168: PushEmpty(bool)
0x169: Stack[-1] = (bool) 0
0x16a: PushEmpty(bool)
0x16b: Call2 0x269

0x16c: Pop(0)
0x16d: Pop(1); Push((bool) Stack[-1] == 0)
0x16e: IF (Stack[-1] == 0) GOTO 0x174; Pop(1)

0x16f: PushEmpty(bool)
0x170: Call2 0x198

0x171: Pop(0)
0x172: IF (Stack[-1] == 0) GOTO 0x174; Pop(1)

0x173: Stack[-1] = (bool) 1
0x174: IF (Stack[-1] == 0) GOTO 0x17a; Pop(1)

0x175: PushEmpty(object)
0x176: Call2 0x2f4

0x177: Pop(0)
0x178: @ RemoveActor(Stack[-1])
0x179: Pop(1)
0x17a: Return(); Pop(0)

0x17b: PushEmpty()
0x17c: Push("cleanup")
0x17d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x17e: IF (Stack[-1] == 0) GOTO 0x182; Pop(1)

0x17f: PushEmpty()
0x180: Call2 0x167

0x181: Pop(0)
0x182: Return(); Pop(0)

0x183: Push( Stack[6 + Tasks[-1].StackPointer] )
0x184: IF (Stack[-1] == 0) GOTO 0x188; Pop(1)

0x185: PushEmpty()
0x186: Call2 0x1db

0x187: Pop(0)
0x188: PushEmpty(bool)
0x189: Stack[-1] = (bool) 0
0x18a: Push( Stack[5 + Tasks[-1].StackPointer] )
0x18b: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x18c: PushEmpty(bool)
0x18d: Call2 0x198

0x18e: Pop(0)
0x18f: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x190: Stack[-1] = (bool) 1
0x191: IF (Stack[-1] == 0) GOTO 0x197; Pop(1)

0x192: PushEmpty(object)
0x193: Call2 0x2f4

0x194: Pop(0)
0x195: @ RemoveActor(Stack[-1])
0x196: Pop(1)
0x197: Return(); Pop(0)

0x198: Stack[-1] = (bool) 1
0x199: Return(); Pop(0)

0x19a: PushEmpty()
0x19b: PushEmpty(bool)
0x19c: Call2 0x269

0x19d: Pop(0)
0x19e: Pop(1); Push((bool) Stack[-1] == 0)
0x19f: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x1a0: Return(); Pop(0)

0x1a1: Push("player")
0x1a2: @ FindActor(Stack[-4], Stack[-1])
0x1a3: Pop(1)
0x1a4: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1a5: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1a6: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x1a7: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x1a8: Push((int) 10)
0x1a9: Push((float)1.0)
0x1aa: @ SetTimer(Stack[-2], Stack[-1])
0x1ab: Pop(2)
0x1ac: PushEmpty()
0x1ad: Call2 0x1e9

0x1ae: Pop(0)
0x1af: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1b0: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1b1: Push((int) 10)
0x1b2: @ KillTimer(Stack[-1])
0x1b3: Pop(1)
0x1b4: Return(); Pop(0)

0x1b5: PushEmpty(float, float)
0x1b6: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x1b7: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x1b8: Stack[-3] = (bool) 0
0x1b9: Return(); Pop(2)

0x1ba: PushEmpty(float, object)
0x1bb: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1bc: Call2 0x23f

0x1bd: Pop(1)
0x1be: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1bf: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1c0: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0x1c1: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x1c2: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x1c3: Return(); Pop(2)

0x1c4: PushEmpty()
0x1c5: Push((int) 10)
0x1c6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1c7: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1c8: PushEmpty(bool)
0x1c9: Call2 0x1b5

0x1ca: Pop(0)
0x1cb: IF (Stack[-1] == 0) GOTO 0x1d4; Pop(1)

0x1cc: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x1cd: IF (Stack[-1] == 0) GOTO 0x1d3; Pop(1)

0x1ce: PushEmpty(object)
0x1cf: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1d0: Call2 0x2e2

0x1d1: Pop(1)
0x1d2: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x1d3: GOTO 0x1da

0x1d4: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1d5: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1d6: Push("head")
0x1d7: @ UnlookAsync(Stack[-1])
0x1d8: Pop(1)
0x1d9: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1da: Return(); Pop(0)

0x1db: PushEmpty()
0x1dc: Call2 0x23a

0x1dd: Pop(0)
0x1de: Push((int) 10)
0x1df: @ KillTimer(Stack[-1])
0x1e0: Pop(1)
0x1e1: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1e2: IF (Stack[-1] == 0) GOTO 0x1e7; Pop(1)

0x1e3: Push("head")
0x1e4: @ UnlookAsync(Stack[-1])
0x1e5: Pop(1)
0x1e6: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1e7: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1e8: Return(); Pop(0)

0x1e9: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x1ea: @ WaitForAnimEnd()
0x1eb: Pop(0)
0x1ec: PushEmpty(bool)
0x1ed: Call2 0x269

0x1ee: Pop(0)
0x1ef: Pop(1); Push((bool) Stack[-1] == 0)
0x1f0: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1f1: Return(); Pop(14)

0x1f2: PushEmpty(int)
0x1f3: Call2 0x354

0x1f4: Stack[-8] = Stack[-1]
0x1f5: Pop(1)
0x1f6: Stack[-6] = (int) 0
0x1f7: PushEmpty(bool)
0x1f8: Stack[-1] = (bool) 0
0x1f9: Push((int) 5)
0x1fa: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x1fb: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x1fc: PushEmpty(bool)
0x1fd: Call2 0x269

0x1fe: Pop(0)
0x1ff: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x200: Stack[-1] = (bool) 1
0x201: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x202: Push((int) 3)
0x203: @ irand(Stack[-6], Stack[-1])
0x204: Pop(1)
0x205: Push((int) 0)
0x206: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x207: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x208: Push(Stack[-7])
0x209: IF (Stack[-1] == 0) GOTO 0x218; Pop(1)

0x20a: @ irand(Stack[-4], Stack[-7])
0x20b: Pop(0)
0x20c: Push("all")
0x20d: PushEmpty(string, int)
0x20e: Stack[-1] = Stack[-7]
0x20f: Call2 0x34d

0x210: Pop(1)
0x211: @ PlayAnimation(Stack[-2], Stack[-1])
0x212: Pop(2)
0x213: @ WaitForAnimEnd(Stack[-3])
0x214: Pop(0)
0x215: Pop(0); Push((bool) Stack[-3] == 0)
0x216: IF (Stack[-1] == 0) GOTO 0x218; Pop(1)

0x217: GOTO 0x235

0x218: GOTO 0x22a

0x219: Push((int) 1)
0x21a: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x21b: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x21c: Push((int) 4)
0x21d: @ rand(Stack[-3], Stack[-1])
0x21e: Pop(1)
0x21f: Push((int) 1)
0x220: Pop(1); Push(Stack[-3] + Stack[-1]);
0x221: @ Sleep(Stack[-1], Stack[-2])
0x222: Pop(1)
0x223: Pop(0); Push((bool) Stack[-1] == 0)
0x224: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x225: GOTO 0x235

0x226: GOTO 0x22a

0x227: Push(Stack[-6])
0x228: IF (Stack[-1] == 0) GOTO 0x22a; Pop(1)

0x229: GOTO 0x235

0x22a: PushEmpty(bool)
0x22b: Call2 0x238

0x22c: Pop(0)
0x22d: Pop(1); Push((bool) Stack[-1] == 0)
0x22e: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x22f: GOTO 0x235

0x230: @ ResetAAS()
0x231: Pop(0)
0x232: Push((int) 1)
0x233: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x234: GOTO 0x1f7

0x235: @ ResetAAS()
0x236: Pop(0)
0x237: Return(); Pop(14)

0x238: Stack[-1] = (bool) 1
0x239: Return(); Pop(0)

0x23a: @ StopAnimation()
0x23b: Pop(0)
0x23c: @ StopGroup0()
0x23d: Pop(0)
0x23e: Return(); Pop(0)

0x23f: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x240: @ GetPosition(Stack[-3])
0x241: Pop(0)
0x242: @@ GetPosition(Stack[-2])
0x243: Pop(0)
0x244: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x245: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x246: Return(); Pop(6)

0x247: PushEmpty(bool, bool)
0x248: Push("HasProperty")
0x249: Push((int) 2)
0x24a: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x24b: Pop(1); Push((bool) Stack[-1] == 0)
0x24c: IF (Stack[-1] == 0) GOTO 0x24f; Pop(1)

0x24d: Stack[-5] = (bool) 0
0x24e: Return(); Pop(2)

0x24f: @@ HasProperty(Stack[-3], Stack[-1])
0x250: Pop(0)
0x251: Stack[-5] = Stack[-1]
0x252: Return(); Pop(2)

0x253: PushEmpty(float, float)
0x254: PushEmpty(bool, object, string)
0x255: Stack[-2] = Stack[-10]
0x256: Stack[-1] = Stack[-9]
0x257: Call2 0x247

0x258: Pop(2)
0x259: Pop(1); Push((bool) Stack[-1] == 0)
0x25a: IF (Stack[-1] == 0) GOTO 0x25d; Pop(1)

0x25b: Stack[-8] = (bool) 0
0x25c: Return(); Pop(2)

0x25d: @@ GetProperty(Stack[-6], Stack[-1])
0x25e: Pop(0)
0x25f: PushEmpty(float, float, float, float)
0x260: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x261: Stack[-2] = Stack[-8]
0x262: Stack[-1] = Stack[-7]
0x263: Call2 0x304

0x264: Pop(3)
0x265: @@ SetProperty(Stack[-7], Stack[-1])
0x266: Pop(1)
0x267: Stack[-8] = (bool) 1
0x268: Return(); Pop(2)

0x269: PushEmpty(bool, bool)
0x26a: @ IsLoaded(Stack[-1])
0x26b: Pop(0)
0x26c: Stack[-3] = Stack[-1]
0x26d: Return(); Pop(2)

0x26e: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x26f: @@ GetPosition(Stack[-8])
0x270: Pop(0)
0x271: @@ GetEyesHeight(Stack[-9])
0x272: Pop(0)
0x273: Push(CvectorIndex(Stack[-8], 1))
0x274: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x275: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x276: @ GetPosition(Stack[-7])
0x277: Pop(0)
0x278: @ GetEyesHeight(Stack[-9])
0x279: Pop(0)
0x27a: Push(CvectorIndex(Stack[-7], 1))
0x27b: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x27c: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x27d: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x27e: Push(CvectorIndex(Stack[-6], 1))
0x27f: Stack[-1] = (int) 0
0x280: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x281: Pop(0); Push(Stack[-6] | Stack[-6]);
0x282: Pop(1); Push(Sqrt(Stack[-1]))
0x283: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x284: Stack[-5] = -Stack[-6]; Pop(0);
0x285: Pop(0); Push(Stack[-6] * Stack[-19]);
0x286: PushEmpty(cvector, cvector)
0x287: Push(CVector(0.0, 1.0, 0.0))
0x288: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x289: Call2 0x2fa

0x28a: Pop(1)
0x28b: Push((int) 25)
0x28c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x28d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x28e: Push(CVector(0.0, 10.0, 0.0))
0x28f: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x290: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x291: @ IsOverrideActive(Stack[-2])
0x292: Pop(0)
0x293: Push(Stack[-2])
0x294: IF (Stack[-1] == 0) GOTO 0x297; Pop(1)

0x295: Stack[-21] = (bool) 0
0x296: Return(); Pop(18)

0x297: @ StopWorld()
0x298: Pop(0)
0x299: @ CameraTransit(Stack[-3], Stack[-5])
0x29a: Pop(0)
0x29b: Push(CvectorIndex(Stack[-4], 0))
0x29c: Push(CvectorIndex(Stack[-5], 2))
0x29d: @ Rotate(Stack[-2], Stack[-1])
0x29e: Pop(2)
0x29f: PushEmpty(bool)
0x2a0: Call2 0x406

0x2a1: Pop(0)
0x2a2: IF (Stack[-1] == 0) GOTO 0x2a4; Pop(1)

0x2a3: GOTO 0x2ac

0x2a4: Push("head")
0x2a5: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2a6: Pop(1)
0x2a7: Push(Stack[-1])
0x2a8: IF (Stack[-1] == 0) GOTO 0x2ac; Pop(1)

0x2a9: Push("head")
0x2aa: @ LookAsyncCamera(Stack[-1])
0x2ab: Pop(1)
0x2ac: @ CameraWaitForPlayFinish()
0x2ad: Pop(0)
0x2ae: @ ResumeWorld()
0x2af: Pop(0)
0x2b0: Stack[-21] = (bool) 1
0x2b1: Return(); Pop(18)

0x2b2: PushEmpty(bool, bool)
0x2b3: @ CameraSwitchToNormal()
0x2b4: Pop(0)
0x2b5: PushEmpty(bool)
0x2b6: Call2 0x406

0x2b7: Pop(0)
0x2b8: IF (Stack[-1] == 0) GOTO 0x2ba; Pop(1)

0x2b9: GOTO 0x2c2

0x2ba: Push("head")
0x2bb: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2bc: Pop(1)
0x2bd: Push(Stack[-1])
0x2be: IF (Stack[-1] == 0) GOTO 0x2c2; Pop(1)

0x2bf: Push("head")
0x2c0: @ UnlookAsync(Stack[-1])
0x2c1: Pop(1)
0x2c2: Return(); Pop(2)

0x2c3: PushEmpty(bool, float, float, bool, float, float)
0x2c4: @ lshHasAnimation(Stack[-3], Stack[-7])
0x2c5: Pop(0)
0x2c6: Push(Stack[-3])
0x2c7: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2c8: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x2c9: Pop(0)
0x2ca: Push((bool) 0)
0x2cb: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2cc: Pop(1)
0x2cd: GOTO 0x2d2

0x2ce: Push("Can't find lsh animation : ")
0x2cf: Pop(1); Push(Stack[-1] + Stack[-8]);
0x2d0: @ Trace(Stack[-1])
0x2d1: Pop(1)
0x2d2: Return(); Pop(6)

0x2d3: PushEmpty(bool, float, float, bool, float, float)
0x2d4: @ lshHasAnimation(Stack[-3], Stack[-8])
0x2d5: Pop(0)
0x2d6: Push(Stack[-3])
0x2d7: IF (Stack[-1] == 0) GOTO 0x2dd; Pop(1)

0x2d8: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x2d9: Pop(0)
0x2da: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x2db: Pop(0)
0x2dc: GOTO 0x2e1

0x2dd: Push("Can't find lsh animation : ")
0x2de: Pop(1); Push(Stack[-1] + Stack[-9]);
0x2df: @ Trace(Stack[-1])
0x2e0: Pop(1)
0x2e1: Return(); Pop(6)

0x2e2: PushEmpty(float, cvector, float, cvector)
0x2e3: @@ GetEyesHeight(Stack[-2])
0x2e4: Pop(0)
0x2e5: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x2e6: Push(CvectorIndex(Stack[-1], 1))
0x2e7: Stack[-1] = Stack[-3]
0x2e8: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x2e9: Push("head")
0x2ea: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x2eb: Pop(1)
0x2ec: Return(); Pop(4)

0x2ed: PushEmpty(bool)
0x2ee: Call2 0x406

0x2ef: Pop(0)
0x2f0: IF (Stack[-1] == 0) GOTO 0x2f3; Pop(1)

0x2f1: @ lshStopSpeech()
0x2f2: Pop(0)
0x2f3: Return(); Pop(0)

0x2f4: PushEmpty(object, object)
0x2f5: @ self(Stack[-1])
0x2f6: Pop(0)
0x2f7: Stack[-3] = Stack[-1]
0x2f8: Return(); Pop(2)

0x2f9: Stack[-1] = 0
0x2fa: PushEmpty(float, float)
0x2fb: Pop(0); Push(Stack[-3] | Stack[-3]);
0x2fc: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2fd: Push((float)0.0)
0x2fe: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2ff: IF (Stack[-1] == 0) GOTO 0x302; Pop(1)

0x300: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x301: Return(); Pop(2)

0x302: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x303: Return(); Pop(2)

0x304: PushEmpty()
0x305: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x306: IF (Stack[-1] == 0) GOTO 0x309; Pop(1)

0x307: Stack[-4] = Stack[-2]
0x308: Return(); Pop(0)

0x309: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x30a: IF (Stack[-1] == 0) GOTO 0x30d; Pop(1)

0x30b: Stack[-4] = Stack[-1]
0x30c: Return(); Pop(0)

0x30d: Stack[-4] = Stack[-3]
0x30e: Return(); Pop(0)

0x30f: PushEmpty(int, int)
0x310: @ GetVariable(Stack[-3], Stack[-1])
0x311: Pop(0)
0x312: Stack[-4] = Stack[-1]
0x313: Return(); Pop(2)

0x314: PushEmpty()
0x315: Pop(0); Push((bool) Stack[-2] == 0)
0x316: IF (Stack[-1] == 0) GOTO 0x319; Pop(1)

0x317: Stack[-3] = (bool) 0
0x318: Return(); Pop(0)

0x319: Push((int) 0)
0x31a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x31b: IF (Stack[-1] == 0) GOTO 0x320; Pop(1)

0x31c: Push((int) 8)
0x31d: @ SendWorldWndMessage(Stack[-1])
0x31e: Pop(1)
0x31f: GOTO 0x329

0x320: Push((int) 0)
0x321: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x322: IF (Stack[-1] == 0) GOTO 0x327; Pop(1)

0x323: Push((int) 9)
0x324: @ SendWorldWndMessage(Stack[-1])
0x325: Pop(1)
0x326: GOTO 0x329

0x327: Stack[-3] = (bool) 0
0x328: Return(); Pop(0)

0x329: PushEmpty(float)
0x32a: Stack[-1] = Stack[-2]
0x32b: Call2 0x337

0x32c: Pop(1)
0x32d: PushEmpty(bool, object, string, float, float, float)
0x32e: Stack[-5] = Stack[-8]
0x32f: Stack[-4] = "reputation"
0x330: Stack[-3] = Stack[-7]
0x331: Stack[-2] = (int) 0
0x332: Stack[-1] = (int) 1
0x333: Call2 0x253

0x334: Pop(6)
0x335: Stack[-3] = (bool) 1
0x336: Return(); Pop(0)

0x337: PushEmpty(object, object)
0x338: @ CreateFloatVector(Stack[-1])
0x339: Pop(0)
0x33a: @@ add(Stack[-3])
0x33b: Pop(0)
0x33c: Push((int) 16)
0x33d: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x33e: Pop(1)
0x33f: Return(); Pop(2)

0x340: Stack[-1] = 0
0x341: PushEmpty(object, object)
0x342: @ FindActor(Stack[-1], Stack[-4])
0x343: Pop(0)
0x344: Pop(0); Push((bool) Stack[-1] == 0)
0x345: IF (Stack[-1] == 0) GOTO 0x348; Pop(1)

0x346: Stack[-5] = (bool) 0
0x347: Return(); Pop(2)

0x348: @ Trigger(Stack[-1], Stack[-3])
0x349: Pop(0)
0x34a: Stack[-5] = (bool) 1
0x34b: Return(); Pop(2)

0x34c: Stack[-1] = 0
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
0x366: PushEmpty(bool, object, float)
0x367: Stack[-2] = Stack[-5]
0x368: Stack[-1] = (float) -0.05
0x369: Call2 0x314

0x36a: Pop(3)
0x36b: Return(); Pop(0)

0x36c: PushEmpty(int, int)
0x36d: Push("k7q03")
0x36e: Push((int) 2)
0x36f: @ SetVariable(Stack[-2], Stack[-1])
0x370: Pop(2)
0x371: PushEmpty()
0x372: Call2 0x3b7

0x373: Pop(0)
0x374: Push("tvirin")
0x375: Push((int) 5)
0x376: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0x377: Pop(2)
0x378: Return(); Pop(2)

0x379: PushEmpty()
0x37a: PushEmpty()
0x37b: Call2 0x3aa

0x37c: Pop(0)
0x37d: PushEmpty(bool, string, string)
0x37e: Stack[-2] = "quest_k7_03"
0x37f: Stack[-1] = "fail"
0x380: Call2 0x341

0x381: Pop(3)
0x382: Return(); Pop(0)

0x383: PushEmpty()
0x384: Push("playsound")
0x385: Push("giveitem")
0x386: @ TriggerWorld(Stack[-2], Stack[-1])
0x387: Pop(2)
0x388: Return(); Pop(0)

0x389: PushEmpty()
0x38a: PushEmpty(int, string)
0x38b: Stack[-1] = "k7q03"
0x38c: Call2 0x30f

0x38d: Pop(1)
0x38e: Push((int) 1)
0x38f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x390: IF (Stack[-1] == 0) GOTO 0x393; Pop(1)

0x391: Stack[-2] = (bool) 1
0x392: Return(); Pop(0)

0x393: Stack[-2] = (bool) 0
0x394: Return(); Pop(0)

0x395: PushEmpty()
0x396: PushEmpty(bool, object)
0x397: Stack[-1] = Stack[-3]
0x398: Call2 0x39f

0x399: Pop(1)
0x39a: IF (Stack[-1] == 0) GOTO 0x39d; Pop(1)

0x39b: Stack[-2] = (bool) 1
0x39c: Return(); Pop(0)

0x39d: Stack[-2] = (bool) 0
0x39e: Return(); Pop(0)

0x39f: PushEmpty(int, int)
0x3a0: Push("tvirin")
0x3a1: @@ GetItemCountOfType(Stack[-2], Stack[-1])
0x3a2: Pop(1)
0x3a3: Push((int) 5)
0x3a4: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x3a5: IF (Stack[-1] == 0) GOTO 0x3a8; Pop(1)

0x3a6: Stack[-4] = (bool) 1
0x3a7: Return(); Pop(2)

0x3a8: Stack[-4] = (bool) 0
0x3a9: Return(); Pop(2)

0x3aa: PushEmpty(object, object)
0x3ab: Push((int) 779)
0x3ac: Push((int) 2)
0x3ad: Push((int) 541759)
0x3ae: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x3af: Pop(3)
0x3b0: PushEmpty(bool, object, int)
0x3b1: Stack[-2] = Stack[-4]
0x3b2: Stack[-1] = (int) 434
0x3b3: Call2 0x3d1

0x3b4: Pop(3)
0x3b5: Return(); Pop(2)

0x3b6: Stack[-1] = 0
0x3b7: PushEmpty(object, object)
0x3b8: Push((int) 436)
0x3b9: Push((int) 2)
0x3ba: Push((int) 526392)
0x3bb: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x3bc: Pop(3)
0x3bd: PushEmpty(bool, object, int)
0x3be: Stack[-2] = Stack[-4]
0x3bf: Stack[-1] = (int) 434
0x3c0: Call2 0x3d1

0x3c1: Pop(3)
0x3c2: Return(); Pop(2)

0x3c3: Stack[-1] = 0
0x3c4: PushEmpty(object, object)
0x3c5: @ GetDiaryRoot(Stack[-1])
0x3c6: Pop(0)
0x3c7: Pop(0); Push((bool) Stack[-1] == 0)
0x3c8: IF (Stack[-1] == 0) GOTO 0x3ce; Pop(1)

0x3c9: Push("Can't retrieve diary root")
0x3ca: @ Trace(Stack[-1])
0x3cb: Pop(1)
0x3cc: Stack[-3] = (bool) 0
0x3cd: Return(); Pop(2)

0x3ce: Stack[-3] = Stack[-1]
0x3cf: Return(); Pop(2)

0x3d0: Stack[-1] = 0
0x3d1: PushEmpty(object, object, int, object, object, int)
0x3d2: PushEmpty(object)
0x3d3: Call2 0x3c4

0x3d4: Stack[-4] = Stack[-1]
0x3d5: Pop(1)
0x3d6: @@ Find(Stack[-7], Stack[-2])
0x3d7: Pop(0)
0x3d8: Pop(0); Push((bool) Stack[-2] == 0)
0x3d9: IF (Stack[-1] == 0) GOTO 0x3e0; Pop(1)

0x3da: Push("Can't find diary parent with id: ")
0x3db: Pop(1); Push(Stack[-1] + Stack[-8]);
0x3dc: @ Trace(Stack[-1])
0x3dd: Pop(1)
0x3de: Stack[-9] = (bool) 0
0x3df: Return(); Pop(6)

0x3e0: @@ AddChild(Stack[-8])
0x3e1: Pop(0)
0x3e2: Push((int) 7)
0x3e3: @ SendWorldWndMessage(Stack[-1])
0x3e4: Pop(1)
0x3e5: @@ GetCategory(Stack[-1])
0x3e6: Pop(0)
0x3e7: @ SetDiarySection(Stack[-1])
0x3e8: Pop(0)
0x3e9: Stack[-9] = (bool) 0
0x3ea: Return(); Pop(6)

0x3eb: Stack[-2] = 0
0x3ec: Stack[-3] = 0
0x3ed: PushEmpty(int, int)
0x3ee: Push("branch")
0x3ef: @ GetVariable(Stack[-1], Stack[-2])
0x3f0: Pop(1)
0x3f1: Push((int) 0)
0x3f2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3f3: IF (Stack[-1] == 0) GOTO 0x3f7; Pop(1)

0x3f4: Stack[-3] = (int) 1
0x3f5: Return(); Pop(2)

0x3f6: GOTO 0x3fc

0x3f7: Push((int) 1)
0x3f8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3f9: IF (Stack[-1] == 0) GOTO 0x3fc; Pop(1)

0x3fa: Stack[-3] = (int) 2
0x3fb: Return(); Pop(2)

0x3fc: Stack[-3] = (int) 3
0x3fd: Return(); Pop(2)

0x3fe: Stack[-1] = (int) 515564
0x3ff: Return(); Pop(0)

0x400: Stack[-1] = (int) 503349
0x401: Return(); Pop(0)

0x402: Stack[-1] = "ui/NPC_Citizen2.png"
0x403: Return(); Pop(0)

0x404: Stack[-1] = "ui/NPC_Citizen2_b.png"
0x405: Return(); Pop(0)

0x406: Stack[-1] = (bool) 0
0x407: Return(); Pop(0)

