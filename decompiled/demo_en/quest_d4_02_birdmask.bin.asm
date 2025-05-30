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
	GetPosition
	GetEyesHeight
	head
	Can't find lsh animation : 
	add
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
	GetCategory
	Can't find main outdoor scene
	GetMap
	branch
	ui/NPC_bmask.png
	ui/NPC_bmask_b.png

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
	ResetAAS (0 args)
	StopGroup0 (0 args)
	IsLoaded (1 args)
	GetPosition (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	UnlookAsync (1 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshStopSpeech (0 args)
	GetVariable (2 args)
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemProperty (3 args)
	CreateInvItem (1 args)
	FindActor (2 args)
	Trigger (2 args)
	HasAnimation (3 args)
	TriggerWorld (2 args)
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x1e3
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xd6 Vars = (int, int)
	GTASK_2  Params = 0
		EVENT_0 Op = 0x1eb Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 130.0
0x5: Call2 0x251

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x410

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x40e

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x412

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x414

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x3fd

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
0x41: Call2 0x295

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
0x4f: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x385

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x55: PushEmpty(string)
0x56: Stack[-1] = "Neutral"
0x57: Call2 0xc0

0x58: Pop(1)
0x59: Push((int) 511843)
0x5a: @@ SetMessage(Stack[-1])
0x5b: Pop(1)
0x5c: @@ ClearReplies()
0x5d: Pop(0)
0x5e: Push((int) 511844)
0x5f: Push((int) 13058)
0x60: Push((int) 13057)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: Push((int) 536103)
0x64: Push((int) 37857)
0x65: Push((int) 37856)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: GOTO 0xa2

0x69: PushEmpty(bool, object)
0x6a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6b: Call2 0x39d

0x6c: Pop(1)
0x6d: Pop(1); Push((bool) Stack[-1] == 0)
0x6e: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x6f: PushEmpty(string)
0x70: Stack[-1] = "Neutral"
0x71: Call2 0xc0

0x72: Pop(1)
0x73: Push((int) 511847)
0x74: @@ SetMessage(Stack[-1])
0x75: Pop(1)
0x76: @@ ClearReplies()
0x77: Pop(0)
0x78: Push((int) 511848)
0x79: Push((int) -1)
0x7a: Push((int) 13061)
0x7b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c: Pop(3)
0x7d: GOTO 0xa2

0x7e: PushEmpty(bool)
0x7f: Stack[-1] = (bool) 0
0x80: PushEmpty(bool, object)
0x81: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x82: Call2 0x391

0x83: Pop(1)
0x84: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x85: PushEmpty(bool, object)
0x86: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x87: Call2 0x39d

0x88: Pop(1)
0x89: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x8a: Stack[-1] = (bool) 1
0x8b: IF (Stack[-1] == 0) GOTO 0xa0; Pop(1)

0x8c: PushEmpty(string)
0x8d: Stack[-1] = "Neutral"
0x8e: Call2 0xc0

0x8f: Pop(1)
0x90: Push((int) 511849)
0x91: @@ SetMessage(Stack[-1])
0x92: Pop(1)
0x93: @@ ClearReplies()
0x94: Pop(0)
0x95: Push((int) 536115)
0x96: Push((int) 13064)
0x97: Push((int) 37870)
0x98: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x99: Pop(3)
0x9a: Push((int) 511850)
0x9b: Push((int) 13064)
0x9c: Push((int) 13063)
0x9d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9e: Pop(3)
0x9f: GOTO 0xa2

0xa0: Return(); Pop(0)

0xa1: GOTO 0x4e

0xa2: PushEmpty(bool)
0xa3: Call2 0x416

0xa4: Pop(0)
0xa5: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0xa6: @ lshWaitForAnimEnd()
0xa7: Pop(0)
0xa8: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa9: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xaa: GOTO 0xb0

0xab: PushEmpty(string)
0xac: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xad: Call2 0x2a6

0xae: Pop(1)
0xaf: GOTO 0xa6

0xb0: GOTO 0xbf

0xb1: Push("all")
0xb2: Push("idle")
0xb3: @ PlayAnimation(Stack[-2], Stack[-1])
0xb4: Pop(2)
0xb5: @ WaitForAnimEnd()
0xb6: Pop(0)
0xb7: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb8: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb9: GOTO 0xbf

0xba: Push("all")
0xbb: Push("idle")
0xbc: @ PlayAnimation(Stack[-2], Stack[-1])
0xbd: Pop(2)
0xbe: GOTO 0xb5

0xbf: Return(); Pop(0)

0xc0: PushEmpty()
0xc1: PushEmpty(bool)
0xc2: Call2 0x416

0xc3: Pop(0)
0xc4: Pop(1); Push((bool) Stack[-1] == 0)
0xc5: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xc6: Return(); Pop(0)

0xc7: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xc8: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xc9: Return(); Pop(0)

0xca: PushEmpty(string, bool)
0xcb: Stack[-2] = Stack[-3]
0xcc: Push("")
0xcd: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xce: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0xcf: Stack[-1] = (bool) 0
0xd0: GOTO 0xd2

0xd1: Stack[-1] = (bool) 1
0xd2: Call2 0x2b6

0xd3: Pop(2)
0xd4: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xd5: Return(); Pop(0)

0xd6: PushEmpty()
0xd7: Push((int) 1)
0xd8: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0xd9: PushEmpty()
0xda: Call2 0x2c5

0xdb: Pop(0)
0xdc: Push((int) 13059)
0xdd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xde: IF (Stack[-1] == 0) GOTO 0xe9; Pop(1)

0xdf: PushEmpty(object, object)
0xe0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe2: Call2 0x33c

0xe3: Pop(2)
0xe4: PushEmpty(object, object)
0xe5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe7: Call2 0x37b

0xe8: Pop(2)
0xe9: Push((int) 13065)
0xea: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xeb: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xec: PushEmpty(object, object)
0xed: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xee: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xef: Call2 0x342

0xf0: Pop(2)
0xf1: PushEmpty(object, object)
0xf2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf4: Call2 0x331

0xf5: Pop(2)
0xf6: PushEmpty(object, object)
0xf7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf9: Call2 0x32b

0xfa: Pop(2)
0xfb: PushEmpty(object, object)
0xfc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfe: Call2 0x348

0xff: Pop(2)
0x100: Push((int) 13056)
0x101: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x102: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x103: PushEmpty(bool, object)
0x104: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x105: Call2 0x385

0x106: Pop(1)
0x107: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0x108: PushEmpty(string)
0x109: Stack[-1] = "Neutral"
0x10a: Call2 0xc0

0x10b: Pop(1)
0x10c: Push((int) 511843)
0x10d: @@ SetMessage(Stack[-1])
0x10e: Pop(1)
0x10f: @@ ClearReplies()
0x110: Pop(0)
0x111: Push((int) 511844)
0x112: Push((int) 13058)
0x113: Push((int) 13057)
0x114: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x115: Pop(3)
0x116: Push((int) 536103)
0x117: Push((int) 37857)
0x118: Push((int) 37856)
0x119: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11a: Pop(3)
0x11b: Return(); Pop(0)

0x11c: PushEmpty(bool, object)
0x11d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x11e: Call2 0x39d

0x11f: Pop(1)
0x120: Pop(1); Push((bool) Stack[-1] == 0)
0x121: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x122: PushEmpty(string)
0x123: Stack[-1] = "Neutral"
0x124: Call2 0xc0

0x125: Pop(1)
0x126: Push((int) 511847)
0x127: @@ SetMessage(Stack[-1])
0x128: Pop(1)
0x129: @@ ClearReplies()
0x12a: Pop(0)
0x12b: Push((int) 511848)
0x12c: Push((int) -1)
0x12d: Push((int) 13061)
0x12e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12f: Pop(3)
0x130: Return(); Pop(0)

0x131: PushEmpty(bool)
0x132: Stack[-1] = (bool) 0
0x133: PushEmpty(bool, object)
0x134: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x135: Call2 0x391

0x136: Pop(1)
0x137: IF (Stack[-1] == 0) GOTO 0x13e; Pop(1)

0x138: PushEmpty(bool, object)
0x139: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x13a: Call2 0x39d

0x13b: Pop(1)
0x13c: IF (Stack[-1] == 0) GOTO 0x13e; Pop(1)

0x13d: Stack[-1] = (bool) 1
0x13e: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x13f: PushEmpty(string)
0x140: Stack[-1] = "Neutral"
0x141: Call2 0xc0

0x142: Pop(1)
0x143: Push((int) 511849)
0x144: @@ SetMessage(Stack[-1])
0x145: Pop(1)
0x146: @@ ClearReplies()
0x147: Pop(0)
0x148: Push((int) 536115)
0x149: Push((int) 13064)
0x14a: Push((int) 37870)
0x14b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14c: Pop(3)
0x14d: Push((int) 511850)
0x14e: Push((int) 13064)
0x14f: Push((int) 13063)
0x150: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x151: Pop(3)
0x152: Return(); Pop(0)

0x153: Push((int) 13064)
0x154: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x155: IF (Stack[-1] == 0) GOTO 0x165; Pop(1)

0x156: PushEmpty(string)
0x157: Stack[-1] = "Neutral"
0x158: Call2 0xc0

0x159: Pop(1)
0x15a: Push((int) 511851)
0x15b: @@ SetMessage(Stack[-1])
0x15c: Pop(1)
0x15d: @@ ClearReplies()
0x15e: Pop(0)
0x15f: Push((int) 511852)
0x160: Push((int) -1)
0x161: Push((int) 13065)
0x162: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x163: Pop(3)
0x164: Return(); Pop(0)

0x165: Push((int) 37857)
0x166: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x167: IF (Stack[-1] == 0) GOTO 0x177; Pop(1)

0x168: PushEmpty(string)
0x169: Stack[-1] = "Neutral"
0x16a: Call2 0xc0

0x16b: Pop(1)
0x16c: Push((int) 536104)
0x16d: @@ SetMessage(Stack[-1])
0x16e: Pop(1)
0x16f: @@ ClearReplies()
0x170: Pop(0)
0x171: Push((int) 536105)
0x172: Push((int) 13058)
0x173: Push((int) 37858)
0x174: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x175: Pop(3)
0x176: Return(); Pop(0)

0x177: Push((int) 13058)
0x178: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x179: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x17a: PushEmpty(string)
0x17b: Stack[-1] = "Neutral"
0x17c: Call2 0xc0

0x17d: Pop(1)
0x17e: Push((int) 511845)
0x17f: @@ SetMessage(Stack[-1])
0x180: Pop(1)
0x181: @@ ClearReplies()
0x182: Pop(0)
0x183: Push((int) 536106)
0x184: Push((int) 37861)
0x185: Push((int) 37860)
0x186: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x187: Pop(3)
0x188: Return(); Pop(0)

0x189: Push((int) 37861)
0x18a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18b: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x18c: PushEmpty(string)
0x18d: Stack[-1] = "Neutral"
0x18e: Call2 0xc0

0x18f: Pop(1)
0x190: Push((int) 536107)
0x191: @@ SetMessage(Stack[-1])
0x192: Pop(1)
0x193: @@ ClearReplies()
0x194: Pop(0)
0x195: Push((int) 536108)
0x196: Push((int) 37863)
0x197: Push((int) 37862)
0x198: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x199: Pop(3)
0x19a: Push((int) 536114)
0x19b: Push((int) 37863)
0x19c: Push((int) 37868)
0x19d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19e: Pop(3)
0x19f: Return(); Pop(0)

0x1a0: Push((int) 37863)
0x1a1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a2: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0x1a3: PushEmpty(string)
0x1a4: Stack[-1] = "Neutral"
0x1a5: Call2 0xc0

0x1a6: Pop(1)
0x1a7: Push((int) 536109)
0x1a8: @@ SetMessage(Stack[-1])
0x1a9: Pop(1)
0x1aa: @@ ClearReplies()
0x1ab: Pop(0)
0x1ac: Push((int) 536110)
0x1ad: Push((int) 37865)
0x1ae: Push((int) 37864)
0x1af: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b0: Pop(3)
0x1b1: Return(); Pop(0)

0x1b2: Push((int) 37865)
0x1b3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b4: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1b5: PushEmpty(string)
0x1b6: Stack[-1] = "Neutral"
0x1b7: Call2 0xc0

0x1b8: Pop(1)
0x1b9: Push((int) 536111)
0x1ba: @@ SetMessage(Stack[-1])
0x1bb: Pop(1)
0x1bc: @@ ClearReplies()
0x1bd: Pop(0)
0x1be: Push((int) 536112)
0x1bf: Push((int) 37867)
0x1c0: Push((int) 37866)
0x1c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c2: Pop(3)
0x1c3: Return(); Pop(0)

0x1c4: Push((int) 37867)
0x1c5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c6: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1c7: PushEmpty(string)
0x1c8: Stack[-1] = "Neutral"
0x1c9: Call2 0xc0

0x1ca: Pop(1)
0x1cb: Push((int) 536113)
0x1cc: @@ SetMessage(Stack[-1])
0x1cd: Pop(1)
0x1ce: @@ ClearReplies()
0x1cf: Pop(0)
0x1d0: Push((int) 511846)
0x1d1: Push((int) -1)
0x1d2: Push((int) 13059)
0x1d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d4: Pop(3)
0x1d5: Return(); Pop(0)

0x1d6: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1d7: PushEmpty(bool)
0x1d8: Call2 0x416

0x1d9: Pop(0)
0x1da: IF (Stack[-1] == 0) GOTO 0x1de; Pop(1)

0x1db: @ lshStopAnimation()
0x1dc: Pop(0)
0x1dd: GOTO 0x1e0

0x1de: @ StopAnimation()
0x1df: Pop(0)
0x1e0: Return(); Pop(0)

0x1e1: GOTO 0xd7

0x1e2: Return(); Pop(0)

0x1e3: Push((int) 3)
0x1e4: @ Sleep(Stack[-1])
0x1e5: Pop(1)
0x1e6: PushEmpty()
0x1e7: Call2 0x1f6

0x1e8: Pop(0)
0x1e9: GOTO 0x1e3

0x1ea: Return(); Pop(0)

0x1eb: PushEmpty()
0x1ec: PushEmpty()
0x1ed: Call2 0x247

0x1ee: Pop(0)
0x1ef: PushEmpty(int, object)
0x1f0: Stack[-1] = Stack[-3]
0x1f1: Push(-2, 1); TaskCall(0)
0x1f2: Call2 0x0

0x1f3: Pop(-2, 1); TaskReturn
0x1f4: Pop(2)
0x1f5: Return(); Pop(0)

0x1f6: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x1f7: @ WaitForAnimEnd()
0x1f8: Pop(0)
0x1f9: PushEmpty(bool)
0x1fa: Call2 0x24c

0x1fb: Pop(0)
0x1fc: Pop(1); Push((bool) Stack[-1] == 0)
0x1fd: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0x1fe: Return(); Pop(14)

0x1ff: PushEmpty(int)
0x200: Call2 0x31a

0x201: Stack[-8] = Stack[-1]
0x202: Pop(1)
0x203: Stack[-6] = (int) 0
0x204: PushEmpty(bool)
0x205: Stack[-1] = (bool) 0
0x206: Push((int) 5)
0x207: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x208: IF (Stack[-1] == 0) GOTO 0x20e; Pop(1)

0x209: PushEmpty(bool)
0x20a: Call2 0x24c

0x20b: Pop(0)
0x20c: IF (Stack[-1] == 0) GOTO 0x20e; Pop(1)

0x20d: Stack[-1] = (bool) 1
0x20e: IF (Stack[-1] == 0) GOTO 0x242; Pop(1)

0x20f: Push((int) 3)
0x210: @ irand(Stack[-6], Stack[-1])
0x211: Pop(1)
0x212: Push((int) 0)
0x213: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x214: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x215: Push(Stack[-7])
0x216: IF (Stack[-1] == 0) GOTO 0x225; Pop(1)

0x217: @ irand(Stack[-4], Stack[-7])
0x218: Pop(0)
0x219: Push("all")
0x21a: PushEmpty(string, int)
0x21b: Stack[-1] = Stack[-7]
0x21c: Call2 0x313

0x21d: Pop(1)
0x21e: @ PlayAnimation(Stack[-2], Stack[-1])
0x21f: Pop(2)
0x220: @ WaitForAnimEnd(Stack[-3])
0x221: Pop(0)
0x222: Pop(0); Push((bool) Stack[-3] == 0)
0x223: IF (Stack[-1] == 0) GOTO 0x225; Pop(1)

0x224: GOTO 0x242

0x225: GOTO 0x237

0x226: Push((int) 1)
0x227: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x228: IF (Stack[-1] == 0) GOTO 0x234; Pop(1)

0x229: Push((int) 4)
0x22a: @ rand(Stack[-3], Stack[-1])
0x22b: Pop(1)
0x22c: Push((int) 1)
0x22d: Pop(1); Push(Stack[-3] + Stack[-1]);
0x22e: @ Sleep(Stack[-1], Stack[-2])
0x22f: Pop(1)
0x230: Pop(0); Push((bool) Stack[-1] == 0)
0x231: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x232: GOTO 0x242

0x233: GOTO 0x237

0x234: Push(Stack[-6])
0x235: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x236: GOTO 0x242

0x237: PushEmpty(bool)
0x238: Call2 0x245

0x239: Pop(0)
0x23a: Pop(1); Push((bool) Stack[-1] == 0)
0x23b: IF (Stack[-1] == 0) GOTO 0x23d; Pop(1)

0x23c: GOTO 0x242

0x23d: @ ResetAAS()
0x23e: Pop(0)
0x23f: Push((int) 1)
0x240: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x241: GOTO 0x204

0x242: @ ResetAAS()
0x243: Pop(0)
0x244: Return(); Pop(14)

0x245: Stack[-1] = (bool) 1
0x246: Return(); Pop(0)

0x247: @ StopAnimation()
0x248: Pop(0)
0x249: @ StopGroup0()
0x24a: Pop(0)
0x24b: Return(); Pop(0)

0x24c: PushEmpty(bool, bool)
0x24d: @ IsLoaded(Stack[-1])
0x24e: Pop(0)
0x24f: Stack[-3] = Stack[-1]
0x250: Return(); Pop(2)

0x251: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x252: @@ GetPosition(Stack[-8])
0x253: Pop(0)
0x254: @@ GetEyesHeight(Stack[-9])
0x255: Pop(0)
0x256: Push(CvectorIndex(Stack[-8], 1))
0x257: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x258: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x259: @ GetPosition(Stack[-7])
0x25a: Pop(0)
0x25b: @ GetEyesHeight(Stack[-9])
0x25c: Pop(0)
0x25d: Push(CvectorIndex(Stack[-7], 1))
0x25e: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x25f: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x260: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x261: Push(CvectorIndex(Stack[-6], 1))
0x262: Stack[-1] = (int) 0
0x263: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x264: Pop(0); Push(Stack[-6] | Stack[-6]);
0x265: Pop(1); Push(Sqrt(Stack[-1]))
0x266: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x267: Stack[-5] = -Stack[-6]; Pop(0);
0x268: Pop(0); Push(Stack[-6] * Stack[-19]);
0x269: PushEmpty(cvector, cvector)
0x26a: Push(CVector(0.0, 1.0, 0.0))
0x26b: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x26c: Call2 0x2cc

0x26d: Pop(1)
0x26e: Push((int) 25)
0x26f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x270: Pop(2); Push(Stack[-2] + Stack[-1]);
0x271: Push(CVector(0.0, 10.0, 0.0))
0x272: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x273: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x274: @ IsOverrideActive(Stack[-2])
0x275: Pop(0)
0x276: Push(Stack[-2])
0x277: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0x278: Stack[-21] = (bool) 0
0x279: Return(); Pop(18)

0x27a: @ StopWorld()
0x27b: Pop(0)
0x27c: @ CameraTransit(Stack[-3], Stack[-5])
0x27d: Pop(0)
0x27e: Push(CvectorIndex(Stack[-4], 0))
0x27f: Push(CvectorIndex(Stack[-5], 2))
0x280: @ Rotate(Stack[-2], Stack[-1])
0x281: Pop(2)
0x282: PushEmpty(bool)
0x283: Call2 0x416

0x284: Pop(0)
0x285: IF (Stack[-1] == 0) GOTO 0x287; Pop(1)

0x286: GOTO 0x28f

0x287: Push("head")
0x288: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x289: Pop(1)
0x28a: Push(Stack[-1])
0x28b: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x28c: Push("head")
0x28d: @ LookAsyncCamera(Stack[-1])
0x28e: Pop(1)
0x28f: @ CameraWaitForPlayFinish()
0x290: Pop(0)
0x291: @ ResumeWorld()
0x292: Pop(0)
0x293: Stack[-21] = (bool) 1
0x294: Return(); Pop(18)

0x295: PushEmpty(bool, bool)
0x296: @ CameraSwitchToNormal()
0x297: Pop(0)
0x298: PushEmpty(bool)
0x299: Call2 0x416

0x29a: Pop(0)
0x29b: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x29c: GOTO 0x2a5

0x29d: Push("head")
0x29e: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x29f: Pop(1)
0x2a0: Push(Stack[-1])
0x2a1: IF (Stack[-1] == 0) GOTO 0x2a5; Pop(1)

0x2a2: Push("head")
0x2a3: @ UnlookAsync(Stack[-1])
0x2a4: Pop(1)
0x2a5: Return(); Pop(2)

0x2a6: PushEmpty(bool, float, float, bool, float, float)
0x2a7: @ lshHasAnimation(Stack[-3], Stack[-7])
0x2a8: Pop(0)
0x2a9: Push(Stack[-3])
0x2aa: IF (Stack[-1] == 0) GOTO 0x2b1; Pop(1)

0x2ab: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x2ac: Pop(0)
0x2ad: Push((bool) 0)
0x2ae: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2af: Pop(1)
0x2b0: GOTO 0x2b5

0x2b1: Push("Can't find lsh animation : ")
0x2b2: Pop(1); Push(Stack[-1] + Stack[-8]);
0x2b3: @ Trace(Stack[-1])
0x2b4: Pop(1)
0x2b5: Return(); Pop(6)

0x2b6: PushEmpty(bool, float, float, bool, float, float)
0x2b7: @ lshHasAnimation(Stack[-3], Stack[-8])
0x2b8: Pop(0)
0x2b9: Push(Stack[-3])
0x2ba: IF (Stack[-1] == 0) GOTO 0x2c0; Pop(1)

0x2bb: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x2bc: Pop(0)
0x2bd: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x2be: Pop(0)
0x2bf: GOTO 0x2c4

0x2c0: Push("Can't find lsh animation : ")
0x2c1: Pop(1); Push(Stack[-1] + Stack[-9]);
0x2c2: @ Trace(Stack[-1])
0x2c3: Pop(1)
0x2c4: Return(); Pop(6)

0x2c5: PushEmpty(bool)
0x2c6: Call2 0x416

0x2c7: Pop(0)
0x2c8: IF (Stack[-1] == 0) GOTO 0x2cb; Pop(1)

0x2c9: @ lshStopSpeech()
0x2ca: Pop(0)
0x2cb: Return(); Pop(0)

0x2cc: PushEmpty(float, float)
0x2cd: Pop(0); Push(Stack[-3] | Stack[-3]);
0x2ce: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2cf: Push((float)0.0)
0x2d0: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2d1: IF (Stack[-1] == 0) GOTO 0x2d4; Pop(1)

0x2d2: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x2d3: Return(); Pop(2)

0x2d4: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x2d5: Return(); Pop(2)

0x2d6: PushEmpty(int, int)
0x2d7: @ GetVariable(Stack[-3], Stack[-1])
0x2d8: Pop(0)
0x2d9: Stack[-4] = Stack[-1]
0x2da: Return(); Pop(2)

0x2db: PushEmpty(object, object)
0x2dc: @ CreateIntVector(Stack[-1])
0x2dd: Pop(0)
0x2de: @@ add(Stack[-4])
0x2df: Pop(0)
0x2e0: @@ add(Stack[-3])
0x2e1: Pop(0)
0x2e2: Push((int) 3)
0x2e3: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x2e4: Pop(1)
0x2e5: Return(); Pop(2)

0x2e6: Stack[-1] = 0
0x2e7: PushEmpty(int, int, bool, int, int, bool)
0x2e8: @@ GetItemID(Stack[-3])
0x2e9: Pop(0)
0x2ea: Push("Category")
0x2eb: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x2ec: Pop(1)
0x2ed: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x2ee: Pop(0)
0x2ef: Pop(0); Push((bool) Stack[-1] == 0)
0x2f0: IF (Stack[-1] == 0) GOTO 0x2f4; Pop(1)

0x2f1: @@ DropItems(Stack[-8], Stack[-7])
0x2f2: Pop(0)
0x2f3: GOTO 0x2f9

0x2f4: PushEmpty(int, int)
0x2f5: Stack[-2] = Stack[-5]
0x2f6: Stack[-1] = Stack[-9]
0x2f7: Call2 0x2db

0x2f8: Pop(2)
0x2f9: Return(); Pop(6)

0x2fa: PushEmpty(object, object)
0x2fb: @ CreateInvItem(Stack[-1])
0x2fc: Pop(0)
0x2fd: @@ SetItemName(Stack[-4])
0x2fe: Pop(0)
0x2ff: PushEmpty(object, object, int)
0x300: Stack[-3] = Stack[-8]
0x301: Stack[-2] = Stack[-4]
0x302: Stack[-1] = Stack[-6]
0x303: Call2 0x2e7

0x304: Pop(3)
0x305: Return(); Pop(2)

0x306: Stack[-1] = 0
0x307: PushEmpty(object, object)
0x308: @ FindActor(Stack[-1], Stack[-4])
0x309: Pop(0)
0x30a: Pop(0); Push((bool) Stack[-1] == 0)
0x30b: IF (Stack[-1] == 0) GOTO 0x30e; Pop(1)

0x30c: Stack[-5] = (bool) 0
0x30d: Return(); Pop(2)

0x30e: @ Trigger(Stack[-1], Stack[-3])
0x30f: Pop(0)
0x310: Stack[-5] = (bool) 1
0x311: Return(); Pop(2)

0x312: Stack[-1] = 0
0x313: PushEmpty(string, string)
0x314: Stack[-1] = "idle"
0x315: Push(Stack[-3])
0x316: IF (Stack[-1] == 0) GOTO 0x318; Pop(1)

0x317: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x318: Stack[-4] = Stack[-1]
0x319: Return(); Pop(2)

0x31a: PushEmpty(int, bool, int, bool)
0x31b: Stack[-2] = (int) 0
0x31c: Push("all")
0x31d: PushEmpty(string, int)
0x31e: Stack[-1] = Stack[-5]
0x31f: Call2 0x313

0x320: Pop(1)
0x321: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x322: Pop(2)
0x323: Pop(0); Push((bool) Stack[-1] == 0)
0x324: IF (Stack[-1] == 0) GOTO 0x326; Pop(1)

0x325: GOTO 0x329

0x326: Push((int) 1)
0x327: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x328: GOTO 0x31c

0x329: Stack[-5] = Stack[-2]
0x32a: Return(); Pop(4)

0x32b: PushEmpty()
0x32c: Push("playsound")
0x32d: Push("giveitem")
0x32e: @ TriggerWorld(Stack[-2], Stack[-1])
0x32f: Pop(2)
0x330: Return(); Pop(0)

0x331: PushEmpty()
0x332: Push("powder is given")
0x333: @ Trace(Stack[-1])
0x334: Pop(1)
0x335: PushEmpty(object, string, int)
0x336: Stack[-3] = Stack[-5]
0x337: Stack[-2] = "powder"
0x338: Stack[-1] = (int) 1
0x339: Call2 0x2fa

0x33a: Pop(3)
0x33b: Return(); Pop(0)

0x33c: PushEmpty()
0x33d: Push("ood4BirdmaskHome1")
0x33e: Push((int) 1)
0x33f: @ SetVariable(Stack[-2], Stack[-1])
0x340: Pop(2)
0x341: Return(); Pop(0)

0x342: PushEmpty()
0x343: Push("ood4BirdmaskHome2")
0x344: Push((int) 1)
0x345: @ SetVariable(Stack[-2], Stack[-1])
0x346: Pop(2)
0x347: Return(); Pop(0)

0x348: PushEmpty(object, object, object, object)
0x349: PushEmpty(object)
0x34a: Call2 0x3ec

0x34b: Stack[-3] = Stack[-1]
0x34c: Pop(1)
0x34d: Push("d4q02BirdmaskNearHome")
0x34e: @@ FindMark(Stack[-2], Stack[-1])
0x34f: Pop(1)
0x350: Push(Stack[-1])
0x351: IF (Stack[-1] == 0) GOTO 0x354; Pop(1)

0x352: @@ Remove()
0x353: Pop(0)
0x354: Push("d4q02MladVladGotoAJLSelf")
0x355: @@ FindMark(Stack[-2], Stack[-1])
0x356: Pop(1)
0x357: Push(Stack[-1])
0x358: IF (Stack[-1] == 0) GOTO 0x35b; Pop(1)

0x359: @@ Remove()
0x35a: Pop(0)
0x35b: Push("d4q02MladVladGotoAnna")
0x35c: @@ FindMark(Stack[-2], Stack[-1])
0x35d: Pop(1)
0x35e: Push(Stack[-1])
0x35f: IF (Stack[-1] == 0) GOTO 0x362; Pop(1)

0x360: @@ Remove()
0x361: Pop(0)
0x362: Push("d4q02MladVladGotoJulia")
0x363: @@ FindMark(Stack[-2], Stack[-1])
0x364: Pop(1)
0x365: Push(Stack[-1])
0x366: IF (Stack[-1] == 0) GOTO 0x369; Pop(1)

0x367: @@ Remove()
0x368: Pop(0)
0x369: Push("d4q02MladVladGotoLara")
0x36a: @@ FindMark(Stack[-2], Stack[-1])
0x36b: Pop(1)
0x36c: Push(Stack[-1])
0x36d: IF (Stack[-1] == 0) GOTO 0x370; Pop(1)

0x36e: @@ Remove()
0x36f: Pop(0)
0x370: PushEmpty()
0x371: Call2 0x3b6

0x372: Pop(0)
0x373: PushEmpty(bool, string, string)
0x374: Stack[-2] = "quest_d4_02"
0x375: Stack[-1] = "completed"
0x376: Call2 0x307

0x377: Pop(3)
0x378: Return(); Pop(4)

0x379: Stack[-1] = 0
0x37a: Stack[-2] = 0
0x37b: PushEmpty()
0x37c: PushEmpty()
0x37d: Call2 0x3a9

0x37e: Pop(0)
0x37f: PushEmpty(bool, string, string)
0x380: Stack[-2] = "quest_d4_02"
0x381: Stack[-1] = "birdmask_talk"
0x382: Call2 0x307

0x383: Pop(3)
0x384: Return(); Pop(0)

0x385: PushEmpty()
0x386: PushEmpty(int, string)
0x387: Stack[-1] = "ood4BirdmaskHome1"
0x388: Call2 0x2d6

0x389: Pop(1)
0x38a: Push((int) 0)
0x38b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x38c: IF (Stack[-1] == 0) GOTO 0x38f; Pop(1)

0x38d: Stack[-2] = (bool) 1
0x38e: Return(); Pop(0)

0x38f: Stack[-2] = (bool) 0
0x390: Return(); Pop(0)

0x391: PushEmpty()
0x392: PushEmpty(int, string)
0x393: Stack[-1] = "ood4BirdmaskHome2"
0x394: Call2 0x2d6

0x395: Pop(1)
0x396: Push((int) 0)
0x397: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x398: IF (Stack[-1] == 0) GOTO 0x39b; Pop(1)

0x399: Stack[-2] = (bool) 1
0x39a: Return(); Pop(0)

0x39b: Stack[-2] = (bool) 0
0x39c: Return(); Pop(0)

0x39d: PushEmpty()
0x39e: PushEmpty(int, string)
0x39f: Stack[-1] = "d4q02_survived"
0x3a0: Call2 0x2d6

0x3a1: Pop(1)
0x3a2: Push((int) 1)
0x3a3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3a4: IF (Stack[-1] == 0) GOTO 0x3a7; Pop(1)

0x3a5: Stack[-2] = (bool) 1
0x3a6: Return(); Pop(0)

0x3a7: Stack[-2] = (bool) 0
0x3a8: Return(); Pop(0)

0x3a9: PushEmpty(object, object)
0x3aa: Push((int) 138)
0x3ab: Push((int) 2)
0x3ac: Push((int) 515329)
0x3ad: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x3ae: Pop(3)
0x3af: PushEmpty(bool, object, int)
0x3b0: Stack[-2] = Stack[-4]
0x3b1: Stack[-1] = (int) 21
0x3b2: Call2 0x3d0

0x3b3: Pop(3)
0x3b4: Return(); Pop(2)

0x3b5: Stack[-1] = 0
0x3b6: PushEmpty(object, object)
0x3b7: Push((int) 94)
0x3b8: Push((int) 2)
0x3b9: Push((int) 512176)
0x3ba: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x3bb: Pop(3)
0x3bc: PushEmpty(bool, object, int)
0x3bd: Stack[-2] = Stack[-4]
0x3be: Stack[-1] = (int) 21
0x3bf: Call2 0x3d0

0x3c0: Pop(3)
0x3c1: Return(); Pop(2)

0x3c2: Stack[-1] = 0
0x3c3: PushEmpty(object, object)
0x3c4: @ GetDiaryRoot(Stack[-1])
0x3c5: Pop(0)
0x3c6: Pop(0); Push((bool) Stack[-1] == 0)
0x3c7: IF (Stack[-1] == 0) GOTO 0x3cd; Pop(1)

0x3c8: Push("Can't retrieve diary root")
0x3c9: @ Trace(Stack[-1])
0x3ca: Pop(1)
0x3cb: Stack[-3] = (bool) 0
0x3cc: Return(); Pop(2)

0x3cd: Stack[-3] = Stack[-1]
0x3ce: Return(); Pop(2)

0x3cf: Stack[-1] = 0
0x3d0: PushEmpty(object, object, int, object, object, int)
0x3d1: PushEmpty(object)
0x3d2: Call2 0x3c3

0x3d3: Stack[-4] = Stack[-1]
0x3d4: Pop(1)
0x3d5: @@ Find(Stack[-7], Stack[-2])
0x3d6: Pop(0)
0x3d7: Pop(0); Push((bool) Stack[-2] == 0)
0x3d8: IF (Stack[-1] == 0) GOTO 0x3df; Pop(1)

0x3d9: Push("Can't find diary parent with id: ")
0x3da: Pop(1); Push(Stack[-1] + Stack[-8]);
0x3db: @ Trace(Stack[-1])
0x3dc: Pop(1)
0x3dd: Stack[-9] = (bool) 0
0x3de: Return(); Pop(6)

0x3df: @@ AddChild(Stack[-8])
0x3e0: Pop(0)
0x3e1: Push((int) 7)
0x3e2: @ SendWorldWndMessage(Stack[-1])
0x3e3: Pop(1)
0x3e4: @@ GetCategory(Stack[-1])
0x3e5: Pop(0)
0x3e6: @ SetDiarySection(Stack[-1])
0x3e7: Pop(0)
0x3e8: Stack[-9] = (bool) 0
0x3e9: Return(); Pop(6)

0x3ea: Stack[-2] = 0
0x3eb: Stack[-3] = 0
0x3ec: PushEmpty(object, object, object, object)
0x3ed: @ GetMainOutdoorScene(Stack[-2])
0x3ee: Pop(0)
0x3ef: Pop(0); Push((bool) Stack[-2] == 0)
0x3f0: IF (Stack[-1] == 0) GOTO 0x3f7; Pop(1)

0x3f1: Push("Can't find main outdoor scene")
0x3f2: @ Trace(Stack[-1])
0x3f3: Pop(1)
0x3f4: Stack[-1] = 0
0x3f5: Stack[-5] = Stack[-1]
0x3f6: Return(); Pop(4)

0x3f7: @@ GetMap(Stack[-1])
0x3f8: Pop(0)
0x3f9: Stack[-5] = Stack[-1]
0x3fa: Return(); Pop(4)

0x3fb: Stack[-1] = 0
0x3fc: Stack[-2] = 0
0x3fd: PushEmpty(int, int)
0x3fe: Push("branch")
0x3ff: @ GetVariable(Stack[-1], Stack[-2])
0x400: Pop(1)
0x401: Push((int) 0)
0x402: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x403: IF (Stack[-1] == 0) GOTO 0x407; Pop(1)

0x404: Stack[-3] = (int) 1
0x405: Return(); Pop(2)

0x406: GOTO 0x40c

0x407: Push((int) 1)
0x408: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x409: IF (Stack[-1] == 0) GOTO 0x40c; Pop(1)

0x40a: Stack[-3] = (int) 2
0x40b: Return(); Pop(2)

0x40c: Stack[-3] = (int) 3
0x40d: Return(); Pop(2)

0x40e: Stack[-1] = (int) 515571
0x40f: Return(); Pop(0)

0x410: Stack[-1] = (int) 504029
0x411: Return(); Pop(0)

0x412: Stack[-1] = "ui/NPC_bmask.png"
0x413: Return(); Pop(0)

0x414: Stack[-1] = "ui/NPC_bmask_b.png"
0x415: Return(); Pop(0)

0x416: Stack[-1] = (bool) 0
0x417: Return(); Pop(0)

