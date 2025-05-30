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
	Declaim
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	Shyness
	Rage
	Neutral
	Gasp
	player
	GetPosition
	GetProperty
	SetProperty
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	Can't find lsh animation : 
	.bin
	add
	money
	Money
	ui/NPC_Mark.png
	ui/NPC_Mark_b.png
	pt_map_uprava_admin
	ShowMap
	quest_d8_04
	completed
	ood10Mark1
	d10MarkVisit
	d10q03
	quest_d10_03
	d10q03MarkGotoBlock
	AddMark
	ood2Mark1
	fail
	d7q02
	d7q02MarkGotoCemetery
	pt_d7q02_corpse
	d7q02MarkGotoAlexandr
	pt_map_alexandr
	quest_d7_02
	place_corpse
	KnowMark
	d8q04
	d7BurahLetter
	d7q01
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
	mt_mark

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
	GetMainOutdoorScene (1 args)
	AddBlankActor (4 args)
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemByName (2 args)
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0xae3
RunTask = 16

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xab Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x2be Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x4fa Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x626 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x757 Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x86a Vars = (int, int)
	GTASK_12 Vars = (object) Params = 2
	GTASK_13 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x950 Vars = (int, int)
	GTASK_14 Vars = (object) Params = 2
	GTASK_15 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xab9 Vars = (int, int)
	GTASK_16 Vars = (cvector) Params = 0
		EVENT_7 Op = 0xb2c Vars = (int)
		EVENT_6 Op = 0xb52 Vars = ()
		EVENT_5 Op = 0xb61 Vars = ()
		EVENT_45 Op = 0xb6e Vars = (bool)
		EVENT_0 Op = 0xb7a Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0xc0a

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0xd97

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0xd95

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0xd99

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0xd9b

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0xf43

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
0x31: Call2 0xd1e

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0xc5f

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
0x48: Call2 0xc4e

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
0x56: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x57: PushEmpty(string)
0x58: Stack[-1] = "Declaim"
0x59: Call2 0x95

0x5a: Pop(1)
0x5b: Push((int) 533341)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: PushEmpty(bool, object)
0x61: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62: Call2 0xe39

0x63: Pop(1)
0x64: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x65: Push((int) 533342)
0x66: Push((int) 34847)
0x67: Push((int) 34846)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: Push((int) 533345)
0x6b: Push((int) -1)
0x6c: Push((int) 34849)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: Push((int) 536042)
0x70: Push((int) -1)
0x71: Push((int) 37783)
0x72: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73: Pop(3)
0x74: GOTO 0x77

0x75: Return(); Pop(0)

0x76: GOTO 0x55

0x77: PushEmpty(bool)
0x78: Call2 0xd9d

0x79: Pop(0)
0x7a: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x7b: @ lshWaitForAnimEnd()
0x7c: Pop(0)
0x7d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7e: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x7f: GOTO 0x85

0x80: PushEmpty(string)
0x81: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x82: Call2 0xce9

0x83: Pop(1)
0x84: GOTO 0x7b

0x85: GOTO 0x94

0x86: Push("all")
0x87: Push("idle")
0x88: @ PlayAnimation(Stack[-2], Stack[-1])
0x89: Pop(2)
0x8a: @ WaitForAnimEnd()
0x8b: Pop(0)
0x8c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8d: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x8e: GOTO 0x94

0x8f: Push("all")
0x90: Push("idle")
0x91: @ PlayAnimation(Stack[-2], Stack[-1])
0x92: Pop(2)
0x93: GOTO 0x8a

0x94: Return(); Pop(0)

0x95: PushEmpty()
0x96: PushEmpty(bool)
0x97: Call2 0xd9d

0x98: Pop(0)
0x99: Pop(1); Push((bool) Stack[-1] == 0)
0x9a: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x9b: Return(); Pop(0)

0x9c: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x9d: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9e: Return(); Pop(0)

0x9f: PushEmpty(string, bool)
0xa0: Stack[-2] = Stack[-3]
0xa1: Push("")
0xa2: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa3: IF (Stack[-1] == 0) GOTO 0xa6; Pop(1)

0xa4: Stack[-1] = (bool) 0
0xa5: GOTO 0xa7

0xa6: Stack[-1] = (bool) 1
0xa7: Call2 0xcf9

0xa8: Pop(2)
0xa9: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xaa: Return(); Pop(0)

0xab: PushEmpty()
0xac: Push((int) 1)
0xad: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0xae: PushEmpty()
0xaf: Call2 0xd17

0xb0: Pop(0)
0xb1: Push((int) 34848)
0xb2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb3: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb4: PushEmpty(object, object)
0xb5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb7: Call2 0xdaf

0xb8: Pop(2)
0xb9: Push((int) 37812)
0xba: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbb: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xbc: PushEmpty(object, object)
0xbd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbf: Call2 0xdaf

0xc0: Pop(2)
0xc1: Push((int) 37815)
0xc2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc3: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xc4: PushEmpty(object, object)
0xc5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc7: Call2 0xdaf

0xc8: Pop(2)
0xc9: Push((int) 37814)
0xca: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcb: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0xcc: PushEmpty(object, object)
0xcd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xce: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcf: Call2 0xdaf

0xd0: Pop(2)
0xd1: Push((int) 37797)
0xd2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd3: IF (Stack[-1] == 0) GOTO 0xd9; Pop(1)

0xd4: PushEmpty(object, object)
0xd5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd7: Call2 0xdaf

0xd8: Pop(2)
0xd9: Push((int) 34845)
0xda: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdb: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xdc: PushEmpty(string)
0xdd: Stack[-1] = "Declaim"
0xde: Call2 0x95

0xdf: Pop(1)
0xe0: Push((int) 533341)
0xe1: @@ SetMessage(Stack[-1])
0xe2: Pop(1)
0xe3: @@ ClearReplies()
0xe4: Pop(0)
0xe5: PushEmpty(bool, object)
0xe6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe7: Call2 0xe39

0xe8: Pop(1)
0xe9: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xea: Push((int) 533342)
0xeb: Push((int) 34847)
0xec: Push((int) 34846)
0xed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xee: Pop(3)
0xef: Push((int) 533345)
0xf0: Push((int) -1)
0xf1: Push((int) 34849)
0xf2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf3: Pop(3)
0xf4: Push((int) 536042)
0xf5: Push((int) -1)
0xf6: Push((int) 37783)
0xf7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf8: Pop(3)
0xf9: Return(); Pop(0)

0xfa: Push((int) 34847)
0xfb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfc: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0xfd: PushEmpty(string)
0xfe: Stack[-1] = "Declaim"
0xff: Call2 0x95

0x100: Pop(1)
0x101: Push((int) 533343)
0x102: @@ SetMessage(Stack[-1])
0x103: Pop(1)
0x104: @@ ClearReplies()
0x105: Pop(0)
0x106: Push((int) 536043)
0x107: Push((int) 37790)
0x108: Push((int) 37784)
0x109: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10a: Pop(3)
0x10b: Push((int) 536053)
0x10c: Push((int) 37795)
0x10d: Push((int) 37794)
0x10e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10f: Pop(3)
0x110: Return(); Pop(0)

0x111: Push((int) 37795)
0x112: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x113: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x114: PushEmpty(string)
0x115: Stack[-1] = "Shyness"
0x116: Call2 0x95

0x117: Pop(1)
0x118: Push((int) 536054)
0x119: @@ SetMessage(Stack[-1])
0x11a: Pop(1)
0x11b: @@ ClearReplies()
0x11c: Pop(0)
0x11d: Push((int) 536055)
0x11e: Push((int) 37789)
0x11f: Push((int) 37796)
0x120: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x121: Pop(3)
0x122: Push((int) 536056)
0x123: Push((int) -1)
0x124: Push((int) 37797)
0x125: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x126: Pop(3)
0x127: Return(); Pop(0)

0x128: Push((int) 37790)
0x129: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12a: IF (Stack[-1] == 0) GOTO 0x13a; Pop(1)

0x12b: PushEmpty(string)
0x12c: Stack[-1] = "Declaim"
0x12d: Call2 0x95

0x12e: Pop(1)
0x12f: Push((int) 536049)
0x130: @@ SetMessage(Stack[-1])
0x131: Pop(1)
0x132: @@ ClearReplies()
0x133: Pop(0)
0x134: Push((int) 536050)
0x135: Push((int) 37792)
0x136: Push((int) 37791)
0x137: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x138: Pop(3)
0x139: Return(); Pop(0)

0x13a: Push((int) 37792)
0x13b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13c: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x13d: PushEmpty(string)
0x13e: Stack[-1] = "Declaim"
0x13f: Call2 0x95

0x140: Pop(1)
0x141: Push((int) 536051)
0x142: @@ SetMessage(Stack[-1])
0x143: Pop(1)
0x144: @@ ClearReplies()
0x145: Pop(0)
0x146: Push((int) 536052)
0x147: Push((int) 37785)
0x148: Push((int) 37793)
0x149: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14a: Pop(3)
0x14b: Return(); Pop(0)

0x14c: Push((int) 37785)
0x14d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14e: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x14f: PushEmpty(string)
0x150: Stack[-1] = "Rage"
0x151: Call2 0x95

0x152: Pop(1)
0x153: Push((int) 536044)
0x154: @@ SetMessage(Stack[-1])
0x155: Pop(1)
0x156: @@ ClearReplies()
0x157: Pop(0)
0x158: Push((int) 536045)
0x159: Push((int) 37787)
0x15a: Push((int) 37786)
0x15b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15c: Pop(3)
0x15d: Push((int) 536057)
0x15e: Push((int) 37799)
0x15f: Push((int) 37798)
0x160: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x161: Pop(3)
0x162: Return(); Pop(0)

0x163: Push((int) 37799)
0x164: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x165: IF (Stack[-1] == 0) GOTO 0x17a; Pop(1)

0x166: PushEmpty(string)
0x167: Stack[-1] = "Shyness"
0x168: Call2 0x95

0x169: Pop(1)
0x16a: Push((int) 536058)
0x16b: @@ SetMessage(Stack[-1])
0x16c: Pop(1)
0x16d: @@ ClearReplies()
0x16e: Pop(0)
0x16f: Push((int) 536059)
0x170: Push((int) 37803)
0x171: Push((int) 37800)
0x172: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x173: Pop(3)
0x174: Push((int) 536063)
0x175: Push((int) 37807)
0x176: Push((int) 37806)
0x177: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x178: Pop(3)
0x179: Return(); Pop(0)

0x17a: Push((int) 37807)
0x17b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17c: IF (Stack[-1] == 0) GOTO 0x18c; Pop(1)

0x17d: PushEmpty(string)
0x17e: Stack[-1] = "Shyness"
0x17f: Call2 0x95

0x180: Pop(1)
0x181: Push((int) 536064)
0x182: @@ SetMessage(Stack[-1])
0x183: Pop(1)
0x184: @@ ClearReplies()
0x185: Pop(0)
0x186: Push((int) 536065)
0x187: Push((int) 37809)
0x188: Push((int) 37808)
0x189: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18a: Pop(3)
0x18b: Return(); Pop(0)

0x18c: Push((int) 37809)
0x18d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18e: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x18f: PushEmpty(string)
0x190: Stack[-1] = "Shyness"
0x191: Call2 0x95

0x192: Pop(1)
0x193: Push((int) 536066)
0x194: @@ SetMessage(Stack[-1])
0x195: Pop(1)
0x196: @@ ClearReplies()
0x197: Pop(0)
0x198: Push((int) 536067)
0x199: Push((int) 37803)
0x19a: Push((int) 37811)
0x19b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19c: Pop(3)
0x19d: Push((int) 536069)
0x19e: Push((int) -1)
0x19f: Push((int) 37814)
0x1a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a1: Pop(3)
0x1a2: Return(); Pop(0)

0x1a3: Push((int) 37787)
0x1a4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a5: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x1a6: PushEmpty(string)
0x1a7: Stack[-1] = "Rage"
0x1a8: Call2 0x95

0x1a9: Pop(1)
0x1aa: Push((int) 536046)
0x1ab: @@ SetMessage(Stack[-1])
0x1ac: Pop(1)
0x1ad: @@ ClearReplies()
0x1ae: Pop(0)
0x1af: Push((int) 536047)
0x1b0: Push((int) 37803)
0x1b1: Push((int) 37788)
0x1b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b3: Pop(3)
0x1b4: Push((int) 536060)
0x1b5: Push((int) 37803)
0x1b6: Push((int) 37802)
0x1b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b8: Pop(3)
0x1b9: Return(); Pop(0)

0x1ba: Push((int) 37803)
0x1bb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1bc: IF (Stack[-1] == 0) GOTO 0x1d1; Pop(1)

0x1bd: PushEmpty(string)
0x1be: Stack[-1] = "Shyness"
0x1bf: Call2 0x95

0x1c0: Pop(1)
0x1c1: Push((int) 536061)
0x1c2: @@ SetMessage(Stack[-1])
0x1c3: Pop(1)
0x1c4: @@ ClearReplies()
0x1c5: Pop(0)
0x1c6: Push((int) 536062)
0x1c7: Push((int) 37789)
0x1c8: Push((int) 37804)
0x1c9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ca: Pop(3)
0x1cb: Push((int) 536070)
0x1cc: Push((int) -1)
0x1cd: Push((int) 37815)
0x1ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1cf: Pop(3)
0x1d0: Return(); Pop(0)

0x1d1: Push((int) 37789)
0x1d2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d3: IF (Stack[-1] == 0) GOTO 0x1e8; Pop(1)

0x1d4: PushEmpty(string)
0x1d5: Stack[-1] = "Shyness"
0x1d6: Call2 0x95

0x1d7: Pop(1)
0x1d8: Push((int) 536048)
0x1d9: @@ SetMessage(Stack[-1])
0x1da: Pop(1)
0x1db: @@ ClearReplies()
0x1dc: Pop(0)
0x1dd: Push((int) 533344)
0x1de: Push((int) -1)
0x1df: Push((int) 34848)
0x1e0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e1: Pop(3)
0x1e2: Push((int) 536068)
0x1e3: Push((int) -1)
0x1e4: Push((int) 37812)
0x1e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e6: Pop(3)
0x1e7: Return(); Pop(0)

0x1e8: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1e9: PushEmpty(bool)
0x1ea: Call2 0xd9d

0x1eb: Pop(0)
0x1ec: IF (Stack[-1] == 0) GOTO 0x1f0; Pop(1)

0x1ed: @ lshStopAnimation()
0x1ee: Pop(0)
0x1ef: GOTO 0x1f2

0x1f0: @ StopAnimation()
0x1f1: Pop(0)
0x1f2: Return(); Pop(0)

0x1f3: GOTO 0xac

0x1f4: Return(); Pop(0)

0x1f5: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1f6: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x1f7: PushEmpty(bool, object, float)
0x1f8: Stack[-2] = Stack[-12]
0x1f9: Stack[-1] = (float) 70.0
0x1fa: Call2 0xc0a

0x1fb: Pop(2)
0x1fc: Pop(1); Push((bool) Stack[-1] == 0)
0x1fd: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1fe: Stack[-10] = (int) -2
0x1ff: Return(); Pop(8)

0x200: @ CreateDialog(Stack[-4])
0x201: Pop(0)
0x202: PushEmpty(int)
0x203: Call2 0xd97

0x204: Pop(0)
0x205: @@ SetNPCName(Stack[-1])
0x206: Pop(1)
0x207: PushEmpty(int)
0x208: Call2 0xd95

0x209: Pop(0)
0x20a: @@ SetNPCDescription(Stack[-1])
0x20b: Pop(1)
0x20c: PushEmpty(string)
0x20d: Call2 0xd99

0x20e: Pop(0)
0x20f: @@ SetPhoto(Stack[-1])
0x210: Pop(1)
0x211: PushEmpty(string)
0x212: Call2 0xd9b

0x213: Pop(0)
0x214: @@ SetPhoto2(Stack[-1])
0x215: Pop(1)
0x216: PushEmpty(int)
0x217: Call2 0xf43

0x218: Pop(0)
0x219: @@ SetPlayerName(Stack[-1])
0x21a: Pop(1)
0x21b: Stack[-2] = (int) -1
0x21c: @ IsOverrideActive(Stack[-3])
0x21d: Pop(0)
0x21e: Push(Stack[-3])
0x21f: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x220: Stack[-10] = (int) -2
0x221: Return(); Pop(8)

0x222: @ DoDialog(Stack[-4])
0x223: Pop(0)
0x224: PushEmpty(bool, object)
0x225: PushEmpty(object)
0x226: Call2 0xd1e

0x227: Stack[-2] = Stack[-1]
0x228: Pop(1)
0x229: Call2 0xc5f

0x22a: Pop(2)
0x22b: PushEmpty(object, object)
0x22c: Stack[-2] = Stack[-11]
0x22d: Stack[-1] = Stack[-6]
0x22e: Push(-2, 4); TaskCall(3)
0x22f: Call2 0x246

0x230: Pop(-2, 4); TaskReturn
0x231: Pop(2)
0x232: @@ IsDialogEnd(Stack[-1])
0x233: Pop(0)
0x234: Pop(0); Push((bool) Stack[-1] == 0)
0x235: IF (Stack[-1] == 0) GOTO 0x23b; Pop(1)

0x236: @ sync()
0x237: Pop(0)
0x238: @@ IsDialogEnd(Stack[-1])
0x239: Pop(0)
0x23a: GOTO 0x234

0x23b: PushEmpty(object)
0x23c: Stack[-1] = Stack[-10]
0x23d: Call2 0xc4e

0x23e: Pop(1)
0x23f: @ StopDialog(Stack[-4])
0x240: Pop(0)
0x241: @@ GetReturnValue(Stack[-2])
0x242: Pop(0)
0x243: Stack[-10] = Stack[-2]
0x244: Return(); Pop(8)

0x245: Stack[-4] = 0
0x246: PushEmpty()
0x247: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x248: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x249: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x24a: Push((int) 1)
0x24b: IF (Stack[-1] == 0) GOTO 0x28a; Pop(1)

0x24c: PushEmpty(bool, object)
0x24d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x24e: Call2 0xe45

0x24f: Pop(1)
0x250: IF (Stack[-1] == 0) GOTO 0x26f; Pop(1)

0x251: PushEmpty(object, object)
0x252: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x253: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x254: Call2 0xdb9

0x255: Pop(2)
0x256: PushEmpty(object, object)
0x257: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x258: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x259: Call2 0xdbf

0x25a: Pop(2)
0x25b: PushEmpty(string)
0x25c: Stack[-1] = "Rage"
0x25d: Call2 0x2a8

0x25e: Pop(1)
0x25f: Push((int) 534127)
0x260: @@ SetMessage(Stack[-1])
0x261: Pop(1)
0x262: @@ ClearReplies()
0x263: Pop(0)
0x264: Push((int) 536495)
0x265: Push((int) 38296)
0x266: Push((int) 38295)
0x267: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x268: Pop(3)
0x269: Push((int) 536508)
0x26a: Push((int) 38310)
0x26b: Push((int) 38309)
0x26c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x26d: Pop(3)
0x26e: GOTO 0x28a

0x26f: PushEmpty(string)
0x270: Stack[-1] = "Neutral"
0x271: Call2 0x2a8

0x272: Pop(1)
0x273: Push((int) 534129)
0x274: @@ SetMessage(Stack[-1])
0x275: Pop(1)
0x276: @@ ClearReplies()
0x277: Pop(0)
0x278: PushEmpty(bool, object)
0x279: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x27a: Call2 0xe51

