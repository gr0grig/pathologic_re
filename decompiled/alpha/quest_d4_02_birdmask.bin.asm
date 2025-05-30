GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	SetNPCName
	SetPhoto
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	Neutral
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	GetPosition
	GetEyesHeight
	playing 
	start: 
	end: 
	GetItemID
	Category
	AddItem
	DropItems
	SetItemName
	playsound
	giveitem
	powder is given
	powder
	ood4BirdmaskHome1
	ood4BirdmaskHome2
	d4q02BirdmaskNearHome
	FindMark
	Remove
	d4q02MladVladGotoAJLSelf
	d4q02MladVladGotoAnna
	d4q02MladVladGotoJulia
	d4q02MladVladGotoLara
	quest_d4_02
	completed
	birdmask_talk
	d4q02_survived
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	player_diary
	GetCategory
	Can't find main outdoor scene
	GetMap
	player
	Adding diary entry
	ui/NPC_Black.png

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
	irand (2 args)
	WaitForAnimEnd (1 args)
	rand (2 args)
	Sleep (2 args)
	StopGroup0 (0 args)
	IsLoaded (1 args)
	GetPosition (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	Rotate (2 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	Trace (1 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (2 args)
	lshStopSpeech (0 args)
	GetVariable (2 args)
	GetInvItemProperty (3 args)
	CreateInvItem (1 args)
	FindActor (2 args)
	Trigger (2 args)
	HasAnimation (3 args)
	TriggerWorld (2 args)
	SetVariable (2 args)
	GetDiaryRoot (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)
	CreateDiaryEntry (4 args)

RunOp = 0x15f
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xbb Vars = (int, int)
	GTASK_2  Params = 0
		EVENT_0 Op = 0x167 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object)
0x3: Stack[-1] = Stack[-11]
0x4: Call 0x1c1

0x5: Pop(1)
0x6: Pop(1); Push((bool) Stack[-1] == 0)
0x7: IF (Stack[-1] == 0) GOTO 0xa; Pop(1)

0x8: Stack[-10] = (int) -2
0x9: Return(); Pop(8)

0xa: @ CreateDialog(Stack[-4])
0xb: Pop(0)
0xc: PushEmpty(int)
0xd: Call 0x34d

0xe: Pop(0)
0xf: @@ SetNPCName(Stack[-1])
0x10: Pop(1)
0x11: PushEmpty(string)
0x12: Call 0x34f

0x13: Pop(0)
0x14: @@ SetPhoto(Stack[-1])
0x15: Pop(1)
0x16: PushEmpty(int)
0x17: Call 0x31c

0x18: Pop(0)
0x19: @@ SetPlayerName(Stack[-1])
0x1a: Pop(1)
0x1b: Stack[-2] = (int) -1
0x1c: @ IsOverrideActive(Stack[-3])
0x1d: Pop(0)
0x1e: Push(Stack[-3])
0x1f: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x20: Stack[-10] = (int) -2
0x21: Return(); Pop(8)

0x22: @ DoDialog(Stack[-4])
0x23: Pop(0)
0x24: PushEmpty(object, object)
0x25: Stack[-2] = Stack[-11]
0x26: Stack[-1] = Stack[-6]
0x27: Push(-2, 4); TaskCall(1)
0x28: Call 0x3f

0x29: Pop(-2, 4); TaskReturn
0x2a: Pop(2)
0x2b: @@ IsDialogEnd(Stack[-1])
0x2c: Pop(0)
0x2d: Pop(0); Push((bool) Stack[-1] == 0)
0x2e: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x2f: @ sync()
0x30: Pop(0)
0x31: @@ IsDialogEnd(Stack[-1])
0x32: Pop(0)
0x33: GOTO 0x2d

0x34: PushEmpty(object)
0x35: Stack[-1] = Stack[-10]
0x36: Call 0x1f9

0x37: Pop(1)
0x38: @ StopDialog(Stack[-4])
0x39: Pop(0)
0x3a: @@ GetReturnValue(Stack[-2])
0x3b: Pop(0)
0x3c: Stack[-10] = Stack[-2]
0x3d: Return(); Pop(8)

0x3e: Stack[-4] = 0
0x3f: PushEmpty()
0x40: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x41: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x42: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x43: Push((int) 1)
0x44: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x45: PushEmpty(bool, object)
0x46: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x47: Call 0x2bd

0x48: Pop(1)
0x49: IF (Stack[-1] == 0) GOTO 0x59; Pop(1)

0x4a: PushEmpty(string)
0x4b: Stack[-1] = "Neutral"
0x4c: Call 0xab

0x4d: Pop(1)
0x4e: Push((int) 11843)
0x4f: @@ SetMessage(Stack[-1])
0x50: Pop(1)
0x51: @@ ClearReplies()
0x52: Pop(0)
0x53: Push((int) 11844)
0x54: Push((int) 13058)
0x55: Push((int) 13057)
0x56: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x57: Pop(3)
0x58: GOTO 0x8d

0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b: Call 0x2d5

0x5c: Pop(1)
0x5d: Pop(1); Push((bool) Stack[-1] == 0)
0x5e: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x5f: PushEmpty(string)
0x60: Stack[-1] = "Neutral"
0x61: Call 0xab

0x62: Pop(1)
0x63: Push((int) 11847)
0x64: @@ SetMessage(Stack[-1])
0x65: Pop(1)
0x66: @@ ClearReplies()
0x67: Pop(0)
0x68: Push((int) 11848)
0x69: Push((int) -1)
0x6a: Push((int) 13061)
0x6b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c: Pop(3)
0x6d: GOTO 0x8d

0x6e: PushEmpty(bool)
0x6f: Stack[-1] = (bool) 0
0x70: PushEmpty(bool, object)
0x71: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x72: Call 0x2c9

0x73: Pop(1)
0x74: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x75: PushEmpty(bool, object)
0x76: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x77: Call 0x2d5

0x78: Pop(1)
0x79: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x7a: Stack[-1] = (bool) 1
0x7b: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x7c: PushEmpty(string)
0x7d: Stack[-1] = "Neutral"
0x7e: Call 0xab

0x7f: Pop(1)
0x80: Push((int) 11849)
0x81: @@ SetMessage(Stack[-1])
0x82: Pop(1)
0x83: @@ ClearReplies()
0x84: Pop(0)
0x85: Push((int) 11850)
0x86: Push((int) 13064)
0x87: Push((int) 13063)
0x88: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x89: Pop(3)
0x8a: GOTO 0x8d

0x8b: Return(); Pop(0)

0x8c: GOTO 0x43

0x8d: PushEmpty(bool)
0x8e: Call 0x351

0x8f: Pop(0)
0x90: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x91: @ lshWaitForAnimEnd()
0x92: Pop(0)
0x93: Push( Stack[3 + Tasks[-1].StackPointer] )
0x94: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x95: GOTO 0x9b

0x96: PushEmpty(string)
0x97: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x98: Call 0x1fd

0x99: Pop(1)
0x9a: GOTO 0x91

0x9b: GOTO 0xaa

0x9c: Push("all")
0x9d: Push("idle")
0x9e: @ PlayAnimation(Stack[-2], Stack[-1])
0x9f: Pop(2)
0xa0: @ WaitForAnimEnd()
0xa1: Pop(0)
0xa2: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa3: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0xa4: GOTO 0xaa

0xa5: Push("all")
0xa6: Push("idle")
0xa7: @ PlayAnimation(Stack[-2], Stack[-1])
0xa8: Pop(2)
0xa9: GOTO 0xa0

0xaa: Return(); Pop(0)

0xab: PushEmpty()
0xac: PushEmpty(bool)
0xad: Call 0x351

0xae: Pop(0)
0xaf: Pop(1); Push((bool) Stack[-1] == 0)
0xb0: IF (Stack[-1] == 0) GOTO 0xb2; Pop(1)

0xb1: Return(); Pop(0)

0xb2: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xb3: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xb4: Return(); Pop(0)

0xb5: PushEmpty(string)
0xb6: Stack[-1] = Stack[-2]
0xb7: Call 0x1fd

0xb8: Pop(1)
0xb9: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xba: Return(); Pop(0)

0xbb: PushEmpty()
0xbc: Push((int) 1)
0xbd: IF (Stack[-1] == 0) GOTO 0x15e; Pop(1)

0xbe: PushEmpty()
0xbf: Call 0x20f

0xc0: Pop(0)
0xc1: Push((int) 13059)
0xc2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc3: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xc4: PushEmpty(object, object)
0xc5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc7: Call 0x274

0xc8: Pop(2)
0xc9: PushEmpty(object, object)
0xca: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcc: Call 0x2b3

0xcd: Pop(2)
0xce: Push((int) 13065)
0xcf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd0: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xd1: PushEmpty(object, object)
0xd2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd4: Call 0x27a

0xd5: Pop(2)
0xd6: PushEmpty(object, object)
0xd7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd9: Call 0x269

0xda: Pop(2)
0xdb: PushEmpty(object, object)
0xdc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xde: Call 0x263

0xdf: Pop(2)
0xe0: PushEmpty(object, object)
0xe1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe3: Call 0x280

0xe4: Pop(2)
0xe5: Push((int) 13056)
0xe6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe7: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0xe8: PushEmpty(bool, object)
0xe9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xea: Call 0x2bd

0xeb: Pop(1)
0xec: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xed: PushEmpty(string)
0xee: Stack[-1] = "Neutral"
0xef: Call 0xab

0xf0: Pop(1)
0xf1: Push((int) 11843)
0xf2: @@ SetMessage(Stack[-1])
0xf3: Pop(1)
0xf4: @@ ClearReplies()
0xf5: Pop(0)
0xf6: Push((int) 11844)
0xf7: Push((int) 13058)
0xf8: Push((int) 13057)
0xf9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfa: Pop(3)
0xfb: Return(); Pop(0)

0xfc: PushEmpty(bool, object)
0xfd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xfe: Call 0x2d5

0xff: Pop(1)
0x100: Pop(1); Push((bool) Stack[-1] == 0)
0x101: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0x102: PushEmpty(string)
0x103: Stack[-1] = "Neutral"
0x104: Call 0xab

0x105: Pop(1)
0x106: Push((int) 11847)
0x107: @@ SetMessage(Stack[-1])
0x108: Pop(1)
0x109: @@ ClearReplies()
0x10a: Pop(0)
0x10b: Push((int) 11848)
0x10c: Push((int) -1)
0x10d: Push((int) 13061)
0x10e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10f: Pop(3)
0x110: Return(); Pop(0)

0x111: PushEmpty(bool)
0x112: Stack[-1] = (bool) 0
0x113: PushEmpty(bool, object)
0x114: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x115: Call 0x2c9

0x116: Pop(1)
0x117: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0x118: PushEmpty(bool, object)
0x119: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x11a: Call 0x2d5

0x11b: Pop(1)
0x11c: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0x11d: Stack[-1] = (bool) 1
0x11e: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0x11f: PushEmpty(string)
0x120: Stack[-1] = "Neutral"
0x121: Call 0xab

0x122: Pop(1)
0x123: Push((int) 11849)
0x124: @@ SetMessage(Stack[-1])
0x125: Pop(1)
0x126: @@ ClearReplies()
0x127: Pop(0)
0x128: Push((int) 11850)
0x129: Push((int) 13064)
0x12a: Push((int) 13063)
0x12b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12c: Pop(3)
0x12d: Return(); Pop(0)

0x12e: Push((int) 13064)
0x12f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x130: IF (Stack[-1] == 0) GOTO 0x140; Pop(1)

0x131: PushEmpty(string)
0x132: Stack[-1] = "Neutral"
0x133: Call 0xab

0x134: Pop(1)
0x135: Push((int) 11851)
0x136: @@ SetMessage(Stack[-1])
0x137: Pop(1)
0x138: @@ ClearReplies()
0x139: Pop(0)
0x13a: Push((int) 11852)
0x13b: Push((int) -1)
0x13c: Push((int) 13065)
0x13d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13e: Pop(3)
0x13f: Return(); Pop(0)

0x140: Push((int) 13058)
0x141: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x142: IF (Stack[-1] == 0) GOTO 0x152; Pop(1)

0x143: PushEmpty(string)
0x144: Stack[-1] = "Neutral"
0x145: Call 0xab

0x146: Pop(1)
0x147: Push((int) 11845)
0x148: @@ SetMessage(Stack[-1])
0x149: Pop(1)
0x14a: @@ ClearReplies()
0x14b: Pop(0)
0x14c: Push((int) 11846)
0x14d: Push((int) -1)
0x14e: Push((int) 13059)
0x14f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x150: Pop(3)
0x151: Return(); Pop(0)

0x152: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x153: PushEmpty(bool)
0x154: Call 0x351

0x155: Pop(0)
0x156: IF (Stack[-1] == 0) GOTO 0x15a; Pop(1)

0x157: @ lshStopAnimation()
0x158: Pop(0)
0x159: GOTO 0x15c

0x15a: @ StopAnimation()
0x15b: Pop(0)
0x15c: Return(); Pop(0)

0x15d: GOTO 0xbc

0x15e: Return(); Pop(0)

0x15f: Push((int) 3)
0x160: @ Sleep(Stack[-1])
0x161: Pop(1)
0x162: PushEmpty()
0x163: Call 0x172

0x164: Pop(0)
0x165: GOTO 0x15f

0x166: Return(); Pop(0)

0x167: PushEmpty()
0x168: PushEmpty()
0x169: Call 0x1b7

0x16a: Pop(0)
0x16b: PushEmpty(int, object)
0x16c: Stack[-1] = Stack[-3]
0x16d: Push(-2, 1); TaskCall(0)
0x16e: Call 0x0

0x16f: Pop(-2, 1); TaskReturn
0x170: Pop(2)
0x171: Return(); Pop(0)

0x172: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x173: @ WaitForAnimEnd()
0x174: Pop(0)
0x175: PushEmpty(bool)
0x176: Call 0x1bc

0x177: Pop(0)
0x178: Pop(1); Push((bool) Stack[-1] == 0)
0x179: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x17a: Return(); Pop(14)

0x17b: PushEmpty(int)
0x17c: Call 0x252

0x17d: Stack[-8] = Stack[-1]
0x17e: Pop(1)
0x17f: Stack[-6] = (int) 0
0x180: PushEmpty(bool)
0x181: Stack[-1] = (bool) 0
0x182: Push((int) 5)
0x183: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x184: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x185: PushEmpty(bool)
0x186: Call 0x1bc

0x187: Pop(0)
0x188: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x189: Stack[-1] = (bool) 1
0x18a: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x18b: Push((int) 3)
0x18c: @ irand(Stack[-6], Stack[-1])
0x18d: Pop(1)
0x18e: Push((int) 0)
0x18f: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x190: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x191: Push(Stack[-7])
0x192: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x193: @ irand(Stack[-4], Stack[-7])
0x194: Pop(0)
0x195: Push("all")
0x196: PushEmpty(string, int)
0x197: Stack[-1] = Stack[-7]
0x198: Call 0x24b

0x199: Pop(1)
0x19a: @ PlayAnimation(Stack[-2], Stack[-1])
0x19b: Pop(2)
0x19c: @ WaitForAnimEnd(Stack[-3])
0x19d: Pop(0)
0x19e: Pop(0); Push((bool) Stack[-3] == 0)
0x19f: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x1a0: GOTO 0x1b6

0x1a1: GOTO 0x1b3

0x1a2: Push((int) 1)
0x1a3: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1a4: IF (Stack[-1] == 0) GOTO 0x1b0; Pop(1)

0x1a5: Push((int) 4)
0x1a6: @ rand(Stack[-3], Stack[-1])
0x1a7: Pop(1)
0x1a8: Push((int) 1)
0x1a9: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1aa: @ Sleep(Stack[-1], Stack[-2])
0x1ab: Pop(1)
0x1ac: Pop(0); Push((bool) Stack[-1] == 0)
0x1ad: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x1ae: GOTO 0x1b6

0x1af: GOTO 0x1b3

0x1b0: Push(Stack[-6])
0x1b1: IF (Stack[-1] == 0) GOTO 0x1b3; Pop(1)

0x1b2: GOTO 0x1b6

0x1b3: Push((int) 1)
0x1b4: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x1b5: GOTO 0x180

0x1b6: Return(); Pop(14)

0x1b7: @ StopAnimation()
0x1b8: Pop(0)
0x1b9: @ StopGroup0()
0x1ba: Pop(0)
0x1bb: Return(); Pop(0)

0x1bc: PushEmpty(bool, bool)
0x1bd: @ IsLoaded(Stack[-1])
0x1be: Pop(0)
0x1bf: Stack[-3] = Stack[-1]
0x1c0: Return(); Pop(2)

0x1c1: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x1c2: @@ GetPosition(Stack[-7])
0x1c3: Pop(0)
0x1c4: @@ GetEyesHeight(Stack[-8])
0x1c5: Pop(0)
0x1c6: Push(CvectorIndex(Stack[-7], 1))
0x1c7: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x1c8: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1c9: @ GetPosition(Stack[-6])
0x1ca: Pop(0)
0x1cb: @ GetEyesHeight(Stack[-8])
0x1cc: Pop(0)
0x1cd: Push(CvectorIndex(Stack[-6], 1))
0x1ce: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x1cf: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1d0: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x1d1: Push(CvectorIndex(Stack[-5], 1))
0x1d2: Stack[-1] = (int) 0
0x1d3: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x1d4: Pop(0); Push(Stack[-5] | Stack[-5]);
0x1d5: Pop(1); Push(Sqrt(Stack[-1]))
0x1d6: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x1d7: Stack[-4] = -Stack[-5]; Pop(0);
0x1d8: Push((int) 70)
0x1d9: Pop(1); Push(Stack[-6] * Stack[-1]);
0x1da: PushEmpty(cvector, cvector)
0x1db: Push(CVector(0.0, 1.0, 0.0))
0x1dc: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x1dd: Call 0x216

0x1de: Pop(1)
0x1df: Push((int) 25)
0x1e0: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1e1: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1e2: Push(CVector(0.0, 10.0, 0.0))
0x1e3: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x1e4: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x1e5: @ IsOverrideActive(Stack[-1])
0x1e6: Pop(0)
0x1e7: Push(Stack[-1])
0x1e8: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1e9: Stack[-18] = (bool) 0
0x1ea: Return(); Pop(16)

0x1eb: @ StopWorld()
0x1ec: Pop(0)
0x1ed: @ CameraTransit(Stack[-2], Stack[-4])
0x1ee: Pop(0)
0x1ef: Push(CvectorIndex(Stack[-3], 0))
0x1f0: Push(CvectorIndex(Stack[-4], 2))
0x1f1: @ Rotate(Stack[-2], Stack[-1])
0x1f2: Pop(2)
0x1f3: @ CameraWaitForPlayFinish()
0x1f4: Pop(0)
0x1f5: @ ResumeWorld()
0x1f6: Pop(0)
0x1f7: Stack[-18] = (bool) 1
0x1f8: Return(); Pop(16)

0x1f9: PushEmpty()
0x1fa: @ CameraSwitchToNormal()
0x1fb: Pop(0)
0x1fc: Return(); Pop(0)

0x1fd: PushEmpty(float, float, float, float)
0x1fe: Push("playing ")
0x1ff: Pop(1); Push(Stack[-1] + Stack[-6]);
0x200: @ Trace(Stack[-1])
0x201: Pop(1)
0x202: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x203: Pop(0)
0x204: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x205: Pop(0)
0x206: Push("start: ")
0x207: Pop(1); Push(Stack[-1] + Stack[-3]);
0x208: @ Trace(Stack[-1])
0x209: Pop(1)
0x20a: Push("end: ")
0x20b: Pop(1); Push(Stack[-1] + Stack[-2]);
0x20c: @ Trace(Stack[-1])
0x20d: Pop(1)
0x20e: Return(); Pop(4)

0x20f: PushEmpty(bool)
0x210: Call 0x351

0x211: Pop(0)
0x212: IF (Stack[-1] == 0) GOTO 0x215; Pop(1)

0x213: @ lshStopSpeech()
0x214: Pop(0)
0x215: Return(); Pop(0)

0x216: PushEmpty(float, float)
0x217: Pop(0); Push(Stack[-3] | Stack[-3]);
0x218: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x219: Push((float)0.0)
0x21a: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x21b: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x21c: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x21d: Return(); Pop(2)

0x21e: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x21f: Return(); Pop(2)

0x220: PushEmpty(int, int)
0x221: @ GetVariable(Stack[-3], Stack[-1])
0x222: Pop(0)
0x223: Stack[-4] = Stack[-1]
0x224: Return(); Pop(2)

0x225: PushEmpty(int, int, bool, int, int, bool)
0x226: @@ GetItemID(Stack[-3])
0x227: Pop(0)
0x228: Push("Category")
0x229: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x22a: Pop(1)
0x22b: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x22c: Pop(0)
0x22d: Pop(0); Push((bool) Stack[-1] == 0)
0x22e: IF (Stack[-1] == 0) GOTO 0x231; Pop(1)

0x22f: @@ DropItems(Stack[-8], Stack[-7])
0x230: Pop(0)
0x231: Return(); Pop(6)

0x232: PushEmpty(object, object)
0x233: @ CreateInvItem(Stack[-1])
0x234: Pop(0)
0x235: @@ SetItemName(Stack[-4])
0x236: Pop(0)
0x237: PushEmpty(object, object, int)
0x238: Stack[-3] = Stack[-8]
0x239: Stack[-2] = Stack[-4]
0x23a: Stack[-1] = Stack[-6]
0x23b: Call 0x225

0x23c: Pop(3)
0x23d: Return(); Pop(2)

0x23e: Stack[-1] = 0
0x23f: PushEmpty(object, object)
0x240: @ FindActor(Stack[-1], Stack[-4])
0x241: Pop(0)
0x242: Pop(0); Push((bool) Stack[-1] == 0)
0x243: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x244: Stack[-5] = (bool) 0
0x245: Return(); Pop(2)

0x246: @ Trigger(Stack[-1], Stack[-3])
0x247: Pop(0)
0x248: Stack[-5] = (bool) 1
0x249: Return(); Pop(2)

0x24a: Stack[-1] = 0
0x24b: PushEmpty(string, string)
0x24c: Stack[-1] = "idle"
0x24d: Push(Stack[-3])
0x24e: IF (Stack[-1] == 0) GOTO 0x250; Pop(1)

0x24f: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x250: Stack[-4] = Stack[-1]
0x251: Return(); Pop(2)

0x252: PushEmpty(int, bool, int, bool)
0x253: Stack[-2] = (int) 0
0x254: Push("all")
0x255: PushEmpty(string, int)
0x256: Stack[-1] = Stack[-5]
0x257: Call 0x24b

0x258: Pop(1)
0x259: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x25a: Pop(2)
0x25b: Pop(0); Push((bool) Stack[-1] == 0)
0x25c: IF (Stack[-1] == 0) GOTO 0x25e; Pop(1)

0x25d: GOTO 0x261

0x25e: Push((int) 1)
0x25f: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x260: GOTO 0x254

0x261: Stack[-5] = Stack[-2]
0x262: Return(); Pop(4)

0x263: PushEmpty()
0x264: Push("playsound")
0x265: Push("giveitem")
0x266: @ TriggerWorld(Stack[-2], Stack[-1])
0x267: Pop(2)
0x268: Return(); Pop(0)

0x269: PushEmpty()
0x26a: Push("powder is given")
0x26b: @ Trace(Stack[-1])
0x26c: Pop(1)
0x26d: PushEmpty(object, string, int)
0x26e: Stack[-3] = Stack[-5]
0x26f: Stack[-2] = "powder"
0x270: Stack[-1] = (int) 1
0x271: Call 0x232

0x272: Pop(3)
0x273: Return(); Pop(0)

0x274: PushEmpty()
0x275: Push("ood4BirdmaskHome1")
0x276: Push((int) 1)
0x277: @ SetVariable(Stack[-2], Stack[-1])
0x278: Pop(2)
0x279: Return(); Pop(0)

0x27a: PushEmpty()
0x27b: Push("ood4BirdmaskHome2")
0x27c: Push((int) 1)
0x27d: @ SetVariable(Stack[-2], Stack[-1])
0x27e: Pop(2)
0x27f: Return(); Pop(0)

0x280: PushEmpty(object, object, object, object)
0x281: PushEmpty(object)
0x282: Call 0x30b

0x283: Stack[-3] = Stack[-1]
0x284: Pop(1)
0x285: Push("d4q02BirdmaskNearHome")
0x286: @@ FindMark(Stack[-2], Stack[-1])
0x287: Pop(1)
0x288: Push(Stack[-1])
0x289: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x28a: @@ Remove()
0x28b: Pop(0)
0x28c: Push("d4q02MladVladGotoAJLSelf")
0x28d: @@ FindMark(Stack[-2], Stack[-1])
0x28e: Pop(1)
0x28f: Push(Stack[-1])
0x290: IF (Stack[-1] == 0) GOTO 0x293; Pop(1)

0x291: @@ Remove()
0x292: Pop(0)
0x293: Push("d4q02MladVladGotoAnna")
0x294: @@ FindMark(Stack[-2], Stack[-1])
0x295: Pop(1)
0x296: Push(Stack[-1])
0x297: IF (Stack[-1] == 0) GOTO 0x29a; Pop(1)

0x298: @@ Remove()
0x299: Pop(0)
0x29a: Push("d4q02MladVladGotoJulia")
0x29b: @@ FindMark(Stack[-2], Stack[-1])
0x29c: Pop(1)
0x29d: Push(Stack[-1])
0x29e: IF (Stack[-1] == 0) GOTO 0x2a1; Pop(1)

0x29f: @@ Remove()
0x2a0: Pop(0)
0x2a1: Push("d4q02MladVladGotoLara")
0x2a2: @@ FindMark(Stack[-2], Stack[-1])
0x2a3: Pop(1)
0x2a4: Push(Stack[-1])
0x2a5: IF (Stack[-1] == 0) GOTO 0x2a8; Pop(1)

0x2a6: @@ Remove()
0x2a7: Pop(0)
0x2a8: PushEmpty()
0x2a9: Call 0x33d

0x2aa: Pop(0)
0x2ab: PushEmpty(bool, string, string)
0x2ac: Stack[-2] = "quest_d4_02"
0x2ad: Stack[-1] = "completed"
0x2ae: Call 0x23f

0x2af: Pop(3)
0x2b0: Return(); Pop(4)

0x2b1: Stack[-1] = 0
0x2b2: Stack[-2] = 0
0x2b3: PushEmpty()
0x2b4: PushEmpty()
0x2b5: Call 0x32d

0x2b6: Pop(0)
0x2b7: PushEmpty(bool, string, string)
0x2b8: Stack[-2] = "quest_d4_02"
0x2b9: Stack[-1] = "birdmask_talk"
0x2ba: Call 0x23f

0x2bb: Pop(3)
0x2bc: Return(); Pop(0)

0x2bd: PushEmpty()
0x2be: PushEmpty(int, string)
0x2bf: Stack[-1] = "ood4BirdmaskHome1"
0x2c0: Call 0x220

0x2c1: Pop(1)
0x2c2: Push((int) 0)
0x2c3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2c4: IF (Stack[-1] == 0) GOTO 0x2c7; Pop(1)

0x2c5: Stack[-2] = (bool) 1
0x2c6: Return(); Pop(0)

0x2c7: Stack[-2] = (bool) 0
0x2c8: Return(); Pop(0)

0x2c9: PushEmpty()
0x2ca: PushEmpty(int, string)
0x2cb: Stack[-1] = "ood4BirdmaskHome2"
0x2cc: Call 0x220

0x2cd: Pop(1)
0x2ce: Push((int) 0)
0x2cf: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2d0: IF (Stack[-1] == 0) GOTO 0x2d3; Pop(1)

0x2d1: Stack[-2] = (bool) 1
0x2d2: Return(); Pop(0)

0x2d3: Stack[-2] = (bool) 0
0x2d4: Return(); Pop(0)

0x2d5: PushEmpty()
0x2d6: PushEmpty(int, string)
0x2d7: Stack[-1] = "d4q02_survived"
0x2d8: Call 0x220

0x2d9: Pop(1)
0x2da: Push((int) 1)
0x2db: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2dc: IF (Stack[-1] == 0) GOTO 0x2df; Pop(1)

0x2dd: Stack[-2] = (bool) 1
0x2de: Return(); Pop(0)

0x2df: Stack[-2] = (bool) 0
0x2e0: Return(); Pop(0)

0x2e1: PushEmpty(object, object)
0x2e2: @ GetDiaryRoot(Stack[-1])
0x2e3: Pop(0)
0x2e4: Pop(0); Push((bool) Stack[-1] == 0)
0x2e5: IF (Stack[-1] == 0) GOTO 0x2eb; Pop(1)

0x2e6: Push("Can't retrieve diary root")
0x2e7: @ Trace(Stack[-1])
0x2e8: Pop(1)
0x2e9: Stack[-3] = (bool) 0
0x2ea: Return(); Pop(2)

0x2eb: Stack[-3] = Stack[-1]
0x2ec: Return(); Pop(2)

0x2ed: Stack[-1] = 0
0x2ee: PushEmpty(object, object, int, object, object, int)
0x2ef: PushEmpty(object)
0x2f0: Call 0x2e1

0x2f1: Stack[-4] = Stack[-1]
0x2f2: Pop(1)
0x2f3: @@ Find(Stack[-7], Stack[-2])
0x2f4: Pop(0)
0x2f5: Pop(0); Push((bool) Stack[-2] == 0)
0x2f6: IF (Stack[-1] == 0) GOTO 0x2fd; Pop(1)

0x2f7: Push("Can't find diary parent with id: ")
0x2f8: Pop(1); Push(Stack[-1] + Stack[-8]);
0x2f9: @ Trace(Stack[-1])
0x2fa: Pop(1)
0x2fb: Stack[-9] = (bool) 0
0x2fc: Return(); Pop(6)

0x2fd: @@ AddChild(Stack[-8])
0x2fe: Pop(0)
0x2ff: Push("player_diary")
0x300: Push((int) 1)
0x301: @ SetVariable(Stack[-2], Stack[-1])
0x302: Pop(2)
0x303: @@ GetCategory(Stack[-1])
0x304: Pop(0)
0x305: @ SetDiarySection(Stack[-1])
0x306: Pop(0)
0x307: Stack[-9] = (bool) 0
0x308: Return(); Pop(6)

0x309: Stack[-2] = 0
0x30a: Stack[-3] = 0
0x30b: PushEmpty(object, object, object, object)
0x30c: @ GetMainOutdoorScene(Stack[-2])
0x30d: Pop(0)
0x30e: Pop(0); Push((bool) Stack[-2] == 0)
0x30f: IF (Stack[-1] == 0) GOTO 0x316; Pop(1)

0x310: Push("Can't find main outdoor scene")
0x311: @ Trace(Stack[-1])
0x312: Pop(1)
0x313: Stack[-1] = 0
0x314: Stack[-5] = Stack[-1]
0x315: Return(); Pop(4)

0x316: @@ GetMap(Stack[-1])
0x317: Pop(0)
0x318: Stack[-5] = Stack[-1]
0x319: Return(); Pop(4)

0x31a: Stack[-1] = 0
0x31b: Stack[-2] = 0
0x31c: PushEmpty(int, int)
0x31d: Push("player")
0x31e: @ GetVariable(Stack[-1], Stack[-2])
0x31f: Pop(1)
0x320: Push((int) 0)
0x321: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x322: IF (Stack[-1] == 0) GOTO 0x326; Pop(1)

0x323: Stack[-3] = (int) 200001
0x324: Return(); Pop(2)

0x325: GOTO 0x32b

0x326: Push((int) 1)
0x327: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x328: IF (Stack[-1] == 0) GOTO 0x32b; Pop(1)

0x329: Stack[-3] = (int) 200002
0x32a: Return(); Pop(2)

0x32b: Stack[-3] = (int) 200003
0x32c: Return(); Pop(2)

0x32d: PushEmpty(object, object)
0x32e: Push("Adding diary entry")
0x32f: @ Trace(Stack[-1])
0x330: Pop(1)
0x331: Push((int) 138)
0x332: Push((int) 2)
0x333: Push((int) 15329)
0x334: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x335: Pop(3)
0x336: PushEmpty(bool, object, int)
0x337: Stack[-2] = Stack[-4]
0x338: Stack[-1] = (int) 21
0x339: Call 0x2ee

0x33a: Pop(3)
0x33b: Return(); Pop(2)

0x33c: Stack[-1] = 0
0x33d: PushEmpty(object, object)
0x33e: Push("Adding diary entry")
0x33f: @ Trace(Stack[-1])
0x340: Pop(1)
0x341: Push((int) 94)
0x342: Push((int) 2)
0x343: Push((int) 12176)
0x344: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x345: Pop(3)
0x346: PushEmpty(bool, object, int)
0x347: Stack[-2] = Stack[-4]
0x348: Stack[-1] = (int) 21
0x349: Call 0x2ee

0x34a: Pop(3)
0x34b: Return(); Pop(2)

0x34c: Stack[-1] = 0
0x34d: Stack[-1] = (int) 4029
0x34e: Return(); Pop(0)

0x34f: Stack[-1] = "ui/NPC_Black.png"
0x350: Return(); Pop(0)

0x351: Stack[-1] = (bool) 0
0x352: Return(); Pop(0)

