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
	ui/NPC_Citizen2.png
	ui/NPC_Citizen2_b.png
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
0xe: Call2 0x2bb

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x2b9

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x2bd

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x2bf

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x348

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
0x41: Call2 0x235

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
0x5d: Call2 0x2fb

0x5e: Pop(1)
0x5f: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x60: PushEmpty(bool, object)
0x61: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62: Call2 0x307

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
0x7a: Call2 0x2c1

0x7b: Pop(0)
0x7c: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x7d: @ lshWaitForAnimEnd()
0x7e: Pop(0)
0x7f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x80: IF (Stack[-1] == 0) GOTO 0x82; Pop(1)

0x81: GOTO 0x87

0x82: PushEmpty(string)
0x83: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x84: Call2 0x246

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
0x99: Call2 0x2c1

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
0xa9: Call2 0x256

0xaa: Pop(2)
0xab: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xac: Return(); Pop(0)

0xad: PushEmpty()
0xae: Push((int) 1)
0xaf: IF (Stack[-1] == 0) GOTO 0x129; Pop(1)

0xb0: PushEmpty()
0xb1: Call2 0x270

0xb2: Pop(0)
0xb3: Push((int) 27648)
0xb4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb5: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xb6: PushEmpty(object, object)
0xb7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb9: Call2 0x2db

0xba: Pop(2)
0xbb: PushEmpty(object, object)
0xbc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbe: Call2 0x2e4

0xbf: Pop(2)
0xc0: PushEmpty(object, object)
0xc1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc3: Call2 0x2ef

0xc4: Pop(2)
0xc5: PushEmpty(object, object)
0xc6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc8: Call2 0x2f5

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
0xda: Call2 0x2fb

0xdb: Pop(1)
0xdc: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xdd: PushEmpty(bool, object)
0xde: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xdf: Call2 0x307

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
0x11f: Call2 0x2c1

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
0x175: Call2 0x265

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
0x198: Call2 0x2ca

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
0x1b4: Call2 0x2c3

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
0x20c: Call2 0x277

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
0x21c: @ CameraTransit(Stack[-3], Stack[-5])
0x21d: Pop(0)
0x21e: Push(CvectorIndex(Stack[-4], 0))
0x21f: Push(CvectorIndex(Stack[-5], 2))
0x220: @ Rotate(Stack[-2], Stack[-1])
0x221: Pop(2)
0x222: PushEmpty(bool)
0x223: Call2 0x2c1

0x224: Pop(0)
0x225: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x226: GOTO 0x22f

0x227: Push("head")
0x228: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x229: Pop(1)
0x22a: Push(Stack[-1])
0x22b: IF (Stack[-1] == 0) GOTO 0x22f; Pop(1)

0x22c: Push("head")
0x22d: @ LookAsyncCamera(Stack[-1])
0x22e: Pop(1)
0x22f: @ CameraWaitForPlayFinish()
0x230: Pop(0)
0x231: @ ResumeWorld()
0x232: Pop(0)
0x233: Stack[-21] = (bool) 1
0x234: Return(); Pop(18)

0x235: PushEmpty(bool, bool)
0x236: @ CameraSwitchToNormal()
0x237: Pop(0)
0x238: PushEmpty(bool)
0x239: Call2 0x2c1

0x23a: Pop(0)
0x23b: IF (Stack[-1] == 0) GOTO 0x23d; Pop(1)

0x23c: GOTO 0x245

0x23d: Push("head")
0x23e: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x23f: Pop(1)
0x240: Push(Stack[-1])
0x241: IF (Stack[-1] == 0) GOTO 0x245; Pop(1)

0x242: Push("head")
0x243: @ UnlookAsync(Stack[-1])
0x244: Pop(1)
0x245: Return(); Pop(2)

0x246: PushEmpty(bool, float, float, bool, float, float)
0x247: @ lshHasAnimation(Stack[-3], Stack[-7])
0x248: Pop(0)
0x249: Push(Stack[-3])
0x24a: IF (Stack[-1] == 0) GOTO 0x251; Pop(1)