0x27b: Pop(1)
0x27c: IF (Stack[-1] == 0) GOTO 0x282; Pop(1)

0x27d: Push((int) 534146)
0x27e: Push((int) 38315)
0x27f: Push((int) 35733)
0x280: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x281: Pop(3)
0x282: Push((int) 534130)
0x283: Push((int) -1)
0x284: Push((int) 35717)
0x285: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x286: Pop(3)
0x287: GOTO 0x28a

0x288: Return(); Pop(0)

0x289: GOTO 0x24a

0x28a: PushEmpty(bool)
0x28b: Call2 0xd9d

0x28c: Pop(0)
0x28d: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x28e: @ lshWaitForAnimEnd()
0x28f: Pop(0)
0x290: Push( Stack[3 + Tasks[-1].StackPointer] )
0x291: IF (Stack[-1] == 0) GOTO 0x293; Pop(1)

0x292: GOTO 0x298

0x293: PushEmpty(string)
0x294: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x295: Call2 0xce9

0x296: Pop(1)
0x297: GOTO 0x28e

0x298: GOTO 0x2a7

0x299: Push("all")
0x29a: Push("idle")
0x29b: @ PlayAnimation(Stack[-2], Stack[-1])
0x29c: Pop(2)
0x29d: @ WaitForAnimEnd()
0x29e: Pop(0)
0x29f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2a0: IF (Stack[-1] == 0) GOTO 0x2a2; Pop(1)

0x2a1: GOTO 0x2a7

0x2a2: Push("all")
0x2a3: Push("idle")
0x2a4: @ PlayAnimation(Stack[-2], Stack[-1])
0x2a5: Pop(2)
0x2a6: GOTO 0x29d

0x2a7: Return(); Pop(0)

0x2a8: PushEmpty()
0x2a9: PushEmpty(bool)
0x2aa: Call2 0xd9d

0x2ab: Pop(0)
0x2ac: Pop(1); Push((bool) Stack[-1] == 0)
0x2ad: IF (Stack[-1] == 0) GOTO 0x2af; Pop(1)

0x2ae: Return(); Pop(0)

0x2af: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x2b0: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x2b1: Return(); Pop(0)

0x2b2: PushEmpty(string, bool)
0x2b3: Stack[-2] = Stack[-3]
0x2b4: Push("")
0x2b5: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2b6: IF (Stack[-1] == 0) GOTO 0x2b9; Pop(1)

0x2b7: Stack[-1] = (bool) 0
0x2b8: GOTO 0x2ba

0x2b9: Stack[-1] = (bool) 1
0x2ba: Call2 0xcf9

0x2bb: Pop(2)
0x2bc: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x2bd: Return(); Pop(0)

0x2be: PushEmpty()
0x2bf: Push((int) 1)
0x2c0: IF (Stack[-1] == 0) GOTO 0x453; Pop(1)

0x2c1: PushEmpty()
0x2c2: Call2 0xd17

0x2c3: Pop(0)
0x2c4: Push((int) 35715)
0x2c5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2c6: IF (Stack[-1] == 0) GOTO 0x2cc; Pop(1)

0x2c7: PushEmpty(object, object)
0x2c8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2c9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2ca: Call2 0xdc5

0x2cb: Pop(2)
0x2cc: Push((int) 35737)
0x2cd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2ce: IF (Stack[-1] == 0) GOTO 0x2d9; Pop(1)

0x2cf: PushEmpty(object, object)
0x2d0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2d1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2d2: Call2 0xdd5

0x2d3: Pop(2)
0x2d4: PushEmpty(object, object)
0x2d5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2d6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2d7: Call2 0xd9f

0x2d8: Pop(2)
0x2d9: Push((int) 38334)
0x2da: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2db: IF (Stack[-1] == 0) GOTO 0x2e1; Pop(1)

0x2dc: PushEmpty(object, object)
0x2dd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2de: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2df: Call2 0xdf2

0x2e0: Pop(2)
0x2e1: Push((int) 38333)
0x2e2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2e3: IF (Stack[-1] == 0) GOTO 0x2e9; Pop(1)

0x2e4: PushEmpty(object, object)
0x2e5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2e6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2e7: Call2 0xdf2

0x2e8: Pop(2)
0x2e9: Push((int) 35714)
0x2ea: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2eb: IF (Stack[-1] == 0) GOTO 0x328; Pop(1)

0x2ec: PushEmpty(bool, object)
0x2ed: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2ee: Call2 0xe45

0x2ef: Pop(1)
0x2f0: IF (Stack[-1] == 0) GOTO 0x30f; Pop(1)

0x2f1: PushEmpty(object, object)
0x2f2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2f3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2f4: Call2 0xdb9

0x2f5: Pop(2)
0x2f6: PushEmpty(object, object)
0x2f7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2f8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2f9: Call2 0xdbf

0x2fa: Pop(2)
0x2fb: PushEmpty(string)
0x2fc: Stack[-1] = "Rage"
0x2fd: Call2 0x2a8

0x2fe: Pop(1)
0x2ff: Push((int) 534127)
0x300: @@ SetMessage(Stack[-1])
0x301: Pop(1)
0x302: @@ ClearReplies()
0x303: Pop(0)
0x304: Push((int) 536495)
0x305: Push((int) 38296)
0x306: Push((int) 38295)
0x307: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x308: Pop(3)
0x309: Push((int) 536508)
0x30a: Push((int) 38310)
0x30b: Push((int) 38309)
0x30c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x30d: Pop(3)
0x30e: Return(); Pop(0)

0x30f: PushEmpty(string)
0x310: Stack[-1] = "Neutral"
0x311: Call2 0x2a8

0x312: Pop(1)
0x313: Push((int) 534129)
0x314: @@ SetMessage(Stack[-1])
0x315: Pop(1)
0x316: @@ ClearReplies()
0x317: Pop(0)
0x318: PushEmpty(bool, object)
0x319: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x31a: Call2 0xe51

0x31b: Pop(1)
0x31c: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x31d: Push((int) 534146)
0x31e: Push((int) 38315)
0x31f: Push((int) 35733)
0x320: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x321: Pop(3)
0x322: Push((int) 534130)
0x323: Push((int) -1)
0x324: Push((int) 35717)
0x325: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x326: Pop(3)
0x327: Return(); Pop(0)

0x328: Push((int) 38315)
0x329: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x32a: IF (Stack[-1] == 0) GOTO 0x33f; Pop(1)

0x32b: PushEmpty(string)
0x32c: Stack[-1] = "Neutral"
0x32d: Call2 0x2a8

0x32e: Pop(1)
0x32f: Push((int) 536512)
0x330: @@ SetMessage(Stack[-1])
0x331: Pop(1)
0x332: @@ ClearReplies()
0x333: Pop(0)
0x334: Push((int) 536513)
0x335: Push((int) 38317)
0x336: Push((int) 38316)
0x337: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x338: Pop(3)
0x339: Push((int) 536516)
0x33a: Push((int) 38317)
0x33b: Push((int) 38319)
0x33c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x33d: Pop(3)
0x33e: Return(); Pop(0)

0x33f: Push((int) 38317)
0x340: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x341: IF (Stack[-1] == 0) GOTO 0x356; Pop(1)

0x342: PushEmpty(string)
0x343: Stack[-1] = "Shyness"
0x344: Call2 0x2a8

0x345: Pop(1)
0x346: Push((int) 536514)
0x347: @@ SetMessage(Stack[-1])
0x348: Pop(1)
0x349: @@ ClearReplies()
0x34a: Pop(0)
0x34b: Push((int) 536515)
0x34c: Push((int) 35734)
0x34d: Push((int) 38318)
0x34e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x34f: Pop(3)
0x350: Push((int) 536517)
0x351: Push((int) 35734)
0x352: Push((int) 38321)
0x353: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x354: Pop(3)
0x355: Return(); Pop(0)

0x356: Push((int) 35734)
0x357: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x358: IF (Stack[-1] == 0) GOTO 0x372; Pop(1)

0x359: PushEmpty(string)
0x35a: Stack[-1] = "Shyness"
0x35b: Call2 0x2a8

0x35c: Pop(1)
0x35d: Push((int) 534147)
0x35e: @@ SetMessage(Stack[-1])
0x35f: Pop(1)
0x360: @@ ClearReplies()
0x361: Pop(0)
0x362: Push((int) 536518)
0x363: Push((int) 38324)
0x364: Push((int) 38323)
0x365: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x366: Pop(3)
0x367: Push((int) 536524)
0x368: Push((int) 38330)
0x369: Push((int) 38329)
0x36a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x36b: Pop(3)
0x36c: Push((int) 536522)
0x36d: Push((int) 38328)
0x36e: Push((int) 38327)
0x36f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x370: Pop(3)
0x371: Return(); Pop(0)

0x372: Push((int) 38328)
0x373: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x374: IF (Stack[-1] == 0) GOTO 0x384; Pop(1)

0x375: PushEmpty(string)
0x376: Stack[-1] = "Gasp"
0x377: Call2 0x2a8

0x378: Pop(1)
0x379: Push((int) 536523)
0x37a: @@ SetMessage(Stack[-1])
0x37b: Pop(1)
0x37c: @@ ClearReplies()
0x37d: Pop(0)
0x37e: Push((int) 536526)
0x37f: Push((int) 38330)
0x380: Push((int) 38331)
0x381: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x382: Pop(3)
0x383: Return(); Pop(0)

0x384: Push((int) 38330)
0x385: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x386: IF (Stack[-1] == 0) GOTO 0x396; Pop(1)

0x387: PushEmpty(string)
0x388: Stack[-1] = "Gasp"
0x389: Call2 0x2a8

0x38a: Pop(1)
0x38b: Push((int) 536525)
0x38c: @@ SetMessage(Stack[-1])
0x38d: Pop(1)
0x38e: @@ ClearReplies()
0x38f: Pop(0)
0x390: Push((int) 536529)
0x391: Push((int) 38324)
0x392: Push((int) 38335)
0x393: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x394: Pop(3)
0x395: Return(); Pop(0)

0x396: Push((int) 38324)
0x397: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x398: IF (Stack[-1] == 0) GOTO 0x3ad; Pop(1)

0x399: PushEmpty(string)
0x39a: Stack[-1] = "Shyness"
0x39b: Call2 0x2a8

0x39c: Pop(1)
0x39d: Push((int) 536519)
0x39e: @@ SetMessage(Stack[-1])
0x39f: Pop(1)
0x3a0: @@ ClearReplies()
0x3a1: Pop(0)
0x3a2: Push((int) 536520)
0x3a3: Push((int) 38326)
0x3a4: Push((int) 38325)
0x3a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a6: Pop(3)
0x3a7: Push((int) 536527)
0x3a8: Push((int) -1)
0x3a9: Push((int) 38333)
0x3aa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ab: Pop(3)
0x3ac: Return(); Pop(0)

0x3ad: Push((int) 38326)
0x3ae: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3af: IF (Stack[-1] == 0) GOTO 0x3c4; Pop(1)

0x3b0: PushEmpty(string)
0x3b1: Stack[-1] = "Gasp"
0x3b2: Call2 0x2a8

0x3b3: Pop(1)
0x3b4: Push((int) 536521)
0x3b5: @@ SetMessage(Stack[-1])
0x3b6: Pop(1)
0x3b7: @@ ClearReplies()
0x3b8: Pop(0)
0x3b9: Push((int) 534148)
0x3ba: Push((int) 35736)
0x3bb: Push((int) 35735)
0x3bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3bd: Pop(3)
0x3be: Push((int) 536528)
0x3bf: Push((int) -1)
0x3c0: Push((int) 38334)
0x3c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c2: Pop(3)
0x3c3: Return(); Pop(0)

0x3c4: Push((int) 35736)
0x3c5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3c6: IF (Stack[-1] == 0) GOTO 0x3d6; Pop(1)

0x3c7: PushEmpty(string)
0x3c8: Stack[-1] = "Gasp"
0x3c9: Call2 0x2a8

0x3ca: Pop(1)
0x3cb: Push((int) 534149)
0x3cc: @@ SetMessage(Stack[-1])
0x3cd: Pop(1)
0x3ce: @@ ClearReplies()
0x3cf: Pop(0)
0x3d0: Push((int) 534150)
0x3d1: Push((int) -1)
0x3d2: Push((int) 35737)
0x3d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d4: Pop(3)
0x3d5: Return(); Pop(0)

0x3d6: Push((int) 38310)
0x3d7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3d8: IF (Stack[-1] == 0) GOTO 0x3e8; Pop(1)

0x3d9: PushEmpty(string)
0x3da: Stack[-1] = "Rage"
0x3db: Call2 0x2a8

0x3dc: Pop(1)
0x3dd: Push((int) 536509)
0x3de: @@ SetMessage(Stack[-1])
0x3df: Pop(1)
0x3e0: @@ ClearReplies()
0x3e1: Pop(0)
0x3e2: Push((int) 536510)
0x3e3: Push((int) 38298)
0x3e4: Push((int) 38311)
0x3e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e6: Pop(3)
0x3e7: Return(); Pop(0)

0x3e8: Push((int) 38296)
0x3e9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ea: IF (Stack[-1] == 0) GOTO 0x3fa; Pop(1)

0x3eb: PushEmpty(string)
0x3ec: Stack[-1] = "Rage"
0x3ed: Call2 0x2a8

0x3ee: Pop(1)
0x3ef: Push((int) 536496)
0x3f0: @@ SetMessage(Stack[-1])
0x3f1: Pop(1)
0x3f2: @@ ClearReplies()
0x3f3: Pop(0)
0x3f4: Push((int) 536497)
0x3f5: Push((int) 38298)
0x3f6: Push((int) 38297)
0x3f7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f8: Pop(3)
0x3f9: Return(); Pop(0)

0x3fa: Push((int) 38298)
0x3fb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3fc: IF (Stack[-1] == 0) GOTO 0x40c; Pop(1)

0x3fd: PushEmpty(string)
0x3fe: Stack[-1] = "Declaim"
0x3ff: Call2 0x2a8

0x400: Pop(1)
0x401: Push((int) 536498)
0x402: @@ SetMessage(Stack[-1])
0x403: Pop(1)
0x404: @@ ClearReplies()
0x405: Pop(0)
0x406: Push((int) 536499)
0x407: Push((int) 38300)
0x408: Push((int) 38299)
0x409: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x40a: Pop(3)
0x40b: Return(); Pop(0)

0x40c: Push((int) 38300)
0x40d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x40e: IF (Stack[-1] == 0) GOTO 0x423; Pop(1)

0x40f: PushEmpty(string)
0x410: Stack[-1] = "Declaim"
0x411: Call2 0x2a8

0x412: Pop(1)
0x413: Push((int) 536500)
0x414: @@ SetMessage(Stack[-1])
0x415: Pop(1)
0x416: @@ ClearReplies()
0x417: Pop(0)
0x418: Push((int) 536501)
0x419: Push((int) 38302)
0x41a: Push((int) 38301)
0x41b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x41c: Pop(3)
0x41d: Push((int) 536511)
0x41e: Push((int) 38304)
0x41f: Push((int) 38313)
0x420: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x421: Pop(3)
0x422: Return(); Pop(0)

0x423: Push((int) 38302)
0x424: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x425: IF (Stack[-1] == 0) GOTO 0x435; Pop(1)

0x426: PushEmpty(string)
0x427: Stack[-1] = "Rage"
0x428: Call2 0x2a8

0x429: Pop(1)
0x42a: Push((int) 536502)
0x42b: @@ SetMessage(Stack[-1])
0x42c: Pop(1)
0x42d: @@ ClearReplies()
0x42e: Pop(0)
0x42f: Push((int) 536503)
0x430: Push((int) 38304)
0x431: Push((int) 38303)
0x432: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x433: Pop(3)
0x434: Return(); Pop(0)

0x435: Push((int) 38304)
0x436: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x437: IF (Stack[-1] == 0) GOTO 0x447; Pop(1)

0x438: PushEmpty(string)
0x439: Stack[-1] = "Rage"
0x43a: Call2 0x2a8

0x43b: Pop(1)
0x43c: Push((int) 536504)
0x43d: @@ SetMessage(Stack[-1])
0x43e: Pop(1)
0x43f: @@ ClearReplies()
0x440: Pop(0)
0x441: Push((int) 534128)
0x442: Push((int) -1)
0x443: Push((int) 35715)
0x444: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x445: Pop(3)
0x446: Return(); Pop(0)

0x447: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x448: PushEmpty(bool)
0x449: Call2 0xd9d

0x44a: Pop(0)
0x44b: IF (Stack[-1] == 0) GOTO 0x44f; Pop(1)

0x44c: @ lshStopAnimation()
0x44d: Pop(0)
0x44e: GOTO 0x451

0x44f: @ StopAnimation()
0x450: Pop(0)
0x451: Return(); Pop(0)

0x452: GOTO 0x2bf

0x453: Return(); Pop(0)

0x454: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x455: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x456: PushEmpty(bool, object, float)
0x457: Stack[-2] = Stack[-12]
0x458: Stack[-1] = (float) 70.0
0x459: Call2 0xc0a

0x45a: Pop(2)
0x45b: Pop(1); Push((bool) Stack[-1] == 0)
0x45c: IF (Stack[-1] == 0) GOTO 0x45f; Pop(1)

0x45d: Stack[-10] = (int) -2
0x45e: Return(); Pop(8)

0x45f: @ CreateDialog(Stack[-4])
0x460: Pop(0)
0x461: PushEmpty(int)
0x462: Call2 0xd97

0x463: Pop(0)
0x464: @@ SetNPCName(Stack[-1])
0x465: Pop(1)
0x466: PushEmpty(int)
0x467: Call2 0xd95

0x468: Pop(0)
0x469: @@ SetNPCDescription(Stack[-1])
0x46a: Pop(1)
0x46b: PushEmpty(string)
0x46c: Call2 0xd99

0x46d: Pop(0)
0x46e: @@ SetPhoto(Stack[-1])
0x46f: Pop(1)
0x470: PushEmpty(string)
0x471: Call2 0xd9b

0x472: Pop(0)
0x473: @@ SetPhoto2(Stack[-1])
0x474: Pop(1)
0x475: PushEmpty(int)
0x476: Call2 0xf43

0x477: Pop(0)
0x478: @@ SetPlayerName(Stack[-1])
0x479: Pop(1)
0x47a: Stack[-2] = (int) -1
0x47b: @ IsOverrideActive(Stack[-3])
0x47c: Pop(0)
0x47d: Push(Stack[-3])
0x47e: IF (Stack[-1] == 0) GOTO 0x481; Pop(1)

0x47f: Stack[-10] = (int) -2
0x480: Return(); Pop(8)

0x481: @ DoDialog(Stack[-4])
0x482: Pop(0)
0x483: PushEmpty(bool, object)
0x484: PushEmpty(object)
0x485: Call2 0xd1e

0x486: Stack[-2] = Stack[-1]
0x487: Pop(1)
0x488: Call2 0xc5f

0x489: Pop(2)
0x48a: PushEmpty(object, object)
0x48b: Stack[-2] = Stack[-11]
0x48c: Stack[-1] = Stack[-6]
0x48d: Push(-2, 4); TaskCall(5)
0x48e: Call2 0x4a5

0x48f: Pop(-2, 4); TaskReturn
0x490: Pop(2)
0x491: @@ IsDialogEnd(Stack[-1])
0x492: Pop(0)
0x493: Pop(0); Push((bool) Stack[-1] == 0)
0x494: IF (Stack[-1] == 0) GOTO 0x49a; Pop(1)

0x495: @ sync()
0x496: Pop(0)
0x497: @@ IsDialogEnd(Stack[-1])
0x498: Pop(0)
0x499: GOTO 0x493

