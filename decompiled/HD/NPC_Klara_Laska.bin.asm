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
	Autizm
	SetMessage
	ClearReplies
	AddReply
	Neutral
	all
	idle
	Welldie
	Pain
	Disturbance
	player
	GetPosition
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	GetProperty
	Can't find lsh animation : 
	.bin
	HasItem
	ui/NPC_Laska.png
	ui/NPC_Laska_b.png
	pt_map_burah_home
	ShowMap
	ook1Laska1
	ook1Laska2
	k1q01LaskaGotoBurah
	AddMark
	k2q02
	milk
	RemoveItemByType
	bread
	flower
	ook2Laska1
	k5q03LaskaGotoAlbinos
	pt_k5q03_albinos_path12
	quest_k5_03
	ook5Laska1
	k5LaskaVisit
	k6LaskaVisit
	ook6Laska1
	k6q03LaskaGotoAlbinos
	pt_k6q03_albinos_path9
	quest_k6_03
	playsound
	giveitem
	mapmark
	k1q01
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
	mt_laska

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
	Hold (0 args)
	GetDirection (1 args)
	FindActor (2 args)
	RotateAsync (2 args)
	CanSee (2 args)
	rand (3 args)
	SetTimer (2 args)
	KillTimer (1 args)
	lshStopSpeech (0 args)
	StopAsync (0 args)
	StopGroup0 (0 args)
	Sleep (2 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	ResetAAS (0 args)
	GetPosition (1 args)
	Rotate (3 args)
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
	UnlookAsync (1 args)
	GetVariable (2 args)
	SetVariable (2 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshHasSpeech (2 args)
	lshPlaySpeech (1 args)
	self (1 args)
	GetMainOutdoorScene (1 args)
	AddBlankActor (4 args)
	GetInvItemByName (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	TriggerWorld (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0xb25
RunTask = 14

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xd7 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x377 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x5c5 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x6b3 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x870 Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9fd Vars = (int, int)
	GTASK_12 Vars = (object) Params = 2
	GTASK_13 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xafb Vars = (int, int)
	GTASK_14 Vars = (cvector) Params = 0
		EVENT_7 Op = 0xb6e Vars = (int)
		EVENT_6 Op = 0xb94 Vars = ()
		EVENT_5 Op = 0xba3 Vars = ()
		EVENT_45 Op = 0xbb0 Vars = (bool)
		EVENT_0 Op = 0xbbc Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0xc45

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0xdb0

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0xdae

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0xdb2

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0xdb4

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0xf86

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
0x2f: PushEmpty(bool, object)
0x30: PushEmpty(object)
0x31: Call2 0xd5b

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0xc9c

0x35: Pop(2)
0x36: PushEmpty(object, object)
0x37: Stack[-2] = Stack[-11]
0x38: Stack[-1] = Stack[-6]
0x39: Push(-2, 4); TaskCall(1)
0x3a: Call2 0x51

0x3b: Pop(-2, 4); TaskReturn
0x3c: Pop(2)
0x3d: @@ IsDialogEnd(Stack[-1])
0x3e: Pop(0)
0x3f: Pop(0); Push((bool) Stack[-1] == 0)
0x40: IF (Stack[-1] == 0) GOTO 0x46; Pop(1)

0x41: @ sync()
0x42: Pop(0)
0x43: @@ IsDialogEnd(Stack[-1])
0x44: Pop(0)
0x45: GOTO 0x3f

0x46: PushEmpty(object)
0x47: Stack[-1] = Stack[-10]
0x48: Call2 0xc8a

0x49: Pop(1)
0x4a: @ StopDialog(Stack[-4])
0x4b: Pop(0)
0x4c: @@ GetReturnValue(Stack[-2])
0x4d: Pop(0)
0x4e: Stack[-10] = Stack[-2]
0x4f: Return(); Pop(8)

0x50: Stack[-4] = 0
0x51: PushEmpty()
0x52: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x53: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x54: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x55: Push((int) 1)
0x56: IF (Stack[-1] == 0) GOTO 0xa3; Pop(1)

0x57: PushEmpty(bool)
0x58: Stack[-1] = (bool) 0
0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b: Call2 0xe5e

0x5c: Pop(1)
0x5d: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x5e: PushEmpty(bool, object)
0x5f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x60: Call2 0xe6a

0x61: Pop(1)
0x62: Pop(1); Push((bool) Stack[-1] == 0)
0x63: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x64: Stack[-1] = (bool) 1
0x65: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x66: PushEmpty(object, object)
0x67: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x68: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x69: Call2 0xdc8

0x6a: Pop(2)
0x6b: PushEmpty(string)
0x6c: Stack[-1] = "Autizm"
0x6d: Call2 0xc1

0x6e: Pop(1)
0x6f: Push((int) 524644)
0x70: @@ SetMessage(Stack[-1])
0x71: Pop(1)
0x72: @@ ClearReplies()
0x73: Pop(0)
0x74: Push((int) 526298)
0x75: Push((int) 27579)
0x76: Push((int) 27578)
0x77: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x78: Pop(3)
0x79: Push((int) 526300)
0x7a: Push((int) 27581)
0x7b: Push((int) 27580)
0x7c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d: Pop(3)
0x7e: GOTO 0xa3

0x7f: PushEmpty(string)
0x80: Stack[-1] = "Neutral"
0x81: Call2 0xc1

0x82: Pop(1)
0x83: Push((int) 524648)
0x84: @@ SetMessage(Stack[-1])
0x85: Pop(1)
0x86: @@ ClearReplies()
0x87: Pop(0)
0x88: PushEmpty(bool)
0x89: Stack[-1] = (bool) 0
0x8a: PushEmpty(bool, object)
0x8b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8c: Call2 0xe6a

0x8d: Pop(1)
0x8e: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x8f: PushEmpty(bool, object)
0x90: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x91: Call2 0xe76

0x92: Pop(1)
0x93: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x94: Stack[-1] = (bool) 1
0x95: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x96: Push((int) 524681)
0x97: Push((int) 43988)
0x98: Push((int) 26020)
0x99: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9a: Pop(3)
0x9b: Push((int) 524649)
0x9c: Push((int) -1)
0x9d: Push((int) 25988)
0x9e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9f: Pop(3)
0xa0: GOTO 0xa3

0xa1: Return(); Pop(0)

0xa2: GOTO 0x55

0xa3: PushEmpty(bool)
0xa4: Call2 0xdb6

0xa5: Pop(0)
0xa6: IF (Stack[-1] == 0) GOTO 0xb2; Pop(1)

0xa7: @ lshWaitForAnimEnd()
0xa8: Pop(0)
0xa9: Push( Stack[3 + Tasks[-1].StackPointer] )
0xaa: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xab: GOTO 0xb1

0xac: PushEmpty(string)
0xad: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xae: Call2 0xd26

0xaf: Pop(1)
0xb0: GOTO 0xa7

0xb1: GOTO 0xc0

0xb2: Push("all")
0xb3: Push("idle")
0xb4: @ PlayAnimation(Stack[-2], Stack[-1])
0xb5: Pop(2)
0xb6: @ WaitForAnimEnd()
0xb7: Pop(0)
0xb8: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb9: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xba: GOTO 0xc0

0xbb: Push("all")
0xbc: Push("idle")
0xbd: @ PlayAnimation(Stack[-2], Stack[-1])
0xbe: Pop(2)
0xbf: GOTO 0xb6

0xc0: Return(); Pop(0)

0xc1: PushEmpty()
0xc2: PushEmpty(bool)
0xc3: Call2 0xdb6

0xc4: Pop(0)
0xc5: Pop(1); Push((bool) Stack[-1] == 0)
0xc6: IF (Stack[-1] == 0) GOTO 0xc8; Pop(1)

0xc7: Return(); Pop(0)

0xc8: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xc9: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0xca: Return(); Pop(0)

0xcb: PushEmpty(string, bool)
0xcc: Stack[-2] = Stack[-3]
0xcd: Push("")
0xce: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xcf: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xd0: Stack[-1] = (bool) 0
0xd1: GOTO 0xd3

0xd2: Stack[-1] = (bool) 1
0xd3: Call2 0xd36

0xd4: Pop(2)
0xd5: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xd6: Return(); Pop(0)

0xd7: PushEmpty()
0xd8: Push((int) 1)
0xd9: IF (Stack[-1] == 0) GOTO 0x298; Pop(1)

0xda: PushEmpty()
0xdb: Call2 0xd54

0xdc: Pop(0)
0xdd: Push((int) 26020)
0xde: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdf: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xe0: PushEmpty(object, object)
0xe1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe3: Call2 0xdce

0xe4: Pop(2)
0xe5: Push((int) 26022)
0xe6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe7: IF (Stack[-1] == 0) GOTO 0xf2; Pop(1)

0xe8: PushEmpty(object, object)
0xe9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xea: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xeb: Call2 0xdd4

0xec: Pop(2)
0xed: PushEmpty(object, object)
0xee: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xef: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf0: Call2 0xdb8

0xf1: Pop(2)
0xf2: Push((int) 43956)
0xf3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf4: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xf5: PushEmpty(object, object)
0xf6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf8: Call2 0xdb8

0xf9: Pop(2)
0xfa: PushEmpty(object, object)
0xfb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfd: Call2 0xdd4

0xfe: Pop(2)
0xff: Push((int) 25983)
0x100: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x101: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x102: PushEmpty(bool)
0x103: Stack[-1] = (bool) 0
0x104: PushEmpty(bool, object)
0x105: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x106: Call2 0xe5e

0x107: Pop(1)
0x108: IF (Stack[-1] == 0) GOTO 0x110; Pop(1)

0x109: PushEmpty(bool, object)
0x10a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x10b: Call2 0xe6a

0x10c: Pop(1)
0x10d: Pop(1); Push((bool) Stack[-1] == 0)
0x10e: IF (Stack[-1] == 0) GOTO 0x110; Pop(1)

0x10f: Stack[-1] = (bool) 1
0x110: IF (Stack[-1] == 0) GOTO 0x12a; Pop(1)

0x111: PushEmpty(object, object)
0x112: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x113: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x114: Call2 0xdc8

0x115: Pop(2)
0x116: PushEmpty(string)
0x117: Stack[-1] = "Autizm"
0x118: Call2 0xc1

0x119: Pop(1)
0x11a: Push((int) 524644)
0x11b: @@ SetMessage(Stack[-1])
0x11c: Pop(1)
0x11d: @@ ClearReplies()
0x11e: Pop(0)
0x11f: Push((int) 526298)
0x120: Push((int) 27579)
0x121: Push((int) 27578)
0x122: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x123: Pop(3)
0x124: Push((int) 526300)
0x125: Push((int) 27581)
0x126: Push((int) 27580)
0x127: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x128: Pop(3)
0x129: Return(); Pop(0)

0x12a: PushEmpty(string)
0x12b: Stack[-1] = "Neutral"
0x12c: Call2 0xc1

0x12d: Pop(1)
0x12e: Push((int) 524648)
0x12f: @@ SetMessage(Stack[-1])
0x130: Pop(1)
0x131: @@ ClearReplies()
0x132: Pop(0)
0x133: PushEmpty(bool)
0x134: Stack[-1] = (bool) 0
0x135: PushEmpty(bool, object)
0x136: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x137: Call2 0xe6a

0x138: Pop(1)
0x139: IF (Stack[-1] == 0) GOTO 0x140; Pop(1)

0x13a: PushEmpty(bool, object)
0x13b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x13c: Call2 0xe76

0x13d: Pop(1)
0x13e: IF (Stack[-1] == 0) GOTO 0x140; Pop(1)

0x13f: Stack[-1] = (bool) 1
0x140: IF (Stack[-1] == 0) GOTO 0x146; Pop(1)

0x141: Push((int) 524681)
0x142: Push((int) 43988)
0x143: Push((int) 26020)
0x144: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x145: Pop(3)
0x146: Push((int) 524649)
0x147: Push((int) -1)
0x148: Push((int) 25988)
0x149: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14a: Pop(3)
0x14b: Return(); Pop(0)

0x14c: Push((int) 43988)
0x14d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14e: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x14f: PushEmpty(string)
0x150: Stack[-1] = "Welldie"
0x151: Call2 0xc1

0x152: Pop(1)
0x153: Push((int) 541782)
0x154: @@ SetMessage(Stack[-1])
0x155: Pop(1)
0x156: @@ ClearReplies()
0x157: Pop(0)
0x158: Push((int) 541783)
0x159: Push((int) 26021)
0x15a: Push((int) 43989)
0x15b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15c: Pop(3)
0x15d: Push((int) 541784)
0x15e: Push((int) 43991)
0x15f: Push((int) 43990)
0x160: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x161: Pop(3)
0x162: Return(); Pop(0)

0x163: Push((int) 43991)
0x164: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x165: IF (Stack[-1] == 0) GOTO 0x17a; Pop(1)

0x166: PushEmpty(string)
0x167: Stack[-1] = "Autizm"
0x168: Call2 0xc1

0x169: Pop(1)
0x16a: Push((int) 541785)
0x16b: @@ SetMessage(Stack[-1])
0x16c: Pop(1)
0x16d: @@ ClearReplies()
0x16e: Pop(0)
0x16f: Push((int) 541786)
0x170: Push((int) 43995)
0x171: Push((int) 43992)
0x172: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x173: Pop(3)
0x174: Push((int) 541787)
0x175: Push((int) 43994)
0x176: Push((int) 43993)
0x177: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x178: Pop(3)
0x179: Return(); Pop(0)

0x17a: Push((int) 43994)
0x17b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17c: IF (Stack[-1] == 0) GOTO 0x18c; Pop(1)

0x17d: PushEmpty(string)
0x17e: Stack[-1] = "Autizm"
0x17f: Call2 0xc1

0x180: Pop(1)
0x181: Push((int) 541788)
0x182: @@ SetMessage(Stack[-1])
0x183: Pop(1)
0x184: @@ ClearReplies()
0x185: Pop(0)
0x186: Push((int) 541791)
0x187: Push((int) 26021)
0x188: Push((int) 43997)
0x189: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18a: Pop(3)
0x18b: Return(); Pop(0)

0x18c: Push((int) 43995)
0x18d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18e: IF (Stack[-1] == 0) GOTO 0x19e; Pop(1)

0x18f: PushEmpty(string)
0x190: Stack[-1] = "Pain"
0x191: Call2 0xc1

0x192: Pop(1)
0x193: Push((int) 541789)
0x194: @@ SetMessage(Stack[-1])
0x195: Pop(1)
0x196: @@ ClearReplies()
0x197: Pop(0)
0x198: Push((int) 541790)
0x199: Push((int) 26021)
0x19a: Push((int) 43996)
0x19b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19c: Pop(3)
0x19d: Return(); Pop(0)

0x19e: Push((int) 26021)
0x19f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a0: IF (Stack[-1] == 0) GOTO 0x1b5; Pop(1)

0x1a1: PushEmpty(string)
0x1a2: Stack[-1] = "Disturbance"
0x1a3: Call2 0xc1

0x1a4: Pop(1)
0x1a5: Push((int) 524682)
0x1a6: @@ SetMessage(Stack[-1])
0x1a7: Pop(1)
0x1a8: @@ ClearReplies()
0x1a9: Pop(0)
0x1aa: Push((int) 541792)
0x1ab: Push((int) 44001)
0x1ac: Push((int) 44000)
0x1ad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ae: Pop(3)
0x1af: Push((int) 541794)
0x1b0: Push((int) 44001)
0x1b1: Push((int) 44002)
0x1b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b3: Pop(3)
0x1b4: Return(); Pop(0)

0x1b5: Push((int) 44001)
0x1b6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b7: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1b8: PushEmpty(string)
0x1b9: Stack[-1] = "Disturbance"
0x1ba: Call2 0xc1

0x1bb: Pop(1)
0x1bc: Push((int) 541793)
0x1bd: @@ SetMessage(Stack[-1])
0x1be: Pop(1)
0x1bf: @@ ClearReplies()
0x1c0: Pop(0)
0x1c1: Push((int) 526310)
0x1c2: Push((int) 27593)
0x1c3: Push((int) 27592)
0x1c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c5: Pop(3)
0x1c6: Push((int) 541702)
0x1c7: Push((int) 44004)
0x1c8: Push((int) 43885)
0x1c9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ca: Pop(3)
0x1cb: Return(); Pop(0)

0x1cc: Push((int) 44004)
0x1cd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ce: IF (Stack[-1] == 0) GOTO 0x1de; Pop(1)

0x1cf: PushEmpty(string)
0x1d0: Stack[-1] = "Neutral"
0x1d1: Call2 0xc1

0x1d2: Pop(1)
0x1d3: Push((int) 541795)
0x1d4: @@ SetMessage(Stack[-1])
0x1d5: Pop(1)
0x1d6: @@ ClearReplies()
0x1d7: Pop(0)
0x1d8: Push((int) 541796)
0x1d9: Push((int) 27593)
0x1da: Push((int) 44005)
0x1db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1dc: Pop(3)
0x1dd: Return(); Pop(0)

0x1de: Push((int) 27593)
0x1df: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e0: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1e1: PushEmpty(string)
0x1e2: Stack[-1] = "Pain"
0x1e3: Call2 0xc1

0x1e4: Pop(1)
0x1e5: Push((int) 526311)
0x1e6: @@ SetMessage(Stack[-1])
0x1e7: Pop(1)
0x1e8: @@ ClearReplies()
0x1e9: Pop(0)
0x1ea: Push((int) 526312)
0x1eb: Push((int) 27595)
0x1ec: Push((int) 27594)
0x1ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ee: Pop(3)
0x1ef: Push((int) 541751)
0x1f0: Push((int) 43953)
0x1f1: Push((int) 43952)
0x1f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f3: Pop(3)
0x1f4: Return(); Pop(0)

0x1f5: Push((int) 43953)
0x1f6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f7: IF (Stack[-1] == 0) GOTO 0x207; Pop(1)

0x1f8: PushEmpty(string)
0x1f9: Stack[-1] = "Neutral"
0x1fa: Call2 0xc1

0x1fb: Pop(1)
0x1fc: Push((int) 541752)
0x1fd: @@ SetMessage(Stack[-1])
0x1fe: Pop(1)
0x1ff: @@ ClearReplies()
0x200: Pop(0)
0x201: Push((int) 541753)
0x202: Push((int) 27595)
0x203: Push((int) 43954)
0x204: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x205: Pop(3)
0x206: Return(); Pop(0)

0x207: Push((int) 27595)
0x208: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x209: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x20a: PushEmpty(string)
0x20b: Stack[-1] = "Neutral"
0x20c: Call2 0xc1

0x20d: Pop(1)
0x20e: Push((int) 526313)
0x20f: @@ SetMessage(Stack[-1])
0x210: Pop(1)
0x211: @@ ClearReplies()
0x212: Pop(0)
0x213: Push((int) 524683)
0x214: Push((int) -1)
0x215: Push((int) 26022)
0x216: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x217: Pop(3)
0x218: Push((int) 541754)
0x219: Push((int) -1)
0x21a: Push((int) 43956)
0x21b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21c: Pop(3)
0x21d: Return(); Pop(0)

0x21e: Push((int) 27581)
0x21f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x220: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x221: PushEmpty(string)
0x222: Stack[-1] = "Pain"
0x223: Call2 0xc1

0x224: Pop(1)
0x225: Push((int) 526301)
0x226: @@ SetMessage(Stack[-1])
0x227: Pop(1)
0x228: @@ ClearReplies()
0x229: Pop(0)
0x22a: Push((int) 526302)
0x22b: Push((int) 27579)
0x22c: Push((int) 27582)
0x22d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22e: Pop(3)
0x22f: Return(); Pop(0)

0x230: Push((int) 27579)
0x231: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x232: IF (Stack[-1] == 0) GOTO 0x247; Pop(1)

0x233: PushEmpty(string)
0x234: Stack[-1] = "Autizm"
0x235: Call2 0xc1

0x236: Pop(1)
0x237: Push((int) 526299)
0x238: @@ SetMessage(Stack[-1])
0x239: Pop(1)
0x23a: @@ ClearReplies()
0x23b: Pop(0)
0x23c: Push((int) 526303)
0x23d: Push((int) 27585)
0x23e: Push((int) 27584)
0x23f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x240: Pop(3)
0x241: Push((int) 541701)
0x242: Push((int) 27585)
0x243: Push((int) 43883)
0x244: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x245: Pop(3)
0x246: Return(); Pop(0)

0x247: Push((int) 27585)
0x248: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x249: IF (Stack[-1] == 0) GOTO 0x25e; Pop(1)

0x24a: PushEmpty(string)
0x24b: Stack[-1] = "Disturbance"
0x24c: Call2 0xc1

0x24d: Pop(1)
0x24e: Push((int) 526304)
0x24f: @@ SetMessage(Stack[-1])
0x250: Pop(1)
0x251: @@ ClearReplies()
0x252: Pop(0)
0x253: Push((int) 524645)
0x254: Push((int) 25985)
0x255: Push((int) 25984)
0x256: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x257: Pop(3)
0x258: Push((int) 526305)
0x259: Push((int) 25985)
0x25a: Push((int) 27586)
0x25b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x25c: Pop(3)
0x25d: Return(); Pop(0)

0x25e: Push((int) 25985)
0x25f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x260: IF (Stack[-1] == 0) GOTO 0x275; Pop(1)

0x261: PushEmpty(string)
0x262: Stack[-1] = "Disturbance"
0x263: Call2 0xc1

0x264: Pop(1)
0x265: Push((int) 524646)
0x266: @@ SetMessage(Stack[-1])
0x267: Pop(1)
0x268: @@ ClearReplies()
0x269: Pop(0)
0x26a: Push((int) 524647)
0x26b: Push((int) -1)
0x26c: Push((int) 25986)
0x26d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x26e: Pop(3)
0x26f: Push((int) 526306)
0x270: Push((int) 27589)
0x271: Push((int) 27588)
0x272: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x273: Pop(3)
0x274: Return(); Pop(0)

0x275: Push((int) 27589)
0x276: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x277: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x278: PushEmpty(string)
0x279: Stack[-1] = "Neutral"
0x27a: Call2 0xc1

0x27b: Pop(1)
0x27c: Push((int) 526307)
0x27d: @@ SetMessage(Stack[-1])
0x27e: Pop(1)
0x27f: @@ ClearReplies()
0x280: Pop(0)
0x281: Push((int) 526308)
0x282: Push((int) -1)
0x283: Push((int) 27590)
0x284: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x285: Pop(3)
0x286: Push((int) 526309)
0x287: Push((int) -1)
0x288: Push((int) 27591)
0x289: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x28a: Pop(3)
0x28b: Return(); Pop(0)

0x28c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x28d: PushEmpty(bool)
0x28e: Call2 0xdb6

0x28f: Pop(0)
0x290: IF (Stack[-1] == 0) GOTO 0x294; Pop(1)

0x291: @ lshStopAnimation()
0x292: Pop(0)
0x293: GOTO 0x296

0x294: @ StopAnimation()
0x295: Pop(0)
0x296: Return(); Pop(0)

0x297: GOTO 0xd8

0x298: Return(); Pop(0)

0x299: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x29a: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x29b: PushEmpty(bool, object, float)
0x29c: Stack[-2] = Stack[-12]
0x29d: Stack[-1] = (float) 70.0
0x29e: Call2 0xc45

0x29f: Pop(2)
0x2a0: Pop(1); Push((bool) Stack[-1] == 0)
0x2a1: IF (Stack[-1] == 0) GOTO 0x2a4; Pop(1)

0x2a2: Stack[-10] = (int) -2
0x2a3: Return(); Pop(8)

0x2a4: @ CreateDialog(Stack[-4])
0x2a5: Pop(0)
0x2a6: PushEmpty(int)
0x2a7: Call2 0xdb0

0x2a8: Pop(0)
0x2a9: @@ SetNPCName(Stack[-1])
0x2aa: Pop(1)
0x2ab: PushEmpty(int)
0x2ac: Call2 0xdae

0x2ad: Pop(0)
0x2ae: @@ SetNPCDescription(Stack[-1])
0x2af: Pop(1)
0x2b0: PushEmpty(string)
0x2b1: Call2 0xdb2

0x2b2: Pop(0)
0x2b3: @@ SetPhoto(Stack[-1])
0x2b4: Pop(1)
0x2b5: PushEmpty(string)
0x2b6: Call2 0xdb4

0x2b7: Pop(0)
0x2b8: @@ SetPhoto2(Stack[-1])
0x2b9: Pop(1)
0x2ba: PushEmpty(int)
0x2bb: Call2 0xf86

0x2bc: Pop(0)
0x2bd: @@ SetPlayerName(Stack[-1])
0x2be: Pop(1)
0x2bf: Stack[-2] = (int) -1
0x2c0: @ IsOverrideActive(Stack[-3])
0x2c1: Pop(0)
0x2c2: Push(Stack[-3])
0x2c3: IF (Stack[-1] == 0) GOTO 0x2c6; Pop(1)

0x2c4: Stack[-10] = (int) -2
0x2c5: Return(); Pop(8)

0x2c6: @ DoDialog(Stack[-4])
0x2c7: Pop(0)
0x2c8: PushEmpty(bool, object)
0x2c9: PushEmpty(object)
0x2ca: Call2 0xd5b

0x2cb: Stack[-2] = Stack[-1]
0x2cc: Pop(1)
0x2cd: Call2 0xc9c

0x2ce: Pop(2)
0x2cf: PushEmpty(object, object)
0x2d0: Stack[-2] = Stack[-11]
0x2d1: Stack[-1] = Stack[-6]
0x2d2: Push(-2, 4); TaskCall(3)
0x2d3: Call2 0x2ea

0x2d4: Pop(-2, 4); TaskReturn
0x2d5: Pop(2)
0x2d6: @@ IsDialogEnd(Stack[-1])
0x2d7: Pop(0)
0x2d8: Pop(0); Push((bool) Stack[-1] == 0)
0x2d9: IF (Stack[-1] == 0) GOTO 0x2df; Pop(1)

0x2da: @ sync()
0x2db: Pop(0)
0x2dc: @@ IsDialogEnd(Stack[-1])
0x2dd: Pop(0)
0x2de: GOTO 0x2d8

0x2df: PushEmpty(object)
0x2e0: Stack[-1] = Stack[-10]
0x2e1: Call2 0xc8a

0x2e2: Pop(1)
0x2e3: @ StopDialog(Stack[-4])
0x2e4: Pop(0)
0x2e5: @@ GetReturnValue(Stack[-2])
0x2e6: Pop(0)
0x2e7: Stack[-10] = Stack[-2]
0x2e8: Return(); Pop(8)

0x2e9: Stack[-4] = 0
0x2ea: PushEmpty()
0x2eb: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x2ec: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x2ed: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x2ee: Push((int) 1)
0x2ef: IF (Stack[-1] == 0) GOTO 0x343; Pop(1)

0x2f0: PushEmpty(string)
0x2f1: Stack[-1] = "Neutral"
0x2f2: Call2 0x361

0x2f3: Pop(1)
0x2f4: Push((int) 525297)
0x2f5: @@ SetMessage(Stack[-1])
0x2f6: Pop(1)
0x2f7: @@ ClearReplies()
0x2f8: Pop(0)
0x2f9: PushEmpty(bool)
0x2fa: Stack[-1] = (bool) 1
0x2fb: PushEmpty(bool)
0x2fc: Stack[-1] = (bool) 0
0x2fd: PushEmpty(bool, object)
0x2fe: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2ff: Call2 0xe9a

0x300: Pop(1)
0x301: IF (Stack[-1] == 0) GOTO 0x308; Pop(1)

0x302: PushEmpty(bool, object)
0x303: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x304: Call2 0xe82

0x305: Pop(1)
0x306: IF (Stack[-1] == 0) GOTO 0x308; Pop(1)

0x307: Stack[-1] = (bool) 1
0x308: IF (Stack[-1] == 0) GOTO 0x318; Pop(1)

0x309: PushEmpty(bool)
0x30a: Stack[-1] = (bool) 0
0x30b: PushEmpty(bool, object)
0x30c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x30d: Call2 0xe8e

0x30e: Pop(1)
0x30f: IF (Stack[-1] == 0) GOTO 0x316; Pop(1)

0x310: PushEmpty(bool, object)
0x311: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x312: Call2 0xe9a

0x313: Pop(1)
0x314: IF (Stack[-1] == 0) GOTO 0x316; Pop(1)

0x315: Stack[-1] = (bool) 1
0x316: IF (Stack[-1] == 0) GOTO 0x318; Pop(1)

0x317: Stack[-1] = (bool) 0
0x318: IF (Stack[-1] == 0) GOTO 0x31e; Pop(1)

0x319: Push((int) 525298)
0x31a: Push((int) 26667)
0x31b: Push((int) 26666)
0x31c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x31d: Pop(3)
0x31e: PushEmpty(bool)
0x31f: Stack[-1] = (bool) 0
0x320: PushEmpty(bool)
0x321: Stack[-1] = (bool) 0
0x322: PushEmpty(bool, object)
0x323: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x324: Call2 0xe82

0x325: Pop(1)
0x326: IF (Stack[-1] == 0) GOTO 0x32e; Pop(1)

0x327: PushEmpty(bool, object)
0x328: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x329: Call2 0xe9a

0x32a: Pop(1)
0x32b: Pop(1); Push((bool) Stack[-1] == 0)
0x32c: IF (Stack[-1] == 0) GOTO 0x32e; Pop(1)

0x32d: Stack[-1] = (bool) 1
0x32e: IF (Stack[-1] == 0) GOTO 0x335; Pop(1)

0x32f: PushEmpty(bool, object)
0x330: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x331: Call2 0xeb9

0x332: Pop(1)
0x333: IF (Stack[-1] == 0) GOTO 0x335; Pop(1)

0x334: Stack[-1] = (bool) 1
0x335: IF (Stack[-1] == 0) GOTO 0x33b; Pop(1)

0x336: Push((int) 525310)
0x337: Push((int) 26679)
0x338: Push((int) 26678)
0x339: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x33a: Pop(3)
0x33b: Push((int) 525305)
0x33c: Push((int) -1)
0x33d: Push((int) 26673)
0x33e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x33f: Pop(3)
0x340: GOTO 0x343

0x341: Return(); Pop(0)

0x342: GOTO 0x2ee

0x343: PushEmpty(bool)
0x344: Call2 0xdb6

0x345: Pop(0)
0x346: IF (Stack[-1] == 0) GOTO 0x352; Pop(1)

0x347: @ lshWaitForAnimEnd()
0x348: Pop(0)
0x349: Push( Stack[3 + Tasks[-1].StackPointer] )
0x34a: IF (Stack[-1] == 0) GOTO 0x34c; Pop(1)

0x34b: GOTO 0x351

0x34c: PushEmpty(string)
0x34d: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x34e: Call2 0xd26

0x34f: Pop(1)
0x350: GOTO 0x347

0x351: GOTO 0x360

0x352: Push("all")
0x353: Push("idle")
0x354: @ PlayAnimation(Stack[-2], Stack[-1])
0x355: Pop(2)
0x356: @ WaitForAnimEnd()
0x357: Pop(0)
0x358: Push( Stack[3 + Tasks[-1].StackPointer] )
0x359: IF (Stack[-1] == 0) GOTO 0x35b; Pop(1)

0x35a: GOTO 0x360

0x35b: Push("all")
0x35c: Push("idle")
0x35d: @ PlayAnimation(Stack[-2], Stack[-1])
0x35e: Pop(2)
0x35f: GOTO 0x356

0x360: Return(); Pop(0)

0x361: PushEmpty()
0x362: PushEmpty(bool)
0x363: Call2 0xdb6

0x364: Pop(0)
0x365: Pop(1); Push((bool) Stack[-1] == 0)
0x366: IF (Stack[-1] == 0) GOTO 0x368; Pop(1)

0x367: Return(); Pop(0)

0x368: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x369: IF (Stack[-1] == 0) GOTO 0x36b; Pop(1)

0x36a: Return(); Pop(0)

0x36b: PushEmpty(string, bool)
0x36c: Stack[-2] = Stack[-3]
0x36d: Push("")
0x36e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x36f: IF (Stack[-1] == 0) GOTO 0x372; Pop(1)

0x370: Stack[-1] = (bool) 0
0x371: GOTO 0x373

0x372: Stack[-1] = (bool) 1
0x373: Call2 0xd36

0x374: Pop(2)
0x375: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x376: Return(); Pop(0)

0x377: PushEmpty()
0x378: Push((int) 1)
0x379: IF (Stack[-1] == 0) GOTO 0x523; Pop(1)

0x37a: PushEmpty()
0x37b: Call2 0xd54

0x37c: Pop(0)
0x37d: Push((int) 26672)
0x37e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x37f: IF (Stack[-1] == 0) GOTO 0x38a; Pop(1)

0x380: PushEmpty(object, object)
0x381: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x382: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x383: Call2 0xdeb

0x384: Pop(2)
0x385: PushEmpty(object, object)
0x386: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x387: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x388: Call2 0xe52

0x389: Pop(2)
0x38a: Push((int) 30634)
0x38b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x38c: IF (Stack[-1] == 0) GOTO 0x397; Pop(1)

0x38d: PushEmpty(object, object)
0x38e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x38f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x390: Call2 0xdeb

0x391: Pop(2)
0x392: PushEmpty(object, object)
0x393: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x394: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x395: Call2 0xe52

0x396: Pop(2)
0x397: Push((int) 26678)
0x398: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x399: IF (Stack[-1] == 0) GOTO 0x39f; Pop(1)

0x39a: PushEmpty(object, object)
0x39b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x39c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x39d: Call2 0xe00

0x39e: Pop(2)
0x39f: Push((int) 26665)
0x3a0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3a1: IF (Stack[-1] == 0) GOTO 0x3f3; Pop(1)

0x3a2: PushEmpty(string)
0x3a3: Stack[-1] = "Neutral"
0x3a4: Call2 0x361

0x3a5: Pop(1)
0x3a6: Push((int) 525297)
0x3a7: @@ SetMessage(Stack[-1])
0x3a8: Pop(1)
0x3a9: @@ ClearReplies()
0x3aa: Pop(0)
0x3ab: PushEmpty(bool)
0x3ac: Stack[-1] = (bool) 1
0x3ad: PushEmpty(bool)
0x3ae: Stack[-1] = (bool) 0
0x3af: PushEmpty(bool, object)
0x3b0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3b1: Call2 0xe9a

0x3b2: Pop(1)
0x3b3: IF (Stack[-1] == 0) GOTO 0x3ba; Pop(1)

0x3b4: PushEmpty(bool, object)
0x3b5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3b6: Call2 0xe82

0x3b7: Pop(1)
0x3b8: IF (Stack[-1] == 0) GOTO 0x3ba; Pop(1)

0x3b9: Stack[-1] = (bool) 1
0x3ba: IF (Stack[-1] == 0) GOTO 0x3ca; Pop(1)

0x3bb: PushEmpty(bool)
0x3bc: Stack[-1] = (bool) 0
0x3bd: PushEmpty(bool, object)
0x3be: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3bf: Call2 0xe8e

0x3c0: Pop(1)
0x3c1: IF (Stack[-1] == 0) GOTO 0x3c8; Pop(1)

0x3c2: PushEmpty(bool, object)
0x3c3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3c4: Call2 0xe9a

0x3c5: Pop(1)
0x3c6: IF (Stack[-1] == 0) GOTO 0x3c8; Pop(1)

0x3c7: Stack[-1] = (bool) 1
0x3c8: IF (Stack[-1] == 0) GOTO 0x3ca; Pop(1)

0x3c9: Stack[-1] = (bool) 0
0x3ca: IF (Stack[-1] == 0) GOTO 0x3d0; Pop(1)

0x3cb: Push((int) 525298)
0x3cc: Push((int) 26667)
0x3cd: Push((int) 26666)
0x3ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3cf: Pop(3)
0x3d0: PushEmpty(bool)
0x3d1: Stack[-1] = (bool) 0
0x3d2: PushEmpty(bool)
0x3d3: Stack[-1] = (bool) 0
0x3d4: PushEmpty(bool, object)
0x3d5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3d6: Call2 0xe82

0x3d7: Pop(1)
0x3d8: IF (Stack[-1] == 0) GOTO 0x3e0; Pop(1)

0x3d9: PushEmpty(bool, object)
0x3da: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3db: Call2 0xe9a

0x3dc: Pop(1)
0x3dd: Pop(1); Push((bool) Stack[-1] == 0)
0x3de: IF (Stack[-1] == 0) GOTO 0x3e0; Pop(1)

0x3df: Stack[-1] = (bool) 1
0x3e0: IF (Stack[-1] == 0) GOTO 0x3e7; Pop(1)

0x3e1: PushEmpty(bool, object)
0x3e2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3e3: Call2 0xeb9

0x3e4: Pop(1)
0x3e5: IF (Stack[-1] == 0) GOTO 0x3e7; Pop(1)

0x3e6: Stack[-1] = (bool) 1
0x3e7: IF (Stack[-1] == 0) GOTO 0x3ed; Pop(1)

0x3e8: Push((int) 525310)
0x3e9: Push((int) 26679)
0x3ea: Push((int) 26678)
0x3eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ec: Pop(3)
0x3ed: Push((int) 525305)
0x3ee: Push((int) -1)
0x3ef: Push((int) 26673)
0x3f0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f1: Pop(3)
0x3f2: Return(); Pop(0)

0x3f3: Push((int) 26679)
0x3f4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3f5: IF (Stack[-1] == 0) GOTO 0x40a; Pop(1)

0x3f6: PushEmpty(string)
0x3f7: Stack[-1] = "Disturbance"
0x3f8: Call2 0x361

0x3f9: Pop(1)
0x3fa: Push((int) 525311)
0x3fb: @@ SetMessage(Stack[-1])
0x3fc: Pop(1)
0x3fd: @@ ClearReplies()
0x3fe: Pop(0)
0x3ff: Push((int) 525312)
0x400: Push((int) 42889)
0x401: Push((int) 26680)
0x402: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x403: Pop(3)
0x404: Push((int) 540831)
0x405: Push((int) -1)
0x406: Push((int) 42888)
0x407: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x408: Pop(3)
0x409: Return(); Pop(0)

0x40a: Push((int) 42889)
0x40b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x40c: IF (Stack[-1] == 0) GOTO 0x421; Pop(1)

0x40d: PushEmpty(string)
0x40e: Stack[-1] = "Pain"
0x40f: Call2 0x361

0x410: Pop(1)
0x411: Push((int) 540832)
0x412: @@ SetMessage(Stack[-1])
0x413: Pop(1)
0x414: @@ ClearReplies()
0x415: Pop(0)
0x416: Push((int) 540833)
0x417: Push((int) -1)
0x418: Push((int) 42890)
0x419: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x41a: Pop(3)
0x41b: Push((int) 540834)
0x41c: Push((int) -1)
0x41d: Push((int) 42891)
0x41e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x41f: Pop(3)
0x420: Return(); Pop(0)

0x421: Push((int) 26667)
0x422: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x423: IF (Stack[-1] == 0) GOTO 0x438; Pop(1)

0x424: PushEmpty(string)
0x425: Stack[-1] = "Autizm"
0x426: Call2 0x361

0x427: Pop(1)
0x428: Push((int) 525299)
0x429: @@ SetMessage(Stack[-1])
0x42a: Pop(1)
0x42b: @@ ClearReplies()
0x42c: Pop(0)
0x42d: Push((int) 529180)
0x42e: Push((int) 30631)
0x42f: Push((int) 30630)
0x430: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x431: Pop(3)
0x432: Push((int) 540812)
0x433: Push((int) 30633)
0x434: Push((int) 42864)
0x435: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x436: Pop(3)
0x437: Return(); Pop(0)

0x438: Push((int) 30631)
0x439: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x43a: IF (Stack[-1] == 0) GOTO 0x44a; Pop(1)

0x43b: PushEmpty(string)
0x43c: Stack[-1] = "Autizm"
0x43d: Call2 0x361

0x43e: Pop(1)
0x43f: Push((int) 529181)
0x440: @@ SetMessage(Stack[-1])
0x441: Pop(1)
0x442: @@ ClearReplies()
0x443: Pop(0)
0x444: Push((int) 529182)
0x445: Push((int) 30633)
0x446: Push((int) 30632)
0x447: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x448: Pop(3)
0x449: Return(); Pop(0)

0x44a: Push((int) 30633)
0x44b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x44c: IF (Stack[-1] == 0) GOTO 0x461; Pop(1)

0x44d: PushEmpty(string)
0x44e: Stack[-1] = "Welldie"
0x44f: Call2 0x361

0x450: Pop(1)
0x451: Push((int) 529183)
0x452: @@ SetMessage(Stack[-1])
0x453: Pop(1)
0x454: @@ ClearReplies()
0x455: Pop(0)
0x456: Push((int) 525300)
0x457: Push((int) 26669)
0x458: Push((int) 26668)
0x459: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x45a: Pop(3)
0x45b: Push((int) 540813)
0x45c: Push((int) 42867)
0x45d: Push((int) 42866)
0x45e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x45f: Pop(3)
0x460: Return(); Pop(0)

0x461: Push((int) 42867)
0x462: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x463: IF (Stack[-1] == 0) GOTO 0x478; Pop(1)

0x464: PushEmpty(string)
0x465: Stack[-1] = "Disturbance"
0x466: Call2 0x361

0x467: Pop(1)
0x468: Push((int) 540814)
0x469: @@ SetMessage(Stack[-1])
0x46a: Pop(1)
0x46b: @@ ClearReplies()
0x46c: Pop(0)
0x46d: Push((int) 540819)
0x46e: Push((int) 26669)
0x46f: Push((int) 42872)
0x470: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x471: Pop(3)
0x472: Push((int) 540820)
0x473: Push((int) 42875)
0x474: Push((int) 42874)
0x475: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x476: Pop(3)
0x477: Return(); Pop(0)

0x478: Push((int) 42875)
0x479: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x47a: IF (Stack[-1] == 0) GOTO 0x48a; Pop(1)

0x47b: PushEmpty(string)
0x47c: Stack[-1] = "Neutral"
0x47d: Call2 0x361

0x47e: Pop(1)
0x47f: Push((int) 540821)
0x480: @@ SetMessage(Stack[-1])
0x481: Pop(1)
0x482: @@ ClearReplies()
0x483: Pop(0)
0x484: Push((int) 540822)
0x485: Push((int) 42868)
0x486: Push((int) 42876)
0x487: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x488: Pop(3)
0x489: Return(); Pop(0)

0x48a: Push((int) 26669)
0x48b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x48c: IF (Stack[-1] == 0) GOTO 0x4a1; Pop(1)

0x48d: PushEmpty(string)
0x48e: Stack[-1] = "Welldie"
0x48f: Call2 0x361

0x490: Pop(1)
0x491: Push((int) 525301)
0x492: @@ SetMessage(Stack[-1])
0x493: Pop(1)
0x494: @@ ClearReplies()
0x495: Pop(0)
0x496: Push((int) 525302)
0x497: Push((int) 42868)
0x498: Push((int) 26670)
0x499: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x49a: Pop(3)
0x49b: Push((int) 540826)
0x49c: Push((int) 42882)
0x49d: Push((int) 42881)
0x49e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x49f: Pop(3)
0x4a0: Return(); Pop(0)

0x4a1: Push((int) 42882)
0x4a2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4a3: IF (Stack[-1] == 0) GOTO 0x4b3; Pop(1)

0x4a4: PushEmpty(string)
0x4a5: Stack[-1] = "Welldie"
0x4a6: Call2 0x361

0x4a7: Pop(1)
0x4a8: Push((int) 540827)
0x4a9: @@ SetMessage(Stack[-1])
0x4aa: Pop(1)
0x4ab: @@ ClearReplies()
0x4ac: Pop(0)
0x4ad: Push((int) 540828)
0x4ae: Push((int) 42879)
0x4af: Push((int) 42883)
0x4b0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b1: Pop(3)
0x4b2: Return(); Pop(0)

0x4b3: Push((int) 42868)
0x4b4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4b5: IF (Stack[-1] == 0) GOTO 0x4ca; Pop(1)

0x4b6: PushEmpty(string)
0x4b7: Stack[-1] = "Disturbance"
0x4b8: Call2 0x361

0x4b9: Pop(1)
0x4ba: Push((int) 540815)
0x4bb: @@ SetMessage(Stack[-1])
0x4bc: Pop(1)
0x4bd: @@ ClearReplies()
0x4be: Pop(0)
0x4bf: Push((int) 540816)
0x4c0: Push((int) 42870)
0x4c1: Push((int) 42869)
0x4c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4c3: Pop(3)
0x4c4: Push((int) 540823)
0x4c5: Push((int) 42879)
0x4c6: Push((int) 42878)
0x4c7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4c8: Pop(3)
0x4c9: Return(); Pop(0)

0x4ca: Push((int) 42879)
0x4cb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4cc: IF (Stack[-1] == 0) GOTO 0x4dc; Pop(1)

0x4cd: PushEmpty(string)
0x4ce: Stack[-1] = "Neutral"
0x4cf: Call2 0x361

0x4d0: Pop(1)
0x4d1: Push((int) 540824)
0x4d2: @@ SetMessage(Stack[-1])
0x4d3: Pop(1)
0x4d4: @@ ClearReplies()
0x4d5: Pop(0)
0x4d6: Push((int) 540825)
0x4d7: Push((int) 42870)
0x4d8: Push((int) 42880)
0x4d9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4da: Pop(3)
0x4db: Return(); Pop(0)

0x4dc: Push((int) 42870)
0x4dd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4de: IF (Stack[-1] == 0) GOTO 0x4ee; Pop(1)

0x4df: PushEmpty(string)
0x4e0: Stack[-1] = "Pain"
0x4e1: Call2 0x361

0x4e2: Pop(1)
0x4e3: Push((int) 540817)
0x4e4: @@ SetMessage(Stack[-1])
0x4e5: Pop(1)
0x4e6: @@ ClearReplies()
0x4e7: Pop(0)
0x4e8: Push((int) 540818)
0x4e9: Push((int) 26671)
0x4ea: Push((int) 42871)
0x4eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ec: Pop(3)
0x4ed: Return(); Pop(0)

0x4ee: Push((int) 26671)
0x4ef: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4f0: IF (Stack[-1] == 0) GOTO 0x505; Pop(1)

0x4f1: PushEmpty(string)
0x4f2: Stack[-1] = "Pain"
0x4f3: Call2 0x361

0x4f4: Pop(1)
0x4f5: Push((int) 525303)
0x4f6: @@ SetMessage(Stack[-1])
0x4f7: Pop(1)
0x4f8: @@ ClearReplies()
0x4f9: Pop(0)
0x4fa: Push((int) 525304)
0x4fb: Push((int) -1)
0x4fc: Push((int) 26672)
0x4fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4fe: Pop(3)
0x4ff: Push((int) 540829)
0x500: Push((int) 42887)
0x501: Push((int) 42886)
0x502: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x503: Pop(3)
0x504: Return(); Pop(0)

0x505: Push((int) 42887)
0x506: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x507: IF (Stack[-1] == 0) GOTO 0x517; Pop(1)

0x508: PushEmpty(string)
0x509: Stack[-1] = "Neutral"
0x50a: Call2 0x361

0x50b: Pop(1)
0x50c: Push((int) 540830)
0x50d: @@ SetMessage(Stack[-1])
0x50e: Pop(1)
0x50f: @@ ClearReplies()
0x510: Pop(0)
0x511: Push((int) 529184)
0x512: Push((int) -1)
0x513: Push((int) 30634)
0x514: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x515: Pop(3)
0x516: Return(); Pop(0)

0x517: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x518: PushEmpty(bool)
0x519: Call2 0xdb6

0x51a: Pop(0)
0x51b: IF (Stack[-1] == 0) GOTO 0x51f; Pop(1)

0x51c: @ lshStopAnimation()
0x51d: Pop(0)
0x51e: GOTO 0x521

0x51f: @ StopAnimation()
0x520: Pop(0)
0x521: Return(); Pop(0)

0x522: GOTO 0x378

0x523: Return(); Pop(0)

0x524: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x525: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x526: PushEmpty(bool, object, float)
0x527: Stack[-2] = Stack[-12]
0x528: Stack[-1] = (float) 70.0
0x529: Call2 0xc45

0x52a: Pop(2)
0x52b: Pop(1); Push((bool) Stack[-1] == 0)
0x52c: IF (Stack[-1] == 0) GOTO 0x52f; Pop(1)

0x52d: Stack[-10] = (int) -2
0x52e: Return(); Pop(8)

0x52f: @ CreateDialog(Stack[-4])
0x530: Pop(0)
0x531: PushEmpty(int)
0x532: Call2 0xdb0

0x533: Pop(0)
0x534: @@ SetNPCName(Stack[-1])
0x535: Pop(1)
0x536: PushEmpty(int)
0x537: Call2 0xdae

0x538: Pop(0)
0x539: @@ SetNPCDescription(Stack[-1])
0x53a: Pop(1)
0x53b: PushEmpty(string)
0x53c: Call2 0xdb2

0x53d: Pop(0)
0x53e: @@ SetPhoto(Stack[-1])
0x53f: Pop(1)
0x540: PushEmpty(string)
0x541: Call2 0xdb4

0x542: Pop(0)
0x543: @@ SetPhoto2(Stack[-1])
0x544: Pop(1)
0x545: PushEmpty(int)
0x546: Call2 0xf86

0x547: Pop(0)
0x548: @@ SetPlayerName(Stack[-1])
0x549: Pop(1)
0x54a: Stack[-2] = (int) -1
0x54b: @ IsOverrideActive(Stack[-3])
0x54c: Pop(0)
0x54d: Push(Stack[-3])
0x54e: IF (Stack[-1] == 0) GOTO 0x551; Pop(1)

0x54f: Stack[-10] = (int) -2
0x550: Return(); Pop(8)

0x551: @ DoDialog(Stack[-4])
0x552: Pop(0)
0x553: PushEmpty(bool, object)
0x554: PushEmpty(object)
0x555: Call2 0xd5b

0x556: Stack[-2] = Stack[-1]
0x557: Pop(1)
0x558: Call2 0xc9c

0x559: Pop(2)
0x55a: PushEmpty(object, object)
0x55b: Stack[-2] = Stack[-11]
0x55c: Stack[-1] = Stack[-6]
0x55d: Push(-2, 4); TaskCall(5)
0x55e: Call2 0x575

0x55f: Pop(-2, 4); TaskReturn
0x560: Pop(2)
0x561: @@ IsDialogEnd(Stack[-1])
0x562: Pop(0)
0x563: Pop(0); Push((bool) Stack[-1] == 0)
0x564: IF (Stack[-1] == 0) GOTO 0x56a; Pop(1)

0x565: @ sync()
0x566: Pop(0)
0x567: @@ IsDialogEnd(Stack[-1])
0x568: Pop(0)
0x569: GOTO 0x563

0x56a: PushEmpty(object)
0x56b: Stack[-1] = Stack[-10]
0x56c: Call2 0xc8a

0x56d: Pop(1)
0x56e: @ StopDialog(Stack[-4])
0x56f: Pop(0)
0x570: @@ GetReturnValue(Stack[-2])
0x571: Pop(0)
0x572: Stack[-10] = Stack[-2]
0x573: Return(); Pop(8)

0x574: Stack[-4] = 0
0x575: PushEmpty()
0x576: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x577: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x578: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x579: Push((int) 1)
0x57a: IF (Stack[-1] == 0) GOTO 0x591; Pop(1)

0x57b: PushEmpty(string)
0x57c: Stack[-1] = "Neutral"
0x57d: Call2 0x5af

0x57e: Pop(1)
0x57f: Push((int) 525498)
0x580: @@ SetMessage(Stack[-1])
0x581: Pop(1)
0x582: @@ ClearReplies()
0x583: Pop(0)
0x584: Push((int) 525499)
0x585: Push((int) -1)
0x586: Push((int) 26855)
0x587: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x588: Pop(3)
0x589: Push((int) 526256)
0x58a: Push((int) -1)
0x58b: Push((int) 27530)
0x58c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x58d: Pop(3)
0x58e: GOTO 0x591

0x58f: Return(); Pop(0)

0x590: GOTO 0x579

0x591: PushEmpty(bool)
0x592: Call2 0xdb6

0x593: Pop(0)
0x594: IF (Stack[-1] == 0) GOTO 0x5a0; Pop(1)

0x595: @ lshWaitForAnimEnd()
0x596: Pop(0)
0x597: Push( Stack[3 + Tasks[-1].StackPointer] )
0x598: IF (Stack[-1] == 0) GOTO 0x59a; Pop(1)

0x599: GOTO 0x59f

0x59a: PushEmpty(string)
0x59b: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x59c: Call2 0xd26

0x59d: Pop(1)
0x59e: GOTO 0x595

0x59f: GOTO 0x5ae

0x5a0: Push("all")
0x5a1: Push("idle")
0x5a2: @ PlayAnimation(Stack[-2], Stack[-1])
0x5a3: Pop(2)
0x5a4: @ WaitForAnimEnd()
0x5a5: Pop(0)
0x5a6: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5a7: IF (Stack[-1] == 0) GOTO 0x5a9; Pop(1)

0x5a8: GOTO 0x5ae

0x5a9: Push("all")
0x5aa: Push("idle")
0x5ab: @ PlayAnimation(Stack[-2], Stack[-1])
0x5ac: Pop(2)
0x5ad: GOTO 0x5a4

0x5ae: Return(); Pop(0)

0x5af: PushEmpty()
0x5b0: PushEmpty(bool)
0x5b1: Call2 0xdb6

0x5b2: Pop(0)
0x5b3: Pop(1); Push((bool) Stack[-1] == 0)
0x5b4: IF (Stack[-1] == 0) GOTO 0x5b6; Pop(1)

0x5b5: Return(); Pop(0)

0x5b6: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x5b7: IF (Stack[-1] == 0) GOTO 0x5b9; Pop(1)

0x5b8: Return(); Pop(0)

0x5b9: PushEmpty(string, bool)
0x5ba: Stack[-2] = Stack[-3]
0x5bb: Push("")
0x5bc: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x5bd: IF (Stack[-1] == 0) GOTO 0x5c0; Pop(1)

0x5be: Stack[-1] = (bool) 0
0x5bf: GOTO 0x5c1

0x5c0: Stack[-1] = (bool) 1
0x5c1: Call2 0xd36

0x5c2: Pop(2)
0x5c3: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x5c4: Return(); Pop(0)

0x5c5: PushEmpty()
0x5c6: Push((int) 1)
0x5c7: IF (Stack[-1] == 0) GOTO 0x5ee; Pop(1)

0x5c8: PushEmpty()
0x5c9: Call2 0xd54

0x5ca: Pop(0)
0x5cb: Push((int) 26854)
0x5cc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5cd: IF (Stack[-1] == 0) GOTO 0x5e2; Pop(1)

0x5ce: PushEmpty(string)
0x5cf: Stack[-1] = "Neutral"
0x5d0: Call2 0x5af

0x5d1: Pop(1)
0x5d2: Push((int) 525498)
0x5d3: @@ SetMessage(Stack[-1])
0x5d4: Pop(1)
0x5d5: @@ ClearReplies()
0x5d6: Pop(0)
0x5d7: Push((int) 525499)
0x5d8: Push((int) -1)
0x5d9: Push((int) 26855)
0x5da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5db: Pop(3)
0x5dc: Push((int) 526256)
0x5dd: Push((int) -1)
0x5de: Push((int) 27530)
0x5df: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5e0: Pop(3)
0x5e1: Return(); Pop(0)

0x5e2: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x5e3: PushEmpty(bool)
0x5e4: Call2 0xdb6

0x5e5: Pop(0)
0x5e6: IF (Stack[-1] == 0) GOTO 0x5ea; Pop(1)

0x5e7: @ lshStopAnimation()
0x5e8: Pop(0)
0x5e9: GOTO 0x5ec

0x5ea: @ StopAnimation()
0x5eb: Pop(0)
0x5ec: Return(); Pop(0)

0x5ed: GOTO 0x5c6

0x5ee: Return(); Pop(0)

0x5ef: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x5f0: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x5f1: PushEmpty(bool, object, float)
0x5f2: Stack[-2] = Stack[-12]
0x5f3: Stack[-1] = (float) 70.0
0x5f4: Call2 0xc45

0x5f5: Pop(2)
0x5f6: Pop(1); Push((bool) Stack[-1] == 0)
0x5f7: IF (Stack[-1] == 0) GOTO 0x5fa; Pop(1)

0x5f8: Stack[-10] = (int) -2
0x5f9: Return(); Pop(8)

0x5fa: @ CreateDialog(Stack[-4])
0x5fb: Pop(0)
0x5fc: PushEmpty(int)
0x5fd: Call2 0xdb0

0x5fe: Pop(0)
0x5ff: @@ SetNPCName(Stack[-1])
0x600: Pop(1)
0x601: PushEmpty(int)
0x602: Call2 0xdae

0x603: Pop(0)
0x604: @@ SetNPCDescription(Stack[-1])
0x605: Pop(1)
0x606: PushEmpty(string)
0x607: Call2 0xdb2

0x608: Pop(0)
0x609: @@ SetPhoto(Stack[-1])
0x60a: Pop(1)
0x60b: PushEmpty(string)
0x60c: Call2 0xdb4

0x60d: Pop(0)
0x60e: @@ SetPhoto2(Stack[-1])
0x60f: Pop(1)
0x610: PushEmpty(int)
0x611: Call2 0xf86

0x612: Pop(0)
0x613: @@ SetPlayerName(Stack[-1])
0x614: Pop(1)
0x615: Stack[-2] = (int) -1
0x616: @ IsOverrideActive(Stack[-3])
0x617: Pop(0)
0x618: Push(Stack[-3])
0x619: IF (Stack[-1] == 0) GOTO 0x61c; Pop(1)

0x61a: Stack[-10] = (int) -2
0x61b: Return(); Pop(8)

0x61c: @ DoDialog(Stack[-4])
0x61d: Pop(0)
0x61e: PushEmpty(bool, object)
0x61f: PushEmpty(object)
0x620: Call2 0xd5b

0x621: Stack[-2] = Stack[-1]
0x622: Pop(1)
0x623: Call2 0xc9c

0x624: Pop(2)
0x625: PushEmpty(object, object)
0x626: Stack[-2] = Stack[-11]
0x627: Stack[-1] = Stack[-6]
0x628: Push(-2, 4); TaskCall(7)
0x629: Call2 0x640

0x62a: Pop(-2, 4); TaskReturn
0x62b: Pop(2)
0x62c: @@ IsDialogEnd(Stack[-1])
0x62d: Pop(0)
0x62e: Pop(0); Push((bool) Stack[-1] == 0)
0x62f: IF (Stack[-1] == 0) GOTO 0x635; Pop(1)

0x630: @ sync()
0x631: Pop(0)
0x632: @@ IsDialogEnd(Stack[-1])
0x633: Pop(0)
0x634: GOTO 0x62e

0x635: PushEmpty(object)
0x636: Stack[-1] = Stack[-10]
0x637: Call2 0xc8a

0x638: Pop(1)
0x639: @ StopDialog(Stack[-4])
0x63a: Pop(0)
0x63b: @@ GetReturnValue(Stack[-2])
0x63c: Pop(0)
0x63d: Stack[-10] = Stack[-2]
0x63e: Return(); Pop(8)

0x63f: Stack[-4] = 0
0x640: PushEmpty()
0x641: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x642: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x643: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x644: Push((int) 1)
0x645: IF (Stack[-1] == 0) GOTO 0x67f; Pop(1)

0x646: PushEmpty(bool, object)
0x647: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x648: Call2 0xec5

0x649: Pop(1)
0x64a: IF (Stack[-1] == 0) GOTO 0x669; Pop(1)

0x64b: PushEmpty(object, object)
0x64c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x64d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x64e: Call2 0xe20

0x64f: Pop(2)
0x650: PushEmpty(object, object)
0x651: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x652: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x653: Call2 0xe26

0x654: Pop(2)
0x655: PushEmpty(string)
0x656: Stack[-1] = "Autizm"
0x657: Call2 0x69d

0x658: Pop(1)
0x659: Push((int) 525944)
0x65a: @@ SetMessage(Stack[-1])
0x65b: Pop(1)
0x65c: @@ ClearReplies()
0x65d: Pop(0)
0x65e: Push((int) 542433)
0x65f: Push((int) 44818)
0x660: Push((int) 44817)
0x661: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x662: Pop(3)
0x663: Push((int) 542438)
0x664: Push((int) 44824)
0x665: Push((int) 44822)
0x666: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x667: Pop(3)
0x668: GOTO 0x67f

0x669: PushEmpty(string)
0x66a: Stack[-1] = "Neutral"
0x66b: Call2 0x69d

0x66c: Pop(1)
0x66d: Push((int) 525948)
0x66e: @@ SetMessage(Stack[-1])
0x66f: Pop(1)
0x670: @@ ClearReplies()
0x671: Pop(0)
0x672: Push((int) 525949)
0x673: Push((int) -1)
0x674: Push((int) 27233)
0x675: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x676: Pop(3)
0x677: Push((int) 529092)
0x678: Push((int) -1)
0x679: Push((int) 30537)
0x67a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67b: Pop(3)
0x67c: GOTO 0x67f

0x67d: Return(); Pop(0)

0x67e: GOTO 0x644

0x67f: PushEmpty(bool)
0x680: Call2 0xdb6

0x681: Pop(0)
0x682: IF (Stack[-1] == 0) GOTO 0x68e; Pop(1)

0x683: @ lshWaitForAnimEnd()
0x684: Pop(0)
0x685: Push( Stack[3 + Tasks[-1].StackPointer] )
0x686: IF (Stack[-1] == 0) GOTO 0x688; Pop(1)

0x687: GOTO 0x68d

0x688: PushEmpty(string)
0x689: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x68a: Call2 0xd26

0x68b: Pop(1)
0x68c: GOTO 0x683

0x68d: GOTO 0x69c

0x68e: Push("all")
0x68f: Push("idle")
0x690: @ PlayAnimation(Stack[-2], Stack[-1])
0x691: Pop(2)
0x692: @ WaitForAnimEnd()
0x693: Pop(0)
0x694: Push( Stack[3 + Tasks[-1].StackPointer] )
0x695: IF (Stack[-1] == 0) GOTO 0x697; Pop(1)

0x696: GOTO 0x69c

0x697: Push("all")
0x698: Push("idle")
0x699: @ PlayAnimation(Stack[-2], Stack[-1])
0x69a: Pop(2)
0x69b: GOTO 0x692

0x69c: Return(); Pop(0)

0x69d: PushEmpty()
0x69e: PushEmpty(bool)
0x69f: Call2 0xdb6

0x6a0: Pop(0)
0x6a1: Pop(1); Push((bool) Stack[-1] == 0)
0x6a2: IF (Stack[-1] == 0) GOTO 0x6a4; Pop(1)

0x6a3: Return(); Pop(0)

0x6a4: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x6a5: IF (Stack[-1] == 0) GOTO 0x6a7; Pop(1)

0x6a6: Return(); Pop(0)

0x6a7: PushEmpty(string, bool)
0x6a8: Stack[-2] = Stack[-3]
0x6a9: Push("")
0x6aa: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x6ab: IF (Stack[-1] == 0) GOTO 0x6ae; Pop(1)

0x6ac: Stack[-1] = (bool) 0
0x6ad: GOTO 0x6af

0x6ae: Stack[-1] = (bool) 1
0x6af: Call2 0xd36

0x6b0: Pop(2)
0x6b1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x6b2: Return(); Pop(0)

0x6b3: PushEmpty()
0x6b4: Push((int) 1)
0x6b5: IF (Stack[-1] == 0) GOTO 0x7ab; Pop(1)

0x6b6: PushEmpty()
0x6b7: Call2 0xd54

0x6b8: Pop(0)
0x6b9: Push((int) 27231)
0x6ba: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6bb: IF (Stack[-1] == 0) GOTO 0x6c6; Pop(1)

0x6bc: PushEmpty(object, object)
0x6bd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6be: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6bf: Call2 0xe06

0x6c0: Pop(2)
0x6c1: PushEmpty(object, object)
0x6c2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6c3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6c4: Call2 0xe58

0x6c5: Pop(2)
0x6c6: Push((int) 44834)
0x6c7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6c8: IF (Stack[-1] == 0) GOTO 0x6d3; Pop(1)

0x6c9: PushEmpty(object, object)
0x6ca: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6cb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6cc: Call2 0xe06

0x6cd: Pop(2)
0x6ce: PushEmpty(object, object)
0x6cf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6d0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6d1: Call2 0xe58

0x6d2: Pop(2)
0x6d3: Push((int) 27228)
0x6d4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6d5: IF (Stack[-1] == 0) GOTO 0x70d; Pop(1)

0x6d6: PushEmpty(bool, object)
0x6d7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6d8: Call2 0xec5

0x6d9: Pop(1)
0x6da: IF (Stack[-1] == 0) GOTO 0x6f9; Pop(1)

0x6db: PushEmpty(object, object)
0x6dc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6dd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6de: Call2 0xe20

0x6df: Pop(2)
0x6e0: PushEmpty(object, object)
0x6e1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6e2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6e3: Call2 0xe26

0x6e4: Pop(2)
0x6e5: PushEmpty(string)
0x6e6: Stack[-1] = "Autizm"
0x6e7: Call2 0x69d

0x6e8: Pop(1)
0x6e9: Push((int) 525944)
0x6ea: @@ SetMessage(Stack[-1])
0x6eb: Pop(1)
0x6ec: @@ ClearReplies()
0x6ed: Pop(0)
0x6ee: Push((int) 542433)
0x6ef: Push((int) 44818)
0x6f0: Push((int) 44817)
0x6f1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f2: Pop(3)
0x6f3: Push((int) 542438)
0x6f4: Push((int) 44824)
0x6f5: Push((int) 44822)
0x6f6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f7: Pop(3)
0x6f8: Return(); Pop(0)

0x6f9: PushEmpty(string)
0x6fa: Stack[-1] = "Neutral"
0x6fb: Call2 0x69d

0x6fc: Pop(1)
0x6fd: Push((int) 525948)
0x6fe: @@ SetMessage(Stack[-1])
0x6ff: Pop(1)
0x700: @@ ClearReplies()
0x701: Pop(0)
0x702: Push((int) 525949)
0x703: Push((int) -1)
0x704: Push((int) 27233)
0x705: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x706: Pop(3)
0x707: Push((int) 529092)
0x708: Push((int) -1)
0x709: Push((int) 30537)
0x70a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x70b: Pop(3)
0x70c: Return(); Pop(0)

0x70d: Push((int) 44824)
0x70e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x70f: IF (Stack[-1] == 0) GOTO 0x71f; Pop(1)

0x710: PushEmpty(string)
0x711: Stack[-1] = "Disturbance"
0x712: Call2 0x69d

0x713: Pop(1)
0x714: Push((int) 542439)
0x715: @@ SetMessage(Stack[-1])
0x716: Pop(1)
0x717: @@ ClearReplies()
0x718: Pop(0)
0x719: Push((int) 542440)
0x71a: Push((int) 44818)
0x71b: Push((int) 44825)
0x71c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x71d: Pop(3)
0x71e: Return(); Pop(0)

0x71f: Push((int) 44818)
0x720: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x721: IF (Stack[-1] == 0) GOTO 0x736; Pop(1)

0x722: PushEmpty(string)
0x723: Stack[-1] = "Pain"
0x724: Call2 0x69d

0x725: Pop(1)
0x726: Push((int) 542434)
0x727: @@ SetMessage(Stack[-1])
0x728: Pop(1)
0x729: @@ ClearReplies()
0x72a: Pop(0)
0x72b: Push((int) 542435)
0x72c: Push((int) 44820)
0x72d: Push((int) 44819)
0x72e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x72f: Pop(3)
0x730: Push((int) 542437)
0x731: Push((int) 44820)
0x732: Push((int) 44821)
0x733: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x734: Pop(3)
0x735: Return(); Pop(0)

0x736: Push((int) 44820)
0x737: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x738: IF (Stack[-1] == 0) GOTO 0x74d; Pop(1)

0x739: PushEmpty(string)
0x73a: Stack[-1] = "Pain"
0x73b: Call2 0x69d

0x73c: Pop(1)
0x73d: Push((int) 542436)
0x73e: @@ SetMessage(Stack[-1])
0x73f: Pop(1)
0x740: @@ ClearReplies()
0x741: Pop(0)
0x742: Push((int) 529090)
0x743: Push((int) 30536)
0x744: Push((int) 30535)
0x745: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x746: Pop(3)
0x747: Push((int) 542441)
0x748: Push((int) 30536)
0x749: Push((int) 44826)
0x74a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x74b: Pop(3)
0x74c: Return(); Pop(0)

0x74d: Push((int) 30536)
0x74e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x74f: IF (Stack[-1] == 0) GOTO 0x764; Pop(1)

0x750: PushEmpty(string)
0x751: Stack[-1] = "Neutral"
0x752: Call2 0x69d

0x753: Pop(1)
0x754: Push((int) 529091)
0x755: @@ SetMessage(Stack[-1])
0x756: Pop(1)
0x757: @@ ClearReplies()
0x758: Pop(0)
0x759: Push((int) 525945)
0x75a: Push((int) 27230)
0x75b: Push((int) 27229)
0x75c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x75d: Pop(3)
0x75e: Push((int) 542442)
0x75f: Push((int) 44831)
0x760: Push((int) 44830)
0x761: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x762: Pop(3)
0x763: Return(); Pop(0)

0x764: Push((int) 44831)
0x765: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x766: IF (Stack[-1] == 0) GOTO 0x776; Pop(1)

0x767: PushEmpty(string)
0x768: Stack[-1] = "Disturbance"
0x769: Call2 0x69d

0x76a: Pop(1)
0x76b: Push((int) 542443)
0x76c: @@ SetMessage(Stack[-1])
0x76d: Pop(1)
0x76e: @@ ClearReplies()
0x76f: Pop(0)
0x770: Push((int) 542444)
0x771: Push((int) 27230)
0x772: Push((int) 44832)
0x773: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x774: Pop(3)
0x775: Return(); Pop(0)

0x776: Push((int) 27230)
0x777: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x778: IF (Stack[-1] == 0) GOTO 0x788; Pop(1)

0x779: PushEmpty(string)
0x77a: Stack[-1] = "Welldie"
0x77b: Call2 0x69d

0x77c: Pop(1)
0x77d: Push((int) 525946)
0x77e: @@ SetMessage(Stack[-1])
0x77f: Pop(1)
0x780: @@ ClearReplies()
0x781: Pop(0)
0x782: Push((int) 529093)
0x783: Push((int) 30539)
0x784: Push((int) 30538)
0x785: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x786: Pop(3)
0x787: Return(); Pop(0)

0x788: Push((int) 30539)
0x789: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x78a: IF (Stack[-1] == 0) GOTO 0x79f; Pop(1)

0x78b: PushEmpty(string)
0x78c: Stack[-1] = "Disturbance"
0x78d: Call2 0x69d

0x78e: Pop(1)
0x78f: Push((int) 529094)
0x790: @@ SetMessage(Stack[-1])
0x791: Pop(1)
0x792: @@ ClearReplies()
0x793: Pop(0)
0x794: Push((int) 525947)
0x795: Push((int) -1)
0x796: Push((int) 27231)
0x797: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x798: Pop(3)
0x799: Push((int) 542445)
0x79a: Push((int) -1)
0x79b: Push((int) 44834)
0x79c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x79d: Pop(3)
0x79e: Return(); Pop(0)

0x79f: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x7a0: PushEmpty(bool)
0x7a1: Call2 0xdb6

0x7a2: Pop(0)
0x7a3: IF (Stack[-1] == 0) GOTO 0x7a7; Pop(1)

0x7a4: @ lshStopAnimation()
0x7a5: Pop(0)
0x7a6: GOTO 0x7a9

0x7a7: @ StopAnimation()
0x7a8: Pop(0)
0x7a9: Return(); Pop(0)

0x7aa: GOTO 0x6b4

0x7ab: Return(); Pop(0)

0x7ac: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x7ad: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x7ae: PushEmpty(bool, object, float)
0x7af: Stack[-2] = Stack[-12]
0x7b0: Stack[-1] = (float) 70.0
0x7b1: Call2 0xc45

0x7b2: Pop(2)
0x7b3: Pop(1); Push((bool) Stack[-1] == 0)
0x7b4: IF (Stack[-1] == 0) GOTO 0x7b7; Pop(1)

0x7b5: Stack[-10] = (int) -2
0x7b6: Return(); Pop(8)

0x7b7: @ CreateDialog(Stack[-4])
0x7b8: Pop(0)
0x7b9: PushEmpty(int)
0x7ba: Call2 0xdb0

0x7bb: Pop(0)
0x7bc: @@ SetNPCName(Stack[-1])
0x7bd: Pop(1)
0x7be: PushEmpty(int)
0x7bf: Call2 0xdae

0x7c0: Pop(0)
0x7c1: @@ SetNPCDescription(Stack[-1])
0x7c2: Pop(1)
0x7c3: PushEmpty(string)
0x7c4: Call2 0xdb2

0x7c5: Pop(0)
0x7c6: @@ SetPhoto(Stack[-1])
0x7c7: Pop(1)
0x7c8: PushEmpty(string)
0x7c9: Call2 0xdb4

0x7ca: Pop(0)
0x7cb: @@ SetPhoto2(Stack[-1])
0x7cc: Pop(1)
0x7cd: PushEmpty(int)
0x7ce: Call2 0xf86

0x7cf: Pop(0)
0x7d0: @@ SetPlayerName(Stack[-1])
0x7d1: Pop(1)
0x7d2: Stack[-2] = (int) -1
0x7d3: @ IsOverrideActive(Stack[-3])
0x7d4: Pop(0)
0x7d5: Push(Stack[-3])
0x7d6: IF (Stack[-1] == 0) GOTO 0x7d9; Pop(1)

0x7d7: Stack[-10] = (int) -2
0x7d8: Return(); Pop(8)

0x7d9: @ DoDialog(Stack[-4])
0x7da: Pop(0)
0x7db: PushEmpty(bool, object)
0x7dc: PushEmpty(object)
0x7dd: Call2 0xd5b

0x7de: Stack[-2] = Stack[-1]
0x7df: Pop(1)
0x7e0: Call2 0xc9c

0x7e1: Pop(2)
0x7e2: PushEmpty(object, object)
0x7e3: Stack[-2] = Stack[-11]
0x7e4: Stack[-1] = Stack[-6]
0x7e5: Push(-2, 4); TaskCall(9)
0x7e6: Call2 0x7fd

0x7e7: Pop(-2, 4); TaskReturn
0x7e8: Pop(2)
0x7e9: @@ IsDialogEnd(Stack[-1])
0x7ea: Pop(0)
0x7eb: Pop(0); Push((bool) Stack[-1] == 0)
0x7ec: IF (Stack[-1] == 0) GOTO 0x7f2; Pop(1)

0x7ed: @ sync()
0x7ee: Pop(0)
0x7ef: @@ IsDialogEnd(Stack[-1])
0x7f0: Pop(0)
0x7f1: GOTO 0x7eb

0x7f2: PushEmpty(object)
0x7f3: Stack[-1] = Stack[-10]
0x7f4: Call2 0xc8a

0x7f5: Pop(1)
0x7f6: @ StopDialog(Stack[-4])
0x7f7: Pop(0)
0x7f8: @@ GetReturnValue(Stack[-2])
0x7f9: Pop(0)
0x7fa: Stack[-10] = Stack[-2]
0x7fb: Return(); Pop(8)

0x7fc: Stack[-4] = 0
0x7fd: PushEmpty()
0x7fe: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x7ff: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x800: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x801: Push((int) 1)
0x802: IF (Stack[-1] == 0) GOTO 0x83c; Pop(1)

0x803: PushEmpty(bool, object)
0x804: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x805: Call2 0xed1

0x806: Pop(1)
0x807: IF (Stack[-1] == 0) GOTO 0x826; Pop(1)

0x808: PushEmpty(object, object)
0x809: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x80a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x80b: Call2 0xe2c

0x80c: Pop(2)
0x80d: PushEmpty(object, object)
0x80e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x80f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x810: Call2 0xe32

0x811: Pop(2)
0x812: PushEmpty(string)
0x813: Stack[-1] = "Disturbance"
0x814: Call2 0x85a

0x815: Pop(1)
0x816: Push((int) 528802)
0x817: @@ SetMessage(Stack[-1])
0x818: Pop(1)
0x819: @@ ClearReplies()
0x81a: Pop(0)
0x81b: Push((int) 526757)
0x81c: Push((int) 30208)
0x81d: Push((int) 28034)
0x81e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x81f: Pop(3)
0x820: Push((int) 528803)
0x821: Push((int) 30208)
0x822: Push((int) 30216)
0x823: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x824: Pop(3)
0x825: GOTO 0x83c

0x826: PushEmpty(string)
0x827: Stack[-1] = "Neutral"
0x828: Call2 0x85a

0x829: Pop(1)
0x82a: Push((int) 526758)
0x82b: @@ SetMessage(Stack[-1])
0x82c: Pop(1)
0x82d: @@ ClearReplies()
0x82e: Pop(0)
0x82f: Push((int) 526759)
0x830: Push((int) -1)
0x831: Push((int) 28036)
0x832: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x833: Pop(3)
0x834: Push((int) 528801)
0x835: Push((int) -1)
0x836: Push((int) 30214)
0x837: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x838: Pop(3)
0x839: GOTO 0x83c

0x83a: Return(); Pop(0)

0x83b: GOTO 0x801

0x83c: PushEmpty(bool)
0x83d: Call2 0xdb6

0x83e: Pop(0)
0x83f: IF (Stack[-1] == 0) GOTO 0x84b; Pop(1)

0x840: @ lshWaitForAnimEnd()
0x841: Pop(0)
0x842: Push( Stack[3 + Tasks[-1].StackPointer] )
0x843: IF (Stack[-1] == 0) GOTO 0x845; Pop(1)

0x844: GOTO 0x84a

0x845: PushEmpty(string)
0x846: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x847: Call2 0xd26

0x848: Pop(1)
0x849: GOTO 0x840

0x84a: GOTO 0x859

0x84b: Push("all")
0x84c: Push("idle")
0x84d: @ PlayAnimation(Stack[-2], Stack[-1])
0x84e: Pop(2)
0x84f: @ WaitForAnimEnd()
0x850: Pop(0)
0x851: Push( Stack[3 + Tasks[-1].StackPointer] )
0x852: IF (Stack[-1] == 0) GOTO 0x854; Pop(1)

0x853: GOTO 0x859

0x854: Push("all")
0x855: Push("idle")
0x856: @ PlayAnimation(Stack[-2], Stack[-1])
0x857: Pop(2)
0x858: GOTO 0x84f

0x859: Return(); Pop(0)

0x85a: PushEmpty()
0x85b: PushEmpty(bool)
0x85c: Call2 0xdb6

0x85d: Pop(0)
0x85e: Pop(1); Push((bool) Stack[-1] == 0)
0x85f: IF (Stack[-1] == 0) GOTO 0x861; Pop(1)

0x860: Return(); Pop(0)

0x861: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x862: IF (Stack[-1] == 0) GOTO 0x864; Pop(1)

0x863: Return(); Pop(0)

0x864: PushEmpty(string, bool)
0x865: Stack[-2] = Stack[-3]
0x866: Push("")
0x867: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x868: IF (Stack[-1] == 0) GOTO 0x86b; Pop(1)

0x869: Stack[-1] = (bool) 0
0x86a: GOTO 0x86c

0x86b: Stack[-1] = (bool) 1
0x86c: Call2 0xd36

0x86d: Pop(2)
0x86e: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x86f: Return(); Pop(0)

0x870: PushEmpty()
0x871: Push((int) 1)
0x872: IF (Stack[-1] == 0) GOTO 0x956; Pop(1)

0x873: PushEmpty()
0x874: Call2 0xd54

0x875: Pop(0)
0x876: Push((int) 30213)
0x877: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x878: IF (Stack[-1] == 0) GOTO 0x883; Pop(1)

0x879: PushEmpty(object, object)
0x87a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x87b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x87c: Call2 0xe38

0x87d: Pop(2)
0x87e: PushEmpty(object, object)
0x87f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x880: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x881: Call2 0xe58

0x882: Pop(2)
0x883: Push((int) 44908)
0x884: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x885: IF (Stack[-1] == 0) GOTO 0x890; Pop(1)

0x886: PushEmpty(object, object)
0x887: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x888: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x889: Call2 0xe38

0x88a: Pop(2)
0x88b: PushEmpty(object, object)
0x88c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x88d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x88e: Call2 0xe58

0x88f: Pop(2)
0x890: Push((int) 30215)
0x891: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x892: IF (Stack[-1] == 0) GOTO 0x8ca; Pop(1)

0x893: PushEmpty(bool, object)
0x894: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x895: Call2 0xed1

0x896: Pop(1)
0x897: IF (Stack[-1] == 0) GOTO 0x8b6; Pop(1)

0x898: PushEmpty(object, object)
0x899: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x89a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x89b: Call2 0xe2c

0x89c: Pop(2)
0x89d: PushEmpty(object, object)
0x89e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x89f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8a0: Call2 0xe32

0x8a1: Pop(2)
0x8a2: PushEmpty(string)
0x8a3: Stack[-1] = "Disturbance"
0x8a4: Call2 0x85a

0x8a5: Pop(1)
0x8a6: Push((int) 528802)
0x8a7: @@ SetMessage(Stack[-1])
0x8a8: Pop(1)
0x8a9: @@ ClearReplies()
0x8aa: Pop(0)
0x8ab: Push((int) 526757)
0x8ac: Push((int) 30208)
0x8ad: Push((int) 28034)
0x8ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8af: Pop(3)
0x8b0: Push((int) 528803)
0x8b1: Push((int) 30208)
0x8b2: Push((int) 30216)
0x8b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8b4: Pop(3)
0x8b5: Return(); Pop(0)

0x8b6: PushEmpty(string)
0x8b7: Stack[-1] = "Neutral"
0x8b8: Call2 0x85a

0x8b9: Pop(1)
0x8ba: Push((int) 526758)
0x8bb: @@ SetMessage(Stack[-1])
0x8bc: Pop(1)
0x8bd: @@ ClearReplies()
0x8be: Pop(0)
0x8bf: Push((int) 526759)
0x8c0: Push((int) -1)
0x8c1: Push((int) 28036)
0x8c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8c3: Pop(3)
0x8c4: Push((int) 528801)
0x8c5: Push((int) -1)
0x8c6: Push((int) 30214)
0x8c7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8c8: Pop(3)
0x8c9: Return(); Pop(0)

0x8ca: Push((int) 30208)
0x8cb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8cc: IF (Stack[-1] == 0) GOTO 0x8e1; Pop(1)

0x8cd: PushEmpty(string)
0x8ce: Stack[-1] = "Disturbance"
0x8cf: Call2 0x85a

0x8d0: Pop(1)
0x8d1: Push((int) 528795)
0x8d2: @@ SetMessage(Stack[-1])
0x8d3: Pop(1)
0x8d4: @@ ClearReplies()
0x8d5: Pop(0)
0x8d6: Push((int) 528796)
0x8d7: Push((int) 30210)
0x8d8: Push((int) 30209)
0x8d9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8da: Pop(3)
0x8db: Push((int) 542079)
0x8dc: Push((int) 44899)
0x8dd: Push((int) 44372)
0x8de: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8df: Pop(3)
0x8e0: Return(); Pop(0)

0x8e1: Push((int) 44899)
0x8e2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8e3: IF (Stack[-1] == 0) GOTO 0x8f8; Pop(1)

0x8e4: PushEmpty(string)
0x8e5: Stack[-1] = "Pain"
0x8e6: Call2 0x85a

0x8e7: Pop(1)
0x8e8: Push((int) 542509)
0x8e9: @@ SetMessage(Stack[-1])
0x8ea: Pop(1)
0x8eb: @@ ClearReplies()
0x8ec: Pop(0)
0x8ed: Push((int) 542510)
0x8ee: Push((int) 44902)
0x8ef: Push((int) 44900)
0x8f0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8f1: Pop(3)
0x8f2: Push((int) 542511)
0x8f3: Push((int) 44902)
0x8f4: Push((int) 44901)
0x8f5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8f6: Pop(3)
0x8f7: Return(); Pop(0)

0x8f8: Push((int) 44902)
0x8f9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8fa: IF (Stack[-1] == 0) GOTO 0x90f; Pop(1)

0x8fb: PushEmpty(string)
0x8fc: Stack[-1] = "Autizm"
0x8fd: Call2 0x85a

0x8fe: Pop(1)
0x8ff: Push((int) 542512)
0x900: @@ SetMessage(Stack[-1])
0x901: Pop(1)
0x902: @@ ClearReplies()
0x903: Pop(0)
0x904: Push((int) 542513)
0x905: Push((int) 30210)
0x906: Push((int) 44904)
0x907: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x908: Pop(3)
0x909: Push((int) 542514)
0x90a: Push((int) -1)
0x90b: Push((int) 44905)
0x90c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x90d: Pop(3)
0x90e: Return(); Pop(0)

0x90f: Push((int) 30210)
0x910: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x911: IF (Stack[-1] == 0) GOTO 0x926; Pop(1)

0x912: PushEmpty(string)
0x913: Stack[-1] = "Welldie"
0x914: Call2 0x85a

0x915: Pop(1)
0x916: Push((int) 528797)
0x917: @@ SetMessage(Stack[-1])
0x918: Pop(1)
0x919: @@ ClearReplies()
0x91a: Pop(0)
0x91b: Push((int) 528798)
0x91c: Push((int) 30212)
0x91d: Push((int) 30211)
0x91e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x91f: Pop(3)
0x920: Push((int) 542515)
0x921: Push((int) 44907)
0x922: Push((int) 44906)
0x923: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x924: Pop(3)
0x925: Return(); Pop(0)

0x926: Push((int) 44907)
0x927: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x928: IF (Stack[-1] == 0) GOTO 0x938; Pop(1)

0x929: PushEmpty(string)
0x92a: Stack[-1] = "Neutral"
0x92b: Call2 0x85a

0x92c: Pop(1)
0x92d: Push((int) 542516)
0x92e: @@ SetMessage(Stack[-1])
0x92f: Pop(1)
0x930: @@ ClearReplies()
0x931: Pop(0)
0x932: Push((int) 542517)
0x933: Push((int) -1)
0x934: Push((int) 44908)
0x935: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x936: Pop(3)
0x937: Return(); Pop(0)

0x938: Push((int) 30212)
0x939: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x93a: IF (Stack[-1] == 0) GOTO 0x94a; Pop(1)

0x93b: PushEmpty(string)
0x93c: Stack[-1] = "Neutral"
0x93d: Call2 0x85a

0x93e: Pop(1)
0x93f: Push((int) 528799)
0x940: @@ SetMessage(Stack[-1])
0x941: Pop(1)
0x942: @@ ClearReplies()
0x943: Pop(0)
0x944: Push((int) 528800)
0x945: Push((int) -1)
0x946: Push((int) 30213)
0x947: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x948: Pop(3)
0x949: Return(); Pop(0)

0x94a: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x94b: PushEmpty(bool)
0x94c: Call2 0xdb6

0x94d: Pop(0)
0x94e: IF (Stack[-1] == 0) GOTO 0x952; Pop(1)

0x94f: @ lshStopAnimation()
0x950: Pop(0)
0x951: GOTO 0x954

0x952: @ StopAnimation()
0x953: Pop(0)
0x954: Return(); Pop(0)

0x955: GOTO 0x871

0x956: Return(); Pop(0)

0x957: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x958: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x959: PushEmpty(bool, object, float)
0x95a: Stack[-2] = Stack[-12]
0x95b: Stack[-1] = (float) 70.0
0x95c: Call2 0xc45

0x95d: Pop(2)
0x95e: Pop(1); Push((bool) Stack[-1] == 0)
0x95f: IF (Stack[-1] == 0) GOTO 0x962; Pop(1)

0x960: Stack[-10] = (int) -2
0x961: Return(); Pop(8)

0x962: @ CreateDialog(Stack[-4])
0x963: Pop(0)
0x964: PushEmpty(int)
0x965: Call2 0xdb0

0x966: Pop(0)
0x967: @@ SetNPCName(Stack[-1])
0x968: Pop(1)
0x969: PushEmpty(int)
0x96a: Call2 0xdae

0x96b: Pop(0)
0x96c: @@ SetNPCDescription(Stack[-1])
0x96d: Pop(1)
0x96e: PushEmpty(string)
0x96f: Call2 0xdb2

0x970: Pop(0)
0x971: @@ SetPhoto(Stack[-1])
0x972: Pop(1)
0x973: PushEmpty(string)
0x974: Call2 0xdb4

0x975: Pop(0)
0x976: @@ SetPhoto2(Stack[-1])
0x977: Pop(1)
0x978: PushEmpty(int)
0x979: Call2 0xf86

0x97a: Pop(0)
0x97b: @@ SetPlayerName(Stack[-1])
0x97c: Pop(1)
0x97d: Stack[-2] = (int) -1
0x97e: @ IsOverrideActive(Stack[-3])
0x97f: Pop(0)
0x980: Push(Stack[-3])
0x981: IF (Stack[-1] == 0) GOTO 0x984; Pop(1)

0x982: Stack[-10] = (int) -2
0x983: Return(); Pop(8)

0x984: @ DoDialog(Stack[-4])
0x985: Pop(0)
0x986: PushEmpty(bool, object)
0x987: PushEmpty(object)
0x988: Call2 0xd5b

0x989: Stack[-2] = Stack[-1]
0x98a: Pop(1)
0x98b: Call2 0xc9c

0x98c: Pop(2)
0x98d: PushEmpty(object, object)
0x98e: Stack[-2] = Stack[-11]
0x98f: Stack[-1] = Stack[-6]
0x990: Push(-2, 4); TaskCall(11)
0x991: Call2 0x9a8

0x992: Pop(-2, 4); TaskReturn
0x993: Pop(2)
0x994: @@ IsDialogEnd(Stack[-1])
0x995: Pop(0)
0x996: Pop(0); Push((bool) Stack[-1] == 0)
0x997: IF (Stack[-1] == 0) GOTO 0x99d; Pop(1)

0x998: @ sync()
0x999: Pop(0)
0x99a: @@ IsDialogEnd(Stack[-1])
0x99b: Pop(0)
0x99c: GOTO 0x996

0x99d: PushEmpty(object)
0x99e: Stack[-1] = Stack[-10]
0x99f: Call2 0xc8a

0x9a0: Pop(1)
0x9a1: @ StopDialog(Stack[-4])
0x9a2: Pop(0)
0x9a3: @@ GetReturnValue(Stack[-2])
0x9a4: Pop(0)
0x9a5: Stack[-10] = Stack[-2]
0x9a6: Return(); Pop(8)

0x9a7: Stack[-4] = 0
0x9a8: PushEmpty()
0x9a9: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x9aa: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x9ab: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x9ac: Push((int) 1)
0x9ad: IF (Stack[-1] == 0) GOTO 0x9c9; Pop(1)

0x9ae: PushEmpty(string)
0x9af: Stack[-1] = "Neutral"
0x9b0: Call2 0x9e7

0x9b1: Pop(1)
0x9b2: Push((int) 535284)
0x9b3: @@ SetMessage(Stack[-1])
0x9b4: Pop(1)
0x9b5: @@ ClearReplies()
0x9b6: Pop(0)
0x9b7: Push((int) 535285)
0x9b8: Push((int) 36962)
0x9b9: Push((int) 36961)
0x9ba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9bb: Pop(3)
0x9bc: Push((int) 535292)
0x9bd: Push((int) -1)
0x9be: Push((int) 36968)
0x9bf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9c0: Pop(3)
0x9c1: Push((int) 535293)
0x9c2: Push((int) -1)
0x9c3: Push((int) 36969)
0x9c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9c5: Pop(3)
0x9c6: GOTO 0x9c9

0x9c7: Return(); Pop(0)

0x9c8: GOTO 0x9ac

0x9c9: PushEmpty(bool)
0x9ca: Call2 0xdb6

0x9cb: Pop(0)
0x9cc: IF (Stack[-1] == 0) GOTO 0x9d8; Pop(1)

0x9cd: @ lshWaitForAnimEnd()
0x9ce: Pop(0)
0x9cf: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9d0: IF (Stack[-1] == 0) GOTO 0x9d2; Pop(1)

0x9d1: GOTO 0x9d7

0x9d2: PushEmpty(string)
0x9d3: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x9d4: Call2 0xd26

0x9d5: Pop(1)
0x9d6: GOTO 0x9cd

0x9d7: GOTO 0x9e6

0x9d8: Push("all")
0x9d9: Push("idle")
0x9da: @ PlayAnimation(Stack[-2], Stack[-1])
0x9db: Pop(2)
0x9dc: @ WaitForAnimEnd()
0x9dd: Pop(0)
0x9de: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9df: IF (Stack[-1] == 0) GOTO 0x9e1; Pop(1)

0x9e0: GOTO 0x9e6

0x9e1: Push("all")
0x9e2: Push("idle")
0x9e3: @ PlayAnimation(Stack[-2], Stack[-1])
0x9e4: Pop(2)
0x9e5: GOTO 0x9dc

0x9e6: Return(); Pop(0)

0x9e7: PushEmpty()
0x9e8: PushEmpty(bool)
0x9e9: Call2 0xdb6

0x9ea: Pop(0)
0x9eb: Pop(1); Push((bool) Stack[-1] == 0)
0x9ec: IF (Stack[-1] == 0) GOTO 0x9ee; Pop(1)

0x9ed: Return(); Pop(0)

0x9ee: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x9ef: IF (Stack[-1] == 0) GOTO 0x9f1; Pop(1)

0x9f0: Return(); Pop(0)

0x9f1: PushEmpty(string, bool)
0x9f2: Stack[-2] = Stack[-3]
0x9f3: Push("")
0x9f4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x9f5: IF (Stack[-1] == 0) GOTO 0x9f8; Pop(1)

0x9f6: Stack[-1] = (bool) 0
0x9f7: GOTO 0x9f9

0x9f8: Stack[-1] = (bool) 1
0x9f9: Call2 0xd36

0x9fa: Pop(2)
0x9fb: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x9fc: Return(); Pop(0)

0x9fd: PushEmpty()
0x9fe: Push((int) 1)
0x9ff: IF (Stack[-1] == 0) GOTO 0xa59; Pop(1)

0xa00: PushEmpty()
0xa01: Call2 0xd54

0xa02: Pop(0)
0xa03: Push((int) 36960)
0xa04: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa05: IF (Stack[-1] == 0) GOTO 0xa1f; Pop(1)

0xa06: PushEmpty(string)
0xa07: Stack[-1] = "Neutral"
0xa08: Call2 0x9e7

0xa09: Pop(1)
0xa0a: Push((int) 535284)
0xa0b: @@ SetMessage(Stack[-1])
0xa0c: Pop(1)
0xa0d: @@ ClearReplies()
0xa0e: Pop(0)
0xa0f: Push((int) 535285)
0xa10: Push((int) 36962)
0xa11: Push((int) 36961)
0xa12: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa13: Pop(3)
0xa14: Push((int) 535292)
0xa15: Push((int) -1)
0xa16: Push((int) 36968)
0xa17: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa18: Pop(3)
0xa19: Push((int) 535293)
0xa1a: Push((int) -1)
0xa1b: Push((int) 36969)
0xa1c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa1d: Pop(3)
0xa1e: Return(); Pop(0)

0xa1f: Push((int) 36962)
0xa20: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa21: IF (Stack[-1] == 0) GOTO 0xa36; Pop(1)

0xa22: PushEmpty(string)
0xa23: Stack[-1] = "Neutral"
0xa24: Call2 0x9e7

0xa25: Pop(1)
0xa26: Push((int) 535286)
0xa27: @@ SetMessage(Stack[-1])
0xa28: Pop(1)
0xa29: @@ ClearReplies()
0xa2a: Pop(0)
0xa2b: Push((int) 535287)
0xa2c: Push((int) 36964)
0xa2d: Push((int) 36963)
0xa2e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa2f: Pop(3)
0xa30: Push((int) 535291)
0xa31: Push((int) -1)
0xa32: Push((int) 36967)
0xa33: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa34: Pop(3)
0xa35: Return(); Pop(0)

0xa36: Push((int) 36964)
0xa37: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa38: IF (Stack[-1] == 0) GOTO 0xa4d; Pop(1)

0xa39: PushEmpty(string)
0xa3a: Stack[-1] = "Neutral"
0xa3b: Call2 0x9e7

0xa3c: Pop(1)
0xa3d: Push((int) 535288)
0xa3e: @@ SetMessage(Stack[-1])
0xa3f: Pop(1)
0xa40: @@ ClearReplies()
0xa41: Pop(0)
0xa42: Push((int) 535289)
0xa43: Push((int) -1)
0xa44: Push((int) 36965)
0xa45: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa46: Pop(3)
0xa47: Push((int) 535290)
0xa48: Push((int) -1)
0xa49: Push((int) 36966)
0xa4a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa4b: Pop(3)
0xa4c: Return(); Pop(0)

0xa4d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xa4e: PushEmpty(bool)
0xa4f: Call2 0xdb6

0xa50: Pop(0)
0xa51: IF (Stack[-1] == 0) GOTO 0xa55; Pop(1)

0xa52: @ lshStopAnimation()
0xa53: Pop(0)
0xa54: GOTO 0xa57

0xa55: @ StopAnimation()
0xa56: Pop(0)
0xa57: Return(); Pop(0)

0xa58: GOTO 0x9fe

0xa59: Return(); Pop(0)

0xa5a: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xa5b: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xa5c: PushEmpty(bool, object, float)
0xa5d: Stack[-2] = Stack[-12]
0xa5e: Stack[-1] = (float) 70.0
0xa5f: Call2 0xc45

0xa60: Pop(2)
0xa61: Pop(1); Push((bool) Stack[-1] == 0)
0xa62: IF (Stack[-1] == 0) GOTO 0xa65; Pop(1)

0xa63: Stack[-10] = (int) -2
0xa64: Return(); Pop(8)

0xa65: @ CreateDialog(Stack[-4])
0xa66: Pop(0)
0xa67: PushEmpty(int)
0xa68: Call2 0xdb0

0xa69: Pop(0)
0xa6a: @@ SetNPCName(Stack[-1])
0xa6b: Pop(1)
0xa6c: PushEmpty(int)
0xa6d: Call2 0xdae

0xa6e: Pop(0)
0xa6f: @@ SetNPCDescription(Stack[-1])
0xa70: Pop(1)
0xa71: PushEmpty(string)
0xa72: Call2 0xdb2

0xa73: Pop(0)
0xa74: @@ SetPhoto(Stack[-1])
0xa75: Pop(1)
0xa76: PushEmpty(string)
0xa77: Call2 0xdb4

0xa78: Pop(0)
0xa79: @@ SetPhoto2(Stack[-1])
0xa7a: Pop(1)
0xa7b: PushEmpty(int)
0xa7c: Call2 0xf86

0xa7d: Pop(0)
0xa7e: @@ SetPlayerName(Stack[-1])
0xa7f: Pop(1)
0xa80: Stack[-2] = (int) -1
0xa81: @ IsOverrideActive(Stack[-3])
0xa82: Pop(0)
0xa83: Push(Stack[-3])
0xa84: IF (Stack[-1] == 0) GOTO 0xa87; Pop(1)

0xa85: Stack[-10] = (int) -2
0xa86: Return(); Pop(8)

0xa87: @ DoDialog(Stack[-4])
0xa88: Pop(0)
0xa89: PushEmpty(bool, object)
0xa8a: PushEmpty(object)
0xa8b: Call2 0xd5b

0xa8c: Stack[-2] = Stack[-1]
0xa8d: Pop(1)
0xa8e: Call2 0xc9c

0xa8f: Pop(2)
0xa90: PushEmpty(object, object)
0xa91: Stack[-2] = Stack[-11]
0xa92: Stack[-1] = Stack[-6]
0xa93: Push(-2, 4); TaskCall(13)
0xa94: Call2 0xaab

0xa95: Pop(-2, 4); TaskReturn
0xa96: Pop(2)
0xa97: @@ IsDialogEnd(Stack[-1])
0xa98: Pop(0)
0xa99: Pop(0); Push((bool) Stack[-1] == 0)
0xa9a: IF (Stack[-1] == 0) GOTO 0xaa0; Pop(1)

0xa9b: @ sync()
0xa9c: Pop(0)
0xa9d: @@ IsDialogEnd(Stack[-1])
0xa9e: Pop(0)
0xa9f: GOTO 0xa99

0xaa0: PushEmpty(object)
0xaa1: Stack[-1] = Stack[-10]
0xaa2: Call2 0xc8a

0xaa3: Pop(1)
0xaa4: @ StopDialog(Stack[-4])
0xaa5: Pop(0)
0xaa6: @@ GetReturnValue(Stack[-2])
0xaa7: Pop(0)
0xaa8: Stack[-10] = Stack[-2]
0xaa9: Return(); Pop(8)

0xaaa: Stack[-4] = 0
0xaab: PushEmpty()
0xaac: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xaad: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xaae: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xaaf: Push((int) 1)
0xab0: IF (Stack[-1] == 0) GOTO 0xac7; Pop(1)

0xab1: PushEmpty(string)
0xab2: Stack[-1] = "Neutral"
0xab3: Call2 0xae5

0xab4: Pop(1)
0xab5: Push((int) 540539)
0xab6: @@ SetMessage(Stack[-1])
0xab7: Pop(1)
0xab8: @@ ClearReplies()
0xab9: Pop(0)
0xaba: Push((int) 540540)
0xabb: Push((int) -1)
0xabc: Push((int) 42549)
0xabd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xabe: Pop(3)
0xabf: Push((int) 540799)
0xac0: Push((int) -1)
0xac1: Push((int) 42848)
0xac2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xac3: Pop(3)
0xac4: GOTO 0xac7

0xac5: Return(); Pop(0)

0xac6: GOTO 0xaaf

0xac7: PushEmpty(bool)
0xac8: Call2 0xdb6

0xac9: Pop(0)
0xaca: IF (Stack[-1] == 0) GOTO 0xad6; Pop(1)

0xacb: @ lshWaitForAnimEnd()
0xacc: Pop(0)
0xacd: Push( Stack[3 + Tasks[-1].StackPointer] )
0xace: IF (Stack[-1] == 0) GOTO 0xad0; Pop(1)

0xacf: GOTO 0xad5

0xad0: PushEmpty(string)
0xad1: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xad2: Call2 0xd26

0xad3: Pop(1)
0xad4: GOTO 0xacb

0xad5: GOTO 0xae4

0xad6: Push("all")
0xad7: Push("idle")
0xad8: @ PlayAnimation(Stack[-2], Stack[-1])
0xad9: Pop(2)
0xada: @ WaitForAnimEnd()
0xadb: Pop(0)
0xadc: Push( Stack[3 + Tasks[-1].StackPointer] )
0xadd: IF (Stack[-1] == 0) GOTO 0xadf; Pop(1)

0xade: GOTO 0xae4

0xadf: Push("all")
0xae0: Push("idle")
0xae1: @ PlayAnimation(Stack[-2], Stack[-1])
0xae2: Pop(2)
0xae3: GOTO 0xada

0xae4: Return(); Pop(0)

0xae5: PushEmpty()
0xae6: PushEmpty(bool)
0xae7: Call2 0xdb6

0xae8: Pop(0)
0xae9: Pop(1); Push((bool) Stack[-1] == 0)
0xaea: IF (Stack[-1] == 0) GOTO 0xaec; Pop(1)

0xaeb: Return(); Pop(0)

0xaec: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xaed: IF (Stack[-1] == 0) GOTO 0xaef; Pop(1)

0xaee: Return(); Pop(0)

0xaef: PushEmpty(string, bool)
0xaf0: Stack[-2] = Stack[-3]
0xaf1: Push("")
0xaf2: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xaf3: IF (Stack[-1] == 0) GOTO 0xaf6; Pop(1)

0xaf4: Stack[-1] = (bool) 0
0xaf5: GOTO 0xaf7

0xaf6: Stack[-1] = (bool) 1
0xaf7: Call2 0xd36

0xaf8: Pop(2)
0xaf9: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xafa: Return(); Pop(0)

0xafb: PushEmpty()
0xafc: Push((int) 1)
0xafd: IF (Stack[-1] == 0) GOTO 0xb24; Pop(1)

0xafe: PushEmpty()
0xaff: Call2 0xd54

0xb00: Pop(0)
0xb01: Push((int) 42548)
0xb02: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb03: IF (Stack[-1] == 0) GOTO 0xb18; Pop(1)

0xb04: PushEmpty(string)
0xb05: Stack[-1] = "Neutral"
0xb06: Call2 0xae5

0xb07: Pop(1)
0xb08: Push((int) 540539)
0xb09: @@ SetMessage(Stack[-1])
0xb0a: Pop(1)
0xb0b: @@ ClearReplies()
0xb0c: Pop(0)
0xb0d: Push((int) 540540)
0xb0e: Push((int) -1)
0xb0f: Push((int) 42549)
0xb10: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb11: Pop(3)
0xb12: Push((int) 540799)
0xb13: Push((int) -1)
0xb14: Push((int) 42848)
0xb15: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb16: Pop(3)
0xb17: Return(); Pop(0)

0xb18: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xb19: PushEmpty(bool)
0xb1a: Call2 0xdb6

0xb1b: Pop(0)
0xb1c: IF (Stack[-1] == 0) GOTO 0xb20; Pop(1)

0xb1d: @ lshStopAnimation()
0xb1e: Pop(0)
0xb1f: GOTO 0xb22

0xb20: @ StopAnimation()
0xb21: Pop(0)
0xb22: Return(); Pop(0)

0xb23: GOTO 0xafc

0xb24: Return(); Pop(0)

0xb25: PushEmpty()
0xb26: Call2 0xb29

0xb27: Pop(0)
0xb28: Return(); Pop(0)

0xb29: PushEmpty(bool)
0xb2a: Call2 0xc40

0xb2b: Pop(0)
0xb2c: Pop(1); Push((bool) Stack[-1] == 0)
0xb2d: IF (Stack[-1] == 0) GOTO 0xb30; Pop(1)

0xb2e: @ Hold()
0xb2f: Pop(0)
0xb30: @ GetDirection(Stack[-0])
0xb31: Pop(0)
0xb32: PushEmpty()
0xb33: Call2 0xbd9

0xb34: Pop(0)
0xb35: GOTO 0xb32

0xb36: Return(); Pop(0)

0xb37: PushEmpty(object, object)
0xb38: Push("player")
0xb39: @ FindActor(Stack[-2], Stack[-1])
0xb3a: Pop(1)
0xb3b: Pop(0); Push((bool) Stack[-1] == 0)
0xb3c: IF (Stack[-1] == 0) GOTO 0xb3f; Pop(1)

0xb3d: Stack[-3] = (bool) 0
0xb3e: Return(); Pop(2)

0xb3f: PushEmpty(bool, object)
0xb40: Stack[-1] = Stack[-3]
0xb41: Call2 0xc37

0xb42: Stack[-5] = Stack[-2]
0xb43: Pop(2)
0xb44: Return(); Pop(2)

0xb45: Stack[-1] = 0
0xb46: Push(CvectorIndex(Stack[-0], 0))
0xb47: Push(CvectorIndex(Stack[-0], 2))
0xb48: @ RotateAsync(Stack[-2], Stack[-1])
0xb49: Pop(2)
0xb4a: Return(); Pop(0)

0xb4b: PushEmpty(object, bool, object, bool)
0xb4c: Push("player")
0xb4d: @ FindActor(Stack[-3], Stack[-1])
0xb4e: Pop(1)
0xb4f: Pop(0); Push((bool) Stack[-2] == 0)
0xb50: IF (Stack[-1] == 0) GOTO 0xb53; Pop(1)

0xb51: Stack[-5] = (bool) 0
0xb52: Return(); Pop(4)

0xb53: PushEmpty(float, object)
0xb54: Stack[-1] = Stack[-4]
0xb55: Call2 0xc25

0xb56: Pop(1)
0xb57: Push((float)90000.0)
0xb58: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0xb59: IF (Stack[-1] == 0) GOTO 0xb5c; Pop(1)

0xb5a: Stack[-5] = (bool) 0
0xb5b: Return(); Pop(4)

0xb5c: @ CanSee(Stack[-1], Stack[-2])
0xb5d: Pop(0)
0xb5e: Stack[-5] = Stack[-1]
0xb5f: Return(); Pop(4)

0xb60: Stack[-2] = 0
0xb61: PushEmpty(float, float)
0xb62: Push((int) 8)
0xb63: Push((int) 16)
0xb64: @ rand(Stack[-3], Stack[-2], Stack[-1])
0xb65: Pop(2)
0xb66: Push((int) 10)
0xb67: @ SetTimer(Stack[-1], Stack[-2])
0xb68: Pop(1)
0xb69: Return(); Pop(2)

0xb6a: Push((int) 10)
0xb6b: @ KillTimer(Stack[-1])
0xb6c: Pop(1)
0xb6d: Return(); Pop(0)

0xb6e: PushEmpty()
0xb6f: Push((int) 10)
0xb70: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb71: IF (Stack[-1] == 0) GOTO 0xb93; Pop(1)

0xb72: PushEmpty()
0xb73: Call2 0xb6a

0xb74: Pop(0)
0xb75: PushEmpty(bool)
0xb76: Stack[-1] = (bool) 0
0xb77: PushEmpty(bool)
0xb78: Call2 0xc40

0xb79: Pop(0)
0xb7a: IF (Stack[-1] == 0) GOTO 0xb80; Pop(1)

0xb7b: PushEmpty(bool)
0xb7c: Call2 0xb4b

0xb7d: Pop(0)
0xb7e: IF (Stack[-1] == 0) GOTO 0xb80; Pop(1)

0xb7f: Stack[-1] = (bool) 1
0xb80: IF (Stack[-1] == 0) GOTO 0xb8d; Pop(1)

0xb81: PushEmpty(bool)
0xb82: Call2 0xb37

0xb83: Pop(0)
0xb84: IF (Stack[-1] == 0) GOTO 0xb8c; Pop(1)

0xb85: PushEmpty(bool, object)
0xb86: PushEmpty(object)
0xb87: Call2 0xd5b

0xb88: Stack[-2] = Stack[-1]
0xb89: Pop(1)
0xb8a: Call2 0xcd6

0xb8b: Pop(2)
0xb8c: GOTO 0xb93

0xb8d: PushEmpty()
0xb8e: Call2 0xb46

0xb8f: Pop(0)
0xb90: PushEmpty()
0xb91: Call2 0xb61

0xb92: Pop(0)
0xb93: Return(); Pop(0)

0xb94: PushEmpty()
0xb95: Call2 0xc20

0xb96: Pop(0)
0xb97: PushEmpty()
0xb98: Call2 0xb6a

0xb99: Pop(0)
0xb9a: @ lshStopSpeech()
0xb9b: Pop(0)
0xb9c: @ lshStopAnimation()
0xb9d: Pop(0)
0xb9e: @ StopAsync()
0xb9f: Pop(0)
0xba0: @ Hold()
0xba1: Pop(0)
0xba2: Return(); Pop(0)

0xba3: @ StopGroup0()
0xba4: Pop(0)
0xba5: PushEmpty()
0xba6: Call2 0xb6a

0xba7: Pop(0)
0xba8: PushEmpty(string)
0xba9: Stack[-1] = "Neutral"
0xbaa: Call2 0xd26

0xbab: Pop(1)
0xbac: PushEmpty()
0xbad: Call2 0xb61

0xbae: Pop(0)
0xbaf: Return(); Pop(0)

0xbb0: PushEmpty()
0xbb1: Push(Stack[-1])
0xbb2: IF (Stack[-1] == 0) GOTO 0xbb7; Pop(1)

0xbb3: PushEmpty()
0xbb4: Call2 0xb61

0xbb5: Pop(0)
0xbb6: GOTO 0xbbb

0xbb7: PushEmpty(string)
0xbb8: Stack[-1] = "Neutral"
0xbb9: Call2 0xd26

0xbba: Pop(1)
0xbbb: Return(); Pop(0)

0xbbc: PushEmpty(bool, bool)
0xbbd: @ IsOverrideActive(Stack[-1])
0xbbe: Pop(0)
0xbbf: Pop(0); Push((bool) Stack[-1] == 0)
0xbc0: IF (Stack[-1] == 0) GOTO 0xbd8; Pop(1)

0xbc1: EventDisable(0)
0xbc2: PushEmpty()
0xbc3: Call2 0xc20

0xbc4: Pop(0)
0xbc5: PushEmpty(bool, object)
0xbc6: Stack[-1] = Stack[-5]
0xbc7: Call2 0xc37

0xbc8: Pop(2)
0xbc9: EventEnable(0)
0xbca: PushEmpty(object)
0xbcb: Stack[-1] = Stack[-4]
0xbcc: Call2 0xf97

0xbcd: Pop(1)
0xbce: PushEmpty(string)
0xbcf: Stack[-1] = "Neutral"
0xbd0: Call2 0xd26

0xbd1: Pop(1)
0xbd2: PushEmpty()
0xbd3: Call2 0xb6a

0xbd4: Pop(0)
0xbd5: PushEmpty()
0xbd6: Call2 0xb61

0xbd7: Pop(0)
0xbd8: Return(); Pop(2)

0xbd9: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0xbda: @ WaitForAnimEnd()
0xbdb: Pop(0)
0xbdc: PushEmpty(bool)
0xbdd: Call2 0xc40

0xbde: Pop(0)
0xbdf: Pop(1); Push((bool) Stack[-1] == 0)
0xbe0: IF (Stack[-1] == 0) GOTO 0xbe2; Pop(1)

0xbe1: Return(); Pop(12)

0xbe2: PushEmpty(int)
0xbe3: Call2 0xd9d

0xbe4: Stack[-7] = Stack[-1]
0xbe5: Pop(1)
0xbe6: Stack[-5] = (int) 0
0xbe7: PushEmpty(bool)
0xbe8: Stack[-1] = (bool) 0
0xbe9: Push((int) 5)
0xbea: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0xbeb: IF (Stack[-1] == 0) GOTO 0xbf1; Pop(1)

0xbec: PushEmpty(bool)
0xbed: Call2 0xc40

0xbee: Pop(0)
0xbef: IF (Stack[-1] == 0) GOTO 0xbf1; Pop(1)

0xbf0: Stack[-1] = (bool) 1
0xbf1: IF (Stack[-1] == 0) GOTO 0xc1b; Pop(1)

0xbf2: Pop(0); Push((bool) Stack[-6] == 0)
0xbf3: IF (Stack[-1] == 0) GOTO 0xbfb; Pop(1)

0xbf4: Push((int) 3)
0xbf5: @ Sleep(Stack[-1], Stack[-5])
0xbf6: Pop(1)
0xbf7: Pop(0); Push((bool) Stack[-4] == 0)
0xbf8: IF (Stack[-1] == 0) GOTO 0xbfa; Pop(1)

0xbf9: GOTO 0xc1b

0xbfa: GOTO 0xc10

0xbfb: @ irand(Stack[-3], Stack[-6])
0xbfc: Pop(0)
0xbfd: Push((int) 5)
0xbfe: @ irand(Stack[-3], Stack[-1])
0xbff: Pop(1)
0xc00: Push((int) 0)
0xc01: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0xc02: IF (Stack[-1] == 0) GOTO 0xc04; Pop(1)

0xc03: Stack[-3] = (int) 0
0xc04: Push("all")
0xc05: PushEmpty(string, int)
0xc06: Stack[-1] = Stack[-6]
0xc07: Call2 0xd96

0xc08: Pop(1)
0xc09: @ PlayAnimation(Stack[-2], Stack[-1])
0xc0a: Pop(2)
0xc0b: @ WaitForAnimEnd(Stack[-1])
0xc0c: Pop(0)
0xc0d: Pop(0); Push((bool) Stack[-1] == 0)
0xc0e: IF (Stack[-1] == 0) GOTO 0xc10; Pop(1)

0xc0f: GOTO 0xc1b

0xc10: PushEmpty(bool)
0xc11: Call2 0xc1e

0xc12: Pop(0)
0xc13: Pop(1); Push((bool) Stack[-1] == 0)
0xc14: IF (Stack[-1] == 0) GOTO 0xc16; Pop(1)

0xc15: GOTO 0xc1b

0xc16: @ ResetAAS()
0xc17: Pop(0)
0xc18: Push((int) 1)
0xc19: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0xc1a: GOTO 0xbe7

0xc1b: @ ResetAAS()
0xc1c: Pop(0)
0xc1d: Return(); Pop(12)

0xc1e: Stack[-1] = (bool) 1
0xc1f: Return(); Pop(0)

0xc20: @ StopAnimation()
0xc21: Pop(0)
0xc22: @ StopGroup0()
0xc23: Pop(0)
0xc24: Return(); Pop(0)

0xc25: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xc26: @ GetPosition(Stack[-3])
0xc27: Pop(0)
0xc28: @@ GetPosition(Stack[-2])
0xc29: Pop(0)
0xc2a: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0xc2b: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0xc2c: Return(); Pop(6)

0xc2d: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0xc2e: @ GetPosition(Stack[-3])
0xc2f: Pop(0)
0xc30: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0xc31: Push(CvectorIndex(Stack[-2], 0))
0xc32: Push(CvectorIndex(Stack[-3], 2))
0xc33: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0xc34: Pop(2)
0xc35: Stack[-8] = Stack[-1]
0xc36: Return(); Pop(6)

0xc37: PushEmpty(cvector, cvector)
0xc38: @@ GetPosition(Stack[-1])
0xc39: Pop(0)
0xc3a: PushEmpty(bool, cvector)
0xc3b: Stack[-1] = Stack[-3]
0xc3c: Call2 0xc2d

0xc3d: Stack[-6] = Stack[-2]
0xc3e: Pop(2)
0xc3f: Return(); Pop(2)

0xc40: PushEmpty(bool, bool)
0xc41: @ IsLoaded(Stack[-1])
0xc42: Pop(0)
0xc43: Stack[-3] = Stack[-1]
0xc44: Return(); Pop(2)

0xc45: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0xc46: @@ GetPosition(Stack[-8])
0xc47: Pop(0)
0xc48: @@ GetEyesHeight(Stack[-9])
0xc49: Pop(0)
0xc4a: Push(CvectorIndex(Stack[-8], 1))
0xc4b: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xc4c: CvectorIndex(Stack[-9], 1) = Stack[-1];
0xc4d: @ GetPosition(Stack[-7])
0xc4e: Pop(0)
0xc4f: @ GetEyesHeight(Stack[-9])
0xc50: Pop(0)
0xc51: Push(CvectorIndex(Stack[-7], 1))
0xc52: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xc53: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xc54: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xc55: Push(CvectorIndex(Stack[-6], 1))
0xc56: Stack[-1] = (int) 0
0xc57: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xc58: Pop(0); Push(Stack[-6] | Stack[-6]);
0xc59: Pop(1); Push(Sqrt(Stack[-1]))
0xc5a: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0xc5b: Stack[-5] = -Stack[-6]; Pop(0);
0xc5c: Pop(0); Push(Stack[-6] * Stack[-19]);
0xc5d: PushEmpty(cvector, cvector)
0xc5e: Push(CVector(0.0, 1.0, 0.0))
0xc5f: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0xc60: Call2 0xd61

0xc61: Pop(1)
0xc62: Push((int) 25)
0xc63: Pop(2); Push(Stack[-2] * Stack[-1]);
0xc64: Pop(2); Push(Stack[-2] + Stack[-1]);
0xc65: Push(CVector(0.0, 10.0, 0.0))
0xc66: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xc67: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0xc68: @ IsOverrideActive(Stack[-2])
0xc69: Pop(0)
0xc6a: Push(Stack[-2])
0xc6b: IF (Stack[-1] == 0) GOTO 0xc6e; Pop(1)

0xc6c: Stack[-21] = (bool) 0
0xc6d: Return(); Pop(18)

0xc6e: @ StopWorld()
0xc6f: Pop(0)
0xc70: Push((bool) 1)
0xc71: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0xc72: Pop(1)
0xc73: Push(CvectorIndex(Stack[-4], 0))
0xc74: Push(CvectorIndex(Stack[-5], 2))
0xc75: @ Rotate(Stack[-2], Stack[-1])
0xc76: Pop(2)
0xc77: PushEmpty(bool)
0xc78: Call2 0xdb6

0xc79: Pop(0)
0xc7a: IF (Stack[-1] == 0) GOTO 0xc7c; Pop(1)

0xc7b: GOTO 0xc84

0xc7c: Push("head")
0xc7d: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xc7e: Pop(1)
0xc7f: Push(Stack[-1])
0xc80: IF (Stack[-1] == 0) GOTO 0xc84; Pop(1)

0xc81: Push("head")
0xc82: @ LookAsyncCamera(Stack[-1])
0xc83: Pop(1)
0xc84: @ CameraWaitForPlayFinish()
0xc85: Pop(0)
0xc86: @ ResumeWorld()
0xc87: Pop(0)
0xc88: Stack[-21] = (bool) 1
0xc89: Return(); Pop(18)

0xc8a: PushEmpty(bool, bool)
0xc8b: Push((bool) 1)
0xc8c: @ CameraSwitchToNormal(Stack[-1])
0xc8d: Pop(1)
0xc8e: PushEmpty(bool)
0xc8f: Call2 0xdb6

0xc90: Pop(0)
0xc91: IF (Stack[-1] == 0) GOTO 0xc93; Pop(1)

0xc92: GOTO 0xc9b

0xc93: Push("head")
0xc94: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xc95: Pop(1)
0xc96: Push(Stack[-1])
0xc97: IF (Stack[-1] == 0) GOTO 0xc9b; Pop(1)

0xc98: Push("head")
0xc99: @ UnlookAsync(Stack[-1])
0xc9a: Pop(1)
0xc9b: Return(); Pop(2)

0xc9c: PushEmpty(int, int, int, int)
0xc9d: Push("voice_common")
0xc9e: @ GetVariable(Stack[-1], Stack[-3])
0xc9f: Pop(1)
0xca0: Push(Stack[-2])
0xca1: IF (Stack[-1] == 0) GOTO 0xcc2; Pop(1)

0xca2: PushEmpty(bool, object)
0xca3: Stack[-1] = Stack[-7]
0xca4: Call2 0xcd6

0xca5: Pop(1)
0xca6: Pop(1); Push((bool) Stack[-1] == 0)
0xca7: IF (Stack[-1] == 0) GOTO 0xcb0; Pop(1)

0xca8: PushEmpty(bool, object)
0xca9: Stack[-1] = Stack[-7]
0xcaa: Call2 0xcfb

0xcab: Pop(1)
0xcac: Pop(1); Push((bool) Stack[-1] == 0)
0xcad: IF (Stack[-1] == 0) GOTO 0xcb0; Pop(1)

0xcae: Stack[-6] = (bool) 0
0xcaf: Return(); Pop(4)

0xcb0: Push((int) 2)
0xcb1: @ irand(Stack[-2], Stack[-1])
0xcb2: Pop(1)
0xcb3: Push(Stack[-1])
0xcb4: IF (Stack[-1] == 0) GOTO 0xcbd; Pop(1)

0xcb5: Push("voice_common")
0xcb6: Push((int) 1)
0xcb7: Pop(1); Push(Stack[-4] + Stack[-1]);
0xcb8: Push((int) 3)
0xcb9: Pop(2); Push(Stack[-2] % Stack[-1]);
0xcba: @ SetVariable(Stack[-2], Stack[-1])
0xcbb: Pop(2)
0xcbc: GOTO 0xcc1

0xcbd: Push("voice_common")
0xcbe: Push((int) 0)
0xcbf: @ SetVariable(Stack[-2], Stack[-1])
0xcc0: Pop(2)
0xcc1: GOTO 0xcd4

0xcc2: PushEmpty(bool, object)
0xcc3: Stack[-1] = Stack[-7]
0xcc4: Call2 0xcfb

0xcc5: Pop(1)
0xcc6: Pop(1); Push((bool) Stack[-1] == 0)
0xcc7: IF (Stack[-1] == 0) GOTO 0xcd0; Pop(1)

0xcc8: PushEmpty(bool, object)
0xcc9: Stack[-1] = Stack[-7]
0xcca: Call2 0xcd6

0xccb: Pop(1)
0xccc: Pop(1); Push((bool) Stack[-1] == 0)
0xccd: IF (Stack[-1] == 0) GOTO 0xcd0; Pop(1)

0xcce: Stack[-6] = (bool) 0
0xccf: Return(); Pop(4)

0xcd0: Push("voice_common")
0xcd1: Push((int) 1)
0xcd2: @ SetVariable(Stack[-2], Stack[-1])
0xcd3: Pop(2)
0xcd4: Stack[-6] = (bool) 1
0xcd5: Return(); Pop(4)

0xcd6: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xcd7: Stack[-5] = "c"
0xcd8: Stack[-4] = (int) 0
0xcd9: Push((int) 1)
0xcda: IF (Stack[-1] == 0) GOTO 0xce6; Pop(1)

0xcdb: Push((int) 1)
0xcdc: Pop(1); Push(Stack[-5] + Stack[-1]);
0xcdd: Pop(1); Push(Stack[-6] + Stack[-1]);
0xcde: @@ HasProperty(Stack[-1], Stack[-4])
0xcdf: Pop(1)
0xce0: Pop(0); Push((bool) Stack[-3] == 0)
0xce1: IF (Stack[-1] == 0) GOTO 0xce3; Pop(1)

0xce2: GOTO 0xce6

0xce3: Push((int) 1)
0xce4: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xce5: GOTO 0xcd9

0xce6: Pop(0); Push((bool) Stack[-4] == 0)
0xce7: IF (Stack[-1] == 0) GOTO 0xcea; Pop(1)

0xce8: Stack[-12] = (bool) 0
0xce9: Return(); Pop(10)

0xcea: Stack[-2] = (int) 0
0xceb: Push((int) 1)
0xcec: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xced: IF (Stack[-1] == 0) GOTO 0xcf0; Pop(1)

0xcee: @ irand(Stack[-2], Stack[-4])
0xcef: Pop(0)
0xcf0: Push((int) 1)
0xcf1: Pop(1); Push(Stack[-3] + Stack[-1]);
0xcf2: Pop(1); Push(Stack[-6] + Stack[-1]);
0xcf3: @@ GetProperty(Stack[-1], Stack[-2])
0xcf4: Pop(1)
0xcf5: PushEmpty(bool, string)
0xcf6: Stack[-1] = Stack[-3]
0xcf7: Call2 0xd45

0xcf8: Stack[-14] = Stack[-2]
0xcf9: Pop(2)
0xcfa: Return(); Pop(10)

0xcfb: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xcfc: Push("d")
0xcfd: PushEmpty(int)
0xcfe: Call2 0xd87

0xcff: Pop(0)
0xd00: Pop(2); Push(Stack[-2] + Stack[-1]);
0xd01: Push("m")
0xd02: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0xd03: Stack[-4] = (int) 0
0xd04: Push((int) 1)
0xd05: IF (Stack[-1] == 0) GOTO 0xd11; Pop(1)

0xd06: Push((int) 1)
0xd07: Pop(1); Push(Stack[-5] + Stack[-1]);
0xd08: Pop(1); Push(Stack[-6] + Stack[-1]);
0xd09: @@ HasProperty(Stack[-1], Stack[-4])
0xd0a: Pop(1)
0xd0b: Pop(0); Push((bool) Stack[-3] == 0)
0xd0c: IF (Stack[-1] == 0) GOTO 0xd0e; Pop(1)

0xd0d: GOTO 0xd11

0xd0e: Push((int) 1)
0xd0f: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xd10: GOTO 0xd04

0xd11: Pop(0); Push((bool) Stack[-4] == 0)
0xd12: IF (Stack[-1] == 0) GOTO 0xd15; Pop(1)

0xd13: Stack[-12] = (bool) 0
0xd14: Return(); Pop(10)

0xd15: Stack[-2] = (int) 0
0xd16: Push((int) 1)
0xd17: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xd18: IF (Stack[-1] == 0) GOTO 0xd1b; Pop(1)

0xd19: @ irand(Stack[-2], Stack[-4])
0xd1a: Pop(0)
0xd1b: Push((int) 1)
0xd1c: Pop(1); Push(Stack[-3] + Stack[-1]);
0xd1d: Pop(1); Push(Stack[-6] + Stack[-1]);
0xd1e: @@ GetProperty(Stack[-1], Stack[-2])
0xd1f: Pop(1)
0xd20: PushEmpty(bool, string)
0xd21: Stack[-1] = Stack[-3]
0xd22: Call2 0xd45

0xd23: Stack[-14] = Stack[-2]
0xd24: Pop(2)
0xd25: Return(); Pop(10)

0xd26: PushEmpty(bool, float, float, bool, float, float)
0xd27: @ lshHasAnimation(Stack[-3], Stack[-7])
0xd28: Pop(0)
0xd29: Push(Stack[-3])
0xd2a: IF (Stack[-1] == 0) GOTO 0xd31; Pop(1)

0xd2b: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0xd2c: Pop(0)
0xd2d: Push((bool) 0)
0xd2e: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xd2f: Pop(1)
0xd30: GOTO 0xd35

0xd31: Push("Can't find lsh animation : ")
0xd32: Pop(1); Push(Stack[-1] + Stack[-8]);
0xd33: @ Trace(Stack[-1])
0xd34: Pop(1)
0xd35: Return(); Pop(6)

0xd36: PushEmpty(bool, float, float, bool, float, float)
0xd37: @ lshHasAnimation(Stack[-3], Stack[-8])
0xd38: Pop(0)
0xd39: Push(Stack[-3])
0xd3a: IF (Stack[-1] == 0) GOTO 0xd40; Pop(1)

0xd3b: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0xd3c: Pop(0)
0xd3d: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0xd3e: Pop(0)
0xd3f: GOTO 0xd44

0xd40: Push("Can't find lsh animation : ")
0xd41: Pop(1); Push(Stack[-1] + Stack[-9]);
0xd42: @ Trace(Stack[-1])
0xd43: Pop(1)
0xd44: Return(); Pop(6)

0xd45: PushEmpty(bool, bool)
0xd46: PushEmpty(bool)
0xd47: Call2 0xdb6

0xd48: Pop(0)
0xd49: IF (Stack[-1] == 0) GOTO 0xd52; Pop(1)

0xd4a: @ lshHasSpeech(Stack[-1], Stack[-3])
0xd4b: Pop(0)
0xd4c: Push(Stack[-1])
0xd4d: IF (Stack[-1] == 0) GOTO 0xd52; Pop(1)

0xd4e: @ lshPlaySpeech(Stack[-3])
0xd4f: Pop(0)
0xd50: Stack[-4] = (bool) 1
0xd51: Return(); Pop(2)

0xd52: Stack[-4] = (bool) 0
0xd53: Return(); Pop(2)

0xd54: PushEmpty(bool)
0xd55: Call2 0xdb6

0xd56: Pop(0)
0xd57: IF (Stack[-1] == 0) GOTO 0xd5a; Pop(1)

0xd58: @ lshStopSpeech()
0xd59: Pop(0)
0xd5a: Return(); Pop(0)

0xd5b: PushEmpty(object, object)
0xd5c: @ self(Stack[-1])
0xd5d: Pop(0)
0xd5e: Stack[-3] = Stack[-1]
0xd5f: Return(); Pop(2)

0xd60: Stack[-1] = 0
0xd61: PushEmpty(float, float)
0xd62: Pop(0); Push(Stack[-3] | Stack[-3]);
0xd63: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xd64: Push((float)0.0)
0xd65: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xd66: IF (Stack[-1] == 0) GOTO 0xd69; Pop(1)

0xd67: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xd68: Return(); Pop(2)

0xd69: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xd6a: Return(); Pop(2)

0xd6b: PushEmpty(int, int)
0xd6c: @ GetVariable(Stack[-3], Stack[-1])
0xd6d: Pop(0)
0xd6e: Stack[-4] = Stack[-1]
0xd6f: Return(); Pop(2)

0xd70: PushEmpty(object, object, object, object)
0xd71: @ GetMainOutdoorScene(Stack[-2])
0xd72: Pop(0)
0xd73: Push(".bin")
0xd74: Pop(1); Push(Stack[-6] + Stack[-1]);
0xd75: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0xd76: Pop(1)
0xd77: Stack[-6] = Stack[-1]
0xd78: Return(); Pop(4)

0xd79: Stack[-1] = 0
0xd7a: Stack[-2] = 0
0xd7b: PushEmpty(int, bool, int, bool)
0xd7c: @ GetInvItemByName(Stack[-2], Stack[-5])
0xd7d: Pop(0)
0xd7e: @@ HasItem(Stack[-2], Stack[-1])
0xd7f: Pop(0)
0xd80: Stack[-7] = Stack[-1]
0xd81: Return(); Pop(4)

0xd82: PushEmpty(float, float)
0xd83: @ GetGameTime(Stack[-1])
0xd84: Pop(0)
0xd85: Stack[-3] = Stack[-1]
0xd86: Return(); Pop(2)

0xd87: PushEmpty(float, float)
0xd88: @ GetGameTime(Stack[-1])
0xd89: Pop(0)
0xd8a: Push((int) 1)
0xd8b: PushEmpty(int)
0xd8c: Push((int) 24)
0xd8d: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xd8e: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xd8f: Return(); Pop(2)

0xd90: PushEmpty()
0xd91: PushEmpty(int)
0xd92: Call2 0xd87

0xd93: Pop(0)
0xd94: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0xd95: Return(); Pop(0)

0xd96: PushEmpty(string, string)
0xd97: Stack[-1] = "idle"
0xd98: Push(Stack[-3])
0xd99: IF (Stack[-1] == 0) GOTO 0xd9b; Pop(1)

0xd9a: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xd9b: Stack[-4] = Stack[-1]
0xd9c: Return(); Pop(2)

0xd9d: PushEmpty(int, bool, int, bool)
0xd9e: Stack[-2] = (int) 0
0xd9f: Push("all")
0xda0: PushEmpty(string, int)
0xda1: Stack[-1] = Stack[-5]
0xda2: Call2 0xd96

0xda3: Pop(1)
0xda4: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xda5: Pop(2)
0xda6: Pop(0); Push((bool) Stack[-1] == 0)
0xda7: IF (Stack[-1] == 0) GOTO 0xda9; Pop(1)

0xda8: GOTO 0xdac

0xda9: Push((int) 1)
0xdaa: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xdab: GOTO 0xd9f

0xdac: Stack[-5] = Stack[-2]
0xdad: Return(); Pop(4)

0xdae: Stack[-1] = (int) 515542
0xdaf: Return(); Pop(0)

0xdb0: Stack[-1] = (int) 502867
0xdb1: Return(); Pop(0)

0xdb2: Stack[-1] = "ui/NPC_Laska.png"
0xdb3: Return(); Pop(0)

0xdb4: Stack[-1] = "ui/NPC_Laska_b.png"
0xdb5: Return(); Pop(0)

0xdb6: Stack[-1] = (bool) 1
0xdb7: Return(); Pop(0)

0xdb8: PushEmpty()
0xdb9: PushEmpty(object, string, float)
0xdba: PushEmpty(object)
0xdbb: Call2 0xf54

0xdbc: Stack[-4] = Stack[-1]
0xdbd: Pop(1)
0xdbe: Stack[-2] = "pt_map_burah_home"
0xdbf: Stack[-1] = (int) 2
0xdc0: Call2 0xf65

0xdc1: Pop(3)
0xdc2: PushEmpty(object)
0xdc3: Call2 0xf54

0xdc4: Pop(0)
0xdc5: @@ ShowMap(Stack[-1])
0xdc6: Pop(1)
0xdc7: Return(); Pop(0)

0xdc8: PushEmpty()
0xdc9: Push("ook1Laska1")
0xdca: Push((int) 1)
0xdcb: @ SetVariable(Stack[-2], Stack[-1])
0xdcc: Pop(2)
0xdcd: Return(); Pop(0)

0xdce: PushEmpty()
0xdcf: Push("ook1Laska2")
0xdd0: Push((int) 1)
0xdd1: @ SetVariable(Stack[-2], Stack[-1])
0xdd2: Pop(2)
0xdd3: Return(); Pop(0)

0xdd4: PushEmpty(object, object)
0xdd5: Push("k1q01LaskaGotoBurah")
0xdd6: Push((int) 1)
0xdd7: @ SetVariable(Stack[-2], Stack[-1])
0xdd8: Pop(2)
0xdd9: PushEmpty(object)
0xdda: Call2 0xf54

0xddb: Stack[-2] = Stack[-1]
0xddc: Pop(1)
0xddd: Push("k1q01LaskaGotoBurah")
0xdde: Push("pt_map_burah_home")
0xddf: Push((int) 1)
0xde0: Push((int) 524731)
0xde1: PushEmpty(float)
0xde2: Call2 0xd82

0xde3: Pop(0)
0xde4: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xde5: Pop(5)
0xde6: PushEmpty()
0xde7: Call2 0xedd

0xde8: Pop(0)
0xde9: Return(); Pop(2)

0xdea: Stack[-1] = 0
0xdeb: PushEmpty(int, int)
0xdec: Push("k2q02")
0xded: Push((int) 3)
0xdee: @ SetVariable(Stack[-2], Stack[-1])
0xdef: Pop(2)
0xdf0: PushEmpty()
0xdf1: Call2 0xeea

0xdf2: Pop(0)
0xdf3: Push("milk")
0xdf4: Push((int) 1)
0xdf5: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0xdf6: Pop(2)
0xdf7: Push("bread")
0xdf8: Push((int) 1)
0xdf9: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0xdfa: Pop(2)
0xdfb: Push("flower")
0xdfc: Push((int) 1)
0xdfd: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0xdfe: Pop(2)
0xdff: Return(); Pop(2)

0xe00: PushEmpty()
0xe01: Push("ook2Laska1")
0xe02: Push((int) 1)
0xe03: @ SetVariable(Stack[-2], Stack[-1])
0xe04: Pop(2)
0xe05: Return(); Pop(0)

0xe06: PushEmpty(object, object)
0xe07: PushEmpty(object)
0xe08: Call2 0xf54

0xe09: Stack[-2] = Stack[-1]
0xe0a: Pop(1)
0xe0b: Push("k5q03LaskaGotoAlbinos")
0xe0c: Push("pt_k5q03_albinos_path12")
0xe0d: Push((int) 0)
0xe0e: Push((int) 526026)
0xe0f: PushEmpty(float)
0xe10: Call2 0xd82

0xe11: Pop(0)
0xe12: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe13: Pop(5)
0xe14: PushEmpty()
0xe15: Call2 0xef7

0xe16: Pop(0)
0xe17: PushEmpty()
0xe18: Call2 0xf04

0xe19: Pop(0)
0xe1a: PushEmpty(object, string)
0xe1b: Stack[-1] = "quest_k5_03"
0xe1c: Call2 0xd70

0xe1d: Pop(2)
0xe1e: Return(); Pop(2)

0xe1f: Stack[-1] = 0
0xe20: PushEmpty()
0xe21: Push("ook5Laska1")
0xe22: Push((int) 1)
0xe23: @ SetVariable(Stack[-2], Stack[-1])
0xe24: Pop(2)
0xe25: Return(); Pop(0)

0xe26: PushEmpty()
0xe27: Push("k5LaskaVisit")
0xe28: Push((int) 1)
0xe29: @ SetVariable(Stack[-2], Stack[-1])
0xe2a: Pop(2)
0xe2b: Return(); Pop(0)

0xe2c: PushEmpty()
0xe2d: Push("k6LaskaVisit")
0xe2e: Push((int) 1)
0xe2f: @ SetVariable(Stack[-2], Stack[-1])
0xe30: Pop(2)
0xe31: Return(); Pop(0)

0xe32: PushEmpty()
0xe33: Push("ook6Laska1")
0xe34: Push((int) 1)
0xe35: @ SetVariable(Stack[-2], Stack[-1])
0xe36: Pop(2)
0xe37: Return(); Pop(0)

0xe38: PushEmpty(object, object)
0xe39: PushEmpty(object)
0xe3a: Call2 0xf54

0xe3b: Stack[-2] = Stack[-1]
0xe3c: Pop(1)
0xe3d: Push("k6q03LaskaGotoAlbinos")
0xe3e: Push("pt_k6q03_albinos_path9")
0xe3f: Push((int) 0)
0xe40: Push((int) 511153)
0xe41: PushEmpty(float)
0xe42: Call2 0xd82

0xe43: Pop(0)
0xe44: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe45: Pop(5)
0xe46: PushEmpty()
0xe47: Call2 0xf11

0xe48: Pop(0)
0xe49: PushEmpty()
0xe4a: Call2 0xf1e

0xe4b: Pop(0)
0xe4c: PushEmpty(object, string)
0xe4d: Stack[-1] = "quest_k6_03"
0xe4e: Call2 0xd70

0xe4f: Pop(2)
0xe50: Return(); Pop(2)

0xe51: Stack[-1] = 0
0xe52: PushEmpty()
0xe53: Push("playsound")
0xe54: Push("giveitem")
0xe55: @ TriggerWorld(Stack[-2], Stack[-1])
0xe56: Pop(2)
0xe57: Return(); Pop(0)

0xe58: PushEmpty()
0xe59: Push("playsound")
0xe5a: Push("mapmark")
0xe5b: @ TriggerWorld(Stack[-2], Stack[-1])
0xe5c: Pop(2)
0xe5d: Return(); Pop(0)

0xe5e: PushEmpty()
0xe5f: PushEmpty(int, string)
0xe60: Stack[-1] = "ook1Laska1"
0xe61: Call2 0xd6b

0xe62: Pop(1)
0xe63: Push((int) 0)
0xe64: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe65: IF (Stack[-1] == 0) GOTO 0xe68; Pop(1)

0xe66: Stack[-2] = (bool) 1
0xe67: Return(); Pop(0)

0xe68: Stack[-2] = (bool) 0
0xe69: Return(); Pop(0)

0xe6a: PushEmpty()
0xe6b: PushEmpty(int, string)
0xe6c: Stack[-1] = "k1q01"
0xe6d: Call2 0xd6b

0xe6e: Pop(1)
0xe6f: Push((int) 4)
0xe70: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe71: IF (Stack[-1] == 0) GOTO 0xe74; Pop(1)

0xe72: Stack[-2] = (bool) 1
0xe73: Return(); Pop(0)

0xe74: Stack[-2] = (bool) 0
0xe75: Return(); Pop(0)

0xe76: PushEmpty()
0xe77: PushEmpty(int, string)
0xe78: Stack[-1] = "ook1Laska2"
0xe79: Call2 0xd6b

0xe7a: Pop(1)
0xe7b: Push((int) 0)
0xe7c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe7d: IF (Stack[-1] == 0) GOTO 0xe80; Pop(1)

0xe7e: Stack[-2] = (bool) 1
0xe7f: Return(); Pop(0)

0xe80: Stack[-2] = (bool) 0
0xe81: Return(); Pop(0)

0xe82: PushEmpty()
0xe83: PushEmpty(int, string)
0xe84: Stack[-1] = "k2q02"
0xe85: Call2 0xd6b

0xe86: Pop(1)
0xe87: Push((int) 1)
0xe88: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe89: IF (Stack[-1] == 0) GOTO 0xe8c; Pop(1)

0xe8a: Stack[-2] = (bool) 1
0xe8b: Return(); Pop(0)

0xe8c: Stack[-2] = (bool) 0
0xe8d: Return(); Pop(0)

0xe8e: PushEmpty()
0xe8f: PushEmpty(int, string)
0xe90: Stack[-1] = "k2q02"
0xe91: Call2 0xd6b

0xe92: Pop(1)
0xe93: Push((int) 2)
0xe94: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe95: IF (Stack[-1] == 0) GOTO 0xe98; Pop(1)

0xe96: Stack[-2] = (bool) 1
0xe97: Return(); Pop(0)

0xe98: Stack[-2] = (bool) 0
0xe99: Return(); Pop(0)

0xe9a: PushEmpty()
0xe9b: PushEmpty(bool)
0xe9c: Stack[-1] = (bool) 0
0xe9d: PushEmpty(bool)
0xe9e: Stack[-1] = (bool) 0
0xe9f: PushEmpty(bool, object, string)
0xea0: Stack[-2] = Stack[-6]
0xea1: Stack[-1] = "flower"
0xea2: Call2 0xd7b

0xea3: Pop(2)
0xea4: IF (Stack[-1] == 0) GOTO 0xeac; Pop(1)

0xea5: PushEmpty(bool, object, string)
0xea6: Stack[-2] = Stack[-6]
0xea7: Stack[-1] = "milk"
0xea8: Call2 0xd7b

0xea9: Pop(2)
0xeaa: IF (Stack[-1] == 0) GOTO 0xeac; Pop(1)

0xeab: Stack[-1] = (bool) 1
0xeac: IF (Stack[-1] == 0) GOTO 0xeb4; Pop(1)

0xead: PushEmpty(bool, object, string)
0xeae: Stack[-2] = Stack[-5]
0xeaf: Stack[-1] = "bread"
0xeb0: Call2 0xd7b

0xeb1: Pop(2)
0xeb2: IF (Stack[-1] == 0) GOTO 0xeb4; Pop(1)

0xeb3: Stack[-1] = (bool) 1
0xeb4: IF (Stack[-1] == 0) GOTO 0xeb7; Pop(1)

0xeb5: Stack[-2] = (bool) 1
0xeb6: Return(); Pop(0)

0xeb7: Stack[-2] = (bool) 0
0xeb8: Return(); Pop(0)

0xeb9: PushEmpty()
0xeba: PushEmpty(int, string)
0xebb: Stack[-1] = "ook2Laska1"
0xebc: Call2 0xd6b

0xebd: Pop(1)
0xebe: Push((int) 0)
0xebf: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xec0: IF (Stack[-1] == 0) GOTO 0xec3; Pop(1)

0xec1: Stack[-2] = (bool) 1
0xec2: Return(); Pop(0)

0xec3: Stack[-2] = (bool) 0
0xec4: Return(); Pop(0)

0xec5: PushEmpty()
0xec6: PushEmpty(int, string)
0xec7: Stack[-1] = "ook5Laska1"
0xec8: Call2 0xd6b

0xec9: Pop(1)
0xeca: Push((int) 0)
0xecb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xecc: IF (Stack[-1] == 0) GOTO 0xecf; Pop(1)

0xecd: Stack[-2] = (bool) 1
0xece: Return(); Pop(0)

0xecf: Stack[-2] = (bool) 0
0xed0: Return(); Pop(0)

0xed1: PushEmpty()
0xed2: PushEmpty(int, string)
0xed3: Stack[-1] = "ook6Laska1"
0xed4: Call2 0xd6b

0xed5: Pop(1)
0xed6: Push((int) 0)
0xed7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xed8: IF (Stack[-1] == 0) GOTO 0xedb; Pop(1)

0xed9: Stack[-2] = (bool) 1
0xeda: Return(); Pop(0)

0xedb: Stack[-2] = (bool) 0
0xedc: Return(); Pop(0)

0xedd: PushEmpty(object, object)
0xede: Push((int) 776)
0xedf: Push((int) 1)
0xee0: Push((int) 541530)
0xee1: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xee2: Pop(3)
0xee3: PushEmpty(bool, object, int)
0xee4: Stack[-2] = Stack[-4]
0xee5: Stack[-1] = (int) 318
0xee6: Call2 0xf38

0xee7: Pop(3)
0xee8: Return(); Pop(2)

0xee9: Stack[-1] = 0
0xeea: PushEmpty(object, object)
0xeeb: Push((int) 473)
0xeec: Push((int) 2)
0xeed: Push((int) 527789)
0xeee: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xeef: Pop(3)
0xef0: PushEmpty(bool, object, int)
0xef1: Stack[-2] = Stack[-4]
0xef2: Stack[-1] = (int) 470
0xef3: Call2 0xf38

0xef4: Pop(3)
0xef5: Return(); Pop(2)

0xef6: Stack[-1] = 0
0xef7: PushEmpty(object, object)
0xef8: Push((int) 405)
0xef9: Push((int) 2)
0xefa: Push((int) 526023)
0xefb: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xefc: Pop(3)
0xefd: PushEmpty(bool, object, int)
0xefe: Stack[-2] = Stack[-4]
0xeff: Stack[-1] = (int) -1
0xf00: Call2 0xf38

0xf01: Pop(3)
0xf02: Return(); Pop(2)

0xf03: Stack[-1] = 0
0xf04: PushEmpty(object, object)
0xf05: Push((int) 406)
0xf06: Push((int) 2)
0xf07: Push((int) 526024)
0xf08: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xf09: Pop(3)
0xf0a: PushEmpty(bool, object, int)
0xf0b: Stack[-2] = Stack[-4]
0xf0c: Stack[-1] = (int) 405
0xf0d: Call2 0xf38

0xf0e: Pop(3)
0xf0f: Return(); Pop(2)

0xf10: Stack[-1] = 0
0xf11: PushEmpty(object, object)
0xf12: Push((int) 748)
0xf13: Push((int) 2)
0xf14: Push((int) 539627)
0xf15: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xf16: Pop(3)
0xf17: PushEmpty(bool, object, int)
0xf18: Stack[-2] = Stack[-4]
0xf19: Stack[-1] = (int) -1
0xf1a: Call2 0xf38

0xf1b: Pop(3)
0xf1c: Return(); Pop(2)

0xf1d: Stack[-1] = 0
0xf1e: PushEmpty(object, object)
0xf1f: Push((int) 749)
0xf20: Push((int) 2)
0xf21: Push((int) 539628)
0xf22: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xf23: Pop(3)
0xf24: PushEmpty(bool, object, int)
0xf25: Stack[-2] = Stack[-4]
0xf26: Stack[-1] = (int) 748
0xf27: Call2 0xf38

0xf28: Pop(3)
0xf29: Return(); Pop(2)

0xf2a: Stack[-1] = 0
0xf2b: PushEmpty(object, object)
0xf2c: @ GetDiaryRoot(Stack[-1])
0xf2d: Pop(0)
0xf2e: Pop(0); Push((bool) Stack[-1] == 0)
0xf2f: IF (Stack[-1] == 0) GOTO 0xf35; Pop(1)

0xf30: Push("Can't retrieve diary root")
0xf31: @ Trace(Stack[-1])
0xf32: Pop(1)
0xf33: Stack[-3] = (bool) 0
0xf34: Return(); Pop(2)

0xf35: Stack[-3] = Stack[-1]
0xf36: Return(); Pop(2)

0xf37: Stack[-1] = 0
0xf38: PushEmpty(object, object, int, object, object, int)
0xf39: PushEmpty(object)
0xf3a: Call2 0xf2b

0xf3b: Stack[-4] = Stack[-1]
0xf3c: Pop(1)
0xf3d: @@ Find(Stack[-7], Stack[-2])
0xf3e: Pop(0)
0xf3f: Pop(0); Push((bool) Stack[-2] == 0)
0xf40: IF (Stack[-1] == 0) GOTO 0xf47; Pop(1)

0xf41: Push("Can't find diary parent with id: ")
0xf42: Pop(1); Push(Stack[-1] + Stack[-8]);
0xf43: @ Trace(Stack[-1])
0xf44: Pop(1)
0xf45: Stack[-9] = (bool) 0
0xf46: Return(); Pop(6)

0xf47: @@ AddChild(Stack[-8])
0xf48: Pop(0)
0xf49: Push((int) 7)
0xf4a: @ SendWorldWndMessage(Stack[-1])
0xf4b: Pop(1)
0xf4c: @@ GetCategory(Stack[-1])
0xf4d: Pop(0)
0xf4e: @ SetDiarySection(Stack[-1])
0xf4f: Pop(0)
0xf50: Stack[-9] = (bool) 0
0xf51: Return(); Pop(6)

0xf52: Stack[-2] = 0
0xf53: Stack[-3] = 0
0xf54: PushEmpty(object, object, object, object)
0xf55: @ GetMainOutdoorScene(Stack[-2])
0xf56: Pop(0)
0xf57: Pop(0); Push((bool) Stack[-2] == 0)
0xf58: IF (Stack[-1] == 0) GOTO 0xf5f; Pop(1)

0xf59: Push("Can't find main outdoor scene")
0xf5a: @ Trace(Stack[-1])
0xf5b: Pop(1)
0xf5c: Stack[-1] = 0
0xf5d: Stack[-5] = Stack[-1]
0xf5e: Return(); Pop(4)

0xf5f: @@ GetMap(Stack[-1])
0xf60: Pop(0)
0xf61: Stack[-5] = Stack[-1]
0xf62: Return(); Pop(4)

0xf63: Stack[-1] = 0
0xf64: Stack[-2] = 0
0xf65: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0xf66: @ GetMainOutdoorScene(Stack[-2])
0xf67: Pop(0)
0xf68: Pop(0); Push((bool) Stack[-2] == 0)
0xf69: IF (Stack[-1] == 0) GOTO 0xf6e; Pop(1)

0xf6a: Push("Can't find main outdoor scene")
0xf6b: @ Trace(Stack[-1])
0xf6c: Pop(1)
0xf6d: Return(); Pop(8)

0xf6e: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0xf6f: Pop(0)
0xf70: Pop(0); Push((bool) Stack[-1] == 0)
0xf71: IF (Stack[-1] == 0) GOTO 0xf78; Pop(1)

0xf72: Push("Warning: outdoor scene locator ")
0xf73: Pop(1); Push(Stack[-1] + Stack[-11]);
0xf74: Push(" doesnt exist")
0xf75: Pop(2); Push(Stack[-2] + Stack[-1]);
0xf76: @ Trace(Stack[-1])
0xf77: Pop(1)
0xf78: @@ GetMap(Stack[-11])
0xf79: Pop(0)
0xf7a: Pop(0); Push((bool) Stack[-11] == 0)
0xf7b: IF (Stack[-1] == 0) GOTO 0xf80; Pop(1)

0xf7c: Push("Can't find map")
0xf7d: @ Trace(Stack[-1])
0xf7e: Pop(1)
0xf7f: Return(); Pop(8)

0xf80: Push(CvectorIndex(Stack[-4], 0))
0xf81: Push(CvectorIndex(Stack[-5], 2))
0xf82: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0xf83: Pop(2)
0xf84: Return(); Pop(8)

0xf85: Stack[-2] = 0
0xf86: PushEmpty(int, int)
0xf87: Push("branch")
0xf88: @ GetVariable(Stack[-1], Stack[-2])
0xf89: Pop(1)
0xf8a: Push((int) 0)
0xf8b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf8c: IF (Stack[-1] == 0) GOTO 0xf90; Pop(1)

0xf8d: Stack[-3] = (int) 1
0xf8e: Return(); Pop(2)

0xf8f: GOTO 0xf95

0xf90: Push((int) 1)
0xf91: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf92: IF (Stack[-1] == 0) GOTO 0xf95; Pop(1)

0xf93: Stack[-3] = (int) 2
0xf94: Return(); Pop(2)

0xf95: Stack[-3] = (int) 3
0xf96: Return(); Pop(2)

0xf97: PushEmpty(int, int)
0xf98: Push("mt_laska")
0xf99: @ GetVariable(Stack[-1], Stack[-2])
0xf9a: Pop(1)
0xf9b: Pop(0); Push((bool) Stack[-1] == 0)
0xf9c: IF (Stack[-1] == 0) GOTO 0xfa7; Pop(1)

0xf9d: PushEmpty(int, object)
0xf9e: Stack[-1] = Stack[-5]
0xf9f: Push(-2, 1); TaskCall(4)
0xfa0: Call2 0x524

0xfa1: Pop(-2, 1); TaskReturn
0xfa2: Pop(2)
0xfa3: Push("mt_laska")
0xfa4: Push((int) 1)
0xfa5: @ SetVariable(Stack[-2], Stack[-1])
0xfa6: Pop(2)
0xfa7: PushEmpty(bool, int)
0xfa8: Stack[-1] = (int) 1
0xfa9: Call2 0xd90

0xfaa: Pop(1)
0xfab: IF (Stack[-1] == 0) GOTO 0xfb3; Pop(1)

0xfac: PushEmpty(int, object)
0xfad: Stack[-1] = Stack[-5]
0xfae: Push(-2, 1); TaskCall(0)
0xfaf: Call2 0x0

0xfb0: Pop(-2, 1); TaskReturn
0xfb1: Pop(2)
0xfb2: Return(); Pop(2)

0xfb3: PushEmpty(bool, int)
0xfb4: Stack[-1] = (int) 2
0xfb5: Call2 0xd90

0xfb6: Pop(1)
0xfb7: IF (Stack[-1] == 0) GOTO 0xfbf; Pop(1)

0xfb8: PushEmpty(int, object)
0xfb9: Stack[-1] = Stack[-5]
0xfba: Push(-2, 1); TaskCall(2)
0xfbb: Call2 0x299

0xfbc: Pop(-2, 1); TaskReturn
0xfbd: Pop(2)
0xfbe: Return(); Pop(2)

0xfbf: PushEmpty(bool, int)
0xfc0: Stack[-1] = (int) 5
0xfc1: Call2 0xd90

0xfc2: Pop(1)
0xfc3: IF (Stack[-1] == 0) GOTO 0xfcb; Pop(1)

0xfc4: PushEmpty(int, object)
0xfc5: Stack[-1] = Stack[-5]
0xfc6: Push(-2, 1); TaskCall(6)
0xfc7: Call2 0x5ef

0xfc8: Pop(-2, 1); TaskReturn
0xfc9: Pop(2)
0xfca: Return(); Pop(2)

0xfcb: PushEmpty(bool, int)
0xfcc: Stack[-1] = (int) 6
0xfcd: Call2 0xd90

0xfce: Pop(1)
0xfcf: IF (Stack[-1] == 0) GOTO 0xfd7; Pop(1)

0xfd0: PushEmpty(int, object)
0xfd1: Stack[-1] = Stack[-5]
0xfd2: Push(-2, 1); TaskCall(8)
0xfd3: Call2 0x7ac

0xfd4: Pop(-2, 1); TaskReturn
0xfd5: Pop(2)
0xfd6: Return(); Pop(2)

0xfd7: PushEmpty(bool, int)
0xfd8: Stack[-1] = (int) 12
0xfd9: Call2 0xd90

0xfda: Pop(1)
0xfdb: IF (Stack[-1] == 0) GOTO 0xfe3; Pop(1)

0xfdc: PushEmpty(int, object)
0xfdd: Stack[-1] = Stack[-5]
0xfde: Push(-2, 1); TaskCall(10)
0xfdf: Call2 0x957

0xfe0: Pop(-2, 1); TaskReturn
0xfe1: Pop(2)
0xfe2: Return(); Pop(2)

0xfe3: PushEmpty(int, object)
0xfe4: Stack[-1] = Stack[-5]
0xfe5: Push(-2, 1); TaskCall(12)
0xfe6: Call2 0xa5a

0xfe7: Pop(-2, 1); TaskReturn
0xfe8: Pop(2)
0xfe9: Return(); Pop(2)