0x24b: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x24c: Pop(0)
0x24d: Push((bool) 0)
0x24e: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x24f: Pop(1)
0x250: GOTO 0x255

0x251: Push("Can't find lsh animation : ")
0x252: Pop(1); Push(Stack[-1] + Stack[-8]);
0x253: @ Trace(Stack[-1])
0x254: Pop(1)
0x255: Return(); Pop(6)

0x256: PushEmpty(bool, float, float, bool, float, float)
0x257: @ lshHasAnimation(Stack[-3], Stack[-8])
0x258: Pop(0)
0x259: Push(Stack[-3])
0x25a: IF (Stack[-1] == 0) GOTO 0x260; Pop(1)

0x25b: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x25c: Pop(0)
0x25d: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x25e: Pop(0)
0x25f: GOTO 0x264

0x260: Push("Can't find lsh animation : ")
0x261: Pop(1); Push(Stack[-1] + Stack[-9]);
0x262: @ Trace(Stack[-1])
0x263: Pop(1)
0x264: Return(); Pop(6)

0x265: PushEmpty(float, cvector, float, cvector)
0x266: @@ GetEyesHeight(Stack[-2])
0x267: Pop(0)
0x268: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x269: Push(CvectorIndex(Stack[-1], 1))
0x26a: Stack[-1] = Stack[-3]
0x26b: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x26c: Push("head")
0x26d: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x26e: Pop(1)
0x26f: Return(); Pop(4)

0x270: PushEmpty(bool)
0x271: Call2 0x2c1

0x272: Pop(0)
0x273: IF (Stack[-1] == 0) GOTO 0x276; Pop(1)

0x274: @ lshStopSpeech()
0x275: Pop(0)
0x276: Return(); Pop(0)

0x277: PushEmpty(float, float)
0x278: Pop(0); Push(Stack[-3] | Stack[-3]);
0x279: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x27a: Push((float)0.0)
0x27b: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x27c: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x27d: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x27e: Return(); Pop(2)

0x27f: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x280: Return(); Pop(2)

0x281: PushEmpty(int, int)
0x282: @ GetVariable(Stack[-3], Stack[-1])
0x283: Pop(0)
0x284: Stack[-4] = Stack[-1]
0x285: Return(); Pop(2)

0x286: PushEmpty(object, object)
0x287: @ CreateIntVector(Stack[-1])
0x288: Pop(0)
0x289: @@ add(Stack[-4])
0x28a: Pop(0)
0x28b: @@ add(Stack[-3])
0x28c: Pop(0)
0x28d: Push((int) 3)
0x28e: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x28f: Pop(1)
0x290: Return(); Pop(2)

0x291: Stack[-1] = 0
0x292: PushEmpty(int, int, bool, int, int, bool)
0x293: @@ GetItemID(Stack[-3])
0x294: Pop(0)
0x295: Push("Category")
0x296: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x297: Pop(1)
0x298: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x299: Pop(0)
0x29a: Pop(0); Push((bool) Stack[-1] == 0)
0x29b: IF (Stack[-1] == 0) GOTO 0x29f; Pop(1)

0x29c: @@ DropItems(Stack[-8], Stack[-7])
0x29d: Pop(0)
0x29e: GOTO 0x2a4

0x29f: PushEmpty(int, int)
0x2a0: Stack[-2] = Stack[-5]
0x2a1: Stack[-1] = Stack[-9]
0x2a2: Call2 0x286

0x2a3: Pop(2)
0x2a4: Return(); Pop(6)

0x2a5: PushEmpty(object, object)
0x2a6: @ CreateInvItem(Stack[-1])
0x2a7: Pop(0)
0x2a8: @@ SetItemName(Stack[-4])
0x2a9: Pop(0)
0x2aa: PushEmpty(object, object, int)
0x2ab: Stack[-3] = Stack[-8]
0x2ac: Stack[-2] = Stack[-4]
0x2ad: Stack[-1] = Stack[-6]
0x2ae: Call2 0x292