0x49a: PushEmpty(object)
0x49b: Stack[-1] = Stack[-10]
0x49c: Call2 0xc4e

0x49d: Pop(1)
0x49e: @ StopDialog(Stack[-4])
0x49f: Pop(0)
0x4a0: @@ GetReturnValue(Stack[-2])
0x4a1: Pop(0)
0x4a2: Stack[-10] = Stack[-2]
0x4a3: Return(); Pop(8)

0x4a4: Stack[-4] = 0
0x4a5: PushEmpty()
0x4a6: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4a7: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x4a8: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4a9: Push((int) 1)
0x4aa: IF (Stack[-1] == 0) GOTO 0x4c6; Pop(1)

0x4ab: PushEmpty(string)
0x4ac: Stack[-1] = "Declaim"
0x4ad: Call2 0x4e4

0x4ae: Pop(1)
0x4af: Push((int) 535680)
0x4b0: @@ SetMessage(Stack[-1])
0x4b1: Pop(1)
0x4b2: @@ ClearReplies()
0x4b3: Pop(0)
0x4b4: Push((int) 535681)
0x4b5: Push((int) 42137)
0x4b6: Push((int) 37367)
0x4b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b8: Pop(3)
0x4b9: Push((int) 540004)
0x4ba: Push((int) -1)
0x4bb: Push((int) 41975)
0x4bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4bd: Pop(3)
0x4be: Push((int) 540218)
0x4bf: Push((int) -1)
0x4c0: Push((int) 42198)
0x4c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4c2: Pop(3)
0x4c3: GOTO 0x4c6

0x4c4: Return(); Pop(0)

0x4c5: GOTO 0x4a9

0x4c6: PushEmpty(bool)
0x4c7: Call2 0xd9d

0x4c8: Pop(0)
0x4c9: IF (Stack[-1] == 0) GOTO 0x4d5; Pop(1)

0x4ca: @ lshWaitForAnimEnd()
0x4cb: Pop(0)
0x4cc: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4cd: IF (Stack[-1] == 0) GOTO 0x4cf; Pop(1)

0x4ce: GOTO 0x4d4

0x4cf: PushEmpty(string)
0x4d0: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x4d1: Call2 0xce9

0x4d2: Pop(1)
0x4d3: GOTO 0x4ca

0x4d4: GOTO 0x4e3

0x4d5: Push("all")
0x4d6: Push("idle")
0x4d7: @ PlayAnimation(Stack[-2], Stack[-1])
0x4d8: Pop(2)
0x4d9: @ WaitForAnimEnd()
0x4da: Pop(0)
0x4db: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4dc: IF (Stack[-1] == 0) GOTO 0x4de; Pop(1)

0x4dd: GOTO 0x4e3

0x4de: Push("all")
0x4df: Push("idle")
0x4e0: @ PlayAnimation(Stack[-2], Stack[-1])
0x4e1: Pop(2)
0x4e2: GOTO 0x4d9

0x4e3: Return(); Pop(0)

0x4e4: PushEmpty()
0x4e5: PushEmpty(bool)
0x4e6: Call2 0xd9d

0x4e7: Pop(0)
0x4e8: Pop(1); Push((bool) Stack[-1] == 0)
0x4e9: IF (Stack[-1] == 0) GOTO 0x4eb; Pop(1)

0x4ea: Return(); Pop(0)

0x4eb: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x4ec: IF (Stack[-1] == 0) GOTO 0x4ee; Pop(1)

0x4ed: Return(); Pop(0)

0x4ee: PushEmpty(string, bool)
0x4ef: Stack[-2] = Stack[-3]
0x4f0: Push("")
0x4f1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x4f2: IF (Stack[-1] == 0) GOTO 0x4f5; Pop(1)

0x4f3: Stack[-1] = (bool) 0
0x4f4: GOTO 0x4f6

0x4f5: Stack[-1] = (bool) 1
0x4f6: Call2 0xcf9

0x4f7: Pop(2)
0x4f8: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x4f9: Return(); Pop(0)

0x4fa: PushEmpty()
0x4fb: Push((int) 1)
0x4fc: IF (Stack[-1] == 0) GOTO 0x57f; Pop(1)

0x4fd: PushEmpty()
0x4fe: Call2 0xd17

0x4ff: Pop(0)
0x500: Push((int) 37366)
0x501: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x502: IF (Stack[-1] == 0) GOTO 0x51c; Pop(1)

0x503: PushEmpty(string)
0x504: Stack[-1] = "Declaim"
0x505: Call2 0x4e4

0x506: Pop(1)
0x507: Push((int) 535680)
0x508: @@ SetMessage(Stack[-1])
0x509: Pop(1)
0x50a: @@ ClearReplies()
0x50b: Pop(0)
0x50c: Push((int) 535681)
0x50d: Push((int) 42137)
0x50e: Push((int) 37367)
0x50f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x510: Pop(3)
0x511: Push((int) 540004)
0x512: Push((int) -1)
0x513: Push((int) 41975)
0x514: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x515: Pop(3)
0x516: Push((int) 540218)
0x517: Push((int) -1)
0x518: Push((int) 42198)
0x519: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x51a: Pop(3)
0x51b: Return(); Pop(0)

0x51c: Push((int) 42137)
0x51d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x51e: IF (Stack[-1] == 0) GOTO 0x533; Pop(1)

0x51f: PushEmpty(string)
0x520: Stack[-1] = "Declaim"
0x521: Call2 0x4e4

0x522: Pop(1)
0x523: Push((int) 540162)
0x524: @@ SetMessage(Stack[-1])
0x525: Pop(1)
0x526: @@ ClearReplies()
0x527: Pop(0)
0x528: Push((int) 540163)
0x529: Push((int) 42140)
0x52a: Push((int) 42138)
0x52b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x52c: Pop(3)
0x52d: Push((int) 540164)
0x52e: Push((int) 42140)
0x52f: Push((int) 42139)
0x530: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x531: Pop(3)
0x532: Return(); Pop(0)

0x533: Push((int) 42140)
0x534: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x535: IF (Stack[-1] == 0) GOTO 0x54a; Pop(1)

0x536: PushEmpty(string)
0x537: Stack[-1] = "Declaim"
0x538: Call2 0x4e4

0x539: Pop(1)
0x53a: Push((int) 540165)
0x53b: @@ SetMessage(Stack[-1])
0x53c: Pop(1)
0x53d: @@ ClearReplies()
0x53e: Pop(0)
0x53f: Push((int) 540166)
0x540: Push((int) 42144)
0x541: Push((int) 42142)
0x542: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x543: Pop(3)
0x544: Push((int) 540167)
0x545: Push((int) 42144)
0x546: Push((int) 42143)
0x547: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x548: Pop(3)
0x549: Return(); Pop(0)

0x54a: Push((int) 42144)
0x54b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x54c: IF (Stack[-1] == 0) GOTO 0x55c; Pop(1)

0x54d: PushEmpty(string)
0x54e: Stack[-1] = "Rage"
0x54f: Call2 0x4e4

0x550: Pop(1)
0x551: Push((int) 540168)
0x552: @@ SetMessage(Stack[-1])
0x553: Pop(1)
0x554: @@ ClearReplies()
0x555: Pop(0)
0x556: Push((int) 540169)
0x557: Push((int) 42147)
0x558: Push((int) 42146)
0x559: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x55a: Pop(3)
0x55b: Return(); Pop(0)

0x55c: Push((int) 42147)
0x55d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x55e: IF (Stack[-1] == 0) GOTO 0x573; Pop(1)

0x55f: PushEmpty(string)
0x560: Stack[-1] = "Rage"
0x561: Call2 0x4e4

0x562: Pop(1)
0x563: Push((int) 540170)
0x564: @@ SetMessage(Stack[-1])
0x565: Pop(1)
0x566: @@ ClearReplies()
0x567: Pop(0)
0x568: Push((int) 540171)
0x569: Push((int) -1)
0x56a: Push((int) 42148)
0x56b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x56c: Pop(3)
0x56d: Push((int) 540172)
0x56e: Push((int) -1)
0x56f: Push((int) 42149)
0x570: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x571: Pop(3)
0x572: Return(); Pop(0)

0x573: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x574: PushEmpty(bool)
0x575: Call2 0xd9d

0x576: Pop(0)
0x577: IF (Stack[-1] == 0) GOTO 0x57b; Pop(1)

0x578: @ lshStopAnimation()
0x579: Pop(0)
0x57a: GOTO 0x57d

0x57b: @ StopAnimation()
0x57c: Pop(0)
0x57d: Return(); Pop(0)

0x57e: GOTO 0x4fb

0x57f: Return(); Pop(0)

0x580: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x581: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x582: PushEmpty(bool, object, float)
0x583: Stack[-2] = Stack[-12]
0x584: Stack[-1] = (float) 70.0
0x585: Call2 0xc0a

0x586: Pop(2)
0x587: Pop(1); Push((bool) Stack[-1] == 0)
0x588: IF (Stack[-1] == 0) GOTO 0x58b; Pop(1)

0x589: Stack[-10] = (int) -2
0x58a: Return(); Pop(8)

0x58b: @ CreateDialog(Stack[-4])
0x58c: Pop(0)
0x58d: PushEmpty(int)
0x58e: Call2 0xd97

0x58f: Pop(0)
0x590: @@ SetNPCName(Stack[-1])
0x591: Pop(1)
0x592: PushEmpty(int)
0x593: Call2 0xd95

0x594: Pop(0)
0x595: @@ SetNPCDescription(Stack[-1])
0x596: Pop(1)
0x597: PushEmpty(string)
0x598: Call2 0xd99

0x599: Pop(0)
0x59a: @@ SetPhoto(Stack[-1])
0x59b: Pop(1)
0x59c: PushEmpty(string)
0x59d: Call2 0xd9b

0x59e: Pop(0)
0x59f: @@ SetPhoto2(Stack[-1])
0x5a0: Pop(1)
0x5a1: PushEmpty(int)
0x5a2: Call2 0xf43

0x5a3: Pop(0)
0x5a4: @@ SetPlayerName(Stack[-1])
0x5a5: Pop(1)
0x5a6: Stack[-2] = (int) -1
0x5a7: @ IsOverrideActive(Stack[-3])
0x5a8: Pop(0)
0x5a9: Push(Stack[-3])
0x5aa: IF (Stack[-1] == 0) GOTO 0x5ad; Pop(1)

0x5ab: Stack[-10] = (int) -2
0x5ac: Return(); Pop(8)

0x5ad: @ DoDialog(Stack[-4])
0x5ae: Pop(0)
0x5af: PushEmpty(bool, object)
0x5b0: PushEmpty(object)
0x5b1: Call2 0xd1e

0x5b2: Stack[-2] = Stack[-1]
0x5b3: Pop(1)
0x5b4: Call2 0xc5f

0x5b5: Pop(2)
0x5b6: PushEmpty(object, object)
0x5b7: Stack[-2] = Stack[-11]
0x5b8: Stack[-1] = Stack[-6]
0x5b9: Push(-2, 4); TaskCall(7)
0x5ba: Call2 0x5d1

0x5bb: Pop(-2, 4); TaskReturn
0x5bc: Pop(2)
0x5bd: @@ IsDialogEnd(Stack[-1])
0x5be: Pop(0)
0x5bf: Pop(0); Push((bool) Stack[-1] == 0)
0x5c0: IF (Stack[-1] == 0) GOTO 0x5c6; Pop(1)

0x5c1: @ sync()
0x5c2: Pop(0)
0x5c3: @@ IsDialogEnd(Stack[-1])
0x5c4: Pop(0)
0x5c5: GOTO 0x5bf

0x5c6: PushEmpty(object)
0x5c7: Stack[-1] = Stack[-10]
0x5c8: Call2 0xc4e

0x5c9: Pop(1)
0x5ca: @ StopDialog(Stack[-4])
0x5cb: Pop(0)
0x5cc: @@ GetReturnValue(Stack[-2])
0x5cd: Pop(0)
0x5ce: Stack[-10] = Stack[-2]
0x5cf: Return(); Pop(8)

0x5d0: Stack[-4] = 0
0x5d1: PushEmpty()
0x5d2: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x5d3: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x5d4: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x5d5: Push((int) 1)
0x5d6: IF (Stack[-1] == 0) GOTO 0x5f2; Pop(1)

0x5d7: PushEmpty(object, object)
0x5d8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5d9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5da: Call2 0xe33

0x5db: Pop(2)
0x5dc: PushEmpty(string)
0x5dd: Stack[-1] = "Declaim"
0x5de: Call2 0x610

0x5df: Pop(1)
0x5e0: Push((int) 500424)
0x5e1: @@ SetMessage(Stack[-1])
0x5e2: Pop(1)
0x5e3: @@ ClearReplies()
0x5e4: Pop(0)
0x5e5: Push((int) 500425)
0x5e6: Push((int) 494)
0x5e7: Push((int) 493)
0x5e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5e9: Pop(3)
0x5ea: Push((int) 500429)
0x5eb: Push((int) 498)
0x5ec: Push((int) 497)
0x5ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ee: Pop(3)
0x5ef: GOTO 0x5f2

0x5f0: Return(); Pop(0)

0x5f1: GOTO 0x5d5

0x5f2: PushEmpty(bool)
0x5f3: Call2 0xd9d

0x5f4: Pop(0)
0x5f5: IF (Stack[-1] == 0) GOTO 0x601; Pop(1)

0x5f6: @ lshWaitForAnimEnd()
0x5f7: Pop(0)
0x5f8: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5f9: IF (Stack[-1] == 0) GOTO 0x5fb; Pop(1)

0x5fa: GOTO 0x600

0x5fb: PushEmpty(string)
0x5fc: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x5fd: Call2 0xce9

0x5fe: Pop(1)
0x5ff: GOTO 0x5f6

0x600: GOTO 0x60f

0x601: Push("all")
0x602: Push("idle")
0x603: @ PlayAnimation(Stack[-2], Stack[-1])
0x604: Pop(2)
0x605: @ WaitForAnimEnd()
0x606: Pop(0)
0x607: Push( Stack[3 + Tasks[-1].StackPointer] )
0x608: IF (Stack[-1] == 0) GOTO 0x60a; Pop(1)

0x609: GOTO 0x60f

0x60a: Push("all")
0x60b: Push("idle")
0x60c: @ PlayAnimation(Stack[-2], Stack[-1])
0x60d: Pop(2)
0x60e: GOTO 0x605

0x60f: Return(); Pop(0)

0x610: PushEmpty()
0x611: PushEmpty(bool)
0x612: Call2 0xd9d

0x613: Pop(0)
0x614: Pop(1); Push((bool) Stack[-1] == 0)
0x615: IF (Stack[-1] == 0) GOTO 0x617; Pop(1)

0x616: Return(); Pop(0)

0x617: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x618: IF (Stack[-1] == 0) GOTO 0x61a; Pop(1)

0x619: Return(); Pop(0)

0x61a: PushEmpty(string, bool)
0x61b: Stack[-2] = Stack[-3]
0x61c: Push("")
0x61d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x61e: IF (Stack[-1] == 0) GOTO 0x621; Pop(1)

0x61f: Stack[-1] = (bool) 0
0x620: GOTO 0x622

0x621: Stack[-1] = (bool) 1
0x622: Call2 0xcf9

0x623: Pop(2)
0x624: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x625: Return(); Pop(0)

0x626: PushEmpty()
0x627: Push((int) 1)
0x628: IF (Stack[-1] == 0) GOTO 0x6b0; Pop(1)

0x629: PushEmpty()
0x62a: Call2 0xd17

0x62b: Pop(0)
0x62c: Push((int) 492)
0x62d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x62e: IF (Stack[-1] == 0) GOTO 0x648; Pop(1)

0x62f: PushEmpty(object, object)
0x630: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x631: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x632: Call2 0xe33

0x633: Pop(2)
0x634: PushEmpty(string)
0x635: Stack[-1] = "Declaim"
0x636: Call2 0x610

0x637: Pop(1)
0x638: Push((int) 500424)
0x639: @@ SetMessage(Stack[-1])
0x63a: Pop(1)
0x63b: @@ ClearReplies()
0x63c: Pop(0)
0x63d: Push((int) 500425)
0x63e: Push((int) 494)
0x63f: Push((int) 493)
0x640: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x641: Pop(3)
0x642: Push((int) 500429)
0x643: Push((int) 498)
0x644: Push((int) 497)
0x645: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x646: Pop(3)
0x647: Return(); Pop(0)

0x648: Push((int) 498)
0x649: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x64a: IF (Stack[-1] == 0) GOTO 0x65f; Pop(1)

0x64b: PushEmpty(string)
0x64c: Stack[-1] = "Shyness"
0x64d: Call2 0x610

0x64e: Pop(1)
0x64f: Push((int) 500430)
0x650: @@ SetMessage(Stack[-1])
0x651: Pop(1)
0x652: @@ ClearReplies()
0x653: Pop(0)
0x654: Push((int) 500431)
0x655: Push((int) 501)
0x656: Push((int) 499)
0x657: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x658: Pop(3)
0x659: Push((int) 500432)
0x65a: Push((int) 494)
0x65b: Push((int) 500)
0x65c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x65d: Pop(3)
0x65e: Return(); Pop(0)

0x65f: Push((int) 501)
0x660: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x661: IF (Stack[-1] == 0) GOTO 0x676; Pop(1)

0x662: PushEmpty(string)
0x663: Stack[-1] = "Shyness"
0x664: Call2 0x610

0x665: Pop(1)
0x666: Push((int) 500433)
0x667: @@ SetMessage(Stack[-1])
0x668: Pop(1)
0x669: @@ ClearReplies()
0x66a: Pop(0)
0x66b: Push((int) 500435)
0x66c: Push((int) -1)
0x66d: Push((int) 503)
0x66e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x66f: Pop(3)
0x670: Push((int) 500434)
0x671: Push((int) -1)
0x672: Push((int) 502)
0x673: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x674: Pop(3)
0x675: Return(); Pop(0)

0x676: Push((int) 494)
0x677: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x678: IF (Stack[-1] == 0) GOTO 0x68d; Pop(1)

0x679: PushEmpty(string)
0x67a: Stack[-1] = "Declaim"
0x67b: Call2 0x610

0x67c: Pop(1)
0x67d: Push((int) 500426)
0x67e: @@ SetMessage(Stack[-1])
0x67f: Pop(1)
0x680: @@ ClearReplies()
0x681: Pop(0)
0x682: Push((int) 500427)
0x683: Push((int) 504)
0x684: Push((int) 495)
0x685: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x686: Pop(3)
0x687: Push((int) 500438)
0x688: Push((int) -1)
0x689: Push((int) 506)
0x68a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x68b: Pop(3)
0x68c: Return(); Pop(0)

0x68d: Push((int) 504)
0x68e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x68f: IF (Stack[-1] == 0) GOTO 0x6a4; Pop(1)

0x690: PushEmpty(string)
0x691: Stack[-1] = "Declaim"
0x692: Call2 0x610

0x693: Pop(1)
0x694: Push((int) 500436)
0x695: @@ SetMessage(Stack[-1])
0x696: Pop(1)
0x697: @@ ClearReplies()
0x698: Pop(0)
0x699: Push((int) 500437)
0x69a: Push((int) 501)
0x69b: Push((int) 505)
0x69c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69d: Pop(3)
0x69e: Push((int) 500439)
0x69f: Push((int) -1)
0x6a0: Push((int) 508)
0x6a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6a2: Pop(3)
0x6a3: Return(); Pop(0)

