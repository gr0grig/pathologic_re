GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	cleanup
	player
	head
	all
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
	idle
	GetPosition
	GetEyesHeight
	Can't find lsh animation : 
	add
	GetItemID
	Category
	AddItem
	DropItems
	SetItemName
	ui/NPC_Morlok.png
	ui/NPC_Morlok_b.png
	avroks blood is given
	avroks_blood
	b10q04Spi4kaTalk
	b10q04MorlokGotoSpi4ka
	pt_map_spi4ka
	AddMark
	oob10MorlokSpi4ka1
	playsound
	giveitem
	ShowMap
	b10q04NotkinTalk
	b10q04MishkaTalk
	b10q04LaskaTalk
	b10q04
	b10q04MorlokTalk
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	Can't find main outdoor scene
	GetMap
	GetLocator
	Warning: outdoor scene locator 
	 doesnt exist
	Can't find map
	SetMapParams
	branch

Import:
	rand (2 args)
	Sleep (2 args)
	RemoveActor (1 args)
	FindActor (2 args)
	SetTimer (2 args)
	KillTimer (1 args)
	UnlookAsync (1 args)
	WaitForAnimEnd (0 args)
	irand (2 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (1 args)
	ResetAAS (0 args)
	StopAnimation (0 args)
	StopGroup0 (0 args)
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	sync (0 args)
	StopDialog (1 args)
	lshWaitForAnimEnd (0 args)
	lshStopAnimation (0 args)
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
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemProperty (3 args)
	CreateInvItem (1 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	SetVariable (2 args)
	TriggerWorld (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (int, int, bool, bool, object, bool, bool) Params = 0
		EVENT_0 Op = 0x6 Vars = (object)
		EVENT_26 Op = 0x35 Vars = (string)
		EVENT_6 Op = 0x3d Vars = ()
		EVENT_7 Op = 0x7e Vars = (int)
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1d4 Vars = (int, int)


0x0: PushEmpty(float, float)
0x1: Stack[-2] = (int) 300
0x2: Stack[-1] = (int) 100
0x3: Call2 0xf

0x4: Pop(2)
0x5: Return(); Pop(0)

0x6: PushEmpty()
0x7: PushEmpty()
0x8: Call2 0x95

0x9: Pop(0)
0xa: PushEmpty(object)
0xb: Stack[-1] = Stack[-2]
0xc: Call2 0x4b7

0xd: Pop(1)
0xe: Return(); Pop(0)

0xf: PushEmpty(float, bool, float, bool)
0x10: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x11: Push((int) 3)
0x12: @ rand(Stack[-3], Stack[-1])
0x13: Pop(1)
0x14: Push((int) 3)
0x15: Pop(1); Push(Stack[-3] + Stack[-1]);
0x16: @ Sleep(Stack[-1], Stack[-2])
0x17: Pop(1)
0x18: Stack[6 + Tasks[-1].StackPointer] = (bool)1
0x19: PushEmpty(float, float)
0x1a: Stack[-2] = Stack[-8]
0x1b: Stack[-1] = Stack[-7]
0x1c: Call2 0x54

0x1d: Pop(2)
0x1e: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x1f: GOTO 0x11

0x20: Return(); Pop(4)

0x21: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x22: PushEmpty(bool)
0x23: Stack[-1] = (bool) 0
0x24: PushEmpty(bool)
0x25: Call2 0x2a2

0x26: Pop(0)
0x27: Pop(1); Push((bool) Stack[-1] == 0)
0x28: IF (Stack[-1] == 0) GOTO 0x2e; Pop(1)

0x29: PushEmpty(bool)
0x2a: Call2 0x52

0x2b: Pop(0)
0x2c: IF (Stack[-1] == 0) GOTO 0x2e; Pop(1)

0x2d: Stack[-1] = (bool) 1
0x2e: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x2f: PushEmpty(object)
0x30: Call2 0x32f

0x31: Pop(0)
0x32: @ RemoveActor(Stack[-1])
0x33: Pop(1)
0x34: Return(); Pop(0)

0x35: PushEmpty()
0x36: Push("cleanup")
0x37: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x38: IF (Stack[-1] == 0) GOTO 0x3c; Pop(1)

0x39: PushEmpty()
0x3a: Call2 0x21

0x3b: Pop(0)
0x3c: Return(); Pop(0)

0x3d: Push( Stack[6 + Tasks[-1].StackPointer] )
0x3e: IF (Stack[-1] == 0) GOTO 0x42; Pop(1)

0x3f: PushEmpty()
0x40: Call2 0x95

0x41: Pop(0)
0x42: PushEmpty(bool)
0x43: Stack[-1] = (bool) 0
0x44: Push( Stack[5 + Tasks[-1].StackPointer] )
0x45: IF (Stack[-1] == 0) GOTO 0x4b; Pop(1)

0x46: PushEmpty(bool)
0x47: Call2 0x52

0x48: Pop(0)
0x49: IF (Stack[-1] == 0) GOTO 0x4b; Pop(1)

0x4a: Stack[-1] = (bool) 1
0x4b: IF (Stack[-1] == 0) GOTO 0x51; Pop(1)

0x4c: PushEmpty(object)
0x4d: Call2 0x32f

0x4e: Pop(0)
0x4f: @ RemoveActor(Stack[-1])
0x50: Pop(1)
0x51: Return(); Pop(0)

0x52: Stack[-1] = (bool) 1
0x53: Return(); Pop(0)

0x54: PushEmpty()
0x55: PushEmpty(bool)
0x56: Call2 0x2a2

0x57: Pop(0)
0x58: Pop(1); Push((bool) Stack[-1] == 0)
0x59: IF (Stack[-1] == 0) GOTO 0x5b; Pop(1)

0x5a: Return(); Pop(0)

0x5b: Push("player")
0x5c: @ FindActor(Stack[-4], Stack[-1])
0x5d: Pop(1)
0x5e: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x5f: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x60: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x61: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x62: Push((int) 10)
0x63: Push((float)1.0)
0x64: @ SetTimer(Stack[-2], Stack[-1])
0x65: Pop(2)
0x66: PushEmpty()
0x67: Call2 0xa3

0x68: Pop(0)
0x69: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x6a: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x6b: Push((int) 10)
0x6c: @ KillTimer(Stack[-1])
0x6d: Pop(1)
0x6e: Return(); Pop(0)

0x6f: PushEmpty(float, float)
0x70: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x71: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x72: Stack[-3] = (bool) 0
0x73: Return(); Pop(2)

0x74: PushEmpty(float, object)
0x75: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x76: Call2 0x29a

0x77: Pop(1)
0x78: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x79: Push( Stack[2 + Tasks[-1].StackPointer] )
0x7a: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x7b: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x7c: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x7d: Return(); Pop(2)

0x7e: PushEmpty()
0x7f: Push((int) 10)
0x80: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x81: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x82: PushEmpty(bool)
0x83: Call2 0x6f

0x84: Pop(0)
0x85: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x86: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x87: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x88: PushEmpty(object)
0x89: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x8a: Call2 0x31d

0x8b: Pop(1)
0x8c: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x8d: GOTO 0x94

0x8e: Push( Stack[2 + Tasks[-1].StackPointer] )
0x8f: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x90: Push("head")
0x91: @ UnlookAsync(Stack[-1])
0x92: Pop(1)
0x93: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x94: Return(); Pop(0)

0x95: PushEmpty()
0x96: Call2 0xf4

0x97: Pop(0)
0x98: Push((int) 10)
0x99: @ KillTimer(Stack[-1])
0x9a: Pop(1)
0x9b: Push( Stack[2 + Tasks[-1].StackPointer] )
0x9c: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0x9d: Push("head")
0x9e: @ UnlookAsync(Stack[-1])
0x9f: Pop(1)
0xa0: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xa1: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xa2: Return(); Pop(0)

0xa3: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0xa4: @ WaitForAnimEnd()
0xa5: Pop(0)
0xa6: PushEmpty(bool)
0xa7: Call2 0x2a2

0xa8: Pop(0)
0xa9: Pop(1); Push((bool) Stack[-1] == 0)
0xaa: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xab: Return(); Pop(14)

0xac: PushEmpty(int)
0xad: Call2 0x37c

0xae: Stack[-8] = Stack[-1]
0xaf: Pop(1)
0xb0: Stack[-6] = (int) 0
0xb1: PushEmpty(bool)
0xb2: Stack[-1] = (bool) 0
0xb3: Push((int) 5)
0xb4: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0xb5: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xb6: PushEmpty(bool)
0xb7: Call2 0x2a2

0xb8: Pop(0)
0xb9: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xba: Stack[-1] = (bool) 1
0xbb: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xbc: Push((int) 3)
0xbd: @ irand(Stack[-6], Stack[-1])
0xbe: Pop(1)
0xbf: Push((int) 0)
0xc0: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xc1: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xc2: Push(Stack[-7])
0xc3: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xc4: @ irand(Stack[-4], Stack[-7])
0xc5: Pop(0)
0xc6: Push("all")
0xc7: PushEmpty(string, int)
0xc8: Stack[-1] = Stack[-7]
0xc9: Call2 0x375

0xca: Pop(1)
0xcb: @ PlayAnimation(Stack[-2], Stack[-1])
0xcc: Pop(2)
0xcd: @ WaitForAnimEnd(Stack[-3])
0xce: Pop(0)
0xcf: Pop(0); Push((bool) Stack[-3] == 0)
0xd0: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xd1: GOTO 0xef

0xd2: GOTO 0xe4

0xd3: Push((int) 1)
0xd4: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xd5: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xd6: Push((int) 4)
0xd7: @ rand(Stack[-3], Stack[-1])
0xd8: Pop(1)
0xd9: Push((int) 1)
0xda: Pop(1); Push(Stack[-3] + Stack[-1]);
0xdb: @ Sleep(Stack[-1], Stack[-2])
0xdc: Pop(1)
0xdd: Pop(0); Push((bool) Stack[-1] == 0)
0xde: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xdf: GOTO 0xef

0xe0: GOTO 0xe4

0xe1: Push(Stack[-6])
0xe2: IF (Stack[-1] == 0) GOTO 0xe4; Pop(1)

0xe3: GOTO 0xef

0xe4: PushEmpty(bool)
0xe5: Call2 0xf2

0xe6: Pop(0)
0xe7: Pop(1); Push((bool) Stack[-1] == 0)
0xe8: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xe9: GOTO 0xef

0xea: @ ResetAAS()
0xeb: Pop(0)
0xec: Push((int) 1)
0xed: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0xee: GOTO 0xb1

0xef: @ ResetAAS()
0xf0: Pop(0)
0xf1: Return(); Pop(14)

0xf2: Stack[-1] = (bool) 1
0xf3: Return(); Pop(0)

0xf4: @ StopAnimation()
0xf5: Pop(0)
0xf6: @ StopGroup0()
0xf7: Pop(0)
0xf8: Return(); Pop(0)

0xf9: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xfa: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xfb: PushEmpty(bool, object, float)
0xfc: Stack[-2] = Stack[-12]
0xfd: Stack[-1] = (float) 110.0
0xfe: Call2 0x2a7

0xff: Pop(2)
0x100: Pop(1); Push((bool) Stack[-1] == 0)
0x101: IF (Stack[-1] == 0) GOTO 0x104; Pop(1)

0x102: Stack[-10] = (int) -2
0x103: Return(); Pop(8)

0x104: @ CreateDialog(Stack[-4])
0x105: Pop(0)
0x106: PushEmpty(int)
0x107: Call2 0x38f

0x108: Pop(0)
0x109: @@ SetNPCName(Stack[-1])
0x10a: Pop(1)
0x10b: PushEmpty(int)
0x10c: Call2 0x38d

0x10d: Pop(0)
0x10e: @@ SetNPCDescription(Stack[-1])
0x10f: Pop(1)
0x110: PushEmpty(string)
0x111: Call2 0x391

0x112: Pop(0)
0x113: @@ SetPhoto(Stack[-1])
0x114: Pop(1)
0x115: PushEmpty(string)
0x116: Call2 0x393

0x117: Pop(0)
0x118: @@ SetPhoto2(Stack[-1])
0x119: Pop(1)
0x11a: PushEmpty(int)
0x11b: Call2 0x4a6

0x11c: Pop(0)
0x11d: @@ SetPlayerName(Stack[-1])
0x11e: Pop(1)
0x11f: Stack[-2] = (int) -1
0x120: @ IsOverrideActive(Stack[-3])
0x121: Pop(0)
0x122: Push(Stack[-3])
0x123: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0x124: Stack[-10] = (int) -2
0x125: Return(); Pop(8)

0x126: @ DoDialog(Stack[-4])
0x127: Pop(0)
0x128: PushEmpty(object, object)
0x129: Stack[-2] = Stack[-11]
0x12a: Stack[-1] = Stack[-6]
0x12b: Push(-2, 4); TaskCall(2)
0x12c: Call2 0x143

0x12d: Pop(-2, 4); TaskReturn
0x12e: Pop(2)
0x12f: @@ IsDialogEnd(Stack[-1])
0x130: Pop(0)
0x131: Pop(0); Push((bool) Stack[-1] == 0)
0x132: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0x133: @ sync()
0x134: Pop(0)
0x135: @@ IsDialogEnd(Stack[-1])
0x136: Pop(0)
0x137: GOTO 0x131

0x138: PushEmpty(object)
0x139: Stack[-1] = Stack[-10]
0x13a: Call2 0x2ec

0x13b: Pop(1)
0x13c: @ StopDialog(Stack[-4])
0x13d: Pop(0)
0x13e: @@ GetReturnValue(Stack[-2])
0x13f: Pop(0)
0x140: Stack[-10] = Stack[-2]
0x141: Return(); Pop(8)

0x142: Stack[-4] = 0
0x143: PushEmpty()
0x144: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x145: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x146: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x147: Push((int) 1)
0x148: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x149: PushEmpty(bool, object)
0x14a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x14b: Call2 0x432

0x14c: Pop(1)
0x14d: Pop(1); Push((bool) Stack[-1] == 0)
0x14e: IF (Stack[-1] == 0) GOTO 0x15e; Pop(1)

0x14f: PushEmpty(string)
0x150: Stack[-1] = "Neutral"
0x151: Call2 0x1be

0x152: Pop(1)
0x153: Push((int) 530545)
0x154: @@ SetMessage(Stack[-1])
0x155: Pop(1)
0x156: @@ ClearReplies()
0x157: Pop(0)
0x158: Push((int) 530546)
0x159: Push((int) -1)
0x15a: Push((int) 31893)
0x15b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15c: Pop(3)
0x15d: GOTO 0x1a0

0x15e: PushEmpty(bool, object)
0x15f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x160: Call2 0x426

0x161: Pop(1)
0x162: IF (Stack[-1] == 0) GOTO 0x172; Pop(1)

0x163: PushEmpty(string)
0x164: Stack[-1] = "Neutral"
0x165: Call2 0x1be

0x166: Pop(1)
0x167: Push((int) 530406)
0x168: @@ SetMessage(Stack[-1])
0x169: Pop(1)
0x16a: @@ ClearReplies()
0x16b: Pop(0)
0x16c: Push((int) 530407)
0x16d: Push((int) -1)
0x16e: Push((int) 31779)
0x16f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x170: Pop(3)
0x171: GOTO 0x1a0

0x172: PushEmpty(string)
0x173: Stack[-1] = "Neutral"
0x174: Call2 0x1be

0x175: Pop(1)
0x176: Push((int) 530408)
0x177: @@ SetMessage(Stack[-1])
0x178: Pop(1)
0x179: @@ ClearReplies()
0x17a: Pop(0)
0x17b: PushEmpty(bool)
0x17c: Stack[-1] = (bool) 0
0x17d: PushEmpty(bool)
0x17e: Stack[-1] = (bool) 0
0x17f: PushEmpty(bool, object)
0x180: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x181: Call2 0x402

0x182: Pop(1)
0x183: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x184: PushEmpty(bool, object)
0x185: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x186: Call2 0x41a

0x187: Pop(1)
0x188: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x189: Stack[-1] = (bool) 1
0x18a: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x18b: PushEmpty(bool, object)
0x18c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x18d: Call2 0x40e

0x18e: Pop(1)
0x18f: Pop(1); Push((bool) Stack[-1] == 0)
0x190: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x191: Stack[-1] = (bool) 1
0x192: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x193: Push((int) 530409)
0x194: Push((int) 31782)
0x195: Push((int) 31781)
0x196: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x197: Pop(3)
0x198: Push((int) 530414)
0x199: Push((int) -1)
0x19a: Push((int) 31786)
0x19b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19c: Pop(3)
0x19d: GOTO 0x1a0

0x19e: Return(); Pop(0)

0x19f: GOTO 0x147

0x1a0: PushEmpty(bool)
0x1a1: Call2 0x395

0x1a2: Pop(0)
0x1a3: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x1a4: @ lshWaitForAnimEnd()
0x1a5: Pop(0)
0x1a6: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1a7: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x1a8: GOTO 0x1ae

0x1a9: PushEmpty(string)
0x1aa: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x1ab: Call2 0x2fe

0x1ac: Pop(1)
0x1ad: GOTO 0x1a4

0x1ae: GOTO 0x1bd

0x1af: Push("all")
0x1b0: Push("idle")
0x1b1: @ PlayAnimation(Stack[-2], Stack[-1])
0x1b2: Pop(2)
0x1b3: @ WaitForAnimEnd()
0x1b4: Pop(0)
0x1b5: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1b6: IF (Stack[-1] == 0) GOTO 0x1b8; Pop(1)

0x1b7: GOTO 0x1bd

0x1b8: Push("all")
0x1b9: Push("idle")
0x1ba: @ PlayAnimation(Stack[-2], Stack[-1])
0x1bb: Pop(2)
0x1bc: GOTO 0x1b3

0x1bd: Return(); Pop(0)

0x1be: PushEmpty()
0x1bf: PushEmpty(bool)
0x1c0: Call2 0x395

0x1c1: Pop(0)
0x1c2: Pop(1); Push((bool) Stack[-1] == 0)
0x1c3: IF (Stack[-1] == 0) GOTO 0x1c5; Pop(1)

0x1c4: Return(); Pop(0)

0x1c5: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1c6: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1c7: Return(); Pop(0)

0x1c8: PushEmpty(string, bool)
0x1c9: Stack[-2] = Stack[-3]
0x1ca: Push("")
0x1cb: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1cc: IF (Stack[-1] == 0) GOTO 0x1cf; Pop(1)

0x1cd: Stack[-1] = (bool) 0
0x1ce: GOTO 0x1d0

0x1cf: Stack[-1] = (bool) 1
0x1d0: Call2 0x30e

0x1d1: Pop(2)
0x1d2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1d3: Return(); Pop(0)

0x1d4: PushEmpty()
0x1d5: Push((int) 1)
0x1d6: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x1d7: PushEmpty()
0x1d8: Call2 0x328

0x1d9: Pop(0)
0x1da: Push((int) 31779)
0x1db: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1dc: IF (Stack[-1] == 0) GOTO 0x1e7; Pop(1)

0x1dd: PushEmpty(object, object)
0x1de: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1df: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1e0: Call2 0x3a2

0x1e1: Pop(2)
0x1e2: PushEmpty(object, object)
0x1e3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1e4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1e5: Call2 0x3c5

0x1e6: Pop(2)
0x1e7: Push((int) 31781)
0x1e8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1e9: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x1ea: PushEmpty(object, object)
0x1eb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1ec: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ed: Call2 0x3b9

0x1ee: Pop(2)
0x1ef: Push((int) 31783)
0x1f0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1f1: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0x1f2: PushEmpty(object, object)
0x1f3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1f4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1f5: Call2 0x397

0x1f6: Pop(2)
0x1f7: PushEmpty(object, object)
0x1f8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1f9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1fa: Call2 0x3bf

0x1fb: Pop(2)
0x1fc: Push((int) 31785)
0x1fd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1fe: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x1ff: PushEmpty(object, object)
0x200: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x201: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x202: Call2 0x397

0x203: Pop(2)
0x204: PushEmpty(object, object)
0x205: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x206: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x207: Call2 0x3bf

0x208: Pop(2)
0x209: Push((int) 31892)
0x20a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x20b: IF (Stack[-1] == 0) GOTO 0x261; Pop(1)

0x20c: PushEmpty(bool, object)
0x20d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x20e: Call2 0x432

0x20f: Pop(1)
0x210: Pop(1); Push((bool) Stack[-1] == 0)
0x211: IF (Stack[-1] == 0) GOTO 0x221; Pop(1)

0x212: PushEmpty(string)
0x213: Stack[-1] = "Neutral"
0x214: Call2 0x1be

0x215: Pop(1)
0x216: Push((int) 530545)
0x217: @@ SetMessage(Stack[-1])
0x218: Pop(1)
0x219: @@ ClearReplies()
0x21a: Pop(0)
0x21b: Push((int) 530546)
0x21c: Push((int) -1)
0x21d: Push((int) 31893)
0x21e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21f: Pop(3)
0x220: Return(); Pop(0)

0x221: PushEmpty(bool, object)
0x222: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x223: Call2 0x426

0x224: Pop(1)
0x225: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x226: PushEmpty(string)
0x227: Stack[-1] = "Neutral"
0x228: Call2 0x1be

0x229: Pop(1)
0x22a: Push((int) 530406)
0x22b: @@ SetMessage(Stack[-1])
0x22c: Pop(1)
0x22d: @@ ClearReplies()
0x22e: Pop(0)
0x22f: Push((int) 530407)
0x230: Push((int) -1)
0x231: Push((int) 31779)
0x232: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x233: Pop(3)
0x234: Return(); Pop(0)

0x235: PushEmpty(string)
0x236: Stack[-1] = "Neutral"
0x237: Call2 0x1be

0x238: Pop(1)
0x239: Push((int) 530408)
0x23a: @@ SetMessage(Stack[-1])
0x23b: Pop(1)
0x23c: @@ ClearReplies()
0x23d: Pop(0)
0x23e: PushEmpty(bool)
0x23f: Stack[-1] = (bool) 0
0x240: PushEmpty(bool)
0x241: Stack[-1] = (bool) 0
0x242: PushEmpty(bool, object)
0x243: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x244: Call2 0x402

0x245: Pop(1)
0x246: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x247: PushEmpty(bool, object)
0x248: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x249: Call2 0x41a

0x24a: Pop(1)
0x24b: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x24c: Stack[-1] = (bool) 1
0x24d: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x24e: PushEmpty(bool, object)
0x24f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x250: Call2 0x40e

0x251: Pop(1)
0x252: Pop(1); Push((bool) Stack[-1] == 0)
0x253: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x254: Stack[-1] = (bool) 1
0x255: IF (Stack[-1] == 0) GOTO 0x25b; Pop(1)

0x256: Push((int) 530409)
0x257: Push((int) 31782)
0x258: Push((int) 31781)
0x259: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x25a: Pop(3)
0x25b: Push((int) 530414)
0x25c: Push((int) -1)
0x25d: Push((int) 31786)
0x25e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x25f: Pop(3)
0x260: Return(); Pop(0)

0x261: Push((int) 31782)
0x262: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x263: IF (Stack[-1] == 0) GOTO 0x28d; Pop(1)

0x264: PushEmpty(bool, object)
0x265: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x266: Call2 0x3d5

0x267: Pop(1)
0x268: IF (Stack[-1] == 0) GOTO 0x278; Pop(1)

0x269: PushEmpty(string)
0x26a: Stack[-1] = "Neutral"
0x26b: Call2 0x1be

0x26c: Pop(1)
0x26d: Push((int) 530410)
0x26e: @@ SetMessage(Stack[-1])
0x26f: Pop(1)
0x270: @@ ClearReplies()
0x271: Pop(0)
0x272: Push((int) 530411)
0x273: Push((int) -1)
0x274: Push((int) 31783)
0x275: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x276: Pop(3)
0x277: Return(); Pop(0)

0x278: PushEmpty(bool, object)
0x279: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x27a: Call2 0x3d5

0x27b: Pop(1)
0x27c: Pop(1); Push((bool) Stack[-1] == 0)
0x27d: IF (Stack[-1] == 0) GOTO 0x28d; Pop(1)

0x27e: PushEmpty(string)
0x27f: Stack[-1] = "Neutral"
0x280: Call2 0x1be

0x281: Pop(1)
0x282: Push((int) 530412)
0x283: @@ SetMessage(Stack[-1])
0x284: Pop(1)
0x285: @@ ClearReplies()
0x286: Pop(0)
0x287: Push((int) 530413)
0x288: Push((int) -1)
0x289: Push((int) 31785)
0x28a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x28b: Pop(3)
0x28c: Return(); Pop(0)

0x28d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x28e: PushEmpty(bool)
0x28f: Call2 0x395

0x290: Pop(0)
0x291: IF (Stack[-1] == 0) GOTO 0x295; Pop(1)

0x292: @ lshStopAnimation()
0x293: Pop(0)
0x294: GOTO 0x297

0x295: @ StopAnimation()
0x296: Pop(0)
0x297: Return(); Pop(0)

0x298: GOTO 0x1d5

0x299: Return(); Pop(0)

0x29a: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x29b: @ GetPosition(Stack[-3])
0x29c: Pop(0)
0x29d: @@ GetPosition(Stack[-2])
0x29e: Pop(0)
0x29f: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x2a0: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x2a1: Return(); Pop(6)

0x2a2: PushEmpty(bool, bool)
0x2a3: @ IsLoaded(Stack[-1])
0x2a4: Pop(0)
0x2a5: Stack[-3] = Stack[-1]
0x2a6: Return(); Pop(2)

0x2a7: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x2a8: @@ GetPosition(Stack[-8])
0x2a9: Pop(0)
0x2aa: @@ GetEyesHeight(Stack[-9])
0x2ab: Pop(0)
0x2ac: Push(CvectorIndex(Stack[-8], 1))
0x2ad: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2ae: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2af: @ GetPosition(Stack[-7])
0x2b0: Pop(0)
0x2b1: @ GetEyesHeight(Stack[-9])
0x2b2: Pop(0)
0x2b3: Push(CvectorIndex(Stack[-7], 1))
0x2b4: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2b5: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2b6: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2b7: Push(CvectorIndex(Stack[-6], 1))
0x2b8: Stack[-1] = (int) 0
0x2b9: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2ba: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2bb: Pop(1); Push(Sqrt(Stack[-1]))
0x2bc: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2bd: Stack[-5] = -Stack[-6]; Pop(0);
0x2be: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2bf: PushEmpty(cvector, cvector)
0x2c0: Push(CVector(0.0, 1.0, 0.0))
0x2c1: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2c2: Call2 0x335

0x2c3: Pop(1)
0x2c4: Push((int) 25)
0x2c5: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2c6: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2c7: Push(CVector(0.0, 10.0, 0.0))
0x2c8: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2c9: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2ca: @ IsOverrideActive(Stack[-2])
0x2cb: Pop(0)
0x2cc: Push(Stack[-2])
0x2cd: IF (Stack[-1] == 0) GOTO 0x2d0; Pop(1)

0x2ce: Stack[-21] = (bool) 0
0x2cf: Return(); Pop(18)

0x2d0: @ StopWorld()
0x2d1: Pop(0)
0x2d2: Push((bool) 1)
0x2d3: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x2d4: Pop(1)
0x2d5: Push(CvectorIndex(Stack[-4], 0))
0x2d6: Push(CvectorIndex(Stack[-5], 2))
0x2d7: @ Rotate(Stack[-2], Stack[-1])
0x2d8: Pop(2)
0x2d9: PushEmpty(bool)
0x2da: Call2 0x395

0x2db: Pop(0)
0x2dc: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x2dd: GOTO 0x2e6

0x2de: Push("head")
0x2df: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2e0: Pop(1)
0x2e1: Push(Stack[-1])
0x2e2: IF (Stack[-1] == 0) GOTO 0x2e6; Pop(1)

0x2e3: Push("head")
0x2e4: @ LookAsyncCamera(Stack[-1])
0x2e5: Pop(1)
0x2e6: @ CameraWaitForPlayFinish()
0x2e7: Pop(0)
0x2e8: @ ResumeWorld()
0x2e9: Pop(0)
0x2ea: Stack[-21] = (bool) 1
0x2eb: Return(); Pop(18)

0x2ec: PushEmpty(bool, bool)
0x2ed: Push((bool) 1)
0x2ee: @ CameraSwitchToNormal(Stack[-1])
0x2ef: Pop(1)
0x2f0: PushEmpty(bool)
0x2f1: Call2 0x395

0x2f2: Pop(0)
0x2f3: IF (Stack[-1] == 0) GOTO 0x2f5; Pop(1)

0x2f4: GOTO 0x2fd

0x2f5: Push("head")
0x2f6: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2f7: Pop(1)
0x2f8: Push(Stack[-1])
0x2f9: IF (Stack[-1] == 0) GOTO 0x2fd; Pop(1)

0x2fa: Push("head")
0x2fb: @ UnlookAsync(Stack[-1])
0x2fc: Pop(1)
0x2fd: Return(); Pop(2)

0x2fe: PushEmpty(bool, float, float, bool, float, float)
0x2ff: @ lshHasAnimation(Stack[-3], Stack[-7])
0x300: Pop(0)
0x301: Push(Stack[-3])
0x302: IF (Stack[-1] == 0) GOTO 0x309; Pop(1)

0x303: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x304: Pop(0)
0x305: Push((bool) 0)
0x306: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x307: Pop(1)
0x308: GOTO 0x30d

0x309: Push("Can't find lsh animation : ")
0x30a: Pop(1); Push(Stack[-1] + Stack[-8]);
0x30b: @ Trace(Stack[-1])
0x30c: Pop(1)
0x30d: Return(); Pop(6)

0x30e: PushEmpty(bool, float, float, bool, float, float)
0x30f: @ lshHasAnimation(Stack[-3], Stack[-8])
0x310: Pop(0)
0x311: Push(Stack[-3])
0x312: IF (Stack[-1] == 0) GOTO 0x318; Pop(1)

0x313: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x314: Pop(0)
0x315: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x316: Pop(0)
0x317: GOTO 0x31c

0x318: Push("Can't find lsh animation : ")
0x319: Pop(1); Push(Stack[-1] + Stack[-9]);
0x31a: @ Trace(Stack[-1])
0x31b: Pop(1)
0x31c: Return(); Pop(6)

0x31d: PushEmpty(float, cvector, float, cvector)
0x31e: @@ GetEyesHeight(Stack[-2])
0x31f: Pop(0)
0x320: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x321: Push(CvectorIndex(Stack[-1], 1))
0x322: Stack[-1] = Stack[-3]
0x323: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x324: Push("head")
0x325: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x326: Pop(1)
0x327: Return(); Pop(4)

0x328: PushEmpty(bool)
0x329: Call2 0x395

0x32a: Pop(0)
0x32b: IF (Stack[-1] == 0) GOTO 0x32e; Pop(1)

0x32c: @ lshStopSpeech()
0x32d: Pop(0)
0x32e: Return(); Pop(0)

0x32f: PushEmpty(object, object)
0x330: @ self(Stack[-1])
0x331: Pop(0)
0x332: Stack[-3] = Stack[-1]
0x333: Return(); Pop(2)

0x334: Stack[-1] = 0
0x335: PushEmpty(float, float)
0x336: Pop(0); Push(Stack[-3] | Stack[-3]);
0x337: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x338: Push((float)0.0)
0x339: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x33a: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x33b: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x33c: Return(); Pop(2)

0x33d: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x33e: Return(); Pop(2)

0x33f: PushEmpty(int, int)
0x340: @ GetVariable(Stack[-3], Stack[-1])
0x341: Pop(0)
0x342: Stack[-4] = Stack[-1]
0x343: Return(); Pop(2)

0x344: PushEmpty(object, object)
0x345: @ CreateIntVector(Stack[-1])
0x346: Pop(0)
0x347: @@ add(Stack[-4])
0x348: Pop(0)
0x349: @@ add(Stack[-3])
0x34a: Pop(0)
0x34b: Push((int) 3)
0x34c: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x34d: Pop(1)
0x34e: Return(); Pop(2)

0x34f: Stack[-1] = 0
0x350: PushEmpty(int, int, bool, int, int, bool)
0x351: @@ GetItemID(Stack[-3])
0x352: Pop(0)
0x353: Push("Category")
0x354: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x355: Pop(1)
0x356: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x357: Pop(0)
0x358: Pop(0); Push((bool) Stack[-1] == 0)
0x359: IF (Stack[-1] == 0) GOTO 0x35d; Pop(1)

0x35a: @@ DropItems(Stack[-8], Stack[-7])
0x35b: Pop(0)
0x35c: GOTO 0x362

0x35d: PushEmpty(int, int)
0x35e: Stack[-2] = Stack[-5]
0x35f: Stack[-1] = Stack[-9]
0x360: Call2 0x344

0x361: Pop(2)
0x362: Return(); Pop(6)

0x363: PushEmpty(object, object)
0x364: @ CreateInvItem(Stack[-1])
0x365: Pop(0)
0x366: @@ SetItemName(Stack[-4])
0x367: Pop(0)
0x368: PushEmpty(object, object, int)
0x369: Stack[-3] = Stack[-8]
0x36a: Stack[-2] = Stack[-4]
0x36b: Stack[-1] = Stack[-6]
0x36c: Call2 0x350

0x36d: Pop(3)
0x36e: Return(); Pop(2)

0x36f: Stack[-1] = 0
0x370: PushEmpty(float, float)
0x371: @ GetGameTime(Stack[-1])
0x372: Pop(0)
0x373: Stack[-3] = Stack[-1]
0x374: Return(); Pop(2)

0x375: PushEmpty(string, string)
0x376: Stack[-1] = "idle"
0x377: Push(Stack[-3])
0x378: IF (Stack[-1] == 0) GOTO 0x37a; Pop(1)

0x379: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x37a: Stack[-4] = Stack[-1]
0x37b: Return(); Pop(2)

0x37c: PushEmpty(int, bool, int, bool)
0x37d: Stack[-2] = (int) 0
0x37e: Push("all")
0x37f: PushEmpty(string, int)
0x380: Stack[-1] = Stack[-5]
0x381: Call2 0x375

0x382: Pop(1)
0x383: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x384: Pop(2)
0x385: Pop(0); Push((bool) Stack[-1] == 0)
0x386: IF (Stack[-1] == 0) GOTO 0x388; Pop(1)

0x387: GOTO 0x38b

0x388: Push((int) 1)
0x389: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x38a: GOTO 0x37e

0x38b: Stack[-5] = Stack[-2]
0x38c: Return(); Pop(4)

0x38d: Stack[-1] = (int) 521048
0x38e: Return(); Pop(0)

0x38f: Stack[-1] = (int) 521047
0x390: Return(); Pop(0)

0x391: Stack[-1] = "ui/NPC_Morlok.png"
0x392: Return(); Pop(0)

0x393: Stack[-1] = "ui/NPC_Morlok_b.png"
0x394: Return(); Pop(0)

0x395: Stack[-1] = (bool) 0
0x396: Return(); Pop(0)

0x397: PushEmpty()
0x398: Push("avroks blood is given")
0x399: @ Trace(Stack[-1])
0x39a: Pop(1)
0x39b: PushEmpty(object, string, int)
0x39c: Stack[-3] = Stack[-5]
0x39d: Stack[-2] = "avroks_blood"
0x39e: Stack[-1] = (int) 1
0x39f: Call2 0x363

0x3a0: Pop(3)
0x3a1: Return(); Pop(0)

0x3a2: PushEmpty(object, object)
0x3a3: Push("b10q04Spi4kaTalk")
0x3a4: Push((int) 1)
0x3a5: @ SetVariable(Stack[-2], Stack[-1])
0x3a6: Pop(2)
0x3a7: PushEmpty(object)
0x3a8: Call2 0x474

0x3a9: Stack[-2] = Stack[-1]
0x3aa: Pop(1)
0x3ab: Push("b10q04MorlokGotoSpi4ka")
0x3ac: Push("pt_map_spi4ka")
0x3ad: Push((int) 0)
0x3ae: Push((int) 530552)
0x3af: PushEmpty(float)
0x3b0: Call2 0x370

0x3b1: Pop(0)
0x3b2: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x3b3: Pop(5)
0x3b4: PushEmpty()
0x3b5: Call2 0x43e

0x3b6: Pop(0)
0x3b7: Return(); Pop(2)

0x3b8: Stack[-1] = 0
0x3b9: PushEmpty()
0x3ba: Push("oob10MorlokSpi4ka1")
0x3bb: Push((int) 1)
0x3bc: @ SetVariable(Stack[-2], Stack[-1])
0x3bd: Pop(2)
0x3be: Return(); Pop(0)

0x3bf: PushEmpty()
0x3c0: Push("playsound")
0x3c1: Push("giveitem")
0x3c2: @ TriggerWorld(Stack[-2], Stack[-1])
0x3c3: Pop(2)
0x3c4: Return(); Pop(0)

0x3c5: PushEmpty()
0x3c6: PushEmpty(object, string, float)
0x3c7: PushEmpty(object)
0x3c8: Call2 0x474

0x3c9: Stack[-4] = Stack[-1]
0x3ca: Pop(1)
0x3cb: Stack[-2] = "pt_map_spi4ka"
0x3cc: Stack[-1] = (int) 2
0x3cd: Call2 0x485

0x3ce: Pop(3)
0x3cf: PushEmpty(object)
0x3d0: Call2 0x474

0x3d1: Pop(0)
0x3d2: @@ ShowMap(Stack[-1])
0x3d3: Pop(1)
0x3d4: Return(); Pop(0)

0x3d5: PushEmpty()
0x3d6: PushEmpty(bool)
0x3d7: Stack[-1] = (bool) 0
0x3d8: PushEmpty(bool)
0x3d9: Stack[-1] = (bool) 0
0x3da: PushEmpty(bool)
0x3db: Stack[-1] = (bool) 0
0x3dc: PushEmpty(int, string)
0x3dd: Stack[-1] = "b10q04NotkinTalk"
0x3de: Call2 0x33f

0x3df: Pop(1)
0x3e0: Push((int) 9)
0x3e1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3e2: IF (Stack[-1] == 0) GOTO 0x3eb; Pop(1)

0x3e3: PushEmpty(int, string)
0x3e4: Stack[-1] = "b10q04Spi4kaTalk"
0x3e5: Call2 0x33f

0x3e6: Pop(1)
0x3e7: Push((int) 9)
0x3e8: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3e9: IF (Stack[-1] == 0) GOTO 0x3eb; Pop(1)

0x3ea: Stack[-1] = (bool) 1
0x3eb: IF (Stack[-1] == 0) GOTO 0x3f4; Pop(1)

0x3ec: PushEmpty(int, string)
0x3ed: Stack[-1] = "b10q04MishkaTalk"
0x3ee: Call2 0x33f

0x3ef: Pop(1)
0x3f0: Push((int) 9)
0x3f1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3f2: IF (Stack[-1] == 0) GOTO 0x3f4; Pop(1)

0x3f3: Stack[-1] = (bool) 1
0x3f4: IF (Stack[-1] == 0) GOTO 0x3fd; Pop(1)

0x3f5: PushEmpty(int, string)
0x3f6: Stack[-1] = "b10q04LaskaTalk"
0x3f7: Call2 0x33f

0x3f8: Pop(1)
0x3f9: Push((int) 9)
0x3fa: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3fb: IF (Stack[-1] == 0) GOTO 0x3fd; Pop(1)

0x3fc: Stack[-1] = (bool) 1
0x3fd: IF (Stack[-1] == 0) GOTO 0x400; Pop(1)

0x3fe: Stack[-2] = (bool) 1
0x3ff: Return(); Pop(0)

0x400: Stack[-2] = (bool) 0
0x401: Return(); Pop(0)

0x402: PushEmpty()
0x403: PushEmpty(int, string)
0x404: Stack[-1] = "b10q04Spi4kaTalk"
0x405: Call2 0x33f

0x406: Pop(1)
0x407: Push((int) 9)
0x408: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x409: IF (Stack[-1] == 0) GOTO 0x40c; Pop(1)

0x40a: Stack[-2] = (bool) 1
0x40b: Return(); Pop(0)

0x40c: Stack[-2] = (bool) 0
0x40d: Return(); Pop(0)

0x40e: PushEmpty()
0x40f: PushEmpty(int, string)
0x410: Stack[-1] = "b10q04"
0x411: Call2 0x33f

0x412: Pop(1)
0x413: Push((int) -1)
0x414: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x415: IF (Stack[-1] == 0) GOTO 0x418; Pop(1)

0x416: Stack[-2] = (bool) 1
0x417: Return(); Pop(0)

0x418: Stack[-2] = (bool) 0
0x419: Return(); Pop(0)

0x41a: PushEmpty()
0x41b: PushEmpty(int, string)
0x41c: Stack[-1] = "oob10MorlokSpi4ka1"
0x41d: Call2 0x33f

0x41e: Pop(1)
0x41f: Push((int) 0)
0x420: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x421: IF (Stack[-1] == 0) GOTO 0x424; Pop(1)

0x422: Stack[-2] = (bool) 1
0x423: Return(); Pop(0)

0x424: Stack[-2] = (bool) 0
0x425: Return(); Pop(0)

0x426: PushEmpty()
0x427: PushEmpty(int, string)
0x428: Stack[-1] = "b10q04Spi4kaTalk"
0x429: Call2 0x33f

0x42a: Pop(1)
0x42b: Push((int) 0)
0x42c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x42d: IF (Stack[-1] == 0) GOTO 0x430; Pop(1)

0x42e: Stack[-2] = (bool) 1
0x42f: Return(); Pop(0)

0x430: Stack[-2] = (bool) 0
0x431: Return(); Pop(0)

0x432: PushEmpty()
0x433: PushEmpty(int, string)
0x434: Stack[-1] = "b10q04MorlokTalk"
0x435: Call2 0x33f

0x436: Pop(1)
0x437: Push((int) 0)
0x438: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x439: IF (Stack[-1] == 0) GOTO 0x43c; Pop(1)

0x43a: Stack[-2] = (bool) 1
0x43b: Return(); Pop(0)

0x43c: Stack[-2] = (bool) 0
0x43d: Return(); Pop(0)

0x43e: PushEmpty(object, object)
0x43f: Push((int) 548)
0x440: Push((int) 2)
0x441: Push((int) 530439)
0x442: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x443: Pop(3)
0x444: PushEmpty(bool, object, int)
0x445: Stack[-2] = Stack[-4]
0x446: Stack[-1] = (int) 545
0x447: Call2 0x458

0x448: Pop(3)
0x449: Return(); Pop(2)

0x44a: Stack[-1] = 0
0x44b: PushEmpty(object, object)
0x44c: @ GetDiaryRoot(Stack[-1])
0x44d: Pop(0)
0x44e: Pop(0); Push((bool) Stack[-1] == 0)
0x44f: IF (Stack[-1] == 0) GOTO 0x455; Pop(1)

0x450: Push("Can't retrieve diary root")
0x451: @ Trace(Stack[-1])
0x452: Pop(1)
0x453: Stack[-3] = (bool) 0
0x454: Return(); Pop(2)

0x455: Stack[-3] = Stack[-1]
0x456: Return(); Pop(2)

0x457: Stack[-1] = 0
0x458: PushEmpty(object, object, int, object, object, int)
0x459: PushEmpty(object)
0x45a: Call2 0x44b

0x45b: Stack[-4] = Stack[-1]
0x45c: Pop(1)
0x45d: @@ Find(Stack[-7], Stack[-2])
0x45e: Pop(0)
0x45f: Pop(0); Push((bool) Stack[-2] == 0)
0x460: IF (Stack[-1] == 0) GOTO 0x467; Pop(1)

0x461: Push("Can't find diary parent with id: ")
0x462: Pop(1); Push(Stack[-1] + Stack[-8]);
0x463: @ Trace(Stack[-1])
0x464: Pop(1)
0x465: Stack[-9] = (bool) 0
0x466: Return(); Pop(6)

0x467: @@ AddChild(Stack[-8])
0x468: Pop(0)
0x469: Push((int) 7)
0x46a: @ SendWorldWndMessage(Stack[-1])
0x46b: Pop(1)
0x46c: @@ GetCategory(Stack[-1])
0x46d: Pop(0)
0x46e: @ SetDiarySection(Stack[-1])
0x46f: Pop(0)
0x470: Stack[-9] = (bool) 0
0x471: Return(); Pop(6)

0x472: Stack[-2] = 0
0x473: Stack[-3] = 0
0x474: PushEmpty(object, object, object, object)
0x475: @ GetMainOutdoorScene(Stack[-2])
0x476: Pop(0)
0x477: Pop(0); Push((bool) Stack[-2] == 0)
0x478: IF (Stack[-1] == 0) GOTO 0x47f; Pop(1)

0x479: Push("Can't find main outdoor scene")
0x47a: @ Trace(Stack[-1])
0x47b: Pop(1)
0x47c: Stack[-1] = 0
0x47d: Stack[-5] = Stack[-1]
0x47e: Return(); Pop(4)

0x47f: @@ GetMap(Stack[-1])
0x480: Pop(0)
0x481: Stack[-5] = Stack[-1]
0x482: Return(); Pop(4)

0x483: Stack[-1] = 0
0x484: Stack[-2] = 0
0x485: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x486: @ GetMainOutdoorScene(Stack[-2])
0x487: Pop(0)
0x488: Pop(0); Push((bool) Stack[-2] == 0)
0x489: IF (Stack[-1] == 0) GOTO 0x48e; Pop(1)

0x48a: Push("Can't find main outdoor scene")
0x48b: @ Trace(Stack[-1])
0x48c: Pop(1)
0x48d: Return(); Pop(8)

0x48e: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x48f: Pop(0)
0x490: Pop(0); Push((bool) Stack[-1] == 0)
0x491: IF (Stack[-1] == 0) GOTO 0x498; Pop(1)

0x492: Push("Warning: outdoor scene locator ")
0x493: Pop(1); Push(Stack[-1] + Stack[-11]);
0x494: Push(" doesnt exist")
0x495: Pop(2); Push(Stack[-2] + Stack[-1]);
0x496: @ Trace(Stack[-1])
0x497: Pop(1)
0x498: @@ GetMap(Stack[-11])
0x499: Pop(0)
0x49a: Pop(0); Push((bool) Stack[-11] == 0)
0x49b: IF (Stack[-1] == 0) GOTO 0x4a0; Pop(1)

0x49c: Push("Can't find map")
0x49d: @ Trace(Stack[-1])
0x49e: Pop(1)
0x49f: Return(); Pop(8)

0x4a0: Push(CvectorIndex(Stack[-4], 0))
0x4a1: Push(CvectorIndex(Stack[-5], 2))
0x4a2: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x4a3: Pop(2)
0x4a4: Return(); Pop(8)

0x4a5: Stack[-2] = 0
0x4a6: PushEmpty(int, int)
0x4a7: Push("branch")
0x4a8: @ GetVariable(Stack[-1], Stack[-2])
0x4a9: Pop(1)
0x4aa: Push((int) 0)
0x4ab: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4ac: IF (Stack[-1] == 0) GOTO 0x4b0; Pop(1)

0x4ad: Stack[-3] = (int) 1
0x4ae: Return(); Pop(2)

0x4af: GOTO 0x4b5

0x4b0: Push((int) 1)
0x4b1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4b2: IF (Stack[-1] == 0) GOTO 0x4b5; Pop(1)

0x4b3: Stack[-3] = (int) 2
0x4b4: Return(); Pop(2)

0x4b5: Stack[-3] = (int) 3
0x4b6: Return(); Pop(2)

0x4b7: PushEmpty()
0x4b8: PushEmpty(int, object)
0x4b9: Stack[-1] = Stack[-3]
0x4ba: Push(-2, 1); TaskCall(1)
0x4bb: Call2 0xf9

0x4bc: Pop(-2, 1); TaskReturn
0x4bd: Pop(2)
0x4be: Return(); Pop(0)