0x2af: Pop(3)
0x2b0: Return(); Pop(2)

0x2b1: Stack[-1] = 0
0x2b2: PushEmpty(int, bool, int, bool)
0x2b3: @ GetInvItemByName(Stack[-2], Stack[-5])
0x2b4: Pop(0)
0x2b5: @@ HasItem(Stack[-2], Stack[-1])
0x2b6: Pop(0)
0x2b7: Stack[-7] = Stack[-1]
0x2b8: Return(); Pop(4)

0x2b9: Stack[-1] = (int) 521048
0x2ba: Return(); Pop(0)

0x2bb: Stack[-1] = (int) 521047
0x2bc: Return(); Pop(0)

0x2bd: Stack[-1] = "ui/NPC_Citizen2.png"
0x2be: Return(); Pop(0)

0x2bf: Stack[-1] = "ui/NPC_Citizen2_b.png"
0x2c0: Return(); Pop(0)

0x2c1: Stack[-1] = (bool) 0
0x2c2: Return(); Pop(0)

0x2c3: PushEmpty(string, string)
0x2c4: Stack[-1] = "idle"
0x2c5: Push(Stack[-3])
0x2c6: IF (Stack[-1] == 0) GOTO 0x2c8; Pop(1)

0x2c7: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x2c8: Stack[-4] = Stack[-1]
0x2c9: Return(); Pop(2)

0x2ca: PushEmpty(int, bool, int, bool)
0x2cb: Stack[-2] = (int) 0
0x2cc: Push("all")
0x2cd: PushEmpty(string, int)
0x2ce: Stack[-1] = Stack[-5]
0x2cf: Call2 0x2c3

0x2d0: Pop(1)
0x2d1: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2d2: Pop(2)
0x2d3: Pop(0); Push((bool) Stack[-1] == 0)
0x2d4: IF (Stack[-1] == 0) GOTO 0x2d6; Pop(1)

0x2d5: GOTO 0x2d9

0x2d6: Push((int) 1)
0x2d7: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2d8: GOTO 0x2cc

0x2d9: Stack[-5] = Stack[-2]
0x2da: Return(); Pop(4)

0x2db: PushEmpty()
0x2dc: Push("k7q02")
0x2dd: Push((int) 2)
0x2de: @ SetVariable(Stack[-2], Stack[-1])
0x2df: Pop(2)
0x2e0: PushEmpty()
0x2e1: Call2 0x312

0x2e2: Pop(0)
0x2e3: Return(); Pop(0)

0x2e4: PushEmpty()
0x2e5: Push("white plet 10 is given")
0x2e6: @ Trace(Stack[-1])
0x2e7: Pop(1)
0x2e8: PushEmpty(object, string, int)
0x2e9: Stack[-3] = Stack[-5]
0x2ea: Stack[-2] = "grass_white_plet"
0x2eb: Stack[-1] = (int) 10
0x2ec: Call2 0x2a5

0x2ed: Pop(3)
0x2ee: Return(); Pop(0)

0x2ef: PushEmpty()
0x2f0: Push("playsound")
0x2f1: Push("giveitem")
0x2f2: @ TriggerWorld(Stack[-2], Stack[-1])
0x2f3: Pop(2)
0x2f4: Return(); Pop(0)

0x2f5: PushEmpty(int, int)
0x2f6: Push("Samopal")
0x2f7: Push((int) 1)
0x2f8: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0x2f9: Pop(2)
0x2fa: Return(); Pop(2)

0x2fb: PushEmpty()
0x2fc: PushEmpty(int, string)
0x2fd: Stack[-1] = "k7q02"
0x2fe: Call2 0x281