0x6a4: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x6a5: PushEmpty(bool)
0x6a6: Call2 0xd9d

0x6a7: Pop(0)
0x6a8: IF (Stack[-1] == 0) GOTO 0x6ac; Pop(1)

0x6a9: @ lshStopAnimation()
0x6aa: Pop(0)
0x6ab: GOTO 0x6ae

0x6ac: @ StopAnimation()
0x6ad: Pop(0)
0x6ae: Return(); Pop(0)

0x6af: GOTO 0x627

0x6b0: Return(); Pop(0)

0x6b1: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x6b2: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x6b3: PushEmpty(bool, object, float)
0x6b4: Stack[-2] = Stack[-12]
0x6b5: Stack[-1] = (float) 70.0
0x6b6: Call2 0xc0a

0x6b7: Pop(2)
0x6b8: Pop(1); Push((bool) Stack[-1] == 0)
0x6b9: IF (Stack[-1] == 0) GOTO 0x6bc; Pop(1)

0x6ba: Stack[-10] = (int) -2
0x6bb: Return(); Pop(8)

0x6bc: @ CreateDialog(Stack[-4])
0x6bd: Pop(0)
0x6be: PushEmpty(int)
0x6bf: Call2 0xd97

0x6c0: Pop(0)
0x6c1: @@ SetNPCName(Stack[-1])
0x6c2: Pop(1)
0x6c3: PushEmpty(int)
0x6c4: Call2 0xd95

0x6c5: Pop(0)
0x6c6: @@ SetNPCDescription(Stack[-1])
0x6c7: Pop(1)
0x6c8: PushEmpty(string)
0x6c9: Call2 0xd99

0x6ca: Pop(0)
0x6cb: @@ SetPhoto(Stack[-1])
0x6cc: Pop(1)
0x6cd: PushEmpty(string)
0x6ce: Call2 0xd9b

0x6cf: Pop(0)
0x6d0: @@ SetPhoto2(Stack[-1])
0x6d1: Pop(1)
0x6d2: PushEmpty(int)
0x6d3: Call2 0xf43

0x6d4: Pop(0)
0x6d5: @@ SetPlayerName(Stack[-1])
0x6d6: Pop(1)
0x6d7: Stack[-2] = (int) -1
0x6d8: @ IsOverrideActive(Stack[-3])
0x6d9: Pop(0)
0x6da: Push(Stack[-3])
0x6db: IF (Stack[-1] == 0) GOTO 0x6de; Pop(1)

0x6dc: Stack[-10] = (int) -2
0x6dd: Return(); Pop(8)

0x6de: @ DoDialog(Stack[-4])
0x6df: Pop(0)
0x6e0: PushEmpty(bool, object)
0x6e1: PushEmpty(object)
0x6e2: Call2 0xd1e

0x6e3: Stack[-2] = Stack[-1]
0x6e4: Pop(1)
0x6e5: Call2 0xc5f

0x6e6: Pop(2)
0x6e7: PushEmpty(object, object)
0x6e8: Stack[-2] = Stack[-11]
0x6e9: Stack[-1] = Stack[-6]
0x6ea: Push(-2, 4); TaskCall(9)
0x6eb: Call2 0x702

0x6ec: Pop(-2, 4); TaskReturn
0x6ed: Pop(2)
0x6ee: @@ IsDialogEnd(Stack[-1])
0x6ef: Pop(0)
0x6f0: Pop(0); Push((bool) Stack[-1] == 0)
0x6f1: IF (Stack[-1] == 0) GOTO 0x6f7; Pop(1)

0x6f2: @ sync()
0x6f3: Pop(0)
0x6f4: @@ IsDialogEnd(Stack[-1])
0x6f5: Pop(0)
0x6f6: GOTO 0x6f0

0x6f7: PushEmpty(object)
0x6f8: Stack[-1] = Stack[-10]
0x6f9: Call2 0xc4e

0x6fa: Pop(1)
0x6fb: @ StopDialog(Stack[-4])
0x6fc: Pop(0)
0x6fd: @@ GetReturnValue(Stack[-2])
0x6fe: Pop(0)
0x6ff: Stack[-10] = Stack[-2]
0x700: Return(); Pop(8)

0x701: Stack[-4] = 0
0x702: PushEmpty()
0x703: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x704: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x705: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x706: Push((int) 1)
0x707: IF (Stack[-1] == 0) GOTO 0x723; Pop(1)

0x708: PushEmpty(string)
0x709: Stack[-1] = "Rage"
0x70a: Call2 0x741

0x70b: Pop(1)
0x70c: Push((int) 509489)
0x70d: @@ SetMessage(Stack[-1])
0x70e: Pop(1)
0x70f: @@ ClearReplies()
0x710: Pop(0)
0x711: PushEmpty(bool, object)
0x712: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x713: Call2 0xe5d

0x714: Pop(1)
0x715: IF (Stack[-1] == 0) GOTO 0x71b; Pop(1)

0x716: Push((int) 509490)
0x717: Push((int) 10433)
0x718: Push((int) 10432)
0x719: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x71a: Pop(3)
0x71b: Push((int) 509499)
0x71c: Push((int) -1)
0x71d: Push((int) 10441)
0x71e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x71f: Pop(3)
0x720: GOTO 0x723

0x721: Return(); Pop(0)

0x722: GOTO 0x706

0x723: PushEmpty(bool)
0x724: Call2 0xd9d

0x725: Pop(0)
0x726: IF (Stack[-1] == 0) GOTO 0x732; Pop(1)

0x727: @ lshWaitForAnimEnd()
0x728: Pop(0)
0x729: Push( Stack[3 + Tasks[-1].StackPointer] )
0x72a: IF (Stack[-1] == 0) GOTO 0x72c; Pop(1)

0x72b: GOTO 0x731

0x72c: PushEmpty(string)
0x72d: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x72e: Call2 0xce9

0x72f: Pop(1)
0x730: GOTO 0x727

0x731: GOTO 0x740

0x732: Push("all")
0x733: Push("idle")
0x734: @ PlayAnimation(Stack[-2], Stack[-1])
0x735: Pop(2)
0x736: @ WaitForAnimEnd()
0x737: Pop(0)
0x738: Push( Stack[3 + Tasks[-1].StackPointer] )
0x739: IF (Stack[-1] == 0) GOTO 0x73b; Pop(1)

0x73a: GOTO 0x740

0x73b: Push("all")
0x73c: Push("idle")
0x73d: @ PlayAnimation(Stack[-2], Stack[-1])
0x73e: Pop(2)
0x73f: GOTO 0x736

0x740: Return(); Pop(0)

0x741: PushEmpty()
0x742: PushEmpty(bool)
0x743: Call2 0xd9d

0x744: Pop(0)
0x745: Pop(1); Push((bool) Stack[-1] == 0)
0x746: IF (Stack[-1] == 0) GOTO 0x748; Pop(1)

0x747: Return(); Pop(0)

0x748: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x749: IF (Stack[-1] == 0) GOTO 0x74b; Pop(1)

0x74a: Return(); Pop(0)

0x74b: PushEmpty(string, bool)
0x74c: Stack[-2] = Stack[-3]
0x74d: Push("")
0x74e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x74f: IF (Stack[-1] == 0) GOTO 0x752; Pop(1)

0x750: Stack[-1] = (bool) 0
0x751: GOTO 0x753

0x752: Stack[-1] = (bool) 1
0x753: Call2 0xcf9

0x754: Pop(2)
0x755: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x756: Return(); Pop(0)

0x757: PushEmpty()
0x758: Push((int) 1)
0x759: IF (Stack[-1] == 0) GOTO 0x7cd; Pop(1)

0x75a: PushEmpty()
0x75b: Call2 0xd17

0x75c: Pop(0)
0x75d: Push((int) 10432)
0x75e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x75f: IF (Stack[-1] == 0) GOTO 0x765; Pop(1)

0x760: PushEmpty(object, object)
0x761: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x762: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x763: Call2 0xdec

0x764: Pop(2)
0x765: Push((int) 10431)
0x766: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x767: IF (Stack[-1] == 0) GOTO 0x781; Pop(1)

0x768: PushEmpty(string)
0x769: Stack[-1] = "Rage"
0x76a: Call2 0x741

0x76b: Pop(1)
0x76c: Push((int) 509489)
0x76d: @@ SetMessage(Stack[-1])
0x76e: Pop(1)
0x76f: @@ ClearReplies()
0x770: Pop(0)
0x771: PushEmpty(bool, object)
0x772: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x773: Call2 0xe5d

0x774: Pop(1)
0x775: IF (Stack[-1] == 0) GOTO 0x77b; Pop(1)

0x776: Push((int) 509490)
0x777: Push((int) 10433)
0x778: Push((int) 10432)
0x779: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x77a: Pop(3)
0x77b: Push((int) 509499)
0x77c: Push((int) -1)
0x77d: Push((int) 10441)
0x77e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x77f: Pop(3)
0x780: Return(); Pop(0)

0x781: Push((int) 10433)
0x782: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x783: IF (Stack[-1] == 0) GOTO 0x798; Pop(1)

0x784: PushEmpty(string)
0x785: Stack[-1] = "Rage"
0x786: Call2 0x741

0x787: Pop(1)
0x788: Push((int) 509491)
0x789: @@ SetMessage(Stack[-1])
0x78a: Pop(1)
0x78b: @@ ClearReplies()
0x78c: Pop(0)
0x78d: Push((int) 509492)
0x78e: Push((int) 10435)
0x78f: Push((int) 10434)
0x790: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x791: Pop(3)
0x792: Push((int) 509496)
0x793: Push((int) 10439)
0x794: Push((int) 10438)
0x795: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x796: Pop(3)
0x797: Return(); Pop(0)

0x798: Push((int) 10439)
0x799: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x79a: IF (Stack[-1] == 0) GOTO 0x7aa; Pop(1)

0x79b: PushEmpty(string)
0x79c: Stack[-1] = "Rage"
0x79d: Call2 0x741

0x79e: Pop(1)
0x79f: Push((int) 509497)
0x7a0: @@ SetMessage(Stack[-1])
0x7a1: Pop(1)
0x7a2: @@ ClearReplies()
0x7a3: Pop(0)
0x7a4: Push((int) 509498)
0x7a5: Push((int) -1)
0x7a6: Push((int) 10440)
0x7a7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7a8: Pop(3)
0x7a9: Return(); Pop(0)

0x7aa: Push((int) 10435)
0x7ab: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7ac: IF (Stack[-1] == 0) GOTO 0x7c1; Pop(1)

0x7ad: PushEmpty(string)
0x7ae: Stack[-1] = "Rage"
0x7af: Call2 0x741

0x7b0: Pop(1)
0x7b1: Push((int) 509493)
0x7b2: @@ SetMessage(Stack[-1])
0x7b3: Pop(1)
0x7b4: @@ ClearReplies()
0x7b5: Pop(0)
0x7b6: Push((int) 509494)
0x7b7: Push((int) -1)
0x7b8: Push((int) 10436)
0x7b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ba: Pop(3)
0x7bb: Push((int) 509495)
0x7bc: Push((int) -1)
0x7bd: Push((int) 10437)
0x7be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7bf: Pop(3)
0x7c0: Return(); Pop(0)

0x7c1: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x7c2: PushEmpty(bool)
0x7c3: Call2 0xd9d

0x7c4: Pop(0)
0x7c5: IF (Stack[-1] == 0) GOTO 0x7c9; Pop(1)

0x7c6: @ lshStopAnimation()
0x7c7: Pop(0)
0x7c8: GOTO 0x7cb

0x7c9: @ StopAnimation()
0x7ca: Pop(0)
0x7cb: Return(); Pop(0)

0x7cc: GOTO 0x758

0x7cd: Return(); Pop(0)

0x7ce: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x7cf: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x7d0: PushEmpty(bool, object, float)
0x7d1: Stack[-2] = Stack[-12]
0x7d2: Stack[-1] = (float) 70.0
0x7d3: Call2 0xc0a

0x7d4: Pop(2)
0x7d5: Pop(1); Push((bool) Stack[-1] == 0)
0x7d6: IF (Stack[-1] == 0) GOTO 0x7d9; Pop(1)

0x7d7: Stack[-10] = (int) -2
0x7d8: Return(); Pop(8)

0x7d9: @ CreateDialog(Stack[-4])
0x7da: Pop(0)
0x7db: PushEmpty(int)
0x7dc: Call2 0xd97

0x7dd: Pop(0)
0x7de: @@ SetNPCName(Stack[-1])
0x7df: Pop(1)
0x7e0: PushEmpty(int)
0x7e1: Call2 0xd95

0x7e2: Pop(0)
0x7e3: @@ SetNPCDescription(Stack[-1])
0x7e4: Pop(1)
0x7e5: PushEmpty(string)
0x7e6: Call2 0xd99

0x7e7: Pop(0)
0x7e8: @@ SetPhoto(Stack[-1])
0x7e9: Pop(1)
0x7ea: PushEmpty(string)
0x7eb: Call2 0xd9b

0x7ec: Pop(0)
0x7ed: @@ SetPhoto2(Stack[-1])
0x7ee: Pop(1)
0x7ef: PushEmpty(int)
0x7f0: Call2 0xf43

0x7f1: Pop(0)
0x7f2: @@ SetPlayerName(Stack[-1])
0x7f3: Pop(1)
0x7f4: Stack[-2] = (int) -1
0x7f5: @ IsOverrideActive(Stack[-3])
0x7f6: Pop(0)
0x7f7: Push(Stack[-3])
0x7f8: IF (Stack[-1] == 0) GOTO 0x7fb; Pop(1)

0x7f9: Stack[-10] = (int) -2
0x7fa: Return(); Pop(8)

0x7fb: @ DoDialog(Stack[-4])
0x7fc: Pop(0)
0x7fd: PushEmpty(bool, object)
0x7fe: PushEmpty(object)
0x7ff: Call2 0xd1e

0x800: Stack[-2] = Stack[-1]
0x801: Pop(1)
0x802: Call2 0xc5f

0x803: Pop(2)
0x804: PushEmpty(object, object)
0x805: Stack[-2] = Stack[-11]
0x806: Stack[-1] = Stack[-6]
0x807: Push(-2, 4); TaskCall(11)
0x808: Call2 0x81f

0x809: Pop(-2, 4); TaskReturn
0x80a: Pop(2)
0x80b: @@ IsDialogEnd(Stack[-1])
0x80c: Pop(0)
0x80d: Pop(0); Push((bool) Stack[-1] == 0)
0x80e: IF (Stack[-1] == 0) GOTO 0x814; Pop(1)

0x80f: @ sync()
0x810: Pop(0)
0x811: @@ IsDialogEnd(Stack[-1])
0x812: Pop(0)
0x813: GOTO 0x80d

0x814: PushEmpty(object)
0x815: Stack[-1] = Stack[-10]
0x816: Call2 0xc4e

0x817: Pop(1)
0x818: @ StopDialog(Stack[-4])
0x819: Pop(0)
0x81a: @@ GetReturnValue(Stack[-2])
0x81b: Pop(0)
0x81c: Stack[-10] = Stack[-2]
0x81d: Return(); Pop(8)

0x81e: Stack[-4] = 0
0x81f: PushEmpty()
0x820: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x821: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x822: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x823: Push((int) 1)
0x824: IF (Stack[-1] == 0) GOTO 0x836; Pop(1)

0x825: PushEmpty(string)
0x826: Stack[-1] = "Neutral"
0x827: Call2 0x854

0x828: Pop(1)
0x829: Push((int) 510917)
0x82a: @@ SetMessage(Stack[-1])
0x82b: Pop(1)
0x82c: @@ ClearReplies()
0x82d: Pop(0)
0x82e: Push((int) 510918)
0x82f: Push((int) -1)
0x830: Push((int) 12067)
0x831: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x832: Pop(3)
0x833: GOTO 0x836

0x834: Return(); Pop(0)

0x835: GOTO 0x823

0x836: PushEmpty(bool)
0x837: Call2 0xd9d

0x838: Pop(0)
0x839: IF (Stack[-1] == 0) GOTO 0x845; Pop(1)

0x83a: @ lshWaitForAnimEnd()
0x83b: Pop(0)
0x83c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x83d: IF (Stack[-1] == 0) GOTO 0x83f; Pop(1)

0x83e: GOTO 0x844

0x83f: PushEmpty(string)
0x840: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x841: Call2 0xce9

0x842: Pop(1)
0x843: GOTO 0x83a

0x844: GOTO 0x853

0x845: Push("all")
0x846: Push("idle")
0x847: @ PlayAnimation(Stack[-2], Stack[-1])
0x848: Pop(2)
0x849: @ WaitForAnimEnd()
0x84a: Pop(0)
0x84b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x84c: IF (Stack[-1] == 0) GOTO 0x84e; Pop(1)

0x84d: GOTO 0x853

0x84e: Push("all")
0x84f: Push("idle")
0x850: @ PlayAnimation(Stack[-2], Stack[-1])
0x851: Pop(2)
0x852: GOTO 0x849

0x853: Return(); Pop(0)

0x854: PushEmpty()
0x855: PushEmpty(bool)
0x856: Call2 0xd9d

0x857: Pop(0)
0x858: Pop(1); Push((bool) Stack[-1] == 0)
0x859: IF (Stack[-1] == 0) GOTO 0x85b; Pop(1)

0x85a: Return(); Pop(0)

0x85b: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x85c: IF (Stack[-1] == 0) GOTO 0x85e; Pop(1)

0x85d: Return(); Pop(0)

0x85e: PushEmpty(string, bool)
0x85f: Stack[-2] = Stack[-3]
0x860: Push("")
0x861: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x862: IF (Stack[-1] == 0) GOTO 0x865; Pop(1)

0x863: Stack[-1] = (bool) 0
0x864: GOTO 0x866

0x865: Stack[-1] = (bool) 1
0x866: Call2 0xcf9

0x867: Pop(2)
0x868: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x869: Return(); Pop(0)

0x86a: PushEmpty()
0x86b: Push((int) 1)
0x86c: IF (Stack[-1] == 0) GOTO 0x88e; Pop(1)

0x86d: PushEmpty()
0x86e: Call2 0xd17

0x86f: Pop(0)
0x870: Push((int) 12066)
0x871: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x872: IF (Stack[-1] == 0) GOTO 0x882; Pop(1)

0x873: PushEmpty(string)
0x874: Stack[-1] = "Neutral"
0x875: Call2 0x854

0x876: Pop(1)
0x877: Push((int) 510917)
0x878: @@ SetMessage(Stack[-1])
0x879: Pop(1)
0x87a: @@ ClearReplies()
0x87b: Pop(0)
0x87c: Push((int) 510918)
0x87d: Push((int) -1)
0x87e: Push((int) 12067)
0x87f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x880: Pop(3)
0x881: Return(); Pop(0)

0x882: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x883: PushEmpty(bool)
0x884: Call2 0xd9d

0x885: Pop(0)
0x886: IF (Stack[-1] == 0) GOTO 0x88a; Pop(1)

0x887: @ lshStopAnimation()
0x888: Pop(0)
0x889: GOTO 0x88c

0x88a: @ StopAnimation()
0x88b: Pop(0)
0x88c: Return(); Pop(0)

0x88d: GOTO 0x86b

0x88e: Return(); Pop(0)

0x88f: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x890: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x891: PushEmpty(bool, object, float)
0x892: Stack[-2] = Stack[-12]
0x893: Stack[-1] = (float) 70.0
0x894: Call2 0xc0a

