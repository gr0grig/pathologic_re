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
	Fear
	SetMessage
	ClearReplies
	AddReply
	Neutral
	Dream
	all
	idle
	Adoration
	Rage
	player
	GetPosition
	HasProperty
	HasProperty
	GetProperty
	SetProperty
	GetEyesHeight
	head
	voice_common
	c
	Can't find lsh animation : 
	add
	money
	Money
	GetItemID
	Category
	AddItem
	DropItems
	SetItemName
	reputation
	ui/NPC_Anna.png
	ui/NPC_Anna_b.png
	pt_map_notkin
	ShowMap
	ook1Anna1
	ook1Anna2
	ook1Anna3
	k1q03
	k1q03AnnaGotoNotkin
	AddMark
	k2q04
	k2q04AnnaGotoGatherer1
	pt_map_gatherer1
	k2q04AnnaGotoGatherer2
	pt_map_gatherer2
	k2q04AnnaGotoGatherer3
	pt_map_gatherer3
	alpha_pills 5 is given
	alpha_pills
	beta_pills 5 is given
	beta_pills
	k3q01
	k3q01AnnaGotoMladVlad
	pt_map_mladvlad
	k3q01AnnaGotoKapella
	pt_map_kapella
	ook3Anna1
	k3q03
	k3q03AnnaGotoEva
	pt_map_eva
	ook6Anna1
	k11q01SoulCount
	ook11Anna1
	playsound
	givemoney
	giveitem
	money 1500 is given
	mapmark
	k1q01
	k1q01Healed
	k3q01KapellaAboutHan
	k6q01
	k6q01DankoPos
	k11q01
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
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemByName (2 args)
	GetInvItemProperty (3 args)
	CreateInvItem (1 args)
	SendWorldWndMessage (1 args)
	CreateFloatVector (1 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	TriggerWorld (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0xfd4
RunTask = 16

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x126 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x4a0 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x6d5 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xaa3 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xba1 Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xcd7 Vars = (int, int)
	GTASK_12 Vars = (object) Params = 2
	GTASK_13 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xe48 Vars = (int, int)
	GTASK_14 Vars = (object) Params = 2
	GTASK_15 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xfaa Vars = (int, int)
	GTASK_16 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x1020 Vars = (int)
		EVENT_6 Op = 0x1046 Vars = ()
		EVENT_5 Op = 0x1055 Vars = ()
		EVENT_45 Op = 0x1062 Vars = (bool)
		EVENT_0 Op = 0x106e Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x1120

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x12f0

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x12ee

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x12f2

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x12f4

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x1650

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
0x31: Call2 0x1236

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x1177

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
0x48: Call2 0x1165

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
0x56: IF (Stack[-1] == 0) GOTO 0xf2; Pop(1)

0x57: PushEmpty(bool)
0x58: Stack[-1] = (bool) 0
0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b: Call2 0x1435

0x5c: Pop(1)
0x5d: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x5e: PushEmpty(bool, object)
0x5f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x60: Call2 0x1441

0x61: Pop(1)
0x62: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x63: Stack[-1] = (bool) 1
0x64: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x65: PushEmpty(object, object)
0x66: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x67: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x68: Call2 0x130f

0x69: Pop(2)
0x6a: PushEmpty(string)
0x6b: Stack[-1] = "Fear"
0x6c: Call2 0x110

0x6d: Pop(1)
0x6e: Push((int) 524690)
0x6f: @@ SetMessage(Stack[-1])
0x70: Pop(1)
0x71: @@ ClearReplies()
0x72: Pop(0)
0x73: Push((int) 524691)
0x74: Push((int) 28130)
0x75: Push((int) 26030)
0x76: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x77: Pop(3)
0x78: Push((int) 542043)
0x79: Push((int) 44323)
0x7a: Push((int) 44322)
0x7b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c: Pop(3)
0x7d: GOTO 0xf2

0x7e: PushEmpty(bool)
0x7f: Stack[-1] = (bool) 0
0x80: PushEmpty(bool, object)
0x81: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x82: Call2 0x144d

0x83: Pop(1)
0x84: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x85: PushEmpty(bool, object)
0x86: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x87: Call2 0x1459

0x88: Pop(1)
0x89: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x8a: Stack[-1] = (bool) 1
0x8b: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0x8c: PushEmpty(object, object)
0x8d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8f: Call2 0x1315

0x90: Pop(2)
0x91: PushEmpty(string)
0x92: Stack[-1] = "Neutral"
0x93: Call2 0x110

0x94: Pop(1)
0x95: Push((int) 524707)
0x96: @@ SetMessage(Stack[-1])
0x97: Pop(1)
0x98: @@ ClearReplies()
0x99: Pop(0)
0x9a: Push((int) 524708)
0x9b: Push((int) 28139)
0x9c: Push((int) 26047)
0x9d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9e: Pop(3)
0x9f: Push((int) 542053)
0xa0: Push((int) 28139)
0xa1: Push((int) 44336)
0xa2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa3: Pop(3)
0xa4: GOTO 0xf2

0xa5: PushEmpty(bool, object)
0xa6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa7: Call2 0x1465

0xa8: Pop(1)
0xa9: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0xaa: PushEmpty(object, object)
0xab: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xac: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xad: Call2 0x131b

0xae: Pop(2)
0xaf: PushEmpty(string)
0xb0: Stack[-1] = "Fear"
0xb1: Call2 0x110

0xb2: Pop(1)
0xb3: Push((int) 524780)
0xb4: @@ SetMessage(Stack[-1])
0xb5: Pop(1)
0xb6: @@ ClearReplies()
0xb7: Pop(0)
0xb8: Push((int) 526860)
0xb9: Push((int) 28146)
0xba: Push((int) 28145)
0xbb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc: Pop(3)
0xbd: Push((int) 542054)
0xbe: Push((int) 28146)
0xbf: Push((int) 44338)
0xc0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc1: Pop(3)
0xc2: GOTO 0xf2

0xc3: PushEmpty(string)
0xc4: Stack[-1] = "Dream"
0xc5: Call2 0x110

0xc6: Pop(1)
0xc7: Push((int) 524709)
0xc8: @@ SetMessage(Stack[-1])
0xc9: Pop(1)
0xca: @@ ClearReplies()
0xcb: Pop(0)
0xcc: PushEmpty(bool)
0xcd: Stack[-1] = (bool) 0
0xce: PushEmpty(bool, object)
0xcf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd0: Call2 0x1471

0xd1: Pop(1)
0xd2: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xd3: PushEmpty(bool, object)
0xd4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd5: Call2 0x1465

0xd6: Pop(1)
0xd7: Pop(1); Push((bool) Stack[-1] == 0)
0xd8: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xd9: Stack[-1] = (bool) 1
0xda: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xdb: Push((int) 524787)
0xdc: Push((int) 26103)
0xdd: Push((int) 26102)
0xde: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdf: Pop(3)
0xe0: PushEmpty(bool, object)
0xe1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe2: Call2 0x147d

0xe3: Pop(1)
0xe4: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xe5: Push((int) 524796)
0xe6: Push((int) 28156)
0xe7: Push((int) 26111)
0xe8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe9: Pop(3)
0xea: Push((int) 524710)
0xeb: Push((int) -1)
0xec: Push((int) 26049)
0xed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xee: Pop(3)
0xef: GOTO 0xf2

0xf0: Return(); Pop(0)

0xf1: GOTO 0x55

0xf2: PushEmpty(bool)
0xf3: Call2 0x12f6

0xf4: Pop(0)
0xf5: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0xf6: @ lshWaitForAnimEnd()
0xf7: Pop(0)
0xf8: Push( Stack[3 + Tasks[-1].StackPointer] )
0xf9: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xfa: GOTO 0x100

0xfb: PushEmpty(string)
0xfc: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xfd: Call2 0x1201

0xfe: Pop(1)
0xff: GOTO 0xf6

0x100: GOTO 0x10f

0x101: Push("all")
0x102: Push("idle")
0x103: @ PlayAnimation(Stack[-2], Stack[-1])
0x104: Pop(2)
0x105: @ WaitForAnimEnd()
0x106: Pop(0)
0x107: Push( Stack[3 + Tasks[-1].StackPointer] )
0x108: IF (Stack[-1] == 0) GOTO 0x10a; Pop(1)

0x109: GOTO 0x10f

0x10a: Push("all")
0x10b: Push("idle")
0x10c: @ PlayAnimation(Stack[-2], Stack[-1])
0x10d: Pop(2)
0x10e: GOTO 0x105

0x10f: Return(); Pop(0)

0x110: PushEmpty()
0x111: PushEmpty(bool)
0x112: Call2 0x12f6

0x113: Pop(0)
0x114: Pop(1); Push((bool) Stack[-1] == 0)
0x115: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0x116: Return(); Pop(0)

0x117: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x118: IF (Stack[-1] == 0) GOTO 0x11a; Pop(1)

0x119: Return(); Pop(0)

0x11a: PushEmpty(string, bool)
0x11b: Stack[-2] = Stack[-3]
0x11c: Push("")
0x11d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x11e: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x11f: Stack[-1] = (bool) 0
0x120: GOTO 0x122

0x121: Stack[-1] = (bool) 1
0x122: Call2 0x1211

0x123: Pop(2)
0x124: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x125: Return(); Pop(0)

0x126: PushEmpty()
0x127: Push((int) 1)
0x128: IF (Stack[-1] == 0) GOTO 0x3ea; Pop(1)

0x129: PushEmpty()
0x12a: Call2 0x122f

0x12b: Pop(0)
0x12c: Push((int) 26100)
0x12d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x12e: IF (Stack[-1] == 0) GOTO 0x139; Pop(1)

0x12f: PushEmpty(object, object)
0x130: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x131: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x132: Call2 0x1321

0x133: Pop(2)
0x134: PushEmpty(object, object)
0x135: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x136: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x137: Call2 0x12f8

0x138: Pop(2)
0x139: Push((int) 26104)
0x13a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x13b: IF (Stack[-1] == 0) GOTO 0x146; Pop(1)

0x13c: PushEmpty(object, object)
0x13d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x13e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x13f: Call2 0x1321

0x140: Pop(2)
0x141: PushEmpty(object, object)
0x142: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x143: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x144: Call2 0x12f8

0x145: Pop(2)
0x146: Push((int) 44350)
0x147: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x148: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x149: PushEmpty(object, object)
0x14a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x14b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x14c: Call2 0x133b

0x14d: Pop(2)
0x14e: PushEmpty(object, object)
0x14f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x150: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x151: Call2 0x1308

0x152: Pop(2)
0x153: Push((int) 26113)
0x154: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x155: IF (Stack[-1] == 0) GOTO 0x165; Pop(1)

0x156: PushEmpty(object, object)
0x157: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x158: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x159: Call2 0x133b

0x15a: Pop(2)
0x15b: PushEmpty(object, object)
0x15c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x15d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x15e: Call2 0x1425

0x15f: Pop(2)
0x160: PushEmpty(object, object)
0x161: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x162: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x163: Call2 0x1419

0x164: Pop(2)
0x165: Push((int) 26029)
0x166: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x167: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x168: PushEmpty(bool)
0x169: Stack[-1] = (bool) 0
0x16a: PushEmpty(bool, object)
0x16b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x16c: Call2 0x1435

0x16d: Pop(1)
0x16e: IF (Stack[-1] == 0) GOTO 0x175; Pop(1)

0x16f: PushEmpty(bool, object)
0x170: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x171: Call2 0x1441

0x172: Pop(1)
0x173: IF (Stack[-1] == 0) GOTO 0x175; Pop(1)

0x174: Stack[-1] = (bool) 1
0x175: IF (Stack[-1] == 0) GOTO 0x18f; Pop(1)

0x176: PushEmpty(object, object)
0x177: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x178: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x179: Call2 0x130f

0x17a: Pop(2)
0x17b: PushEmpty(string)
0x17c: Stack[-1] = "Fear"
0x17d: Call2 0x110

0x17e: Pop(1)
0x17f: Push((int) 524690)
0x180: @@ SetMessage(Stack[-1])
0x181: Pop(1)
0x182: @@ ClearReplies()
0x183: Pop(0)
0x184: Push((int) 524691)
0x185: Push((int) 28130)
0x186: Push((int) 26030)
0x187: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x188: Pop(3)
0x189: Push((int) 542043)
0x18a: Push((int) 44323)
0x18b: Push((int) 44322)
0x18c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18d: Pop(3)
0x18e: Return(); Pop(0)

0x18f: PushEmpty(bool)
0x190: Stack[-1] = (bool) 0
0x191: PushEmpty(bool, object)
0x192: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x193: Call2 0x144d

0x194: Pop(1)
0x195: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x196: PushEmpty(bool, object)
0x197: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x198: Call2 0x1459

0x199: Pop(1)
0x19a: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x19b: Stack[-1] = (bool) 1
0x19c: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x19d: PushEmpty(object, object)
0x19e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x19f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1a0: Call2 0x1315

0x1a1: Pop(2)
0x1a2: PushEmpty(string)
0x1a3: Stack[-1] = "Neutral"
0x1a4: Call2 0x110

0x1a5: Pop(1)
0x1a6: Push((int) 524707)
0x1a7: @@ SetMessage(Stack[-1])
0x1a8: Pop(1)
0x1a9: @@ ClearReplies()
0x1aa: Pop(0)
0x1ab: Push((int) 524708)
0x1ac: Push((int) 28139)
0x1ad: Push((int) 26047)
0x1ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1af: Pop(3)
0x1b0: Push((int) 542053)
0x1b1: Push((int) 28139)
0x1b2: Push((int) 44336)
0x1b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b4: Pop(3)
0x1b5: Return(); Pop(0)

0x1b6: PushEmpty(bool, object)
0x1b7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1b8: Call2 0x1465

0x1b9: Pop(1)
0x1ba: IF (Stack[-1] == 0) GOTO 0x1d4; Pop(1)

0x1bb: PushEmpty(object, object)
0x1bc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1bd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1be: Call2 0x131b

0x1bf: Pop(2)
0x1c0: PushEmpty(string)
0x1c1: Stack[-1] = "Fear"
0x1c2: Call2 0x110

0x1c3: Pop(1)
0x1c4: Push((int) 524780)
0x1c5: @@ SetMessage(Stack[-1])
0x1c6: Pop(1)
0x1c7: @@ ClearReplies()
0x1c8: Pop(0)
0x1c9: Push((int) 526860)
0x1ca: Push((int) 28146)
0x1cb: Push((int) 28145)
0x1cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1cd: Pop(3)
0x1ce: Push((int) 542054)
0x1cf: Push((int) 28146)
0x1d0: Push((int) 44338)
0x1d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d2: Pop(3)
0x1d3: Return(); Pop(0)

0x1d4: PushEmpty(string)
0x1d5: Stack[-1] = "Dream"
0x1d6: Call2 0x110

0x1d7: Pop(1)
0x1d8: Push((int) 524709)
0x1d9: @@ SetMessage(Stack[-1])
0x1da: Pop(1)
0x1db: @@ ClearReplies()
0x1dc: Pop(0)
0x1dd: PushEmpty(bool)
0x1de: Stack[-1] = (bool) 0
0x1df: PushEmpty(bool, object)
0x1e0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1e1: Call2 0x1471

0x1e2: Pop(1)
0x1e3: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1e4: PushEmpty(bool, object)
0x1e5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1e6: Call2 0x1465

0x1e7: Pop(1)
0x1e8: Pop(1); Push((bool) Stack[-1] == 0)
0x1e9: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1ea: Stack[-1] = (bool) 1
0x1eb: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1ec: Push((int) 524787)
0x1ed: Push((int) 26103)
0x1ee: Push((int) 26102)
0x1ef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f0: Pop(3)
0x1f1: PushEmpty(bool, object)
0x1f2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1f3: Call2 0x147d

0x1f4: Pop(1)
0x1f5: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1f6: Push((int) 524796)
0x1f7: Push((int) 28156)
0x1f8: Push((int) 26111)
0x1f9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1fa: Pop(3)
0x1fb: Push((int) 524710)
0x1fc: Push((int) -1)
0x1fd: Push((int) 26049)
0x1fe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ff: Pop(3)
0x200: Return(); Pop(0)

0x201: Push((int) 28156)
0x202: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x203: IF (Stack[-1] == 0) GOTO 0x21d; Pop(1)

0x204: PushEmpty(string)
0x205: Stack[-1] = "Adoration"
0x206: Call2 0x110

0x207: Pop(1)
0x208: Push((int) 526870)
0x209: @@ SetMessage(Stack[-1])
0x20a: Pop(1)
0x20b: @@ ClearReplies()
0x20c: Pop(0)
0x20d: Push((int) 526871)
0x20e: Push((int) 44381)
0x20f: Push((int) 28157)
0x210: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x211: Pop(3)
0x212: Push((int) 542072)
0x213: Push((int) 44363)
0x214: Push((int) 44362)
0x215: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x216: Pop(3)
0x217: Push((int) 526872)
0x218: Push((int) 28155)
0x219: Push((int) 28158)
0x21a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21b: Pop(3)
0x21c: Return(); Pop(0)

0x21d: Push((int) 44363)
0x21e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x21f: IF (Stack[-1] == 0) GOTO 0x234; Pop(1)

0x220: PushEmpty(string)
0x221: Stack[-1] = "Adoration"
0x222: Call2 0x110

0x223: Pop(1)
0x224: Push((int) 542073)
0x225: @@ SetMessage(Stack[-1])
0x226: Pop(1)
0x227: @@ ClearReplies()
0x228: Pop(0)
0x229: Push((int) 542077)
0x22a: Push((int) 26112)
0x22b: Push((int) 44367)
0x22c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22d: Pop(3)
0x22e: Push((int) 542078)
0x22f: Push((int) 26112)
0x230: Push((int) 44368)
0x231: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x232: Pop(3)
0x233: Return(); Pop(0)

0x234: Push((int) 44381)
0x235: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x236: IF (Stack[-1] == 0) GOTO 0x247; Pop(1)

0x237: Push((int) 542087)
0x238: @@ SetMessage(Stack[-1])
0x239: Pop(1)
0x23a: @@ ClearReplies()
0x23b: Pop(0)
0x23c: Push((int) 542088)
0x23d: Push((int) 26112)
0x23e: Push((int) 44382)
0x23f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x240: Pop(3)
0x241: Push((int) 542090)
0x242: Push((int) 26112)
0x243: Push((int) 44384)
0x244: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x245: Pop(3)
0x246: Return(); Pop(0)

0x247: Push((int) 26112)
0x248: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x249: IF (Stack[-1] == 0) GOTO 0x259; Pop(1)

0x24a: PushEmpty(string)
0x24b: Stack[-1] = "Rage"
0x24c: Call2 0x110

0x24d: Pop(1)
0x24e: Push((int) 524797)
0x24f: @@ SetMessage(Stack[-1])
0x250: Pop(1)
0x251: @@ ClearReplies()
0x252: Pop(0)
0x253: Push((int) 526868)
0x254: Push((int) 28155)
0x255: Push((int) 28154)
0x256: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x257: Pop(3)
0x258: Return(); Pop(0)

0x259: Push((int) 28155)
0x25a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x25b: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x25c: PushEmpty(string)
0x25d: Stack[-1] = "Neutral"
0x25e: Call2 0x110

0x25f: Pop(1)
0x260: Push((int) 526869)
0x261: @@ SetMessage(Stack[-1])
0x262: Pop(1)
0x263: @@ ClearReplies()
0x264: Pop(0)
0x265: Push((int) 542062)
0x266: Push((int) -1)
0x267: Push((int) 44350)
0x268: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x269: Pop(3)
0x26a: Push((int) 542091)
0x26b: Push((int) 44390)
0x26c: Push((int) 44389)
0x26d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x26e: Pop(3)
0x26f: Return(); Pop(0)

0x270: Push((int) 44390)
0x271: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x272: IF (Stack[-1] == 0) GOTO 0x282; Pop(1)

0x273: PushEmpty(string)
0x274: Stack[-1] = "Adoration"
0x275: Call2 0x110

0x276: Pop(1)
0x277: Push((int) 542092)
0x278: @@ SetMessage(Stack[-1])
0x279: Pop(1)
0x27a: @@ ClearReplies()
0x27b: Pop(0)
0x27c: Push((int) 524798)
0x27d: Push((int) -1)
0x27e: Push((int) 26113)
0x27f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x280: Pop(3)
0x281: Return(); Pop(0)

0x282: Push((int) 26103)
0x283: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x284: IF (Stack[-1] == 0) GOTO 0x294; Pop(1)

0x285: PushEmpty(string)
0x286: Stack[-1] = "Adoration"
0x287: Call2 0x110

0x288: Pop(1)
0x289: Push((int) 524788)
0x28a: @@ SetMessage(Stack[-1])
0x28b: Pop(1)
0x28c: @@ ClearReplies()
0x28d: Pop(0)
0x28e: Push((int) 524789)
0x28f: Push((int) -1)
0x290: Push((int) 26104)
0x291: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x292: Pop(3)
0x293: Return(); Pop(0)

0x294: Push((int) 28146)
0x295: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x296: IF (Stack[-1] == 0) GOTO 0x2b0; Pop(1)

0x297: PushEmpty(string)
0x298: Stack[-1] = "Fear"
0x299: Call2 0x110

0x29a: Pop(1)
0x29b: Push((int) 526861)
0x29c: @@ SetMessage(Stack[-1])
0x29d: Pop(1)
0x29e: @@ ClearReplies()
0x29f: Pop(0)
0x2a0: Push((int) 542064)
0x2a1: Push((int) 44355)
0x2a2: Push((int) 44352)
0x2a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a4: Pop(3)
0x2a5: Push((int) 542069)
0x2a6: Push((int) 44355)
0x2a7: Push((int) 44357)
0x2a8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a9: Pop(3)
0x2aa: Push((int) 542070)
0x2ab: Push((int) 44364)
0x2ac: Push((int) 44358)
0x2ad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ae: Pop(3)
0x2af: Return(); Pop(0)

0x2b0: Push((int) 44364)
0x2b1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2b2: IF (Stack[-1] == 0) GOTO 0x2c7; Pop(1)

0x2b3: PushEmpty(string)
0x2b4: Stack[-1] = "Dream"
0x2b5: Call2 0x110

0x2b6: Pop(1)
0x2b7: Push((int) 542074)
0x2b8: @@ SetMessage(Stack[-1])
0x2b9: Pop(1)
0x2ba: @@ ClearReplies()
0x2bb: Pop(0)
0x2bc: Push((int) 542075)
0x2bd: Push((int) -1)
0x2be: Push((int) 44365)
0x2bf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c0: Pop(3)
0x2c1: Push((int) 542076)
0x2c2: Push((int) -1)
0x2c3: Push((int) 44366)
0x2c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c5: Pop(3)
0x2c6: Return(); Pop(0)

0x2c7: Push((int) 44355)
0x2c8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2c9: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x2ca: PushEmpty(string)
0x2cb: Stack[-1] = "Rage"
0x2cc: Call2 0x110

0x2cd: Pop(1)
0x2ce: Push((int) 542067)
0x2cf: @@ SetMessage(Stack[-1])
0x2d0: Pop(1)
0x2d1: @@ ClearReplies()
0x2d2: Pop(0)
0x2d3: Push((int) 542068)
0x2d4: Push((int) 44353)
0x2d5: Push((int) 44356)
0x2d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d7: Pop(3)
0x2d8: Push((int) 542071)
0x2d9: Push((int) 44353)
0x2da: Push((int) 44359)
0x2db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2dc: Pop(3)
0x2dd: Return(); Pop(0)

0x2de: Push((int) 44353)
0x2df: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2e0: IF (Stack[-1] == 0) GOTO 0x2f5; Pop(1)

0x2e1: PushEmpty(string)
0x2e2: Stack[-1] = "Rage"
0x2e3: Call2 0x110

0x2e4: Pop(1)
0x2e5: Push((int) 542065)
0x2e6: @@ SetMessage(Stack[-1])
0x2e7: Pop(1)
0x2e8: @@ ClearReplies()
0x2e9: Pop(0)
0x2ea: Push((int) 526862)
0x2eb: Push((int) 28148)
0x2ec: Push((int) 28147)
0x2ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ee: Pop(3)
0x2ef: Push((int) 526865)
0x2f0: Push((int) 28148)
0x2f1: Push((int) 28150)
0x2f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f3: Pop(3)
0x2f4: Return(); Pop(0)

0x2f5: Push((int) 28148)
0x2f6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2f7: IF (Stack[-1] == 0) GOTO 0x30c; Pop(1)

0x2f8: PushEmpty(string)
0x2f9: Stack[-1] = "Neutral"
0x2fa: Call2 0x110

0x2fb: Pop(1)
0x2fc: Push((int) 526863)
0x2fd: @@ SetMessage(Stack[-1])
0x2fe: Pop(1)
0x2ff: @@ ClearReplies()
0x300: Pop(0)
0x301: Push((int) 524783)
0x302: Push((int) 26099)
0x303: Push((int) 26098)
0x304: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x305: Pop(3)
0x306: Push((int) 542056)
0x307: Push((int) 26099)
0x308: Push((int) 44341)
0x309: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x30a: Pop(3)
0x30b: Return(); Pop(0)

0x30c: Push((int) 26099)
0x30d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x30e: IF (Stack[-1] == 0) GOTO 0x323; Pop(1)

0x30f: PushEmpty(string)
0x310: Stack[-1] = "Neutral"
0x311: Call2 0x110

0x312: Pop(1)
0x313: Push((int) 524784)
0x314: @@ SetMessage(Stack[-1])
0x315: Pop(1)
0x316: @@ ClearReplies()
0x317: Pop(0)
0x318: Push((int) 524785)
0x319: Push((int) -1)
0x31a: Push((int) 26100)
0x31b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x31c: Pop(3)
0x31d: Push((int) 524786)
0x31e: Push((int) -1)
0x31f: Push((int) 26101)
0x320: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x321: Pop(3)
0x322: Return(); Pop(0)

0x323: Push((int) 28139)
0x324: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x325: IF (Stack[-1] == 0) GOTO 0x33a; Pop(1)

0x326: PushEmpty(string)
0x327: Stack[-1] = "Adoration"
0x328: Call2 0x110

0x329: Pop(1)
0x32a: Push((int) 526854)
0x32b: @@ SetMessage(Stack[-1])
0x32c: Pop(1)
0x32d: @@ ClearReplies()
0x32e: Pop(0)
0x32f: Push((int) 526855)
0x330: Push((int) 28142)
0x331: Push((int) 28140)
0x332: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x333: Pop(3)
0x334: Push((int) 526856)
0x335: Push((int) -1)
0x336: Push((int) 28141)
0x337: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x338: Pop(3)
0x339: Return(); Pop(0)

0x33a: Push((int) 28142)
0x33b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x33c: IF (Stack[-1] == 0) GOTO 0x351; Pop(1)

0x33d: PushEmpty(string)
0x33e: Stack[-1] = "Adoration"
0x33f: Call2 0x110

0x340: Pop(1)
0x341: Push((int) 526857)
0x342: @@ SetMessage(Stack[-1])
0x343: Pop(1)
0x344: @@ ClearReplies()
0x345: Pop(0)
0x346: Push((int) 526858)
0x347: Push((int) -1)
0x348: Push((int) 28143)
0x349: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x34a: Pop(3)
0x34b: Push((int) 526859)
0x34c: Push((int) -1)
0x34d: Push((int) 28144)
0x34e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x34f: Pop(3)
0x350: Return(); Pop(0)

0x351: Push((int) 44323)
0x352: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x353: IF (Stack[-1] == 0) GOTO 0x368; Pop(1)

0x354: PushEmpty(string)
0x355: Stack[-1] = "Dream"
0x356: Call2 0x110

0x357: Pop(1)
0x358: Push((int) 542044)
0x359: @@ SetMessage(Stack[-1])
0x35a: Pop(1)
0x35b: @@ ClearReplies()
0x35c: Pop(0)
0x35d: Push((int) 542045)
0x35e: Push((int) 44327)
0x35f: Push((int) 44324)
0x360: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x361: Pop(3)
0x362: Push((int) 542046)
0x363: Push((int) 28132)
0x364: Push((int) 44325)
0x365: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x366: Pop(3)
0x367: Return(); Pop(0)

0x368: Push((int) 28130)
0x369: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x36a: IF (Stack[-1] == 0) GOTO 0x37f; Pop(1)

0x36b: PushEmpty(string)
0x36c: Stack[-1] = "Rage"
0x36d: Call2 0x110

0x36e: Pop(1)
0x36f: Push((int) 526845)
0x370: @@ SetMessage(Stack[-1])
0x371: Pop(1)
0x372: @@ ClearReplies()
0x373: Pop(0)
0x374: Push((int) 526846)
0x375: Push((int) 28132)
0x376: Push((int) 28131)
0x377: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x378: Pop(3)
0x379: Push((int) 542047)
0x37a: Push((int) 44327)
0x37b: Push((int) 44326)
0x37c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x37d: Pop(3)
0x37e: Return(); Pop(0)

0x37f: Push((int) 44327)
0x380: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x381: IF (Stack[-1] == 0) GOTO 0x391; Pop(1)

0x382: PushEmpty(string)
0x383: Stack[-1] = "Dream"
0x384: Call2 0x110

0x385: Pop(1)
0x386: Push((int) 542048)
0x387: @@ SetMessage(Stack[-1])
0x388: Pop(1)
0x389: @@ ClearReplies()
0x38a: Pop(0)
0x38b: Push((int) 542050)
0x38c: Push((int) 44333)
0x38d: Push((int) 44331)
0x38e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x38f: Pop(3)
0x390: Return(); Pop(0)

0x391: Push((int) 44333)
0x392: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x393: IF (Stack[-1] == 0) GOTO 0x3a3; Pop(1)

0x394: PushEmpty(string)
0x395: Stack[-1] = "Neutral"
0x396: Call2 0x110

0x397: Pop(1)
0x398: Push((int) 542051)
0x399: @@ SetMessage(Stack[-1])
0x39a: Pop(1)
0x39b: @@ ClearReplies()
0x39c: Pop(0)
0x39d: Push((int) 542052)
0x39e: Push((int) 28134)
0x39f: Push((int) 44334)
0x3a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a1: Pop(3)
0x3a2: Return(); Pop(0)

0x3a3: Push((int) 28132)
0x3a4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3a5: IF (Stack[-1] == 0) GOTO 0x3b5; Pop(1)

0x3a6: PushEmpty(string)
0x3a7: Stack[-1] = "Rage"
0x3a8: Call2 0x110

0x3a9: Pop(1)
0x3aa: Push((int) 526847)
0x3ab: @@ SetMessage(Stack[-1])
0x3ac: Pop(1)
0x3ad: @@ ClearReplies()
0x3ae: Pop(0)
0x3af: Push((int) 526848)
0x3b0: Push((int) 28134)
0x3b1: Push((int) 28133)
0x3b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b3: Pop(3)
0x3b4: Return(); Pop(0)

0x3b5: Push((int) 28134)
0x3b6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3b7: IF (Stack[-1] == 0) GOTO 0x3c7; Pop(1)

0x3b8: PushEmpty(string)
0x3b9: Stack[-1] = "Rage"
0x3ba: Call2 0x110

0x3bb: Pop(1)
0x3bc: Push((int) 526849)
0x3bd: @@ SetMessage(Stack[-1])
0x3be: Pop(1)
0x3bf: @@ ClearReplies()
0x3c0: Pop(0)
0x3c1: Push((int) 526850)
0x3c2: Push((int) 28136)
0x3c3: Push((int) 28135)
0x3c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c5: Pop(3)
0x3c6: Return(); Pop(0)

0x3c7: Push((int) 28136)
0x3c8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3c9: IF (Stack[-1] == 0) GOTO 0x3de; Pop(1)

0x3ca: PushEmpty(string)
0x3cb: Stack[-1] = "Neutral"
0x3cc: Call2 0x110

0x3cd: Pop(1)
0x3ce: Push((int) 526851)
0x3cf: @@ SetMessage(Stack[-1])
0x3d0: Pop(1)
0x3d1: @@ ClearReplies()
0x3d2: Pop(0)
0x3d3: Push((int) 526852)
0x3d4: Push((int) -1)
0x3d5: Push((int) 28137)
0x3d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d7: Pop(3)
0x3d8: Push((int) 526853)
0x3d9: Push((int) -1)
0x3da: Push((int) 28138)
0x3db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3dc: Pop(3)
0x3dd: Return(); Pop(0)

0x3de: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x3df: PushEmpty(bool)
0x3e0: Call2 0x12f6

0x3e1: Pop(0)
0x3e2: IF (Stack[-1] == 0) GOTO 0x3e6; Pop(1)

0x3e3: @ lshStopAnimation()
0x3e4: Pop(0)
0x3e5: GOTO 0x3e8

0x3e6: @ StopAnimation()
0x3e7: Pop(0)
0x3e8: Return(); Pop(0)

0x3e9: GOTO 0x127

0x3ea: Return(); Pop(0)

0x3eb: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x3ec: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x3ed: PushEmpty(bool, object, float)
0x3ee: Stack[-2] = Stack[-12]
0x3ef: Stack[-1] = (float) 70.0
0x3f0: Call2 0x1120

0x3f1: Pop(2)
0x3f2: Pop(1); Push((bool) Stack[-1] == 0)
0x3f3: IF (Stack[-1] == 0) GOTO 0x3f6; Pop(1)

0x3f4: Stack[-10] = (int) -2
0x3f5: Return(); Pop(8)

0x3f6: @ CreateDialog(Stack[-4])
0x3f7: Pop(0)
0x3f8: PushEmpty(int)
0x3f9: Call2 0x12f0

0x3fa: Pop(0)
0x3fb: @@ SetNPCName(Stack[-1])
0x3fc: Pop(1)
0x3fd: PushEmpty(int)
0x3fe: Call2 0x12ee

0x3ff: Pop(0)
0x400: @@ SetNPCDescription(Stack[-1])
0x401: Pop(1)
0x402: PushEmpty(string)
0x403: Call2 0x12f2

0x404: Pop(0)
0x405: @@ SetPhoto(Stack[-1])
0x406: Pop(1)
0x407: PushEmpty(string)
0x408: Call2 0x12f4

0x409: Pop(0)
0x40a: @@ SetPhoto2(Stack[-1])
0x40b: Pop(1)
0x40c: PushEmpty(int)
0x40d: Call2 0x1650

0x40e: Pop(0)
0x40f: @@ SetPlayerName(Stack[-1])
0x410: Pop(1)
0x411: Stack[-2] = (int) -1
0x412: @ IsOverrideActive(Stack[-3])
0x413: Pop(0)
0x414: Push(Stack[-3])
0x415: IF (Stack[-1] == 0) GOTO 0x418; Pop(1)

0x416: Stack[-10] = (int) -2
0x417: Return(); Pop(8)

0x418: @ DoDialog(Stack[-4])
0x419: Pop(0)
0x41a: PushEmpty(bool, object)
0x41b: PushEmpty(object)
0x41c: Call2 0x1236

0x41d: Stack[-2] = Stack[-1]
0x41e: Pop(1)
0x41f: Call2 0x1177

0x420: Pop(2)
0x421: PushEmpty(object, object)
0x422: Stack[-2] = Stack[-11]
0x423: Stack[-1] = Stack[-6]
0x424: Push(-2, 4); TaskCall(3)
0x425: Call2 0x43c

0x426: Pop(-2, 4); TaskReturn
0x427: Pop(2)
0x428: @@ IsDialogEnd(Stack[-1])
0x429: Pop(0)
0x42a: Pop(0); Push((bool) Stack[-1] == 0)
0x42b: IF (Stack[-1] == 0) GOTO 0x431; Pop(1)

0x42c: @ sync()
0x42d: Pop(0)
0x42e: @@ IsDialogEnd(Stack[-1])
0x42f: Pop(0)
0x430: GOTO 0x42a

0x431: PushEmpty(object)
0x432: Stack[-1] = Stack[-10]
0x433: Call2 0x1165

0x434: Pop(1)
0x435: @ StopDialog(Stack[-4])
0x436: Pop(0)
0x437: @@ GetReturnValue(Stack[-2])
0x438: Pop(0)
0x439: Stack[-10] = Stack[-2]
0x43a: Return(); Pop(8)

0x43b: Stack[-4] = 0
0x43c: PushEmpty()
0x43d: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x43e: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x43f: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x440: Push((int) 1)
0x441: IF (Stack[-1] == 0) GOTO 0x46c; Pop(1)

0x442: PushEmpty(string)
0x443: Stack[-1] = "Neutral"
0x444: Call2 0x48a

0x445: Pop(1)
0x446: Push((int) 525346)
0x447: @@ SetMessage(Stack[-1])
0x448: Pop(1)
0x449: @@ ClearReplies()
0x44a: Pop(0)
0x44b: PushEmpty(bool, object)
0x44c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x44d: Call2 0x1489

0x44e: Pop(1)
0x44f: IF (Stack[-1] == 0) GOTO 0x455; Pop(1)

0x450: Push((int) 525348)
0x451: Push((int) 44408)
0x452: Push((int) 26716)
0x453: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x454: Pop(3)
0x455: PushEmpty(bool, object)
0x456: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x457: Call2 0x1495

0x458: Pop(1)
0x459: IF (Stack[-1] == 0) GOTO 0x45f; Pop(1)

0x45a: Push((int) 541760)
0x45b: Push((int) 43964)
0x45c: Push((int) 43963)
0x45d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x45e: Pop(3)
0x45f: Push((int) 525347)
0x460: Push((int) -1)
0x461: Push((int) 26715)
0x462: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x463: Pop(3)
0x464: Push((int) 529145)
0x465: Push((int) -1)
0x466: Push((int) 30591)
0x467: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x468: Pop(3)
0x469: GOTO 0x46c

0x46a: Return(); Pop(0)

0x46b: GOTO 0x440

0x46c: PushEmpty(bool)
0x46d: Call2 0x12f6

0x46e: Pop(0)
0x46f: IF (Stack[-1] == 0) GOTO 0x47b; Pop(1)

0x470: @ lshWaitForAnimEnd()
0x471: Pop(0)
0x472: Push( Stack[3 + Tasks[-1].StackPointer] )
0x473: IF (Stack[-1] == 0) GOTO 0x475; Pop(1)

0x474: GOTO 0x47a

0x475: PushEmpty(string)
0x476: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x477: Call2 0x1201

0x478: Pop(1)
0x479: GOTO 0x470

0x47a: GOTO 0x489

0x47b: Push("all")
0x47c: Push("idle")
0x47d: @ PlayAnimation(Stack[-2], Stack[-1])
0x47e: Pop(2)
0x47f: @ WaitForAnimEnd()
0x480: Pop(0)
0x481: Push( Stack[3 + Tasks[-1].StackPointer] )
0x482: IF (Stack[-1] == 0) GOTO 0x484; Pop(1)

0x483: GOTO 0x489

0x484: Push("all")
0x485: Push("idle")
0x486: @ PlayAnimation(Stack[-2], Stack[-1])
0x487: Pop(2)
0x488: GOTO 0x47f

0x489: Return(); Pop(0)

0x48a: PushEmpty()
0x48b: PushEmpty(bool)
0x48c: Call2 0x12f6

0x48d: Pop(0)
0x48e: Pop(1); Push((bool) Stack[-1] == 0)
0x48f: IF (Stack[-1] == 0) GOTO 0x491; Pop(1)

0x490: Return(); Pop(0)

0x491: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x492: IF (Stack[-1] == 0) GOTO 0x494; Pop(1)

0x493: Return(); Pop(0)

0x494: PushEmpty(string, bool)
0x495: Stack[-2] = Stack[-3]
0x496: Push("")
0x497: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x498: IF (Stack[-1] == 0) GOTO 0x49b; Pop(1)

0x499: Stack[-1] = (bool) 0
0x49a: GOTO 0x49c

0x49b: Stack[-1] = (bool) 1
0x49c: Call2 0x1211

0x49d: Pop(2)
0x49e: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x49f: Return(); Pop(0)

0x4a0: PushEmpty()
0x4a1: Push((int) 1)
0x4a2: IF (Stack[-1] == 0) GOTO 0x5ea; Pop(1)

0x4a3: PushEmpty()
0x4a4: Call2 0x122f

0x4a5: Pop(0)
0x4a6: Push((int) 26722)
0x4a7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4a8: IF (Stack[-1] == 0) GOTO 0x4ae; Pop(1)

0x4a9: PushEmpty(object, object)
0x4aa: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4ab: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4ac: Call2 0x1344

0x4ad: Pop(2)
0x4ae: Push((int) 26725)
0x4af: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4b0: IF (Stack[-1] == 0) GOTO 0x4c5; Pop(1)

0x4b1: PushEmpty(object, object)
0x4b2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4b3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4b4: Call2 0x136d

0x4b5: Pop(2)
0x4b6: PushEmpty(object, object)
0x4b7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4b8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4b9: Call2 0x1376

0x4ba: Pop(2)
0x4bb: PushEmpty(object, object)
0x4bc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4bd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4be: Call2 0x1381

0x4bf: Pop(2)
0x4c0: PushEmpty(object, object)
0x4c1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4c2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4c3: Call2 0x141f

0x4c4: Pop(2)
0x4c5: Push((int) 43965)
0x4c6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4c7: IF (Stack[-1] == 0) GOTO 0x4dc; Pop(1)

0x4c8: PushEmpty(object, object)
0x4c9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4ca: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4cb: Call2 0x136d

0x4cc: Pop(2)
0x4cd: PushEmpty(object, object)
0x4ce: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4cf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4d0: Call2 0x1376

0x4d1: Pop(2)
0x4d2: PushEmpty(object, object)
0x4d3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4d4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4d5: Call2 0x1381

0x4d6: Pop(2)
0x4d7: PushEmpty(object, object)
0x4d8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4d9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4da: Call2 0x141f

0x4db: Pop(2)
0x4dc: Push((int) 43966)
0x4dd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4de: IF (Stack[-1] == 0) GOTO 0x4f3; Pop(1)

0x4df: PushEmpty(object, object)
0x4e0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4e1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4e2: Call2 0x136d

0x4e3: Pop(2)
0x4e4: PushEmpty(object, object)
0x4e5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4e6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4e7: Call2 0x1376

0x4e8: Pop(2)
0x4e9: PushEmpty(object, object)
0x4ea: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4eb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4ec: Call2 0x1381

0x4ed: Pop(2)
0x4ee: PushEmpty(object, object)
0x4ef: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4f0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4f1: Call2 0x141f

0x4f2: Pop(2)
0x4f3: Push((int) 26714)
0x4f4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4f5: IF (Stack[-1] == 0) GOTO 0x51e; Pop(1)

0x4f6: PushEmpty(string)
0x4f7: Stack[-1] = "Neutral"
0x4f8: Call2 0x48a

0x4f9: Pop(1)
0x4fa: Push((int) 525346)
0x4fb: @@ SetMessage(Stack[-1])
0x4fc: Pop(1)
0x4fd: @@ ClearReplies()
0x4fe: Pop(0)
0x4ff: PushEmpty(bool, object)
0x500: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x501: Call2 0x1489

0x502: Pop(1)
0x503: IF (Stack[-1] == 0) GOTO 0x509; Pop(1)

0x504: Push((int) 525348)
0x505: Push((int) 44408)
0x506: Push((int) 26716)
0x507: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x508: Pop(3)
0x509: PushEmpty(bool, object)
0x50a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x50b: Call2 0x1495

0x50c: Pop(1)
0x50d: IF (Stack[-1] == 0) GOTO 0x513; Pop(1)

0x50e: Push((int) 541760)
0x50f: Push((int) 43964)
0x510: Push((int) 43963)
0x511: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x512: Pop(3)
0x513: Push((int) 525347)
0x514: Push((int) -1)
0x515: Push((int) 26715)
0x516: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x517: Pop(3)
0x518: Push((int) 529145)
0x519: Push((int) -1)
0x51a: Push((int) 30591)
0x51b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x51c: Pop(3)
0x51d: Return(); Pop(0)

0x51e: Push((int) 43964)
0x51f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x520: IF (Stack[-1] == 0) GOTO 0x535; Pop(1)

0x521: PushEmpty(string)
0x522: Stack[-1] = "Fear"
0x523: Call2 0x48a

0x524: Pop(1)
0x525: Push((int) 541761)
0x526: @@ SetMessage(Stack[-1])
0x527: Pop(1)
0x528: @@ ClearReplies()
0x529: Pop(0)
0x52a: Push((int) 541762)
0x52b: Push((int) -1)
0x52c: Push((int) 43965)
0x52d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x52e: Pop(3)
0x52f: Push((int) 541763)
0x530: Push((int) -1)
0x531: Push((int) 43966)
0x532: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x533: Pop(3)
0x534: Return(); Pop(0)

0x535: Push((int) 44408)
0x536: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x537: IF (Stack[-1] == 0) GOTO 0x54c; Pop(1)

0x538: PushEmpty(string)
0x539: Stack[-1] = "Rage"
0x53a: Call2 0x48a

0x53b: Pop(1)
0x53c: Push((int) 542106)
0x53d: @@ SetMessage(Stack[-1])
0x53e: Pop(1)
0x53f: @@ ClearReplies()
0x540: Pop(0)
0x541: Push((int) 542107)
0x542: Push((int) 44410)
0x543: Push((int) 44409)
0x544: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x545: Pop(3)
0x546: Push((int) 542110)
0x547: Push((int) 30593)
0x548: Push((int) 44412)
0x549: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x54a: Pop(3)
0x54b: Return(); Pop(0)

0x54c: Push((int) 44410)
0x54d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x54e: IF (Stack[-1] == 0) GOTO 0x563; Pop(1)

0x54f: PushEmpty(string)
0x550: Stack[-1] = "Rage"
0x551: Call2 0x48a

0x552: Pop(1)
0x553: Push((int) 542108)
0x554: @@ SetMessage(Stack[-1])
0x555: Pop(1)
0x556: @@ ClearReplies()
0x557: Pop(0)
0x558: Push((int) 542109)
0x559: Push((int) 26717)
0x55a: Push((int) 44411)
0x55b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x55c: Pop(3)
0x55d: Push((int) 542111)
0x55e: Push((int) 30593)
0x55f: Push((int) 44414)
0x560: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x561: Pop(3)
0x562: Return(); Pop(0)

0x563: Push((int) 26717)
0x564: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x565: IF (Stack[-1] == 0) GOTO 0x57a; Pop(1)

0x566: PushEmpty(string)
0x567: Stack[-1] = "Neutral"
0x568: Call2 0x48a

0x569: Pop(1)
0x56a: Push((int) 525349)
0x56b: @@ SetMessage(Stack[-1])
0x56c: Pop(1)
0x56d: @@ ClearReplies()
0x56e: Pop(0)
0x56f: Push((int) 529146)
0x570: Push((int) 30593)
0x571: Push((int) 30592)
0x572: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x573: Pop(3)
0x574: Push((int) 529150)
0x575: Push((int) 30593)
0x576: Push((int) 30596)
0x577: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x578: Pop(3)
0x579: Return(); Pop(0)

0x57a: Push((int) 30593)
0x57b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x57c: IF (Stack[-1] == 0) GOTO 0x58c; Pop(1)

0x57d: PushEmpty(string)
0x57e: Stack[-1] = "Neutral"
0x57f: Call2 0x48a

0x580: Pop(1)
0x581: Push((int) 529147)
0x582: @@ SetMessage(Stack[-1])
0x583: Pop(1)
0x584: @@ ClearReplies()
0x585: Pop(0)
0x586: Push((int) 529148)
0x587: Push((int) 30595)
0x588: Push((int) 30594)
0x589: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x58a: Pop(3)
0x58b: Return(); Pop(0)

0x58c: Push((int) 30595)
0x58d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x58e: IF (Stack[-1] == 0) GOTO 0x5a3; Pop(1)

0x58f: PushEmpty(string)
0x590: Stack[-1] = "Adoration"
0x591: Call2 0x48a

0x592: Pop(1)
0x593: Push((int) 529149)
0x594: @@ SetMessage(Stack[-1])
0x595: Pop(1)
0x596: @@ ClearReplies()
0x597: Pop(0)
0x598: Push((int) 525350)
0x599: Push((int) 26719)
0x59a: Push((int) 26718)
0x59b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x59c: Pop(3)
0x59d: Push((int) 542112)
0x59e: Push((int) 26721)
0x59f: Push((int) 44416)
0x5a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a1: Pop(3)
0x5a2: Return(); Pop(0)

0x5a3: Push((int) 26719)
0x5a4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5a5: IF (Stack[-1] == 0) GOTO 0x5ba; Pop(1)

0x5a6: PushEmpty(string)
0x5a7: Stack[-1] = "Neutral"
0x5a8: Call2 0x48a

0x5a9: Pop(1)
0x5aa: Push((int) 525351)
0x5ab: @@ SetMessage(Stack[-1])
0x5ac: Pop(1)
0x5ad: @@ ClearReplies()
0x5ae: Pop(0)
0x5af: Push((int) 525352)
0x5b0: Push((int) 26721)
0x5b1: Push((int) 26720)
0x5b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5b3: Pop(3)
0x5b4: Push((int) 525355)
0x5b5: Push((int) 26724)
0x5b6: Push((int) 26723)
0x5b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5b8: Pop(3)
0x5b9: Return(); Pop(0)

0x5ba: Push((int) 26724)
0x5bb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5bc: IF (Stack[-1] == 0) GOTO 0x5cc; Pop(1)

0x5bd: PushEmpty(string)
0x5be: Stack[-1] = "Neutral"
0x5bf: Call2 0x48a

0x5c0: Pop(1)
0x5c1: Push((int) 525356)
0x5c2: @@ SetMessage(Stack[-1])
0x5c3: Pop(1)
0x5c4: @@ ClearReplies()
0x5c5: Pop(0)
0x5c6: Push((int) 525357)
0x5c7: Push((int) -1)
0x5c8: Push((int) 26725)
0x5c9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ca: Pop(3)
0x5cb: Return(); Pop(0)

0x5cc: Push((int) 26721)
0x5cd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5ce: IF (Stack[-1] == 0) GOTO 0x5de; Pop(1)

0x5cf: PushEmpty(string)
0x5d0: Stack[-1] = "Neutral"
0x5d1: Call2 0x48a

0x5d2: Pop(1)
0x5d3: Push((int) 525353)
0x5d4: @@ SetMessage(Stack[-1])
0x5d5: Pop(1)
0x5d6: @@ ClearReplies()
0x5d7: Pop(0)
0x5d8: Push((int) 525354)
0x5d9: Push((int) -1)
0x5da: Push((int) 26722)
0x5db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5dc: Pop(3)
0x5dd: Return(); Pop(0)

0x5de: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x5df: PushEmpty(bool)
0x5e0: Call2 0x12f6

0x5e1: Pop(0)
0x5e2: IF (Stack[-1] == 0) GOTO 0x5e6; Pop(1)

0x5e3: @ lshStopAnimation()
0x5e4: Pop(0)
0x5e5: GOTO 0x5e8

0x5e6: @ StopAnimation()
0x5e7: Pop(0)
0x5e8: Return(); Pop(0)

0x5e9: GOTO 0x4a1

0x5ea: Return(); Pop(0)

0x5eb: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x5ec: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x5ed: PushEmpty(bool, object, float)
0x5ee: Stack[-2] = Stack[-12]
0x5ef: Stack[-1] = (float) 70.0
0x5f0: Call2 0x1120

0x5f1: Pop(2)
0x5f2: Pop(1); Push((bool) Stack[-1] == 0)
0x5f3: IF (Stack[-1] == 0) GOTO 0x5f6; Pop(1)

0x5f4: Stack[-10] = (int) -2
0x5f5: Return(); Pop(8)

0x5f6: @ CreateDialog(Stack[-4])
0x5f7: Pop(0)
0x5f8: PushEmpty(int)
0x5f9: Call2 0x12f0

0x5fa: Pop(0)
0x5fb: @@ SetNPCName(Stack[-1])
0x5fc: Pop(1)
0x5fd: PushEmpty(int)
0x5fe: Call2 0x12ee

0x5ff: Pop(0)
0x600: @@ SetNPCDescription(Stack[-1])
0x601: Pop(1)
0x602: PushEmpty(string)
0x603: Call2 0x12f2

0x604: Pop(0)
0x605: @@ SetPhoto(Stack[-1])
0x606: Pop(1)
0x607: PushEmpty(string)
0x608: Call2 0x12f4

0x609: Pop(0)
0x60a: @@ SetPhoto2(Stack[-1])
0x60b: Pop(1)
0x60c: PushEmpty(int)
0x60d: Call2 0x1650

0x60e: Pop(0)
0x60f: @@ SetPlayerName(Stack[-1])
0x610: Pop(1)
0x611: Stack[-2] = (int) -1
0x612: @ IsOverrideActive(Stack[-3])
0x613: Pop(0)
0x614: Push(Stack[-3])
0x615: IF (Stack[-1] == 0) GOTO 0x618; Pop(1)

0x616: Stack[-10] = (int) -2
0x617: Return(); Pop(8)

0x618: @ DoDialog(Stack[-4])
0x619: Pop(0)
0x61a: PushEmpty(bool, object)
0x61b: PushEmpty(object)
0x61c: Call2 0x1236

0x61d: Stack[-2] = Stack[-1]
0x61e: Pop(1)
0x61f: Call2 0x1177

0x620: Pop(2)
0x621: PushEmpty(object, object)
0x622: Stack[-2] = Stack[-11]
0x623: Stack[-1] = Stack[-6]
0x624: Push(-2, 4); TaskCall(5)
0x625: Call2 0x63c

0x626: Pop(-2, 4); TaskReturn
0x627: Pop(2)
0x628: @@ IsDialogEnd(Stack[-1])
0x629: Pop(0)
0x62a: Pop(0); Push((bool) Stack[-1] == 0)
0x62b: IF (Stack[-1] == 0) GOTO 0x631; Pop(1)

0x62c: @ sync()
0x62d: Pop(0)
0x62e: @@ IsDialogEnd(Stack[-1])
0x62f: Pop(0)
0x630: GOTO 0x62a

0x631: PushEmpty(object)
0x632: Stack[-1] = Stack[-10]
0x633: Call2 0x1165

0x634: Pop(1)
0x635: @ StopDialog(Stack[-4])
0x636: Pop(0)
0x637: @@ GetReturnValue(Stack[-2])
0x638: Pop(0)
0x639: Stack[-10] = Stack[-2]
0x63a: Return(); Pop(8)

0x63b: Stack[-4] = 0
0x63c: PushEmpty()
0x63d: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x63e: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x63f: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x640: Push((int) 1)
0x641: IF (Stack[-1] == 0) GOTO 0x6a1; Pop(1)

0x642: PushEmpty(bool, object)
0x643: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x644: Call2 0x14c5

0x645: Pop(1)
0x646: IF (Stack[-1] == 0) GOTO 0x65b; Pop(1)

0x647: PushEmpty(string)
0x648: Stack[-1] = "Neutral"
0x649: Call2 0x6bf

0x64a: Pop(1)
0x64b: Push((int) 525442)
0x64c: @@ SetMessage(Stack[-1])
0x64d: Pop(1)
0x64e: @@ ClearReplies()
0x64f: Pop(0)
0x650: Push((int) 525443)
0x651: Push((int) -1)
0x652: Push((int) 26811)
0x653: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x654: Pop(3)
0x655: Push((int) 529337)
0x656: Push((int) -1)
0x657: Push((int) 30792)
0x658: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x659: Pop(3)
0x65a: GOTO 0x6a1

0x65b: PushEmpty(string)
0x65c: Stack[-1] = "Neutral"
0x65d: Call2 0x6bf

0x65e: Pop(1)
0x65f: Push((int) 525406)
0x660: @@ SetMessage(Stack[-1])
0x661: Pop(1)
0x662: @@ ClearReplies()
0x663: Pop(0)
0x664: PushEmpty(bool, object)
0x665: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x666: Call2 0x14a1

0x667: Pop(1)
0x668: IF (Stack[-1] == 0) GOTO 0x66e; Pop(1)

0x669: Push((int) 525407)
0x66a: Push((int) 26776)
0x66b: Push((int) 26775)
0x66c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x66d: Pop(3)
0x66e: PushEmpty(bool)
0x66f: Stack[-1] = (bool) 0
0x670: PushEmpty(bool, object)
0x671: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x672: Call2 0x14b9

0x673: Pop(1)
0x674: IF (Stack[-1] == 0) GOTO 0x67b; Pop(1)

0x675: PushEmpty(bool, object)
0x676: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x677: Call2 0x14ad

0x678: Pop(1)
0x679: IF (Stack[-1] == 0) GOTO 0x67b; Pop(1)

0x67a: Stack[-1] = (bool) 1
0x67b: IF (Stack[-1] == 0) GOTO 0x681; Pop(1)

0x67c: Push((int) 525425)
0x67d: Push((int) 40970)
0x67e: Push((int) 26793)
0x67f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x680: Pop(3)
0x681: PushEmpty(bool)
0x682: Stack[-1] = (bool) 0
0x683: PushEmpty(bool, object)
0x684: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x685: Call2 0x14dd

0x686: Pop(1)
0x687: IF (Stack[-1] == 0) GOTO 0x68e; Pop(1)

0x688: PushEmpty(bool, object)
0x689: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x68a: Call2 0x14d1

0x68b: Pop(1)
0x68c: IF (Stack[-1] == 0) GOTO 0x68e; Pop(1)

0x68d: Stack[-1] = (bool) 1
0x68e: IF (Stack[-1] == 0) GOTO 0x694; Pop(1)

0x68f: Push((int) 525575)
0x690: Push((int) 26923)
0x691: Push((int) 26922)
0x692: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x693: Pop(3)
0x694: Push((int) 525412)
0x695: Push((int) -1)
0x696: Push((int) 26780)
0x697: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x698: Pop(3)
0x699: Push((int) 538971)
0x69a: Push((int) -1)
0x69b: Push((int) 40909)
0x69c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69d: Pop(3)
0x69e: GOTO 0x6a1

0x69f: Return(); Pop(0)

0x6a0: GOTO 0x640

0x6a1: PushEmpty(bool)
0x6a2: Call2 0x12f6

0x6a3: Pop(0)
0x6a4: IF (Stack[-1] == 0) GOTO 0x6b0; Pop(1)

0x6a5: @ lshWaitForAnimEnd()
0x6a6: Pop(0)
0x6a7: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6a8: IF (Stack[-1] == 0) GOTO 0x6aa; Pop(1)

0x6a9: GOTO 0x6af

0x6aa: PushEmpty(string)
0x6ab: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x6ac: Call2 0x1201

0x6ad: Pop(1)
0x6ae: GOTO 0x6a5

0x6af: GOTO 0x6be

0x6b0: Push("all")
0x6b1: Push("idle")
0x6b2: @ PlayAnimation(Stack[-2], Stack[-1])
0x6b3: Pop(2)
0x6b4: @ WaitForAnimEnd()
0x6b5: Pop(0)
0x6b6: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6b7: IF (Stack[-1] == 0) GOTO 0x6b9; Pop(1)

0x6b8: GOTO 0x6be

0x6b9: Push("all")
0x6ba: Push("idle")
0x6bb: @ PlayAnimation(Stack[-2], Stack[-1])
0x6bc: Pop(2)
0x6bd: GOTO 0x6b4

0x6be: Return(); Pop(0)

0x6bf: PushEmpty()
0x6c0: PushEmpty(bool)
0x6c1: Call2 0x12f6

0x6c2: Pop(0)
0x6c3: Pop(1); Push((bool) Stack[-1] == 0)
0x6c4: IF (Stack[-1] == 0) GOTO 0x6c6; Pop(1)

0x6c5: Return(); Pop(0)

0x6c6: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x6c7: IF (Stack[-1] == 0) GOTO 0x6c9; Pop(1)

0x6c8: Return(); Pop(0)

0x6c9: PushEmpty(string, bool)
0x6ca: Stack[-2] = Stack[-3]
0x6cb: Push("")
0x6cc: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x6cd: IF (Stack[-1] == 0) GOTO 0x6d0; Pop(1)

0x6ce: Stack[-1] = (bool) 0
0x6cf: GOTO 0x6d1

0x6d0: Stack[-1] = (bool) 1
0x6d1: Call2 0x1211

0x6d2: Pop(2)
0x6d3: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x6d4: Return(); Pop(0)

0x6d5: PushEmpty()
0x6d6: Push((int) 1)
0x6d7: IF (Stack[-1] == 0) GOTO 0xa01; Pop(1)

0x6d8: PushEmpty()
0x6d9: Call2 0x122f

0x6da: Pop(0)
0x6db: Push((int) 26779)
0x6dc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6dd: IF (Stack[-1] == 0) GOTO 0x6e8; Pop(1)

0x6de: PushEmpty(object, object)
0x6df: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6e0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6e1: Call2 0x138c

0x6e2: Pop(2)
0x6e3: PushEmpty(object, object)
0x6e4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6e5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6e6: Call2 0x142f

0x6e7: Pop(2)
0x6e8: Push((int) 40921)
0x6e9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6ea: IF (Stack[-1] == 0) GOTO 0x6f5; Pop(1)

0x6eb: PushEmpty(object, object)
0x6ec: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6ed: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6ee: Call2 0x138c

0x6ef: Pop(2)
0x6f0: PushEmpty(object, object)
0x6f1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6f2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6f3: Call2 0x142f

0x6f4: Pop(2)
0x6f5: Push((int) 26801)
0x6f6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6f7: IF (Stack[-1] == 0) GOTO 0x702; Pop(1)

0x6f8: PushEmpty(object, object)
0x6f9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6fa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6fb: Call2 0x13ac

0x6fc: Pop(2)
0x6fd: PushEmpty(object, object)
0x6fe: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6ff: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x700: Call2 0x142f

0x701: Pop(2)
0x702: Push((int) 26922)
0x703: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x704: IF (Stack[-1] == 0) GOTO 0x70a; Pop(1)

0x705: PushEmpty(object, object)
0x706: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x707: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x708: Call2 0x13b5

0x709: Pop(2)
0x70a: Push((int) 26924)
0x70b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x70c: IF (Stack[-1] == 0) GOTO 0x712; Pop(1)

0x70d: PushEmpty(object, object)
0x70e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x70f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x710: Call2 0x13bb

0x711: Pop(2)
0x712: Push((int) 26810)
0x713: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x714: IF (Stack[-1] == 0) GOTO 0x772; Pop(1)

0x715: PushEmpty(bool, object)
0x716: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x717: Call2 0x14c5

0x718: Pop(1)
0x719: IF (Stack[-1] == 0) GOTO 0x72e; Pop(1)

0x71a: PushEmpty(string)
0x71b: Stack[-1] = "Neutral"
0x71c: Call2 0x6bf

0x71d: Pop(1)
0x71e: Push((int) 525442)
0x71f: @@ SetMessage(Stack[-1])
0x720: Pop(1)
0x721: @@ ClearReplies()
0x722: Pop(0)
0x723: Push((int) 525443)
0x724: Push((int) -1)
0x725: Push((int) 26811)
0x726: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x727: Pop(3)
0x728: Push((int) 529337)
0x729: Push((int) -1)
0x72a: Push((int) 30792)
0x72b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x72c: Pop(3)
0x72d: Return(); Pop(0)

0x72e: PushEmpty(string)
0x72f: Stack[-1] = "Neutral"
0x730: Call2 0x6bf

0x731: Pop(1)
0x732: Push((int) 525406)
0x733: @@ SetMessage(Stack[-1])
0x734: Pop(1)
0x735: @@ ClearReplies()
0x736: Pop(0)
0x737: PushEmpty(bool, object)
0x738: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x739: Call2 0x14a1

0x73a: Pop(1)
0x73b: IF (Stack[-1] == 0) GOTO 0x741; Pop(1)

0x73c: Push((int) 525407)
0x73d: Push((int) 26776)
0x73e: Push((int) 26775)
0x73f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x740: Pop(3)
0x741: PushEmpty(bool)
0x742: Stack[-1] = (bool) 0
0x743: PushEmpty(bool, object)
0x744: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x745: Call2 0x14b9

0x746: Pop(1)
0x747: IF (Stack[-1] == 0) GOTO 0x74e; Pop(1)

0x748: PushEmpty(bool, object)
0x749: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x74a: Call2 0x14ad

0x74b: Pop(1)
0x74c: IF (Stack[-1] == 0) GOTO 0x74e; Pop(1)

0x74d: Stack[-1] = (bool) 1
0x74e: IF (Stack[-1] == 0) GOTO 0x754; Pop(1)

0x74f: Push((int) 525425)
0x750: Push((int) 40970)
0x751: Push((int) 26793)
0x752: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x753: Pop(3)
0x754: PushEmpty(bool)
0x755: Stack[-1] = (bool) 0
0x756: PushEmpty(bool, object)
0x757: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x758: Call2 0x14dd

0x759: Pop(1)
0x75a: IF (Stack[-1] == 0) GOTO 0x761; Pop(1)

0x75b: PushEmpty(bool, object)
0x75c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x75d: Call2 0x14d1

0x75e: Pop(1)
0x75f: IF (Stack[-1] == 0) GOTO 0x761; Pop(1)

0x760: Stack[-1] = (bool) 1
0x761: IF (Stack[-1] == 0) GOTO 0x767; Pop(1)

0x762: Push((int) 525575)
0x763: Push((int) 26923)
0x764: Push((int) 26922)
0x765: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x766: Pop(3)
0x767: Push((int) 525412)
0x768: Push((int) -1)
0x769: Push((int) 26780)
0x76a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x76b: Pop(3)
0x76c: Push((int) 538971)
0x76d: Push((int) -1)
0x76e: Push((int) 40909)
0x76f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x770: Pop(3)
0x771: Return(); Pop(0)

0x772: Push((int) 26923)
0x773: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x774: IF (Stack[-1] == 0) GOTO 0x789; Pop(1)

0x775: PushEmpty(string)
0x776: Stack[-1] = "Adoration"
0x777: Call2 0x6bf

0x778: Pop(1)
0x779: Push((int) 525576)
0x77a: @@ SetMessage(Stack[-1])
0x77b: Pop(1)
0x77c: @@ ClearReplies()
0x77d: Pop(0)
0x77e: Push((int) 538918)
0x77f: Push((int) 40872)
0x780: Push((int) 40871)
0x781: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x782: Pop(3)
0x783: Push((int) 538922)
0x784: Push((int) 40872)
0x785: Push((int) 40875)
0x786: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x787: Pop(3)
0x788: Return(); Pop(0)

0x789: Push((int) 40872)
0x78a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x78b: IF (Stack[-1] == 0) GOTO 0x79b; Pop(1)

0x78c: PushEmpty(string)
0x78d: Stack[-1] = "Dream"
0x78e: Call2 0x6bf

0x78f: Pop(1)
0x790: Push((int) 538919)
0x791: @@ SetMessage(Stack[-1])
0x792: Pop(1)
0x793: @@ ClearReplies()
0x794: Pop(0)
0x795: Push((int) 538920)
0x796: Push((int) 40874)
0x797: Push((int) 40873)
0x798: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x799: Pop(3)
0x79a: Return(); Pop(0)

0x79b: Push((int) 40874)
0x79c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x79d: IF (Stack[-1] == 0) GOTO 0x7b2; Pop(1)

0x79e: PushEmpty(string)
0x79f: Stack[-1] = "Neutral"
0x7a0: Call2 0x6bf

0x7a1: Pop(1)
0x7a2: Push((int) 538921)
0x7a3: @@ SetMessage(Stack[-1])
0x7a4: Pop(1)
0x7a5: @@ ClearReplies()
0x7a6: Pop(0)
0x7a7: Push((int) 539033)
0x7a8: Push((int) 40975)
0x7a9: Push((int) 40974)
0x7aa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ab: Pop(3)
0x7ac: Push((int) 539035)
0x7ad: Push((int) 40975)
0x7ae: Push((int) 40976)
0x7af: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b0: Pop(3)
0x7b1: Return(); Pop(0)

0x7b2: Push((int) 40975)
0x7b3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7b4: IF (Stack[-1] == 0) GOTO 0x7c9; Pop(1)

0x7b5: PushEmpty(string)
0x7b6: Stack[-1] = "Dream"
0x7b7: Call2 0x6bf

0x7b8: Pop(1)
0x7b9: Push((int) 539034)
0x7ba: @@ SetMessage(Stack[-1])
0x7bb: Pop(1)
0x7bc: @@ ClearReplies()
0x7bd: Pop(0)
0x7be: Push((int) 538923)
0x7bf: Push((int) 40878)
0x7c0: Push((int) 40877)
0x7c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c2: Pop(3)
0x7c3: Push((int) 538925)
0x7c4: Push((int) 40878)
0x7c5: Push((int) 40879)
0x7c6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c7: Pop(3)
0x7c8: Return(); Pop(0)

0x7c9: Push((int) 40878)
0x7ca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7cb: IF (Stack[-1] == 0) GOTO 0x7e0; Pop(1)

0x7cc: PushEmpty(string)
0x7cd: Stack[-1] = "Dream"
0x7ce: Call2 0x6bf

0x7cf: Pop(1)
0x7d0: Push((int) 538924)
0x7d1: @@ SetMessage(Stack[-1])
0x7d2: Pop(1)
0x7d3: @@ ClearReplies()
0x7d4: Pop(0)
0x7d5: Push((int) 525577)
0x7d6: Push((int) -1)
0x7d7: Push((int) 26924)
0x7d8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d9: Pop(3)
0x7da: Push((int) 525614)
0x7db: Push((int) -1)
0x7dc: Push((int) 26961)
0x7dd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7de: Pop(3)
0x7df: Return(); Pop(0)

0x7e0: Push((int) 40970)
0x7e1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7e2: IF (Stack[-1] == 0) GOTO 0x7f7; Pop(1)

0x7e3: PushEmpty(string)
0x7e4: Stack[-1] = "Rage"
0x7e5: Call2 0x6bf

0x7e6: Pop(1)
0x7e7: Push((int) 539029)
0x7e8: @@ SetMessage(Stack[-1])
0x7e9: Pop(1)
0x7ea: @@ ClearReplies()
0x7eb: Pop(0)
0x7ec: Push((int) 539030)
0x7ed: Push((int) 26794)
0x7ee: Push((int) 40971)
0x7ef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7f0: Pop(3)
0x7f1: Push((int) 539031)
0x7f2: Push((int) 26794)
0x7f3: Push((int) 40972)
0x7f4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7f5: Pop(3)
0x7f6: Return(); Pop(0)

0x7f7: Push((int) 26794)
0x7f8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7f9: IF (Stack[-1] == 0) GOTO 0x809; Pop(1)

0x7fa: PushEmpty(string)
0x7fb: Stack[-1] = "Fear"
0x7fc: Call2 0x6bf

0x7fd: Pop(1)
0x7fe: Push((int) 525426)
0x7ff: @@ SetMessage(Stack[-1])
0x800: Pop(1)
0x801: @@ ClearReplies()
0x802: Pop(0)
0x803: Push((int) 525427)
0x804: Push((int) 40979)
0x805: Push((int) 26795)
0x806: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x807: Pop(3)
0x808: Return(); Pop(0)

0x809: Push((int) 40979)
0x80a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x80b: IF (Stack[-1] == 0) GOTO 0x820; Pop(1)

0x80c: PushEmpty(string)
0x80d: Stack[-1] = "Neutral"
0x80e: Call2 0x6bf

0x80f: Pop(1)
0x810: Push((int) 539036)
0x811: @@ SetMessage(Stack[-1])
0x812: Pop(1)
0x813: @@ ClearReplies()
0x814: Pop(0)
0x815: Push((int) 539037)
0x816: Push((int) 40982)
0x817: Push((int) 40980)
0x818: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x819: Pop(3)
0x81a: Push((int) 539038)
0x81b: Push((int) 40983)
0x81c: Push((int) 40981)
0x81d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x81e: Pop(3)
0x81f: Return(); Pop(0)

0x820: Push((int) 40983)
0x821: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x822: IF (Stack[-1] == 0) GOTO 0x837; Pop(1)

0x823: PushEmpty(string)
0x824: Stack[-1] = "Rage"
0x825: Call2 0x6bf

0x826: Pop(1)
0x827: Push((int) 539040)
0x828: @@ SetMessage(Stack[-1])
0x829: Pop(1)
0x82a: @@ ClearReplies()
0x82b: Pop(0)
0x82c: Push((int) 539046)
0x82d: Push((int) 40991)
0x82e: Push((int) 40990)
0x82f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x830: Pop(3)
0x831: Push((int) 539048)
0x832: Push((int) 40996)
0x833: Push((int) 40992)
0x834: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x835: Pop(3)
0x836: Return(); Pop(0)

0x837: Push((int) 40991)
0x838: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x839: IF (Stack[-1] == 0) GOTO 0x849; Pop(1)

0x83a: PushEmpty(string)
0x83b: Stack[-1] = "Rage"
0x83c: Call2 0x6bf

0x83d: Pop(1)
0x83e: Push((int) 539047)
0x83f: @@ SetMessage(Stack[-1])
0x840: Pop(1)
0x841: @@ ClearReplies()
0x842: Pop(0)
0x843: Push((int) 539041)
0x844: Push((int) 40996)
0x845: Push((int) 40984)
0x846: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x847: Pop(3)
0x848: Return(); Pop(0)

0x849: Push((int) 40996)
0x84a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x84b: IF (Stack[-1] == 0) GOTO 0x85b; Pop(1)

0x84c: PushEmpty(string)
0x84d: Stack[-1] = "Dream"
0x84e: Call2 0x6bf

0x84f: Pop(1)
0x850: Push((int) 539051)
0x851: @@ SetMessage(Stack[-1])
0x852: Pop(1)
0x853: @@ ClearReplies()
0x854: Pop(0)
0x855: Push((int) 539052)
0x856: Push((int) 40999)
0x857: Push((int) 40998)
0x858: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x859: Pop(3)
0x85a: Return(); Pop(0)

0x85b: Push((int) 40999)
0x85c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x85d: IF (Stack[-1] == 0) GOTO 0x872; Pop(1)

0x85e: PushEmpty(string)
0x85f: Stack[-1] = "Dream"
0x860: Call2 0x6bf

0x861: Pop(1)
0x862: Push((int) 539053)
0x863: @@ SetMessage(Stack[-1])
0x864: Pop(1)
0x865: @@ ClearReplies()
0x866: Pop(0)
0x867: Push((int) 539054)
0x868: Push((int) 26796)
0x869: Push((int) 41000)
0x86a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x86b: Pop(3)
0x86c: Push((int) 539056)
0x86d: Push((int) 26798)
0x86e: Push((int) 41003)
0x86f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x870: Pop(3)
0x871: Return(); Pop(0)

0x872: Push((int) 40982)
0x873: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x874: IF (Stack[-1] == 0) GOTO 0x884; Pop(1)

0x875: PushEmpty(string)
0x876: Stack[-1] = "Dream"
0x877: Call2 0x6bf

0x878: Pop(1)
0x879: Push((int) 539039)
0x87a: @@ SetMessage(Stack[-1])
0x87b: Pop(1)
0x87c: @@ ClearReplies()
0x87d: Pop(0)
0x87e: Push((int) 539044)
0x87f: Push((int) 40988)
0x880: Push((int) 40987)
0x881: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x882: Pop(3)
0x883: Return(); Pop(0)

0x884: Push((int) 40988)
0x885: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x886: IF (Stack[-1] == 0) GOTO 0x89b; Pop(1)

0x887: PushEmpty(string)
0x888: Stack[-1] = "Rage"
0x889: Call2 0x6bf

0x88a: Pop(1)
0x88b: Push((int) 539045)
0x88c: @@ SetMessage(Stack[-1])
0x88d: Pop(1)
0x88e: @@ ClearReplies()
0x88f: Pop(0)
0x890: Push((int) 539049)
0x891: Push((int) 40983)
0x892: Push((int) 40993)
0x893: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x894: Pop(3)
0x895: Push((int) 539050)
0x896: Push((int) 26796)
0x897: Push((int) 40994)
0x898: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x899: Pop(3)
0x89a: Return(); Pop(0)

0x89b: Push((int) 26796)
0x89c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x89d: IF (Stack[-1] == 0) GOTO 0x8b2; Pop(1)

0x89e: PushEmpty(string)
0x89f: Stack[-1] = "Dream"
0x8a0: Call2 0x6bf

0x8a1: Pop(1)
0x8a2: Push((int) 525428)
0x8a3: @@ SetMessage(Stack[-1])
0x8a4: Pop(1)
0x8a5: @@ ClearReplies()
0x8a6: Pop(0)
0x8a7: Push((int) 525429)
0x8a8: Push((int) 26798)
0x8a9: Push((int) 26797)
0x8aa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8ab: Pop(3)
0x8ac: Push((int) 539071)
0x8ad: Push((int) 41020)
0x8ae: Push((int) 41019)
0x8af: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8b0: Pop(3)
0x8b1: Return(); Pop(0)

0x8b2: Push((int) 41020)
0x8b3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8b4: IF (Stack[-1] == 0) GOTO 0x8c4; Pop(1)

0x8b5: PushEmpty(string)
0x8b6: Stack[-1] = "Dream"
0x8b7: Call2 0x6bf

0x8b8: Pop(1)
0x8b9: Push((int) 539072)
0x8ba: @@ SetMessage(Stack[-1])
0x8bb: Pop(1)
0x8bc: @@ ClearReplies()
0x8bd: Pop(0)
0x8be: Push((int) 539073)
0x8bf: Push((int) 26798)
0x8c0: Push((int) 41021)
0x8c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8c2: Pop(3)
0x8c3: Return(); Pop(0)

0x8c4: Push((int) 26798)
0x8c5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8c6: IF (Stack[-1] == 0) GOTO 0x8d6; Pop(1)

0x8c7: PushEmpty(string)
0x8c8: Stack[-1] = "Dream"
0x8c9: Call2 0x6bf

0x8ca: Pop(1)
0x8cb: Push((int) 525430)
0x8cc: @@ SetMessage(Stack[-1])
0x8cd: Pop(1)
0x8ce: @@ ClearReplies()
0x8cf: Pop(0)
0x8d0: Push((int) 525431)
0x8d1: Push((int) 26800)
0x8d2: Push((int) 26799)
0x8d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d4: Pop(3)
0x8d5: Return(); Pop(0)

0x8d6: Push((int) 26800)
0x8d7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8d8: IF (Stack[-1] == 0) GOTO 0x8ed; Pop(1)

0x8d9: PushEmpty(string)
0x8da: Stack[-1] = "Fear"
0x8db: Call2 0x6bf

0x8dc: Pop(1)
0x8dd: Push((int) 525432)
0x8de: @@ SetMessage(Stack[-1])
0x8df: Pop(1)
0x8e0: @@ ClearReplies()
0x8e1: Pop(0)
0x8e2: Push((int) 538913)
0x8e3: Push((int) 40867)
0x8e4: Push((int) 40866)
0x8e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8e6: Pop(3)
0x8e7: Push((int) 539074)
0x8e8: Push((int) 41024)
0x8e9: Push((int) 41023)
0x8ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8eb: Pop(3)
0x8ec: Return(); Pop(0)

0x8ed: Push((int) 41024)
0x8ee: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8ef: IF (Stack[-1] == 0) GOTO 0x8ff; Pop(1)

0x8f0: PushEmpty(string)
0x8f1: Stack[-1] = "Neutral"
0x8f2: Call2 0x6bf

0x8f3: Pop(1)
0x8f4: Push((int) 539075)
0x8f5: @@ SetMessage(Stack[-1])
0x8f6: Pop(1)
0x8f7: @@ ClearReplies()
0x8f8: Pop(0)
0x8f9: Push((int) 539076)
0x8fa: Push((int) 41026)
0x8fb: Push((int) 41025)
0x8fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8fd: Pop(3)
0x8fe: Return(); Pop(0)

0x8ff: Push((int) 41026)
0x900: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x901: IF (Stack[-1] == 0) GOTO 0x911; Pop(1)

0x902: PushEmpty(string)
0x903: Stack[-1] = "Neutral"
0x904: Call2 0x6bf

0x905: Pop(1)
0x906: Push((int) 539077)
0x907: @@ SetMessage(Stack[-1])
0x908: Pop(1)
0x909: @@ ClearReplies()
0x90a: Pop(0)
0x90b: Push((int) 539078)
0x90c: Push((int) 41029)
0x90d: Push((int) 41027)
0x90e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x90f: Pop(3)
0x910: Return(); Pop(0)

0x911: Push((int) 41029)
0x912: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x913: IF (Stack[-1] == 0) GOTO 0x923; Pop(1)

0x914: PushEmpty(string)
0x915: Stack[-1] = "Neutral"
0x916: Call2 0x6bf

0x917: Pop(1)
0x918: Push((int) 539080)
0x919: @@ SetMessage(Stack[-1])
0x91a: Pop(1)
0x91b: @@ ClearReplies()
0x91c: Pop(0)
0x91d: Push((int) 539081)
0x91e: Push((int) 41028)
0x91f: Push((int) 41030)
0x920: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x921: Pop(3)
0x922: Return(); Pop(0)

0x923: Push((int) 40867)
0x924: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x925: IF (Stack[-1] == 0) GOTO 0x93a; Pop(1)

0x926: PushEmpty(string)
0x927: Stack[-1] = "Fear"
0x928: Call2 0x6bf

0x929: Pop(1)
0x92a: Push((int) 538914)
0x92b: @@ SetMessage(Stack[-1])
0x92c: Pop(1)
0x92d: @@ ClearReplies()
0x92e: Pop(0)
0x92f: Push((int) 525434)
0x930: Push((int) 41028)
0x931: Push((int) 26802)
0x932: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x933: Pop(3)
0x934: Push((int) 538915)
0x935: Push((int) 41028)
0x936: Push((int) 40868)
0x937: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x938: Pop(3)
0x939: Return(); Pop(0)

0x93a: Push((int) 41028)
0x93b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x93c: IF (Stack[-1] == 0) GOTO 0x956; Pop(1)

0x93d: PushEmpty(string)
0x93e: Stack[-1] = "Fear"
0x93f: Call2 0x6bf

0x940: Pop(1)
0x941: Push((int) 539079)
0x942: @@ SetMessage(Stack[-1])
0x943: Pop(1)
0x944: @@ ClearReplies()
0x945: Pop(0)
0x946: Push((int) 525433)
0x947: Push((int) -1)
0x948: Push((int) 26801)
0x949: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x94a: Pop(3)
0x94b: PushEmpty(bool, object)
0x94c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x94d: Call2 0x14c5

0x94e: Pop(1)
0x94f: IF (Stack[-1] == 0) GOTO 0x955; Pop(1)

0x950: Push((int) 538917)
0x951: Push((int) -1)
0x952: Push((int) 40870)
0x953: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x954: Pop(3)
0x955: Return(); Pop(0)

0x956: Push((int) 26776)
0x957: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x958: IF (Stack[-1] == 0) GOTO 0x968; Pop(1)

0x959: PushEmpty(string)
0x95a: Stack[-1] = "Fear"
0x95b: Call2 0x6bf

0x95c: Pop(1)
0x95d: Push((int) 525408)
0x95e: @@ SetMessage(Stack[-1])
0x95f: Pop(1)
0x960: @@ ClearReplies()
0x961: Pop(0)
0x962: Push((int) 525409)
0x963: Push((int) 40903)
0x964: Push((int) 26777)
0x965: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x966: Pop(3)
0x967: Return(); Pop(0)

0x968: Push((int) 40903)
0x969: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x96a: IF (Stack[-1] == 0) GOTO 0x97f; Pop(1)

0x96b: PushEmpty(string)
0x96c: Stack[-1] = "Fear"
0x96d: Call2 0x6bf

0x96e: Pop(1)
0x96f: Push((int) 538965)
0x970: @@ SetMessage(Stack[-1])
0x971: Pop(1)
0x972: @@ ClearReplies()
0x973: Pop(0)
0x974: Push((int) 538966)
0x975: Push((int) 40905)
0x976: Push((int) 40904)
0x977: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x978: Pop(3)
0x979: Push((int) 538972)
0x97a: Push((int) 40905)
0x97b: Push((int) 40910)
0x97c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x97d: Pop(3)
0x97e: Return(); Pop(0)

0x97f: Push((int) 40905)
0x980: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x981: IF (Stack[-1] == 0) GOTO 0x991; Pop(1)

0x982: PushEmpty(string)
0x983: Stack[-1] = "Dream"
0x984: Call2 0x6bf

0x985: Pop(1)
0x986: Push((int) 538967)
0x987: @@ SetMessage(Stack[-1])
0x988: Pop(1)
0x989: @@ ClearReplies()
0x98a: Pop(0)
0x98b: Push((int) 538968)
0x98c: Push((int) 40907)
0x98d: Push((int) 40906)
0x98e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x98f: Pop(3)
0x990: Return(); Pop(0)

0x991: Push((int) 40907)
0x992: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x993: IF (Stack[-1] == 0) GOTO 0x9a3; Pop(1)

0x994: PushEmpty(string)
0x995: Stack[-1] = "Dream"
0x996: Call2 0x6bf

0x997: Pop(1)
0x998: Push((int) 538969)
0x999: @@ SetMessage(Stack[-1])
0x99a: Pop(1)
0x99b: @@ ClearReplies()
0x99c: Pop(0)
0x99d: Push((int) 538970)
0x99e: Push((int) 40912)
0x99f: Push((int) 40908)
0x9a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9a1: Pop(3)
0x9a2: Return(); Pop(0)

0x9a3: Push((int) 40912)
0x9a4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9a5: IF (Stack[-1] == 0) GOTO 0x9ba; Pop(1)

0x9a6: PushEmpty(string)
0x9a7: Stack[-1] = "Neutral"
0x9a8: Call2 0x6bf

0x9a9: Pop(1)
0x9aa: Push((int) 538973)
0x9ab: @@ SetMessage(Stack[-1])
0x9ac: Pop(1)
0x9ad: @@ ClearReplies()
0x9ae: Pop(0)
0x9af: Push((int) 538974)
0x9b0: Push((int) 40914)
0x9b1: Push((int) 40913)
0x9b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9b3: Pop(3)
0x9b4: Push((int) 538977)
0x9b5: Push((int) 40917)
0x9b6: Push((int) 40916)
0x9b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9b8: Pop(3)
0x9b9: Return(); Pop(0)

0x9ba: Push((int) 40917)
0x9bb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9bc: IF (Stack[-1] == 0) GOTO 0x9cc; Pop(1)

0x9bd: PushEmpty(string)
0x9be: Stack[-1] = "Fear"
0x9bf: Call2 0x6bf

0x9c0: Pop(1)
0x9c1: Push((int) 538978)
0x9c2: @@ SetMessage(Stack[-1])
0x9c3: Pop(1)
0x9c4: @@ ClearReplies()
0x9c5: Pop(0)
0x9c6: Push((int) 538979)
0x9c7: Push((int) 40914)
0x9c8: Push((int) 40918)
0x9c9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9ca: Pop(3)
0x9cb: Return(); Pop(0)

0x9cc: Push((int) 40914)
0x9cd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9ce: IF (Stack[-1] == 0) GOTO 0x9e3; Pop(1)

0x9cf: PushEmpty(string)
0x9d0: Stack[-1] = "Neutral"
0x9d1: Call2 0x6bf

0x9d2: Pop(1)
0x9d3: Push((int) 538975)
0x9d4: @@ SetMessage(Stack[-1])
0x9d5: Pop(1)
0x9d6: @@ ClearReplies()
0x9d7: Pop(0)
0x9d8: Push((int) 525411)
0x9d9: Push((int) -1)
0x9da: Push((int) 26779)
0x9db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9dc: Pop(3)
0x9dd: Push((int) 538980)
0x9de: Push((int) 26778)
0x9df: Push((int) 40920)
0x9e0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9e1: Pop(3)
0x9e2: Return(); Pop(0)

0x9e3: Push((int) 26778)
0x9e4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9e5: IF (Stack[-1] == 0) GOTO 0x9f5; Pop(1)

0x9e6: PushEmpty(string)
0x9e7: Stack[-1] = "Neutral"
0x9e8: Call2 0x6bf

0x9e9: Pop(1)
0x9ea: Push((int) 525410)
0x9eb: @@ SetMessage(Stack[-1])
0x9ec: Pop(1)
0x9ed: @@ ClearReplies()
0x9ee: Pop(0)
0x9ef: Push((int) 538981)
0x9f0: Push((int) -1)
0x9f1: Push((int) 40921)
0x9f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9f3: Pop(3)
0x9f4: Return(); Pop(0)

0x9f5: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x9f6: PushEmpty(bool)
0x9f7: Call2 0x12f6

0x9f8: Pop(0)
0x9f9: IF (Stack[-1] == 0) GOTO 0x9fd; Pop(1)

0x9fa: @ lshStopAnimation()
0x9fb: Pop(0)
0x9fc: GOTO 0x9ff

0x9fd: @ StopAnimation()
0x9fe: Pop(0)
0x9ff: Return(); Pop(0)

0xa00: GOTO 0x6d6

0xa01: Return(); Pop(0)

0xa02: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xa03: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xa04: PushEmpty(bool, object, float)
0xa05: Stack[-2] = Stack[-12]
0xa06: Stack[-1] = (float) 70.0
0xa07: Call2 0x1120

0xa08: Pop(2)
0xa09: Pop(1); Push((bool) Stack[-1] == 0)
0xa0a: IF (Stack[-1] == 0) GOTO 0xa0d; Pop(1)

0xa0b: Stack[-10] = (int) -2
0xa0c: Return(); Pop(8)

0xa0d: @ CreateDialog(Stack[-4])
0xa0e: Pop(0)
0xa0f: PushEmpty(int)
0xa10: Call2 0x12f0

0xa11: Pop(0)
0xa12: @@ SetNPCName(Stack[-1])
0xa13: Pop(1)
0xa14: PushEmpty(int)
0xa15: Call2 0x12ee

0xa16: Pop(0)
0xa17: @@ SetNPCDescription(Stack[-1])
0xa18: Pop(1)
0xa19: PushEmpty(string)
0xa1a: Call2 0x12f2

0xa1b: Pop(0)
0xa1c: @@ SetPhoto(Stack[-1])
0xa1d: Pop(1)
0xa1e: PushEmpty(string)
0xa1f: Call2 0x12f4

0xa20: Pop(0)
0xa21: @@ SetPhoto2(Stack[-1])
0xa22: Pop(1)
0xa23: PushEmpty(int)
0xa24: Call2 0x1650

0xa25: Pop(0)
0xa26: @@ SetPlayerName(Stack[-1])
0xa27: Pop(1)
0xa28: Stack[-2] = (int) -1
0xa29: @ IsOverrideActive(Stack[-3])
0xa2a: Pop(0)
0xa2b: Push(Stack[-3])
0xa2c: IF (Stack[-1] == 0) GOTO 0xa2f; Pop(1)

0xa2d: Stack[-10] = (int) -2
0xa2e: Return(); Pop(8)

0xa2f: @ DoDialog(Stack[-4])
0xa30: Pop(0)
0xa31: PushEmpty(bool, object)
0xa32: PushEmpty(object)
0xa33: Call2 0x1236

0xa34: Stack[-2] = Stack[-1]
0xa35: Pop(1)
0xa36: Call2 0x1177

0xa37: Pop(2)
0xa38: PushEmpty(object, object)
0xa39: Stack[-2] = Stack[-11]
0xa3a: Stack[-1] = Stack[-6]
0xa3b: Push(-2, 4); TaskCall(7)
0xa3c: Call2 0xa53

0xa3d: Pop(-2, 4); TaskReturn
0xa3e: Pop(2)
0xa3f: @@ IsDialogEnd(Stack[-1])
0xa40: Pop(0)
0xa41: Pop(0); Push((bool) Stack[-1] == 0)
0xa42: IF (Stack[-1] == 0) GOTO 0xa48; Pop(1)

0xa43: @ sync()
0xa44: Pop(0)
0xa45: @@ IsDialogEnd(Stack[-1])
0xa46: Pop(0)
0xa47: GOTO 0xa41

0xa48: PushEmpty(object)
0xa49: Stack[-1] = Stack[-10]
0xa4a: Call2 0x1165

0xa4b: Pop(1)
0xa4c: @ StopDialog(Stack[-4])
0xa4d: Pop(0)
0xa4e: @@ GetReturnValue(Stack[-2])
0xa4f: Pop(0)
0xa50: Stack[-10] = Stack[-2]
0xa51: Return(); Pop(8)

0xa52: Stack[-4] = 0
0xa53: PushEmpty()
0xa54: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xa55: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xa56: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xa57: Push((int) 1)
0xa58: IF (Stack[-1] == 0) GOTO 0xa6f; Pop(1)

0xa59: PushEmpty(string)
0xa5a: Stack[-1] = "Neutral"
0xa5b: Call2 0xa8d

0xa5c: Pop(1)
0xa5d: Push((int) 525465)
0xa5e: @@ SetMessage(Stack[-1])
0xa5f: Pop(1)
0xa60: @@ ClearReplies()
0xa61: Pop(0)
0xa62: Push((int) 526257)
0xa63: Push((int) 27533)
0xa64: Push((int) 27531)
0xa65: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa66: Pop(3)
0xa67: Push((int) 525466)
0xa68: Push((int) -1)
0xa69: Push((int) 26822)
0xa6a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa6b: Pop(3)
0xa6c: GOTO 0xa6f

0xa6d: Return(); Pop(0)

0xa6e: GOTO 0xa57

0xa6f: PushEmpty(bool)
0xa70: Call2 0x12f6

0xa71: Pop(0)
0xa72: IF (Stack[-1] == 0) GOTO 0xa7e; Pop(1)

0xa73: @ lshWaitForAnimEnd()
0xa74: Pop(0)
0xa75: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa76: IF (Stack[-1] == 0) GOTO 0xa78; Pop(1)

0xa77: GOTO 0xa7d

0xa78: PushEmpty(string)
0xa79: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa7a: Call2 0x1201

0xa7b: Pop(1)
0xa7c: GOTO 0xa73

0xa7d: GOTO 0xa8c

0xa7e: Push("all")
0xa7f: Push("idle")
0xa80: @ PlayAnimation(Stack[-2], Stack[-1])
0xa81: Pop(2)
0xa82: @ WaitForAnimEnd()
0xa83: Pop(0)
0xa84: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa85: IF (Stack[-1] == 0) GOTO 0xa87; Pop(1)

0xa86: GOTO 0xa8c

0xa87: Push("all")
0xa88: Push("idle")
0xa89: @ PlayAnimation(Stack[-2], Stack[-1])
0xa8a: Pop(2)
0xa8b: GOTO 0xa82

0xa8c: Return(); Pop(0)

0xa8d: PushEmpty()
0xa8e: PushEmpty(bool)
0xa8f: Call2 0x12f6

0xa90: Pop(0)
0xa91: Pop(1); Push((bool) Stack[-1] == 0)
0xa92: IF (Stack[-1] == 0) GOTO 0xa94; Pop(1)

0xa93: Return(); Pop(0)

0xa94: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa95: IF (Stack[-1] == 0) GOTO 0xa97; Pop(1)

0xa96: Return(); Pop(0)

0xa97: PushEmpty(string, bool)
0xa98: Stack[-2] = Stack[-3]
0xa99: Push("")
0xa9a: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa9b: IF (Stack[-1] == 0) GOTO 0xa9e; Pop(1)

0xa9c: Stack[-1] = (bool) 0
0xa9d: GOTO 0xa9f

0xa9e: Stack[-1] = (bool) 1
0xa9f: Call2 0x1211

0xaa0: Pop(2)
0xaa1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xaa2: Return(); Pop(0)

0xaa3: PushEmpty()
0xaa4: Push((int) 1)
0xaa5: IF (Stack[-1] == 0) GOTO 0xae3; Pop(1)

0xaa6: PushEmpty()
0xaa7: Call2 0x122f

0xaa8: Pop(0)
0xaa9: Push((int) 26821)
0xaaa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaab: IF (Stack[-1] == 0) GOTO 0xac0; Pop(1)

0xaac: PushEmpty(string)
0xaad: Stack[-1] = "Neutral"
0xaae: Call2 0xa8d

0xaaf: Pop(1)
0xab0: Push((int) 525465)
0xab1: @@ SetMessage(Stack[-1])
0xab2: Pop(1)
0xab3: @@ ClearReplies()
0xab4: Pop(0)
0xab5: Push((int) 526257)
0xab6: Push((int) 27533)
0xab7: Push((int) 27531)
0xab8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xab9: Pop(3)
0xaba: Push((int) 525466)
0xabb: Push((int) -1)
0xabc: Push((int) 26822)
0xabd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xabe: Pop(3)
0xabf: Return(); Pop(0)

0xac0: Push((int) 27533)
0xac1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xac2: IF (Stack[-1] == 0) GOTO 0xad7; Pop(1)

0xac3: PushEmpty(string)
0xac4: Stack[-1] = "Neutral"
0xac5: Call2 0xa8d

0xac6: Pop(1)
0xac7: Push((int) 526259)
0xac8: @@ SetMessage(Stack[-1])
0xac9: Pop(1)
0xaca: @@ ClearReplies()
0xacb: Pop(0)
0xacc: Push((int) 526260)
0xacd: Push((int) -1)
0xace: Push((int) 27534)
0xacf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xad0: Pop(3)
0xad1: Push((int) 526261)
0xad2: Push((int) -1)
0xad3: Push((int) 27535)
0xad4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xad5: Pop(3)
0xad6: Return(); Pop(0)

0xad7: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xad8: PushEmpty(bool)
0xad9: Call2 0x12f6

0xada: Pop(0)
0xadb: IF (Stack[-1] == 0) GOTO 0xadf; Pop(1)

0xadc: @ lshStopAnimation()
0xadd: Pop(0)
0xade: GOTO 0xae1

0xadf: @ StopAnimation()
0xae0: Pop(0)
0xae1: Return(); Pop(0)

0xae2: GOTO 0xaa4

0xae3: Return(); Pop(0)

0xae4: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xae5: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xae6: PushEmpty(bool, object, float)
0xae7: Stack[-2] = Stack[-12]
0xae8: Stack[-1] = (float) 70.0
0xae9: Call2 0x1120

0xaea: Pop(2)
0xaeb: Pop(1); Push((bool) Stack[-1] == 0)
0xaec: IF (Stack[-1] == 0) GOTO 0xaef; Pop(1)

0xaed: Stack[-10] = (int) -2
0xaee: Return(); Pop(8)

0xaef: @ CreateDialog(Stack[-4])
0xaf0: Pop(0)
0xaf1: PushEmpty(int)
0xaf2: Call2 0x12f0

0xaf3: Pop(0)
0xaf4: @@ SetNPCName(Stack[-1])
0xaf5: Pop(1)
0xaf6: PushEmpty(int)
0xaf7: Call2 0x12ee

0xaf8: Pop(0)
0xaf9: @@ SetNPCDescription(Stack[-1])
0xafa: Pop(1)
0xafb: PushEmpty(string)
0xafc: Call2 0x12f2

0xafd: Pop(0)
0xafe: @@ SetPhoto(Stack[-1])
0xaff: Pop(1)
0xb00: PushEmpty(string)
0xb01: Call2 0x12f4

0xb02: Pop(0)
0xb03: @@ SetPhoto2(Stack[-1])
0xb04: Pop(1)
0xb05: PushEmpty(int)
0xb06: Call2 0x1650

0xb07: Pop(0)
0xb08: @@ SetPlayerName(Stack[-1])
0xb09: Pop(1)
0xb0a: Stack[-2] = (int) -1
0xb0b: @ IsOverrideActive(Stack[-3])
0xb0c: Pop(0)
0xb0d: Push(Stack[-3])
0xb0e: IF (Stack[-1] == 0) GOTO 0xb11; Pop(1)

0xb0f: Stack[-10] = (int) -2
0xb10: Return(); Pop(8)

0xb11: @ DoDialog(Stack[-4])
0xb12: Pop(0)
0xb13: PushEmpty(bool, object)
0xb14: PushEmpty(object)
0xb15: Call2 0x1236

0xb16: Stack[-2] = Stack[-1]
0xb17: Pop(1)
0xb18: Call2 0x1177

0xb19: Pop(2)
0xb1a: PushEmpty(object, object)
0xb1b: Stack[-2] = Stack[-11]
0xb1c: Stack[-1] = Stack[-6]
0xb1d: Push(-2, 4); TaskCall(9)
0xb1e: Call2 0xb35

0xb1f: Pop(-2, 4); TaskReturn
0xb20: Pop(2)
0xb21: @@ IsDialogEnd(Stack[-1])
0xb22: Pop(0)
0xb23: Pop(0); Push((bool) Stack[-1] == 0)
0xb24: IF (Stack[-1] == 0) GOTO 0xb2a; Pop(1)

0xb25: @ sync()
0xb26: Pop(0)
0xb27: @@ IsDialogEnd(Stack[-1])
0xb28: Pop(0)
0xb29: GOTO 0xb23

0xb2a: PushEmpty(object)
0xb2b: Stack[-1] = Stack[-10]
0xb2c: Call2 0x1165

0xb2d: Pop(1)
0xb2e: @ StopDialog(Stack[-4])
0xb2f: Pop(0)
0xb30: @@ GetReturnValue(Stack[-2])
0xb31: Pop(0)
0xb32: Stack[-10] = Stack[-2]
0xb33: Return(); Pop(8)

0xb34: Stack[-4] = 0
0xb35: PushEmpty()
0xb36: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xb37: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xb38: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xb39: Push((int) 1)
0xb3a: IF (Stack[-1] == 0) GOTO 0xb6d; Pop(1)

0xb3b: PushEmpty(string)
0xb3c: Stack[-1] = "Fear"
0xb3d: Call2 0xb8b

0xb3e: Pop(1)
0xb3f: Push((int) 526085)
0xb40: @@ SetMessage(Stack[-1])
0xb41: Pop(1)
0xb42: @@ ClearReplies()
0xb43: Pop(0)
0xb44: PushEmpty(bool)
0xb45: Stack[-1] = (bool) 0
0xb46: PushEmpty(bool)
0xb47: Stack[-1] = (bool) 0
0xb48: PushEmpty(bool, object)
0xb49: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb4a: Call2 0x14e9

0xb4b: Pop(1)
0xb4c: IF (Stack[-1] == 0) GOTO 0xb53; Pop(1)

0xb4d: PushEmpty(bool, object)
0xb4e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb4f: Call2 0x14f5

0xb50: Pop(1)
0xb51: IF (Stack[-1] == 0) GOTO 0xb53; Pop(1)

0xb52: Stack[-1] = (bool) 1
0xb53: IF (Stack[-1] == 0) GOTO 0xb5a; Pop(1)

0xb54: PushEmpty(bool, object)
0xb55: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb56: Call2 0x1501

0xb57: Pop(1)
0xb58: IF (Stack[-1] == 0) GOTO 0xb5a; Pop(1)

0xb59: Stack[-1] = (bool) 1
0xb5a: IF (Stack[-1] == 0) GOTO 0xb60; Pop(1)

0xb5b: Push((int) 526086)
0xb5c: Push((int) 27373)
0xb5d: Push((int) 27372)
0xb5e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb5f: Pop(3)
0xb60: Push((int) 526089)
0xb61: Push((int) -1)
0xb62: Push((int) 27375)
0xb63: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb64: Pop(3)
0xb65: Push((int) 528861)
0xb66: Push((int) -1)
0xb67: Push((int) 30283)
0xb68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb69: Pop(3)
0xb6a: GOTO 0xb6d

0xb6b: Return(); Pop(0)

0xb6c: GOTO 0xb39

0xb6d: PushEmpty(bool)
0xb6e: Call2 0x12f6

0xb6f: Pop(0)
0xb70: IF (Stack[-1] == 0) GOTO 0xb7c; Pop(1)

0xb71: @ lshWaitForAnimEnd()
0xb72: Pop(0)
0xb73: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb74: IF (Stack[-1] == 0) GOTO 0xb76; Pop(1)

0xb75: GOTO 0xb7b

0xb76: PushEmpty(string)
0xb77: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xb78: Call2 0x1201

0xb79: Pop(1)
0xb7a: GOTO 0xb71

0xb7b: GOTO 0xb8a

0xb7c: Push("all")
0xb7d: Push("idle")
0xb7e: @ PlayAnimation(Stack[-2], Stack[-1])
0xb7f: Pop(2)
0xb80: @ WaitForAnimEnd()
0xb81: Pop(0)
0xb82: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb83: IF (Stack[-1] == 0) GOTO 0xb85; Pop(1)

0xb84: GOTO 0xb8a

0xb85: Push("all")
0xb86: Push("idle")
0xb87: @ PlayAnimation(Stack[-2], Stack[-1])
0xb88: Pop(2)
0xb89: GOTO 0xb80

0xb8a: Return(); Pop(0)

0xb8b: PushEmpty()
0xb8c: PushEmpty(bool)
0xb8d: Call2 0x12f6

0xb8e: Pop(0)
0xb8f: Pop(1); Push((bool) Stack[-1] == 0)
0xb90: IF (Stack[-1] == 0) GOTO 0xb92; Pop(1)

0xb91: Return(); Pop(0)

0xb92: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xb93: IF (Stack[-1] == 0) GOTO 0xb95; Pop(1)

0xb94: Return(); Pop(0)

0xb95: PushEmpty(string, bool)
0xb96: Stack[-2] = Stack[-3]
0xb97: Push("")
0xb98: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb99: IF (Stack[-1] == 0) GOTO 0xb9c; Pop(1)

0xb9a: Stack[-1] = (bool) 0
0xb9b: GOTO 0xb9d

0xb9c: Stack[-1] = (bool) 1
0xb9d: Call2 0x1211

0xb9e: Pop(2)
0xb9f: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xba0: Return(); Pop(0)

0xba1: PushEmpty()
0xba2: Push((int) 1)
0xba3: IF (Stack[-1] == 0) GOTO 0xc27; Pop(1)

0xba4: PushEmpty()
0xba5: Call2 0x122f

0xba6: Pop(0)
0xba7: Push((int) 27372)
0xba8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xba9: IF (Stack[-1] == 0) GOTO 0xbaf; Pop(1)

0xbaa: PushEmpty(object, object)
0xbab: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbac: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbad: Call2 0x13d5

0xbae: Pop(2)
0xbaf: Push((int) 27374)
0xbb0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbb1: IF (Stack[-1] == 0) GOTO 0xbb7; Pop(1)

0xbb2: PushEmpty(object, object)
0xbb3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbb4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbb5: Call2 0x13db

0xbb6: Pop(2)
0xbb7: Push((int) 43967)
0xbb8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbb9: IF (Stack[-1] == 0) GOTO 0xbbf; Pop(1)

0xbba: PushEmpty(object, object)
0xbbb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbbc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbbd: Call2 0x13db

0xbbe: Pop(2)
0xbbf: Push((int) 27371)
0xbc0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbc1: IF (Stack[-1] == 0) GOTO 0xbf2; Pop(1)

0xbc2: PushEmpty(string)
0xbc3: Stack[-1] = "Fear"
0xbc4: Call2 0xb8b

0xbc5: Pop(1)
0xbc6: Push((int) 526085)
0xbc7: @@ SetMessage(Stack[-1])
0xbc8: Pop(1)
0xbc9: @@ ClearReplies()
0xbca: Pop(0)
0xbcb: PushEmpty(bool)
0xbcc: Stack[-1] = (bool) 0
0xbcd: PushEmpty(bool)
0xbce: Stack[-1] = (bool) 0
0xbcf: PushEmpty(bool, object)
0xbd0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbd1: Call2 0x14e9

0xbd2: Pop(1)
0xbd3: IF (Stack[-1] == 0) GOTO 0xbda; Pop(1)

0xbd4: PushEmpty(bool, object)
0xbd5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbd6: Call2 0x14f5

0xbd7: Pop(1)
0xbd8: IF (Stack[-1] == 0) GOTO 0xbda; Pop(1)

0xbd9: Stack[-1] = (bool) 1
0xbda: IF (Stack[-1] == 0) GOTO 0xbe1; Pop(1)

0xbdb: PushEmpty(bool, object)
0xbdc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbdd: Call2 0x1501

0xbde: Pop(1)
0xbdf: IF (Stack[-1] == 0) GOTO 0xbe1; Pop(1)

0xbe0: Stack[-1] = (bool) 1
0xbe1: IF (Stack[-1] == 0) GOTO 0xbe7; Pop(1)

0xbe2: Push((int) 526086)
0xbe3: Push((int) 27373)
0xbe4: Push((int) 27372)
0xbe5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbe6: Pop(3)
0xbe7: Push((int) 526089)
0xbe8: Push((int) -1)
0xbe9: Push((int) 27375)
0xbea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbeb: Pop(3)
0xbec: Push((int) 528861)
0xbed: Push((int) -1)
0xbee: Push((int) 30283)
0xbef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbf0: Pop(3)
0xbf1: Return(); Pop(0)

0xbf2: Push((int) 27373)
0xbf3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbf4: IF (Stack[-1] == 0) GOTO 0xc04; Pop(1)

0xbf5: PushEmpty(string)
0xbf6: Stack[-1] = "Fear"
0xbf7: Call2 0xb8b

0xbf8: Pop(1)
0xbf9: Push((int) 526087)
0xbfa: @@ SetMessage(Stack[-1])
0xbfb: Pop(1)
0xbfc: @@ ClearReplies()
0xbfd: Pop(0)
0xbfe: Push((int) 528862)
0xbff: Push((int) 30285)
0xc00: Push((int) 30284)
0xc01: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc02: Pop(3)
0xc03: Return(); Pop(0)

0xc04: Push((int) 30285)
0xc05: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc06: IF (Stack[-1] == 0) GOTO 0xc1b; Pop(1)

0xc07: PushEmpty(string)
0xc08: Stack[-1] = "Dream"
0xc09: Call2 0xb8b

0xc0a: Pop(1)
0xc0b: Push((int) 528863)
0xc0c: @@ SetMessage(Stack[-1])
0xc0d: Pop(1)
0xc0e: @@ ClearReplies()
0xc0f: Pop(0)
0xc10: Push((int) 526088)
0xc11: Push((int) -1)
0xc12: Push((int) 27374)
0xc13: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc14: Pop(3)
0xc15: Push((int) 541764)
0xc16: Push((int) -1)
0xc17: Push((int) 43967)
0xc18: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc19: Pop(3)
0xc1a: Return(); Pop(0)

0xc1b: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xc1c: PushEmpty(bool)
0xc1d: Call2 0x12f6

0xc1e: Pop(0)
0xc1f: IF (Stack[-1] == 0) GOTO 0xc23; Pop(1)

0xc20: @ lshStopAnimation()
0xc21: Pop(0)
0xc22: GOTO 0xc25

0xc23: @ StopAnimation()
0xc24: Pop(0)
0xc25: Return(); Pop(0)

0xc26: GOTO 0xba2

0xc27: Return(); Pop(0)

0xc28: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xc29: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xc2a: PushEmpty(bool, object, float)
0xc2b: Stack[-2] = Stack[-12]
0xc2c: Stack[-1] = (float) 70.0
0xc2d: Call2 0x1120

0xc2e: Pop(2)
0xc2f: Pop(1); Push((bool) Stack[-1] == 0)
0xc30: IF (Stack[-1] == 0) GOTO 0xc33; Pop(1)

0xc31: Stack[-10] = (int) -2
0xc32: Return(); Pop(8)

0xc33: @ CreateDialog(Stack[-4])
0xc34: Pop(0)
0xc35: PushEmpty(int)
0xc36: Call2 0x12f0

0xc37: Pop(0)
0xc38: @@ SetNPCName(Stack[-1])
0xc39: Pop(1)
0xc3a: PushEmpty(int)
0xc3b: Call2 0x12ee

0xc3c: Pop(0)
0xc3d: @@ SetNPCDescription(Stack[-1])
0xc3e: Pop(1)
0xc3f: PushEmpty(string)
0xc40: Call2 0x12f2

0xc41: Pop(0)
0xc42: @@ SetPhoto(Stack[-1])
0xc43: Pop(1)
0xc44: PushEmpty(string)
0xc45: Call2 0x12f4

0xc46: Pop(0)
0xc47: @@ SetPhoto2(Stack[-1])
0xc48: Pop(1)
0xc49: PushEmpty(int)
0xc4a: Call2 0x1650

0xc4b: Pop(0)
0xc4c: @@ SetPlayerName(Stack[-1])
0xc4d: Pop(1)
0xc4e: Stack[-2] = (int) -1
0xc4f: @ IsOverrideActive(Stack[-3])
0xc50: Pop(0)
0xc51: Push(Stack[-3])
0xc52: IF (Stack[-1] == 0) GOTO 0xc55; Pop(1)

0xc53: Stack[-10] = (int) -2
0xc54: Return(); Pop(8)

0xc55: @ DoDialog(Stack[-4])
0xc56: Pop(0)
0xc57: PushEmpty(bool, object)
0xc58: PushEmpty(object)
0xc59: Call2 0x1236

0xc5a: Stack[-2] = Stack[-1]
0xc5b: Pop(1)
0xc5c: Call2 0x1177

0xc5d: Pop(2)
0xc5e: PushEmpty(object, object)
0xc5f: Stack[-2] = Stack[-11]
0xc60: Stack[-1] = Stack[-6]
0xc61: Push(-2, 4); TaskCall(11)
0xc62: Call2 0xc79

0xc63: Pop(-2, 4); TaskReturn
0xc64: Pop(2)
0xc65: @@ IsDialogEnd(Stack[-1])
0xc66: Pop(0)
0xc67: Pop(0); Push((bool) Stack[-1] == 0)
0xc68: IF (Stack[-1] == 0) GOTO 0xc6e; Pop(1)

0xc69: @ sync()
0xc6a: Pop(0)
0xc6b: @@ IsDialogEnd(Stack[-1])
0xc6c: Pop(0)
0xc6d: GOTO 0xc67

0xc6e: PushEmpty(object)
0xc6f: Stack[-1] = Stack[-10]
0xc70: Call2 0x1165

0xc71: Pop(1)
0xc72: @ StopDialog(Stack[-4])
0xc73: Pop(0)
0xc74: @@ GetReturnValue(Stack[-2])
0xc75: Pop(0)
0xc76: Stack[-10] = Stack[-2]
0xc77: Return(); Pop(8)

0xc78: Stack[-4] = 0
0xc79: PushEmpty()
0xc7a: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xc7b: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xc7c: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xc7d: Push((int) 1)
0xc7e: IF (Stack[-1] == 0) GOTO 0xca3; Pop(1)

0xc7f: PushEmpty(string)
0xc80: Stack[-1] = "Neutral"
0xc81: Call2 0xcc1

0xc82: Pop(1)
0xc83: Push((int) 527548)
0xc84: @@ SetMessage(Stack[-1])
0xc85: Pop(1)
0xc86: @@ ClearReplies()
0xc87: Pop(0)
0xc88: PushEmpty(bool)
0xc89: Stack[-1] = (bool) 0
0xc8a: PushEmpty(bool, object)
0xc8b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc8c: Call2 0x150d

0xc8d: Pop(1)
0xc8e: IF (Stack[-1] == 0) GOTO 0xc95; Pop(1)

0xc8f: PushEmpty(bool, object)
0xc90: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc91: Call2 0x1519

0xc92: Pop(1)
0xc93: IF (Stack[-1] == 0) GOTO 0xc95; Pop(1)

0xc94: Stack[-1] = (bool) 1
0xc95: IF (Stack[-1] == 0) GOTO 0xc9b; Pop(1)

0xc96: Push((int) 527551)
0xc97: Push((int) 28893)
0xc98: Push((int) 28892)
0xc99: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc9a: Pop(3)
0xc9b: Push((int) 527550)
0xc9c: Push((int) -1)
0xc9d: Push((int) 28891)
0xc9e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc9f: Pop(3)
0xca0: GOTO 0xca3

0xca1: Return(); Pop(0)

0xca2: GOTO 0xc7d

0xca3: PushEmpty(bool)
0xca4: Call2 0x12f6

0xca5: Pop(0)
0xca6: IF (Stack[-1] == 0) GOTO 0xcb2; Pop(1)

0xca7: @ lshWaitForAnimEnd()
0xca8: Pop(0)
0xca9: Push( Stack[3 + Tasks[-1].StackPointer] )
0xcaa: IF (Stack[-1] == 0) GOTO 0xcac; Pop(1)

0xcab: GOTO 0xcb1

0xcac: PushEmpty(string)
0xcad: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xcae: Call2 0x1201

0xcaf: Pop(1)
0xcb0: GOTO 0xca7

0xcb1: GOTO 0xcc0

0xcb2: Push("all")
0xcb3: Push("idle")
0xcb4: @ PlayAnimation(Stack[-2], Stack[-1])
0xcb5: Pop(2)
0xcb6: @ WaitForAnimEnd()
0xcb7: Pop(0)
0xcb8: Push( Stack[3 + Tasks[-1].StackPointer] )
0xcb9: IF (Stack[-1] == 0) GOTO 0xcbb; Pop(1)

0xcba: GOTO 0xcc0

0xcbb: Push("all")
0xcbc: Push("idle")
0xcbd: @ PlayAnimation(Stack[-2], Stack[-1])
0xcbe: Pop(2)
0xcbf: GOTO 0xcb6

0xcc0: Return(); Pop(0)

0xcc1: PushEmpty()
0xcc2: PushEmpty(bool)
0xcc3: Call2 0x12f6

0xcc4: Pop(0)
0xcc5: Pop(1); Push((bool) Stack[-1] == 0)
0xcc6: IF (Stack[-1] == 0) GOTO 0xcc8; Pop(1)

0xcc7: Return(); Pop(0)

0xcc8: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xcc9: IF (Stack[-1] == 0) GOTO 0xccb; Pop(1)

0xcca: Return(); Pop(0)

0xccb: PushEmpty(string, bool)
0xccc: Stack[-2] = Stack[-3]
0xccd: Push("")
0xcce: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xccf: IF (Stack[-1] == 0) GOTO 0xcd2; Pop(1)

0xcd0: Stack[-1] = (bool) 0
0xcd1: GOTO 0xcd3

0xcd2: Stack[-1] = (bool) 1
0xcd3: Call2 0x1211

0xcd4: Pop(2)
0xcd5: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xcd6: Return(); Pop(0)

0xcd7: PushEmpty()
0xcd8: Push((int) 1)
0xcd9: IF (Stack[-1] == 0) GOTO 0xda1; Pop(1)

0xcda: PushEmpty()
0xcdb: Call2 0x122f

0xcdc: Pop(0)
0xcdd: Push((int) 28892)
0xcde: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcdf: IF (Stack[-1] == 0) GOTO 0xce5; Pop(1)

0xce0: PushEmpty(object, object)
0xce1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xce2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xce3: Call2 0x1413

0xce4: Pop(2)
0xce5: Push((int) 28904)
0xce6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xce7: IF (Stack[-1] == 0) GOTO 0xced; Pop(1)

0xce8: PushEmpty(object, object)
0xce9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcea: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xceb: Call2 0x13e0

0xcec: Pop(2)
0xced: Push((int) 28889)
0xcee: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcef: IF (Stack[-1] == 0) GOTO 0xd12; Pop(1)

0xcf0: PushEmpty(string)
0xcf1: Stack[-1] = "Neutral"
0xcf2: Call2 0xcc1

0xcf3: Pop(1)
0xcf4: Push((int) 527548)
0xcf5: @@ SetMessage(Stack[-1])
0xcf6: Pop(1)
0xcf7: @@ ClearReplies()
0xcf8: Pop(0)
0xcf9: PushEmpty(bool)
0xcfa: Stack[-1] = (bool) 0
0xcfb: PushEmpty(bool, object)
0xcfc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcfd: Call2 0x150d

0xcfe: Pop(1)
0xcff: IF (Stack[-1] == 0) GOTO 0xd06; Pop(1)

0xd00: PushEmpty(bool, object)
0xd01: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd02: Call2 0x1519

0xd03: Pop(1)
0xd04: IF (Stack[-1] == 0) GOTO 0xd06; Pop(1)

0xd05: Stack[-1] = (bool) 1
0xd06: IF (Stack[-1] == 0) GOTO 0xd0c; Pop(1)

0xd07: Push((int) 527551)
0xd08: Push((int) 28893)
0xd09: Push((int) 28892)
0xd0a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd0b: Pop(3)
0xd0c: Push((int) 527550)
0xd0d: Push((int) -1)
0xd0e: Push((int) 28891)
0xd0f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd10: Pop(3)
0xd11: Return(); Pop(0)

0xd12: Push((int) 28893)
0xd13: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd14: IF (Stack[-1] == 0) GOTO 0xd29; Pop(1)

0xd15: PushEmpty(string)
0xd16: Stack[-1] = "Dream"
0xd17: Call2 0xcc1

0xd18: Pop(1)
0xd19: Push((int) 527552)
0xd1a: @@ SetMessage(Stack[-1])
0xd1b: Pop(1)
0xd1c: @@ ClearReplies()
0xd1d: Pop(0)
0xd1e: Push((int) 527553)
0xd1f: Push((int) 28895)
0xd20: Push((int) 28894)
0xd21: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd22: Pop(3)
0xd23: Push((int) 527564)
0xd24: Push((int) 28906)
0xd25: Push((int) 28905)
0xd26: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd27: Pop(3)
0xd28: Return(); Pop(0)

0xd29: Push((int) 28906)
0xd2a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd2b: IF (Stack[-1] == 0) GOTO 0xd3b; Pop(1)

0xd2c: PushEmpty(string)
0xd2d: Stack[-1] = "Dream"
0xd2e: Call2 0xcc1

0xd2f: Pop(1)
0xd30: Push((int) 527565)
0xd31: @@ SetMessage(Stack[-1])
0xd32: Pop(1)
0xd33: @@ ClearReplies()
0xd34: Pop(0)
0xd35: Push((int) 527566)
0xd36: Push((int) 28897)
0xd37: Push((int) 28907)
0xd38: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd39: Pop(3)
0xd3a: Return(); Pop(0)

0xd3b: Push((int) 28895)
0xd3c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd3d: IF (Stack[-1] == 0) GOTO 0xd4d; Pop(1)

0xd3e: PushEmpty(string)
0xd3f: Stack[-1] = "Rage"
0xd40: Call2 0xcc1

0xd41: Pop(1)
0xd42: Push((int) 527554)
0xd43: @@ SetMessage(Stack[-1])
0xd44: Pop(1)
0xd45: @@ ClearReplies()
0xd46: Pop(0)
0xd47: Push((int) 527555)
0xd48: Push((int) 28897)
0xd49: Push((int) 28896)
0xd4a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd4b: Pop(3)
0xd4c: Return(); Pop(0)

0xd4d: Push((int) 28897)
0xd4e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd4f: IF (Stack[-1] == 0) GOTO 0xd5f; Pop(1)

0xd50: PushEmpty(string)
0xd51: Stack[-1] = "Neutral"
0xd52: Call2 0xcc1

0xd53: Pop(1)
0xd54: Push((int) 527556)
0xd55: @@ SetMessage(Stack[-1])
0xd56: Pop(1)
0xd57: @@ ClearReplies()
0xd58: Pop(0)
0xd59: Push((int) 527557)
0xd5a: Push((int) 28899)
0xd5b: Push((int) 28898)
0xd5c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd5d: Pop(3)
0xd5e: Return(); Pop(0)

0xd5f: Push((int) 28899)
0xd60: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd61: IF (Stack[-1] == 0) GOTO 0xd71; Pop(1)

0xd62: PushEmpty(string)
0xd63: Stack[-1] = "Neutral"
0xd64: Call2 0xcc1

0xd65: Pop(1)
0xd66: Push((int) 527558)
0xd67: @@ SetMessage(Stack[-1])
0xd68: Pop(1)
0xd69: @@ ClearReplies()
0xd6a: Pop(0)
0xd6b: Push((int) 527559)
0xd6c: Push((int) 28901)
0xd6d: Push((int) 28900)
0xd6e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd6f: Pop(3)
0xd70: Return(); Pop(0)

0xd71: Push((int) 28901)
0xd72: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd73: IF (Stack[-1] == 0) GOTO 0xd83; Pop(1)

0xd74: PushEmpty(string)
0xd75: Stack[-1] = "Adoration"
0xd76: Call2 0xcc1

0xd77: Pop(1)
0xd78: Push((int) 527560)
0xd79: @@ SetMessage(Stack[-1])
0xd7a: Pop(1)
0xd7b: @@ ClearReplies()
0xd7c: Pop(0)
0xd7d: Push((int) 527561)
0xd7e: Push((int) 28903)
0xd7f: Push((int) 28902)
0xd80: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd81: Pop(3)
0xd82: Return(); Pop(0)

0xd83: Push((int) 28903)
0xd84: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd85: IF (Stack[-1] == 0) GOTO 0xd95; Pop(1)

0xd86: PushEmpty(string)
0xd87: Stack[-1] = "Adoration"
0xd88: Call2 0xcc1

0xd89: Pop(1)
0xd8a: Push((int) 527562)
0xd8b: @@ SetMessage(Stack[-1])
0xd8c: Pop(1)
0xd8d: @@ ClearReplies()
0xd8e: Pop(0)
0xd8f: Push((int) 527563)
0xd90: Push((int) -1)
0xd91: Push((int) 28904)
0xd92: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd93: Pop(3)
0xd94: Return(); Pop(0)

0xd95: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xd96: PushEmpty(bool)
0xd97: Call2 0x12f6

0xd98: Pop(0)
0xd99: IF (Stack[-1] == 0) GOTO 0xd9d; Pop(1)

0xd9a: @ lshStopAnimation()
0xd9b: Pop(0)
0xd9c: GOTO 0xd9f

0xd9d: @ StopAnimation()
0xd9e: Pop(0)
0xd9f: Return(); Pop(0)

0xda0: GOTO 0xcd8

0xda1: Return(); Pop(0)

0xda2: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xda3: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xda4: PushEmpty(bool, object, float)
0xda5: Stack[-2] = Stack[-12]
0xda6: Stack[-1] = (float) 70.0
0xda7: Call2 0x1120

0xda8: Pop(2)
0xda9: Pop(1); Push((bool) Stack[-1] == 0)
0xdaa: IF (Stack[-1] == 0) GOTO 0xdad; Pop(1)

0xdab: Stack[-10] = (int) -2
0xdac: Return(); Pop(8)

0xdad: @ CreateDialog(Stack[-4])
0xdae: Pop(0)
0xdaf: PushEmpty(int)
0xdb0: Call2 0x12f0

0xdb1: Pop(0)
0xdb2: @@ SetNPCName(Stack[-1])
0xdb3: Pop(1)
0xdb4: PushEmpty(int)
0xdb5: Call2 0x12ee

0xdb6: Pop(0)
0xdb7: @@ SetNPCDescription(Stack[-1])
0xdb8: Pop(1)
0xdb9: PushEmpty(string)
0xdba: Call2 0x12f2

0xdbb: Pop(0)
0xdbc: @@ SetPhoto(Stack[-1])
0xdbd: Pop(1)
0xdbe: PushEmpty(string)
0xdbf: Call2 0x12f4

0xdc0: Pop(0)
0xdc1: @@ SetPhoto2(Stack[-1])
0xdc2: Pop(1)
0xdc3: PushEmpty(int)
0xdc4: Call2 0x1650

0xdc5: Pop(0)
0xdc6: @@ SetPlayerName(Stack[-1])
0xdc7: Pop(1)
0xdc8: Stack[-2] = (int) -1
0xdc9: @ IsOverrideActive(Stack[-3])
0xdca: Pop(0)
0xdcb: Push(Stack[-3])
0xdcc: IF (Stack[-1] == 0) GOTO 0xdcf; Pop(1)

0xdcd: Stack[-10] = (int) -2
0xdce: Return(); Pop(8)

0xdcf: @ DoDialog(Stack[-4])
0xdd0: Pop(0)
0xdd1: PushEmpty(bool, object)
0xdd2: PushEmpty(object)
0xdd3: Call2 0x1236

0xdd4: Stack[-2] = Stack[-1]
0xdd5: Pop(1)
0xdd6: Call2 0x1177

0xdd7: Pop(2)
0xdd8: PushEmpty(object, object)
0xdd9: Stack[-2] = Stack[-11]
0xdda: Stack[-1] = Stack[-6]
0xddb: Push(-2, 4); TaskCall(13)
0xddc: Call2 0xdf3

0xddd: Pop(-2, 4); TaskReturn
0xdde: Pop(2)
0xddf: @@ IsDialogEnd(Stack[-1])
0xde0: Pop(0)
0xde1: Pop(0); Push((bool) Stack[-1] == 0)
0xde2: IF (Stack[-1] == 0) GOTO 0xde8; Pop(1)

0xde3: @ sync()
0xde4: Pop(0)
0xde5: @@ IsDialogEnd(Stack[-1])
0xde6: Pop(0)
0xde7: GOTO 0xde1

0xde8: PushEmpty(object)
0xde9: Stack[-1] = Stack[-10]
0xdea: Call2 0x1165

0xdeb: Pop(1)
0xdec: @ StopDialog(Stack[-4])
0xded: Pop(0)
0xdee: @@ GetReturnValue(Stack[-2])
0xdef: Pop(0)
0xdf0: Stack[-10] = Stack[-2]
0xdf1: Return(); Pop(8)

0xdf2: Stack[-4] = 0
0xdf3: PushEmpty()
0xdf4: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xdf5: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xdf6: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xdf7: Push((int) 1)
0xdf8: IF (Stack[-1] == 0) GOTO 0xe14; Pop(1)

0xdf9: PushEmpty(string)
0xdfa: Stack[-1] = "Neutral"
0xdfb: Call2 0xe32

0xdfc: Pop(1)
0xdfd: Push((int) 539303)
0xdfe: @@ SetMessage(Stack[-1])
0xdff: Pop(1)
0xe00: @@ ClearReplies()
0xe01: Pop(0)
0xe02: Push((int) 542544)
0xe03: Push((int) 44940)
0xe04: Push((int) 44939)
0xe05: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe06: Pop(3)
0xe07: Push((int) 539304)
0xe08: Push((int) -1)
0xe09: Push((int) 41247)
0xe0a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe0b: Pop(3)
0xe0c: Push((int) 542543)
0xe0d: Push((int) -1)
0xe0e: Push((int) 44938)
0xe0f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe10: Pop(3)
0xe11: GOTO 0xe14

0xe12: Return(); Pop(0)

0xe13: GOTO 0xdf7

0xe14: PushEmpty(bool)
0xe15: Call2 0x12f6

0xe16: Pop(0)
0xe17: IF (Stack[-1] == 0) GOTO 0xe23; Pop(1)

0xe18: @ lshWaitForAnimEnd()
0xe19: Pop(0)
0xe1a: Push( Stack[3 + Tasks[-1].StackPointer] )
0xe1b: IF (Stack[-1] == 0) GOTO 0xe1d; Pop(1)

0xe1c: GOTO 0xe22

0xe1d: PushEmpty(string)
0xe1e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xe1f: Call2 0x1201

0xe20: Pop(1)
0xe21: GOTO 0xe18

0xe22: GOTO 0xe31

0xe23: Push("all")
0xe24: Push("idle")
0xe25: @ PlayAnimation(Stack[-2], Stack[-1])
0xe26: Pop(2)
0xe27: @ WaitForAnimEnd()
0xe28: Pop(0)
0xe29: Push( Stack[3 + Tasks[-1].StackPointer] )
0xe2a: IF (Stack[-1] == 0) GOTO 0xe2c; Pop(1)

0xe2b: GOTO 0xe31

0xe2c: Push("all")
0xe2d: Push("idle")
0xe2e: @ PlayAnimation(Stack[-2], Stack[-1])
0xe2f: Pop(2)
0xe30: GOTO 0xe27

0xe31: Return(); Pop(0)

0xe32: PushEmpty()
0xe33: PushEmpty(bool)
0xe34: Call2 0x12f6

0xe35: Pop(0)
0xe36: Pop(1); Push((bool) Stack[-1] == 0)
0xe37: IF (Stack[-1] == 0) GOTO 0xe39; Pop(1)

0xe38: Return(); Pop(0)

0xe39: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xe3a: IF (Stack[-1] == 0) GOTO 0xe3c; Pop(1)

0xe3b: Return(); Pop(0)

0xe3c: PushEmpty(string, bool)
0xe3d: Stack[-2] = Stack[-3]
0xe3e: Push("")
0xe3f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xe40: IF (Stack[-1] == 0) GOTO 0xe43; Pop(1)

0xe41: Stack[-1] = (bool) 0
0xe42: GOTO 0xe44

0xe43: Stack[-1] = (bool) 1
0xe44: Call2 0x1211

0xe45: Pop(2)
0xe46: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xe47: Return(); Pop(0)

0xe48: PushEmpty()
0xe49: Push((int) 1)
0xe4a: IF (Stack[-1] == 0) GOTO 0xf08; Pop(1)

0xe4b: PushEmpty()
0xe4c: Call2 0x122f

0xe4d: Pop(0)
0xe4e: Push((int) 41246)
0xe4f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe50: IF (Stack[-1] == 0) GOTO 0xe6a; Pop(1)

0xe51: PushEmpty(string)
0xe52: Stack[-1] = "Neutral"
0xe53: Call2 0xe32

0xe54: Pop(1)
0xe55: Push((int) 539303)
0xe56: @@ SetMessage(Stack[-1])
0xe57: Pop(1)
0xe58: @@ ClearReplies()
0xe59: Pop(0)
0xe5a: Push((int) 542544)
0xe5b: Push((int) 44940)
0xe5c: Push((int) 44939)
0xe5d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe5e: Pop(3)
0xe5f: Push((int) 539304)
0xe60: Push((int) -1)
0xe61: Push((int) 41247)
0xe62: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe63: Pop(3)
0xe64: Push((int) 542543)
0xe65: Push((int) -1)
0xe66: Push((int) 44938)
0xe67: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe68: Pop(3)
0xe69: Return(); Pop(0)

0xe6a: Push((int) 44940)
0xe6b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe6c: IF (Stack[-1] == 0) GOTO 0xe81; Pop(1)

0xe6d: PushEmpty(string)
0xe6e: Stack[-1] = "Dream"
0xe6f: Call2 0xe32

0xe70: Pop(1)
0xe71: Push((int) 542545)
0xe72: @@ SetMessage(Stack[-1])
0xe73: Pop(1)
0xe74: @@ ClearReplies()
0xe75: Pop(0)
0xe76: Push((int) 542553)
0xe77: Push((int) 44954)
0xe78: Push((int) 44950)
0xe79: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe7a: Pop(3)
0xe7b: Push((int) 542554)
0xe7c: Push((int) 44952)
0xe7d: Push((int) 44951)
0xe7e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe7f: Pop(3)
0xe80: Return(); Pop(0)

0xe81: Push((int) 44952)
0xe82: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe83: IF (Stack[-1] == 0) GOTO 0xe93; Pop(1)

0xe84: PushEmpty(string)
0xe85: Stack[-1] = "Adoration"
0xe86: Call2 0xe32

0xe87: Pop(1)
0xe88: Push((int) 542555)
0xe89: @@ SetMessage(Stack[-1])
0xe8a: Pop(1)
0xe8b: @@ ClearReplies()
0xe8c: Pop(0)
0xe8d: Push((int) 542556)
0xe8e: Push((int) 44954)
0xe8f: Push((int) 44953)
0xe90: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe91: Pop(3)
0xe92: Return(); Pop(0)

0xe93: Push((int) 44954)
0xe94: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe95: IF (Stack[-1] == 0) GOTO 0xea5; Pop(1)

0xe96: PushEmpty(string)
0xe97: Stack[-1] = "Dream"
0xe98: Call2 0xe32

0xe99: Pop(1)
0xe9a: Push((int) 542557)
0xe9b: @@ SetMessage(Stack[-1])
0xe9c: Pop(1)
0xe9d: @@ ClearReplies()
0xe9e: Pop(0)
0xe9f: Push((int) 542558)
0xea0: Push((int) 44957)
0xea1: Push((int) 44956)
0xea2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xea3: Pop(3)
0xea4: Return(); Pop(0)

0xea5: Push((int) 44957)
0xea6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xea7: IF (Stack[-1] == 0) GOTO 0xebc; Pop(1)

0xea8: PushEmpty(string)
0xea9: Stack[-1] = "Adoration"
0xeaa: Call2 0xe32

0xeab: Pop(1)
0xeac: Push((int) 542559)
0xead: @@ SetMessage(Stack[-1])
0xeae: Pop(1)
0xeaf: @@ ClearReplies()
0xeb0: Pop(0)
0xeb1: Push((int) 542560)
0xeb2: Push((int) 44962)
0xeb3: Push((int) 44958)
0xeb4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeb5: Pop(3)
0xeb6: Push((int) 542561)
0xeb7: Push((int) 44960)
0xeb8: Push((int) 44959)
0xeb9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeba: Pop(3)
0xebb: Return(); Pop(0)

0xebc: Push((int) 44960)
0xebd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xebe: IF (Stack[-1] == 0) GOTO 0xece; Pop(1)

0xebf: PushEmpty(string)
0xec0: Stack[-1] = "Neutral"
0xec1: Call2 0xe32

0xec2: Pop(1)
0xec3: Push((int) 542562)
0xec4: @@ SetMessage(Stack[-1])
0xec5: Pop(1)
0xec6: @@ ClearReplies()
0xec7: Pop(0)
0xec8: Push((int) 542563)
0xec9: Push((int) 44962)
0xeca: Push((int) 44961)
0xecb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xecc: Pop(3)
0xecd: Return(); Pop(0)

0xece: Push((int) 44962)
0xecf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xed0: IF (Stack[-1] == 0) GOTO 0xee5; Pop(1)

0xed1: PushEmpty(string)
0xed2: Stack[-1] = "Neutral"
0xed3: Call2 0xe32

0xed4: Pop(1)
0xed5: Push((int) 542564)
0xed6: @@ SetMessage(Stack[-1])
0xed7: Pop(1)
0xed8: @@ ClearReplies()
0xed9: Pop(0)
0xeda: Push((int) 542565)
0xedb: Push((int) 44966)
0xedc: Push((int) 44964)
0xedd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xede: Pop(3)
0xedf: Push((int) 542566)
0xee0: Push((int) -1)
0xee1: Push((int) 44965)
0xee2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xee3: Pop(3)
0xee4: Return(); Pop(0)

0xee5: Push((int) 44966)
0xee6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xee7: IF (Stack[-1] == 0) GOTO 0xefc; Pop(1)

0xee8: PushEmpty(string)
0xee9: Stack[-1] = "Neutral"
0xeea: Call2 0xe32

0xeeb: Pop(1)
0xeec: Push((int) 542567)
0xeed: @@ SetMessage(Stack[-1])
0xeee: Pop(1)
0xeef: @@ ClearReplies()
0xef0: Pop(0)
0xef1: Push((int) 542568)
0xef2: Push((int) -1)
0xef3: Push((int) 44967)
0xef4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xef5: Pop(3)
0xef6: Push((int) 542569)
0xef7: Push((int) -1)
0xef8: Push((int) 44968)
0xef9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xefa: Pop(3)
0xefb: Return(); Pop(0)

0xefc: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xefd: PushEmpty(bool)
0xefe: Call2 0x12f6

0xeff: Pop(0)
0xf00: IF (Stack[-1] == 0) GOTO 0xf04; Pop(1)

0xf01: @ lshStopAnimation()
0xf02: Pop(0)
0xf03: GOTO 0xf06

0xf04: @ StopAnimation()
0xf05: Pop(0)
0xf06: Return(); Pop(0)

0xf07: GOTO 0xe49

0xf08: Return(); Pop(0)

0xf09: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xf0a: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xf0b: PushEmpty(bool, object, float)
0xf0c: Stack[-2] = Stack[-12]
0xf0d: Stack[-1] = (float) 70.0
0xf0e: Call2 0x1120

0xf0f: Pop(2)
0xf10: Pop(1); Push((bool) Stack[-1] == 0)
0xf11: IF (Stack[-1] == 0) GOTO 0xf14; Pop(1)

0xf12: Stack[-10] = (int) -2
0xf13: Return(); Pop(8)

0xf14: @ CreateDialog(Stack[-4])
0xf15: Pop(0)
0xf16: PushEmpty(int)
0xf17: Call2 0x12f0

0xf18: Pop(0)
0xf19: @@ SetNPCName(Stack[-1])
0xf1a: Pop(1)
0xf1b: PushEmpty(int)
0xf1c: Call2 0x12ee

0xf1d: Pop(0)
0xf1e: @@ SetNPCDescription(Stack[-1])
0xf1f: Pop(1)
0xf20: PushEmpty(string)
0xf21: Call2 0x12f2

0xf22: Pop(0)
0xf23: @@ SetPhoto(Stack[-1])
0xf24: Pop(1)
0xf25: PushEmpty(string)
0xf26: Call2 0x12f4

0xf27: Pop(0)
0xf28: @@ SetPhoto2(Stack[-1])
0xf29: Pop(1)
0xf2a: PushEmpty(int)
0xf2b: Call2 0x1650

0xf2c: Pop(0)
0xf2d: @@ SetPlayerName(Stack[-1])
0xf2e: Pop(1)
0xf2f: Stack[-2] = (int) -1
0xf30: @ IsOverrideActive(Stack[-3])
0xf31: Pop(0)
0xf32: Push(Stack[-3])
0xf33: IF (Stack[-1] == 0) GOTO 0xf36; Pop(1)

0xf34: Stack[-10] = (int) -2
0xf35: Return(); Pop(8)

0xf36: @ DoDialog(Stack[-4])
0xf37: Pop(0)
0xf38: PushEmpty(bool, object)
0xf39: PushEmpty(object)
0xf3a: Call2 0x1236

0xf3b: Stack[-2] = Stack[-1]
0xf3c: Pop(1)
0xf3d: Call2 0x1177

0xf3e: Pop(2)
0xf3f: PushEmpty(object, object)
0xf40: Stack[-2] = Stack[-11]
0xf41: Stack[-1] = Stack[-6]
0xf42: Push(-2, 4); TaskCall(15)
0xf43: Call2 0xf5a

0xf44: Pop(-2, 4); TaskReturn
0xf45: Pop(2)
0xf46: @@ IsDialogEnd(Stack[-1])
0xf47: Pop(0)
0xf48: Pop(0); Push((bool) Stack[-1] == 0)
0xf49: IF (Stack[-1] == 0) GOTO 0xf4f; Pop(1)

0xf4a: @ sync()
0xf4b: Pop(0)
0xf4c: @@ IsDialogEnd(Stack[-1])
0xf4d: Pop(0)
0xf4e: GOTO 0xf48

0xf4f: PushEmpty(object)
0xf50: Stack[-1] = Stack[-10]
0xf51: Call2 0x1165

0xf52: Pop(1)
0xf53: @ StopDialog(Stack[-4])
0xf54: Pop(0)
0xf55: @@ GetReturnValue(Stack[-2])
0xf56: Pop(0)
0xf57: Stack[-10] = Stack[-2]
0xf58: Return(); Pop(8)

0xf59: Stack[-4] = 0
0xf5a: PushEmpty()
0xf5b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xf5c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xf5d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xf5e: Push((int) 1)
0xf5f: IF (Stack[-1] == 0) GOTO 0xf76; Pop(1)

0xf60: PushEmpty(string)
0xf61: Stack[-1] = "Neutral"
0xf62: Call2 0xf94

0xf63: Pop(1)
0xf64: Push((int) 540539)
0xf65: @@ SetMessage(Stack[-1])
0xf66: Pop(1)
0xf67: @@ ClearReplies()
0xf68: Pop(0)
0xf69: Push((int) 540540)
0xf6a: Push((int) -1)
0xf6b: Push((int) 42549)
0xf6c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf6d: Pop(3)
0xf6e: Push((int) 540799)
0xf6f: Push((int) -1)
0xf70: Push((int) 42848)
0xf71: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf72: Pop(3)
0xf73: GOTO 0xf76

0xf74: Return(); Pop(0)

0xf75: GOTO 0xf5e

0xf76: PushEmpty(bool)
0xf77: Call2 0x12f6

0xf78: Pop(0)
0xf79: IF (Stack[-1] == 0) GOTO 0xf85; Pop(1)

0xf7a: @ lshWaitForAnimEnd()
0xf7b: Pop(0)
0xf7c: Push( Stack[3 + Tasks[-1].StackPointer] )
0xf7d: IF (Stack[-1] == 0) GOTO 0xf7f; Pop(1)

0xf7e: GOTO 0xf84

0xf7f: PushEmpty(string)
0xf80: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xf81: Call2 0x1201

0xf82: Pop(1)
0xf83: GOTO 0xf7a

0xf84: GOTO 0xf93

0xf85: Push("all")
0xf86: Push("idle")
0xf87: @ PlayAnimation(Stack[-2], Stack[-1])
0xf88: Pop(2)
0xf89: @ WaitForAnimEnd()
0xf8a: Pop(0)
0xf8b: Push( Stack[3 + Tasks[-1].StackPointer] )
0xf8c: IF (Stack[-1] == 0) GOTO 0xf8e; Pop(1)

0xf8d: GOTO 0xf93

0xf8e: Push("all")
0xf8f: Push("idle")
0xf90: @ PlayAnimation(Stack[-2], Stack[-1])
0xf91: Pop(2)
0xf92: GOTO 0xf89

0xf93: Return(); Pop(0)

0xf94: PushEmpty()
0xf95: PushEmpty(bool)
0xf96: Call2 0x12f6

0xf97: Pop(0)
0xf98: Pop(1); Push((bool) Stack[-1] == 0)
0xf99: IF (Stack[-1] == 0) GOTO 0xf9b; Pop(1)

0xf9a: Return(); Pop(0)

0xf9b: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xf9c: IF (Stack[-1] == 0) GOTO 0xf9e; Pop(1)

0xf9d: Return(); Pop(0)

0xf9e: PushEmpty(string, bool)
0xf9f: Stack[-2] = Stack[-3]
0xfa0: Push("")
0xfa1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xfa2: IF (Stack[-1] == 0) GOTO 0xfa5; Pop(1)

0xfa3: Stack[-1] = (bool) 0
0xfa4: GOTO 0xfa6

0xfa5: Stack[-1] = (bool) 1
0xfa6: Call2 0x1211

0xfa7: Pop(2)
0xfa8: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xfa9: Return(); Pop(0)

0xfaa: PushEmpty()
0xfab: Push((int) 1)
0xfac: IF (Stack[-1] == 0) GOTO 0xfd3; Pop(1)

0xfad: PushEmpty()
0xfae: Call2 0x122f

0xfaf: Pop(0)
0xfb0: Push((int) 42548)
0xfb1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfb2: IF (Stack[-1] == 0) GOTO 0xfc7; Pop(1)

0xfb3: PushEmpty(string)
0xfb4: Stack[-1] = "Neutral"
0xfb5: Call2 0xf94

0xfb6: Pop(1)
0xfb7: Push((int) 540539)
0xfb8: @@ SetMessage(Stack[-1])
0xfb9: Pop(1)
0xfba: @@ ClearReplies()
0xfbb: Pop(0)
0xfbc: Push((int) 540540)
0xfbd: Push((int) -1)
0xfbe: Push((int) 42549)
0xfbf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfc0: Pop(3)
0xfc1: Push((int) 540799)
0xfc2: Push((int) -1)
0xfc3: Push((int) 42848)
0xfc4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfc5: Pop(3)
0xfc6: Return(); Pop(0)

0xfc7: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xfc8: PushEmpty(bool)
0xfc9: Call2 0x12f6

0xfca: Pop(0)
0xfcb: IF (Stack[-1] == 0) GOTO 0xfcf; Pop(1)

0xfcc: @ lshStopAnimation()
0xfcd: Pop(0)
0xfce: GOTO 0xfd1

0xfcf: @ StopAnimation()
0xfd0: Pop(0)
0xfd1: Return(); Pop(0)

0xfd2: GOTO 0xfab

0xfd3: Return(); Pop(0)

0xfd4: Push(GlobalVars[1])
0xfd5: Stack[-1] = (bool) 0
0xfd6: GlobalVars[1] = Stack[-1]; Pop(1)
0xfd7: PushEmpty()
0xfd8: Call2 0xfdb

0xfd9: Pop(0)
0xfda: Return(); Pop(0)

0xfdb: PushEmpty(bool)
0xfdc: Call2 0x111b

0xfdd: Pop(0)
0xfde: Pop(1); Push((bool) Stack[-1] == 0)
0xfdf: IF (Stack[-1] == 0) GOTO 0xfe2; Pop(1)

0xfe0: @ Hold()
0xfe1: Pop(0)
0xfe2: @ GetDirection(Stack[-0])
0xfe3: Pop(0)
0xfe4: PushEmpty()
0xfe5: Call2 0x108b

0xfe6: Pop(0)
0xfe7: GOTO 0xfe4

0xfe8: Return(); Pop(0)

0xfe9: PushEmpty(object, object)
0xfea: Push("player")
0xfeb: @ FindActor(Stack[-2], Stack[-1])
0xfec: Pop(1)
0xfed: Pop(0); Push((bool) Stack[-1] == 0)
0xfee: IF (Stack[-1] == 0) GOTO 0xff1; Pop(1)

0xfef: Stack[-3] = (bool) 0
0xff0: Return(); Pop(2)

0xff1: PushEmpty(bool, object)
0xff2: Stack[-1] = Stack[-3]
0xff3: Call2 0x1112

0xff4: Stack[-5] = Stack[-2]
0xff5: Pop(2)
0xff6: Return(); Pop(2)

0xff7: Stack[-1] = 0
0xff8: Push(CvectorIndex(Stack[-0], 0))
0xff9: Push(CvectorIndex(Stack[-0], 2))
0xffa: @ RotateAsync(Stack[-2], Stack[-1])
0xffb: Pop(2)
0xffc: Return(); Pop(0)

0xffd: PushEmpty(object, bool, object, bool)
0xffe: Push("player")
0xfff: @ FindActor(Stack[-3], Stack[-1])
0x1000: Pop(1)
0x1001: Pop(0); Push((bool) Stack[-2] == 0)
0x1002: IF (Stack[-1] == 0) GOTO 0x1005; Pop(1)

0x1003: Stack[-5] = (bool) 0
0x1004: Return(); Pop(4)

0x1005: PushEmpty(float, object)
0x1006: Stack[-1] = Stack[-4]
0x1007: Call2 0x10d7

0x1008: Pop(1)
0x1009: Push((float)90000.0)
0x100a: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x100b: IF (Stack[-1] == 0) GOTO 0x100e; Pop(1)

0x100c: Stack[-5] = (bool) 0
0x100d: Return(); Pop(4)

0x100e: @ CanSee(Stack[-1], Stack[-2])
0x100f: Pop(0)
0x1010: Stack[-5] = Stack[-1]
0x1011: Return(); Pop(4)

0x1012: Stack[-2] = 0
0x1013: PushEmpty(float, float)
0x1014: Push((int) 8)
0x1015: Push((int) 16)
0x1016: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x1017: Pop(2)
0x1018: Push((int) 10)
0x1019: @ SetTimer(Stack[-1], Stack[-2])
0x101a: Pop(1)
0x101b: Return(); Pop(2)

0x101c: Push((int) 10)
0x101d: @ KillTimer(Stack[-1])
0x101e: Pop(1)
0x101f: Return(); Pop(0)

0x1020: PushEmpty()
0x1021: Push((int) 10)
0x1022: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1023: IF (Stack[-1] == 0) GOTO 0x1045; Pop(1)

0x1024: PushEmpty()
0x1025: Call2 0x101c

0x1026: Pop(0)
0x1027: PushEmpty(bool)
0x1028: Stack[-1] = (bool) 0
0x1029: PushEmpty(bool)
0x102a: Call2 0x111b

0x102b: Pop(0)
0x102c: IF (Stack[-1] == 0) GOTO 0x1032; Pop(1)

0x102d: PushEmpty(bool)
0x102e: Call2 0xffd

0x102f: Pop(0)
0x1030: IF (Stack[-1] == 0) GOTO 0x1032; Pop(1)

0x1031: Stack[-1] = (bool) 1
0x1032: IF (Stack[-1] == 0) GOTO 0x103f; Pop(1)

0x1033: PushEmpty(bool)
0x1034: Call2 0xfe9

0x1035: Pop(0)
0x1036: IF (Stack[-1] == 0) GOTO 0x103e; Pop(1)

0x1037: PushEmpty(bool, object)
0x1038: PushEmpty(object)
0x1039: Call2 0x1236

0x103a: Stack[-2] = Stack[-1]
0x103b: Pop(1)
0x103c: Call2 0x11b1

0x103d: Pop(2)
0x103e: GOTO 0x1045

0x103f: PushEmpty()
0x1040: Call2 0xff8

0x1041: Pop(0)
0x1042: PushEmpty()
0x1043: Call2 0x1013

0x1044: Pop(0)
0x1045: Return(); Pop(0)

0x1046: PushEmpty()
0x1047: Call2 0x10d2

0x1048: Pop(0)
0x1049: PushEmpty()
0x104a: Call2 0x101c

0x104b: Pop(0)
0x104c: @ lshStopSpeech()
0x104d: Pop(0)
0x104e: @ lshStopAnimation()
0x104f: Pop(0)
0x1050: @ StopAsync()
0x1051: Pop(0)
0x1052: @ Hold()
0x1053: Pop(0)
0x1054: Return(); Pop(0)

0x1055: @ StopGroup0()
0x1056: Pop(0)
0x1057: PushEmpty()
0x1058: Call2 0x101c

0x1059: Pop(0)
0x105a: PushEmpty(string)
0x105b: Stack[-1] = "Neutral"
0x105c: Call2 0x1201

0x105d: Pop(1)
0x105e: PushEmpty()
0x105f: Call2 0x1013

0x1060: Pop(0)
0x1061: Return(); Pop(0)

0x1062: PushEmpty()
0x1063: Push(Stack[-1])
0x1064: IF (Stack[-1] == 0) GOTO 0x1069; Pop(1)

0x1065: PushEmpty()
0x1066: Call2 0x1013

0x1067: Pop(0)
0x1068: GOTO 0x106d

0x1069: PushEmpty(string)
0x106a: Stack[-1] = "Neutral"
0x106b: Call2 0x1201

0x106c: Pop(1)
0x106d: Return(); Pop(0)

0x106e: PushEmpty(bool, bool)
0x106f: @ IsOverrideActive(Stack[-1])
0x1070: Pop(0)
0x1071: Pop(0); Push((bool) Stack[-1] == 0)
0x1072: IF (Stack[-1] == 0) GOTO 0x108a; Pop(1)

0x1073: EventDisable(0)
0x1074: PushEmpty()
0x1075: Call2 0x10d2

0x1076: Pop(0)
0x1077: PushEmpty(bool, object)
0x1078: Stack[-1] = Stack[-5]
0x1079: Call2 0x1112

0x107a: Pop(2)
0x107b: EventEnable(0)
0x107c: PushEmpty(object)
0x107d: Stack[-1] = Stack[-4]
0x107e: Call2 0x1661

0x107f: Pop(1)
0x1080: PushEmpty(string)
0x1081: Stack[-1] = "Neutral"
0x1082: Call2 0x1201

0x1083: Pop(1)
0x1084: PushEmpty()
0x1085: Call2 0x101c

0x1086: Pop(0)
0x1087: PushEmpty()
0x1088: Call2 0x1013

0x1089: Pop(0)
0x108a: Return(); Pop(2)

0x108b: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x108c: @ WaitForAnimEnd()
0x108d: Pop(0)
0x108e: PushEmpty(bool)
0x108f: Call2 0x111b

0x1090: Pop(0)
0x1091: Pop(1); Push((bool) Stack[-1] == 0)
0x1092: IF (Stack[-1] == 0) GOTO 0x1094; Pop(1)

0x1093: Return(); Pop(12)

0x1094: PushEmpty(int)
0x1095: Call2 0x12dd

0x1096: Stack[-7] = Stack[-1]
0x1097: Pop(1)
0x1098: Stack[-5] = (int) 0
0x1099: PushEmpty(bool)
0x109a: Stack[-1] = (bool) 0
0x109b: Push((int) 5)
0x109c: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x109d: IF (Stack[-1] == 0) GOTO 0x10a3; Pop(1)

0x109e: PushEmpty(bool)
0x109f: Call2 0x111b

0x10a0: Pop(0)
0x10a1: IF (Stack[-1] == 0) GOTO 0x10a3; Pop(1)

0x10a2: Stack[-1] = (bool) 1
0x10a3: IF (Stack[-1] == 0) GOTO 0x10cd; Pop(1)

0x10a4: Pop(0); Push((bool) Stack[-6] == 0)
0x10a5: IF (Stack[-1] == 0) GOTO 0x10ad; Pop(1)

0x10a6: Push((int) 3)
0x10a7: @ Sleep(Stack[-1], Stack[-5])
0x10a8: Pop(1)
0x10a9: Pop(0); Push((bool) Stack[-4] == 0)
0x10aa: IF (Stack[-1] == 0) GOTO 0x10ac; Pop(1)

0x10ab: GOTO 0x10cd

0x10ac: GOTO 0x10c2

0x10ad: @ irand(Stack[-3], Stack[-6])
0x10ae: Pop(0)
0x10af: Push((int) 5)
0x10b0: @ irand(Stack[-3], Stack[-1])
0x10b1: Pop(1)
0x10b2: Push((int) 0)
0x10b3: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x10b4: IF (Stack[-1] == 0) GOTO 0x10b6; Pop(1)

0x10b5: Stack[-3] = (int) 0
0x10b6: Push("all")
0x10b7: PushEmpty(string, int)
0x10b8: Stack[-1] = Stack[-6]
0x10b9: Call2 0x12d6

0x10ba: Pop(1)
0x10bb: @ PlayAnimation(Stack[-2], Stack[-1])
0x10bc: Pop(2)
0x10bd: @ WaitForAnimEnd(Stack[-1])
0x10be: Pop(0)
0x10bf: Pop(0); Push((bool) Stack[-1] == 0)
0x10c0: IF (Stack[-1] == 0) GOTO 0x10c2; Pop(1)

0x10c1: GOTO 0x10cd

0x10c2: PushEmpty(bool)
0x10c3: Call2 0x10d0

0x10c4: Pop(0)
0x10c5: Pop(1); Push((bool) Stack[-1] == 0)
0x10c6: IF (Stack[-1] == 0) GOTO 0x10c8; Pop(1)

0x10c7: GOTO 0x10cd

0x10c8: @ ResetAAS()
0x10c9: Pop(0)
0x10ca: Push((int) 1)
0x10cb: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x10cc: GOTO 0x1099

0x10cd: @ ResetAAS()
0x10ce: Pop(0)
0x10cf: Return(); Pop(12)

0x10d0: Stack[-1] = (bool) 1
0x10d1: Return(); Pop(0)

0x10d2: @ StopAnimation()
0x10d3: Pop(0)
0x10d4: @ StopGroup0()
0x10d5: Pop(0)
0x10d6: Return(); Pop(0)

0x10d7: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x10d8: @ GetPosition(Stack[-3])
0x10d9: Pop(0)
0x10da: @@ GetPosition(Stack[-2])
0x10db: Pop(0)
0x10dc: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x10dd: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x10de: Return(); Pop(6)

0x10df: PushEmpty(bool, bool)
0x10e0: Push("HasProperty")
0x10e1: Push((int) 2)
0x10e2: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x10e3: Pop(1); Push((bool) Stack[-1] == 0)
0x10e4: IF (Stack[-1] == 0) GOTO 0x10e7; Pop(1)

0x10e5: Stack[-5] = (bool) 0
0x10e6: Return(); Pop(2)

0x10e7: @@ HasProperty(Stack[-3], Stack[-1])
0x10e8: Pop(0)
0x10e9: Stack[-5] = Stack[-1]
0x10ea: Return(); Pop(2)

0x10eb: PushEmpty(float, float)
0x10ec: PushEmpty(bool, object, string)
0x10ed: Stack[-2] = Stack[-10]
0x10ee: Stack[-1] = Stack[-9]
0x10ef: Call2 0x10df

0x10f0: Pop(2)
0x10f1: Pop(1); Push((bool) Stack[-1] == 0)
0x10f2: IF (Stack[-1] == 0) GOTO 0x10f5; Pop(1)

0x10f3: Stack[-8] = (bool) 0
0x10f4: Return(); Pop(2)

0x10f5: @@ GetProperty(Stack[-6], Stack[-1])
0x10f6: Pop(0)
0x10f7: PushEmpty(float, float, float, float)
0x10f8: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x10f9: Stack[-2] = Stack[-8]
0x10fa: Stack[-1] = Stack[-7]
0x10fb: Call2 0x1246

0x10fc: Pop(3)
0x10fd: @@ SetProperty(Stack[-7], Stack[-1])
0x10fe: Pop(1)
0x10ff: Stack[-8] = (bool) 1
0x1100: Return(); Pop(2)

0x1101: PushEmpty(int, int)
0x1102: @@ GetProperty(Stack[-4], Stack[-1])
0x1103: Pop(0)
0x1104: Pop(0); Push(Stack[-1] + Stack[-3]);
0x1105: @@ SetProperty(Stack[-5], Stack[-1])
0x1106: Pop(1)
0x1107: Return(); Pop(2)

0x1108: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x1109: @ GetPosition(Stack[-3])
0x110a: Pop(0)
0x110b: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x110c: Push(CvectorIndex(Stack[-2], 0))
0x110d: Push(CvectorIndex(Stack[-3], 2))
0x110e: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x110f: Pop(2)
0x1110: Stack[-8] = Stack[-1]
0x1111: Return(); Pop(6)

0x1112: PushEmpty(cvector, cvector)
0x1113: @@ GetPosition(Stack[-1])
0x1114: Pop(0)
0x1115: PushEmpty(bool, cvector)
0x1116: Stack[-1] = Stack[-3]
0x1117: Call2 0x1108

0x1118: Stack[-6] = Stack[-2]
0x1119: Pop(2)
0x111a: Return(); Pop(2)

0x111b: PushEmpty(bool, bool)
0x111c: @ IsLoaded(Stack[-1])
0x111d: Pop(0)
0x111e: Stack[-3] = Stack[-1]
0x111f: Return(); Pop(2)

0x1120: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x1121: @@ GetPosition(Stack[-8])
0x1122: Pop(0)
0x1123: @@ GetEyesHeight(Stack[-9])
0x1124: Pop(0)
0x1125: Push(CvectorIndex(Stack[-8], 1))
0x1126: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1127: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x1128: @ GetPosition(Stack[-7])
0x1129: Pop(0)
0x112a: @ GetEyesHeight(Stack[-9])
0x112b: Pop(0)
0x112c: Push(CvectorIndex(Stack[-7], 1))
0x112d: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x112e: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x112f: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x1130: Push(CvectorIndex(Stack[-6], 1))
0x1131: Stack[-1] = (int) 0
0x1132: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1133: Pop(0); Push(Stack[-6] | Stack[-6]);
0x1134: Pop(1); Push(Sqrt(Stack[-1]))
0x1135: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x1136: Stack[-5] = -Stack[-6]; Pop(0);
0x1137: Pop(0); Push(Stack[-6] * Stack[-19]);
0x1138: PushEmpty(cvector, cvector)
0x1139: Push(CVector(0.0, 1.0, 0.0))
0x113a: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x113b: Call2 0x123c

0x113c: Pop(1)
0x113d: Push((int) 25)
0x113e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x113f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1140: Push(CVector(0.0, 10.0, 0.0))
0x1141: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x1142: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x1143: @ IsOverrideActive(Stack[-2])
0x1144: Pop(0)
0x1145: Push(Stack[-2])
0x1146: IF (Stack[-1] == 0) GOTO 0x1149; Pop(1)

0x1147: Stack[-21] = (bool) 0
0x1148: Return(); Pop(18)

0x1149: @ StopWorld()
0x114a: Pop(0)
0x114b: Push((bool) 1)
0x114c: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x114d: Pop(1)
0x114e: Push(CvectorIndex(Stack[-4], 0))
0x114f: Push(CvectorIndex(Stack[-5], 2))
0x1150: @ Rotate(Stack[-2], Stack[-1])
0x1151: Pop(2)
0x1152: PushEmpty(bool)
0x1153: Call2 0x12f6

0x1154: Pop(0)
0x1155: IF (Stack[-1] == 0) GOTO 0x1157; Pop(1)

0x1156: GOTO 0x115f

0x1157: Push("head")
0x1158: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x1159: Pop(1)
0x115a: Push(Stack[-1])
0x115b: IF (Stack[-1] == 0) GOTO 0x115f; Pop(1)

0x115c: Push("head")
0x115d: @ LookAsyncCamera(Stack[-1])
0x115e: Pop(1)
0x115f: @ CameraWaitForPlayFinish()
0x1160: Pop(0)
0x1161: @ ResumeWorld()
0x1162: Pop(0)
0x1163: Stack[-21] = (bool) 1
0x1164: Return(); Pop(18)

0x1165: PushEmpty(bool, bool)
0x1166: Push((bool) 1)
0x1167: @ CameraSwitchToNormal(Stack[-1])
0x1168: Pop(1)
0x1169: PushEmpty(bool)
0x116a: Call2 0x12f6

0x116b: Pop(0)
0x116c: IF (Stack[-1] == 0) GOTO 0x116e; Pop(1)

0x116d: GOTO 0x1176

0x116e: Push("head")
0x116f: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x1170: Pop(1)
0x1171: Push(Stack[-1])
0x1172: IF (Stack[-1] == 0) GOTO 0x1176; Pop(1)

0x1173: Push("head")
0x1174: @ UnlookAsync(Stack[-1])
0x1175: Pop(1)
0x1176: Return(); Pop(2)

0x1177: PushEmpty(int, int, int, int)
0x1178: Push("voice_common")
0x1179: @ GetVariable(Stack[-1], Stack[-3])
0x117a: Pop(1)
0x117b: Push(Stack[-2])
0x117c: IF (Stack[-1] == 0) GOTO 0x119d; Pop(1)

0x117d: PushEmpty(bool, object)
0x117e: Stack[-1] = Stack[-7]
0x117f: Call2 0x11b1

0x1180: Pop(1)
0x1181: Pop(1); Push((bool) Stack[-1] == 0)
0x1182: IF (Stack[-1] == 0) GOTO 0x118b; Pop(1)

0x1183: PushEmpty(bool, object)
0x1184: Stack[-1] = Stack[-7]
0x1185: Call2 0x11d6

0x1186: Pop(1)
0x1187: Pop(1); Push((bool) Stack[-1] == 0)
0x1188: IF (Stack[-1] == 0) GOTO 0x118b; Pop(1)

0x1189: Stack[-6] = (bool) 0
0x118a: Return(); Pop(4)

0x118b: Push((int) 2)
0x118c: @ irand(Stack[-2], Stack[-1])
0x118d: Pop(1)
0x118e: Push(Stack[-1])
0x118f: IF (Stack[-1] == 0) GOTO 0x1198; Pop(1)

0x1190: Push("voice_common")
0x1191: Push((int) 1)
0x1192: Pop(1); Push(Stack[-4] + Stack[-1]);
0x1193: Push((int) 3)
0x1194: Pop(2); Push(Stack[-2] % Stack[-1]);
0x1195: @ SetVariable(Stack[-2], Stack[-1])
0x1196: Pop(2)
0x1197: GOTO 0x119c

0x1198: Push("voice_common")
0x1199: Push((int) 0)
0x119a: @ SetVariable(Stack[-2], Stack[-1])
0x119b: Pop(2)
0x119c: GOTO 0x11af

0x119d: PushEmpty(bool, object)
0x119e: Stack[-1] = Stack[-7]
0x119f: Call2 0x11d6

0x11a0: Pop(1)
0x11a1: Pop(1); Push((bool) Stack[-1] == 0)
0x11a2: IF (Stack[-1] == 0) GOTO 0x11ab; Pop(1)

0x11a3: PushEmpty(bool, object)
0x11a4: Stack[-1] = Stack[-7]
0x11a5: Call2 0x11b1

0x11a6: Pop(1)
0x11a7: Pop(1); Push((bool) Stack[-1] == 0)
0x11a8: IF (Stack[-1] == 0) GOTO 0x11ab; Pop(1)

0x11a9: Stack[-6] = (bool) 0
0x11aa: Return(); Pop(4)

0x11ab: Push("voice_common")
0x11ac: Push((int) 1)
0x11ad: @ SetVariable(Stack[-2], Stack[-1])
0x11ae: Pop(2)
0x11af: Stack[-6] = (bool) 1
0x11b0: Return(); Pop(4)

0x11b1: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x11b2: Stack[-5] = "c"
0x11b3: Stack[-4] = (int) 0
0x11b4: Push((int) 1)
0x11b5: IF (Stack[-1] == 0) GOTO 0x11c1; Pop(1)

0x11b6: Push((int) 1)
0x11b7: Pop(1); Push(Stack[-5] + Stack[-1]);
0x11b8: Pop(1); Push(Stack[-6] + Stack[-1]);
0x11b9: @@ HasProperty(Stack[-1], Stack[-4])
0x11ba: Pop(1)
0x11bb: Pop(0); Push((bool) Stack[-3] == 0)
0x11bc: IF (Stack[-1] == 0) GOTO 0x11be; Pop(1)

0x11bd: GOTO 0x11c1

0x11be: Push((int) 1)
0x11bf: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x11c0: GOTO 0x11b4

0x11c1: Pop(0); Push((bool) Stack[-4] == 0)
0x11c2: IF (Stack[-1] == 0) GOTO 0x11c5; Pop(1)

0x11c3: Stack[-12] = (bool) 0
0x11c4: Return(); Pop(10)

0x11c5: Stack[-2] = (int) 0
0x11c6: Push((int) 1)
0x11c7: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x11c8: IF (Stack[-1] == 0) GOTO 0x11cb; Pop(1)

0x11c9: @ irand(Stack[-2], Stack[-4])
0x11ca: Pop(0)
0x11cb: Push((int) 1)
0x11cc: Pop(1); Push(Stack[-3] + Stack[-1]);
0x11cd: Pop(1); Push(Stack[-6] + Stack[-1]);
0x11ce: @@ GetProperty(Stack[-1], Stack[-2])
0x11cf: Pop(1)
0x11d0: PushEmpty(bool, string)
0x11d1: Stack[-1] = Stack[-3]
0x11d2: Call2 0x1220

0x11d3: Stack[-14] = Stack[-2]
0x11d4: Pop(2)
0x11d5: Return(); Pop(10)

0x11d6: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x11d7: Push("d")
0x11d8: PushEmpty(int)
0x11d9: Call2 0x12c7

0x11da: Pop(0)
0x11db: Pop(2); Push(Stack[-2] + Stack[-1]);
0x11dc: Push("m")
0x11dd: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x11de: Stack[-4] = (int) 0
0x11df: Push((int) 1)
0x11e0: IF (Stack[-1] == 0) GOTO 0x11ec; Pop(1)

0x11e1: Push((int) 1)
0x11e2: Pop(1); Push(Stack[-5] + Stack[-1]);
0x11e3: Pop(1); Push(Stack[-6] + Stack[-1]);
0x11e4: @@ HasProperty(Stack[-1], Stack[-4])
0x11e5: Pop(1)
0x11e6: Pop(0); Push((bool) Stack[-3] == 0)
0x11e7: IF (Stack[-1] == 0) GOTO 0x11e9; Pop(1)

0x11e8: GOTO 0x11ec

0x11e9: Push((int) 1)
0x11ea: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x11eb: GOTO 0x11df

0x11ec: Pop(0); Push((bool) Stack[-4] == 0)
0x11ed: IF (Stack[-1] == 0) GOTO 0x11f0; Pop(1)

0x11ee: Stack[-12] = (bool) 0
0x11ef: Return(); Pop(10)

0x11f0: Stack[-2] = (int) 0
0x11f1: Push((int) 1)
0x11f2: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x11f3: IF (Stack[-1] == 0) GOTO 0x11f6; Pop(1)

0x11f4: @ irand(Stack[-2], Stack[-4])
0x11f5: Pop(0)
0x11f6: Push((int) 1)
0x11f7: Pop(1); Push(Stack[-3] + Stack[-1]);
0x11f8: Pop(1); Push(Stack[-6] + Stack[-1]);
0x11f9: @@ GetProperty(Stack[-1], Stack[-2])
0x11fa: Pop(1)
0x11fb: PushEmpty(bool, string)
0x11fc: Stack[-1] = Stack[-3]
0x11fd: Call2 0x1220

0x11fe: Stack[-14] = Stack[-2]
0x11ff: Pop(2)
0x1200: Return(); Pop(10)

0x1201: PushEmpty(bool, float, float, bool, float, float)
0x1202: @ lshHasAnimation(Stack[-3], Stack[-7])
0x1203: Pop(0)
0x1204: Push(Stack[-3])
0x1205: IF (Stack[-1] == 0) GOTO 0x120c; Pop(1)

0x1206: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x1207: Pop(0)
0x1208: Push((bool) 0)
0x1209: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x120a: Pop(1)
0x120b: GOTO 0x1210

0x120c: Push("Can't find lsh animation : ")
0x120d: Pop(1); Push(Stack[-1] + Stack[-8]);
0x120e: @ Trace(Stack[-1])
0x120f: Pop(1)
0x1210: Return(); Pop(6)

0x1211: PushEmpty(bool, float, float, bool, float, float)
0x1212: @ lshHasAnimation(Stack[-3], Stack[-8])
0x1213: Pop(0)
0x1214: Push(Stack[-3])
0x1215: IF (Stack[-1] == 0) GOTO 0x121b; Pop(1)

0x1216: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x1217: Pop(0)
0x1218: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x1219: Pop(0)
0x121a: GOTO 0x121f

0x121b: Push("Can't find lsh animation : ")
0x121c: Pop(1); Push(Stack[-1] + Stack[-9]);
0x121d: @ Trace(Stack[-1])
0x121e: Pop(1)
0x121f: Return(); Pop(6)

0x1220: PushEmpty(bool, bool)
0x1221: PushEmpty(bool)
0x1222: Call2 0x12f6

0x1223: Pop(0)
0x1224: IF (Stack[-1] == 0) GOTO 0x122d; Pop(1)

0x1225: @ lshHasSpeech(Stack[-1], Stack[-3])
0x1226: Pop(0)
0x1227: Push(Stack[-1])
0x1228: IF (Stack[-1] == 0) GOTO 0x122d; Pop(1)

0x1229: @ lshPlaySpeech(Stack[-3])
0x122a: Pop(0)
0x122b: Stack[-4] = (bool) 1
0x122c: Return(); Pop(2)

0x122d: Stack[-4] = (bool) 0
0x122e: Return(); Pop(2)

0x122f: PushEmpty(bool)
0x1230: Call2 0x12f6

0x1231: Pop(0)
0x1232: IF (Stack[-1] == 0) GOTO 0x1235; Pop(1)

0x1233: @ lshStopSpeech()
0x1234: Pop(0)
0x1235: Return(); Pop(0)

0x1236: PushEmpty(object, object)
0x1237: @ self(Stack[-1])
0x1238: Pop(0)
0x1239: Stack[-3] = Stack[-1]
0x123a: Return(); Pop(2)

0x123b: Stack[-1] = 0
0x123c: PushEmpty(float, float)
0x123d: Pop(0); Push(Stack[-3] | Stack[-3]);
0x123e: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x123f: Push((float)0.0)
0x1240: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x1241: IF (Stack[-1] == 0) GOTO 0x1244; Pop(1)

0x1242: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x1243: Return(); Pop(2)

0x1244: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x1245: Return(); Pop(2)

0x1246: PushEmpty()
0x1247: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x1248: IF (Stack[-1] == 0) GOTO 0x124b; Pop(1)

0x1249: Stack[-4] = Stack[-2]
0x124a: Return(); Pop(0)

0x124b: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x124c: IF (Stack[-1] == 0) GOTO 0x124f; Pop(1)

0x124d: Stack[-4] = Stack[-1]
0x124e: Return(); Pop(0)

0x124f: Stack[-4] = Stack[-3]
0x1250: Return(); Pop(0)

0x1251: PushEmpty(int, int)
0x1252: @ GetVariable(Stack[-3], Stack[-1])
0x1253: Pop(0)
0x1254: Stack[-4] = Stack[-1]
0x1255: Return(); Pop(2)

0x1256: PushEmpty(object, object)
0x1257: @ CreateIntVector(Stack[-1])
0x1258: Pop(0)
0x1259: @@ add(Stack[-4])
0x125a: Pop(0)
0x125b: @@ add(Stack[-3])
0x125c: Pop(0)
0x125d: Push((int) 3)
0x125e: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x125f: Pop(1)
0x1260: Return(); Pop(2)

0x1261: Stack[-1] = 0
0x1262: PushEmpty(int, int)
0x1263: PushEmpty(object, string, int)
0x1264: Stack[-3] = Stack[-7]
0x1265: Stack[-2] = "money"
0x1266: Stack[-1] = Stack[-6]
0x1267: Call2 0x1101

0x1268: Pop(3)
0x1269: Push((int) 0)
0x126a: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x126b: IF (Stack[-1] == 0) GOTO 0x1274; Pop(1)

0x126c: Push("Money")
0x126d: @ GetInvItemByName(Stack[-2], Stack[-1])
0x126e: Pop(1)
0x126f: PushEmpty(int, int)
0x1270: Stack[-2] = Stack[-3]
0x1271: Stack[-1] = Stack[-5]
0x1272: Call2 0x1256

0x1273: Pop(2)
0x1274: Return(); Pop(2)

0x1275: PushEmpty(int, int, bool, int, int, bool)
0x1276: @@ GetItemID(Stack[-3])
0x1277: Pop(0)
0x1278: Push("Category")
0x1279: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x127a: Pop(1)
0x127b: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x127c: Pop(0)
0x127d: Pop(0); Push((bool) Stack[-1] == 0)
0x127e: IF (Stack[-1] == 0) GOTO 0x1282; Pop(1)

0x127f: @@ DropItems(Stack[-8], Stack[-7])
0x1280: Pop(0)
0x1281: GOTO 0x1287

0x1282: PushEmpty(int, int)
0x1283: Stack[-2] = Stack[-5]
0x1284: Stack[-1] = Stack[-9]
0x1285: Call2 0x1256

0x1286: Pop(2)
0x1287: Return(); Pop(6)

0x1288: PushEmpty(object, object)
0x1289: @ CreateInvItem(Stack[-1])
0x128a: Pop(0)
0x128b: @@ SetItemName(Stack[-4])
0x128c: Pop(0)
0x128d: PushEmpty(object, object, int)
0x128e: Stack[-3] = Stack[-8]
0x128f: Stack[-2] = Stack[-4]
0x1290: Stack[-1] = Stack[-6]
0x1291: Call2 0x1275

0x1292: Pop(3)
0x1293: Return(); Pop(2)

0x1294: Stack[-1] = 0
0x1295: PushEmpty()
0x1296: Pop(0); Push((bool) Stack[-2] == 0)
0x1297: IF (Stack[-1] == 0) GOTO 0x129a; Pop(1)

0x1298: Stack[-3] = (bool) 0
0x1299: Return(); Pop(0)

0x129a: Push((int) 0)
0x129b: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x129c: IF (Stack[-1] == 0) GOTO 0x12a1; Pop(1)

0x129d: Push((int) 8)
0x129e: @ SendWorldWndMessage(Stack[-1])
0x129f: Pop(1)
0x12a0: GOTO 0x12aa

0x12a1: Push((int) 0)
0x12a2: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x12a3: IF (Stack[-1] == 0) GOTO 0x12a8; Pop(1)

0x12a4: Push((int) 9)
0x12a5: @ SendWorldWndMessage(Stack[-1])
0x12a6: Pop(1)
0x12a7: GOTO 0x12aa

0x12a8: Stack[-3] = (bool) 0
0x12a9: Return(); Pop(0)

0x12aa: PushEmpty(float)
0x12ab: Stack[-1] = Stack[-2]
0x12ac: Call2 0x12b8

0x12ad: Pop(1)
0x12ae: PushEmpty(bool, object, string, float, float, float)
0x12af: Stack[-5] = Stack[-8]
0x12b0: Stack[-4] = "reputation"
0x12b1: Stack[-3] = Stack[-7]
0x12b2: Stack[-2] = (int) 0
0x12b3: Stack[-1] = (int) 1
0x12b4: Call2 0x10eb

0x12b5: Pop(6)
0x12b6: Stack[-3] = (bool) 1
0x12b7: Return(); Pop(0)

0x12b8: PushEmpty(object, object)
0x12b9: @ CreateFloatVector(Stack[-1])
0x12ba: Pop(0)
0x12bb: @@ add(Stack[-3])
0x12bc: Pop(0)
0x12bd: Push((int) 16)
0x12be: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x12bf: Pop(1)
0x12c0: Return(); Pop(2)

0x12c1: Stack[-1] = 0
0x12c2: PushEmpty(float, float)
0x12c3: @ GetGameTime(Stack[-1])
0x12c4: Pop(0)
0x12c5: Stack[-3] = Stack[-1]
0x12c6: Return(); Pop(2)

0x12c7: PushEmpty(float, float)
0x12c8: @ GetGameTime(Stack[-1])
0x12c9: Pop(0)
0x12ca: Push((int) 1)
0x12cb: PushEmpty(int)
0x12cc: Push((int) 24)
0x12cd: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x12ce: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x12cf: Return(); Pop(2)

0x12d0: PushEmpty()
0x12d1: PushEmpty(int)
0x12d2: Call2 0x12c7

0x12d3: Pop(0)
0x12d4: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x12d5: Return(); Pop(0)

0x12d6: PushEmpty(string, string)
0x12d7: Stack[-1] = "idle"
0x12d8: Push(Stack[-3])
0x12d9: IF (Stack[-1] == 0) GOTO 0x12db; Pop(1)

0x12da: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x12db: Stack[-4] = Stack[-1]
0x12dc: Return(); Pop(2)

0x12dd: PushEmpty(int, bool, int, bool)
0x12de: Stack[-2] = (int) 0
0x12df: Push("all")
0x12e0: PushEmpty(string, int)
0x12e1: Stack[-1] = Stack[-5]
0x12e2: Call2 0x12d6

0x12e3: Pop(1)
0x12e4: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x12e5: Pop(2)
0x12e6: Pop(0); Push((bool) Stack[-1] == 0)
0x12e7: IF (Stack[-1] == 0) GOTO 0x12e9; Pop(1)

0x12e8: GOTO 0x12ec

0x12e9: Push((int) 1)
0x12ea: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x12eb: GOTO 0x12df

0x12ec: Stack[-5] = Stack[-2]
0x12ed: Return(); Pop(4)

0x12ee: Stack[-1] = (int) 515530
0x12ef: Return(); Pop(0)

0x12f0: Stack[-1] = (int) 502856
0x12f1: Return(); Pop(0)

0x12f2: Stack[-1] = "ui/NPC_Anna.png"
0x12f3: Return(); Pop(0)

0x12f4: Stack[-1] = "ui/NPC_Anna_b.png"
0x12f5: Return(); Pop(0)

0x12f6: Stack[-1] = (bool) 1
0x12f7: Return(); Pop(0)

0x12f8: PushEmpty()
0x12f9: PushEmpty(object, string, float)
0x12fa: PushEmpty(object)
0x12fb: Call2 0x161e

0x12fc: Stack[-4] = Stack[-1]
0x12fd: Pop(1)
0x12fe: Stack[-2] = "pt_map_notkin"
0x12ff: Stack[-1] = (int) 2
0x1300: Call2 0x162f

0x1301: Pop(3)
0x1302: PushEmpty(object)
0x1303: Call2 0x161e

0x1304: Pop(0)
0x1305: @@ ShowMap(Stack[-1])
0x1306: Pop(1)
0x1307: Return(); Pop(0)

0x1308: PushEmpty()
0x1309: PushEmpty(bool, object, float)
0x130a: Stack[-2] = Stack[-5]
0x130b: Stack[-1] = (float) 0.05
0x130c: Call2 0x1295

0x130d: Pop(3)
0x130e: Return(); Pop(0)

0x130f: PushEmpty()
0x1310: Push("ook1Anna1")
0x1311: Push((int) 1)
0x1312: @ SetVariable(Stack[-2], Stack[-1])
0x1313: Pop(2)
0x1314: Return(); Pop(0)

0x1315: PushEmpty()
0x1316: Push("ook1Anna2")
0x1317: Push((int) 1)
0x1318: @ SetVariable(Stack[-2], Stack[-1])
0x1319: Pop(2)
0x131a: Return(); Pop(0)

0x131b: PushEmpty()
0x131c: Push("ook1Anna3")
0x131d: Push((int) 1)
0x131e: @ SetVariable(Stack[-2], Stack[-1])
0x131f: Pop(2)
0x1320: Return(); Pop(0)

0x1321: PushEmpty(object, object)
0x1322: Push("k1q03")
0x1323: Push((int) 1)
0x1324: @ SetVariable(Stack[-2], Stack[-1])
0x1325: Pop(2)
0x1326: PushEmpty(object)
0x1327: Call2 0x161e

0x1328: Stack[-2] = Stack[-1]
0x1329: Pop(1)
0x132a: Push("k1q03AnnaGotoNotkin")
0x132b: Push("pt_map_notkin")
0x132c: Push((int) 0)
0x132d: Push((int) 524799)
0x132e: PushEmpty(float)
0x132f: Call2 0x12c2

0x1330: Pop(0)
0x1331: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1332: Pop(5)
0x1333: PushEmpty()
0x1334: Call2 0x1573

0x1335: Pop(0)
0x1336: PushEmpty()
0x1337: Call2 0x1580

0x1338: Pop(0)
0x1339: Return(); Pop(2)

0x133a: Stack[-1] = 0
0x133b: PushEmpty()
0x133c: Push("k1q03")
0x133d: Push((int) 1000)
0x133e: @ SetVariable(Stack[-2], Stack[-1])
0x133f: Pop(2)
0x1340: PushEmpty()
0x1341: Call2 0x158d

0x1342: Pop(0)
0x1343: Return(); Pop(0)

0x1344: PushEmpty(object, object)
0x1345: Push("k2q04")
0x1346: Push((int) 2)
0x1347: @ SetVariable(Stack[-2], Stack[-1])
0x1348: Pop(2)
0x1349: PushEmpty(object)
0x134a: Call2 0x161e

0x134b: Stack[-2] = Stack[-1]
0x134c: Pop(1)
0x134d: Push("k2q04AnnaGotoGatherer1")
0x134e: Push("pt_map_gatherer1")
0x134f: Push((int) 0)
0x1350: Push((int) 508643)
0x1351: PushEmpty(float)
0x1352: Call2 0x12c2

0x1353: Pop(0)
0x1354: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1355: Pop(5)
0x1356: Push("k2q04AnnaGotoGatherer2")
0x1357: Push("pt_map_gatherer2")
0x1358: Push((int) 0)
0x1359: Push((int) 539379)
0x135a: PushEmpty(float)
0x135b: Call2 0x12c2

0x135c: Pop(0)
0x135d: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x135e: Pop(5)
0x135f: Push("k2q04AnnaGotoGatherer3")
0x1360: Push("pt_map_gatherer3")
0x1361: Push((int) 0)
0x1362: Push((int) 508644)
0x1363: PushEmpty(float)
0x1364: Call2 0x12c2

0x1365: Pop(0)
0x1366: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1367: Pop(5)
0x1368: PushEmpty()
0x1369: Call2 0x15a7

0x136a: Pop(0)
0x136b: Return(); Pop(2)

0x136c: Stack[-1] = 0
0x136d: PushEmpty()
0x136e: Push("k2q04")
0x136f: Push((int) 9)
0x1370: @ SetVariable(Stack[-2], Stack[-1])
0x1371: Pop(2)
0x1372: PushEmpty()
0x1373: Call2 0x159a

0x1374: Pop(0)
0x1375: Return(); Pop(0)

0x1376: PushEmpty()
0x1377: Push("alpha_pills 5 is given")
0x1378: @ Trace(Stack[-1])
0x1379: Pop(1)
0x137a: PushEmpty(object, string, int)
0x137b: Stack[-3] = Stack[-5]
0x137c: Stack[-2] = "alpha_pills"
0x137d: Stack[-1] = (int) 5
0x137e: Call2 0x1288

0x137f: Pop(3)
0x1380: Return(); Pop(0)

0x1381: PushEmpty()
0x1382: Push("beta_pills 5 is given")
0x1383: @ Trace(Stack[-1])
0x1384: Pop(1)
0x1385: PushEmpty(object, string, int)
0x1386: Stack[-3] = Stack[-5]
0x1387: Stack[-2] = "beta_pills"
0x1388: Stack[-1] = (int) 5
0x1389: Call2 0x1288

0x138a: Pop(3)
0x138b: Return(); Pop(0)

0x138c: PushEmpty(object, object)
0x138d: Push("k3q01")
0x138e: Push((int) 2)
0x138f: @ SetVariable(Stack[-2], Stack[-1])
0x1390: Pop(2)
0x1391: PushEmpty(object)
0x1392: Call2 0x161e

0x1393: Stack[-2] = Stack[-1]
0x1394: Pop(1)
0x1395: Push("k3q01AnnaGotoMladVlad")
0x1396: Push("pt_map_mladvlad")
0x1397: Push((int) 1)
0x1398: Push((int) 525454)
0x1399: PushEmpty(float)
0x139a: Call2 0x12c2

0x139b: Pop(0)
0x139c: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x139d: Pop(5)
0x139e: Push("k3q01AnnaGotoKapella")
0x139f: Push("pt_map_kapella")
0x13a0: Push((int) 1)
0x13a1: Push((int) 525455)
0x13a2: PushEmpty(float)
0x13a3: Call2 0x12c2

0x13a4: Pop(0)
0x13a5: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x13a6: Pop(5)
0x13a7: PushEmpty()
0x13a8: Call2 0x15c1

0x13a9: Pop(0)
0x13aa: Return(); Pop(2)

0x13ab: Stack[-1] = 0
0x13ac: PushEmpty()
0x13ad: Push("k3q01")
0x13ae: Push((int) 3)
0x13af: @ SetVariable(Stack[-2], Stack[-1])
0x13b0: Pop(2)
0x13b1: PushEmpty()
0x13b2: Call2 0x15b4

0x13b3: Pop(0)
0x13b4: Return(); Pop(0)

0x13b5: PushEmpty()
0x13b6: Push("ook3Anna1")
0x13b7: Push((int) 1)
0x13b8: @ SetVariable(Stack[-2], Stack[-1])
0x13b9: Pop(2)
0x13ba: Return(); Pop(0)

0x13bb: PushEmpty(object, object)
0x13bc: Push("k3q03")
0x13bd: Push((int) 1)
0x13be: @ SetVariable(Stack[-2], Stack[-1])
0x13bf: Pop(2)
0x13c0: PushEmpty(object)
0x13c1: Call2 0x161e

0x13c2: Stack[-2] = Stack[-1]
0x13c3: Pop(1)
0x13c4: Push("k3q03AnnaGotoEva")
0x13c5: Push("pt_map_eva")
0x13c6: Push((int) 0)
0x13c7: Push((int) 525615)
0x13c8: PushEmpty(float)
0x13c9: Call2 0x12c2

0x13ca: Pop(0)
0x13cb: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x13cc: Pop(5)
0x13cd: PushEmpty()
0x13ce: Call2 0x15ce

0x13cf: Pop(0)
0x13d0: PushEmpty()
0x13d1: Call2 0x15db

0x13d2: Pop(0)
0x13d3: Return(); Pop(2)

0x13d4: Stack[-1] = 0
0x13d5: PushEmpty()
0x13d6: Push("ook6Anna1")
0x13d7: Push((int) 1)
0x13d8: @ SetVariable(Stack[-2], Stack[-1])
0x13d9: Pop(2)
0x13da: Return(); Pop(0)

0x13db: PushEmpty()
0x13dc: PushEmpty()
0x13dd: Call2 0x15e8

0x13de: Pop(0)
0x13df: Return(); Pop(0)

0x13e0: PushEmpty(int, int)
0x13e1: Push("k11q01SoulCount")
0x13e2: @ GetVariable(Stack[-1], Stack[-2])
0x13e3: Pop(1)
0x13e4: Push((int) 1)
0x13e5: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x13e6: Push("k11q01SoulCount")
0x13e7: @ SetVariable(Stack[-1], Stack[-2])
0x13e8: Pop(1)
0x13e9: Push((int) 2)
0x13ea: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x13eb: IF (Stack[-1] == 0) GOTO 0x13f0; Pop(1)

0x13ec: PushEmpty()
0x13ed: Call2 0x1566

0x13ee: Pop(0)
0x13ef: GOTO 0x1412

0x13f0: Push((int) 3)
0x13f1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x13f2: IF (Stack[-1] == 0) GOTO 0x13f7; Pop(1)

0x13f3: PushEmpty()
0x13f4: Call2 0x1559

0x13f5: Pop(0)
0x13f6: GOTO 0x1412

0x13f7: Push((int) 4)
0x13f8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x13f9: IF (Stack[-1] == 0) GOTO 0x13fe; Pop(1)

0x13fa: PushEmpty()
0x13fb: Call2 0x154c

0x13fc: Pop(0)
0x13fd: GOTO 0x1412

0x13fe: Push((int) 5)
0x13ff: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1400: IF (Stack[-1] == 0) GOTO 0x1405; Pop(1)

0x1401: PushEmpty()
0x1402: Call2 0x153f

0x1403: Pop(0)
0x1404: GOTO 0x1412

0x1405: Push((int) 6)
0x1406: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1407: IF (Stack[-1] == 0) GOTO 0x140c; Pop(1)

0x1408: PushEmpty()
0x1409: Call2 0x1532

0x140a: Pop(0)
0x140b: GOTO 0x1412

0x140c: Push((int) 7)
0x140d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x140e: IF (Stack[-1] == 0) GOTO 0x1412; Pop(1)

0x140f: PushEmpty()
0x1410: Call2 0x1525

0x1411: Pop(0)
0x1412: Return(); Pop(2)

0x1413: PushEmpty()
0x1414: Push("ook11Anna1")
0x1415: Push((int) 1)
0x1416: @ SetVariable(Stack[-2], Stack[-1])
0x1417: Pop(2)
0x1418: Return(); Pop(0)

0x1419: PushEmpty()
0x141a: Push("playsound")
0x141b: Push("givemoney")
0x141c: @ TriggerWorld(Stack[-2], Stack[-1])
0x141d: Pop(2)
0x141e: Return(); Pop(0)

0x141f: PushEmpty()
0x1420: Push("playsound")
0x1421: Push("giveitem")
0x1422: @ TriggerWorld(Stack[-2], Stack[-1])
0x1423: Pop(2)
0x1424: Return(); Pop(0)

0x1425: PushEmpty()
0x1426: Push("money 1500 is given")
0x1427: @ Trace(Stack[-1])
0x1428: Pop(1)
0x1429: PushEmpty(object, int)
0x142a: Stack[-2] = Stack[-4]
0x142b: Stack[-1] = (int) 1500
0x142c: Call2 0x1262

0x142d: Pop(2)
0x142e: Return(); Pop(0)

0x142f: PushEmpty()
0x1430: Push("playsound")
0x1431: Push("mapmark")
0x1432: @ TriggerWorld(Stack[-2], Stack[-1])
0x1433: Pop(2)
0x1434: Return(); Pop(0)

0x1435: PushEmpty()
0x1436: PushEmpty(int, string)
0x1437: Stack[-1] = "k1q01"
0x1438: Call2 0x1251

0x1439: Pop(1)
0x143a: Push((int) 4)
0x143b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x143c: IF (Stack[-1] == 0) GOTO 0x143f; Pop(1)

0x143d: Stack[-2] = (bool) 1
0x143e: Return(); Pop(0)

0x143f: Stack[-2] = (bool) 0
0x1440: Return(); Pop(0)

0x1441: PushEmpty()
0x1442: PushEmpty(int, string)
0x1443: Stack[-1] = "ook1Anna1"
0x1444: Call2 0x1251

0x1445: Pop(1)
0x1446: Push((int) 0)
0x1447: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1448: IF (Stack[-1] == 0) GOTO 0x144b; Pop(1)

0x1449: Stack[-2] = (bool) 1
0x144a: Return(); Pop(0)

0x144b: Stack[-2] = (bool) 0
0x144c: Return(); Pop(0)

0x144d: PushEmpty()
0x144e: PushEmpty(int, string)
0x144f: Stack[-1] = "k1q01Healed"
0x1450: Call2 0x1251

0x1451: Pop(1)
0x1452: Push((int) 0)
0x1453: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x1454: IF (Stack[-1] == 0) GOTO 0x1457; Pop(1)

0x1455: Stack[-2] = (bool) 1
0x1456: Return(); Pop(0)

0x1457: Stack[-2] = (bool) 0
0x1458: Return(); Pop(0)

0x1459: PushEmpty()
0x145a: PushEmpty(int, string)
0x145b: Stack[-1] = "ook1Anna2"
0x145c: Call2 0x1251

0x145d: Pop(1)
0x145e: Push((int) 0)
0x145f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1460: IF (Stack[-1] == 0) GOTO 0x1463; Pop(1)

0x1461: Stack[-2] = (bool) 1
0x1462: Return(); Pop(0)

0x1463: Stack[-2] = (bool) 0
0x1464: Return(); Pop(0)

0x1465: PushEmpty()
0x1466: PushEmpty(int, string)
0x1467: Stack[-1] = "ook1Anna3"
0x1468: Call2 0x1251

0x1469: Pop(1)
0x146a: Push((int) 0)
0x146b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x146c: IF (Stack[-1] == 0) GOTO 0x146f; Pop(1)

0x146d: Stack[-2] = (bool) 1
0x146e: Return(); Pop(0)

0x146f: Stack[-2] = (bool) 0
0x1470: Return(); Pop(0)

0x1471: PushEmpty()
0x1472: PushEmpty(int, string)
0x1473: Stack[-1] = "k1q03"
0x1474: Call2 0x1251

0x1475: Pop(1)
0x1476: Push((int) 0)
0x1477: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1478: IF (Stack[-1] == 0) GOTO 0x147b; Pop(1)

0x1479: Stack[-2] = (bool) 1
0x147a: Return(); Pop(0)

0x147b: Stack[-2] = (bool) 0
0x147c: Return(); Pop(0)

0x147d: PushEmpty()
0x147e: PushEmpty(int, string)
0x147f: Stack[-1] = "k1q03"
0x1480: Call2 0x1251

0x1481: Pop(1)
0x1482: Push((int) 2)
0x1483: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1484: IF (Stack[-1] == 0) GOTO 0x1487; Pop(1)

0x1485: Stack[-2] = (bool) 1
0x1486: Return(); Pop(0)

0x1487: Stack[-2] = (bool) 0
0x1488: Return(); Pop(0)

0x1489: PushEmpty()
0x148a: PushEmpty(int, string)
0x148b: Stack[-1] = "k2q04"
0x148c: Call2 0x1251

0x148d: Pop(1)
0x148e: Push((int) 1)
0x148f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1490: IF (Stack[-1] == 0) GOTO 0x1493; Pop(1)

0x1491: Stack[-2] = (bool) 1
0x1492: Return(); Pop(0)

0x1493: Stack[-2] = (bool) 0
0x1494: Return(); Pop(0)

0x1495: PushEmpty()
0x1496: PushEmpty(int, string)
0x1497: Stack[-1] = "k2q04"
0x1498: Call2 0x1251

0x1499: Pop(1)
0x149a: Push((int) 3)
0x149b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x149c: IF (Stack[-1] == 0) GOTO 0x149f; Pop(1)

0x149d: Stack[-2] = (bool) 1
0x149e: Return(); Pop(0)

0x149f: Stack[-2] = (bool) 0
0x14a0: Return(); Pop(0)

0x14a1: PushEmpty()
0x14a2: PushEmpty(int, string)
0x14a3: Stack[-1] = "k3q01"
0x14a4: Call2 0x1251

0x14a5: Pop(1)
0x14a6: Push((int) 1)
0x14a7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14a8: IF (Stack[-1] == 0) GOTO 0x14ab; Pop(1)

0x14a9: Stack[-2] = (bool) 1
0x14aa: Return(); Pop(0)

0x14ab: Stack[-2] = (bool) 0
0x14ac: Return(); Pop(0)

0x14ad: PushEmpty()
0x14ae: PushEmpty(int, string)
0x14af: Stack[-1] = "k3q01"
0x14b0: Call2 0x1251

0x14b1: Pop(1)
0x14b2: Push((int) 2)
0x14b3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14b4: IF (Stack[-1] == 0) GOTO 0x14b7; Pop(1)

0x14b5: Stack[-2] = (bool) 1
0x14b6: Return(); Pop(0)

0x14b7: Stack[-2] = (bool) 0
0x14b8: Return(); Pop(0)

0x14b9: PushEmpty()
0x14ba: PushEmpty(int, string)
0x14bb: Stack[-1] = "k3q01KapellaAboutHan"
0x14bc: Call2 0x1251

0x14bd: Pop(1)
0x14be: Push((int) 0)
0x14bf: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x14c0: IF (Stack[-1] == 0) GOTO 0x14c3; Pop(1)

0x14c1: Stack[-2] = (bool) 1
0x14c2: Return(); Pop(0)

0x14c3: Stack[-2] = (bool) 0
0x14c4: Return(); Pop(0)

0x14c5: PushEmpty()
0x14c6: PushEmpty(int, string)
0x14c7: Stack[-1] = "k3q01"
0x14c8: Call2 0x1251

0x14c9: Pop(1)
0x14ca: Push((int) 3)
0x14cb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14cc: IF (Stack[-1] == 0) GOTO 0x14cf; Pop(1)

0x14cd: Stack[-2] = (bool) 1
0x14ce: Return(); Pop(0)

0x14cf: Stack[-2] = (bool) 0
0x14d0: Return(); Pop(0)

0x14d1: PushEmpty()
0x14d2: PushEmpty(int, string)
0x14d3: Stack[-1] = "ook3Anna1"
0x14d4: Call2 0x1251

0x14d5: Pop(1)
0x14d6: Push((int) 0)
0x14d7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14d8: IF (Stack[-1] == 0) GOTO 0x14db; Pop(1)

0x14d9: Stack[-2] = (bool) 1
0x14da: Return(); Pop(0)

0x14db: Stack[-2] = (bool) 0
0x14dc: Return(); Pop(0)

0x14dd: PushEmpty()
0x14de: PushEmpty(int, string)
0x14df: Stack[-1] = "k3q03"
0x14e0: Call2 0x1251

0x14e1: Pop(1)
0x14e2: Push((int) 0)
0x14e3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14e4: IF (Stack[-1] == 0) GOTO 0x14e7; Pop(1)

0x14e5: Stack[-2] = (bool) 1
0x14e6: Return(); Pop(0)

0x14e7: Stack[-2] = (bool) 0
0x14e8: Return(); Pop(0)

0x14e9: PushEmpty()
0x14ea: PushEmpty(int, string)
0x14eb: Stack[-1] = "k6q01"
0x14ec: Call2 0x1251

0x14ed: Pop(1)
0x14ee: Push((int) 2)
0x14ef: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14f0: IF (Stack[-1] == 0) GOTO 0x14f3; Pop(1)

0x14f1: Stack[-2] = (bool) 1
0x14f2: Return(); Pop(0)

0x14f3: Stack[-2] = (bool) 0
0x14f4: Return(); Pop(0)

0x14f5: PushEmpty()
0x14f6: PushEmpty(int, string)
0x14f7: Stack[-1] = "k6q01DankoPos"
0x14f8: Call2 0x1251

0x14f9: Pop(1)
0x14fa: Push((int) 1)
0x14fb: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x14fc: IF (Stack[-1] == 0) GOTO 0x14ff; Pop(1)

0x14fd: Stack[-2] = (bool) 1
0x14fe: Return(); Pop(0)

0x14ff: Stack[-2] = (bool) 0
0x1500: Return(); Pop(0)

0x1501: PushEmpty()
0x1502: PushEmpty(int, string)
0x1503: Stack[-1] = "ook6Anna1"
0x1504: Call2 0x1251

0x1505: Pop(1)
0x1506: Push((int) 0)
0x1507: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1508: IF (Stack[-1] == 0) GOTO 0x150b; Pop(1)

0x1509: Stack[-2] = (bool) 1
0x150a: Return(); Pop(0)

0x150b: Stack[-2] = (bool) 0
0x150c: Return(); Pop(0)

0x150d: PushEmpty()
0x150e: PushEmpty(int, string)
0x150f: Stack[-1] = "k11q01"
0x1510: Call2 0x1251

0x1511: Pop(1)
0x1512: Push((int) 9)
0x1513: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1514: IF (Stack[-1] == 0) GOTO 0x1517; Pop(1)

0x1515: Stack[-2] = (bool) 1
0x1516: Return(); Pop(0)

0x1517: Stack[-2] = (bool) 0
0x1518: Return(); Pop(0)

0x1519: PushEmpty()
0x151a: PushEmpty(int, string)
0x151b: Stack[-1] = "ook11Anna1"
0x151c: Call2 0x1251

0x151d: Pop(1)
0x151e: Push((int) 0)
0x151f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1520: IF (Stack[-1] == 0) GOTO 0x1523; Pop(1)

0x1521: Stack[-2] = (bool) 1
0x1522: Return(); Pop(0)

0x1523: Stack[-2] = (bool) 0
0x1524: Return(); Pop(0)

0x1525: PushEmpty(object, object)
0x1526: Push((int) 498)
0x1527: Push((int) 1)
0x1528: Push((int) 528065)
0x1529: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x152a: Pop(3)
0x152b: PushEmpty(bool, object, int)
0x152c: Stack[-2] = Stack[-4]
0x152d: Stack[-1] = (int) 480
0x152e: Call2 0x1602

0x152f: Pop(3)
0x1530: Return(); Pop(2)

0x1531: Stack[-1] = 0
0x1532: PushEmpty(object, object)
0x1533: Push((int) 497)
0x1534: Push((int) 1)
0x1535: Push((int) 528064)
0x1536: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1537: Pop(3)
0x1538: PushEmpty(bool, object, int)
0x1539: Stack[-2] = Stack[-4]
0x153a: Stack[-1] = (int) 480
0x153b: Call2 0x1602

0x153c: Pop(3)
0x153d: Return(); Pop(2)

0x153e: Stack[-1] = 0
0x153f: PushEmpty(object, object)
0x1540: Push((int) 496)
0x1541: Push((int) 1)
0x1542: Push((int) 528063)
0x1543: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1544: Pop(3)
0x1545: PushEmpty(bool, object, int)
0x1546: Stack[-2] = Stack[-4]
0x1547: Stack[-1] = (int) 480
0x1548: Call2 0x1602

0x1549: Pop(3)
0x154a: Return(); Pop(2)

0x154b: Stack[-1] = 0
0x154c: PushEmpty(object, object)
0x154d: Push((int) 495)
0x154e: Push((int) 1)
0x154f: Push((int) 528062)
0x1550: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1551: Pop(3)
0x1552: PushEmpty(bool, object, int)
0x1553: Stack[-2] = Stack[-4]
0x1554: Stack[-1] = (int) 480
0x1555: Call2 0x1602

0x1556: Pop(3)
0x1557: Return(); Pop(2)

0x1558: Stack[-1] = 0
0x1559: PushEmpty(object, object)
0x155a: Push((int) 494)
0x155b: Push((int) 1)
0x155c: Push((int) 528061)
0x155d: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x155e: Pop(3)
0x155f: PushEmpty(bool, object, int)
0x1560: Stack[-2] = Stack[-4]
0x1561: Stack[-1] = (int) 480
0x1562: Call2 0x1602

0x1563: Pop(3)
0x1564: Return(); Pop(2)

0x1565: Stack[-1] = 0
0x1566: PushEmpty(object, object)
0x1567: Push((int) 493)
0x1568: Push((int) 1)
0x1569: Push((int) 528060)
0x156a: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x156b: Pop(3)
0x156c: PushEmpty(bool, object, int)
0x156d: Stack[-2] = Stack[-4]
0x156e: Stack[-1] = (int) 480
0x156f: Call2 0x1602

0x1570: Pop(3)
0x1571: Return(); Pop(2)

0x1572: Stack[-1] = 0
0x1573: PushEmpty(object, object)
0x1574: Push((int) 333)
0x1575: Push((int) 2)
0x1576: Push((int) 524800)
0x1577: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1578: Pop(3)
0x1579: PushEmpty(bool, object, int)
0x157a: Stack[-2] = Stack[-4]
0x157b: Stack[-1] = (int) -1
0x157c: Call2 0x1602

0x157d: Pop(3)
0x157e: Return(); Pop(2)

0x157f: Stack[-1] = 0
0x1580: PushEmpty(object, object)
0x1581: Push((int) 334)
0x1582: Push((int) 2)
0x1583: Push((int) 524801)
0x1584: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1585: Pop(3)
0x1586: PushEmpty(bool, object, int)
0x1587: Stack[-2] = Stack[-4]
0x1588: Stack[-1] = (int) 333
0x1589: Call2 0x1602

0x158a: Pop(3)
0x158b: Return(); Pop(2)

0x158c: Stack[-1] = 0
0x158d: PushEmpty(object, object)
0x158e: Push((int) 336)
0x158f: Push((int) 2)
0x1590: Push((int) 524803)
0x1591: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1592: Pop(3)
0x1593: PushEmpty(bool, object, int)
0x1594: Stack[-2] = Stack[-4]
0x1595: Stack[-1] = (int) 333
0x1596: Call2 0x1602

0x1597: Pop(3)
0x1598: Return(); Pop(2)

0x1599: Stack[-1] = 0
0x159a: PushEmpty(object, object)
0x159b: Push((int) 510)
0x159c: Push((int) 2)
0x159d: Push((int) 529709)
0x159e: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x159f: Pop(3)
0x15a0: PushEmpty(bool, object, int)
0x15a1: Stack[-2] = Stack[-4]
0x15a2: Stack[-1] = (int) 507
0x15a3: Call2 0x1602

0x15a4: Pop(3)
0x15a5: Return(); Pop(2)

0x15a6: Stack[-1] = 0
0x15a7: PushEmpty(object, object)
0x15a8: Push((int) 509)
0x15a9: Push((int) 2)
0x15aa: Push((int) 529708)
0x15ab: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x15ac: Pop(3)
0x15ad: PushEmpty(bool, object, int)
0x15ae: Stack[-2] = Stack[-4]
0x15af: Stack[-1] = (int) 507
0x15b0: Call2 0x1602

0x15b1: Pop(3)
0x15b2: Return(); Pop(2)

0x15b3: Stack[-1] = 0
0x15b4: PushEmpty(object, object)
0x15b5: Push((int) 341)
0x15b6: Push((int) 1)
0x15b7: Push((int) 525450)
0x15b8: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x15b9: Pop(3)
0x15ba: PushEmpty(bool, object, int)
0x15bb: Stack[-2] = Stack[-4]
0x15bc: Stack[-1] = (int) 337
0x15bd: Call2 0x1602

0x15be: Pop(3)
0x15bf: Return(); Pop(2)

0x15c0: Stack[-1] = 0
0x15c1: PushEmpty(object, object)
0x15c2: Push((int) 339)
0x15c3: Push((int) 1)
0x15c4: Push((int) 525448)
0x15c5: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x15c6: Pop(3)
0x15c7: PushEmpty(bool, object, int)
0x15c8: Stack[-2] = Stack[-4]
0x15c9: Stack[-1] = (int) 337
0x15ca: Call2 0x1602

0x15cb: Pop(3)
0x15cc: Return(); Pop(2)

0x15cd: Stack[-1] = 0
0x15ce: PushEmpty(object, object)
0x15cf: Push((int) 350)
0x15d0: Push((int) 2)
0x15d1: Push((int) 525616)
0x15d2: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x15d3: Pop(3)
0x15d4: PushEmpty(bool, object, int)
0x15d5: Stack[-2] = Stack[-4]
0x15d6: Stack[-1] = (int) -1
0x15d7: Call2 0x1602

0x15d8: Pop(3)
0x15d9: Return(); Pop(2)

0x15da: Stack[-1] = 0
0x15db: PushEmpty(object, object)
0x15dc: Push((int) 351)
0x15dd: Push((int) 2)
0x15de: Push((int) 525617)
0x15df: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x15e0: Pop(3)
0x15e1: PushEmpty(bool, object, int)
0x15e2: Stack[-2] = Stack[-4]
0x15e3: Stack[-1] = (int) 350
0x15e4: Call2 0x1602

0x15e5: Pop(3)
0x15e6: Return(); Pop(2)

0x15e7: Stack[-1] = 0
0x15e8: PushEmpty(object, object)
0x15e9: Push((int) 412)
0x15ea: Push((int) 1)
0x15eb: Push((int) 526113)
0x15ec: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x15ed: Pop(3)
0x15ee: PushEmpty(bool, object, int)
0x15ef: Stack[-2] = Stack[-4]
0x15f0: Stack[-1] = (int) 408
0x15f1: Call2 0x1602

0x15f2: Pop(3)
0x15f3: Return(); Pop(2)

0x15f4: Stack[-1] = 0
0x15f5: PushEmpty(object, object)
0x15f6: @ GetDiaryRoot(Stack[-1])
0x15f7: Pop(0)
0x15f8: Pop(0); Push((bool) Stack[-1] == 0)
0x15f9: IF (Stack[-1] == 0) GOTO 0x15ff; Pop(1)

0x15fa: Push("Can't retrieve diary root")
0x15fb: @ Trace(Stack[-1])
0x15fc: Pop(1)
0x15fd: Stack[-3] = (bool) 0
0x15fe: Return(); Pop(2)

0x15ff: Stack[-3] = Stack[-1]
0x1600: Return(); Pop(2)

0x1601: Stack[-1] = 0
0x1602: PushEmpty(object, object, int, object, object, int)
0x1603: PushEmpty(object)
0x1604: Call2 0x15f5

0x1605: Stack[-4] = Stack[-1]
0x1606: Pop(1)
0x1607: @@ Find(Stack[-7], Stack[-2])
0x1608: Pop(0)
0x1609: Pop(0); Push((bool) Stack[-2] == 0)
0x160a: IF (Stack[-1] == 0) GOTO 0x1611; Pop(1)

0x160b: Push("Can't find diary parent with id: ")
0x160c: Pop(1); Push(Stack[-1] + Stack[-8]);
0x160d: @ Trace(Stack[-1])
0x160e: Pop(1)
0x160f: Stack[-9] = (bool) 0
0x1610: Return(); Pop(6)

0x1611: @@ AddChild(Stack[-8])
0x1612: Pop(0)
0x1613: Push((int) 7)
0x1614: @ SendWorldWndMessage(Stack[-1])
0x1615: Pop(1)
0x1616: @@ GetCategory(Stack[-1])
0x1617: Pop(0)
0x1618: @ SetDiarySection(Stack[-1])
0x1619: Pop(0)
0x161a: Stack[-9] = (bool) 0
0x161b: Return(); Pop(6)

0x161c: Stack[-2] = 0
0x161d: Stack[-3] = 0
0x161e: PushEmpty(object, object, object, object)
0x161f: @ GetMainOutdoorScene(Stack[-2])
0x1620: Pop(0)
0x1621: Pop(0); Push((bool) Stack[-2] == 0)
0x1622: IF (Stack[-1] == 0) GOTO 0x1629; Pop(1)

0x1623: Push("Can't find main outdoor scene")
0x1624: @ Trace(Stack[-1])
0x1625: Pop(1)
0x1626: Stack[-1] = 0
0x1627: Stack[-5] = Stack[-1]
0x1628: Return(); Pop(4)

0x1629: @@ GetMap(Stack[-1])
0x162a: Pop(0)
0x162b: Stack[-5] = Stack[-1]
0x162c: Return(); Pop(4)

0x162d: Stack[-1] = 0
0x162e: Stack[-2] = 0
0x162f: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x1630: @ GetMainOutdoorScene(Stack[-2])
0x1631: Pop(0)
0x1632: Pop(0); Push((bool) Stack[-2] == 0)
0x1633: IF (Stack[-1] == 0) GOTO 0x1638; Pop(1)

0x1634: Push("Can't find main outdoor scene")
0x1635: @ Trace(Stack[-1])
0x1636: Pop(1)
0x1637: Return(); Pop(8)

0x1638: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x1639: Pop(0)
0x163a: Pop(0); Push((bool) Stack[-1] == 0)
0x163b: IF (Stack[-1] == 0) GOTO 0x1642; Pop(1)

0x163c: Push("Warning: outdoor scene locator ")
0x163d: Pop(1); Push(Stack[-1] + Stack[-11]);
0x163e: Push(" doesnt exist")
0x163f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1640: @ Trace(Stack[-1])
0x1641: Pop(1)
0x1642: @@ GetMap(Stack[-11])
0x1643: Pop(0)
0x1644: Pop(0); Push((bool) Stack[-11] == 0)
0x1645: IF (Stack[-1] == 0) GOTO 0x164a; Pop(1)

0x1646: Push("Can't find map")
0x1647: @ Trace(Stack[-1])
0x1648: Pop(1)
0x1649: Return(); Pop(8)

0x164a: Push(CvectorIndex(Stack[-4], 0))
0x164b: Push(CvectorIndex(Stack[-5], 2))
0x164c: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x164d: Pop(2)
0x164e: Return(); Pop(8)

0x164f: Stack[-2] = 0
0x1650: PushEmpty(int, int)
0x1651: Push("branch")
0x1652: @ GetVariable(Stack[-1], Stack[-2])
0x1653: Pop(1)
0x1654: Push((int) 0)
0x1655: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1656: IF (Stack[-1] == 0) GOTO 0x165a; Pop(1)

0x1657: Stack[-3] = (int) 1
0x1658: Return(); Pop(2)

0x1659: GOTO 0x165f

0x165a: Push((int) 1)
0x165b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x165c: IF (Stack[-1] == 0) GOTO 0x165f; Pop(1)

0x165d: Stack[-3] = (int) 2
0x165e: Return(); Pop(2)

0x165f: Stack[-3] = (int) 3
0x1660: Return(); Pop(2)

0x1661: PushEmpty()
0x1662: Push(GlobalVars[1])
0x1663: Pop(1); Push((bool) Stack[-1] == 0)
0x1664: IF (Stack[-1] == 0) GOTO 0x166e; Pop(1)

0x1665: PushEmpty(int, object)
0x1666: Stack[-1] = Stack[-3]
0x1667: Push(-2, 1); TaskCall(6)
0x1668: Call2 0xa02

0x1669: Pop(-2, 1); TaskReturn
0x166a: Pop(2)
0x166b: Push(GlobalVars[1])
0x166c: Stack[-1] = (bool) 1
0x166d: GlobalVars[1] = Stack[-1]; Pop(1)
0x166e: PushEmpty(bool, int)
0x166f: Stack[-1] = (int) 1
0x1670: Call2 0x12d0

0x1671: Pop(1)
0x1672: IF (Stack[-1] == 0) GOTO 0x167a; Pop(1)

0x1673: PushEmpty(int, object)
0x1674: Stack[-1] = Stack[-3]
0x1675: Push(-2, 1); TaskCall(0)
0x1676: Call2 0x0

0x1677: Pop(-2, 1); TaskReturn
0x1678: Pop(2)
0x1679: Return(); Pop(0)

0x167a: PushEmpty(bool, int)
0x167b: Stack[-1] = (int) 2
0x167c: Call2 0x12d0

0x167d: Pop(1)
0x167e: IF (Stack[-1] == 0) GOTO 0x1686; Pop(1)

0x167f: PushEmpty(int, object)
0x1680: Stack[-1] = Stack[-3]
0x1681: Push(-2, 1); TaskCall(2)
0x1682: Call2 0x3eb

0x1683: Pop(-2, 1); TaskReturn
0x1684: Pop(2)
0x1685: Return(); Pop(0)

0x1686: PushEmpty(bool, int)
0x1687: Stack[-1] = (int) 3
0x1688: Call2 0x12d0

0x1689: Pop(1)
0x168a: IF (Stack[-1] == 0) GOTO 0x1692; Pop(1)

0x168b: PushEmpty(int, object)
0x168c: Stack[-1] = Stack[-3]
0x168d: Push(-2, 1); TaskCall(4)
0x168e: Call2 0x5eb

0x168f: Pop(-2, 1); TaskReturn
0x1690: Pop(2)
0x1691: Return(); Pop(0)

0x1692: PushEmpty(bool, int)
0x1693: Stack[-1] = (int) 6
0x1694: Call2 0x12d0

0x1695: Pop(1)
0x1696: IF (Stack[-1] == 0) GOTO 0x169e; Pop(1)

0x1697: PushEmpty(int, object)
0x1698: Stack[-1] = Stack[-3]
0x1699: Push(-2, 1); TaskCall(8)
0x169a: Call2 0xae4

0x169b: Pop(-2, 1); TaskReturn
0x169c: Pop(2)
0x169d: Return(); Pop(0)

0x169e: PushEmpty(bool, int)
0x169f: Stack[-1] = (int) 11
0x16a0: Call2 0x12d0

0x16a1: Pop(1)
0x16a2: IF (Stack[-1] == 0) GOTO 0x16aa; Pop(1)

0x16a3: PushEmpty(int, object)
0x16a4: Stack[-1] = Stack[-3]
0x16a5: Push(-2, 1); TaskCall(10)
0x16a6: Call2 0xc28

0x16a7: Pop(-2, 1); TaskReturn
0x16a8: Pop(2)
0x16a9: Return(); Pop(0)

0x16aa: PushEmpty(bool, int)
0x16ab: Stack[-1] = (int) 12
0x16ac: Call2 0x12d0

0x16ad: Pop(1)
0x16ae: IF (Stack[-1] == 0) GOTO 0x16b6; Pop(1)

0x16af: PushEmpty(int, object)
0x16b0: Stack[-1] = Stack[-3]
0x16b1: Push(-2, 1); TaskCall(12)
0x16b2: Call2 0xda2

0x16b3: Pop(-2, 1); TaskReturn
0x16b4: Pop(2)
0x16b5: Return(); Pop(0)

0x16b6: PushEmpty(int, object)
0x16b7: Stack[-1] = Stack[-3]
0x16b8: Push(-2, 1); TaskCall(14)
0x16b9: Call2 0xf09

0x16ba: Pop(-2, 1); TaskReturn
0x16bb: Pop(2)
0x16bc: Return(); Pop(0)

