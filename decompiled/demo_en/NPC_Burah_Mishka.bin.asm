GlobalVarCount = 2
	G_VAR_0 object 
	G_VAR_1 bool 

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
	all
	idle
	Fear
	Suspicion
	Neutral
	Dream
	player
	GetPosition
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	GetProperty
	Can't find lsh animation : 
	add
	GetItemID
	Category
	AddItem
	DropItems
	SetItemName
	HasItem
	ui/NPC_Mishka.png
	ui/NPC_Mishka_b.png
	avroks blood is given
	avroks_blood
	oob8Mishka1
	oob1Mishka1
	b10q04MishkaTalk
	playsound
	giveitem
	b10q03
	b10q03MishkaGotoDoll
	pt_b10q03_plant1
	AddMark
	quest_b10_03
	place_doll
	ShowMap
	place_blood
	completed
	fail
	b10q03_toy_burah
	RemoveItemByType
	oob12Mishka1
	b8q01
	b1q05
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
	CameraTransit (2 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
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
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemProperty (3 args)
	CreateInvItem (1 args)
	GetInvItemByName (2 args)
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	TriggerWorld (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x8df
RunTask = 12

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xaf Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x244 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x4f9 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x61b Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x731 Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x8b5 Vars = (int, int)
	GTASK_12 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x92b Vars = (int)
		EVENT_6 Op = 0x951 Vars = ()
		EVENT_5 Op = 0x960 Vars = ()
		EVENT_45 Op = 0x96d Vars = (bool)
		EVENT_0 Op = 0x979 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0xa02

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0xb98

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0xb96

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0xb9a

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0xb9c

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0xd33

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
0x31: Call2 0xb16

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0xa57

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
0x48: Call2 0xa46

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
0x56: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x57: PushEmpty(string)
0x58: Stack[-1] = "Autizm"
0x59: Call2 0x99

0x5a: Pop(1)
0x5b: Push((int) 527115)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: PushEmpty(bool)
0x61: Stack[-1] = (bool) 0
0x62: PushEmpty(bool, object)
0x63: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x64: Call2 0xc38

0x65: Pop(1)
0x66: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x67: PushEmpty(bool, object)
0x68: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x69: Call2 0xc7f

0x6a: Pop(1)
0x6b: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x6c: Stack[-1] = (bool) 1
0x6d: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x6e: Push((int) 527116)
0x6f: Push((int) 28416)
0x70: Push((int) 28414)
0x71: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x72: Pop(3)
0x73: Push((int) 527117)
0x74: Push((int) -1)
0x75: Push((int) 28415)
0x76: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x77: Pop(3)
0x78: GOTO 0x7b

0x79: Return(); Pop(0)

0x7a: GOTO 0x55

0x7b: PushEmpty(bool)
0x7c: Call2 0xb9e

0x7d: Pop(0)
0x7e: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x7f: @ lshWaitForAnimEnd()
0x80: Pop(0)
0x81: Push( Stack[3 + Tasks[-1].StackPointer] )
0x82: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x83: GOTO 0x89

0x84: PushEmpty(string)
0x85: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x86: Call2 0xae1

0x87: Pop(1)
0x88: GOTO 0x7f

0x89: GOTO 0x98

0x8a: Push("all")
0x8b: Push("idle")
0x8c: @ PlayAnimation(Stack[-2], Stack[-1])
0x8d: Pop(2)
0x8e: @ WaitForAnimEnd()
0x8f: Pop(0)
0x90: Push( Stack[3 + Tasks[-1].StackPointer] )
0x91: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x92: GOTO 0x98

0x93: Push("all")
0x94: Push("idle")
0x95: @ PlayAnimation(Stack[-2], Stack[-1])
0x96: Pop(2)
0x97: GOTO 0x8e

0x98: Return(); Pop(0)

0x99: PushEmpty()
0x9a: PushEmpty(bool)
0x9b: Call2 0xb9e

0x9c: Pop(0)
0x9d: Pop(1); Push((bool) Stack[-1] == 0)
0x9e: IF (Stack[-1] == 0) GOTO 0xa0; Pop(1)

0x9f: Return(); Pop(0)

0xa0: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa1: IF (Stack[-1] == 0) GOTO 0xa3; Pop(1)

0xa2: Return(); Pop(0)

0xa3: PushEmpty(string, bool)
0xa4: Stack[-2] = Stack[-3]
0xa5: Push("")
0xa6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa7: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0xa8: Stack[-1] = (bool) 0
0xa9: GOTO 0xab

0xaa: Stack[-1] = (bool) 1
0xab: Call2 0xaf1

0xac: Pop(2)
0xad: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xae: Return(); Pop(0)

0xaf: PushEmpty()
0xb0: Push((int) 1)
0xb1: IF (Stack[-1] == 0) GOTO 0x16c; Pop(1)

0xb2: PushEmpty()
0xb3: Call2 0xb0f

0xb4: Pop(0)
0xb5: Push((int) 28414)
0xb6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb7: IF (Stack[-1] == 0) GOTO 0xbd; Pop(1)

0xb8: PushEmpty(object, object)
0xb9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xba: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbb: Call2 0xbb1

0xbc: Pop(2)
0xbd: Push((int) 28413)
0xbe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbf: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xc0: PushEmpty(string)
0xc1: Stack[-1] = "Autizm"
0xc2: Call2 0x99

0xc3: Pop(1)
0xc4: Push((int) 527115)
0xc5: @@ SetMessage(Stack[-1])
0xc6: Pop(1)
0xc7: @@ ClearReplies()
0xc8: Pop(0)
0xc9: PushEmpty(bool)
0xca: Stack[-1] = (bool) 0
0xcb: PushEmpty(bool, object)
0xcc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcd: Call2 0xc38

0xce: Pop(1)
0xcf: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xd0: PushEmpty(bool, object)
0xd1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd2: Call2 0xc7f

0xd3: Pop(1)
0xd4: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xd5: Stack[-1] = (bool) 1
0xd6: IF (Stack[-1] == 0) GOTO 0xdc; Pop(1)

0xd7: Push((int) 527116)
0xd8: Push((int) 28416)
0xd9: Push((int) 28414)
0xda: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdb: Pop(3)
0xdc: Push((int) 527117)
0xdd: Push((int) -1)
0xde: Push((int) 28415)
0xdf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe0: Pop(3)
0xe1: Return(); Pop(0)

0xe2: Push((int) 28416)
0xe3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe4: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xe5: PushEmpty(string)
0xe6: Stack[-1] = "Autizm"
0xe7: Call2 0x99

0xe8: Pop(1)
0xe9: Push((int) 527118)
0xea: @@ SetMessage(Stack[-1])
0xeb: Pop(1)
0xec: @@ ClearReplies()
0xed: Pop(0)
0xee: Push((int) 527119)
0xef: Push((int) 28418)
0xf0: Push((int) 28417)
0xf1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf2: Pop(3)
0xf3: Return(); Pop(0)

0xf4: Push((int) 28418)
0xf5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf6: IF (Stack[-1] == 0) GOTO 0x106; Pop(1)

0xf7: PushEmpty(string)
0xf8: Stack[-1] = "Fear"
0xf9: Call2 0x99

0xfa: Pop(1)
0xfb: Push((int) 527120)
0xfc: @@ SetMessage(Stack[-1])
0xfd: Pop(1)
0xfe: @@ ClearReplies()
0xff: Pop(0)
0x100: Push((int) 527121)
0x101: Push((int) 28420)
0x102: Push((int) 28419)
0x103: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x104: Pop(3)
0x105: Return(); Pop(0)

0x106: Push((int) 28420)
0x107: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x108: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x109: PushEmpty(string)
0x10a: Stack[-1] = "Fear"
0x10b: Call2 0x99

0x10c: Pop(1)
0x10d: Push((int) 527122)
0x10e: @@ SetMessage(Stack[-1])
0x10f: Pop(1)
0x110: @@ ClearReplies()
0x111: Pop(0)
0x112: Push((int) 527123)
0x113: Push((int) 28422)
0x114: Push((int) 28421)
0x115: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x116: Pop(3)
0x117: Return(); Pop(0)

0x118: Push((int) 28422)
0x119: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11a: IF (Stack[-1] == 0) GOTO 0x12a; Pop(1)

0x11b: PushEmpty(string)
0x11c: Stack[-1] = "Suspicion"
0x11d: Call2 0x99

0x11e: Pop(1)
0x11f: Push((int) 527124)
0x120: @@ SetMessage(Stack[-1])
0x121: Pop(1)
0x122: @@ ClearReplies()
0x123: Pop(0)
0x124: Push((int) 527125)
0x125: Push((int) 28424)
0x126: Push((int) 28423)
0x127: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x128: Pop(3)
0x129: Return(); Pop(0)

0x12a: Push((int) 28424)
0x12b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12c: IF (Stack[-1] == 0) GOTO 0x13c; Pop(1)

0x12d: PushEmpty(string)
0x12e: Stack[-1] = "Neutral"
0x12f: Call2 0x99

0x130: Pop(1)
0x131: Push((int) 527126)
0x132: @@ SetMessage(Stack[-1])
0x133: Pop(1)
0x134: @@ ClearReplies()
0x135: Pop(0)
0x136: Push((int) 527127)
0x137: Push((int) 28426)
0x138: Push((int) 28425)
0x139: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13a: Pop(3)
0x13b: Return(); Pop(0)

0x13c: Push((int) 28426)
0x13d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13e: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x13f: PushEmpty(string)
0x140: Stack[-1] = "Neutral"
0x141: Call2 0x99

0x142: Pop(1)
0x143: Push((int) 527128)
0x144: @@ SetMessage(Stack[-1])
0x145: Pop(1)
0x146: @@ ClearReplies()
0x147: Pop(0)
0x148: Push((int) 527129)
0x149: Push((int) 28428)
0x14a: Push((int) 28427)
0x14b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14c: Pop(3)
0x14d: Return(); Pop(0)

0x14e: Push((int) 28428)
0x14f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x150: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x151: PushEmpty(string)
0x152: Stack[-1] = "Neutral"
0x153: Call2 0x99

0x154: Pop(1)
0x155: Push((int) 527130)
0x156: @@ SetMessage(Stack[-1])
0x157: Pop(1)
0x158: @@ ClearReplies()
0x159: Pop(0)
0x15a: Push((int) 527131)
0x15b: Push((int) -1)
0x15c: Push((int) 28429)
0x15d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15e: Pop(3)
0x15f: Return(); Pop(0)

0x160: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x161: PushEmpty(bool)
0x162: Call2 0xb9e

0x163: Pop(0)
0x164: IF (Stack[-1] == 0) GOTO 0x168; Pop(1)

0x165: @ lshStopAnimation()
0x166: Pop(0)
0x167: GOTO 0x16a

0x168: @ StopAnimation()
0x169: Pop(0)
0x16a: Return(); Pop(0)

0x16b: GOTO 0xb0

0x16c: Return(); Pop(0)

0x16d: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x16e: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x16f: PushEmpty(bool, object, float)
0x170: Stack[-2] = Stack[-12]
0x171: Stack[-1] = (float) 70.0
0x172: Call2 0xa02

0x173: Pop(2)
0x174: Pop(1); Push((bool) Stack[-1] == 0)
0x175: IF (Stack[-1] == 0) GOTO 0x178; Pop(1)

0x176: Stack[-10] = (int) -2
0x177: Return(); Pop(8)

0x178: @ CreateDialog(Stack[-4])
0x179: Pop(0)
0x17a: PushEmpty(int)
0x17b: Call2 0xb98

0x17c: Pop(0)
0x17d: @@ SetNPCName(Stack[-1])
0x17e: Pop(1)
0x17f: PushEmpty(int)
0x180: Call2 0xb96

0x181: Pop(0)
0x182: @@ SetNPCDescription(Stack[-1])
0x183: Pop(1)
0x184: PushEmpty(string)
0x185: Call2 0xb9a

0x186: Pop(0)
0x187: @@ SetPhoto(Stack[-1])
0x188: Pop(1)
0x189: PushEmpty(string)
0x18a: Call2 0xb9c

0x18b: Pop(0)
0x18c: @@ SetPhoto2(Stack[-1])
0x18d: Pop(1)
0x18e: PushEmpty(int)
0x18f: Call2 0xd33

0x190: Pop(0)
0x191: @@ SetPlayerName(Stack[-1])
0x192: Pop(1)
0x193: Stack[-2] = (int) -1
0x194: @ IsOverrideActive(Stack[-3])
0x195: Pop(0)
0x196: Push(Stack[-3])
0x197: IF (Stack[-1] == 0) GOTO 0x19a; Pop(1)

0x198: Stack[-10] = (int) -2
0x199: Return(); Pop(8)

0x19a: @ DoDialog(Stack[-4])
0x19b: Pop(0)
0x19c: PushEmpty(bool, object)
0x19d: PushEmpty(object)
0x19e: Call2 0xb16

0x19f: Stack[-2] = Stack[-1]
0x1a0: Pop(1)
0x1a1: Call2 0xa57

0x1a2: Pop(2)
0x1a3: PushEmpty(object, object)
0x1a4: Stack[-2] = Stack[-11]
0x1a5: Stack[-1] = Stack[-6]
0x1a6: Push(-2, 4); TaskCall(3)
0x1a7: Call2 0x1be

0x1a8: Pop(-2, 4); TaskReturn
0x1a9: Pop(2)
0x1aa: @@ IsDialogEnd(Stack[-1])
0x1ab: Pop(0)
0x1ac: Pop(0); Push((bool) Stack[-1] == 0)
0x1ad: IF (Stack[-1] == 0) GOTO 0x1b3; Pop(1)

0x1ae: @ sync()
0x1af: Pop(0)
0x1b0: @@ IsDialogEnd(Stack[-1])
0x1b1: Pop(0)
0x1b2: GOTO 0x1ac

0x1b3: PushEmpty(object)
0x1b4: Stack[-1] = Stack[-10]
0x1b5: Call2 0xa46

0x1b6: Pop(1)
0x1b7: @ StopDialog(Stack[-4])
0x1b8: Pop(0)
0x1b9: @@ GetReturnValue(Stack[-2])
0x1ba: Pop(0)
0x1bb: Stack[-10] = Stack[-2]
0x1bc: Return(); Pop(8)

0x1bd: Stack[-4] = 0
0x1be: PushEmpty()
0x1bf: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x1c0: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x1c1: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1c2: Push((int) 1)
0x1c3: IF (Stack[-1] == 0) GOTO 0x210; Pop(1)

0x1c4: PushEmpty(bool, object)
0x1c5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c6: Call2 0xc50

0x1c7: Pop(1)
0x1c8: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x1c9: PushEmpty(string)
0x1ca: Stack[-1] = "Suspicion"
0x1cb: Call2 0x22e

0x1cc: Pop(1)
0x1cd: Push((int) 531162)
0x1ce: @@ SetMessage(Stack[-1])
0x1cf: Pop(1)
0x1d0: @@ ClearReplies()
0x1d1: Pop(0)
0x1d2: Push((int) 531292)
0x1d3: Push((int) 32610)
0x1d4: Push((int) 32609)
0x1d5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d6: Pop(3)
0x1d7: GOTO 0x210

0x1d8: PushEmpty(string)
0x1d9: Stack[-1] = "Neutral"
0x1da: Call2 0x22e

0x1db: Pop(1)
0x1dc: Push((int) 530485)
0x1dd: @@ SetMessage(Stack[-1])
0x1de: Pop(1)
0x1df: @@ ClearReplies()
0x1e0: Pop(0)
0x1e1: PushEmpty(bool, object)
0x1e2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1e3: Call2 0xc44

0x1e4: Pop(1)
0x1e5: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1e6: Push((int) 530486)
0x1e7: Push((int) 31853)
0x1e8: Push((int) 31852)
0x1e9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ea: Pop(3)
0x1eb: PushEmpty(bool)
0x1ec: Stack[-1] = (bool) 0
0x1ed: PushEmpty(bool, object)
0x1ee: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ef: Call2 0xc5c

0x1f0: Pop(1)
0x1f1: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1f2: PushEmpty(bool, object)
0x1f3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1f4: Call2 0xc68

0x1f5: Pop(1)
0x1f6: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1f7: Stack[-1] = (bool) 1
0x1f8: IF (Stack[-1] == 0) GOTO 0x1fe; Pop(1)

0x1f9: Push((int) 531172)
0x1fa: Push((int) 32623)
0x1fb: Push((int) 32480)
0x1fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1fd: Pop(3)
0x1fe: PushEmpty(bool, object)
0x1ff: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x200: Call2 0xc73

0x201: Pop(1)
0x202: IF (Stack[-1] == 0) GOTO 0x208; Pop(1)

0x203: Push((int) 531179)
0x204: Push((int) 32617)
0x205: Push((int) 32487)
0x206: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x207: Pop(3)
0x208: Push((int) 530489)
0x209: Push((int) -1)
0x20a: Push((int) 31855)
0x20b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20c: Pop(3)
0x20d: GOTO 0x210

0x20e: Return(); Pop(0)

0x20f: GOTO 0x1c2

0x210: PushEmpty(bool)
0x211: Call2 0xb9e

0x212: Pop(0)
0x213: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0x214: @ lshWaitForAnimEnd()
0x215: Pop(0)
0x216: Push( Stack[3 + Tasks[-1].StackPointer] )
0x217: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x218: GOTO 0x21e

0x219: PushEmpty(string)
0x21a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x21b: Call2 0xae1

0x21c: Pop(1)
0x21d: GOTO 0x214

0x21e: GOTO 0x22d

0x21f: Push("all")
0x220: Push("idle")
0x221: @ PlayAnimation(Stack[-2], Stack[-1])
0x222: Pop(2)
0x223: @ WaitForAnimEnd()
0x224: Pop(0)
0x225: Push( Stack[3 + Tasks[-1].StackPointer] )
0x226: IF (Stack[-1] == 0) GOTO 0x228; Pop(1)

0x227: GOTO 0x22d

0x228: Push("all")
0x229: Push("idle")
0x22a: @ PlayAnimation(Stack[-2], Stack[-1])
0x22b: Pop(2)
0x22c: GOTO 0x223

0x22d: Return(); Pop(0)

0x22e: PushEmpty()
0x22f: PushEmpty(bool)
0x230: Call2 0xb9e

0x231: Pop(0)
0x232: Pop(1); Push((bool) Stack[-1] == 0)
0x233: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x234: Return(); Pop(0)

0x235: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x236: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x237: Return(); Pop(0)

0x238: PushEmpty(string, bool)
0x239: Stack[-2] = Stack[-3]
0x23a: Push("")
0x23b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x23c: IF (Stack[-1] == 0) GOTO 0x23f; Pop(1)

0x23d: Stack[-1] = (bool) 0
0x23e: GOTO 0x240

0x23f: Stack[-1] = (bool) 1
0x240: Call2 0xaf1

0x241: Pop(2)
0x242: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x243: Return(); Pop(0)

0x244: PushEmpty()
0x245: Push((int) 1)
0x246: IF (Stack[-1] == 0) GOTO 0x44d; Pop(1)

0x247: PushEmpty()
0x248: Call2 0xb0f

0x249: Pop(0)
0x24a: Push((int) 32479)
0x24b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x24c: IF (Stack[-1] == 0) GOTO 0x257; Pop(1)

0x24d: PushEmpty(object, object)
0x24e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x24f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x250: Call2 0xbc6

0x251: Pop(2)
0x252: PushEmpty(object, object)
0x253: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x254: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x255: Call2 0xbe2

0x256: Pop(2)
0x257: Push((int) 32616)
0x258: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x259: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x25a: PushEmpty(object, object)
0x25b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x25c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x25d: Call2 0xc0a

0x25e: Pop(2)
0x25f: Push((int) 31854)
0x260: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x261: IF (Stack[-1] == 0) GOTO 0x267; Pop(1)

0x262: PushEmpty(object, object)
0x263: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x264: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x265: Call2 0xbb7

0x266: Pop(2)
0x267: Push((int) 32486)
0x268: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x269: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x26a: PushEmpty(object, object)
0x26b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x26c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x26d: Call2 0xba0

0x26e: Pop(2)
0x26f: PushEmpty(object, object)
0x270: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x271: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x272: Call2 0xbc0

0x273: Pop(2)
0x274: PushEmpty(object, object)
0x275: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x276: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x277: Call2 0xc14

0x278: Pop(2)
0x279: PushEmpty(object, object)
0x27a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x27b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x27c: Call2 0xbf2

0x27d: Pop(2)
0x27e: Push((int) 32633)
0x27f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x280: IF (Stack[-1] == 0) GOTO 0x295; Pop(1)

0x281: PushEmpty(object, object)
0x282: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x283: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x284: Call2 0xba0

0x285: Pop(2)
0x286: PushEmpty(object, object)
0x287: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x288: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x289: Call2 0xbc0

0x28a: Pop(2)
0x28b: PushEmpty(object, object)
0x28c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x28d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x28e: Call2 0xc14

0x28f: Pop(2)
0x290: PushEmpty(object, object)
0x291: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x292: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x293: Call2 0xbf2

0x294: Pop(2)
0x295: Push((int) 32489)
0x296: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x297: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x298: PushEmpty(object, object)
0x299: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x29a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x29b: Call2 0xc00

0x29c: Pop(2)
0x29d: Push((int) 32470)
0x29e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x29f: IF (Stack[-1] == 0) GOTO 0x2ea; Pop(1)

0x2a0: PushEmpty(bool, object)
0x2a1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2a2: Call2 0xc50

0x2a3: Pop(1)
0x2a4: IF (Stack[-1] == 0) GOTO 0x2b4; Pop(1)

0x2a5: PushEmpty(string)
0x2a6: Stack[-1] = "Suspicion"
0x2a7: Call2 0x22e

0x2a8: Pop(1)
0x2a9: Push((int) 531162)
0x2aa: @@ SetMessage(Stack[-1])
0x2ab: Pop(1)
0x2ac: @@ ClearReplies()
0x2ad: Pop(0)
0x2ae: Push((int) 531292)
0x2af: Push((int) 32610)
0x2b0: Push((int) 32609)
0x2b1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b2: Pop(3)
0x2b3: Return(); Pop(0)

0x2b4: PushEmpty(string)
0x2b5: Stack[-1] = "Neutral"
0x2b6: Call2 0x22e

0x2b7: Pop(1)
0x2b8: Push((int) 530485)
0x2b9: @@ SetMessage(Stack[-1])
0x2ba: Pop(1)
0x2bb: @@ ClearReplies()
0x2bc: Pop(0)
0x2bd: PushEmpty(bool, object)
0x2be: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2bf: Call2 0xc44

0x2c0: Pop(1)
0x2c1: IF (Stack[-1] == 0) GOTO 0x2c7; Pop(1)

0x2c2: Push((int) 530486)
0x2c3: Push((int) 31853)
0x2c4: Push((int) 31852)
0x2c5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c6: Pop(3)
0x2c7: PushEmpty(bool)
0x2c8: Stack[-1] = (bool) 0
0x2c9: PushEmpty(bool, object)
0x2ca: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2cb: Call2 0xc5c

0x2cc: Pop(1)
0x2cd: IF (Stack[-1] == 0) GOTO 0x2d4; Pop(1)

0x2ce: PushEmpty(bool, object)
0x2cf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2d0: Call2 0xc68

0x2d1: Pop(1)
0x2d2: IF (Stack[-1] == 0) GOTO 0x2d4; Pop(1)

0x2d3: Stack[-1] = (bool) 1
0x2d4: IF (Stack[-1] == 0) GOTO 0x2da; Pop(1)

0x2d5: Push((int) 531172)
0x2d6: Push((int) 32623)
0x2d7: Push((int) 32480)
0x2d8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d9: Pop(3)
0x2da: PushEmpty(bool, object)
0x2db: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2dc: Call2 0xc73

0x2dd: Pop(1)
0x2de: IF (Stack[-1] == 0) GOTO 0x2e4; Pop(1)

0x2df: Push((int) 531179)
0x2e0: Push((int) 32617)
0x2e1: Push((int) 32487)
0x2e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e3: Pop(3)
0x2e4: Push((int) 530489)
0x2e5: Push((int) -1)
0x2e6: Push((int) 31855)
0x2e7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e8: Pop(3)
0x2e9: Return(); Pop(0)

0x2ea: Push((int) 32617)
0x2eb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ec: IF (Stack[-1] == 0) GOTO 0x2fc; Pop(1)

0x2ed: PushEmpty(string)
0x2ee: Stack[-1] = "Neutral"
0x2ef: Call2 0x22e

0x2f0: Pop(1)
0x2f1: Push((int) 531297)
0x2f2: @@ SetMessage(Stack[-1])
0x2f3: Pop(1)
0x2f4: @@ ClearReplies()
0x2f5: Pop(0)
0x2f6: Push((int) 531298)
0x2f7: Push((int) 32488)
0x2f8: Push((int) 32618)
0x2f9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2fa: Pop(3)
0x2fb: Return(); Pop(0)

0x2fc: Push((int) 32488)
0x2fd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2fe: IF (Stack[-1] == 0) GOTO 0x313; Pop(1)

0x2ff: PushEmpty(string)
0x300: Stack[-1] = "Neutral"
0x301: Call2 0x22e

0x302: Pop(1)
0x303: Push((int) 531180)
0x304: @@ SetMessage(Stack[-1])
0x305: Pop(1)
0x306: @@ ClearReplies()
0x307: Pop(0)
0x308: Push((int) 531299)
0x309: Push((int) 32620)
0x30a: Push((int) 32619)
0x30b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x30c: Pop(3)
0x30d: Push((int) 531301)
0x30e: Push((int) 32620)
0x30f: Push((int) 32621)
0x310: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x311: Pop(3)
0x312: Return(); Pop(0)

0x313: Push((int) 32620)
0x314: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x315: IF (Stack[-1] == 0) GOTO 0x325; Pop(1)

0x316: PushEmpty(string)
0x317: Stack[-1] = "Neutral"
0x318: Call2 0x22e

0x319: Pop(1)
0x31a: Push((int) 531300)
0x31b: @@ SetMessage(Stack[-1])
0x31c: Pop(1)
0x31d: @@ ClearReplies()
0x31e: Pop(0)
0x31f: Push((int) 531181)
0x320: Push((int) -1)
0x321: Push((int) 32489)
0x322: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x323: Pop(3)
0x324: Return(); Pop(0)

0x325: Push((int) 32623)
0x326: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x327: IF (Stack[-1] == 0) GOTO 0x33c; Pop(1)

0x328: PushEmpty(string)
0x329: Stack[-1] = "Neutral"
0x32a: Call2 0x22e

0x32b: Pop(1)
0x32c: Push((int) 531302)
0x32d: @@ SetMessage(Stack[-1])
0x32e: Pop(1)
0x32f: @@ ClearReplies()
0x330: Pop(0)
0x331: Push((int) 531303)
0x332: Push((int) 32481)
0x333: Push((int) 32624)
0x334: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x335: Pop(3)
0x336: Push((int) 531304)
0x337: Push((int) 32481)
0x338: Push((int) 32625)
0x339: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x33a: Pop(3)
0x33b: Return(); Pop(0)

0x33c: Push((int) 32481)
0x33d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x33e: IF (Stack[-1] == 0) GOTO 0x353; Pop(1)

0x33f: PushEmpty(string)
0x340: Stack[-1] = "Neutral"
0x341: Call2 0x22e

0x342: Pop(1)
0x343: Push((int) 531173)
0x344: @@ SetMessage(Stack[-1])
0x345: Pop(1)
0x346: @@ ClearReplies()
0x347: Pop(0)
0x348: Push((int) 531174)
0x349: Push((int) 32483)
0x34a: Push((int) 32482)
0x34b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x34c: Pop(3)
0x34d: Push((int) 531305)
0x34e: Push((int) 32483)
0x34f: Push((int) 32627)
0x350: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x351: Pop(3)
0x352: Return(); Pop(0)

0x353: Push((int) 32483)
0x354: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x355: IF (Stack[-1] == 0) GOTO 0x36a; Pop(1)

0x356: PushEmpty(string)
0x357: Stack[-1] = "Neutral"
0x358: Call2 0x22e

0x359: Pop(1)
0x35a: Push((int) 531175)
0x35b: @@ SetMessage(Stack[-1])
0x35c: Pop(1)
0x35d: @@ ClearReplies()
0x35e: Pop(0)
0x35f: Push((int) 531176)
0x360: Push((int) 32485)
0x361: Push((int) 32484)
0x362: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x363: Pop(3)
0x364: Push((int) 531306)
0x365: Push((int) 32630)
0x366: Push((int) 32629)
0x367: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x368: Pop(3)
0x369: Return(); Pop(0)

0x36a: Push((int) 32630)
0x36b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x36c: IF (Stack[-1] == 0) GOTO 0x37c; Pop(1)

0x36d: PushEmpty(string)
0x36e: Stack[-1] = "Neutral"
0x36f: Call2 0x22e

0x370: Pop(1)
0x371: Push((int) 531307)
0x372: @@ SetMessage(Stack[-1])
0x373: Pop(1)
0x374: @@ ClearReplies()
0x375: Pop(0)
0x376: Push((int) 531308)
0x377: Push((int) 32485)
0x378: Push((int) 32631)
0x379: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x37a: Pop(3)
0x37b: Return(); Pop(0)

0x37c: Push((int) 32485)
0x37d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x37e: IF (Stack[-1] == 0) GOTO 0x393; Pop(1)

0x37f: PushEmpty(string)
0x380: Stack[-1] = "Neutral"
0x381: Call2 0x22e

0x382: Pop(1)
0x383: Push((int) 531177)
0x384: @@ SetMessage(Stack[-1])
0x385: Pop(1)
0x386: @@ ClearReplies()
0x387: Pop(0)
0x388: Push((int) 531178)
0x389: Push((int) -1)
0x38a: Push((int) 32486)
0x38b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x38c: Pop(3)
0x38d: Push((int) 531309)
0x38e: Push((int) -1)
0x38f: Push((int) 32633)
0x390: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x391: Pop(3)
0x392: Return(); Pop(0)

0x393: Push((int) 31853)
0x394: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x395: IF (Stack[-1] == 0) GOTO 0x3aa; Pop(1)

0x396: PushEmpty(string)
0x397: Stack[-1] = "Dream"
0x398: Call2 0x22e

0x399: Pop(1)
0x39a: Push((int) 530487)
0x39b: @@ SetMessage(Stack[-1])
0x39c: Pop(1)
0x39d: @@ ClearReplies()
0x39e: Pop(0)
0x39f: Push((int) 531310)
0x3a0: Push((int) 32635)
0x3a1: Push((int) 32634)
0x3a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a3: Pop(3)
0x3a4: Push((int) 531314)
0x3a5: Push((int) 32635)
0x3a6: Push((int) 32638)
0x3a7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a8: Pop(3)
0x3a9: Return(); Pop(0)

0x3aa: Push((int) 32635)
0x3ab: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ac: IF (Stack[-1] == 0) GOTO 0x3c1; Pop(1)

0x3ad: PushEmpty(string)
0x3ae: Stack[-1] = "Dream"
0x3af: Call2 0x22e

0x3b0: Pop(1)
0x3b1: Push((int) 531311)
0x3b2: @@ SetMessage(Stack[-1])
0x3b3: Pop(1)
0x3b4: @@ ClearReplies()
0x3b5: Pop(0)
0x3b6: Push((int) 531312)
0x3b7: Push((int) 32637)
0x3b8: Push((int) 32636)
0x3b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ba: Pop(3)
0x3bb: Push((int) 531315)
0x3bc: Push((int) 32637)
0x3bd: Push((int) 32639)
0x3be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3bf: Pop(3)
0x3c0: Return(); Pop(0)

0x3c1: Push((int) 32637)
0x3c2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3c3: IF (Stack[-1] == 0) GOTO 0x3d3; Pop(1)

0x3c4: PushEmpty(string)
0x3c5: Stack[-1] = "Dream"
0x3c6: Call2 0x22e

0x3c7: Pop(1)
0x3c8: Push((int) 531313)
0x3c9: @@ SetMessage(Stack[-1])
0x3ca: Pop(1)
0x3cb: @@ ClearReplies()
0x3cc: Pop(0)
0x3cd: Push((int) 530488)
0x3ce: Push((int) -1)
0x3cf: Push((int) 31854)
0x3d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d1: Pop(3)
0x3d2: Return(); Pop(0)

0x3d3: Push((int) 32610)
0x3d4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3d5: IF (Stack[-1] == 0) GOTO 0x3ea; Pop(1)

0x3d6: PushEmpty(string)
0x3d7: Stack[-1] = "Suspicion"
0x3d8: Call2 0x22e

0x3d9: Pop(1)
0x3da: Push((int) 531293)
0x3db: @@ SetMessage(Stack[-1])
0x3dc: Pop(1)
0x3dd: @@ ClearReplies()
0x3de: Pop(0)
0x3df: Push((int) 531291)
0x3e0: Push((int) 32473)
0x3e1: Push((int) 32608)
0x3e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e3: Pop(3)
0x3e4: Push((int) 531163)
0x3e5: Push((int) 32475)
0x3e6: Push((int) 32471)
0x3e7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e8: Pop(3)
0x3e9: Return(); Pop(0)

0x3ea: Push((int) 32473)
0x3eb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ec: IF (Stack[-1] == 0) GOTO 0x401; Pop(1)

0x3ed: PushEmpty(string)
0x3ee: Stack[-1] = "Dream"
0x3ef: Call2 0x22e

0x3f0: Pop(1)
0x3f1: Push((int) 531165)
0x3f2: @@ SetMessage(Stack[-1])
0x3f3: Pop(1)
0x3f4: @@ ClearReplies()
0x3f5: Pop(0)
0x3f6: Push((int) 531166)
0x3f7: Push((int) 32475)
0x3f8: Push((int) 32474)
0x3f9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3fa: Pop(3)
0x3fb: Push((int) 531294)
0x3fc: Push((int) 32476)
0x3fd: Push((int) 32612)
0x3fe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ff: Pop(3)
0x400: Return(); Pop(0)

0x401: Push((int) 32475)
0x402: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x403: IF (Stack[-1] == 0) GOTO 0x418; Pop(1)

0x404: PushEmpty(string)
0x405: Stack[-1] = "Dream"
0x406: Call2 0x22e

0x407: Pop(1)
0x408: Push((int) 531167)
0x409: @@ SetMessage(Stack[-1])
0x40a: Pop(1)
0x40b: @@ ClearReplies()
0x40c: Pop(0)
0x40d: Push((int) 531164)
0x40e: Push((int) 32476)
0x40f: Push((int) 32472)
0x410: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x411: Pop(3)
0x412: Push((int) 531295)
0x413: Push((int) 32478)
0x414: Push((int) 32614)
0x415: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x416: Pop(3)
0x417: Return(); Pop(0)

0x418: Push((int) 32476)
0x419: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x41a: IF (Stack[-1] == 0) GOTO 0x42a; Pop(1)

0x41b: PushEmpty(string)
0x41c: Stack[-1] = "Dream"
0x41d: Call2 0x22e

0x41e: Pop(1)
0x41f: Push((int) 531168)
0x420: @@ SetMessage(Stack[-1])
0x421: Pop(1)
0x422: @@ ClearReplies()
0x423: Pop(0)
0x424: Push((int) 531169)
0x425: Push((int) 32478)
0x426: Push((int) 32477)
0x427: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x428: Pop(3)
0x429: Return(); Pop(0)

0x42a: Push((int) 32478)
0x42b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x42c: IF (Stack[-1] == 0) GOTO 0x441; Pop(1)

0x42d: PushEmpty(string)
0x42e: Stack[-1] = "Suspicion"
0x42f: Call2 0x22e

0x430: Pop(1)
0x431: Push((int) 531170)
0x432: @@ SetMessage(Stack[-1])
0x433: Pop(1)
0x434: @@ ClearReplies()
0x435: Pop(0)
0x436: Push((int) 531171)
0x437: Push((int) -1)
0x438: Push((int) 32479)
0x439: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x43a: Pop(3)
0x43b: Push((int) 531296)
0x43c: Push((int) -1)
0x43d: Push((int) 32616)
0x43e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x43f: Pop(3)
0x440: Return(); Pop(0)

0x441: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x442: PushEmpty(bool)
0x443: Call2 0xb9e

0x444: Pop(0)
0x445: IF (Stack[-1] == 0) GOTO 0x449; Pop(1)

0x446: @ lshStopAnimation()
0x447: Pop(0)
0x448: GOTO 0x44b

0x449: @ StopAnimation()
0x44a: Pop(0)
0x44b: Return(); Pop(0)

0x44c: GOTO 0x245

0x44d: Return(); Pop(0)

0x44e: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x44f: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x450: PushEmpty(bool, object, float)
0x451: Stack[-2] = Stack[-12]
0x452: Stack[-1] = (float) 70.0
0x453: Call2 0xa02

0x454: Pop(2)
0x455: Pop(1); Push((bool) Stack[-1] == 0)
0x456: IF (Stack[-1] == 0) GOTO 0x459; Pop(1)

0x457: Stack[-10] = (int) -2
0x458: Return(); Pop(8)

0x459: @ CreateDialog(Stack[-4])
0x45a: Pop(0)
0x45b: PushEmpty(int)
0x45c: Call2 0xb98

0x45d: Pop(0)
0x45e: @@ SetNPCName(Stack[-1])
0x45f: Pop(1)
0x460: PushEmpty(int)
0x461: Call2 0xb96

0x462: Pop(0)
0x463: @@ SetNPCDescription(Stack[-1])
0x464: Pop(1)
0x465: PushEmpty(string)
0x466: Call2 0xb9a

0x467: Pop(0)
0x468: @@ SetPhoto(Stack[-1])
0x469: Pop(1)
0x46a: PushEmpty(string)
0x46b: Call2 0xb9c

0x46c: Pop(0)
0x46d: @@ SetPhoto2(Stack[-1])
0x46e: Pop(1)
0x46f: PushEmpty(int)
0x470: Call2 0xd33

0x471: Pop(0)
0x472: @@ SetPlayerName(Stack[-1])
0x473: Pop(1)
0x474: Stack[-2] = (int) -1
0x475: @ IsOverrideActive(Stack[-3])
0x476: Pop(0)
0x477: Push(Stack[-3])
0x478: IF (Stack[-1] == 0) GOTO 0x47b; Pop(1)

0x479: Stack[-10] = (int) -2
0x47a: Return(); Pop(8)

0x47b: @ DoDialog(Stack[-4])
0x47c: Pop(0)
0x47d: PushEmpty(bool, object)
0x47e: PushEmpty(object)
0x47f: Call2 0xb16

0x480: Stack[-2] = Stack[-1]
0x481: Pop(1)
0x482: Call2 0xa57

0x483: Pop(2)
0x484: PushEmpty(object, object)
0x485: Stack[-2] = Stack[-11]
0x486: Stack[-1] = Stack[-6]
0x487: Push(-2, 4); TaskCall(5)
0x488: Call2 0x49f

0x489: Pop(-2, 4); TaskReturn
0x48a: Pop(2)
0x48b: @@ IsDialogEnd(Stack[-1])
0x48c: Pop(0)
0x48d: Pop(0); Push((bool) Stack[-1] == 0)
0x48e: IF (Stack[-1] == 0) GOTO 0x494; Pop(1)

0x48f: @ sync()
0x490: Pop(0)
0x491: @@ IsDialogEnd(Stack[-1])
0x492: Pop(0)
0x493: GOTO 0x48d

0x494: PushEmpty(object)
0x495: Stack[-1] = Stack[-10]
0x496: Call2 0xa46

0x497: Pop(1)
0x498: @ StopDialog(Stack[-4])
0x499: Pop(0)
0x49a: @@ GetReturnValue(Stack[-2])
0x49b: Pop(0)
0x49c: Stack[-10] = Stack[-2]
0x49d: Return(); Pop(8)

0x49e: Stack[-4] = 0
0x49f: PushEmpty()
0x4a0: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4a1: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x4a2: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4a3: Push((int) 1)
0x4a4: IF (Stack[-1] == 0) GOTO 0x4c5; Pop(1)

0x4a5: PushEmpty(string)
0x4a6: Stack[-1] = "Autizm"
0x4a7: Call2 0x4e3

0x4a8: Pop(1)
0x4a9: Push((int) 535243)
0x4aa: @@ SetMessage(Stack[-1])
0x4ab: Pop(1)
0x4ac: @@ ClearReplies()
0x4ad: Pop(0)
0x4ae: PushEmpty(bool, object)
0x4af: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4b0: Call2 0xc8b

0x4b1: Pop(1)
0x4b2: IF (Stack[-1] == 0) GOTO 0x4b8; Pop(1)

0x4b3: Push((int) 535244)
0x4b4: Push((int) 37054)
0x4b5: Push((int) 36919)
0x4b6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b7: Pop(3)
0x4b8: Push((int) 535367)
0x4b9: Push((int) -1)
0x4ba: Push((int) 37052)
0x4bb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4bc: Pop(3)
0x4bd: Push((int) 535368)
0x4be: Push((int) -1)
0x4bf: Push((int) 37053)
0x4c0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4c1: Pop(3)
0x4c2: GOTO 0x4c5

0x4c3: Return(); Pop(0)

0x4c4: GOTO 0x4a3

0x4c5: PushEmpty(bool)
0x4c6: Call2 0xb9e

0x4c7: Pop(0)
0x4c8: IF (Stack[-1] == 0) GOTO 0x4d4; Pop(1)

0x4c9: @ lshWaitForAnimEnd()
0x4ca: Pop(0)
0x4cb: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4cc: IF (Stack[-1] == 0) GOTO 0x4ce; Pop(1)

0x4cd: GOTO 0x4d3

0x4ce: PushEmpty(string)
0x4cf: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x4d0: Call2 0xae1

0x4d1: Pop(1)
0x4d2: GOTO 0x4c9

0x4d3: GOTO 0x4e2

0x4d4: Push("all")
0x4d5: Push("idle")
0x4d6: @ PlayAnimation(Stack[-2], Stack[-1])
0x4d7: Pop(2)
0x4d8: @ WaitForAnimEnd()
0x4d9: Pop(0)
0x4da: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4db: IF (Stack[-1] == 0) GOTO 0x4dd; Pop(1)

0x4dc: GOTO 0x4e2

0x4dd: Push("all")
0x4de: Push("idle")
0x4df: @ PlayAnimation(Stack[-2], Stack[-1])
0x4e0: Pop(2)
0x4e1: GOTO 0x4d8

0x4e2: Return(); Pop(0)

0x4e3: PushEmpty()
0x4e4: PushEmpty(bool)
0x4e5: Call2 0xb9e

0x4e6: Pop(0)
0x4e7: Pop(1); Push((bool) Stack[-1] == 0)
0x4e8: IF (Stack[-1] == 0) GOTO 0x4ea; Pop(1)

0x4e9: Return(); Pop(0)

0x4ea: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x4eb: IF (Stack[-1] == 0) GOTO 0x4ed; Pop(1)

0x4ec: Return(); Pop(0)

0x4ed: PushEmpty(string, bool)
0x4ee: Stack[-2] = Stack[-3]
0x4ef: Push("")
0x4f0: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x4f1: IF (Stack[-1] == 0) GOTO 0x4f4; Pop(1)

0x4f2: Stack[-1] = (bool) 0
0x4f3: GOTO 0x4f5

0x4f4: Stack[-1] = (bool) 1
0x4f5: Call2 0xaf1

0x4f6: Pop(2)
0x4f7: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x4f8: Return(); Pop(0)

0x4f9: PushEmpty()
0x4fa: Push((int) 1)
0x4fb: IF (Stack[-1] == 0) GOTO 0x579; Pop(1)

0x4fc: PushEmpty()
0x4fd: Call2 0xb0f

0x4fe: Pop(0)
0x4ff: Push((int) 36919)
0x500: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x501: IF (Stack[-1] == 0) GOTO 0x507; Pop(1)

0x502: PushEmpty(object, object)
0x503: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x504: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x505: Call2 0xc1a

0x506: Pop(2)
0x507: Push((int) 36918)
0x508: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x509: IF (Stack[-1] == 0) GOTO 0x528; Pop(1)

0x50a: PushEmpty(string)
0x50b: Stack[-1] = "Autizm"
0x50c: Call2 0x4e3

0x50d: Pop(1)
0x50e: Push((int) 535243)
0x50f: @@ SetMessage(Stack[-1])
0x510: Pop(1)
0x511: @@ ClearReplies()
0x512: Pop(0)
0x513: PushEmpty(bool, object)
0x514: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x515: Call2 0xc8b

0x516: Pop(1)
0x517: IF (Stack[-1] == 0) GOTO 0x51d; Pop(1)

0x518: Push((int) 535244)
0x519: Push((int) 37054)
0x51a: Push((int) 36919)
0x51b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x51c: Pop(3)
0x51d: Push((int) 535367)
0x51e: Push((int) -1)
0x51f: Push((int) 37052)
0x520: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x521: Pop(3)
0x522: Push((int) 535368)
0x523: Push((int) -1)
0x524: Push((int) 37053)
0x525: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x526: Pop(3)
0x527: Return(); Pop(0)

0x528: Push((int) 37054)
0x529: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x52a: IF (Stack[-1] == 0) GOTO 0x53f; Pop(1)

0x52b: PushEmpty(string)
0x52c: Stack[-1] = "Autizm"
0x52d: Call2 0x4e3

0x52e: Pop(1)
0x52f: Push((int) 535369)
0x530: @@ SetMessage(Stack[-1])
0x531: Pop(1)
0x532: @@ ClearReplies()
0x533: Pop(0)
0x534: Push((int) 535370)
0x535: Push((int) 37056)
0x536: Push((int) 37055)
0x537: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x538: Pop(3)
0x539: Push((int) 535375)
0x53a: Push((int) -1)
0x53b: Push((int) 37060)
0x53c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x53d: Pop(3)
0x53e: Return(); Pop(0)

0x53f: Push((int) 37056)
0x540: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x541: IF (Stack[-1] == 0) GOTO 0x556; Pop(1)

0x542: PushEmpty(string)
0x543: Stack[-1] = "Autizm"
0x544: Call2 0x4e3

0x545: Pop(1)
0x546: Push((int) 535371)
0x547: @@ SetMessage(Stack[-1])
0x548: Pop(1)
0x549: @@ ClearReplies()
0x54a: Pop(0)
0x54b: Push((int) 535372)
0x54c: Push((int) 37058)
0x54d: Push((int) 37057)
0x54e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x54f: Pop(3)
0x550: Push((int) 535376)
0x551: Push((int) -1)
0x552: Push((int) 37061)
0x553: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x554: Pop(3)
0x555: Return(); Pop(0)

0x556: Push((int) 37058)
0x557: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x558: IF (Stack[-1] == 0) GOTO 0x56d; Pop(1)

0x559: PushEmpty(string)
0x55a: Stack[-1] = "Dream"
0x55b: Call2 0x4e3

0x55c: Pop(1)
0x55d: Push((int) 535373)
0x55e: @@ SetMessage(Stack[-1])
0x55f: Pop(1)
0x560: @@ ClearReplies()
0x561: Pop(0)
0x562: Push((int) 535374)
0x563: Push((int) -1)
0x564: Push((int) 37059)
0x565: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x566: Pop(3)
0x567: Push((int) 535377)
0x568: Push((int) -1)
0x569: Push((int) 37062)
0x56a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x56b: Pop(3)
0x56c: Return(); Pop(0)

0x56d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x56e: PushEmpty(bool)
0x56f: Call2 0xb9e

0x570: Pop(0)
0x571: IF (Stack[-1] == 0) GOTO 0x575; Pop(1)

0x572: @ lshStopAnimation()
0x573: Pop(0)
0x574: GOTO 0x577

0x575: @ StopAnimation()
0x576: Pop(0)
0x577: Return(); Pop(0)

0x578: GOTO 0x4fa

0x579: Return(); Pop(0)

0x57a: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x57b: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x57c: PushEmpty(bool, object, float)
0x57d: Stack[-2] = Stack[-12]
0x57e: Stack[-1] = (float) 70.0
0x57f: Call2 0xa02

0x580: Pop(2)
0x581: Pop(1); Push((bool) Stack[-1] == 0)
0x582: IF (Stack[-1] == 0) GOTO 0x585; Pop(1)

0x583: Stack[-10] = (int) -2
0x584: Return(); Pop(8)

0x585: @ CreateDialog(Stack[-4])
0x586: Pop(0)
0x587: PushEmpty(int)
0x588: Call2 0xb98

0x589: Pop(0)
0x58a: @@ SetNPCName(Stack[-1])
0x58b: Pop(1)
0x58c: PushEmpty(int)
0x58d: Call2 0xb96

0x58e: Pop(0)
0x58f: @@ SetNPCDescription(Stack[-1])
0x590: Pop(1)
0x591: PushEmpty(string)
0x592: Call2 0xb9a

0x593: Pop(0)
0x594: @@ SetPhoto(Stack[-1])
0x595: Pop(1)
0x596: PushEmpty(string)
0x597: Call2 0xb9c

0x598: Pop(0)
0x599: @@ SetPhoto2(Stack[-1])
0x59a: Pop(1)
0x59b: PushEmpty(int)
0x59c: Call2 0xd33

0x59d: Pop(0)
0x59e: @@ SetPlayerName(Stack[-1])
0x59f: Pop(1)
0x5a0: Stack[-2] = (int) -1
0x5a1: @ IsOverrideActive(Stack[-3])
0x5a2: Pop(0)
0x5a3: Push(Stack[-3])
0x5a4: IF (Stack[-1] == 0) GOTO 0x5a7; Pop(1)

0x5a5: Stack[-10] = (int) -2
0x5a6: Return(); Pop(8)

0x5a7: @ DoDialog(Stack[-4])
0x5a8: Pop(0)
0x5a9: PushEmpty(bool, object)
0x5aa: PushEmpty(object)
0x5ab: Call2 0xb16

0x5ac: Stack[-2] = Stack[-1]
0x5ad: Pop(1)
0x5ae: Call2 0xa57

0x5af: Pop(2)
0x5b0: PushEmpty(object, object)
0x5b1: Stack[-2] = Stack[-11]
0x5b2: Stack[-1] = Stack[-6]
0x5b3: Push(-2, 4); TaskCall(7)
0x5b4: Call2 0x5cb

0x5b5: Pop(-2, 4); TaskReturn
0x5b6: Pop(2)
0x5b7: @@ IsDialogEnd(Stack[-1])
0x5b8: Pop(0)
0x5b9: Pop(0); Push((bool) Stack[-1] == 0)
0x5ba: IF (Stack[-1] == 0) GOTO 0x5c0; Pop(1)

0x5bb: @ sync()
0x5bc: Pop(0)
0x5bd: @@ IsDialogEnd(Stack[-1])
0x5be: Pop(0)
0x5bf: GOTO 0x5b9

0x5c0: PushEmpty(object)
0x5c1: Stack[-1] = Stack[-10]
0x5c2: Call2 0xa46

0x5c3: Pop(1)
0x5c4: @ StopDialog(Stack[-4])
0x5c5: Pop(0)
0x5c6: @@ GetReturnValue(Stack[-2])
0x5c7: Pop(0)
0x5c8: Stack[-10] = Stack[-2]
0x5c9: Return(); Pop(8)

0x5ca: Stack[-4] = 0
0x5cb: PushEmpty()
0x5cc: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x5cd: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x5ce: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x5cf: Push((int) 1)
0x5d0: IF (Stack[-1] == 0) GOTO 0x5e7; Pop(1)

0x5d1: PushEmpty(string)
0x5d2: Stack[-1] = "Neutral"
0x5d3: Call2 0x605

0x5d4: Pop(1)
0x5d5: Push((int) 518033)
0x5d6: @@ SetMessage(Stack[-1])
0x5d7: Pop(1)
0x5d8: @@ ClearReplies()
0x5d9: Pop(0)
0x5da: Push((int) 518034)
0x5db: Push((int) 28430)
0x5dc: Push((int) 19167)
0x5dd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5de: Pop(3)
0x5df: Push((int) 527134)
0x5e0: Push((int) 28433)
0x5e1: Push((int) 28432)
0x5e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5e3: Pop(3)
0x5e4: GOTO 0x5e7

0x5e5: Return(); Pop(0)

0x5e6: GOTO 0x5cf

0x5e7: PushEmpty(bool)
0x5e8: Call2 0xb9e

0x5e9: Pop(0)
0x5ea: IF (Stack[-1] == 0) GOTO 0x5f6; Pop(1)

0x5eb: @ lshWaitForAnimEnd()
0x5ec: Pop(0)
0x5ed: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5ee: IF (Stack[-1] == 0) GOTO 0x5f0; Pop(1)

0x5ef: GOTO 0x5f5

0x5f0: PushEmpty(string)
0x5f1: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x5f2: Call2 0xae1

0x5f3: Pop(1)
0x5f4: GOTO 0x5eb

0x5f5: GOTO 0x604

0x5f6: Push("all")
0x5f7: Push("idle")
0x5f8: @ PlayAnimation(Stack[-2], Stack[-1])
0x5f9: Pop(2)
0x5fa: @ WaitForAnimEnd()
0x5fb: Pop(0)
0x5fc: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5fd: IF (Stack[-1] == 0) GOTO 0x5ff; Pop(1)

0x5fe: GOTO 0x604

0x5ff: Push("all")
0x600: Push("idle")
0x601: @ PlayAnimation(Stack[-2], Stack[-1])
0x602: Pop(2)
0x603: GOTO 0x5fa

0x604: Return(); Pop(0)

0x605: PushEmpty()
0x606: PushEmpty(bool)
0x607: Call2 0xb9e

0x608: Pop(0)
0x609: Pop(1); Push((bool) Stack[-1] == 0)
0x60a: IF (Stack[-1] == 0) GOTO 0x60c; Pop(1)

0x60b: Return(); Pop(0)

0x60c: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x60d: IF (Stack[-1] == 0) GOTO 0x60f; Pop(1)

0x60e: Return(); Pop(0)

0x60f: PushEmpty(string, bool)
0x610: Stack[-2] = Stack[-3]
0x611: Push("")
0x612: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x613: IF (Stack[-1] == 0) GOTO 0x616; Pop(1)

0x614: Stack[-1] = (bool) 0
0x615: GOTO 0x617

0x616: Stack[-1] = (bool) 1
0x617: Call2 0xaf1

0x618: Pop(2)
0x619: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x61a: Return(); Pop(0)

0x61b: PushEmpty()
0x61c: Push((int) 1)
0x61d: IF (Stack[-1] == 0) GOTO 0x668; Pop(1)

0x61e: PushEmpty()
0x61f: Call2 0xb0f

0x620: Pop(0)
0x621: Push((int) 19166)
0x622: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x623: IF (Stack[-1] == 0) GOTO 0x638; Pop(1)

0x624: PushEmpty(string)
0x625: Stack[-1] = "Neutral"
0x626: Call2 0x605

0x627: Pop(1)
0x628: Push((int) 518033)
0x629: @@ SetMessage(Stack[-1])
0x62a: Pop(1)
0x62b: @@ ClearReplies()
0x62c: Pop(0)
0x62d: Push((int) 518034)
0x62e: Push((int) 28430)
0x62f: Push((int) 19167)
0x630: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x631: Pop(3)
0x632: Push((int) 527134)
0x633: Push((int) 28433)
0x634: Push((int) 28432)
0x635: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x636: Pop(3)
0x637: Return(); Pop(0)

0x638: Push((int) 28433)
0x639: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x63a: IF (Stack[-1] == 0) GOTO 0x64a; Pop(1)

0x63b: PushEmpty(string)
0x63c: Stack[-1] = "Neutral"
0x63d: Call2 0x605

0x63e: Pop(1)
0x63f: Push((int) 527135)
0x640: @@ SetMessage(Stack[-1])
0x641: Pop(1)
0x642: @@ ClearReplies()
0x643: Pop(0)
0x644: Push((int) 527137)
0x645: Push((int) -1)
0x646: Push((int) 28435)
0x647: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x648: Pop(3)
0x649: Return(); Pop(0)

0x64a: Push((int) 28430)
0x64b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x64c: IF (Stack[-1] == 0) GOTO 0x65c; Pop(1)

0x64d: PushEmpty(string)
0x64e: Stack[-1] = "Neutral"
0x64f: Call2 0x605

0x650: Pop(1)
0x651: Push((int) 527132)
0x652: @@ SetMessage(Stack[-1])
0x653: Pop(1)
0x654: @@ ClearReplies()
0x655: Pop(0)
0x656: Push((int) 527133)
0x657: Push((int) -1)
0x658: Push((int) 28431)
0x659: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x65a: Pop(3)
0x65b: Return(); Pop(0)

0x65c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x65d: PushEmpty(bool)
0x65e: Call2 0xb9e

0x65f: Pop(0)
0x660: IF (Stack[-1] == 0) GOTO 0x664; Pop(1)

0x661: @ lshStopAnimation()
0x662: Pop(0)
0x663: GOTO 0x666

0x664: @ StopAnimation()
0x665: Pop(0)
0x666: Return(); Pop(0)

0x667: GOTO 0x61c

0x668: Return(); Pop(0)

0x669: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x66a: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x66b: PushEmpty(bool, object, float)
0x66c: Stack[-2] = Stack[-12]
0x66d: Stack[-1] = (float) 70.0
0x66e: Call2 0xa02

0x66f: Pop(2)
0x670: Pop(1); Push((bool) Stack[-1] == 0)
0x671: IF (Stack[-1] == 0) GOTO 0x674; Pop(1)

0x672: Stack[-10] = (int) -2
0x673: Return(); Pop(8)

0x674: @ CreateDialog(Stack[-4])
0x675: Pop(0)
0x676: PushEmpty(int)
0x677: Call2 0xb98

0x678: Pop(0)
0x679: @@ SetNPCName(Stack[-1])
0x67a: Pop(1)
0x67b: PushEmpty(int)
0x67c: Call2 0xb96

0x67d: Pop(0)
0x67e: @@ SetNPCDescription(Stack[-1])
0x67f: Pop(1)
0x680: PushEmpty(string)
0x681: Call2 0xb9a

0x682: Pop(0)
0x683: @@ SetPhoto(Stack[-1])
0x684: Pop(1)
0x685: PushEmpty(string)
0x686: Call2 0xb9c

0x687: Pop(0)
0x688: @@ SetPhoto2(Stack[-1])
0x689: Pop(1)
0x68a: PushEmpty(int)
0x68b: Call2 0xd33

0x68c: Pop(0)
0x68d: @@ SetPlayerName(Stack[-1])
0x68e: Pop(1)
0x68f: Stack[-2] = (int) -1
0x690: @ IsOverrideActive(Stack[-3])
0x691: Pop(0)
0x692: Push(Stack[-3])
0x693: IF (Stack[-1] == 0) GOTO 0x696; Pop(1)

0x694: Stack[-10] = (int) -2
0x695: Return(); Pop(8)

0x696: @ DoDialog(Stack[-4])
0x697: Pop(0)
0x698: PushEmpty(bool, object)
0x699: PushEmpty(object)
0x69a: Call2 0xb16

0x69b: Stack[-2] = Stack[-1]
0x69c: Pop(1)
0x69d: Call2 0xa57

0x69e: Pop(2)
0x69f: PushEmpty(object, object)
0x6a0: Stack[-2] = Stack[-11]
0x6a1: Stack[-1] = Stack[-6]
0x6a2: Push(-2, 4); TaskCall(9)
0x6a3: Call2 0x6ba

0x6a4: Pop(-2, 4); TaskReturn
0x6a5: Pop(2)
0x6a6: @@ IsDialogEnd(Stack[-1])
0x6a7: Pop(0)
0x6a8: Pop(0); Push((bool) Stack[-1] == 0)
0x6a9: IF (Stack[-1] == 0) GOTO 0x6af; Pop(1)

0x6aa: @ sync()
0x6ab: Pop(0)
0x6ac: @@ IsDialogEnd(Stack[-1])
0x6ad: Pop(0)
0x6ae: GOTO 0x6a8

0x6af: PushEmpty(object)
0x6b0: Stack[-1] = Stack[-10]
0x6b1: Call2 0xa46

0x6b2: Pop(1)
0x6b3: @ StopDialog(Stack[-4])
0x6b4: Pop(0)
0x6b5: @@ GetReturnValue(Stack[-2])
0x6b6: Pop(0)
0x6b7: Stack[-10] = Stack[-2]
0x6b8: Return(); Pop(8)

0x6b9: Stack[-4] = 0
0x6ba: PushEmpty()
0x6bb: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x6bc: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x6bd: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x6be: Push((int) 1)
0x6bf: IF (Stack[-1] == 0) GOTO 0x6fd; Pop(1)

0x6c0: PushEmpty(bool)
0x6c1: Stack[-1] = (bool) 0
0x6c2: PushEmpty(bool, object)
0x6c3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6c4: Call2 0xc20

0x6c5: Pop(1)
0x6c6: IF (Stack[-1] == 0) GOTO 0x6cd; Pop(1)

0x6c7: PushEmpty(bool, object)
0x6c8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6c9: Call2 0xc2c

0x6ca: Pop(1)
0x6cb: IF (Stack[-1] == 0) GOTO 0x6cd; Pop(1)

0x6cc: Stack[-1] = (bool) 1
0x6cd: IF (Stack[-1] == 0) GOTO 0x6e7; Pop(1)

0x6ce: PushEmpty(object, object)
0x6cf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6d0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6d1: Call2 0xbab

0x6d2: Pop(2)
0x6d3: PushEmpty(string)
0x6d4: Stack[-1] = "Fear"
0x6d5: Call2 0x71b

0x6d6: Pop(1)
0x6d7: Push((int) 521408)
0x6d8: @@ SetMessage(Stack[-1])
0x6d9: Pop(1)
0x6da: @@ ClearReplies()
0x6db: Pop(0)
0x6dc: Push((int) 521409)
0x6dd: Push((int) 25093)
0x6de: Push((int) 22587)
0x6df: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e0: Pop(3)
0x6e1: Push((int) 523832)
0x6e2: Push((int) -1)
0x6e3: Push((int) 25104)
0x6e4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e5: Pop(3)
0x6e6: GOTO 0x6fd

0x6e7: PushEmpty(string)
0x6e8: Stack[-1] = "Fear"
0x6e9: Call2 0x71b

0x6ea: Pop(1)
0x6eb: Push((int) 521410)
0x6ec: @@ SetMessage(Stack[-1])
0x6ed: Pop(1)
0x6ee: @@ ClearReplies()
0x6ef: Pop(0)
0x6f0: Push((int) 521411)
0x6f1: Push((int) 25088)
0x6f2: Push((int) 22589)
0x6f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f4: Pop(3)
0x6f5: Push((int) 523816)
0x6f6: Push((int) -1)
0x6f7: Push((int) 25087)
0x6f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f9: Pop(3)
0x6fa: GOTO 0x6fd

0x6fb: Return(); Pop(0)

0x6fc: GOTO 0x6be

0x6fd: PushEmpty(bool)
0x6fe: Call2 0xb9e

0x6ff: Pop(0)
0x700: IF (Stack[-1] == 0) GOTO 0x70c; Pop(1)

0x701: @ lshWaitForAnimEnd()
0x702: Pop(0)
0x703: Push( Stack[3 + Tasks[-1].StackPointer] )
0x704: IF (Stack[-1] == 0) GOTO 0x706; Pop(1)

0x705: GOTO 0x70b

0x706: PushEmpty(string)
0x707: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x708: Call2 0xae1

0x709: Pop(1)
0x70a: GOTO 0x701

0x70b: GOTO 0x71a

0x70c: Push("all")
0x70d: Push("idle")
0x70e: @ PlayAnimation(Stack[-2], Stack[-1])
0x70f: Pop(2)
0x710: @ WaitForAnimEnd()
0x711: Pop(0)
0x712: Push( Stack[3 + Tasks[-1].StackPointer] )
0x713: IF (Stack[-1] == 0) GOTO 0x715; Pop(1)

0x714: GOTO 0x71a

0x715: Push("all")
0x716: Push("idle")
0x717: @ PlayAnimation(Stack[-2], Stack[-1])
0x718: Pop(2)
0x719: GOTO 0x710

0x71a: Return(); Pop(0)

0x71b: PushEmpty()
0x71c: PushEmpty(bool)
0x71d: Call2 0xb9e

0x71e: Pop(0)
0x71f: Pop(1); Push((bool) Stack[-1] == 0)
0x720: IF (Stack[-1] == 0) GOTO 0x722; Pop(1)

0x721: Return(); Pop(0)

0x722: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x723: IF (Stack[-1] == 0) GOTO 0x725; Pop(1)

0x724: Return(); Pop(0)

0x725: PushEmpty(string, bool)
0x726: Stack[-2] = Stack[-3]
0x727: Push("")
0x728: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x729: IF (Stack[-1] == 0) GOTO 0x72c; Pop(1)

0x72a: Stack[-1] = (bool) 0
0x72b: GOTO 0x72d

0x72c: Stack[-1] = (bool) 1
0x72d: Call2 0xaf1

0x72e: Pop(2)
0x72f: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x730: Return(); Pop(0)

0x731: PushEmpty()
0x732: Push((int) 1)
0x733: IF (Stack[-1] == 0) GOTO 0x813; Pop(1)

0x734: PushEmpty()
0x735: Call2 0xb0f

0x736: Pop(0)
0x737: Push((int) 22586)
0x738: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x739: IF (Stack[-1] == 0) GOTO 0x775; Pop(1)

0x73a: PushEmpty(bool)
0x73b: Stack[-1] = (bool) 0
0x73c: PushEmpty(bool, object)
0x73d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x73e: Call2 0xc20

0x73f: Pop(1)
0x740: IF (Stack[-1] == 0) GOTO 0x747; Pop(1)

0x741: PushEmpty(bool, object)
0x742: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x743: Call2 0xc2c

0x744: Pop(1)
0x745: IF (Stack[-1] == 0) GOTO 0x747; Pop(1)

0x746: Stack[-1] = (bool) 1
0x747: IF (Stack[-1] == 0) GOTO 0x761; Pop(1)

0x748: PushEmpty(object, object)
0x749: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x74a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x74b: Call2 0xbab

0x74c: Pop(2)
0x74d: PushEmpty(string)
0x74e: Stack[-1] = "Fear"
0x74f: Call2 0x71b

0x750: Pop(1)
0x751: Push((int) 521408)
0x752: @@ SetMessage(Stack[-1])
0x753: Pop(1)
0x754: @@ ClearReplies()
0x755: Pop(0)
0x756: Push((int) 521409)
0x757: Push((int) 25093)
0x758: Push((int) 22587)
0x759: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x75a: Pop(3)
0x75b: Push((int) 523832)
0x75c: Push((int) -1)
0x75d: Push((int) 25104)
0x75e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x75f: Pop(3)
0x760: Return(); Pop(0)

0x761: PushEmpty(string)
0x762: Stack[-1] = "Fear"
0x763: Call2 0x71b

0x764: Pop(1)
0x765: Push((int) 521410)
0x766: @@ SetMessage(Stack[-1])
0x767: Pop(1)
0x768: @@ ClearReplies()
0x769: Pop(0)
0x76a: Push((int) 521411)
0x76b: Push((int) 25088)
0x76c: Push((int) 22589)
0x76d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x76e: Pop(3)
0x76f: Push((int) 523816)
0x770: Push((int) -1)
0x771: Push((int) 25087)
0x772: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x773: Pop(3)
0x774: Return(); Pop(0)

0x775: Push((int) 25088)
0x776: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x777: IF (Stack[-1] == 0) GOTO 0x787; Pop(1)

0x778: PushEmpty(string)
0x779: Stack[-1] = "Dream"
0x77a: Call2 0x71b

0x77b: Pop(1)
0x77c: Push((int) 523817)
0x77d: @@ SetMessage(Stack[-1])
0x77e: Pop(1)
0x77f: @@ ClearReplies()
0x780: Pop(0)
0x781: Push((int) 523818)
0x782: Push((int) 25090)
0x783: Push((int) 25089)
0x784: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x785: Pop(3)
0x786: Return(); Pop(0)

0x787: Push((int) 25090)
0x788: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x789: IF (Stack[-1] == 0) GOTO 0x79e; Pop(1)

0x78a: PushEmpty(string)
0x78b: Stack[-1] = "Dream"
0x78c: Call2 0x71b

0x78d: Pop(1)
0x78e: Push((int) 523819)
0x78f: @@ SetMessage(Stack[-1])
0x790: Pop(1)
0x791: @@ ClearReplies()
0x792: Pop(0)
0x793: Push((int) 523820)
0x794: Push((int) -1)
0x795: Push((int) 25091)
0x796: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x797: Pop(3)
0x798: Push((int) 523821)
0x799: Push((int) -1)
0x79a: Push((int) 25092)
0x79b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x79c: Pop(3)
0x79d: Return(); Pop(0)

0x79e: Push((int) 25093)
0x79f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7a0: IF (Stack[-1] == 0) GOTO 0x7b5; Pop(1)

0x7a1: PushEmpty(string)
0x7a2: Stack[-1] = "Fear"
0x7a3: Call2 0x71b

0x7a4: Pop(1)
0x7a5: Push((int) 523822)
0x7a6: @@ SetMessage(Stack[-1])
0x7a7: Pop(1)
0x7a8: @@ ClearReplies()
0x7a9: Pop(0)
0x7aa: Push((int) 523823)
0x7ab: Push((int) 25095)
0x7ac: Push((int) 25094)
0x7ad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ae: Pop(3)
0x7af: Push((int) 523833)
0x7b0: Push((int) 25106)
0x7b1: Push((int) 25105)
0x7b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b3: Pop(3)
0x7b4: Return(); Pop(0)

0x7b5: Push((int) 25106)
0x7b6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7b7: IF (Stack[-1] == 0) GOTO 0x7c7; Pop(1)

0x7b8: PushEmpty(string)
0x7b9: Stack[-1] = "Suspicion"
0x7ba: Call2 0x71b

0x7bb: Pop(1)
0x7bc: Push((int) 523834)
0x7bd: @@ SetMessage(Stack[-1])
0x7be: Pop(1)
0x7bf: @@ ClearReplies()
0x7c0: Pop(0)
0x7c1: Push((int) 523835)
0x7c2: Push((int) 25097)
0x7c3: Push((int) 25107)
0x7c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c5: Pop(3)
0x7c6: Return(); Pop(0)

0x7c7: Push((int) 25095)
0x7c8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7c9: IF (Stack[-1] == 0) GOTO 0x7de; Pop(1)

0x7ca: PushEmpty(string)
0x7cb: Stack[-1] = "Suspicion"
0x7cc: Call2 0x71b

0x7cd: Pop(1)
0x7ce: Push((int) 523824)
0x7cf: @@ SetMessage(Stack[-1])
0x7d0: Pop(1)
0x7d1: @@ ClearReplies()
0x7d2: Pop(0)
0x7d3: Push((int) 523825)
0x7d4: Push((int) 25097)
0x7d5: Push((int) 25096)
0x7d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d7: Pop(3)
0x7d8: Push((int) 523827)
0x7d9: Push((int) 25097)
0x7da: Push((int) 25098)
0x7db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7dc: Pop(3)
0x7dd: Return(); Pop(0)

0x7de: Push((int) 25097)
0x7df: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7e0: IF (Stack[-1] == 0) GOTO 0x7f5; Pop(1)

0x7e1: PushEmpty(string)
0x7e2: Stack[-1] = "Suspicion"
0x7e3: Call2 0x71b

0x7e4: Pop(1)
0x7e5: Push((int) 523826)
0x7e6: @@ SetMessage(Stack[-1])
0x7e7: Pop(1)
0x7e8: @@ ClearReplies()
0x7e9: Pop(0)
0x7ea: Push((int) 523828)
0x7eb: Push((int) 25101)
0x7ec: Push((int) 25100)
0x7ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ee: Pop(3)
0x7ef: Push((int) 523836)
0x7f0: Push((int) -1)
0x7f1: Push((int) 25109)
0x7f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7f3: Pop(3)
0x7f4: Return(); Pop(0)

0x7f5: Push((int) 25101)
0x7f6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7f7: IF (Stack[-1] == 0) GOTO 0x807; Pop(1)

0x7f8: PushEmpty(string)
0x7f9: Stack[-1] = "Fear"
0x7fa: Call2 0x71b

0x7fb: Pop(1)
0x7fc: Push((int) 523829)
0x7fd: @@ SetMessage(Stack[-1])
0x7fe: Pop(1)
0x7ff: @@ ClearReplies()
0x800: Pop(0)
0x801: Push((int) 523830)
0x802: Push((int) -1)
0x803: Push((int) 25102)
0x804: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x805: Pop(3)
0x806: Return(); Pop(0)

0x807: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x808: PushEmpty(bool)
0x809: Call2 0xb9e

0x80a: Pop(0)
0x80b: IF (Stack[-1] == 0) GOTO 0x80f; Pop(1)

0x80c: @ lshStopAnimation()
0x80d: Pop(0)
0x80e: GOTO 0x811

0x80f: @ StopAnimation()
0x810: Pop(0)
0x811: Return(); Pop(0)

0x812: GOTO 0x732

0x813: Return(); Pop(0)

0x814: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x815: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x816: PushEmpty(bool, object, float)
0x817: Stack[-2] = Stack[-12]
0x818: Stack[-1] = (float) 70.0
0x819: Call2 0xa02

0x81a: Pop(2)
0x81b: Pop(1); Push((bool) Stack[-1] == 0)
0x81c: IF (Stack[-1] == 0) GOTO 0x81f; Pop(1)

0x81d: Stack[-10] = (int) -2
0x81e: Return(); Pop(8)

0x81f: @ CreateDialog(Stack[-4])
0x820: Pop(0)
0x821: PushEmpty(int)
0x822: Call2 0xb98

0x823: Pop(0)
0x824: @@ SetNPCName(Stack[-1])
0x825: Pop(1)
0x826: PushEmpty(int)
0x827: Call2 0xb96

0x828: Pop(0)
0x829: @@ SetNPCDescription(Stack[-1])
0x82a: Pop(1)
0x82b: PushEmpty(string)
0x82c: Call2 0xb9a

0x82d: Pop(0)
0x82e: @@ SetPhoto(Stack[-1])
0x82f: Pop(1)
0x830: PushEmpty(string)
0x831: Call2 0xb9c

0x832: Pop(0)
0x833: @@ SetPhoto2(Stack[-1])
0x834: Pop(1)
0x835: PushEmpty(int)
0x836: Call2 0xd33

0x837: Pop(0)
0x838: @@ SetPlayerName(Stack[-1])
0x839: Pop(1)
0x83a: Stack[-2] = (int) -1
0x83b: @ IsOverrideActive(Stack[-3])
0x83c: Pop(0)
0x83d: Push(Stack[-3])
0x83e: IF (Stack[-1] == 0) GOTO 0x841; Pop(1)

0x83f: Stack[-10] = (int) -2
0x840: Return(); Pop(8)

0x841: @ DoDialog(Stack[-4])
0x842: Pop(0)
0x843: PushEmpty(bool, object)
0x844: PushEmpty(object)
0x845: Call2 0xb16

0x846: Stack[-2] = Stack[-1]
0x847: Pop(1)
0x848: Call2 0xa57

0x849: Pop(2)
0x84a: PushEmpty(object, object)
0x84b: Stack[-2] = Stack[-11]
0x84c: Stack[-1] = Stack[-6]
0x84d: Push(-2, 4); TaskCall(11)
0x84e: Call2 0x865

0x84f: Pop(-2, 4); TaskReturn
0x850: Pop(2)
0x851: @@ IsDialogEnd(Stack[-1])
0x852: Pop(0)
0x853: Pop(0); Push((bool) Stack[-1] == 0)
0x854: IF (Stack[-1] == 0) GOTO 0x85a; Pop(1)

0x855: @ sync()
0x856: Pop(0)
0x857: @@ IsDialogEnd(Stack[-1])
0x858: Pop(0)
0x859: GOTO 0x853

0x85a: PushEmpty(object)
0x85b: Stack[-1] = Stack[-10]
0x85c: Call2 0xa46

0x85d: Pop(1)
0x85e: @ StopDialog(Stack[-4])
0x85f: Pop(0)
0x860: @@ GetReturnValue(Stack[-2])
0x861: Pop(0)
0x862: Stack[-10] = Stack[-2]
0x863: Return(); Pop(8)

0x864: Stack[-4] = 0
0x865: PushEmpty()
0x866: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x867: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x868: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x869: Push((int) 1)
0x86a: IF (Stack[-1] == 0) GOTO 0x881; Pop(1)

0x86b: PushEmpty(string)
0x86c: Stack[-1] = "Neutral"
0x86d: Call2 0x89f

0x86e: Pop(1)
0x86f: Push((int) 540551)
0x870: @@ SetMessage(Stack[-1])
0x871: Pop(1)
0x872: @@ ClearReplies()
0x873: Pop(0)
0x874: Push((int) 540552)
0x875: Push((int) -1)
0x876: Push((int) 42561)
0x877: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x878: Pop(3)
0x879: Push((int) 540795)
0x87a: Push((int) -1)
0x87b: Push((int) 42844)
0x87c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x87d: Pop(3)
0x87e: GOTO 0x881

0x87f: Return(); Pop(0)

0x880: GOTO 0x869

0x881: PushEmpty(bool)
0x882: Call2 0xb9e

0x883: Pop(0)
0x884: IF (Stack[-1] == 0) GOTO 0x890; Pop(1)

0x885: @ lshWaitForAnimEnd()
0x886: Pop(0)
0x887: Push( Stack[3 + Tasks[-1].StackPointer] )
0x888: IF (Stack[-1] == 0) GOTO 0x88a; Pop(1)

0x889: GOTO 0x88f

0x88a: PushEmpty(string)
0x88b: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x88c: Call2 0xae1

0x88d: Pop(1)
0x88e: GOTO 0x885

0x88f: GOTO 0x89e

0x890: Push("all")
0x891: Push("idle")
0x892: @ PlayAnimation(Stack[-2], Stack[-1])
0x893: Pop(2)
0x894: @ WaitForAnimEnd()
0x895: Pop(0)
0x896: Push( Stack[3 + Tasks[-1].StackPointer] )
0x897: IF (Stack[-1] == 0) GOTO 0x899; Pop(1)

0x898: GOTO 0x89e

0x899: Push("all")
0x89a: Push("idle")
0x89b: @ PlayAnimation(Stack[-2], Stack[-1])
0x89c: Pop(2)
0x89d: GOTO 0x894

0x89e: Return(); Pop(0)

0x89f: PushEmpty()
0x8a0: PushEmpty(bool)
0x8a1: Call2 0xb9e

0x8a2: Pop(0)
0x8a3: Pop(1); Push((bool) Stack[-1] == 0)
0x8a4: IF (Stack[-1] == 0) GOTO 0x8a6; Pop(1)

0x8a5: Return(); Pop(0)

0x8a6: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x8a7: IF (Stack[-1] == 0) GOTO 0x8a9; Pop(1)

0x8a8: Return(); Pop(0)

0x8a9: PushEmpty(string, bool)
0x8aa: Stack[-2] = Stack[-3]
0x8ab: Push("")
0x8ac: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x8ad: IF (Stack[-1] == 0) GOTO 0x8b0; Pop(1)

0x8ae: Stack[-1] = (bool) 0
0x8af: GOTO 0x8b1

0x8b0: Stack[-1] = (bool) 1
0x8b1: Call2 0xaf1

0x8b2: Pop(2)
0x8b3: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x8b4: Return(); Pop(0)

0x8b5: PushEmpty()
0x8b6: Push((int) 1)
0x8b7: IF (Stack[-1] == 0) GOTO 0x8de; Pop(1)

0x8b8: PushEmpty()
0x8b9: Call2 0xb0f

0x8ba: Pop(0)
0x8bb: Push((int) 42560)
0x8bc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8bd: IF (Stack[-1] == 0) GOTO 0x8d2; Pop(1)

0x8be: PushEmpty(string)
0x8bf: Stack[-1] = "Neutral"
0x8c0: Call2 0x89f

0x8c1: Pop(1)
0x8c2: Push((int) 540551)
0x8c3: @@ SetMessage(Stack[-1])
0x8c4: Pop(1)
0x8c5: @@ ClearReplies()
0x8c6: Pop(0)
0x8c7: Push((int) 540552)
0x8c8: Push((int) -1)
0x8c9: Push((int) 42561)
0x8ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8cb: Pop(3)
0x8cc: Push((int) 540795)
0x8cd: Push((int) -1)
0x8ce: Push((int) 42844)
0x8cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d0: Pop(3)
0x8d1: Return(); Pop(0)

0x8d2: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x8d3: PushEmpty(bool)
0x8d4: Call2 0xb9e

0x8d5: Pop(0)
0x8d6: IF (Stack[-1] == 0) GOTO 0x8da; Pop(1)

0x8d7: @ lshStopAnimation()
0x8d8: Pop(0)
0x8d9: GOTO 0x8dc

0x8da: @ StopAnimation()
0x8db: Pop(0)
0x8dc: Return(); Pop(0)

0x8dd: GOTO 0x8b6

0x8de: Return(); Pop(0)

0x8df: Push(GlobalVars[1])
0x8e0: Stack[-1] = (bool) 0
0x8e1: GlobalVars[1] = Stack[-1]; Pop(1)
0x8e2: PushEmpty()
0x8e3: Call2 0x8e6

0x8e4: Pop(0)
0x8e5: Return(); Pop(0)

0x8e6: PushEmpty(bool)
0x8e7: Call2 0x9fd

0x8e8: Pop(0)
0x8e9: Pop(1); Push((bool) Stack[-1] == 0)
0x8ea: IF (Stack[-1] == 0) GOTO 0x8ed; Pop(1)

0x8eb: @ Hold()
0x8ec: Pop(0)
0x8ed: @ GetDirection(Stack[-0])
0x8ee: Pop(0)
0x8ef: PushEmpty()
0x8f0: Call2 0x996

0x8f1: Pop(0)
0x8f2: GOTO 0x8ef

0x8f3: Return(); Pop(0)

0x8f4: PushEmpty(object, object)
0x8f5: Push("player")
0x8f6: @ FindActor(Stack[-2], Stack[-1])
0x8f7: Pop(1)
0x8f8: Pop(0); Push((bool) Stack[-1] == 0)
0x8f9: IF (Stack[-1] == 0) GOTO 0x8fc; Pop(1)

0x8fa: Stack[-3] = (bool) 0
0x8fb: Return(); Pop(2)

0x8fc: PushEmpty(bool, object)
0x8fd: Stack[-1] = Stack[-3]
0x8fe: Call2 0x9f4

0x8ff: Stack[-5] = Stack[-2]
0x900: Pop(2)
0x901: Return(); Pop(2)

0x902: Stack[-1] = 0
0x903: Push(CvectorIndex(Stack[-0], 0))
0x904: Push(CvectorIndex(Stack[-0], 2))
0x905: @ RotateAsync(Stack[-2], Stack[-1])
0x906: Pop(2)
0x907: Return(); Pop(0)

0x908: PushEmpty(object, bool, object, bool)
0x909: Push("player")
0x90a: @ FindActor(Stack[-3], Stack[-1])
0x90b: Pop(1)
0x90c: Pop(0); Push((bool) Stack[-2] == 0)
0x90d: IF (Stack[-1] == 0) GOTO 0x910; Pop(1)

0x90e: Stack[-5] = (bool) 0
0x90f: Return(); Pop(4)

0x910: PushEmpty(float, object)
0x911: Stack[-1] = Stack[-4]
0x912: Call2 0x9e2

0x913: Pop(1)
0x914: Push((float)90000.0)
0x915: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x916: IF (Stack[-1] == 0) GOTO 0x919; Pop(1)

0x917: Stack[-5] = (bool) 0
0x918: Return(); Pop(4)

0x919: @ CanSee(Stack[-1], Stack[-2])
0x91a: Pop(0)
0x91b: Stack[-5] = Stack[-1]
0x91c: Return(); Pop(4)

0x91d: Stack[-2] = 0
0x91e: PushEmpty(float, float)
0x91f: Push((int) 8)
0x920: Push((int) 16)
0x921: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x922: Pop(2)
0x923: Push((int) 10)
0x924: @ SetTimer(Stack[-1], Stack[-2])
0x925: Pop(1)
0x926: Return(); Pop(2)

0x927: Push((int) 10)
0x928: @ KillTimer(Stack[-1])
0x929: Pop(1)
0x92a: Return(); Pop(0)

0x92b: PushEmpty()
0x92c: Push((int) 10)
0x92d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x92e: IF (Stack[-1] == 0) GOTO 0x950; Pop(1)

0x92f: PushEmpty()
0x930: Call2 0x927

0x931: Pop(0)
0x932: PushEmpty(bool)
0x933: Stack[-1] = (bool) 0
0x934: PushEmpty(bool)
0x935: Call2 0x9fd

0x936: Pop(0)
0x937: IF (Stack[-1] == 0) GOTO 0x93d; Pop(1)

0x938: PushEmpty(bool)
0x939: Call2 0x908

0x93a: Pop(0)
0x93b: IF (Stack[-1] == 0) GOTO 0x93d; Pop(1)

0x93c: Stack[-1] = (bool) 1
0x93d: IF (Stack[-1] == 0) GOTO 0x94a; Pop(1)

0x93e: PushEmpty(bool)
0x93f: Call2 0x8f4

0x940: Pop(0)
0x941: IF (Stack[-1] == 0) GOTO 0x949; Pop(1)

0x942: PushEmpty(bool, object)
0x943: PushEmpty(object)
0x944: Call2 0xb16

0x945: Stack[-2] = Stack[-1]
0x946: Pop(1)
0x947: Call2 0xa91

0x948: Pop(2)
0x949: GOTO 0x950

0x94a: PushEmpty()
0x94b: Call2 0x903

0x94c: Pop(0)
0x94d: PushEmpty()
0x94e: Call2 0x91e

0x94f: Pop(0)
0x950: Return(); Pop(0)

0x951: PushEmpty()
0x952: Call2 0x9dd

0x953: Pop(0)
0x954: PushEmpty()
0x955: Call2 0x927

0x956: Pop(0)
0x957: @ lshStopSpeech()
0x958: Pop(0)
0x959: @ lshStopAnimation()
0x95a: Pop(0)
0x95b: @ StopAsync()
0x95c: Pop(0)
0x95d: @ Hold()
0x95e: Pop(0)
0x95f: Return(); Pop(0)

0x960: @ StopGroup0()
0x961: Pop(0)
0x962: PushEmpty()
0x963: Call2 0x927

0x964: Pop(0)
0x965: PushEmpty(string)
0x966: Stack[-1] = "Neutral"
0x967: Call2 0xae1

0x968: Pop(1)
0x969: PushEmpty()
0x96a: Call2 0x91e

0x96b: Pop(0)
0x96c: Return(); Pop(0)

0x96d: PushEmpty()
0x96e: Push(Stack[-1])
0x96f: IF (Stack[-1] == 0) GOTO 0x974; Pop(1)

0x970: PushEmpty()
0x971: Call2 0x91e

0x972: Pop(0)
0x973: GOTO 0x978

0x974: PushEmpty(string)
0x975: Stack[-1] = "Neutral"
0x976: Call2 0xae1

0x977: Pop(1)
0x978: Return(); Pop(0)

0x979: PushEmpty(bool, bool)
0x97a: @ IsOverrideActive(Stack[-1])
0x97b: Pop(0)
0x97c: Pop(0); Push((bool) Stack[-1] == 0)
0x97d: IF (Stack[-1] == 0) GOTO 0x995; Pop(1)

0x97e: EventDisable(0)
0x97f: PushEmpty()
0x980: Call2 0x9dd

0x981: Pop(0)
0x982: PushEmpty(bool, object)
0x983: Stack[-1] = Stack[-5]
0x984: Call2 0x9f4

0x985: Pop(2)
0x986: EventEnable(0)
0x987: PushEmpty(object)
0x988: Stack[-1] = Stack[-4]
0x989: Call2 0xd44

0x98a: Pop(1)
0x98b: PushEmpty(string)
0x98c: Stack[-1] = "Neutral"
0x98d: Call2 0xae1

0x98e: Pop(1)
0x98f: PushEmpty()
0x990: Call2 0x927

0x991: Pop(0)
0x992: PushEmpty()
0x993: Call2 0x91e

0x994: Pop(0)
0x995: Return(); Pop(2)

0x996: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x997: @ WaitForAnimEnd()
0x998: Pop(0)
0x999: PushEmpty(bool)
0x99a: Call2 0x9fd

0x99b: Pop(0)
0x99c: Pop(1); Push((bool) Stack[-1] == 0)
0x99d: IF (Stack[-1] == 0) GOTO 0x99f; Pop(1)

0x99e: Return(); Pop(12)

0x99f: PushEmpty(int)
0x9a0: Call2 0xb85

0x9a1: Stack[-7] = Stack[-1]
0x9a2: Pop(1)
0x9a3: Stack[-5] = (int) 0
0x9a4: PushEmpty(bool)
0x9a5: Stack[-1] = (bool) 0
0x9a6: Push((int) 5)
0x9a7: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x9a8: IF (Stack[-1] == 0) GOTO 0x9ae; Pop(1)

0x9a9: PushEmpty(bool)
0x9aa: Call2 0x9fd

0x9ab: Pop(0)
0x9ac: IF (Stack[-1] == 0) GOTO 0x9ae; Pop(1)

0x9ad: Stack[-1] = (bool) 1
0x9ae: IF (Stack[-1] == 0) GOTO 0x9d8; Pop(1)

0x9af: Pop(0); Push((bool) Stack[-6] == 0)
0x9b0: IF (Stack[-1] == 0) GOTO 0x9b8; Pop(1)

0x9b1: Push((int) 3)
0x9b2: @ Sleep(Stack[-1], Stack[-5])
0x9b3: Pop(1)
0x9b4: Pop(0); Push((bool) Stack[-4] == 0)
0x9b5: IF (Stack[-1] == 0) GOTO 0x9b7; Pop(1)

0x9b6: GOTO 0x9d8

0x9b7: GOTO 0x9cd

0x9b8: @ irand(Stack[-3], Stack[-6])
0x9b9: Pop(0)
0x9ba: Push((int) 5)
0x9bb: @ irand(Stack[-3], Stack[-1])
0x9bc: Pop(1)
0x9bd: Push((int) 0)
0x9be: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x9bf: IF (Stack[-1] == 0) GOTO 0x9c1; Pop(1)

0x9c0: Stack[-3] = (int) 0
0x9c1: Push("all")
0x9c2: PushEmpty(string, int)
0x9c3: Stack[-1] = Stack[-6]
0x9c4: Call2 0xb7e

0x9c5: Pop(1)
0x9c6: @ PlayAnimation(Stack[-2], Stack[-1])
0x9c7: Pop(2)
0x9c8: @ WaitForAnimEnd(Stack[-1])
0x9c9: Pop(0)
0x9ca: Pop(0); Push((bool) Stack[-1] == 0)
0x9cb: IF (Stack[-1] == 0) GOTO 0x9cd; Pop(1)

0x9cc: GOTO 0x9d8

0x9cd: PushEmpty(bool)
0x9ce: Call2 0x9db

0x9cf: Pop(0)
0x9d0: Pop(1); Push((bool) Stack[-1] == 0)
0x9d1: IF (Stack[-1] == 0) GOTO 0x9d3; Pop(1)

0x9d2: GOTO 0x9d8

0x9d3: @ ResetAAS()
0x9d4: Pop(0)
0x9d5: Push((int) 1)
0x9d6: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x9d7: GOTO 0x9a4

0x9d8: @ ResetAAS()
0x9d9: Pop(0)
0x9da: Return(); Pop(12)

0x9db: Stack[-1] = (bool) 1
0x9dc: Return(); Pop(0)

0x9dd: @ StopAnimation()
0x9de: Pop(0)
0x9df: @ StopGroup0()
0x9e0: Pop(0)
0x9e1: Return(); Pop(0)

0x9e2: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x9e3: @ GetPosition(Stack[-3])
0x9e4: Pop(0)
0x9e5: @@ GetPosition(Stack[-2])
0x9e6: Pop(0)
0x9e7: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x9e8: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x9e9: Return(); Pop(6)

0x9ea: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x9eb: @ GetPosition(Stack[-3])
0x9ec: Pop(0)
0x9ed: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x9ee: Push(CvectorIndex(Stack[-2], 0))
0x9ef: Push(CvectorIndex(Stack[-3], 2))
0x9f0: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x9f1: Pop(2)
0x9f2: Stack[-8] = Stack[-1]
0x9f3: Return(); Pop(6)

0x9f4: PushEmpty(cvector, cvector)
0x9f5: @@ GetPosition(Stack[-1])
0x9f6: Pop(0)
0x9f7: PushEmpty(bool, cvector)
0x9f8: Stack[-1] = Stack[-3]
0x9f9: Call2 0x9ea

0x9fa: Stack[-6] = Stack[-2]
0x9fb: Pop(2)
0x9fc: Return(); Pop(2)

0x9fd: PushEmpty(bool, bool)
0x9fe: @ IsLoaded(Stack[-1])
0x9ff: Pop(0)
0xa00: Stack[-3] = Stack[-1]
0xa01: Return(); Pop(2)

0xa02: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0xa03: @@ GetPosition(Stack[-8])
0xa04: Pop(0)
0xa05: @@ GetEyesHeight(Stack[-9])
0xa06: Pop(0)
0xa07: Push(CvectorIndex(Stack[-8], 1))
0xa08: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xa09: CvectorIndex(Stack[-9], 1) = Stack[-1];
0xa0a: @ GetPosition(Stack[-7])
0xa0b: Pop(0)
0xa0c: @ GetEyesHeight(Stack[-9])
0xa0d: Pop(0)
0xa0e: Push(CvectorIndex(Stack[-7], 1))
0xa0f: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xa10: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xa11: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xa12: Push(CvectorIndex(Stack[-6], 1))
0xa13: Stack[-1] = (int) 0
0xa14: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xa15: Pop(0); Push(Stack[-6] | Stack[-6]);
0xa16: Pop(1); Push(Sqrt(Stack[-1]))
0xa17: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0xa18: Stack[-5] = -Stack[-6]; Pop(0);
0xa19: Pop(0); Push(Stack[-6] * Stack[-19]);
0xa1a: PushEmpty(cvector, cvector)
0xa1b: Push(CVector(0.0, 1.0, 0.0))
0xa1c: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0xa1d: Call2 0xb1c

0xa1e: Pop(1)
0xa1f: Push((int) 25)
0xa20: Pop(2); Push(Stack[-2] * Stack[-1]);
0xa21: Pop(2); Push(Stack[-2] + Stack[-1]);
0xa22: Push(CVector(0.0, 10.0, 0.0))
0xa23: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xa24: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0xa25: @ IsOverrideActive(Stack[-2])
0xa26: Pop(0)
0xa27: Push(Stack[-2])
0xa28: IF (Stack[-1] == 0) GOTO 0xa2b; Pop(1)

0xa29: Stack[-21] = (bool) 0
0xa2a: Return(); Pop(18)

0xa2b: @ StopWorld()
0xa2c: Pop(0)
0xa2d: @ CameraTransit(Stack[-3], Stack[-5])
0xa2e: Pop(0)
0xa2f: Push(CvectorIndex(Stack[-4], 0))
0xa30: Push(CvectorIndex(Stack[-5], 2))
0xa31: @ Rotate(Stack[-2], Stack[-1])
0xa32: Pop(2)
0xa33: PushEmpty(bool)
0xa34: Call2 0xb9e

0xa35: Pop(0)
0xa36: IF (Stack[-1] == 0) GOTO 0xa38; Pop(1)

0xa37: GOTO 0xa40

0xa38: Push("head")
0xa39: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xa3a: Pop(1)
0xa3b: Push(Stack[-1])
0xa3c: IF (Stack[-1] == 0) GOTO 0xa40; Pop(1)

0xa3d: Push("head")
0xa3e: @ LookAsyncCamera(Stack[-1])
0xa3f: Pop(1)
0xa40: @ CameraWaitForPlayFinish()
0xa41: Pop(0)
0xa42: @ ResumeWorld()
0xa43: Pop(0)
0xa44: Stack[-21] = (bool) 1
0xa45: Return(); Pop(18)

0xa46: PushEmpty(bool, bool)
0xa47: @ CameraSwitchToNormal()
0xa48: Pop(0)
0xa49: PushEmpty(bool)
0xa4a: Call2 0xb9e

0xa4b: Pop(0)
0xa4c: IF (Stack[-1] == 0) GOTO 0xa4e; Pop(1)

0xa4d: GOTO 0xa56

0xa4e: Push("head")
0xa4f: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xa50: Pop(1)
0xa51: Push(Stack[-1])
0xa52: IF (Stack[-1] == 0) GOTO 0xa56; Pop(1)

0xa53: Push("head")
0xa54: @ UnlookAsync(Stack[-1])
0xa55: Pop(1)
0xa56: Return(); Pop(2)

0xa57: PushEmpty(int, int, int, int)
0xa58: Push("voice_common")
0xa59: @ GetVariable(Stack[-1], Stack[-3])
0xa5a: Pop(1)
0xa5b: Push(Stack[-2])
0xa5c: IF (Stack[-1] == 0) GOTO 0xa7d; Pop(1)

0xa5d: PushEmpty(bool, object)
0xa5e: Stack[-1] = Stack[-7]
0xa5f: Call2 0xa91

0xa60: Pop(1)
0xa61: Pop(1); Push((bool) Stack[-1] == 0)
0xa62: IF (Stack[-1] == 0) GOTO 0xa6b; Pop(1)

0xa63: PushEmpty(bool, object)
0xa64: Stack[-1] = Stack[-7]
0xa65: Call2 0xab6

0xa66: Pop(1)
0xa67: Pop(1); Push((bool) Stack[-1] == 0)
0xa68: IF (Stack[-1] == 0) GOTO 0xa6b; Pop(1)

0xa69: Stack[-6] = (bool) 0
0xa6a: Return(); Pop(4)

0xa6b: Push((int) 2)
0xa6c: @ irand(Stack[-2], Stack[-1])
0xa6d: Pop(1)
0xa6e: Push(Stack[-1])
0xa6f: IF (Stack[-1] == 0) GOTO 0xa78; Pop(1)

0xa70: Push("voice_common")
0xa71: Push((int) 1)
0xa72: Pop(1); Push(Stack[-4] + Stack[-1]);
0xa73: Push((int) 3)
0xa74: Pop(2); Push(Stack[-2] % Stack[-1]);
0xa75: @ SetVariable(Stack[-2], Stack[-1])
0xa76: Pop(2)
0xa77: GOTO 0xa7c

0xa78: Push("voice_common")
0xa79: Push((int) 0)
0xa7a: @ SetVariable(Stack[-2], Stack[-1])
0xa7b: Pop(2)
0xa7c: GOTO 0xa8f

0xa7d: PushEmpty(bool, object)
0xa7e: Stack[-1] = Stack[-7]
0xa7f: Call2 0xab6

0xa80: Pop(1)
0xa81: Pop(1); Push((bool) Stack[-1] == 0)
0xa82: IF (Stack[-1] == 0) GOTO 0xa8b; Pop(1)

0xa83: PushEmpty(bool, object)
0xa84: Stack[-1] = Stack[-7]
0xa85: Call2 0xa91

0xa86: Pop(1)
0xa87: Pop(1); Push((bool) Stack[-1] == 0)
0xa88: IF (Stack[-1] == 0) GOTO 0xa8b; Pop(1)

0xa89: Stack[-6] = (bool) 0
0xa8a: Return(); Pop(4)

0xa8b: Push("voice_common")
0xa8c: Push((int) 1)
0xa8d: @ SetVariable(Stack[-2], Stack[-1])
0xa8e: Pop(2)
0xa8f: Stack[-6] = (bool) 1
0xa90: Return(); Pop(4)

0xa91: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xa92: Stack[-5] = "c"
0xa93: Stack[-4] = (int) 0
0xa94: Push((int) 1)
0xa95: IF (Stack[-1] == 0) GOTO 0xaa1; Pop(1)

0xa96: Push((int) 1)
0xa97: Pop(1); Push(Stack[-5] + Stack[-1]);
0xa98: Pop(1); Push(Stack[-6] + Stack[-1]);
0xa99: @@ HasProperty(Stack[-1], Stack[-4])
0xa9a: Pop(1)
0xa9b: Pop(0); Push((bool) Stack[-3] == 0)
0xa9c: IF (Stack[-1] == 0) GOTO 0xa9e; Pop(1)

0xa9d: GOTO 0xaa1

0xa9e: Push((int) 1)
0xa9f: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xaa0: GOTO 0xa94

0xaa1: Pop(0); Push((bool) Stack[-4] == 0)
0xaa2: IF (Stack[-1] == 0) GOTO 0xaa5; Pop(1)

0xaa3: Stack[-12] = (bool) 0
0xaa4: Return(); Pop(10)

0xaa5: Stack[-2] = (int) 0
0xaa6: Push((int) 1)
0xaa7: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xaa8: IF (Stack[-1] == 0) GOTO 0xaab; Pop(1)

0xaa9: @ irand(Stack[-2], Stack[-4])
0xaaa: Pop(0)
0xaab: Push((int) 1)
0xaac: Pop(1); Push(Stack[-3] + Stack[-1]);
0xaad: Pop(1); Push(Stack[-6] + Stack[-1]);
0xaae: @@ GetProperty(Stack[-1], Stack[-2])
0xaaf: Pop(1)
0xab0: PushEmpty(bool, string)
0xab1: Stack[-1] = Stack[-3]
0xab2: Call2 0xb00

0xab3: Stack[-14] = Stack[-2]
0xab4: Pop(2)
0xab5: Return(); Pop(10)

0xab6: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xab7: Push("d")
0xab8: PushEmpty(int)
0xab9: Call2 0xb6f

0xaba: Pop(0)
0xabb: Pop(2); Push(Stack[-2] + Stack[-1]);
0xabc: Push("m")
0xabd: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0xabe: Stack[-4] = (int) 0
0xabf: Push((int) 1)
0xac0: IF (Stack[-1] == 0) GOTO 0xacc; Pop(1)

0xac1: Push((int) 1)
0xac2: Pop(1); Push(Stack[-5] + Stack[-1]);
0xac3: Pop(1); Push(Stack[-6] + Stack[-1]);
0xac4: @@ HasProperty(Stack[-1], Stack[-4])
0xac5: Pop(1)
0xac6: Pop(0); Push((bool) Stack[-3] == 0)
0xac7: IF (Stack[-1] == 0) GOTO 0xac9; Pop(1)

0xac8: GOTO 0xacc

0xac9: Push((int) 1)
0xaca: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xacb: GOTO 0xabf

0xacc: Pop(0); Push((bool) Stack[-4] == 0)
0xacd: IF (Stack[-1] == 0) GOTO 0xad0; Pop(1)

0xace: Stack[-12] = (bool) 0
0xacf: Return(); Pop(10)

0xad0: Stack[-2] = (int) 0
0xad1: Push((int) 1)
0xad2: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xad3: IF (Stack[-1] == 0) GOTO 0xad6; Pop(1)

0xad4: @ irand(Stack[-2], Stack[-4])
0xad5: Pop(0)
0xad6: Push((int) 1)
0xad7: Pop(1); Push(Stack[-3] + Stack[-1]);
0xad8: Pop(1); Push(Stack[-6] + Stack[-1]);
0xad9: @@ GetProperty(Stack[-1], Stack[-2])
0xada: Pop(1)
0xadb: PushEmpty(bool, string)
0xadc: Stack[-1] = Stack[-3]
0xadd: Call2 0xb00

0xade: Stack[-14] = Stack[-2]
0xadf: Pop(2)
0xae0: Return(); Pop(10)

0xae1: PushEmpty(bool, float, float, bool, float, float)
0xae2: @ lshHasAnimation(Stack[-3], Stack[-7])
0xae3: Pop(0)
0xae4: Push(Stack[-3])
0xae5: IF (Stack[-1] == 0) GOTO 0xaec; Pop(1)

0xae6: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0xae7: Pop(0)
0xae8: Push((bool) 0)
0xae9: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xaea: Pop(1)
0xaeb: GOTO 0xaf0

0xaec: Push("Can't find lsh animation : ")
0xaed: Pop(1); Push(Stack[-1] + Stack[-8]);
0xaee: @ Trace(Stack[-1])
0xaef: Pop(1)
0xaf0: Return(); Pop(6)

0xaf1: PushEmpty(bool, float, float, bool, float, float)
0xaf2: @ lshHasAnimation(Stack[-3], Stack[-8])
0xaf3: Pop(0)
0xaf4: Push(Stack[-3])
0xaf5: IF (Stack[-1] == 0) GOTO 0xafb; Pop(1)

0xaf6: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0xaf7: Pop(0)
0xaf8: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0xaf9: Pop(0)
0xafa: GOTO 0xaff

0xafb: Push("Can't find lsh animation : ")
0xafc: Pop(1); Push(Stack[-1] + Stack[-9]);
0xafd: @ Trace(Stack[-1])
0xafe: Pop(1)
0xaff: Return(); Pop(6)

0xb00: PushEmpty(bool, bool)
0xb01: PushEmpty(bool)
0xb02: Call2 0xb9e

0xb03: Pop(0)
0xb04: IF (Stack[-1] == 0) GOTO 0xb0d; Pop(1)

0xb05: @ lshHasSpeech(Stack[-1], Stack[-3])
0xb06: Pop(0)
0xb07: Push(Stack[-1])
0xb08: IF (Stack[-1] == 0) GOTO 0xb0d; Pop(1)

0xb09: @ lshPlaySpeech(Stack[-3])
0xb0a: Pop(0)
0xb0b: Stack[-4] = (bool) 1
0xb0c: Return(); Pop(2)

0xb0d: Stack[-4] = (bool) 0
0xb0e: Return(); Pop(2)

0xb0f: PushEmpty(bool)
0xb10: Call2 0xb9e

0xb11: Pop(0)
0xb12: IF (Stack[-1] == 0) GOTO 0xb15; Pop(1)

0xb13: @ lshStopSpeech()
0xb14: Pop(0)
0xb15: Return(); Pop(0)

0xb16: PushEmpty(object, object)
0xb17: @ self(Stack[-1])
0xb18: Pop(0)
0xb19: Stack[-3] = Stack[-1]
0xb1a: Return(); Pop(2)

0xb1b: Stack[-1] = 0
0xb1c: PushEmpty(float, float)
0xb1d: Pop(0); Push(Stack[-3] | Stack[-3]);
0xb1e: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xb1f: Push((float)0.0)
0xb20: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xb21: IF (Stack[-1] == 0) GOTO 0xb24; Pop(1)

0xb22: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xb23: Return(); Pop(2)

0xb24: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xb25: Return(); Pop(2)

0xb26: PushEmpty(int, int)
0xb27: @ GetVariable(Stack[-3], Stack[-1])
0xb28: Pop(0)
0xb29: Stack[-4] = Stack[-1]
0xb2a: Return(); Pop(2)

0xb2b: PushEmpty(object, object)
0xb2c: @ CreateIntVector(Stack[-1])
0xb2d: Pop(0)
0xb2e: @@ add(Stack[-4])
0xb2f: Pop(0)
0xb30: @@ add(Stack[-3])
0xb31: Pop(0)
0xb32: Push((int) 3)
0xb33: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xb34: Pop(1)
0xb35: Return(); Pop(2)

0xb36: Stack[-1] = 0
0xb37: PushEmpty(int, int, bool, int, int, bool)
0xb38: @@ GetItemID(Stack[-3])
0xb39: Pop(0)
0xb3a: Push("Category")
0xb3b: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0xb3c: Pop(1)
0xb3d: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0xb3e: Pop(0)
0xb3f: Pop(0); Push((bool) Stack[-1] == 0)
0xb40: IF (Stack[-1] == 0) GOTO 0xb44; Pop(1)

0xb41: @@ DropItems(Stack[-8], Stack[-7])
0xb42: Pop(0)
0xb43: GOTO 0xb49

0xb44: PushEmpty(int, int)
0xb45: Stack[-2] = Stack[-5]
0xb46: Stack[-1] = Stack[-9]
0xb47: Call2 0xb2b

0xb48: Pop(2)
0xb49: Return(); Pop(6)

0xb4a: PushEmpty(object, object)
0xb4b: @ CreateInvItem(Stack[-1])
0xb4c: Pop(0)
0xb4d: @@ SetItemName(Stack[-4])
0xb4e: Pop(0)
0xb4f: PushEmpty(object, object, int)
0xb50: Stack[-3] = Stack[-8]
0xb51: Stack[-2] = Stack[-4]
0xb52: Stack[-1] = Stack[-6]
0xb53: Call2 0xb37

0xb54: Pop(3)
0xb55: Return(); Pop(2)

0xb56: Stack[-1] = 0
0xb57: PushEmpty(int, bool, int, bool)
0xb58: @ GetInvItemByName(Stack[-2], Stack[-5])
0xb59: Pop(0)
0xb5a: @@ HasItem(Stack[-2], Stack[-1])
0xb5b: Pop(0)
0xb5c: Stack[-7] = Stack[-1]
0xb5d: Return(); Pop(4)

0xb5e: PushEmpty(object, object)
0xb5f: @ FindActor(Stack[-1], Stack[-4])
0xb60: Pop(0)
0xb61: Pop(0); Push((bool) Stack[-1] == 0)
0xb62: IF (Stack[-1] == 0) GOTO 0xb65; Pop(1)

0xb63: Stack[-5] = (bool) 0
0xb64: Return(); Pop(2)

0xb65: @ Trigger(Stack[-1], Stack[-3])
0xb66: Pop(0)
0xb67: Stack[-5] = (bool) 1
0xb68: Return(); Pop(2)

0xb69: Stack[-1] = 0
0xb6a: PushEmpty(float, float)
0xb6b: @ GetGameTime(Stack[-1])
0xb6c: Pop(0)
0xb6d: Stack[-3] = Stack[-1]
0xb6e: Return(); Pop(2)

0xb6f: PushEmpty(float, float)
0xb70: @ GetGameTime(Stack[-1])
0xb71: Pop(0)
0xb72: Push((int) 1)
0xb73: PushEmpty(int)
0xb74: Push((int) 24)
0xb75: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xb76: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xb77: Return(); Pop(2)

0xb78: PushEmpty()
0xb79: PushEmpty(int)
0xb7a: Call2 0xb6f

0xb7b: Pop(0)
0xb7c: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0xb7d: Return(); Pop(0)

0xb7e: PushEmpty(string, string)
0xb7f: Stack[-1] = "idle"
0xb80: Push(Stack[-3])
0xb81: IF (Stack[-1] == 0) GOTO 0xb83; Pop(1)

0xb82: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xb83: Stack[-4] = Stack[-1]
0xb84: Return(); Pop(2)

0xb85: PushEmpty(int, bool, int, bool)
0xb86: Stack[-2] = (int) 0
0xb87: Push("all")
0xb88: PushEmpty(string, int)
0xb89: Stack[-1] = Stack[-5]
0xb8a: Call2 0xb7e

0xb8b: Pop(1)
0xb8c: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xb8d: Pop(2)
0xb8e: Pop(0); Push((bool) Stack[-1] == 0)
0xb8f: IF (Stack[-1] == 0) GOTO 0xb91; Pop(1)

0xb90: GOTO 0xb94

0xb91: Push((int) 1)
0xb92: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xb93: GOTO 0xb87

0xb94: Stack[-5] = Stack[-2]
0xb95: Return(); Pop(4)

0xb96: Stack[-1] = (int) 515546
0xb97: Return(); Pop(0)

0xb98: Stack[-1] = (int) 502871
0xb99: Return(); Pop(0)

0xb9a: Stack[-1] = "ui/NPC_Mishka.png"
0xb9b: Return(); Pop(0)

0xb9c: Stack[-1] = "ui/NPC_Mishka_b.png"
0xb9d: Return(); Pop(0)

0xb9e: Stack[-1] = (bool) 1
0xb9f: Return(); Pop(0)

0xba0: PushEmpty()
0xba1: Push("avroks blood is given")
0xba2: @ Trace(Stack[-1])
0xba3: Pop(1)
0xba4: PushEmpty(object, string, int)
0xba5: Stack[-3] = Stack[-5]
0xba6: Stack[-2] = "avroks_blood"
0xba7: Stack[-1] = (int) 1
0xba8: Call2 0xb4a

0xba9: Pop(3)
0xbaa: Return(); Pop(0)

0xbab: PushEmpty()
0xbac: Push("oob8Mishka1")
0xbad: Push((int) 1)
0xbae: @ SetVariable(Stack[-2], Stack[-1])
0xbaf: Pop(2)
0xbb0: Return(); Pop(0)

0xbb1: PushEmpty()
0xbb2: Push("oob1Mishka1")
0xbb3: Push((int) 1)
0xbb4: @ SetVariable(Stack[-2], Stack[-1])
0xbb5: Pop(2)
0xbb6: Return(); Pop(0)

0xbb7: PushEmpty()
0xbb8: Push("b10q04MishkaTalk")
0xbb9: Push((int) 9)
0xbba: @ SetVariable(Stack[-2], Stack[-1])
0xbbb: Pop(2)
0xbbc: PushEmpty()
0xbbd: Call2 0xccb

0xbbe: Pop(0)
0xbbf: Return(); Pop(0)

0xbc0: PushEmpty()
0xbc1: Push("playsound")
0xbc2: Push("giveitem")
0xbc3: @ TriggerWorld(Stack[-2], Stack[-1])
0xbc4: Pop(2)
0xbc5: Return(); Pop(0)

0xbc6: PushEmpty(object, object)
0xbc7: Push("b10q03")
0xbc8: Push((int) 2)
0xbc9: @ SetVariable(Stack[-2], Stack[-1])
0xbca: Pop(2)
0xbcb: PushEmpty(object)
0xbcc: Call2 0xd01

0xbcd: Stack[-2] = Stack[-1]
0xbce: Pop(1)
0xbcf: Push("b10q03MishkaGotoDoll")
0xbd0: Push("pt_b10q03_plant1")
0xbd1: Push((int) 0)
0xbd2: Push((int) 531262)
0xbd3: PushEmpty(float)
0xbd4: Call2 0xb6a

0xbd5: Pop(0)
0xbd6: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xbd7: Pop(5)
0xbd8: PushEmpty()
0xbd9: Call2 0xcb1

0xbda: Pop(0)
0xbdb: PushEmpty(bool, string, string)
0xbdc: Stack[-2] = "quest_b10_03"
0xbdd: Stack[-1] = "place_doll"
0xbde: Call2 0xb5e

0xbdf: Pop(3)
0xbe0: Return(); Pop(2)

0xbe1: Stack[-1] = 0
0xbe2: PushEmpty()
0xbe3: PushEmpty(object, string, float)
0xbe4: PushEmpty(object)
0xbe5: Call2 0xd01

0xbe6: Stack[-4] = Stack[-1]
0xbe7: Pop(1)
0xbe8: Stack[-2] = "pt_b10q03_plant1"
0xbe9: Stack[-1] = (int) 2
0xbea: Call2 0xd12

0xbeb: Pop(3)
0xbec: PushEmpty(object)
0xbed: Call2 0xd01

0xbee: Pop(0)
0xbef: @@ ShowMap(Stack[-1])
0xbf0: Pop(1)
0xbf1: Return(); Pop(0)

0xbf2: PushEmpty()
0xbf3: Push("b10q03")
0xbf4: Push((int) 3)
0xbf5: @ SetVariable(Stack[-2], Stack[-1])
0xbf6: Pop(2)
0xbf7: PushEmpty()
0xbf8: Call2 0xcbe

0xbf9: Pop(0)
0xbfa: PushEmpty(bool, string, string)
0xbfb: Stack[-2] = "quest_b10_03"
0xbfc: Stack[-1] = "place_blood"
0xbfd: Call2 0xb5e

0xbfe: Pop(3)
0xbff: Return(); Pop(0)

0xc00: PushEmpty()
0xc01: PushEmpty()
0xc02: Call2 0xc97

0xc03: Pop(0)
0xc04: PushEmpty(bool, string, string)
0xc05: Stack[-2] = "quest_b10_03"
0xc06: Stack[-1] = "completed"
0xc07: Call2 0xb5e

0xc08: Pop(3)
0xc09: Return(); Pop(0)

0xc0a: PushEmpty()
0xc0b: PushEmpty()
0xc0c: Call2 0xca4

0xc0d: Pop(0)
0xc0e: PushEmpty(bool, string, string)
0xc0f: Stack[-2] = "quest_b10_03"
0xc10: Stack[-1] = "fail"
0xc11: Call2 0xb5e

0xc12: Pop(3)
0xc13: Return(); Pop(0)

0xc14: PushEmpty(int, int)
0xc15: Push("b10q03_toy_burah")
0xc16: Push((int) 1)
0xc17: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0xc18: Pop(2)
0xc19: Return(); Pop(2)

0xc1a: PushEmpty()
0xc1b: Push("oob12Mishka1")
0xc1c: Push((int) 1)
0xc1d: @ SetVariable(Stack[-2], Stack[-1])
0xc1e: Pop(2)
0xc1f: Return(); Pop(0)

0xc20: PushEmpty()
0xc21: PushEmpty(int, string)
0xc22: Stack[-1] = "b8q01"
0xc23: Call2 0xb26

0xc24: Pop(1)
0xc25: Push((int) 2)
0xc26: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc27: IF (Stack[-1] == 0) GOTO 0xc2a; Pop(1)

0xc28: Stack[-2] = (bool) 1
0xc29: Return(); Pop(0)

0xc2a: Stack[-2] = (bool) 0
0xc2b: Return(); Pop(0)

0xc2c: PushEmpty()
0xc2d: PushEmpty(int, string)
0xc2e: Stack[-1] = "oob8Mishka1"
0xc2f: Call2 0xb26

0xc30: Pop(1)
0xc31: Push((int) 0)
0xc32: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc33: IF (Stack[-1] == 0) GOTO 0xc36; Pop(1)

0xc34: Stack[-2] = (bool) 1
0xc35: Return(); Pop(0)

0xc36: Stack[-2] = (bool) 0
0xc37: Return(); Pop(0)

0xc38: PushEmpty()
0xc39: PushEmpty(int, string)
0xc3a: Stack[-1] = "oob1Mishka1"
0xc3b: Call2 0xb26

0xc3c: Pop(1)
0xc3d: Push((int) 0)
0xc3e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc3f: IF (Stack[-1] == 0) GOTO 0xc42; Pop(1)

0xc40: Stack[-2] = (bool) 1
0xc41: Return(); Pop(0)

0xc42: Stack[-2] = (bool) 0
0xc43: Return(); Pop(0)

0xc44: PushEmpty()
0xc45: PushEmpty(int, string)
0xc46: Stack[-1] = "b10q04MishkaTalk"
0xc47: Call2 0xb26

0xc48: Pop(1)
0xc49: Push((int) 1)
0xc4a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc4b: IF (Stack[-1] == 0) GOTO 0xc4e; Pop(1)

0xc4c: Stack[-2] = (bool) 1
0xc4d: Return(); Pop(0)

0xc4e: Stack[-2] = (bool) 0
0xc4f: Return(); Pop(0)

0xc50: PushEmpty()
0xc51: PushEmpty(int, string)
0xc52: Stack[-1] = "b10q03"
0xc53: Call2 0xb26

0xc54: Pop(1)
0xc55: Push((int) 1)
0xc56: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc57: IF (Stack[-1] == 0) GOTO 0xc5a; Pop(1)

0xc58: Stack[-2] = (bool) 1
0xc59: Return(); Pop(0)

0xc5a: Stack[-2] = (bool) 0
0xc5b: Return(); Pop(0)

0xc5c: PushEmpty()
0xc5d: PushEmpty(int, string)
0xc5e: Stack[-1] = "b10q03"
0xc5f: Call2 0xb26

0xc60: Pop(1)
0xc61: Push((int) 2)
0xc62: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc63: IF (Stack[-1] == 0) GOTO 0xc66; Pop(1)

0xc64: Stack[-2] = (bool) 1
0xc65: Return(); Pop(0)

0xc66: Stack[-2] = (bool) 0
0xc67: Return(); Pop(0)

0xc68: PushEmpty()
0xc69: PushEmpty(bool, object, string)
0xc6a: Stack[-2] = Stack[-4]
0xc6b: Stack[-1] = "b10q03_toy_burah"
0xc6c: Call2 0xb57

0xc6d: Pop(2)
0xc6e: IF (Stack[-1] == 0) GOTO 0xc71; Pop(1)

0xc6f: Stack[-2] = (bool) 1
0xc70: Return(); Pop(0)

0xc71: Stack[-2] = (bool) 0
0xc72: Return(); Pop(0)

0xc73: PushEmpty()
0xc74: PushEmpty(int, string)
0xc75: Stack[-1] = "b10q03"
0xc76: Call2 0xb26

0xc77: Pop(1)
0xc78: Push((int) 4)
0xc79: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc7a: IF (Stack[-1] == 0) GOTO 0xc7d; Pop(1)

0xc7b: Stack[-2] = (bool) 1
0xc7c: Return(); Pop(0)

0xc7d: Stack[-2] = (bool) 0
0xc7e: Return(); Pop(0)

0xc7f: PushEmpty()
0xc80: PushEmpty(int, string)
0xc81: Stack[-1] = "b1q05"
0xc82: Call2 0xb26

0xc83: Pop(1)
0xc84: Push((int) 1000)
0xc85: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc86: IF (Stack[-1] == 0) GOTO 0xc89; Pop(1)

0xc87: Stack[-2] = (bool) 1
0xc88: Return(); Pop(0)

0xc89: Stack[-2] = (bool) 0
0xc8a: Return(); Pop(0)

0xc8b: PushEmpty()
0xc8c: PushEmpty(int, string)
0xc8d: Stack[-1] = "oob12Mishka1"
0xc8e: Call2 0xb26

0xc8f: Pop(1)
0xc90: Push((int) 0)
0xc91: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc92: IF (Stack[-1] == 0) GOTO 0xc95; Pop(1)

0xc93: Stack[-2] = (bool) 1
0xc94: Return(); Pop(0)

0xc95: Stack[-2] = (bool) 0
0xc96: Return(); Pop(0)

0xc97: PushEmpty(object, object)
0xc98: Push((int) 605)
0xc99: Push((int) 2)
0xc9a: Push((int) 531184)
0xc9b: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc9c: Pop(3)
0xc9d: PushEmpty(bool, object, int)
0xc9e: Stack[-2] = Stack[-4]
0xc9f: Stack[-1] = (int) 594
0xca0: Call2 0xce5

0xca1: Pop(3)
0xca2: Return(); Pop(2)

0xca3: Stack[-1] = 0
0xca4: PushEmpty(object, object)
0xca5: Push((int) 607)
0xca6: Push((int) 2)
0xca7: Push((int) 531500)
0xca8: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xca9: Pop(3)
0xcaa: PushEmpty(bool, object, int)
0xcab: Stack[-2] = Stack[-4]
0xcac: Stack[-1] = (int) 594
0xcad: Call2 0xce5

0xcae: Pop(3)
0xcaf: Return(); Pop(2)

0xcb0: Stack[-1] = 0
0xcb1: PushEmpty(object, object)
0xcb2: Push((int) 596)
0xcb3: Push((int) 2)
0xcb4: Push((int) 531147)
0xcb5: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xcb6: Pop(3)
0xcb7: PushEmpty(bool, object, int)
0xcb8: Stack[-2] = Stack[-4]
0xcb9: Stack[-1] = (int) 594
0xcba: Call2 0xce5

0xcbb: Pop(3)
0xcbc: Return(); Pop(2)

0xcbd: Stack[-1] = 0
0xcbe: PushEmpty(object, object)
0xcbf: Push((int) 603)
0xcc0: Push((int) 2)
0xcc1: Push((int) 531182)
0xcc2: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xcc3: Pop(3)
0xcc4: PushEmpty(bool, object, int)
0xcc5: Stack[-2] = Stack[-4]
0xcc6: Stack[-1] = (int) 594
0xcc7: Call2 0xce5

0xcc8: Pop(3)
0xcc9: Return(); Pop(2)

0xcca: Stack[-1] = 0
0xccb: PushEmpty(object, object)
0xccc: Push((int) 558)
0xccd: Push((int) 2)
0xcce: Push((int) 530537)
0xccf: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xcd0: Pop(3)
0xcd1: PushEmpty(bool, object, int)
0xcd2: Stack[-2] = Stack[-4]
0xcd3: Stack[-1] = (int) 549
0xcd4: Call2 0xce5

0xcd5: Pop(3)
0xcd6: Return(); Pop(2)

0xcd7: Stack[-1] = 0
0xcd8: PushEmpty(object, object)
0xcd9: @ GetDiaryRoot(Stack[-1])
0xcda: Pop(0)
0xcdb: Pop(0); Push((bool) Stack[-1] == 0)
0xcdc: IF (Stack[-1] == 0) GOTO 0xce2; Pop(1)

0xcdd: Push("Can't retrieve diary root")
0xcde: @ Trace(Stack[-1])
0xcdf: Pop(1)
0xce0: Stack[-3] = (bool) 0
0xce1: Return(); Pop(2)

0xce2: Stack[-3] = Stack[-1]
0xce3: Return(); Pop(2)

0xce4: Stack[-1] = 0
0xce5: PushEmpty(object, object, int, object, object, int)
0xce6: PushEmpty(object)
0xce7: Call2 0xcd8

0xce8: Stack[-4] = Stack[-1]
0xce9: Pop(1)
0xcea: @@ Find(Stack[-7], Stack[-2])
0xceb: Pop(0)
0xcec: Pop(0); Push((bool) Stack[-2] == 0)
0xced: IF (Stack[-1] == 0) GOTO 0xcf4; Pop(1)

0xcee: Push("Can't find diary parent with id: ")
0xcef: Pop(1); Push(Stack[-1] + Stack[-8]);
0xcf0: @ Trace(Stack[-1])
0xcf1: Pop(1)
0xcf2: Stack[-9] = (bool) 0
0xcf3: Return(); Pop(6)

0xcf4: @@ AddChild(Stack[-8])
0xcf5: Pop(0)
0xcf6: Push((int) 7)
0xcf7: @ SendWorldWndMessage(Stack[-1])
0xcf8: Pop(1)
0xcf9: @@ GetCategory(Stack[-1])
0xcfa: Pop(0)
0xcfb: @ SetDiarySection(Stack[-1])
0xcfc: Pop(0)
0xcfd: Stack[-9] = (bool) 0
0xcfe: Return(); Pop(6)

0xcff: Stack[-2] = 0
0xd00: Stack[-3] = 0
0xd01: PushEmpty(object, object, object, object)
0xd02: @ GetMainOutdoorScene(Stack[-2])
0xd03: Pop(0)
0xd04: Pop(0); Push((bool) Stack[-2] == 0)
0xd05: IF (Stack[-1] == 0) GOTO 0xd0c; Pop(1)

0xd06: Push("Can't find main outdoor scene")
0xd07: @ Trace(Stack[-1])
0xd08: Pop(1)
0xd09: Stack[-1] = 0
0xd0a: Stack[-5] = Stack[-1]
0xd0b: Return(); Pop(4)

0xd0c: @@ GetMap(Stack[-1])
0xd0d: Pop(0)
0xd0e: Stack[-5] = Stack[-1]
0xd0f: Return(); Pop(4)

0xd10: Stack[-1] = 0
0xd11: Stack[-2] = 0
0xd12: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0xd13: @ GetMainOutdoorScene(Stack[-2])
0xd14: Pop(0)
0xd15: Pop(0); Push((bool) Stack[-2] == 0)
0xd16: IF (Stack[-1] == 0) GOTO 0xd1b; Pop(1)

0xd17: Push("Can't find main outdoor scene")
0xd18: @ Trace(Stack[-1])
0xd19: Pop(1)
0xd1a: Return(); Pop(8)

0xd1b: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0xd1c: Pop(0)
0xd1d: Pop(0); Push((bool) Stack[-1] == 0)
0xd1e: IF (Stack[-1] == 0) GOTO 0xd25; Pop(1)

0xd1f: Push("Warning: outdoor scene locator ")
0xd20: Pop(1); Push(Stack[-1] + Stack[-11]);
0xd21: Push(" doesnt exist")
0xd22: Pop(2); Push(Stack[-2] + Stack[-1]);
0xd23: @ Trace(Stack[-1])
0xd24: Pop(1)
0xd25: @@ GetMap(Stack[-11])
0xd26: Pop(0)
0xd27: Pop(0); Push((bool) Stack[-11] == 0)
0xd28: IF (Stack[-1] == 0) GOTO 0xd2d; Pop(1)

0xd29: Push("Can't find map")
0xd2a: @ Trace(Stack[-1])
0xd2b: Pop(1)
0xd2c: Return(); Pop(8)

0xd2d: Push(CvectorIndex(Stack[-4], 0))
0xd2e: Push(CvectorIndex(Stack[-5], 2))
0xd2f: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0xd30: Pop(2)
0xd31: Return(); Pop(8)

0xd32: Stack[-2] = 0
0xd33: PushEmpty(int, int)
0xd34: Push("branch")
0xd35: @ GetVariable(Stack[-1], Stack[-2])
0xd36: Pop(1)
0xd37: Push((int) 0)
0xd38: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd39: IF (Stack[-1] == 0) GOTO 0xd3d; Pop(1)

0xd3a: Stack[-3] = (int) 1
0xd3b: Return(); Pop(2)

0xd3c: GOTO 0xd42

0xd3d: Push((int) 1)
0xd3e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd3f: IF (Stack[-1] == 0) GOTO 0xd42; Pop(1)

0xd40: Stack[-3] = (int) 2
0xd41: Return(); Pop(2)

0xd42: Stack[-3] = (int) 3
0xd43: Return(); Pop(2)

0xd44: PushEmpty()
0xd45: Push(GlobalVars[1])
0xd46: Pop(1); Push((bool) Stack[-1] == 0)
0xd47: IF (Stack[-1] == 0) GOTO 0xd51; Pop(1)

0xd48: PushEmpty(int, object)
0xd49: Stack[-1] = Stack[-3]
0xd4a: Push(-2, 1); TaskCall(6)
0xd4b: Call2 0x57a

0xd4c: Pop(-2, 1); TaskReturn
0xd4d: Pop(2)
0xd4e: Push(GlobalVars[1])
0xd4f: Stack[-1] = (bool) 1
0xd50: GlobalVars[1] = Stack[-1]; Pop(1)
0xd51: PushEmpty(bool, int)
0xd52: Stack[-1] = (int) 1
0xd53: Call2 0xb78

0xd54: Pop(1)
0xd55: IF (Stack[-1] == 0) GOTO 0xd5d; Pop(1)

0xd56: PushEmpty(int, object)
0xd57: Stack[-1] = Stack[-3]
0xd58: Push(-2, 1); TaskCall(0)
0xd59: Call2 0x0

0xd5a: Pop(-2, 1); TaskReturn
0xd5b: Pop(2)
0xd5c: Return(); Pop(0)

0xd5d: PushEmpty(bool, int)
0xd5e: Stack[-1] = (int) 8
0xd5f: Call2 0xb78

0xd60: Pop(1)
0xd61: IF (Stack[-1] == 0) GOTO 0xd69; Pop(1)

0xd62: PushEmpty(int, object)
0xd63: Stack[-1] = Stack[-3]
0xd64: Push(-2, 1); TaskCall(8)
0xd65: Call2 0x669

0xd66: Pop(-2, 1); TaskReturn
0xd67: Pop(2)
0xd68: Return(); Pop(0)

0xd69: PushEmpty(bool, int)
0xd6a: Stack[-1] = (int) 10
0xd6b: Call2 0xb78

0xd6c: Pop(1)
0xd6d: IF (Stack[-1] == 0) GOTO 0xd75; Pop(1)

0xd6e: PushEmpty(int, object)
0xd6f: Stack[-1] = Stack[-3]
0xd70: Push(-2, 1); TaskCall(2)
0xd71: Call2 0x16d

0xd72: Pop(-2, 1); TaskReturn
0xd73: Pop(2)
0xd74: Return(); Pop(0)

0xd75: PushEmpty(bool, int)
0xd76: Stack[-1] = (int) 12
0xd77: Call2 0xb78

0xd78: Pop(1)
0xd79: IF (Stack[-1] == 0) GOTO 0xd81; Pop(1)

0xd7a: PushEmpty(int, object)
0xd7b: Stack[-1] = Stack[-3]
0xd7c: Push(-2, 1); TaskCall(4)
0xd7d: Call2 0x44e

0xd7e: Pop(-2, 1); TaskReturn
0xd7f: Pop(2)
0xd80: Return(); Pop(0)

0xd81: PushEmpty(int, object)
0xd82: Stack[-1] = Stack[-3]
0xd83: Push(-2, 1); TaskCall(10)
0xd84: Call2 0x814

0xd85: Pop(-2, 1); TaskReturn
0xd86: Pop(2)
0xd87: Return(); Pop(0)