0x895: Pop(2)
0x896: Pop(1); Push((bool) Stack[-1] == 0)
0x897: IF (Stack[-1] == 0) GOTO 0x89a; Pop(1)

0x898: Stack[-10] = (int) -2
0x899: Return(); Pop(8)

0x89a: @ CreateDialog(Stack[-4])
0x89b: Pop(0)
0x89c: PushEmpty(int)
0x89d: Call2 0xd97

0x89e: Pop(0)
0x89f: @@ SetNPCName(Stack[-1])
0x8a0: Pop(1)
0x8a1: PushEmpty(int)
0x8a2: Call2 0xd95

0x8a3: Pop(0)
0x8a4: @@ SetNPCDescription(Stack[-1])
0x8a5: Pop(1)
0x8a6: PushEmpty(string)
0x8a7: Call2 0xd99

0x8a8: Pop(0)
0x8a9: @@ SetPhoto(Stack[-1])
0x8aa: Pop(1)
0x8ab: PushEmpty(string)
0x8ac: Call2 0xd9b

0x8ad: Pop(0)
0x8ae: @@ SetPhoto2(Stack[-1])
0x8af: Pop(1)
0x8b0: PushEmpty(int)
0x8b1: Call2 0xf43

0x8b2: Pop(0)
0x8b3: @@ SetPlayerName(Stack[-1])
0x8b4: Pop(1)
0x8b5: Stack[-2] = (int) -1
0x8b6: @ IsOverrideActive(Stack[-3])
0x8b7: Pop(0)
0x8b8: Push(Stack[-3])
0x8b9: IF (Stack[-1] == 0) GOTO 0x8bc; Pop(1)

0x8ba: Stack[-10] = (int) -2
0x8bb: Return(); Pop(8)

0x8bc: @ DoDialog(Stack[-4])
0x8bd: Pop(0)
0x8be: PushEmpty(bool, object)
0x8bf: PushEmpty(object)
0x8c0: Call2 0xd1e

0x8c1: Stack[-2] = Stack[-1]
0x8c2: Pop(1)
0x8c3: Call2 0xc5f

0x8c4: Pop(2)
0x8c5: PushEmpty(object, object)
0x8c6: Stack[-2] = Stack[-11]
0x8c7: Stack[-1] = Stack[-6]
0x8c8: Push(-2, 4); TaskCall(13)
0x8c9: Call2 0x8e0

0x8ca: Pop(-2, 4); TaskReturn
0x8cb: Pop(2)
0x8cc: @@ IsDialogEnd(Stack[-1])
0x8cd: Pop(0)
0x8ce: Pop(0); Push((bool) Stack[-1] == 0)
0x8cf: IF (Stack[-1] == 0) GOTO 0x8d5; Pop(1)

0x8d0: @ sync()
0x8d1: Pop(0)
0x8d2: @@ IsDialogEnd(Stack[-1])
0x8d3: Pop(0)
0x8d4: GOTO 0x8ce

0x8d5: PushEmpty(object)
0x8d6: Stack[-1] = Stack[-10]
0x8d7: Call2 0xc4e

0x8d8: Pop(1)
0x8d9: @ StopDialog(Stack[-4])
0x8da: Pop(0)
0x8db: @@ GetReturnValue(Stack[-2])
0x8dc: Pop(0)
0x8dd: Stack[-10] = Stack[-2]
0x8de: Return(); Pop(8)

0x8df: Stack[-4] = 0
0x8e0: PushEmpty()
0x8e1: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x8e2: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x8e3: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x8e4: Push((int) 1)
0x8e5: IF (Stack[-1] == 0) GOTO 0x91c; Pop(1)

0x8e6: PushEmpty(string)
0x8e7: Stack[-1] = "Neutral"
0x8e8: Call2 0x93a

0x8e9: Pop(1)
0x8ea: Push((int) 513312)
0x8eb: @@ SetMessage(Stack[-1])
0x8ec: Pop(1)
0x8ed: @@ ClearReplies()
0x8ee: Pop(0)
0x8ef: PushEmpty(bool)
0x8f0: Stack[-1] = (bool) 1
0x8f1: PushEmpty(bool)
0x8f2: Stack[-1] = (bool) 0
0x8f3: PushEmpty(bool, object)
0x8f4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8f5: Call2 0xe81

0x8f6: Pop(1)
0x8f7: IF (Stack[-1] == 0) GOTO 0x8fe; Pop(1)

0x8f8: PushEmpty(bool, object)
0x8f9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8fa: Call2 0xe75

0x8fb: Pop(1)
0x8fc: IF (Stack[-1] == 0) GOTO 0x8fe; Pop(1)

0x8fd: Stack[-1] = (bool) 1
0x8fe: IF (Stack[-1] == 0) GOTO 0x90e; Pop(1)

0x8ff: PushEmpty(bool)
0x900: Stack[-1] = (bool) 0
0x901: PushEmpty(bool, object)
0x902: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x903: Call2 0xe81

0x904: Pop(1)
0x905: IF (Stack[-1] == 0) GOTO 0x90c; Pop(1)

0x906: PushEmpty(bool, object)
0x907: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x908: Call2 0xe69

0x909: Pop(1)
0x90a: IF (Stack[-1] == 0) GOTO 0x90c; Pop(1)

0x90b: Stack[-1] = (bool) 1
0x90c: IF (Stack[-1] == 0) GOTO 0x90e; Pop(1)

0x90d: Stack[-1] = (bool) 0
0x90e: IF (Stack[-1] == 0) GOTO 0x914; Pop(1)

0x90f: Push((int) 513314)
0x910: Push((int) 14550)
0x911: Push((int) 14549)
0x912: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x913: Pop(3)
0x914: Push((int) 513313)
0x915: Push((int) -1)
0x916: Push((int) 14548)
0x917: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x918: Pop(3)
0x919: GOTO 0x91c

0x91a: Return(); Pop(0)

0x91b: GOTO 0x8e4

0x91c: PushEmpty(bool)
0x91d: Call2 0xd9d

0x91e: Pop(0)
0x91f: IF (Stack[-1] == 0) GOTO 0x92b; Pop(1)

0x920: @ lshWaitForAnimEnd()
0x921: Pop(0)
0x922: Push( Stack[3 + Tasks[-1].StackPointer] )
0x923: IF (Stack[-1] == 0) GOTO 0x925; Pop(1)

0x924: GOTO 0x92a

0x925: PushEmpty(string)
0x926: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x927: Call2 0xce9

0x928: Pop(1)
0x929: GOTO 0x920

0x92a: GOTO 0x939

0x92b: Push("all")
0x92c: Push("idle")
0x92d: @ PlayAnimation(Stack[-2], Stack[-1])
0x92e: Pop(2)
0x92f: @ WaitForAnimEnd()
0x930: Pop(0)
0x931: Push( Stack[3 + Tasks[-1].StackPointer] )
0x932: IF (Stack[-1] == 0) GOTO 0x934; Pop(1)

0x933: GOTO 0x939

0x934: Push("all")
0x935: Push("idle")
0x936: @ PlayAnimation(Stack[-2], Stack[-1])
0x937: Pop(2)
0x938: GOTO 0x92f

0x939: Return(); Pop(0)

0x93a: PushEmpty()
0x93b: PushEmpty(bool)
0x93c: Call2 0xd9d

0x93d: Pop(0)
0x93e: Pop(1); Push((bool) Stack[-1] == 0)
0x93f: IF (Stack[-1] == 0) GOTO 0x941; Pop(1)

0x940: Return(); Pop(0)

0x941: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x942: IF (Stack[-1] == 0) GOTO 0x944; Pop(1)

0x943: Return(); Pop(0)

0x944: PushEmpty(string, bool)
0x945: Stack[-2] = Stack[-3]
0x946: Push("")
0x947: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x948: IF (Stack[-1] == 0) GOTO 0x94b; Pop(1)

0x949: Stack[-1] = (bool) 0
0x94a: GOTO 0x94c

0x94b: Stack[-1] = (bool) 1
0x94c: Call2 0xcf9

0x94d: Pop(2)
0x94e: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x94f: Return(); Pop(0)

0x950: PushEmpty()
0x951: Push((int) 1)
0x952: IF (Stack[-1] == 0) GOTO 0xa17; Pop(1)

0x953: PushEmpty()
0x954: Call2 0xd17

0x955: Pop(0)
0x956: Push((int) 14570)
0x957: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x958: IF (Stack[-1] == 0) GOTO 0x95e; Pop(1)

0x959: PushEmpty(object, object)
0x95a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x95b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x95c: Call2 0xe07

0x95d: Pop(2)
0x95e: Push((int) 44071)
0x95f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x960: IF (Stack[-1] == 0) GOTO 0x96b; Pop(1)

0x961: PushEmpty(object, object)
0x962: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x963: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x964: Call2 0xe07

0x965: Pop(2)
0x966: PushEmpty(object, object)
0x967: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x968: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x969: Call2 0xdfc

0x96a: Pop(2)
0x96b: Push((int) 14547)
0x96c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x96d: IF (Stack[-1] == 0) GOTO 0x9a2; Pop(1)

0x96e: PushEmpty(string)
0x96f: Stack[-1] = "Neutral"
0x970: Call2 0x93a

0x971: Pop(1)
0x972: Push((int) 513312)
0x973: @@ SetMessage(Stack[-1])
0x974: Pop(1)
0x975: @@ ClearReplies()
0x976: Pop(0)
0x977: PushEmpty(bool)
0x978: Stack[-1] = (bool) 1
0x979: PushEmpty(bool)
0x97a: Stack[-1] = (bool) 0
0x97b: PushEmpty(bool, object)
0x97c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x97d: Call2 0xe81

0x97e: Pop(1)
0x97f: IF (Stack[-1] == 0) GOTO 0x986; Pop(1)

0x980: PushEmpty(bool, object)
0x981: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x982: Call2 0xe75

0x983: Pop(1)
0x984: IF (Stack[-1] == 0) GOTO 0x986; Pop(1)

0x985: Stack[-1] = (bool) 1
0x986: IF (Stack[-1] == 0) GOTO 0x996; Pop(1)

0x987: PushEmpty(bool)
0x988: Stack[-1] = (bool) 0
0x989: PushEmpty(bool, object)
0x98a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x98b: Call2 0xe81

0x98c: Pop(1)
0x98d: IF (Stack[-1] == 0) GOTO 0x994; Pop(1)

0x98e: PushEmpty(bool, object)
0x98f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x990: Call2 0xe69

0x991: Pop(1)
0x992: IF (Stack[-1] == 0) GOTO 0x994; Pop(1)

0x993: Stack[-1] = (bool) 1
0x994: IF (Stack[-1] == 0) GOTO 0x996; Pop(1)

0x995: Stack[-1] = (bool) 0
0x996: IF (Stack[-1] == 0) GOTO 0x99c; Pop(1)

0x997: Push((int) 513314)
0x998: Push((int) 14550)
0x999: Push((int) 14549)
0x99a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x99b: Pop(3)
0x99c: Push((int) 513313)
0x99d: Push((int) -1)
0x99e: Push((int) 14548)
0x99f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9a0: Pop(3)
0x9a1: Return(); Pop(0)

0x9a2: Push((int) 14550)
0x9a3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9a4: IF (Stack[-1] == 0) GOTO 0x9b9; Pop(1)

0x9a5: PushEmpty(string)
0x9a6: Stack[-1] = "Gasp"
0x9a7: Call2 0x93a

0x9a8: Pop(1)
0x9a9: Push((int) 513315)
0x9aa: @@ SetMessage(Stack[-1])
0x9ab: Pop(1)
0x9ac: @@ ClearReplies()
0x9ad: Pop(0)
0x9ae: Push((int) 513317)
0x9af: Push((int) 14553)
0x9b0: Push((int) 14552)
0x9b1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9b2: Pop(3)
0x9b3: Push((int) 513316)
0x9b4: Push((int) 14555)
0x9b5: Push((int) 14551)
0x9b6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9b7: Pop(3)
0x9b8: Return(); Pop(0)

0x9b9: Push((int) 14553)
0x9ba: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9bb: IF (Stack[-1] == 0) GOTO 0x9d0; Pop(1)

0x9bc: PushEmpty(string)
0x9bd: Stack[-1] = "Gasp"
0x9be: Call2 0x93a

0x9bf: Pop(1)
0x9c0: Push((int) 513318)
0x9c1: @@ SetMessage(Stack[-1])
0x9c2: Pop(1)
0x9c3: @@ ClearReplies()
0x9c4: Pop(0)
0x9c5: Push((int) 513319)
0x9c6: Push((int) 14555)
0x9c7: Push((int) 14554)
0x9c8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9c9: Pop(3)
0x9ca: Push((int) 541849)
0x9cb: Push((int) 14555)
0x9cc: Push((int) 44069)
0x9cd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9ce: Pop(3)
0x9cf: Return(); Pop(0)

0x9d0: Push((int) 14555)
0x9d1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9d2: IF (Stack[-1] == 0) GOTO 0x9e2; Pop(1)

0x9d3: PushEmpty(string)
0x9d4: Stack[-1] = "Rage"
0x9d5: Call2 0x93a

0x9d6: Pop(1)
0x9d7: Push((int) 513320)
0x9d8: @@ SetMessage(Stack[-1])
0x9d9: Pop(1)
0x9da: @@ ClearReplies()
0x9db: Pop(0)
0x9dc: Push((int) 513335)
0x9dd: Push((int) 14567)
0x9de: Push((int) 14566)
0x9df: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9e0: Pop(3)
0x9e1: Return(); Pop(0)

0x9e2: Push((int) 14567)
0x9e3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9e4: IF (Stack[-1] == 0) GOTO 0x9f4; Pop(1)

0x9e5: PushEmpty(string)
0x9e6: Stack[-1] = "Rage"
0x9e7: Call2 0x93a

0x9e8: Pop(1)
0x9e9: Push((int) 513336)
0x9ea: @@ SetMessage(Stack[-1])
0x9eb: Pop(1)
0x9ec: @@ ClearReplies()
0x9ed: Pop(0)
0x9ee: Push((int) 513337)
0x9ef: Push((int) 14569)
0x9f0: Push((int) 14568)
0x9f1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9f2: Pop(3)
0x9f3: Return(); Pop(0)

0x9f4: Push((int) 14569)
0x9f5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9f6: IF (Stack[-1] == 0) GOTO 0xa0b; Pop(1)

0x9f7: PushEmpty(string)
0x9f8: Stack[-1] = "Rage"
0x9f9: Call2 0x93a

0x9fa: Pop(1)
0x9fb: Push((int) 513338)
0x9fc: @@ SetMessage(Stack[-1])
0x9fd: Pop(1)
0x9fe: @@ ClearReplies()
0x9ff: Pop(0)
0xa00: Push((int) 513339)
0xa01: Push((int) -1)
0xa02: Push((int) 14570)
0xa03: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa04: Pop(3)
0xa05: Push((int) 541850)
0xa06: Push((int) -1)
0xa07: Push((int) 44071)
0xa08: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa09: Pop(3)
0xa0a: Return(); Pop(0)

0xa0b: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xa0c: PushEmpty(bool)
0xa0d: Call2 0xd9d

0xa0e: Pop(0)
0xa0f: IF (Stack[-1] == 0) GOTO 0xa13; Pop(1)

0xa10: @ lshStopAnimation()
0xa11: Pop(0)
0xa12: GOTO 0xa15

0xa13: @ StopAnimation()
0xa14: Pop(0)
0xa15: Return(); Pop(0)

0xa16: GOTO 0x951

0xa17: Return(); Pop(0)

0xa18: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xa19: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xa1a: PushEmpty(bool, object, float)
0xa1b: Stack[-2] = Stack[-12]
0xa1c: Stack[-1] = (float) 70.0
0xa1d: Call2 0xc0a

0xa1e: Pop(2)
0xa1f: Pop(1); Push((bool) Stack[-1] == 0)
0xa20: IF (Stack[-1] == 0) GOTO 0xa23; Pop(1)

0xa21: Stack[-10] = (int) -2
0xa22: Return(); Pop(8)

0xa23: @ CreateDialog(Stack[-4])
0xa24: Pop(0)
0xa25: PushEmpty(int)
0xa26: Call2 0xd97

0xa27: Pop(0)
0xa28: @@ SetNPCName(Stack[-1])
0xa29: Pop(1)
0xa2a: PushEmpty(int)
0xa2b: Call2 0xd95

0xa2c: Pop(0)
0xa2d: @@ SetNPCDescription(Stack[-1])
0xa2e: Pop(1)
0xa2f: PushEmpty(string)
0xa30: Call2 0xd99

0xa31: Pop(0)
0xa32: @@ SetPhoto(Stack[-1])
0xa33: Pop(1)
0xa34: PushEmpty(string)
0xa35: Call2 0xd9b

0xa36: Pop(0)
0xa37: @@ SetPhoto2(Stack[-1])
0xa38: Pop(1)
0xa39: PushEmpty(int)
0xa3a: Call2 0xf43

0xa3b: Pop(0)
0xa3c: @@ SetPlayerName(Stack[-1])
0xa3d: Pop(1)
0xa3e: Stack[-2] = (int) -1
0xa3f: @ IsOverrideActive(Stack[-3])
0xa40: Pop(0)
0xa41: Push(Stack[-3])
0xa42: IF (Stack[-1] == 0) GOTO 0xa45; Pop(1)

0xa43: Stack[-10] = (int) -2
0xa44: Return(); Pop(8)

0xa45: @ DoDialog(Stack[-4])
0xa46: Pop(0)
0xa47: PushEmpty(bool, object)
0xa48: PushEmpty(object)
0xa49: Call2 0xd1e

0xa4a: Stack[-2] = Stack[-1]
0xa4b: Pop(1)
0xa4c: Call2 0xc5f

0xa4d: Pop(2)
0xa4e: PushEmpty(object, object)
0xa4f: Stack[-2] = Stack[-11]
0xa50: Stack[-1] = Stack[-6]
0xa51: Push(-2, 4); TaskCall(15)
0xa52: Call2 0xa69

0xa53: Pop(-2, 4); TaskReturn
0xa54: Pop(2)
0xa55: @@ IsDialogEnd(Stack[-1])
0xa56: Pop(0)
0xa57: Pop(0); Push((bool) Stack[-1] == 0)
0xa58: IF (Stack[-1] == 0) GOTO 0xa5e; Pop(1)

0xa59: @ sync()
0xa5a: Pop(0)
0xa5b: @@ IsDialogEnd(Stack[-1])
0xa5c: Pop(0)
0xa5d: GOTO 0xa57

0xa5e: PushEmpty(object)
0xa5f: Stack[-1] = Stack[-10]
0xa60: Call2 0xc4e

0xa61: Pop(1)
0xa62: @ StopDialog(Stack[-4])
0xa63: Pop(0)
0xa64: @@ GetReturnValue(Stack[-2])
0xa65: Pop(0)
0xa66: Stack[-10] = Stack[-2]
0xa67: Return(); Pop(8)

0xa68: Stack[-4] = 0
0xa69: PushEmpty()
0xa6a: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xa6b: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xa6c: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xa6d: Push((int) 1)
0xa6e: IF (Stack[-1] == 0) GOTO 0xa85; Pop(1)

0xa6f: PushEmpty(string)
0xa70: Stack[-1] = "Neutral"
0xa71: Call2 0xaa3

0xa72: Pop(1)
0xa73: Push((int) 540542)
0xa74: @@ SetMessage(Stack[-1])
0xa75: Pop(1)
0xa76: @@ ClearReplies()
0xa77: Pop(0)
0xa78: Push((int) 540543)
0xa79: Push((int) -1)
0xa7a: Push((int) 42552)
0xa7b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa7c: Pop(3)
0xa7d: Push((int) 540796)
0xa7e: Push((int) -1)
0xa7f: Push((int) 42845)
0xa80: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa81: Pop(3)
0xa82: GOTO 0xa85

