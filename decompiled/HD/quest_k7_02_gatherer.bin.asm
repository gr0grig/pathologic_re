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
	add
	GetItemID
	Category
	AddItem
	DropItems
	SetItemName
	HasItem
	ui/NPC_Morlok.png
	ui/NPC_Morlok_b.png
	k7q02
	white plet 10 is given
	grass_white_plet
	playsound
	giveitem
	Samopal
	RemoveItemByType
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
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemProperty (3 args)
	CreateInvItem (1 args)
	GetInvItemByName (2 args)
	HasAnimation (3 args)
	SetVariable (2 args)
	TriggerWorld (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x12a
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xad Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x134 Vars = (object)
		EVENT_7 Op = 0x169 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 110.0
0x5: Call2 0x1f1

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x2bd

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x2bb

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x2bf

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x2c1

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x34a

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
0x41: Call2 0x236

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
0x54: Push((int) 526360)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: PushEmpty(bool)
0x5a: Stack[-1] = (bool) 0
0x5b: PushEmpty(bool, object)
0x5c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5d: Call2 0x2fd

0x5e: Pop(1)
0x5f: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x60: PushEmpty(bool, object)
0x61: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62: Call2 0x309

0x63: Pop(1)
0x64: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x65: Stack[-1] = (bool) 1
0x66: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x67: Push((int) 526361)
0x68: Push((int) 30084)
0x69: Push((int) 27646)
0x6a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b: Pop(3)
0x6c: Push((int) 526364)
0x6d: Push((int) -1)
0x6e: Push((int) 27649)
0x6f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x70: Pop(3)
0x71: Push((int) 528671)
0x72: Push((int) -1)
0x73: Push((int) 30083)
0x74: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x75: Pop(3)
0x76: GOTO 0x79

0x77: Return(); Pop(0)

0x78: GOTO 0x4e

0x79: PushEmpty(bool)
0x7a: Call2 0x2c3

0x7b: Pop(0)
0x7c: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x7d: @ lshWaitForAnimEnd()
0x7e: Pop(0)
0x7f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x80: IF (Stack[-1] == 0) GOTO 0x82; Pop(1)

0x81: GOTO 0x87

0x82: PushEmpty(string)
0x83: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x84: Call2 0x248

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
0x99: Call2 0x2c3

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
0xa9: Call2 0x258

0xaa: Pop(2)
0xab: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xac: Return(); Pop(0)

0xad: PushEmpty()
0xae: Push((int) 1)
0xaf: IF (Stack[-1] == 0) GOTO 0x129; Pop(1)

0xb0: PushEmpty()
0xb1: Call2 0x272

0xb2: Pop(0)
0xb3: Push((int) 27648)
0xb4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb5: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xb6: PushEmpty(object, object)
0xb7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb9: Call2 0x2dd

0xba: Pop(2)
0xbb: PushEmpty(object, object)
0xbc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbe: Call2 0x2e6

0xbf: Pop(2)
0xc0: PushEmpty(object, object)
0xc1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc3: Call2 0x2f1

0xc4: Pop(2)
0xc5: PushEmpty(object, object)
0xc6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc8: Call2 0x2f7

0xc9: Pop(2)
0xca: Push((int) 27645)
0xcb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcc: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xcd: PushEmpty(string)
0xce: Stack[-1] = "Neutral"
0xcf: Call2 0x97

0xd0: Pop(1)
0xd1: Push((int) 526360)
0xd2: @@ SetMessage(Stack[-1])
0xd3: Pop(1)
0xd4: @@ ClearReplies()
0xd5: Pop(0)
0xd6: PushEmpty(bool)
0xd7: Stack[-1] = (bool) 0
0xd8: PushEmpty(bool, object)
0xd9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xda: Call2 0x2fd

0xdb: Pop(1)
0xdc: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xdd: PushEmpty(bool, object)
0xde: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xdf: Call2 0x309

0xe0: Pop(1)
0xe1: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xe2: Stack[-1] = (bool) 1
0xe3: IF (Stack[-1] == 0) GOTO 0xe9; Pop(1)

0xe4: Push((int) 526361)
0xe5: Push((int) 30084)
0xe6: Push((int) 27646)
0xe7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe8: Pop(3)
0xe9: Push((int) 526364)
0xea: Push((int) -1)
0xeb: Push((int) 27649)
0xec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xed: Pop(3)
0xee: Push((int) 528671)
0xef: Push((int) -1)
0xf0: Push((int) 30083)
0xf1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf2: Pop(3)
0xf3: Return(); Pop(0)

0xf4: Push((int) 30084)
0xf5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf6: IF (Stack[-1] == 0) GOTO 0x10b; Pop(1)

0xf7: PushEmpty(string)
0xf8: Stack[-1] = "Neutral"
0xf9: Call2 0x97

0xfa: Pop(1)
0xfb: Push((int) 528672)
0xfc: @@ SetMessage(Stack[-1])
0xfd: Pop(1)
0xfe: @@ ClearReplies()
0xff: Pop(0)
0x100: Push((int) 528673)
0x101: Push((int) 27647)
0x102: Push((int) 30085)
0x103: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x104: Pop(3)
0x105: Push((int) 528674)
0x106: Push((int) 27647)
0x107: Push((int) 30086)
0x108: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x109: Pop(3)
0x10a: Return(); Pop(0)

0x10b: Push((int) 27647)
0x10c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10d: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x10e: PushEmpty(string)
0x10f: Stack[-1] = "Neutral"
0x110: Call2 0x97

0x111: Pop(1)
0x112: Push((int) 526362)
0x113: @@ SetMessage(Stack[-1])
0x114: Pop(1)
0x115: @@ ClearReplies()
0x116: Pop(0)
0x117: Push((int) 526363)
0x118: Push((int) -1)
0x119: Push((int) 27648)
0x11a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11b: Pop(3)
0x11c: Return(); Pop(0)

0x11d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x11e: PushEmpty(bool)
0x11f: Call2 0x2c3

0x120: Pop(0)
0x121: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x122: @ lshStopAnimation()
0x123: Pop(0)
0x124: GOTO 0x127

0x125: @ StopAnimation()
0x126: Pop(0)
0x127: Return(); Pop(0)

0x128: GOTO 0xae

0x129: Return(); Pop(0)

0x12a: PushEmpty(float, float)
0x12b: Stack[-2] = (int) 300
0x12c: Stack[-1] = (int) 100
0x12d: Call2 0x13f

0x12e: Pop(2)
0x12f: Push((int) 3)
0x130: @ Sleep(Stack[-1])
0x131: Pop(1)
0x132: GOTO 0x12a

0x133: Return(); Pop(0)

0x134: PushEmpty()
0x135: PushEmpty()
0x136: Call2 0x180

0x137: Pop(0)
0x138: PushEmpty(int, object)
0x139: Stack[-1] = Stack[-3]
0x13a: Push(-2, 1); TaskCall(0)
0x13b: Call2 0x0

0x13c: Pop(-2, 1); TaskReturn
0x13d: Pop(2)
0x13e: Return(); Pop(0)

0x13f: PushEmpty()
0x140: PushEmpty(bool)
0x141: Call2 0x1ec

0x142: Pop(0)
0x143: Pop(1); Push((bool) Stack[-1] == 0)
0x144: IF (Stack[-1] == 0) GOTO 0x146; Pop(1)

0x145: Return(); Pop(0)

0x146: Push("player")
0x147: @ FindActor(Stack[-4], Stack[-1])
0x148: Pop(1)
0x149: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x14a: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x14b: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x14c: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x14d: Push((int) 10)
0x14e: Push((float)1.0)
0x14f: @ SetTimer(Stack[-2], Stack[-1])
0x150: Pop(2)
0x151: PushEmpty()
0x152: Call2 0x18e

0x153: Pop(0)
0x154: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x155: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x156: Push((int) 10)
0x157: @ KillTimer(Stack[-1])
0x158: Pop(1)
0x159: Return(); Pop(0)

0x15a: PushEmpty(float, float)
0x15b: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x15c: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x15d: Stack[-3] = (bool) 0
0x15e: Return(); Pop(2)

0x15f: PushEmpty(float, object)
0x160: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x161: Call2 0x1e4

0x162: Pop(1)
0x163: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x164: Push( Stack[2 + Tasks[-1].StackPointer] )
0x165: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x166: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x167: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x168: Return(); Pop(2)

0x169: PushEmpty()
0x16a: Push((int) 10)
0x16b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x16c: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x16d: PushEmpty(bool)
0x16e: Call2 0x15a

0x16f: Pop(0)
0x170: IF (Stack[-1] == 0) GOTO 0x179; Pop(1)

0x171: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x172: IF (Stack[-1] == 0) GOTO 0x178; Pop(1)

0x173: PushEmpty(object)
0x174: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x175: Call2 0x267

0x176: Pop(1)
0x177: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x178: GOTO 0x17f

0x179: Push( Stack[2 + Tasks[-1].StackPointer] )
0x17a: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x17b: Push("head")
0x17c: @ UnlookAsync(Stack[-1])
0x17d: Pop(1)
0x17e: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x17f: Return(); Pop(0)

0x180: PushEmpty()
0x181: Call2 0x1df

0x182: Pop(0)
0x183: Push((int) 10)
0x184: @ KillTimer(Stack[-1])
0x185: Pop(1)
0x186: Push( Stack[2 + Tasks[-1].StackPointer] )
0x187: IF (Stack[-1] == 0) GOTO 0x18c; Pop(1)

0x188: Push("head")
0x189: @ UnlookAsync(Stack[-1])
0x18a: Pop(1)
0x18b: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x18c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x18d: Return(); Pop(0)

0x18e: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x18f: @ WaitForAnimEnd()
0x190: Pop(0)
0x191: PushEmpty(bool)
0x192: Call2 0x1ec

0x193: Pop(0)
0x194: Pop(1); Push((bool) Stack[-1] == 0)
0x195: IF (Stack[-1] == 0) GOTO 0x197; Pop(1)

0x196: Return(); Pop(14)

0x197: PushEmpty(int)
0x198: Call2 0x2cc

0x199: Stack[-8] = Stack[-1]
0x19a: Pop(1)
0x19b: Stack[-6] = (int) 0
0x19c: PushEmpty(bool)
0x19d: Stack[-1] = (bool) 0
0x19e: Push((int) 5)
0x19f: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x1a0: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x1a1: PushEmpty(bool)
0x1a2: Call2 0x1ec

0x1a3: Pop(0)
0x1a4: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x1a5: Stack[-1] = (bool) 1
0x1a6: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1a7: Push((int) 3)
0x1a8: @ irand(Stack[-6], Stack[-1])
0x1a9: Pop(1)
0x1aa: Push((int) 0)
0x1ab: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1ac: IF (Stack[-1] == 0) GOTO 0x1be; Pop(1)

0x1ad: Push(Stack[-7])
0x1ae: IF (Stack[-1] == 0) GOTO 0x1bd; Pop(1)

0x1af: @ irand(Stack[-4], Stack[-7])
0x1b0: Pop(0)
0x1b1: Push("all")
0x1b2: PushEmpty(string, int)
0x1b3: Stack[-1] = Stack[-7]
0x1b4: Call2 0x2c5

0x1b5: Pop(1)
0x1b6: @ PlayAnimation(Stack[-2], Stack[-1])
0x1b7: Pop(2)
0x1b8: @ WaitForAnimEnd(Stack[-3])
0x1b9: Pop(0)
0x1ba: Pop(0); Push((bool) Stack[-3] == 0)
0x1bb: IF (Stack[-1] == 0) GOTO 0x1bd; Pop(1)

0x1bc: GOTO 0x1da

0x1bd: GOTO 0x1cf

0x1be: Push((int) 1)
0x1bf: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1c0: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1c1: Push((int) 4)
0x1c2: @ rand(Stack[-3], Stack[-1])
0x1c3: Pop(1)
0x1c4: Push((int) 1)
0x1c5: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1c6: @ Sleep(Stack[-1], Stack[-2])
0x1c7: Pop(1)
0x1c8: Pop(0); Push((bool) Stack[-1] == 0)
0x1c9: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1ca: GOTO 0x1da

0x1cb: GOTO 0x1cf

0x1cc: Push(Stack[-6])
0x1cd: IF (Stack[-1] == 0) GOTO 0x1cf; Pop(1)

0x1ce: GOTO 0x1da

0x1cf: PushEmpty(bool)
0x1d0: Call2 0x1dd

0x1d1: Pop(0)
0x1d2: Pop(1); Push((bool) Stack[-1] == 0)
0x1d3: IF (Stack[-1] == 0) GOTO 0x1d5; Pop(1)

0x1d4: GOTO 0x1da

0x1d5: @ ResetAAS()
0x1d6: Pop(0)
0x1d7: Push((int) 1)
0x1d8: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x1d9: GOTO 0x19c

0x1da: @ ResetAAS()
0x1db: Pop(0)
0x1dc: Return(); Pop(14)

0x1dd: Stack[-1] = (bool) 1
0x1de: Return(); Pop(0)

0x1df: @ StopAnimation()
0x1e0: Pop(0)
0x1e1: @ StopGroup0()
0x1e2: Pop(0)
0x1e3: Return(); Pop(0)

0x1e4: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x1e5: @ GetPosition(Stack[-3])
0x1e6: Pop(0)
0x1e7: @@ GetPosition(Stack[-2])
0x1e8: Pop(0)
0x1e9: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x1ea: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x1eb: Return(); Pop(6)

0x1ec: PushEmpty(bool, bool)
0x1ed: @ IsLoaded(Stack[-1])
0x1ee: Pop(0)
0x1ef: Stack[-3] = Stack[-1]
0x1f0: Return(); Pop(2)

0x1f1: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x1f2: @@ GetPosition(Stack[-8])
0x1f3: Pop(0)
0x1f4: @@ GetEyesHeight(Stack[-9])
0x1f5: Pop(0)
0x1f6: Push(CvectorIndex(Stack[-8], 1))
0x1f7: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1f8: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x1f9: @ GetPosition(Stack[-7])
0x1fa: Pop(0)
0x1fb: @ GetEyesHeight(Stack[-9])
0x1fc: Pop(0)
0x1fd: Push(CvectorIndex(Stack[-7], 1))
0x1fe: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1ff: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x200: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x201: Push(CvectorIndex(Stack[-6], 1))
0x202: Stack[-1] = (int) 0
0x203: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x204: Pop(0); Push(Stack[-6] | Stack[-6]);
0x205: Pop(1); Push(Sqrt(Stack[-1]))
0x206: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x207: Stack[-5] = -Stack[-6]; Pop(0);
0x208: Pop(0); Push(Stack[-6] * Stack[-19]);
0x209: PushEmpty(cvector, cvector)
0x20a: Push(CVector(0.0, 1.0, 0.0))
0x20b: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x20c: Call2 0x279

0x20d: Pop(1)
0x20e: Push((int) 25)
0x20f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x210: Pop(2); Push(Stack[-2] + Stack[-1]);
0x211: Push(CVector(0.0, 10.0, 0.0))
0x212: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x213: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x214: @ IsOverrideActive(Stack[-2])
0x215: Pop(0)
0x216: Push(Stack[-2])
0x217: IF (Stack[-1] == 0) GOTO 0x21a; Pop(1)

0x218: Stack[-21] = (bool) 0
0x219: Return(); Pop(18)

0x21a: @ StopWorld()
0x21b: Pop(0)
0x21c: Push((bool) 1)
0x21d: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x21e: Pop(1)
0x21f: Push(CvectorIndex(Stack[-4], 0))
0x220: Push(CvectorIndex(Stack[-5], 2))
0x221: @ Rotate(Stack[-2], Stack[-1])
0x222: Pop(2)
0x223: PushEmpty(bool)
0x224: Call2 0x2c3

0x225: Pop(0)
0x226: IF (Stack[-1] == 0) GOTO 0x228; Pop(1)

0x227: GOTO 0x230

0x228: Push("head")
0x229: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x22a: Pop(1)
0x22b: Push(Stack[-1])
0x22c: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x22d: Push("head")
0x22e: @ LookAsyncCamera(Stack[-1])
0x22f: Pop(1)
0x230: @ CameraWaitForPlayFinish()
0x231: Pop(0)
0x232: @ ResumeWorld()
0x233: Pop(0)
0x234: Stack[-21] = (bool) 1
0x235: Return(); Pop(18)

0x236: PushEmpty(bool, bool)
0x237: Push((bool) 1)
0x238: @ CameraSwitchToNormal(Stack[-1])
0x239: Pop(1)
0x23a: PushEmpty(bool)
0x23b: Call2 0x2c3

0x23c: Pop(0)
0x23d: IF (Stack[-1] == 0) GOTO 0x23f; Pop(1)

0x23e: GOTO 0x247

0x23f: Push("head")
0x240: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x241: Pop(1)
0x242: Push(Stack[-1])
0x243: IF (Stack[-1] == 0) GOTO 0x247; Pop(1)

0x244: Push("head")
0x245: @ UnlookAsync(Stack[-1])
0x246: Pop(1)
0x247: Return(); Pop(2)

0x248: PushEmpty(bool, float, float, bool, float, float)
0x249: @ lshHasAnimation(Stack[-3], Stack[-7])
0x24a: Pop(0)
0x24b: Push(Stack[-3])
0x24c: IF (Stack[-1] == 0) GOTO 0x253; Pop(1)

0x24d: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x24e: Pop(0)
0x24f: Push((bool) 0)
0x250: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x251: Pop(1)
0x252: GOTO 0x257

0x253: Push("Can't find lsh animation : ")
0x254: Pop(1); Push(Stack[-1] + Stack[-8]);
0x255: @ Trace(Stack[-1])
0x256: Pop(1)
0x257: Return(); Pop(6)

0x258: PushEmpty(bool, float, float, bool, float, float)
0x259: @ lshHasAnimation(Stack[-3], Stack[-8])
0x25a: Pop(0)
0x25b: Push(Stack[-3])
0x25c: IF (Stack[-1] == 0) GOTO 0x262; Pop(1)

0x25d: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x25e: Pop(0)
0x25f: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x260: Pop(0)
0x261: GOTO 0x266

0x262: Push("Can't find lsh animation : ")
0x263: Pop(1); Push(Stack[-1] + Stack[-9]);
0x264: @ Trace(Stack[-1])
0x265: Pop(1)
0x266: Return(); Pop(6)

0x267: PushEmpty(float, cvector, float, cvector)
0x268: @@ GetEyesHeight(Stack[-2])
0x269: Pop(0)
0x26a: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x26b: Push(CvectorIndex(Stack[-1], 1))
0x26c: Stack[-1] = Stack[-3]
0x26d: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x26e: Push("head")
0x26f: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x270: Pop(1)
0x271: Return(); Pop(4)

0x272: PushEmpty(bool)
0x273: Call2 0x2c3

0x274: Pop(0)
0x275: IF (Stack[-1] == 0) GOTO 0x278; Pop(1)

0x276: @ lshStopSpeech()
0x277: Pop(0)
0x278: Return(); Pop(0)

0x279: PushEmpty(float, float)
0x27a: Pop(0); Push(Stack[-3] | Stack[-3]);
0x27b: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x27c: Push((float)0.0)
0x27d: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x27e: IF (Stack[-1] == 0) GOTO 0x281; Pop(1)

0x27f: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x280: Return(); Pop(2)

0x281: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x282: Return(); Pop(2)

0x283: PushEmpty(int, int)
0x284: @ GetVariable(Stack[-3], Stack[-1])
0x285: Pop(0)
0x286: Stack[-4] = Stack[-1]
0x287: Return(); Pop(2)

0x288: PushEmpty(object, object)
0x289: @ CreateIntVector(Stack[-1])
0x28a: Pop(0)
0x28b: @@ add(Stack[-4])
0x28c: Pop(0)
0x28d: @@ add(Stack[-3])
0x28e: Pop(0)
0x28f: Push((int) 3)
0x290: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x291: Pop(1)
0x292: Return(); Pop(2)

0x293: Stack[-1] = 0
0x294: PushEmpty(int, int, bool, int, int, bool)
0x295: @@ GetItemID(Stack[-3])
0x296: Pop(0)
0x297: Push("Category")
0x298: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x299: Pop(1)
0x29a: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x29b: Pop(0)
0x29c: Pop(0); Push((bool) Stack[-1] == 0)
0x29d: IF (Stack[-1] == 0) GOTO 0x2a1; Pop(1)

0x29e: @@ DropItems(Stack[-8], Stack[-7])
0x29f: Pop(0)
0x2a0: GOTO 0x2a6

0x2a1: PushEmpty(int, int)
0x2a2: Stack[-2] = Stack[-5]
0x2a3: Stack[-1] = Stack[-9]
0x2a4: Call2 0x288

0x2a5: Pop(2)
0x2a6: Return(); Pop(6)

0x2a7: PushEmpty(object, object)
0x2a8: @ CreateInvItem(Stack[-1])
0x2a9: Pop(0)
0x2aa: @@ SetItemName(Stack[-4])
0x2ab: Pop(0)
0x2ac: PushEmpty(object, object, int)
0x2ad: Stack[-3] = Stack[-8]
0x2ae: Stack[-2] = Stack[-4]
0x2af: Stack[-1] = Stack[-6]
0x2b0: Call2 0x294

0x2b1: Pop(3)
0x2b2: Return(); Pop(2)

0x2b3: Stack[-1] = 0
0x2b4: PushEmpty(int, bool, int, bool)
0x2b5: @ GetInvItemByName(Stack[-2], Stack[-5])
0x2b6: Pop(0)
0x2b7: @@ HasItem(Stack[-2], Stack[-1])
0x2b8: Pop(0)
0x2b9: Stack[-7] = Stack[-1]
0x2ba: Return(); Pop(4)

0x2bb: Stack[-1] = (int) 521048
0x2bc: Return(); Pop(0)

0x2bd: Stack[-1] = (int) 521047
0x2be: Return(); Pop(0)

0x2bf: Stack[-1] = "ui/NPC_Morlok.png"
0x2c0: Return(); Pop(0)

0x2c1: Stack[-1] = "ui/NPC_Morlok_b.png"
0x2c2: Return(); Pop(0)

0x2c3: Stack[-1] = (bool) 0
0x2c4: Return(); Pop(0)

0x2c5: PushEmpty(string, string)
0x2c6: Stack[-1] = "idle"
0x2c7: Push(Stack[-3])
0x2c8: IF (Stack[-1] == 0) GOTO 0x2ca; Pop(1)

0x2c9: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x2ca: Stack[-4] = Stack[-1]
0x2cb: Return(); Pop(2)

0x2cc: PushEmpty(int, bool, int, bool)
0x2cd: Stack[-2] = (int) 0
0x2ce: Push("all")
0x2cf: PushEmpty(string, int)
0x2d0: Stack[-1] = Stack[-5]
0x2d1: Call2 0x2c5

0x2d2: Pop(1)
0x2d3: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2d4: Pop(2)
0x2d5: Pop(0); Push((bool) Stack[-1] == 0)
0x2d6: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2d7: GOTO 0x2db

0x2d8: Push((int) 1)
0x2d9: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2da: GOTO 0x2ce

0x2db: Stack[-5] = Stack[-2]
0x2dc: Return(); Pop(4)

0x2dd: PushEmpty()
0x2de: Push("k7q02")
0x2df: Push((int) 2)
0x2e0: @ SetVariable(Stack[-2], Stack[-1])
0x2e1: Pop(2)
0x2e2: PushEmpty()
0x2e3: Call2 0x314

0x2e4: Pop(0)
0x2e5: Return(); Pop(0)

0x2e6: PushEmpty()
0x2e7: Push("white plet 10 is given")
0x2e8: @ Trace(Stack[-1])
0x2e9: Pop(1)
0x2ea: PushEmpty(object, string, int)
0x2eb: Stack[-3] = Stack[-5]
0x2ec: Stack[-2] = "grass_white_plet"
0x2ed: Stack[-1] = (int) 10
0x2ee: Call2 0x2a7

0x2ef: Pop(3)
0x2f0: Return(); Pop(0)

0x2f1: PushEmpty()
0x2f2: Push("playsound")
0x2f3: Push("giveitem")
0x2f4: @ TriggerWorld(Stack[-2], Stack[-1])
0x2f5: Pop(2)
0x2f6: Return(); Pop(0)

0x2f7: PushEmpty(int, int)
0x2f8: Push("Samopal")
0x2f9: Push((int) 1)
0x2fa: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0x2fb: Pop(2)
0x2fc: Return(); Pop(2)

0x2fd: PushEmpty()
0x2fe: PushEmpty(int, string)
0x2ff: Stack[-1] = "k7q02"
0x300: Call2 0x283

0x301: Pop(1)
0x302: Push((int) 1)
0x303: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x304: IF (Stack[-1] == 0) GOTO 0x307; Pop(1)

0x305: Stack[-2] = (bool) 1
0x306: Return(); Pop(0)

0x307: Stack[-2] = (bool) 0
0x308: Return(); Pop(0)

0x309: PushEmpty()
0x30a: PushEmpty(bool, object, string)
0x30b: Stack[-2] = Stack[-4]
0x30c: Stack[-1] = "Samopal"
0x30d: Call2 0x2b4

0x30e: Pop(2)
0x30f: IF (Stack[-1] == 0) GOTO 0x312; Pop(1)

0x310: Stack[-2] = (bool) 1
0x311: Return(); Pop(0)

0x312: Stack[-2] = (bool) 0
0x313: Return(); Pop(0)

0x314: PushEmpty(object, object)
0x315: Push((int) 432)
0x316: Push((int) 2)
0x317: Push((int) 526370)
0x318: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x319: Pop(3)
0x31a: PushEmpty(bool, object, int)
0x31b: Stack[-2] = Stack[-4]
0x31c: Stack[-1] = (int) 430
0x31d: Call2 0x32e

0x31e: Pop(3)
0x31f: Return(); Pop(2)

0x320: Stack[-1] = 0
0x321: PushEmpty(object, object)
0x322: @ GetDiaryRoot(Stack[-1])
0x323: Pop(0)
0x324: Pop(0); Push((bool) Stack[-1] == 0)
0x325: IF (Stack[-1] == 0) GOTO 0x32b; Pop(1)

0x326: Push("Can't retrieve diary root")
0x327: @ Trace(Stack[-1])
0x328: Pop(1)
0x329: Stack[-3] = (bool) 0
0x32a: Return(); Pop(2)

0x32b: Stack[-3] = Stack[-1]
0x32c: Return(); Pop(2)

0x32d: Stack[-1] = 0
0x32e: PushEmpty(object, object, int, object, object, int)
0x32f: PushEmpty(object)
0x330: Call2 0x321

0x331: Stack[-4] = Stack[-1]
0x332: Pop(1)
0x333: @@ Find(Stack[-7], Stack[-2])
0x334: Pop(0)
0x335: Pop(0); Push((bool) Stack[-2] == 0)
0x336: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x337: Push("Can't find diary parent with id: ")
0x338: Pop(1); Push(Stack[-1] + Stack[-8]);
0x339: @ Trace(Stack[-1])
0x33a: Pop(1)
0x33b: Stack[-9] = (bool) 0
0x33c: Return(); Pop(6)

0x33d: @@ AddChild(Stack[-8])
0x33e: Pop(0)
0x33f: Push((int) 7)
0x340: @ SendWorldWndMessage(Stack[-1])
0x341: Pop(1)
0x342: @@ GetCategory(Stack[-1])
0x343: Pop(0)
0x344: @ SetDiarySection(Stack[-1])
0x345: Pop(0)
0x346: Stack[-9] = (bool) 0
0x347: Return(); Pop(6)

0x348: Stack[-2] = 0
0x349: Stack[-3] = 0
0x34a: PushEmpty(int, int)
0x34b: Push("branch")
0x34c: @ GetVariable(Stack[-1], Stack[-2])
0x34d: Pop(1)
0x34e: Push((int) 0)
0x34f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x350: IF (Stack[-1] == 0) GOTO 0x354; Pop(1)

0x351: Stack[-3] = (int) 1
0x352: Return(); Pop(2)

0x353: GOTO 0x359

0x354: Push((int) 1)
0x355: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x356: IF (Stack[-1] == 0) GOTO 0x359; Pop(1)

0x357: Stack[-3] = (int) 2
0x358: Return(); Pop(2)

0x359: Stack[-3] = (int) 3
0x35a: Return(); Pop(2)