0x2ff: Pop(1)
0x300: Push((int) 1)
0x301: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x302: IF (Stack[-1] == 0) GOTO 0x305; Pop(1)

0x303: Stack[-2] = (bool) 1
0x304: Return(); Pop(0)

0x305: Stack[-2] = (bool) 0
0x306: Return(); Pop(0)

0x307: PushEmpty()
0x308: PushEmpty(bool, object, string)
0x309: Stack[-2] = Stack[-4]
0x30a: Stack[-1] = "Samopal"
0x30b: Call2 0x2b2

0x30c: Pop(2)
0x30d: IF (Stack[-1] == 0) GOTO 0x310; Pop(1)

0x30e: Stack[-2] = (bool) 1
0x30f: Return(); Pop(0)

0x310: Stack[-2] = (bool) 0
0x311: Return(); Pop(0)

0x312: PushEmpty(object, object)
0x313: Push((int) 432)
0x314: Push((int) 2)
0x315: Push((int) 526370)
0x316: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x317: Pop(3)
0x318: PushEmpty(bool, object, int)
0x319: Stack[-2] = Stack[-4]
0x31a: Stack[-1] = (int) 430
0x31b: Call2 0x32c

0x31c: Pop(3)
0x31d: Return(); Pop(2)

0x31e: Stack[-1] = 0
0x31f: PushEmpty(object, object)
0x320: @ GetDiaryRoot(Stack[-1])
0x321: Pop(0)
0x322: Pop(0); Push((bool) Stack[-1] == 0)
0x323: IF (Stack[-1] == 0) GOTO 0x329; Pop(1)

0x324: Push("Can't retrieve diary root")
0x325: @ Trace(Stack[-1])
0x326: Pop(1)
0x327: Stack[-3] = (bool) 0
0x328: Return(); Pop(2)

0x329: Stack[-3] = Stack[-1]
0x32a: Return(); Pop(2)

0x32b: Stack[-1] = 0
0x32c: PushEmpty(object, object, int, object, object, int)
0x32d: PushEmpty(object)
0x32e: Call2 0x31f

0x32f: Stack[-4] = Stack[-1]
0x330: Pop(1)
0x331: @@ Find(Stack[-7], Stack[-2])
0x332: Pop(0)
0x333: Pop(0); Push((bool) Stack[-2] == 0)
0x334: IF (Stack[-1] == 0) GOTO 0x33b; Pop(1)

0x335: Push("Can't find diary parent with id: ")
0x336: Pop(1); Push(Stack[-1] + Stack[-8]);
0x337: @ Trace(Stack[-1])
0x338: Pop(1)
0x339: Stack[-9] = (bool) 0
0x33a: Return(); Pop(6)

0x33b: @@ AddChild(Stack[-8])
0x33c: Pop(0)
0x33d: Push((int) 7)
0x33e: @ SendWorldWndMessage(Stack[-1])
0x33f: Pop(1)
0x340: @@ GetCategory(Stack[-1])
0x341: Pop(0)
0x342: @ SetDiarySection(Stack[-1])
0x343: Pop(0)
0x344: Stack[-9] = (bool) 0
0x345: Return(); Pop(6)

0x346: Stack[-2] = 0
0x347: Stack[-3] = 0
0x348: PushEmpty(int, int)
0x349: Push("branch")
0x34a: @ GetVariable(Stack[-1], Stack[-2])
0x34b: Pop(1)
0x34c: Push((int) 0)
0x34d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x34e: IF (Stack[-1] == 0) GOTO 0x352; Pop(1)

0x34f: Stack[-3] = (int) 1
0x350: Return(); Pop(2)

0x351: GOTO 0x357

0x352: Push((int) 1)
0x353: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x354: IF (Stack[-1] == 0) GOTO 0x357; Pop(1)

0x355: Stack[-3] = (int) 2
0x356: Return(); Pop(2)

0x357: Stack[-3] = (int) 3
0x358: Return(); Pop(2)