0xa83: Return(); Pop(0)

0xa84: GOTO 0xa6d

0xa85: PushEmpty(bool)
0xa86: Call2 0xd9d

0xa87: Pop(0)
0xa88: IF (Stack[-1] == 0) GOTO 0xa94; Pop(1)

0xa89: @ lshWaitForAnimEnd()
0xa8a: Pop(0)
0xa8b: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa8c: IF (Stack[-1] == 0) GOTO 0xa8e; Pop(1)

0xa8d: GOTO 0xa93

0xa8e: PushEmpty(string)
0xa8f: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa90: Call2 0xce9

0xa91: Pop(1)
0xa92: GOTO 0xa89

0xa93: GOTO 0xaa2

0xa94: Push("all")
0xa95: Push("idle")
0xa96: @ PlayAnimation(Stack[-2], Stack[-1])
0xa97: Pop(2)
0xa98: @ WaitForAnimEnd()
0xa99: Pop(0)
0xa9a: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa9b: IF (Stack[-1] == 0) GOTO 0xa9d; Pop(1)

0xa9c: GOTO 0xaa2

0xa9d: Push("all")
0xa9e: Push("idle")
0xa9f: @ PlayAnimation(Stack[-2], Stack[-1])
0xaa0: Pop(2)
0xaa1: GOTO 0xa98

0xaa2: Return(); Pop(0)

0xaa3: PushEmpty()
0xaa4: PushEmpty(bool)
0xaa5: Call2 0xd9d

0xaa6: Pop(0)
0xaa7: Pop(1); Push((bool) Stack[-1] == 0)
0xaa8: IF (Stack[-1] == 0) GOTO 0xaaa; Pop(1)

0xaa9: Return(); Pop(0)

0xaaa: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xaab: IF (Stack[-1] == 0) GOTO 0xaad; Pop(1)

0xaac: Return(); Pop(0)

0xaad: PushEmpty(string, bool)
0xaae: Stack[-2] = Stack[-3]
0xaaf: Push("")
0xab0: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xab1: IF (Stack[-1] == 0) GOTO 0xab4; Pop(1)

0xab2: Stack[-1] = (bool) 0
0xab3: GOTO 0xab5

0xab4: Stack[-1] = (bool) 1
0xab5: Call2 0xcf9

0xab6: Pop(2)
0xab7: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xab8: Return(); Pop(0)

0xab9: PushEmpty()
0xaba: Push((int) 1)
0xabb: IF (Stack[-1] == 0) GOTO 0xae2; Pop(1)

0xabc: PushEmpty()
0xabd: Call2 0xd17

0xabe: Pop(0)
0xabf: Push((int) 42551)
0xac0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xac1: IF (Stack[-1] == 0) GOTO 0xad6; Pop(1)

0xac2: PushEmpty(string)
0xac3: Stack[-1] = "Neutral"
0xac4: Call2 0xaa3

0xac5: Pop(1)
0xac6: Push((int) 540542)
0xac7: @@ SetMessage(Stack[-1])
0xac8: Pop(1)
0xac9: @@ ClearReplies()
0xaca: Pop(0)
0xacb: Push((int) 540543)
0xacc: Push((int) -1)
0xacd: Push((int) 42552)
0xace: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xacf: Pop(3)
0xad0: Push((int) 540796)
0xad1: Push((int) -1)
0xad2: Push((int) 42845)
0xad3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xad4: Pop(3)
0xad5: Return(); Pop(0)

0xad6: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xad7: PushEmpty(bool)
0xad8: Call2 0xd9d

0xad9: Pop(0)
0xada: IF (Stack[-1] == 0) GOTO 0xade; Pop(1)

0xadb: @ lshStopAnimation()
0xadc: Pop(0)
0xadd: GOTO 0xae0

0xade: @ StopAnimation()
0xadf: Pop(0)
0xae0: Return(); Pop(0)

0xae1: GOTO 0xaba

0xae2: Return(); Pop(0)

0xae3: PushEmpty()
0xae4: Call2 0xae7

0xae5: Pop(0)
0xae6: Return(); Pop(0)

0xae7: PushEmpty(bool)
0xae8: Call2 0xc05

0xae9: Pop(0)
0xaea: Pop(1); Push((bool) Stack[-1] == 0)
0xaeb: IF (Stack[-1] == 0) GOTO 0xaee; Pop(1)

0xaec: @ Hold()
0xaed: Pop(0)
0xaee: @ GetDirection(Stack[-0])
0xaef: Pop(0)
0xaf0: PushEmpty()
0xaf1: Call2 0xb97

0xaf2: Pop(0)
0xaf3: GOTO 0xaf0

0xaf4: Return(); Pop(0)

0xaf5: PushEmpty(object, object)
0xaf6: Push("player")
0xaf7: @ FindActor(Stack[-2], Stack[-1])
0xaf8: Pop(1)
0xaf9: Pop(0); Push((bool) Stack[-1] == 0)
0xafa: IF (Stack[-1] == 0) GOTO 0xafd; Pop(1)

0xafb: Stack[-3] = (bool) 0
0xafc: Return(); Pop(2)

0xafd: PushEmpty(bool, object)
0xafe: Stack[-1] = Stack[-3]
0xaff: Call2 0xbfc

0xb00: Stack[-5] = Stack[-2]
0xb01: Pop(2)
0xb02: Return(); Pop(2)

0xb03: Stack[-1] = 0
0xb04: Push(CvectorIndex(Stack[-0], 0))
0xb05: Push(CvectorIndex(Stack[-0], 2))
0xb06: @ RotateAsync(Stack[-2], Stack[-1])
0xb07: Pop(2)
0xb08: Return(); Pop(0)

0xb09: PushEmpty(object, bool, object, bool)
0xb0a: Push("player")
0xb0b: @ FindActor(Stack[-3], Stack[-1])
0xb0c: Pop(1)
0xb0d: Pop(0); Push((bool) Stack[-2] == 0)
0xb0e: IF (Stack[-1] == 0) GOTO 0xb11; Pop(1)

0xb0f: Stack[-5] = (bool) 0
0xb10: Return(); Pop(4)

0xb11: PushEmpty(float, object)
0xb12: Stack[-1] = Stack[-4]
0xb13: Call2 0xbe3

0xb14: Pop(1)
0xb15: Push((float)90000.0)
0xb16: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0xb17: IF (Stack[-1] == 0) GOTO 0xb1a; Pop(1)

0xb18: Stack[-5] = (bool) 0
0xb19: Return(); Pop(4)

0xb1a: @ CanSee(Stack[-1], Stack[-2])
0xb1b: Pop(0)
0xb1c: Stack[-5] = Stack[-1]
0xb1d: Return(); Pop(4)

0xb1e: Stack[-2] = 0
0xb1f: PushEmpty(float, float)
0xb20: Push((int) 8)
0xb21: Push((int) 16)
0xb22: @ rand(Stack[-3], Stack[-2], Stack[-1])
0xb23: Pop(2)
0xb24: Push((int) 10)
0xb25: @ SetTimer(Stack[-1], Stack[-2])
0xb26: Pop(1)
0xb27: Return(); Pop(2)

0xb28: Push((int) 10)
0xb29: @ KillTimer(Stack[-1])
0xb2a: Pop(1)
0xb2b: Return(); Pop(0)

0xb2c: PushEmpty()
0xb2d: Push((int) 10)
0xb2e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb2f: IF (Stack[-1] == 0) GOTO 0xb51; Pop(1)

0xb30: PushEmpty()
0xb31: Call2 0xb28

0xb32: Pop(0)
0xb33: PushEmpty(bool)
0xb34: Stack[-1] = (bool) 0
0xb35: PushEmpty(bool)
0xb36: Call2 0xc05

0xb37: Pop(0)
0xb38: IF (Stack[-1] == 0) GOTO 0xb3e; Pop(1)

0xb39: PushEmpty(bool)
0xb3a: Call2 0xb09

0xb3b: Pop(0)
0xb3c: IF (Stack[-1] == 0) GOTO 0xb3e; Pop(1)

0xb3d: Stack[-1] = (bool) 1
0xb3e: IF (Stack[-1] == 0) GOTO 0xb4b; Pop(1)

0xb3f: PushEmpty(bool)
0xb40: Call2 0xaf5

0xb41: Pop(0)
0xb42: IF (Stack[-1] == 0) GOTO 0xb4a; Pop(1)

0xb43: PushEmpty(bool, object)
0xb44: PushEmpty(object)
0xb45: Call2 0xd1e

0xb46: Stack[-2] = Stack[-1]
0xb47: Pop(1)
0xb48: Call2 0xc99

0xb49: Pop(2)
0xb4a: GOTO 0xb51

0xb4b: PushEmpty()
0xb4c: Call2 0xb04

0xb4d: Pop(0)
0xb4e: PushEmpty()
0xb4f: Call2 0xb1f

0xb50: Pop(0)
0xb51: Return(); Pop(0)

0xb52: PushEmpty()
0xb53: Call2 0xbde

0xb54: Pop(0)
0xb55: PushEmpty()
0xb56: Call2 0xb28

0xb57: Pop(0)
0xb58: @ lshStopSpeech()
0xb59: Pop(0)
0xb5a: @ lshStopAnimation()
0xb5b: Pop(0)
0xb5c: @ StopAsync()
0xb5d: Pop(0)
0xb5e: @ Hold()
0xb5f: Pop(0)
0xb60: Return(); Pop(0)

0xb61: @ StopGroup0()
0xb62: Pop(0)
0xb63: PushEmpty()
0xb64: Call2 0xb28

0xb65: Pop(0)
0xb66: PushEmpty(string)
0xb67: Stack[-1] = "Neutral"
0xb68: Call2 0xce9

0xb69: Pop(1)
0xb6a: PushEmpty()
0xb6b: Call2 0xb1f

0xb6c: Pop(0)
0xb6d: Return(); Pop(0)

0xb6e: PushEmpty()
0xb6f: Push(Stack[-1])
0xb70: IF (Stack[-1] == 0) GOTO 0xb75; Pop(1)

0xb71: PushEmpty()
0xb72: Call2 0xb1f

0xb73: Pop(0)
0xb74: GOTO 0xb79

0xb75: PushEmpty(string)
0xb76: Stack[-1] = "Neutral"
0xb77: Call2 0xce9

0xb78: Pop(1)
0xb79: Return(); Pop(0)

0xb7a: PushEmpty(bool, bool)
0xb7b: @ IsOverrideActive(Stack[-1])
0xb7c: Pop(0)
0xb7d: Pop(0); Push((bool) Stack[-1] == 0)
0xb7e: IF (Stack[-1] == 0) GOTO 0xb96; Pop(1)

0xb7f: EventDisable(0)
0xb80: PushEmpty()
0xb81: Call2 0xbde

0xb82: Pop(0)
0xb83: PushEmpty(bool, object)
0xb84: Stack[-1] = Stack[-5]
0xb85: Call2 0xbfc

0xb86: Pop(2)
0xb87: EventEnable(0)
0xb88: PushEmpty(object)
0xb89: Stack[-1] = Stack[-4]
0xb8a: Call2 0xf54

0xb8b: Pop(1)
0xb8c: PushEmpty(string)
0xb8d: Stack[-1] = "Neutral"
0xb8e: Call2 0xce9

0xb8f: Pop(1)
0xb90: PushEmpty()
0xb91: Call2 0xb28

0xb92: Pop(0)
0xb93: PushEmpty()
0xb94: Call2 0xb1f

0xb95: Pop(0)
0xb96: Return(); Pop(2)

0xb97: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0xb98: @ WaitForAnimEnd()
0xb99: Pop(0)
0xb9a: PushEmpty(bool)
0xb9b: Call2 0xc05

0xb9c: Pop(0)
0xb9d: Pop(1); Push((bool) Stack[-1] == 0)
0xb9e: IF (Stack[-1] == 0) GOTO 0xba0; Pop(1)

0xb9f: Return(); Pop(12)

0xba0: PushEmpty(int)
0xba1: Call2 0xd84

0xba2: Stack[-7] = Stack[-1]
0xba3: Pop(1)
0xba4: Stack[-5] = (int) 0
0xba5: PushEmpty(bool)
0xba6: Stack[-1] = (bool) 0
0xba7: Push((int) 5)
0xba8: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0xba9: IF (Stack[-1] == 0) GOTO 0xbaf; Pop(1)

0xbaa: PushEmpty(bool)
0xbab: Call2 0xc05

0xbac: Pop(0)
0xbad: IF (Stack[-1] == 0) GOTO 0xbaf; Pop(1)

0xbae: Stack[-1] = (bool) 1
0xbaf: IF (Stack[-1] == 0) GOTO 0xbd9; Pop(1)

0xbb0: Pop(0); Push((bool) Stack[-6] == 0)
0xbb1: IF (Stack[-1] == 0) GOTO 0xbb9; Pop(1)

0xbb2: Push((int) 3)
0xbb3: @ Sleep(Stack[-1], Stack[-5])
0xbb4: Pop(1)
0xbb5: Pop(0); Push((bool) Stack[-4] == 0)
0xbb6: IF (Stack[-1] == 0) GOTO 0xbb8; Pop(1)

0xbb7: GOTO 0xbd9

0xbb8: GOTO 0xbce

0xbb9: @ irand(Stack[-3], Stack[-6])
0xbba: Pop(0)
0xbbb: Push((int) 5)
0xbbc: @ irand(Stack[-3], Stack[-1])
0xbbd: Pop(1)
0xbbe: Push((int) 0)
0xbbf: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0xbc0: IF (Stack[-1] == 0) GOTO 0xbc2; Pop(1)

0xbc1: Stack[-3] = (int) 0
0xbc2: Push("all")
0xbc3: PushEmpty(string, int)
0xbc4: Stack[-1] = Stack[-6]
0xbc5: Call2 0xd7d

0xbc6: Pop(1)
0xbc7: @ PlayAnimation(Stack[-2], Stack[-1])
0xbc8: Pop(2)
0xbc9: @ WaitForAnimEnd(Stack[-1])
0xbca: Pop(0)
0xbcb: Pop(0); Push((bool) Stack[-1] == 0)
0xbcc: IF (Stack[-1] == 0) GOTO 0xbce; Pop(1)

0xbcd: GOTO 0xbd9

0xbce: PushEmpty(bool)
0xbcf: Call2 0xbdc

0xbd0: Pop(0)
0xbd1: Pop(1); Push((bool) Stack[-1] == 0)
0xbd2: IF (Stack[-1] == 0) GOTO 0xbd4; Pop(1)

0xbd3: GOTO 0xbd9

0xbd4: @ ResetAAS()
0xbd5: Pop(0)
0xbd6: Push((int) 1)
0xbd7: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0xbd8: GOTO 0xba5

0xbd9: @ ResetAAS()
0xbda: Pop(0)
0xbdb: Return(); Pop(12)

0xbdc: Stack[-1] = (bool) 1
0xbdd: Return(); Pop(0)

0xbde: @ StopAnimation()
0xbdf: Pop(0)
0xbe0: @ StopGroup0()
0xbe1: Pop(0)
0xbe2: Return(); Pop(0)

0xbe3: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xbe4: @ GetPosition(Stack[-3])
0xbe5: Pop(0)
0xbe6: @@ GetPosition(Stack[-2])
0xbe7: Pop(0)
0xbe8: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0xbe9: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0xbea: Return(); Pop(6)

0xbeb: PushEmpty(int, int)
0xbec: @@ GetProperty(Stack[-4], Stack[-1])
0xbed: Pop(0)
0xbee: Pop(0); Push(Stack[-1] + Stack[-3]);
0xbef: @@ SetProperty(Stack[-5], Stack[-1])
0xbf0: Pop(1)
0xbf1: Return(); Pop(2)

0xbf2: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0xbf3: @ GetPosition(Stack[-3])
0xbf4: Pop(0)
0xbf5: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0xbf6: Push(CvectorIndex(Stack[-2], 0))
0xbf7: Push(CvectorIndex(Stack[-3], 2))
0xbf8: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0xbf9: Pop(2)
0xbfa: Stack[-8] = Stack[-1]
0xbfb: Return(); Pop(6)

0xbfc: PushEmpty(cvector, cvector)
0xbfd: @@ GetPosition(Stack[-1])
0xbfe: Pop(0)
0xbff: PushEmpty(bool, cvector)
0xc00: Stack[-1] = Stack[-3]
0xc01: Call2 0xbf2

0xc02: Stack[-6] = Stack[-2]
0xc03: Pop(2)
0xc04: Return(); Pop(2)

0xc05: PushEmpty(bool, bool)
0xc06: @ IsLoaded(Stack[-1])
0xc07: Pop(0)
0xc08: Stack[-3] = Stack[-1]
0xc09: Return(); Pop(2)

0xc0a: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0xc0b: @@ GetPosition(Stack[-8])
0xc0c: Pop(0)
0xc0d: @@ GetEyesHeight(Stack[-9])
0xc0e: Pop(0)
0xc0f: Push(CvectorIndex(Stack[-8], 1))
0xc10: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xc11: CvectorIndex(Stack[-9], 1) = Stack[-1];
0xc12: @ GetPosition(Stack[-7])
0xc13: Pop(0)
0xc14: @ GetEyesHeight(Stack[-9])
0xc15: Pop(0)
0xc16: Push(CvectorIndex(Stack[-7], 1))
0xc17: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xc18: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xc19: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xc1a: Push(CvectorIndex(Stack[-6], 1))
0xc1b: Stack[-1] = (int) 0
0xc1c: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xc1d: Pop(0); Push(Stack[-6] | Stack[-6]);
0xc1e: Pop(1); Push(Sqrt(Stack[-1]))
0xc1f: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0xc20: Stack[-5] = -Stack[-6]; Pop(0);
0xc21: Pop(0); Push(Stack[-6] * Stack[-19]);
0xc22: PushEmpty(cvector, cvector)
0xc23: Push(CVector(0.0, 1.0, 0.0))
0xc24: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0xc25: Call2 0xd24

0xc26: Pop(1)
0xc27: Push((int) 25)
0xc28: Pop(2); Push(Stack[-2] * Stack[-1]);
0xc29: Pop(2); Push(Stack[-2] + Stack[-1]);
0xc2a: Push(CVector(0.0, 10.0, 0.0))
0xc2b: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xc2c: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0xc2d: @ IsOverrideActive(Stack[-2])
0xc2e: Pop(0)
0xc2f: Push(Stack[-2])
0xc30: IF (Stack[-1] == 0) GOTO 0xc33; Pop(1)

0xc31: Stack[-21] = (bool) 0
0xc32: Return(); Pop(18)

0xc33: @ StopWorld()
0xc34: Pop(0)
0xc35: @ CameraTransit(Stack[-3], Stack[-5])
0xc36: Pop(0)
0xc37: Push(CvectorIndex(Stack[-4], 0))
0xc38: Push(CvectorIndex(Stack[-5], 2))
0xc39: @ Rotate(Stack[-2], Stack[-1])
0xc3a: Pop(2)
0xc3b: PushEmpty(bool)
0xc3c: Call2 0xd9d

0xc3d: Pop(0)
0xc3e: IF (Stack[-1] == 0) GOTO 0xc40; Pop(1)

0xc3f: GOTO 0xc48

0xc40: Push("head")
0xc41: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xc42: Pop(1)
0xc43: Push(Stack[-1])
0xc44: IF (Stack[-1] == 0) GOTO 0xc48; Pop(1)

0xc45: Push("head")
0xc46: @ LookAsyncCamera(Stack[-1])
0xc47: Pop(1)
0xc48: @ CameraWaitForPlayFinish()
0xc49: Pop(0)
0xc4a: @ ResumeWorld()
0xc4b: Pop(0)
0xc4c: Stack[-21] = (bool) 1
0xc4d: Return(); Pop(18)

0xc4e: PushEmpty(bool, bool)
0xc4f: @ CameraSwitchToNormal()
0xc50: Pop(0)
0xc51: PushEmpty(bool)
0xc52: Call2 0xd9d

0xc53: Pop(0)
0xc54: IF (Stack[-1] == 0) GOTO 0xc56; Pop(1)

0xc55: GOTO 0xc5e

0xc56: Push("head")
0xc57: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xc58: Pop(1)
0xc59: Push(Stack[-1])
0xc5a: IF (Stack[-1] == 0) GOTO 0xc5e; Pop(1)

0xc5b: Push("head")
0xc5c: @ UnlookAsync(Stack[-1])
0xc5d: Pop(1)
0xc5e: Return(); Pop(2)

0xc5f: PushEmpty(int, int, int, int)
0xc60: Push("voice_common")
0xc61: @ GetVariable(Stack[-1], Stack[-3])
0xc62: Pop(1)
0xc63: Push(Stack[-2])
0xc64: IF (Stack[-1] == 0) GOTO 0xc85; Pop(1)

0xc65: PushEmpty(bool, object)
0xc66: Stack[-1] = Stack[-7]
0xc67: Call2 0xc99

0xc68: Pop(1)
0xc69: Pop(1); Push((bool) Stack[-1] == 0)
0xc6a: IF (Stack[-1] == 0) GOTO 0xc73; Pop(1)

0xc6b: PushEmpty(bool, object)
0xc6c: Stack[-1] = Stack[-7]
0xc6d: Call2 0xcbe

0xc6e: Pop(1)
0xc6f: Pop(1); Push((bool) Stack[-1] == 0)
0xc70: IF (Stack[-1] == 0) GOTO 0xc73; Pop(1)

0xc71: Stack[-6] = (bool) 0
0xc72: Return(); Pop(4)

0xc73: Push((int) 2)
0xc74: @ irand(Stack[-2], Stack[-1])
0xc75: Pop(1)
0xc76: Push(Stack[-1])
0xc77: IF (Stack[-1] == 0) GOTO 0xc80; Pop(1)

0xc78: Push("voice_common")
0xc79: Push((int) 1)
0xc7a: Pop(1); Push(Stack[-4] + Stack[-1]);
0xc7b: Push((int) 3)
0xc7c: Pop(2); Push(Stack[-2] % Stack[-1]);
0xc7d: @ SetVariable(Stack[-2], Stack[-1])
0xc7e: Pop(2)
0xc7f: GOTO 0xc84

0xc80: Push("voice_common")
0xc81: Push((int) 0)
0xc82: @ SetVariable(Stack[-2], Stack[-1])
0xc83: Pop(2)
0xc84: GOTO 0xc97

0xc85: PushEmpty(bool, object)
0xc86: Stack[-1] = Stack[-7]
0xc87: Call2 0xcbe

0xc88: Pop(1)
0xc89: Pop(1); Push((bool) Stack[-1] == 0)
0xc8a: IF (Stack[-1] == 0) GOTO 0xc93; Pop(1)

0xc8b: PushEmpty(bool, object)
0xc8c: Stack[-1] = Stack[-7]
0xc8d: Call2 0xc99

0xc8e: Pop(1)
0xc8f: Pop(1); Push((bool) Stack[-1] == 0)
0xc90: IF (Stack[-1] == 0) GOTO 0xc93; Pop(1)

0xc91: Stack[-6] = (bool) 0
0xc92: Return(); Pop(4)

0xc93: Push("voice_common")
0xc94: Push((int) 1)
0xc95: @ SetVariable(Stack[-2], Stack[-1])
0xc96: Pop(2)
0xc97: Stack[-6] = (bool) 1
0xc98: Return(); Pop(4)

0xc99: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xc9a: Stack[-5] = "c"
0xc9b: Stack[-4] = (int) 0
0xc9c: Push((int) 1)
0xc9d: IF (Stack[-1] == 0) GOTO 0xca9; Pop(1)

0xc9e: Push((int) 1)
0xc9f: Pop(1); Push(Stack[-5] + Stack[-1]);
0xca0: Pop(1); Push(Stack[-6] + Stack[-1]);
0xca1: @@ HasProperty(Stack[-1], Stack[-4])
0xca2: Pop(1)
0xca3: Pop(0); Push((bool) Stack[-3] == 0)
0xca4: IF (Stack[-1] == 0) GOTO 0xca6; Pop(1)

0xca5: GOTO 0xca9

0xca6: Push((int) 1)
0xca7: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xca8: GOTO 0xc9c

0xca9: Pop(0); Push((bool) Stack[-4] == 0)
0xcaa: IF (Stack[-1] == 0) GOTO 0xcad; Pop(1)

0xcab: Stack[-12] = (bool) 0
0xcac: Return(); Pop(10)

0xcad: Stack[-2] = (int) 0
0xcae: Push((int) 1)
0xcaf: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xcb0: IF (Stack[-1] == 0) GOTO 0xcb3; Pop(1)

0xcb1: @ irand(Stack[-2], Stack[-4])
0xcb2: Pop(0)
0xcb3: Push((int) 1)
0xcb4: Pop(1); Push(Stack[-3] + Stack[-1]);
0xcb5: Pop(1); Push(Stack[-6] + Stack[-1]);
0xcb6: @@ GetProperty(Stack[-1], Stack[-2])
0xcb7: Pop(1)
0xcb8: PushEmpty(bool, string)
0xcb9: Stack[-1] = Stack[-3]
0xcba: Call2 0xd08

0xcbb: Stack[-14] = Stack[-2]
0xcbc: Pop(2)
0xcbd: Return(); Pop(10)

0xcbe: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xcbf: Push("d")
0xcc0: PushEmpty(int)
0xcc1: Call2 0xd6e

0xcc2: Pop(0)
0xcc3: Pop(2); Push(Stack[-2] + Stack[-1]);
0xcc4: Push("m")
0xcc5: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0xcc6: Stack[-4] = (int) 0
0xcc7: Push((int) 1)
0xcc8: IF (Stack[-1] == 0) GOTO 0xcd4; Pop(1)

0xcc9: Push((int) 1)
0xcca: Pop(1); Push(Stack[-5] + Stack[-1]);
0xccb: Pop(1); Push(Stack[-6] + Stack[-1]);
0xccc: @@ HasProperty(Stack[-1], Stack[-4])
0xccd: Pop(1)
0xcce: Pop(0); Push((bool) Stack[-3] == 0)
0xccf: IF (Stack[-1] == 0) GOTO 0xcd1; Pop(1)

0xcd0: GOTO 0xcd4

0xcd1: Push((int) 1)
0xcd2: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xcd3: GOTO 0xcc7

0xcd4: Pop(0); Push((bool) Stack[-4] == 0)
0xcd5: IF (Stack[-1] == 0) GOTO 0xcd8; Pop(1)

0xcd6: Stack[-12] = (bool) 0
0xcd7: Return(); Pop(10)

0xcd8: Stack[-2] = (int) 0
0xcd9: Push((int) 1)
0xcda: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xcdb: IF (Stack[-1] == 0) GOTO 0xcde; Pop(1)

0xcdc: @ irand(Stack[-2], Stack[-4])
0xcdd: Pop(0)
0xcde: Push((int) 1)
0xcdf: Pop(1); Push(Stack[-3] + Stack[-1]);
0xce0: Pop(1); Push(Stack[-6] + Stack[-1]);
0xce1: @@ GetProperty(Stack[-1], Stack[-2])
0xce2: Pop(1)
0xce3: PushEmpty(bool, string)
0xce4: Stack[-1] = Stack[-3]
0xce5: Call2 0xd08

0xce6: Stack[-14] = Stack[-2]
0xce7: Pop(2)
0xce8: Return(); Pop(10)

0xce9: PushEmpty(bool, float, float, bool, float, float)
0xcea: @ lshHasAnimation(Stack[-3], Stack[-7])
0xceb: Pop(0)
0xcec: Push(Stack[-3])
0xced: IF (Stack[-1] == 0) GOTO 0xcf4; Pop(1)

0xcee: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0xcef: Pop(0)
0xcf0: Push((bool) 0)
0xcf1: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xcf2: Pop(1)
0xcf3: GOTO 0xcf8

0xcf4: Push("Can't find lsh animation : ")
0xcf5: Pop(1); Push(Stack[-1] + Stack[-8]);
0xcf6: @ Trace(Stack[-1])
0xcf7: Pop(1)
0xcf8: Return(); Pop(6)

0xcf9: PushEmpty(bool, float, float, bool, float, float)
0xcfa: @ lshHasAnimation(Stack[-3], Stack[-8])
0xcfb: Pop(0)
0xcfc: Push(Stack[-3])
0xcfd: IF (Stack[-1] == 0) GOTO 0xd03; Pop(1)

0xcfe: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0xcff: Pop(0)
0xd00: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0xd01: Pop(0)
0xd02: GOTO 0xd07

0xd03: Push("Can't find lsh animation : ")
0xd04: Pop(1); Push(Stack[-1] + Stack[-9]);
0xd05: @ Trace(Stack[-1])
0xd06: Pop(1)
0xd07: Return(); Pop(6)

0xd08: PushEmpty(bool, bool)
0xd09: PushEmpty(bool)
0xd0a: Call2 0xd9d

0xd0b: Pop(0)
0xd0c: IF (Stack[-1] == 0) GOTO 0xd15; Pop(1)

0xd0d: @ lshHasSpeech(Stack[-1], Stack[-3])
0xd0e: Pop(0)
0xd0f: Push(Stack[-1])
0xd10: IF (Stack[-1] == 0) GOTO 0xd15; Pop(1)

0xd11: @ lshPlaySpeech(Stack[-3])
0xd12: Pop(0)
0xd13: Stack[-4] = (bool) 1
0xd14: Return(); Pop(2)

0xd15: Stack[-4] = (bool) 0
0xd16: Return(); Pop(2)

0xd17: PushEmpty(bool)
0xd18: Call2 0xd9d

0xd19: Pop(0)
0xd1a: IF (Stack[-1] == 0) GOTO 0xd1d; Pop(1)

0xd1b: @ lshStopSpeech()
0xd1c: Pop(0)
0xd1d: Return(); Pop(0)

0xd1e: PushEmpty(object, object)
0xd1f: @ self(Stack[-1])
0xd20: Pop(0)
0xd21: Stack[-3] = Stack[-1]
0xd22: Return(); Pop(2)

0xd23: Stack[-1] = 0
0xd24: PushEmpty(float, float)
0xd25: Pop(0); Push(Stack[-3] | Stack[-3]);
0xd26: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xd27: Push((float)0.0)
0xd28: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xd29: IF (Stack[-1] == 0) GOTO 0xd2c; Pop(1)

0xd2a: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xd2b: Return(); Pop(2)

0xd2c: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xd2d: Return(); Pop(2)

0xd2e: PushEmpty(int, int)
0xd2f: @ GetVariable(Stack[-3], Stack[-1])
0xd30: Pop(0)
0xd31: Stack[-4] = Stack[-1]
0xd32: Return(); Pop(2)

0xd33: PushEmpty(object, object, object, object)
0xd34: @ GetMainOutdoorScene(Stack[-2])
0xd35: Pop(0)
0xd36: Push(".bin")
0xd37: Pop(1); Push(Stack[-6] + Stack[-1]);
0xd38: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0xd39: Pop(1)
0xd3a: Stack[-6] = Stack[-1]
0xd3b: Return(); Pop(4)

0xd3c: Stack[-1] = 0
0xd3d: Stack[-2] = 0
0xd3e: PushEmpty(object, object)
0xd3f: @ CreateIntVector(Stack[-1])
0xd40: Pop(0)
0xd41: @@ add(Stack[-4])
0xd42: Pop(0)
0xd43: @@ add(Stack[-3])
0xd44: Pop(0)
0xd45: Push((int) 3)
0xd46: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xd47: Pop(1)
0xd48: Return(); Pop(2)

0xd49: Stack[-1] = 0
0xd4a: PushEmpty(int, int)
0xd4b: PushEmpty(object, string, int)
0xd4c: Stack[-3] = Stack[-7]
0xd4d: Stack[-2] = "money"
0xd4e: Stack[-1] = Stack[-6]
0xd4f: Call2 0xbeb

0xd50: Pop(3)
0xd51: Push((int) 0)
0xd52: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0xd53: IF (Stack[-1] == 0) GOTO 0xd5c; Pop(1)

0xd54: Push("Money")
0xd55: @ GetInvItemByName(Stack[-2], Stack[-1])
0xd56: Pop(1)
0xd57: PushEmpty(int, int)
0xd58: Stack[-2] = Stack[-3]
0xd59: Stack[-1] = Stack[-5]
0xd5a: Call2 0xd3e

0xd5b: Pop(2)
0xd5c: Return(); Pop(2)

0xd5d: PushEmpty(object, object)
0xd5e: @ FindActor(Stack[-1], Stack[-4])
0xd5f: Pop(0)
0xd60: Pop(0); Push((bool) Stack[-1] == 0)
0xd61: IF (Stack[-1] == 0) GOTO 0xd64; Pop(1)

0xd62: Stack[-5] = (bool) 0
0xd63: Return(); Pop(2)

0xd64: @ Trigger(Stack[-1], Stack[-3])
0xd65: Pop(0)
0xd66: Stack[-5] = (bool) 1
0xd67: Return(); Pop(2)

0xd68: Stack[-1] = 0
0xd69: PushEmpty(float, float)
0xd6a: @ GetGameTime(Stack[-1])
0xd6b: Pop(0)
0xd6c: Stack[-3] = Stack[-1]
0xd6d: Return(); Pop(2)

0xd6e: PushEmpty(float, float)
0xd6f: @ GetGameTime(Stack[-1])
0xd70: Pop(0)
0xd71: Push((int) 1)
0xd72: PushEmpty(int)
0xd73: Push((int) 24)
0xd74: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xd75: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xd76: Return(); Pop(2)

0xd77: PushEmpty()
0xd78: PushEmpty(int)
0xd79: Call2 0xd6e

0xd7a: Pop(0)
0xd7b: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0xd7c: Return(); Pop(0)

0xd7d: PushEmpty(string, string)
0xd7e: Stack[-1] = "idle"
0xd7f: Push(Stack[-3])
0xd80: IF (Stack[-1] == 0) GOTO 0xd82; Pop(1)

0xd81: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xd82: Stack[-4] = Stack[-1]
0xd83: Return(); Pop(2)

0xd84: PushEmpty(int, bool, int, bool)
0xd85: Stack[-2] = (int) 0
0xd86: Push("all")
0xd87: PushEmpty(string, int)
0xd88: Stack[-1] = Stack[-5]
0xd89: Call2 0xd7d

0xd8a: Pop(1)
0xd8b: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xd8c: Pop(2)
0xd8d: Pop(0); Push((bool) Stack[-1] == 0)
0xd8e: IF (Stack[-1] == 0) GOTO 0xd90; Pop(1)

0xd8f: GOTO 0xd93

0xd90: Push((int) 1)
0xd91: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xd92: GOTO 0xd86

0xd93: Stack[-5] = Stack[-2]
0xd94: Return(); Pop(4)

0xd95: Stack[-1] = (int) 515544
0xd96: Return(); Pop(0)

0xd97: Stack[-1] = (int) 502869
0xd98: Return(); Pop(0)

0xd99: Stack[-1] = "ui/NPC_Mark.png"
0xd9a: Return(); Pop(0)

0xd9b: Stack[-1] = "ui/NPC_Mark_b.png"
0xd9c: Return(); Pop(0)

0xd9d: Stack[-1] = (bool) 1
0xd9e: Return(); Pop(0)

0xd9f: PushEmpty()
0xda0: PushEmpty(object, string, float)
0xda1: PushEmpty(object)
0xda2: Call2 0xf11

0xda3: Stack[-4] = Stack[-1]
0xda4: Pop(1)
0xda5: Stack[-2] = "pt_map_uprava_admin"
0xda6: Stack[-1] = (int) 2
0xda7: Call2 0xf22

0xda8: Pop(3)
0xda9: PushEmpty(object)
0xdaa: Call2 0xf11

0xdab: Pop(0)
0xdac: @@ ShowMap(Stack[-1])
0xdad: Pop(1)
0xdae: Return(); Pop(0)

0xdaf: PushEmpty()
0xdb0: PushEmpty()
0xdb1: Call2 0xedb

0xdb2: Pop(0)
0xdb3: PushEmpty(bool, string, string)
0xdb4: Stack[-2] = "quest_d8_04"
0xdb5: Stack[-1] = "completed"
0xdb6: Call2 0xd5d

0xdb7: Pop(3)
0xdb8: Return(); Pop(0)

0xdb9: PushEmpty()
0xdba: Push("ood10Mark1")
0xdbb: Push((int) 1)
0xdbc: @ SetVariable(Stack[-2], Stack[-1])
0xdbd: Pop(2)
0xdbe: Return(); Pop(0)

0xdbf: PushEmpty()
0xdc0: Push("d10MarkVisit")
0xdc1: Push((int) 1)
0xdc2: @ SetVariable(Stack[-2], Stack[-1])
0xdc3: Pop(2)
0xdc4: Return(); Pop(0)

0xdc5: PushEmpty()
0xdc6: Push("d10q03")
0xdc7: Push((int) 1)
0xdc8: @ SetVariable(Stack[-2], Stack[-1])
0xdc9: Pop(2)
0xdca: PushEmpty()
0xdcb: Call2 0xe8d

0xdcc: Pop(0)
0xdcd: PushEmpty()
0xdce: Call2 0xeb4

0xdcf: Pop(0)
0xdd0: PushEmpty(object, string)
0xdd1: Stack[-1] = "quest_d10_03"
0xdd2: Call2 0xd33

0xdd3: Pop(2)
0xdd4: Return(); Pop(0)

0xdd5: PushEmpty(object, object)
0xdd6: Push("d10q03")
0xdd7: Push((int) 3)
0xdd8: @ SetVariable(Stack[-2], Stack[-1])
0xdd9: Pop(2)
0xdda: PushEmpty(object)
0xddb: Call2 0xf11

0xddc: Stack[-2] = Stack[-1]
0xddd: Pop(1)
0xdde: Push("d10q03MarkGotoBlock")
0xddf: Push("pt_map_uprava_admin")
0xde0: Push((int) 0)
0xde1: Push((int) 515301)
0xde2: PushEmpty(float)
0xde3: Call2 0xd69

0xde4: Pop(0)
0xde5: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xde6: Pop(5)
0xde7: PushEmpty()
0xde8: Call2 0xea7

0xde9: Pop(0)
0xdea: Return(); Pop(2)

0xdeb: Stack[-1] = 0
0xdec: PushEmpty()
0xded: Push("ood2Mark1")
0xdee: Push((int) 1)
0xdef: @ SetVariable(Stack[-2], Stack[-1])
0xdf0: Pop(2)
0xdf1: Return(); Pop(0)

0xdf2: PushEmpty()
0xdf3: PushEmpty()
0xdf4: Call2 0xe9a

0xdf5: Pop(0)
0xdf6: PushEmpty(bool, string, string)
0xdf7: Stack[-2] = "quest_d10_03"
0xdf8: Stack[-1] = "fail"
0xdf9: Call2 0xd5d

0xdfa: Pop(3)
0xdfb: Return(); Pop(0)

0xdfc: PushEmpty(int, int)
0xdfd: Push((int) 15)
0xdfe: @ irand(Stack[-2], Stack[-1])
0xdff: Pop(1)
0xe00: PushEmpty(object, int)
0xe01: Stack[-2] = Stack[-6]
0xe02: Push((int) 5)
0xe03: Stack[-2] = Stack[-4] + Stack[-1]; Pop(1);
0xe04: Call2 0xd4a

0xe05: Pop(2)
0xe06: Return(); Pop(2)

0xe07: PushEmpty(object, object)
0xe08: Push("d7q02")
0xe09: Push((int) 1)
0xe0a: @ SetVariable(Stack[-2], Stack[-1])
0xe0b: Pop(2)
0xe0c: PushEmpty(object)
0xe0d: Call2 0xf11

0xe0e: Stack[-2] = Stack[-1]
0xe0f: Pop(1)
0xe10: Push("d7q02MarkGotoCemetery")
0xe11: Push("pt_d7q02_corpse")
0xe12: Push((int) 0)
0xe13: Push((int) 515427)
0xe14: PushEmpty(float)
0xe15: Call2 0xd69

0xe16: Pop(0)
0xe17: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe18: Pop(5)
0xe19: Push("d7q02MarkGotoAlexandr")
0xe1a: Push("pt_map_alexandr")
0xe1b: Push((int) 0)
0xe1c: Push((int) 515428)
0xe1d: PushEmpty(float)
0xe1e: Call2 0xd69

0xe1f: Pop(0)
0xe20: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe21: Pop(5)
0xe22: PushEmpty()
0xe23: Call2 0xec1

0xe24: Pop(0)
0xe25: PushEmpty()
0xe26: Call2 0xece

0xe27: Pop(0)
0xe28: PushEmpty(object, string)
0xe29: Stack[-1] = "quest_d7_02"
0xe2a: Call2 0xd33

0xe2b: Pop(2)
0xe2c: PushEmpty(bool, string, string)
0xe2d: Stack[-2] = "quest_d7_02"
0xe2e: Stack[-1] = "place_corpse"
0xe2f: Call2 0xd5d

0xe30: Pop(3)
0xe31: Return(); Pop(2)

0xe32: Stack[-1] = 0
0xe33: PushEmpty()
0xe34: Push("KnowMark")
0xe35: Push((int) 1)
0xe36: @ SetVariable(Stack[-2], Stack[-1])
0xe37: Pop(2)
0xe38: Return(); Pop(0)

0xe39: PushEmpty()
0xe3a: PushEmpty(int, string)
0xe3b: Stack[-1] = "d8q04"
0xe3c: Call2 0xd2e

0xe3d: Pop(1)
0xe3e: Push((int) 3)
0xe3f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe40: IF (Stack[-1] == 0) GOTO 0xe43; Pop(1)

0xe41: Stack[-2] = (bool) 1
0xe42: Return(); Pop(0)

0xe43: Stack[-2] = (bool) 0
0xe44: Return(); Pop(0)

0xe45: PushEmpty()
0xe46: PushEmpty(int, string)
0xe47: Stack[-1] = "ood10Mark1"
0xe48: Call2 0xd2e

0xe49: Pop(1)
0xe4a: Push((int) 0)
0xe4b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe4c: IF (Stack[-1] == 0) GOTO 0xe4f; Pop(1)

0xe4d: Stack[-2] = (bool) 1
0xe4e: Return(); Pop(0)

0xe4f: Stack[-2] = (bool) 0
0xe50: Return(); Pop(0)

0xe51: PushEmpty()
0xe52: PushEmpty(int, string)
0xe53: Stack[-1] = "d10q03"
0xe54: Call2 0xd2e

0xe55: Pop(1)
0xe56: Push((int) 2)
0xe57: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe58: IF (Stack[-1] == 0) GOTO 0xe5b; Pop(1)

0xe59: Stack[-2] = (bool) 1
0xe5a: Return(); Pop(0)

0xe5b: Stack[-2] = (bool) 0
0xe5c: Return(); Pop(0)

0xe5d: PushEmpty()
0xe5e: PushEmpty(int, string)
0xe5f: Stack[-1] = "ood2Mark1"
0xe60: Call2 0xd2e

0xe61: Pop(1)
0xe62: Push((int) 0)
0xe63: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe64: IF (Stack[-1] == 0) GOTO 0xe67; Pop(1)

0xe65: Stack[-2] = (bool) 1
0xe66: Return(); Pop(0)

0xe67: Stack[-2] = (bool) 0
0xe68: Return(); Pop(0)

0xe69: PushEmpty()
0xe6a: PushEmpty(int, string)
0xe6b: Stack[-1] = "d7BurahLetter"
0xe6c: Call2 0xd2e

0xe6d: Pop(1)
0xe6e: Push((int) 0)
0xe6f: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0xe70: IF (Stack[-1] == 0) GOTO 0xe73; Pop(1)

0xe71: Stack[-2] = (bool) 1
0xe72: Return(); Pop(0)

0xe73: Stack[-2] = (bool) 0
0xe74: Return(); Pop(0)

0xe75: PushEmpty()
0xe76: PushEmpty(int, string)
0xe77: Stack[-1] = "d7q01"
0xe78: Call2 0xd2e

0xe79: Pop(1)
0xe7a: Push((int) 2)
0xe7b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe7c: IF (Stack[-1] == 0) GOTO 0xe7f; Pop(1)

0xe7d: Stack[-2] = (bool) 1
0xe7e: Return(); Pop(0)

0xe7f: Stack[-2] = (bool) 0
0xe80: Return(); Pop(0)

0xe81: PushEmpty()
0xe82: PushEmpty(int, string)
0xe83: Stack[-1] = "d7q02"
0xe84: Call2 0xd2e

0xe85: Pop(1)
0xe86: Push((int) 0)
0xe87: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe88: IF (Stack[-1] == 0) GOTO 0xe8b; Pop(1)

0xe89: Stack[-2] = (bool) 1
0xe8a: Return(); Pop(0)

0xe8b: Stack[-2] = (bool) 0
0xe8c: Return(); Pop(0)

0xe8d: PushEmpty(object, object)
0xe8e: Push((int) 672)
0xe8f: Push((int) 2)
0xe90: Push((int) 534157)
0xe91: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe92: Pop(3)
0xe93: PushEmpty(bool, object, int)
0xe94: Stack[-2] = Stack[-4]
0xe95: Stack[-1] = (int) -1
0xe96: Call2 0xef5

0xe97: Pop(3)
0xe98: Return(); Pop(2)

0xe99: Stack[-1] = 0
0xe9a: PushEmpty(object, object)
0xe9b: Push((int) 763)
0xe9c: Push((int) 2)
0xe9d: Push((int) 540030)
0xe9e: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe9f: Pop(3)
0xea0: PushEmpty(bool, object, int)
0xea1: Stack[-2] = Stack[-4]
0xea2: Stack[-1] = (int) 672
0xea3: Call2 0xef5

0xea4: Pop(3)
0xea5: Return(); Pop(2)

0xea6: Stack[-1] = 0
0xea7: PushEmpty(object, object)
0xea8: Push((int) 675)
0xea9: Push((int) 2)
0xeaa: Push((int) 534160)
0xeab: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xeac: Pop(3)
0xead: PushEmpty(bool, object, int)
0xeae: Stack[-2] = Stack[-4]
0xeaf: Stack[-1] = (int) 672
0xeb0: Call2 0xef5

0xeb1: Pop(3)
0xeb2: Return(); Pop(2)

0xeb3: Stack[-1] = 0
0xeb4: PushEmpty(object, object)
0xeb5: Push((int) 673)
0xeb6: Push((int) 2)
0xeb7: Push((int) 534158)
0xeb8: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xeb9: Pop(3)
0xeba: PushEmpty(bool, object, int)
0xebb: Stack[-2] = Stack[-4]
0xebc: Stack[-1] = (int) 672
0xebd: Call2 0xef5

0xebe: Pop(3)
0xebf: Return(); Pop(2)

0xec0: Stack[-1] = 0
0xec1: PushEmpty(object, object)
0xec2: Push((int) 170)
0xec3: Push((int) 2)
0xec4: Push((int) 515422)
0xec5: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xec6: Pop(3)
0xec7: PushEmpty(bool, object, int)
0xec8: Stack[-2] = Stack[-4]
0xec9: Stack[-1] = (int) -1
0xeca: Call2 0xef5

0xecb: Pop(3)
0xecc: Return(); Pop(2)

0xecd: Stack[-1] = 0
0xece: PushEmpty(object, object)
0xecf: Push((int) 171)
0xed0: Push((int) 2)
0xed1: Push((int) 515423)
0xed2: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xed3: Pop(3)
0xed4: PushEmpty(bool, object, int)
0xed5: Stack[-2] = Stack[-4]
0xed6: Stack[-1] = (int) 170
0xed7: Call2 0xef5

0xed8: Pop(3)
0xed9: Return(); Pop(2)

0xeda: Stack[-1] = 0
0xedb: PushEmpty(object, object)
0xedc: Push((int) 653)
0xedd: Push((int) 2)
0xede: Push((int) 533366)
0xedf: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xee0: Pop(3)
0xee1: PushEmpty(bool, object, int)
0xee2: Stack[-2] = Stack[-4]
0xee3: Stack[-1] = (int) 649
0xee4: Call2 0xef5

0xee5: Pop(3)
0xee6: Return(); Pop(2)

0xee7: Stack[-1] = 0
0xee8: PushEmpty(object, object)
0xee9: @ GetDiaryRoot(Stack[-1])
0xeea: Pop(0)
0xeeb: Pop(0); Push((bool) Stack[-1] == 0)
0xeec: IF (Stack[-1] == 0) GOTO 0xef2; Pop(1)

0xeed: Push("Can't retrieve diary root")
0xeee: @ Trace(Stack[-1])
0xeef: Pop(1)
0xef0: Stack[-3] = (bool) 0
0xef1: Return(); Pop(2)

0xef2: Stack[-3] = Stack[-1]
0xef3: Return(); Pop(2)

0xef4: Stack[-1] = 0
0xef5: PushEmpty(object, object, int, object, object, int)
0xef6: PushEmpty(object)
0xef7: Call2 0xee8

0xef8: Stack[-4] = Stack[-1]
0xef9: Pop(1)
0xefa: @@ Find(Stack[-7], Stack[-2])
0xefb: Pop(0)
0xefc: Pop(0); Push((bool) Stack[-2] == 0)
0xefd: IF (Stack[-1] == 0) GOTO 0xf04; Pop(1)

0xefe: Push("Can't find diary parent with id: ")
0xeff: Pop(1); Push(Stack[-1] + Stack[-8]);
0xf00: @ Trace(Stack[-1])
0xf01: Pop(1)
0xf02: Stack[-9] = (bool) 0
0xf03: Return(); Pop(6)

0xf04: @@ AddChild(Stack[-8])
0xf05: Pop(0)
0xf06: Push((int) 7)
0xf07: @ SendWorldWndMessage(Stack[-1])
0xf08: Pop(1)
0xf09: @@ GetCategory(Stack[-1])
0xf0a: Pop(0)
0xf0b: @ SetDiarySection(Stack[-1])
0xf0c: Pop(0)
0xf0d: Stack[-9] = (bool) 0
0xf0e: Return(); Pop(6)

0xf0f: Stack[-2] = 0
0xf10: Stack[-3] = 0
0xf11: PushEmpty(object, object, object, object)
0xf12: @ GetMainOutdoorScene(Stack[-2])
0xf13: Pop(0)
0xf14: Pop(0); Push((bool) Stack[-2] == 0)
0xf15: IF (Stack[-1] == 0) GOTO 0xf1c; Pop(1)

0xf16: Push("Can't find main outdoor scene")
0xf17: @ Trace(Stack[-1])
0xf18: Pop(1)
0xf19: Stack[-1] = 0
0xf1a: Stack[-5] = Stack[-1]
0xf1b: Return(); Pop(4)

0xf1c: @@ GetMap(Stack[-1])
0xf1d: Pop(0)
0xf1e: Stack[-5] = Stack[-1]
0xf1f: Return(); Pop(4)

0xf20: Stack[-1] = 0
0xf21: Stack[-2] = 0
0xf22: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0xf23: @ GetMainOutdoorScene(Stack[-2])
0xf24: Pop(0)
0xf25: Pop(0); Push((bool) Stack[-2] == 0)
0xf26: IF (Stack[-1] == 0) GOTO 0xf2b; Pop(1)

0xf27: Push("Can't find main outdoor scene")
0xf28: @ Trace(Stack[-1])
0xf29: Pop(1)
0xf2a: Return(); Pop(8)

0xf2b: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0xf2c: Pop(0)
0xf2d: Pop(0); Push((bool) Stack[-1] == 0)
0xf2e: IF (Stack[-1] == 0) GOTO 0xf35; Pop(1)

0xf2f: Push("Warning: outdoor scene locator ")
0xf30: Pop(1); Push(Stack[-1] + Stack[-11]);
0xf31: Push(" doesnt exist")
0xf32: Pop(2); Push(Stack[-2] + Stack[-1]);
0xf33: @ Trace(Stack[-1])
0xf34: Pop(1)
0xf35: @@ GetMap(Stack[-11])
0xf36: Pop(0)
0xf37: Pop(0); Push((bool) Stack[-11] == 0)
0xf38: IF (Stack[-1] == 0) GOTO 0xf3d; Pop(1)

0xf39: Push("Can't find map")
0xf3a: @ Trace(Stack[-1])
0xf3b: Pop(1)
0xf3c: Return(); Pop(8)

0xf3d: Push(CvectorIndex(Stack[-4], 0))
0xf3e: Push(CvectorIndex(Stack[-5], 2))
0xf3f: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0xf40: Pop(2)
0xf41: Return(); Pop(8)

0xf42: Stack[-2] = 0
0xf43: PushEmpty(int, int)
0xf44: Push("branch")
0xf45: @ GetVariable(Stack[-1], Stack[-2])
0xf46: Pop(1)
0xf47: Push((int) 0)
0xf48: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf49: IF (Stack[-1] == 0) GOTO 0xf4d; Pop(1)

0xf4a: Stack[-3] = (int) 1
0xf4b: Return(); Pop(2)

0xf4c: GOTO 0xf52

0xf4d: Push((int) 1)
0xf4e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf4f: IF (Stack[-1] == 0) GOTO 0xf52; Pop(1)

0xf50: Stack[-3] = (int) 2
0xf51: Return(); Pop(2)

0xf52: Stack[-3] = (int) 3
0xf53: Return(); Pop(2)

0xf54: PushEmpty(int, int)
0xf55: Push("mt_mark")
0xf56: @ GetVariable(Stack[-1], Stack[-2])
0xf57: Pop(1)
0xf58: Pop(0); Push((bool) Stack[-1] == 0)
0xf59: IF (Stack[-1] == 0) GOTO 0xf64; Pop(1)

0xf5a: PushEmpty(int, object)
0xf5b: Stack[-1] = Stack[-5]
0xf5c: Push(-2, 1); TaskCall(6)
0xf5d: Call2 0x580

0xf5e: Pop(-2, 1); TaskReturn
0xf5f: Pop(2)
0xf60: Push("mt_mark")
0xf61: Push((int) 1)
0xf62: @ SetVariable(Stack[-2], Stack[-1])
0xf63: Pop(2)
0xf64: PushEmpty(bool, int)
0xf65: Stack[-1] = (int) 1
0xf66: Call2 0xd77

0xf67: Pop(1)
0xf68: IF (Stack[-1] == 0) GOTO 0xf6a; Pop(1)

0xf69: Return(); Pop(2)

0xf6a: PushEmpty(bool, int)
0xf6b: Stack[-1] = (int) 2
0xf6c: Call2 0xd77

0xf6d: Pop(1)
0xf6e: IF (Stack[-1] == 0) GOTO 0xf76; Pop(1)

0xf6f: PushEmpty(int, object)
0xf70: Stack[-1] = Stack[-5]
0xf71: Push(-2, 1); TaskCall(8)
0xf72: Call2 0x6b1

0xf73: Pop(-2, 1); TaskReturn
0xf74: Pop(2)
0xf75: Return(); Pop(2)

0xf76: PushEmpty(bool, int)
0xf77: Stack[-1] = (int) 4
0xf78: Call2 0xd77

0xf79: Pop(1)
0xf7a: IF (Stack[-1] == 0) GOTO 0xf82; Pop(1)

0xf7b: PushEmpty(int, object)
0xf7c: Stack[-1] = Stack[-5]
0xf7d: Push(-2, 1); TaskCall(10)
0xf7e: Call2 0x7ce

0xf7f: Pop(-2, 1); TaskReturn
0xf80: Pop(2)
0xf81: Return(); Pop(2)

0xf82: PushEmpty(bool, int)
0xf83: Stack[-1] = (int) 7
0xf84: Call2 0xd77

0xf85: Pop(1)
0xf86: IF (Stack[-1] == 0) GOTO 0xf8e; Pop(1)

0xf87: PushEmpty(int, object)
0xf88: Stack[-1] = Stack[-5]
0xf89: Push(-2, 1); TaskCall(12)
0xf8a: Call2 0x88f

0xf8b: Pop(-2, 1); TaskReturn
0xf8c: Pop(2)
0xf8d: Return(); Pop(2)

0xf8e: PushEmpty(bool, int)
0xf8f: Stack[-1] = (int) 8
0xf90: Call2 0xd77

0xf91: Pop(1)
0xf92: IF (Stack[-1] == 0) GOTO 0xf9a; Pop(1)

0xf93: PushEmpty(int, object)
0xf94: Stack[-1] = Stack[-5]
0xf95: Push(-2, 1); TaskCall(0)
0xf96: Call2 0x0

0xf97: Pop(-2, 1); TaskReturn
0xf98: Pop(2)
0xf99: Return(); Pop(2)

0xf9a: PushEmpty(bool, int)
0xf9b: Stack[-1] = (int) 10
0xf9c: Call2 0xd77

0xf9d: Pop(1)
0xf9e: IF (Stack[-1] == 0) GOTO 0xfa6; Pop(1)

0xf9f: PushEmpty(int, object)
0xfa0: Stack[-1] = Stack[-5]
0xfa1: Push(-2, 1); TaskCall(2)
0xfa2: Call2 0x1f5

0xfa3: Pop(-2, 1); TaskReturn
0xfa4: Pop(2)
0xfa5: Return(); Pop(2)

0xfa6: PushEmpty(bool, int)
0xfa7: Stack[-1] = (int) 12
0xfa8: Call2 0xd77

0xfa9: Pop(1)
0xfaa: IF (Stack[-1] == 0) GOTO 0xfb2; Pop(1)

0xfab: PushEmpty(int, object)
0xfac: Stack[-1] = Stack[-5]
0xfad: Push(-2, 1); TaskCall(4)
0xfae: Call2 0x454

0xfaf: Pop(-2, 1); TaskReturn
0xfb0: Pop(2)
0xfb1: Return(); Pop(2)

0xfb2: PushEmpty(int, object)
0xfb3: Stack[-1] = Stack[-5]
0xfb4: Push(-2, 1); TaskCall(14)
0xfb5: Call2 0xa18

0xfb6: Pop(-2, 1); TaskReturn
0xfb7: Pop(2)
0xfb8: Return(); Pop(2)

