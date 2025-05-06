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
	Neutral
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	Grimacing
	Strange
	Grin
	player
	GetPosition
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	GetProperty
	m
	Can't find lsh animation : 
	add
	GetItemID
	Category
	AddItem
	DropItems
	SetItemName
	ui/NPC_Ospina.png
	ui/NPC_Ospina_b.png
	quest_d1_03
	eva_finish
	ood1Ospina1
	ood1Ospina2
	unlock_butcher
	ood3Ospina1
	ood3Ospina2
	ood3Ospina3
	d3q01
	d3q01OspinaGotoBigVlad
	pt_map_bigvlad
	AddMark
	ood3Ospina4
	quest_d3_01
	place_butchers
	ShowMap
	pt_map_mladvlad
	pt_map_lara
	d4q01_subquest
	d4q01OspinaGotoLara
	ood4Ospina1
	ood4Ospina2
	ood6Ospina1
	ood6Ospina2
	d8q01MladVladIsBad
	d8q01OspinaGotoMladVlad
	ood8Ospina1
	ood8Ospina2
	ospina blood is given
	d6q01_ospina_blood
	playsound
	giveitem
	d6q01OspinaVolonteer
	quest_d6_01
	completed
	d1q03
	d6q01
	d8q01
	microscope_d6q01_ospina_blood
	d1q01
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
	GetInvItemProperty (3 args)
	CreateInvItem (1 args)
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	TriggerWorld (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x1103
RunTask = 16

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xd6 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x3a9 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x6e1 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x90a Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xbd6 Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xd32 Vars = (int, int)
	GTASK_12 Vars = (object) Params = 2
	GTASK_13 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xfdb Vars = (int, int)
	GTASK_14 Vars = (object) Params = 2
	GTASK_15 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x10d9 Vars = (int, int)
	GTASK_16 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x114f Vars = (int)
		EVENT_6 Op = 0x1175 Vars = ()
		EVENT_5 Op = 0x1184 Vars = ()
		EVENT_45 Op = 0x1191 Vars = (bool)
		EVENT_0 Op = 0x119d Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x1226

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x13b7

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x13b5

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x13b9

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x13bb

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x16a5

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
0x31: Call2 0x133c

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x127d

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
0x48: Call2 0x126b

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
0x56: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0x57: PushEmpty(string)
0x58: Stack[-1] = "Neutral"
0x59: Call2 0xc0

0x5a: Pop(1)
0x5b: Push((int) 512729)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: PushEmpty(bool)
0x61: Stack[-1] = (bool) 0
0x62: PushEmpty(bool, object)
0x63: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x64: Call2 0x156d

0x65: Pop(1)
0x66: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x67: PushEmpty(bool, object)
0x68: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x69: Call2 0x1561

0x6a: Pop(1)
0x6b: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x6c: Stack[-1] = (bool) 1
0x6d: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x6e: Push((int) 512731)
0x6f: Push((int) 3851)
0x70: Push((int) 13924)
0x71: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x72: Pop(3)
0x73: PushEmpty(bool)
0x74: Stack[-1] = (bool) 0
0x75: PushEmpty(bool)
0x76: Stack[-1] = (bool) 0
0x77: PushEmpty(bool)
0x78: Stack[-1] = (bool) 0
0x79: PushEmpty(bool, object)
0x7a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7b: Call2 0x1579

0x7c: Pop(1)
0x7d: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x7e: PushEmpty(bool, object)
0x7f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x80: Call2 0x15a9

0x81: Pop(1)
0x82: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x83: Stack[-1] = (bool) 1
0x84: IF (Stack[-1] == 0) GOTO 0x8c; Pop(1)

0x85: PushEmpty(bool, object)
0x86: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x87: Call2 0x15b5

0x88: Pop(1)
0x89: Pop(1); Push((bool) Stack[-1] == 0)
0x8a: IF (Stack[-1] == 0) GOTO 0x8c; Pop(1)

0x8b: Stack[-1] = (bool) 1
0x8c: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x8d: PushEmpty(bool, object)
0x8e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8f: Call2 0x15c1

0x90: Pop(1)
0x91: Pop(1); Push((bool) Stack[-1] == 0)
0x92: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x93: Stack[-1] = (bool) 1
0x94: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x95: Push((int) 512730)
0x96: Push((int) 11927)
0x97: Push((int) 13923)
0x98: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x99: Pop(3)
0x9a: Push((int) 512732)
0x9b: Push((int) -1)
0x9c: Push((int) 13926)
0x9d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9e: Pop(3)
0x9f: GOTO 0xa2

0xa0: Return(); Pop(0)

0xa1: GOTO 0x55

0xa2: PushEmpty(bool)
0xa3: Call2 0x13bd

0xa4: Pop(0)
0xa5: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0xa6: @ lshWaitForAnimEnd()
0xa7: Pop(0)
0xa8: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa9: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xaa: GOTO 0xb0

0xab: PushEmpty(string)
0xac: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xad: Call2 0x1307

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
0xc2: Call2 0x13bd

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
0xd2: Call2 0x1317

0xd3: Pop(2)
0xd4: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xd5: Return(); Pop(0)

0xd6: PushEmpty()
0xd7: Push((int) 1)
0xd8: IF (Stack[-1] == 0) GOTO 0x2ba; Pop(1)

0xd9: PushEmpty()
0xda: Call2 0x1335

0xdb: Pop(0)
0xdc: Push((int) 3872)
0xdd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xde: IF (Stack[-1] == 0) GOTO 0xee; Pop(1)

0xdf: PushEmpty(object, object)
0xe0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe2: Call2 0x1474

0xe3: Pop(2)
0xe4: PushEmpty(object, object)
0xe5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe7: Call2 0x14b1

0xe8: Pop(2)
0xe9: PushEmpty(object, object)
0xea: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xeb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xec: Call2 0x14a3

0xed: Pop(2)
0xee: Push((int) 3870)
0xef: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf0: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xf1: PushEmpty(object, object)
0xf2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf4: Call2 0x1474

0xf5: Pop(2)
0xf6: PushEmpty(object, object)
0xf7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf9: Call2 0x14a3

0xfa: Pop(2)
0xfb: PushEmpty(object, object)
0xfc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfe: Call2 0x14b1

0xff: Pop(2)
0x100: Push((int) 3860)
0x101: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x102: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0x103: PushEmpty(object, object)
0x104: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x105: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x106: Call2 0x1474

0x107: Pop(2)
0x108: PushEmpty(object, object)
0x109: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10b: Call2 0x14b1

0x10c: Pop(2)
0x10d: PushEmpty(object, object)
0x10e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x110: Call2 0x14a3

0x111: Pop(2)
0x112: Push((int) 3857)
0x113: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x114: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0x115: PushEmpty(object, object)
0x116: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x117: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x118: Call2 0x1474

0x119: Pop(2)
0x11a: PushEmpty(object, object)
0x11b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11d: Call2 0x14a3

0x11e: Pop(2)
0x11f: PushEmpty(object, object)
0x120: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x121: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x122: Call2 0x14b1

0x123: Pop(2)
0x124: Push((int) 13923)
0x125: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x126: IF (Stack[-1] == 0) GOTO 0x12c; Pop(1)

0x127: PushEmpty(object, object)
0x128: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x129: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x12a: Call2 0x147a

0x12b: Pop(2)
0x12c: Push((int) 11939)
0x12d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x12e: IF (Stack[-1] == 0) GOTO 0x134; Pop(1)

0x12f: PushEmpty(object, object)
0x130: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x131: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x132: Call2 0x14b7

0x133: Pop(2)
0x134: Push((int) 11940)
0x135: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x136: IF (Stack[-1] == 0) GOTO 0x13c; Pop(1)

0x137: PushEmpty(object, object)
0x138: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x139: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x13a: Call2 0x13dc

0x13b: Pop(2)
0x13c: Push((int) 13922)
0x13d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13e: IF (Stack[-1] == 0) GOTO 0x188; Pop(1)

0x13f: PushEmpty(string)
0x140: Stack[-1] = "Neutral"
0x141: Call2 0xc0

0x142: Pop(1)
0x143: Push((int) 512729)
0x144: @@ SetMessage(Stack[-1])
0x145: Pop(1)
0x146: @@ ClearReplies()
0x147: Pop(0)
0x148: PushEmpty(bool)
0x149: Stack[-1] = (bool) 0
0x14a: PushEmpty(bool, object)
0x14b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x14c: Call2 0x156d

0x14d: Pop(1)
0x14e: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0x14f: PushEmpty(bool, object)
0x150: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x151: Call2 0x1561

0x152: Pop(1)
0x153: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0x154: Stack[-1] = (bool) 1
0x155: IF (Stack[-1] == 0) GOTO 0x15b; Pop(1)

0x156: Push((int) 512731)
0x157: Push((int) 3851)
0x158: Push((int) 13924)
0x159: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15a: Pop(3)
0x15b: PushEmpty(bool)
0x15c: Stack[-1] = (bool) 0
0x15d: PushEmpty(bool)
0x15e: Stack[-1] = (bool) 0
0x15f: PushEmpty(bool)
0x160: Stack[-1] = (bool) 0
0x161: PushEmpty(bool, object)
0x162: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x163: Call2 0x1579

0x164: Pop(1)
0x165: IF (Stack[-1] == 0) GOTO 0x16c; Pop(1)

0x166: PushEmpty(bool, object)
0x167: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x168: Call2 0x15a9

0x169: Pop(1)
0x16a: IF (Stack[-1] == 0) GOTO 0x16c; Pop(1)

0x16b: Stack[-1] = (bool) 1
0x16c: IF (Stack[-1] == 0) GOTO 0x174; Pop(1)

0x16d: PushEmpty(bool, object)
0x16e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x16f: Call2 0x15b5

0x170: Pop(1)
0x171: Pop(1); Push((bool) Stack[-1] == 0)
0x172: IF (Stack[-1] == 0) GOTO 0x174; Pop(1)

0x173: Stack[-1] = (bool) 1
0x174: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0x175: PushEmpty(bool, object)
0x176: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x177: Call2 0x15c1

0x178: Pop(1)
0x179: Pop(1); Push((bool) Stack[-1] == 0)
0x17a: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0x17b: Stack[-1] = (bool) 1
0x17c: IF (Stack[-1] == 0) GOTO 0x182; Pop(1)

0x17d: Push((int) 512730)
0x17e: Push((int) 11927)
0x17f: Push((int) 13923)
0x180: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x181: Pop(3)
0x182: Push((int) 512732)
0x183: Push((int) -1)
0x184: Push((int) 13926)
0x185: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x186: Pop(3)
0x187: Return(); Pop(0)

0x188: Push((int) 11927)
0x189: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18a: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0x18b: PushEmpty(string)
0x18c: Stack[-1] = "Neutral"
0x18d: Call2 0xc0

0x18e: Pop(1)
0x18f: Push((int) 510791)
0x190: @@ SetMessage(Stack[-1])
0x191: Pop(1)
0x192: @@ ClearReplies()
0x193: Pop(0)
0x194: Push((int) 510792)
0x195: Push((int) 11929)
0x196: Push((int) 11928)
0x197: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x198: Pop(3)
0x199: Push((int) 510810)
0x19a: Push((int) 11929)
0x19b: Push((int) 11950)
0x19c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19d: Pop(3)
0x19e: Return(); Pop(0)

0x19f: Push((int) 11929)
0x1a0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a1: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1a2: PushEmpty(string)
0x1a3: Stack[-1] = "Neutral"
0x1a4: Call2 0xc0

0x1a5: Pop(1)
0x1a6: Push((int) 510793)
0x1a7: @@ SetMessage(Stack[-1])
0x1a8: Pop(1)
0x1a9: @@ ClearReplies()
0x1aa: Pop(0)
0x1ab: Push((int) 510794)
0x1ac: Push((int) 11931)
0x1ad: Push((int) 11930)
0x1ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1af: Pop(3)
0x1b0: Push((int) 510808)
0x1b1: Push((int) 11931)
0x1b2: Push((int) 11946)
0x1b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b4: Pop(3)
0x1b5: Return(); Pop(0)

0x1b6: Push((int) 11931)
0x1b7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b8: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1b9: PushEmpty(string)
0x1ba: Stack[-1] = "Neutral"
0x1bb: Call2 0xc0

0x1bc: Pop(1)
0x1bd: Push((int) 510795)
0x1be: @@ SetMessage(Stack[-1])
0x1bf: Pop(1)
0x1c0: @@ ClearReplies()
0x1c1: Pop(0)
0x1c2: Push((int) 510796)
0x1c3: Push((int) 11933)
0x1c4: Push((int) 11932)
0x1c5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c6: Pop(3)
0x1c7: Push((int) 510807)
0x1c8: Push((int) 11933)
0x1c9: Push((int) 11945)
0x1ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1cb: Pop(3)
0x1cc: Return(); Pop(0)

0x1cd: Push((int) 11933)
0x1ce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1cf: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1d0: PushEmpty(string)
0x1d1: Stack[-1] = "Neutral"
0x1d2: Call2 0xc0

0x1d3: Pop(1)
0x1d4: Push((int) 510797)
0x1d5: @@ SetMessage(Stack[-1])
0x1d6: Pop(1)
0x1d7: @@ ClearReplies()
0x1d8: Pop(0)
0x1d9: Push((int) 510798)
0x1da: Push((int) 11935)
0x1db: Push((int) 11934)
0x1dc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1dd: Pop(3)
0x1de: Push((int) 510806)
0x1df: Push((int) 11937)
0x1e0: Push((int) 11943)
0x1e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e2: Pop(3)
0x1e3: Return(); Pop(0)

0x1e4: Push((int) 11935)
0x1e5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e6: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1e7: PushEmpty(string)
0x1e8: Stack[-1] = "Neutral"
0x1e9: Call2 0xc0

0x1ea: Pop(1)
0x1eb: Push((int) 510799)
0x1ec: @@ SetMessage(Stack[-1])
0x1ed: Pop(1)
0x1ee: @@ ClearReplies()
0x1ef: Pop(0)
0x1f0: Push((int) 510800)
0x1f1: Push((int) 11937)
0x1f2: Push((int) 11936)
0x1f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f4: Pop(3)
0x1f5: Push((int) 510805)
0x1f6: Push((int) 11937)
0x1f7: Push((int) 11941)
0x1f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f9: Pop(3)
0x1fa: Return(); Pop(0)

0x1fb: Push((int) 11937)
0x1fc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1fd: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x1fe: PushEmpty(string)
0x1ff: Stack[-1] = "Neutral"
0x200: Call2 0xc0

0x201: Pop(1)
0x202: Push((int) 510801)
0x203: @@ SetMessage(Stack[-1])
0x204: Pop(1)
0x205: @@ ClearReplies()
0x206: Pop(0)
0x207: Push((int) 510803)
0x208: Push((int) -1)
0x209: Push((int) 11939)
0x20a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20b: Pop(3)
0x20c: Push((int) 510804)
0x20d: Push((int) -1)
0x20e: Push((int) 11940)
0x20f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x210: Pop(3)
0x211: Return(); Pop(0)

0x212: Push((int) 3851)
0x213: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x214: IF (Stack[-1] == 0) GOTO 0x22e; Pop(1)

0x215: PushEmpty(string)
0x216: Stack[-1] = "Neutral"
0x217: Call2 0xc0

0x218: Pop(1)
0x219: Push((int) 503562)
0x21a: @@ SetMessage(Stack[-1])
0x21b: Pop(1)
0x21c: @@ ClearReplies()
0x21d: Pop(0)
0x21e: Push((int) 503563)
0x21f: Push((int) 3858)
0x220: Push((int) 3852)
0x221: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x222: Pop(3)
0x223: Push((int) 503564)
0x224: Push((int) 3858)
0x225: Push((int) 3853)
0x226: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x227: Pop(3)
0x228: Push((int) 503565)
0x229: Push((int) 3855)
0x22a: Push((int) 3854)
0x22b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22c: Pop(3)
0x22d: Return(); Pop(0)

0x22e: Push((int) 3855)
0x22f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x230: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x231: PushEmpty(string)
0x232: Stack[-1] = "Neutral"
0x233: Call2 0xc0

0x234: Pop(1)
0x235: Push((int) 503566)
0x236: @@ SetMessage(Stack[-1])
0x237: Pop(1)
0x238: @@ ClearReplies()
0x239: Pop(0)
0x23a: Push((int) 503568)
0x23b: Push((int) -1)
0x23c: Push((int) 3857)
0x23d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x23e: Pop(3)
0x23f: Return(); Pop(0)

0x240: Push((int) 3858)
0x241: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x242: IF (Stack[-1] == 0) GOTO 0x25c; Pop(1)

0x243: PushEmpty(string)
0x244: Stack[-1] = "Neutral"
0x245: Call2 0xc0

0x246: Pop(1)
0x247: Push((int) 503569)
0x248: @@ SetMessage(Stack[-1])
0x249: Pop(1)
0x24a: @@ ClearReplies()
0x24b: Pop(0)
0x24c: Push((int) 503571)
0x24d: Push((int) 3862)
0x24e: Push((int) 3861)
0x24f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x250: Pop(3)
0x251: Push((int) 503582)
0x252: Push((int) 3874)
0x253: Push((int) 3873)
0x254: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x255: Pop(3)
0x256: Push((int) 503570)
0x257: Push((int) -1)
0x258: Push((int) 3860)
0x259: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x25a: Pop(3)
0x25b: Return(); Pop(0)

0x25c: Push((int) 3874)
0x25d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x25e: IF (Stack[-1] == 0) GOTO 0x26e; Pop(1)

0x25f: PushEmpty(string)
0x260: Stack[-1] = "Neutral"
0x261: Call2 0xc0

0x262: Pop(1)
0x263: Push((int) 503583)
0x264: @@ SetMessage(Stack[-1])
0x265: Pop(1)
0x266: @@ ClearReplies()
0x267: Pop(0)
0x268: Push((int) 503584)
0x269: Push((int) 3867)
0x26a: Push((int) 3875)
0x26b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x26c: Pop(3)
0x26d: Return(); Pop(0)

0x26e: Push((int) 3862)
0x26f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x270: IF (Stack[-1] == 0) GOTO 0x285; Pop(1)

0x271: PushEmpty(string)
0x272: Stack[-1] = "Neutral"
0x273: Call2 0xc0

0x274: Pop(1)
0x275: Push((int) 503572)
0x276: @@ SetMessage(Stack[-1])
0x277: Pop(1)
0x278: @@ ClearReplies()
0x279: Pop(0)
0x27a: Push((int) 503573)
0x27b: Push((int) 3864)
0x27c: Push((int) 3863)
0x27d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x27e: Pop(3)
0x27f: Push((int) 503576)
0x280: Push((int) 3867)
0x281: Push((int) 3866)
0x282: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x283: Pop(3)
0x284: Return(); Pop(0)

0x285: Push((int) 3864)
0x286: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x287: IF (Stack[-1] == 0) GOTO 0x29c; Pop(1)

0x288: PushEmpty(string)
0x289: Stack[-1] = "Neutral"
0x28a: Call2 0xc0

0x28b: Pop(1)
0x28c: Push((int) 503574)
0x28d: @@ SetMessage(Stack[-1])
0x28e: Pop(1)
0x28f: @@ ClearReplies()
0x290: Pop(0)
0x291: Push((int) 503575)
0x292: Push((int) 3867)
0x293: Push((int) 3865)
0x294: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x295: Pop(3)
0x296: Push((int) 503579)
0x297: Push((int) -1)
0x298: Push((int) 3870)
0x299: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x29a: Pop(3)
0x29b: Return(); Pop(0)

0x29c: Push((int) 3867)
0x29d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x29e: IF (Stack[-1] == 0) GOTO 0x2ae; Pop(1)

0x29f: PushEmpty(string)
0x2a0: Stack[-1] = "Neutral"
0x2a1: Call2 0xc0

0x2a2: Pop(1)
0x2a3: Push((int) 503577)
0x2a4: @@ SetMessage(Stack[-1])
0x2a5: Pop(1)
0x2a6: @@ ClearReplies()
0x2a7: Pop(0)
0x2a8: Push((int) 503581)
0x2a9: Push((int) -1)
0x2aa: Push((int) 3872)
0x2ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ac: Pop(3)
0x2ad: Return(); Pop(0)

0x2ae: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2af: PushEmpty(bool)
0x2b0: Call2 0x13bd

0x2b1: Pop(0)
0x2b2: IF (Stack[-1] == 0) GOTO 0x2b6; Pop(1)

0x2b3: @ lshStopAnimation()
0x2b4: Pop(0)
0x2b5: GOTO 0x2b8

0x2b6: @ StopAnimation()
0x2b7: Pop(0)
0x2b8: Return(); Pop(0)

0x2b9: GOTO 0xd7

0x2ba: Return(); Pop(0)

0x2bb: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x2bc: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2bd: PushEmpty(bool, object, float)
0x2be: Stack[-2] = Stack[-12]
0x2bf: Stack[-1] = (float) 70.0
0x2c0: Call2 0x1226

0x2c1: Pop(2)
0x2c2: Pop(1); Push((bool) Stack[-1] == 0)
0x2c3: IF (Stack[-1] == 0) GOTO 0x2c6; Pop(1)

0x2c4: Stack[-10] = (int) -2
0x2c5: Return(); Pop(8)

0x2c6: @ CreateDialog(Stack[-4])
0x2c7: Pop(0)
0x2c8: PushEmpty(int)
0x2c9: Call2 0x13b7

0x2ca: Pop(0)
0x2cb: @@ SetNPCName(Stack[-1])
0x2cc: Pop(1)
0x2cd: PushEmpty(int)
0x2ce: Call2 0x13b5

0x2cf: Pop(0)
0x2d0: @@ SetNPCDescription(Stack[-1])
0x2d1: Pop(1)
0x2d2: PushEmpty(string)
0x2d3: Call2 0x13b9

0x2d4: Pop(0)
0x2d5: @@ SetPhoto(Stack[-1])
0x2d6: Pop(1)
0x2d7: PushEmpty(string)
0x2d8: Call2 0x13bb

0x2d9: Pop(0)
0x2da: @@ SetPhoto2(Stack[-1])
0x2db: Pop(1)
0x2dc: PushEmpty(int)
0x2dd: Call2 0x16a5

0x2de: Pop(0)
0x2df: @@ SetPlayerName(Stack[-1])
0x2e0: Pop(1)
0x2e1: Stack[-2] = (int) -1
0x2e2: @ IsOverrideActive(Stack[-3])
0x2e3: Pop(0)
0x2e4: Push(Stack[-3])
0x2e5: IF (Stack[-1] == 0) GOTO 0x2e8; Pop(1)

0x2e6: Stack[-10] = (int) -2
0x2e7: Return(); Pop(8)

0x2e8: @ DoDialog(Stack[-4])
0x2e9: Pop(0)
0x2ea: PushEmpty(bool, object)
0x2eb: PushEmpty(object)
0x2ec: Call2 0x133c

0x2ed: Stack[-2] = Stack[-1]
0x2ee: Pop(1)
0x2ef: Call2 0x127d

0x2f0: Pop(2)
0x2f1: PushEmpty(object, object)
0x2f2: Stack[-2] = Stack[-11]
0x2f3: Stack[-1] = Stack[-6]
0x2f4: Push(-2, 4); TaskCall(3)
0x2f5: Call2 0x30c

0x2f6: Pop(-2, 4); TaskReturn
0x2f7: Pop(2)
0x2f8: @@ IsDialogEnd(Stack[-1])
0x2f9: Pop(0)
0x2fa: Pop(0); Push((bool) Stack[-1] == 0)
0x2fb: IF (Stack[-1] == 0) GOTO 0x301; Pop(1)

0x2fc: @ sync()
0x2fd: Pop(0)
0x2fe: @@ IsDialogEnd(Stack[-1])
0x2ff: Pop(0)
0x300: GOTO 0x2fa

0x301: PushEmpty(object)
0x302: Stack[-1] = Stack[-10]
0x303: Call2 0x126b

0x304: Pop(1)
0x305: @ StopDialog(Stack[-4])
0x306: Pop(0)
0x307: @@ GetReturnValue(Stack[-2])
0x308: Pop(0)
0x309: Stack[-10] = Stack[-2]
0x30a: Return(); Pop(8)

0x30b: Stack[-4] = 0
0x30c: PushEmpty()
0x30d: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x30e: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x30f: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x310: Push((int) 1)
0x311: IF (Stack[-1] == 0) GOTO 0x375; Pop(1)

0x312: PushEmpty(string)
0x313: Stack[-1] = "Neutral"
0x314: Call2 0x393

0x315: Pop(1)
0x316: Push((int) 508869)
0x317: @@ SetMessage(Stack[-1])
0x318: Pop(1)
0x319: @@ ClearReplies()
0x31a: Pop(0)
0x31b: PushEmpty(bool)
0x31c: Stack[-1] = (bool) 0
0x31d: PushEmpty(bool, object)
0x31e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x31f: Call2 0x14f5

0x320: Pop(1)
0x321: IF (Stack[-1] == 0) GOTO 0x328; Pop(1)

0x322: PushEmpty(bool, object)
0x323: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x324: Call2 0x1519

0x325: Pop(1)
0x326: IF (Stack[-1] == 0) GOTO 0x328; Pop(1)

0x327: Stack[-1] = (bool) 1
0x328: IF (Stack[-1] == 0) GOTO 0x32e; Pop(1)

0x329: Push((int) 508889)
0x32a: Push((int) 9751)
0x32b: Push((int) 9750)
0x32c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x32d: Pop(3)
0x32e: PushEmpty(bool)
0x32f: Stack[-1] = (bool) 0
0x330: PushEmpty(bool)
0x331: Stack[-1] = (bool) 0
0x332: PushEmpty(bool, object)
0x333: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x334: Call2 0x150d

0x335: Pop(1)
0x336: IF (Stack[-1] == 0) GOTO 0x33e; Pop(1)

0x337: PushEmpty(bool, object)
0x338: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x339: Call2 0x14f5

0x33a: Pop(1)
0x33b: Pop(1); Push((bool) Stack[-1] == 0)
0x33c: IF (Stack[-1] == 0) GOTO 0x33e; Pop(1)

0x33d: Stack[-1] = (bool) 1
0x33e: IF (Stack[-1] == 0) GOTO 0x345; Pop(1)

0x33f: PushEmpty(bool, object)
0x340: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x341: Call2 0x1519

0x342: Pop(1)
0x343: IF (Stack[-1] == 0) GOTO 0x345; Pop(1)

0x344: Stack[-1] = (bool) 1
0x345: IF (Stack[-1] == 0) GOTO 0x34b; Pop(1)

0x346: Push((int) 511136)
0x347: Push((int) 12326)
0x348: Push((int) 12325)
0x349: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x34a: Pop(3)
0x34b: PushEmpty(bool, object)
0x34c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x34d: Call2 0x14e9

0x34e: Pop(1)
0x34f: IF (Stack[-1] == 0) GOTO 0x355; Pop(1)

0x350: Push((int) 508888)
0x351: Push((int) 9729)
0x352: Push((int) 9749)
0x353: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x354: Pop(3)
0x355: PushEmpty(bool)
0x356: Stack[-1] = (bool) 0
0x357: PushEmpty(bool, object)
0x358: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x359: Call2 0x1501

0x35a: Pop(1)
0x35b: IF (Stack[-1] == 0) GOTO 0x362; Pop(1)

0x35c: PushEmpty(bool, object)
0x35d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x35e: Call2 0x1525

0x35f: Pop(1)
0x360: IF (Stack[-1] == 0) GOTO 0x362; Pop(1)

0x361: Stack[-1] = (bool) 1
0x362: IF (Stack[-1] == 0) GOTO 0x368; Pop(1)

0x363: Push((int) 508908)
0x364: Push((int) 9772)
0x365: Push((int) 9771)
0x366: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x367: Pop(3)
0x368: Push((int) 511134)
0x369: Push((int) -1)
0x36a: Push((int) 12323)
0x36b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x36c: Pop(3)
0x36d: Push((int) 536099)
0x36e: Push((int) -1)
0x36f: Push((int) 37851)
0x370: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x371: Pop(3)
0x372: GOTO 0x375

0x373: Return(); Pop(0)

0x374: GOTO 0x310

0x375: PushEmpty(bool)
0x376: Call2 0x13bd

0x377: Pop(0)
0x378: IF (Stack[-1] == 0) GOTO 0x384; Pop(1)

0x379: @ lshWaitForAnimEnd()
0x37a: Pop(0)
0x37b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x37c: IF (Stack[-1] == 0) GOTO 0x37e; Pop(1)

0x37d: GOTO 0x383

0x37e: PushEmpty(string)
0x37f: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x380: Call2 0x1307

0x381: Pop(1)
0x382: GOTO 0x379

0x383: GOTO 0x392

0x384: Push("all")
0x385: Push("idle")
0x386: @ PlayAnimation(Stack[-2], Stack[-1])
0x387: Pop(2)
0x388: @ WaitForAnimEnd()
0x389: Pop(0)
0x38a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x38b: IF (Stack[-1] == 0) GOTO 0x38d; Pop(1)

0x38c: GOTO 0x392

0x38d: Push("all")
0x38e: Push("idle")
0x38f: @ PlayAnimation(Stack[-2], Stack[-1])
0x390: Pop(2)
0x391: GOTO 0x388

0x392: Return(); Pop(0)

0x393: PushEmpty()
0x394: PushEmpty(bool)
0x395: Call2 0x13bd

0x396: Pop(0)
0x397: Pop(1); Push((bool) Stack[-1] == 0)
0x398: IF (Stack[-1] == 0) GOTO 0x39a; Pop(1)

0x399: Return(); Pop(0)

0x39a: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x39b: IF (Stack[-1] == 0) GOTO 0x39d; Pop(1)

0x39c: Return(); Pop(0)

0x39d: PushEmpty(string, bool)
0x39e: Stack[-2] = Stack[-3]
0x39f: Push("")
0x3a0: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x3a1: IF (Stack[-1] == 0) GOTO 0x3a4; Pop(1)

0x3a2: Stack[-1] = (bool) 0
0x3a3: GOTO 0x3a5

0x3a4: Stack[-1] = (bool) 1
0x3a5: Call2 0x1317

0x3a6: Pop(2)
0x3a7: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x3a8: Return(); Pop(0)

0x3a9: PushEmpty()
0x3aa: Push((int) 1)
0x3ab: IF (Stack[-1] == 0) GOTO 0x619; Pop(1)

0x3ac: PushEmpty()
0x3ad: Call2 0x1335

0x3ae: Pop(0)
0x3af: Push((int) 9768)
0x3b0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3b1: IF (Stack[-1] == 0) GOTO 0x3c1; Pop(1)

0x3b2: PushEmpty(object, object)
0x3b3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3b4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3b5: Call2 0x13f3

0x3b6: Pop(2)
0x3b7: PushEmpty(object, object)
0x3b8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3b9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3ba: Call2 0x13e7

0x3bb: Pop(2)
0x3bc: PushEmpty(object, object)
0x3bd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3be: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3bf: Call2 0x141e

0x3c0: Pop(2)
0x3c1: Push((int) 9769)
0x3c2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3c3: IF (Stack[-1] == 0) GOTO 0x3c9; Pop(1)

0x3c4: PushEmpty(object, object)
0x3c5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3c6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3c7: Call2 0x13e7

0x3c8: Pop(2)
0x3c9: Push((int) 9760)
0x3ca: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3cb: IF (Stack[-1] == 0) GOTO 0x3d1; Pop(1)

0x3cc: PushEmpty(object, object)
0x3cd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3ce: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3cf: Call2 0x13e7

0x3d0: Pop(2)
0x3d1: Push((int) 9762)
0x3d2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3d3: IF (Stack[-1] == 0) GOTO 0x3d9; Pop(1)

0x3d4: PushEmpty(object, object)
0x3d5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3d6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3d7: Call2 0x13e7

0x3d8: Pop(2)
0x3d9: Push((int) 12327)
0x3da: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3db: IF (Stack[-1] == 0) GOTO 0x3eb; Pop(1)

0x3dc: PushEmpty(object, object)
0x3dd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3de: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3df: Call2 0x13f3

0x3e0: Pop(2)
0x3e1: PushEmpty(object, object)
0x3e2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3e3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3e4: Call2 0x140a

0x3e5: Pop(2)
0x3e6: PushEmpty(object, object)
0x3e7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3e8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3e9: Call2 0x141e

0x3ea: Pop(2)
0x3eb: Push((int) 9749)
0x3ec: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3ed: IF (Stack[-1] == 0) GOTO 0x3f3; Pop(1)

0x3ee: PushEmpty(object, object)
0x3ef: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3f0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3f1: Call2 0x13e1

0x3f2: Pop(2)
0x3f3: Push((int) 9788)
0x3f4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3f5: IF (Stack[-1] == 0) GOTO 0x400; Pop(1)

0x3f6: PushEmpty(object, object)
0x3f7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3f8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3f9: Call2 0x13ed

0x3fa: Pop(2)
0x3fb: PushEmpty(object, object)
0x3fc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3fd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3fe: Call2 0x1410

0x3ff: Pop(2)
0x400: Push((int) 9789)
0x401: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x402: IF (Stack[-1] == 0) GOTO 0x40d; Pop(1)

0x403: PushEmpty(object, object)
0x404: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x405: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x406: Call2 0x13ed

0x407: Pop(2)
0x408: PushEmpty(object, object)
0x409: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x40a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x40b: Call2 0x1410

0x40c: Pop(2)
0x40d: Push((int) 9728)
0x40e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x40f: IF (Stack[-1] == 0) GOTO 0x471; Pop(1)

0x410: PushEmpty(string)
0x411: Stack[-1] = "Neutral"
0x412: Call2 0x393

0x413: Pop(1)
0x414: Push((int) 508869)
0x415: @@ SetMessage(Stack[-1])
0x416: Pop(1)
0x417: @@ ClearReplies()
0x418: Pop(0)
0x419: PushEmpty(bool)
0x41a: Stack[-1] = (bool) 0
0x41b: PushEmpty(bool, object)
0x41c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x41d: Call2 0x14f5

0x41e: Pop(1)
0x41f: IF (Stack[-1] == 0) GOTO 0x426; Pop(1)

0x420: PushEmpty(bool, object)
0x421: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x422: Call2 0x1519

0x423: Pop(1)
0x424: IF (Stack[-1] == 0) GOTO 0x426; Pop(1)

0x425: Stack[-1] = (bool) 1
0x426: IF (Stack[-1] == 0) GOTO 0x42c; Pop(1)

0x427: Push((int) 508889)
0x428: Push((int) 9751)
0x429: Push((int) 9750)
0x42a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x42b: Pop(3)
0x42c: PushEmpty(bool)
0x42d: Stack[-1] = (bool) 0
0x42e: PushEmpty(bool)
0x42f: Stack[-1] = (bool) 0
0x430: PushEmpty(bool, object)
0x431: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x432: Call2 0x150d

0x433: Pop(1)
0x434: IF (Stack[-1] == 0) GOTO 0x43c; Pop(1)

0x435: PushEmpty(bool, object)
0x436: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x437: Call2 0x14f5

0x438: Pop(1)
0x439: Pop(1); Push((bool) Stack[-1] == 0)
0x43a: IF (Stack[-1] == 0) GOTO 0x43c; Pop(1)

0x43b: Stack[-1] = (bool) 1
0x43c: IF (Stack[-1] == 0) GOTO 0x443; Pop(1)

0x43d: PushEmpty(bool, object)
0x43e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x43f: Call2 0x1519

0x440: Pop(1)
0x441: IF (Stack[-1] == 0) GOTO 0x443; Pop(1)

0x442: Stack[-1] = (bool) 1
0x443: IF (Stack[-1] == 0) GOTO 0x449; Pop(1)

0x444: Push((int) 511136)
0x445: Push((int) 12326)
0x446: Push((int) 12325)
0x447: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x448: Pop(3)
0x449: PushEmpty(bool, object)
0x44a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x44b: Call2 0x14e9

0x44c: Pop(1)
0x44d: IF (Stack[-1] == 0) GOTO 0x453; Pop(1)

0x44e: Push((int) 508888)
0x44f: Push((int) 9729)
0x450: Push((int) 9749)
0x451: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x452: Pop(3)
0x453: PushEmpty(bool)
0x454: Stack[-1] = (bool) 0
0x455: PushEmpty(bool, object)
0x456: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x457: Call2 0x1501

0x458: Pop(1)
0x459: IF (Stack[-1] == 0) GOTO 0x460; Pop(1)

0x45a: PushEmpty(bool, object)
0x45b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x45c: Call2 0x1525

0x45d: Pop(1)
0x45e: IF (Stack[-1] == 0) GOTO 0x460; Pop(1)

0x45f: Stack[-1] = (bool) 1
0x460: IF (Stack[-1] == 0) GOTO 0x466; Pop(1)

0x461: Push((int) 508908)
0x462: Push((int) 9772)
0x463: Push((int) 9771)
0x464: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x465: Pop(3)
0x466: Push((int) 511134)
0x467: Push((int) -1)
0x468: Push((int) 12323)
0x469: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x46a: Pop(3)
0x46b: Push((int) 536099)
0x46c: Push((int) -1)
0x46d: Push((int) 37851)
0x46e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x46f: Pop(3)
0x470: Return(); Pop(0)

0x471: Push((int) 9772)
0x472: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x473: IF (Stack[-1] == 0) GOTO 0x488; Pop(1)

0x474: PushEmpty(string)
0x475: Stack[-1] = "Neutral"
0x476: Call2 0x393

0x477: Pop(1)
0x478: Push((int) 508909)
0x479: @@ SetMessage(Stack[-1])
0x47a: Pop(1)
0x47b: @@ ClearReplies()
0x47c: Pop(0)
0x47d: Push((int) 508913)
0x47e: Push((int) 9778)
0x47f: Push((int) 9777)
0x480: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x481: Pop(3)
0x482: Push((int) 508910)
0x483: Push((int) 9778)
0x484: Push((int) 9773)
0x485: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x486: Pop(3)
0x487: Return(); Pop(0)

0x488: Push((int) 9778)
0x489: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x48a: IF (Stack[-1] == 0) GOTO 0x49f; Pop(1)

0x48b: PushEmpty(string)
0x48c: Stack[-1] = "Neutral"
0x48d: Call2 0x393

0x48e: Pop(1)
0x48f: Push((int) 508914)
0x490: @@ SetMessage(Stack[-1])
0x491: Pop(1)
0x492: @@ ClearReplies()
0x493: Pop(0)
0x494: Push((int) 508916)
0x495: Push((int) 9781)
0x496: Push((int) 9780)
0x497: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x498: Pop(3)
0x499: Push((int) 508918)
0x49a: Push((int) 9783)
0x49b: Push((int) 9782)
0x49c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x49d: Pop(3)
0x49e: Return(); Pop(0)

0x49f: Push((int) 9783)
0x4a0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4a1: IF (Stack[-1] == 0) GOTO 0x4b1; Pop(1)

0x4a2: PushEmpty(string)
0x4a3: Stack[-1] = "Neutral"
0x4a4: Call2 0x393

0x4a5: Pop(1)
0x4a6: Push((int) 508919)
0x4a7: @@ SetMessage(Stack[-1])
0x4a8: Pop(1)
0x4a9: @@ ClearReplies()
0x4aa: Pop(0)
0x4ab: Push((int) 508920)
0x4ac: Push((int) 9786)
0x4ad: Push((int) 9784)
0x4ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4af: Pop(3)
0x4b0: Return(); Pop(0)

0x4b1: Push((int) 9781)
0x4b2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4b3: IF (Stack[-1] == 0) GOTO 0x4c3; Pop(1)

0x4b4: PushEmpty(string)
0x4b5: Stack[-1] = "Neutral"
0x4b6: Call2 0x393

0x4b7: Pop(1)
0x4b8: Push((int) 508917)
0x4b9: @@ SetMessage(Stack[-1])
0x4ba: Pop(1)
0x4bb: @@ ClearReplies()
0x4bc: Pop(0)
0x4bd: Push((int) 508921)
0x4be: Push((int) 9786)
0x4bf: Push((int) 9785)
0x4c0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4c1: Pop(3)
0x4c2: Return(); Pop(0)

0x4c3: Push((int) 9786)
0x4c4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4c5: IF (Stack[-1] == 0) GOTO 0x4da; Pop(1)

0x4c6: PushEmpty(string)
0x4c7: Stack[-1] = "Neutral"
0x4c8: Call2 0x393

0x4c9: Pop(1)
0x4ca: Push((int) 508922)
0x4cb: @@ SetMessage(Stack[-1])
0x4cc: Pop(1)
0x4cd: @@ ClearReplies()
0x4ce: Pop(0)
0x4cf: Push((int) 508923)
0x4d0: Push((int) -1)
0x4d1: Push((int) 9788)
0x4d2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4d3: Pop(3)
0x4d4: Push((int) 508924)
0x4d5: Push((int) -1)
0x4d6: Push((int) 9789)
0x4d7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4d8: Pop(3)
0x4d9: Return(); Pop(0)

0x4da: Push((int) 9729)
0x4db: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4dc: IF (Stack[-1] == 0) GOTO 0x4f1; Pop(1)

0x4dd: PushEmpty(string)
0x4de: Stack[-1] = "Neutral"
0x4df: Call2 0x393

0x4e0: Pop(1)
0x4e1: Push((int) 508870)
0x4e2: @@ SetMessage(Stack[-1])
0x4e3: Pop(1)
0x4e4: @@ ClearReplies()
0x4e5: Pop(0)
0x4e6: Push((int) 508871)
0x4e7: Push((int) 9731)
0x4e8: Push((int) 9730)
0x4e9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ea: Pop(3)
0x4eb: Push((int) 508887)
0x4ec: Push((int) 9731)
0x4ed: Push((int) 9747)
0x4ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ef: Pop(3)
0x4f0: Return(); Pop(0)

0x4f1: Push((int) 9731)
0x4f2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4f3: IF (Stack[-1] == 0) GOTO 0x508; Pop(1)

0x4f4: PushEmpty(string)
0x4f5: Stack[-1] = "Grimacing"
0x4f6: Call2 0x393

0x4f7: Pop(1)
0x4f8: Push((int) 508872)
0x4f9: @@ SetMessage(Stack[-1])
0x4fa: Pop(1)
0x4fb: @@ ClearReplies()
0x4fc: Pop(0)
0x4fd: Push((int) 508873)
0x4fe: Push((int) 9733)
0x4ff: Push((int) 9732)
0x500: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x501: Pop(3)
0x502: Push((int) 508880)
0x503: Push((int) 9740)
0x504: Push((int) 9739)
0x505: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x506: Pop(3)
0x507: Return(); Pop(0)

0x508: Push((int) 9740)
0x509: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x50a: IF (Stack[-1] == 0) GOTO 0x51f; Pop(1)

0x50b: PushEmpty(string)
0x50c: Stack[-1] = "Neutral"
0x50d: Call2 0x393

0x50e: Pop(1)
0x50f: Push((int) 508881)
0x510: @@ SetMessage(Stack[-1])
0x511: Pop(1)
0x512: @@ ClearReplies()
0x513: Pop(0)
0x514: Push((int) 508882)
0x515: Push((int) 9733)
0x516: Push((int) 9741)
0x517: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x518: Pop(3)
0x519: Push((int) 508883)
0x51a: Push((int) 9744)
0x51b: Push((int) 9743)
0x51c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x51d: Pop(3)
0x51e: Return(); Pop(0)

0x51f: Push((int) 9744)
0x520: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x521: IF (Stack[-1] == 0) GOTO 0x536; Pop(1)

0x522: PushEmpty(string)
0x523: Stack[-1] = "Neutral"
0x524: Call2 0x393

0x525: Pop(1)
0x526: Push((int) 508884)
0x527: @@ SetMessage(Stack[-1])
0x528: Pop(1)
0x529: @@ ClearReplies()
0x52a: Pop(0)
0x52b: Push((int) 508885)
0x52c: Push((int) -1)
0x52d: Push((int) 9745)
0x52e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x52f: Pop(3)
0x530: Push((int) 508886)
0x531: Push((int) -1)
0x532: Push((int) 9746)
0x533: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x534: Pop(3)
0x535: Return(); Pop(0)

0x536: Push((int) 9733)
0x537: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x538: IF (Stack[-1] == 0) GOTO 0x54d; Pop(1)

0x539: PushEmpty(string)
0x53a: Stack[-1] = "Grimacing"
0x53b: Call2 0x393

0x53c: Pop(1)
0x53d: Push((int) 508874)
0x53e: @@ SetMessage(Stack[-1])
0x53f: Pop(1)
0x540: @@ ClearReplies()
0x541: Pop(0)
0x542: Push((int) 508875)
0x543: Push((int) 9735)
0x544: Push((int) 9734)
0x545: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x546: Pop(3)
0x547: Push((int) 508879)
0x548: Push((int) -1)
0x549: Push((int) 9738)
0x54a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x54b: Pop(3)
0x54c: Return(); Pop(0)

0x54d: Push((int) 9735)
0x54e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x54f: IF (Stack[-1] == 0) GOTO 0x564; Pop(1)

0x550: PushEmpty(string)
0x551: Stack[-1] = "Neutral"
0x552: Call2 0x393

0x553: Pop(1)
0x554: Push((int) 508876)
0x555: @@ SetMessage(Stack[-1])
0x556: Pop(1)
0x557: @@ ClearReplies()
0x558: Pop(0)
0x559: Push((int) 508877)
0x55a: Push((int) -1)
0x55b: Push((int) 9736)
0x55c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x55d: Pop(3)
0x55e: Push((int) 508878)
0x55f: Push((int) -1)
0x560: Push((int) 9737)
0x561: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x562: Pop(3)
0x563: Return(); Pop(0)

0x564: Push((int) 12326)
0x565: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x566: IF (Stack[-1] == 0) GOTO 0x576; Pop(1)

0x567: PushEmpty(string)
0x568: Stack[-1] = "Neutral"
0x569: Call2 0x393

0x56a: Pop(1)
0x56b: Push((int) 511137)
0x56c: @@ SetMessage(Stack[-1])
0x56d: Pop(1)
0x56e: @@ ClearReplies()
0x56f: Pop(0)
0x570: Push((int) 536097)
0x571: Push((int) 37850)
0x572: Push((int) 37849)
0x573: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x574: Pop(3)
0x575: Return(); Pop(0)

0x576: Push((int) 37850)
0x577: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x578: IF (Stack[-1] == 0) GOTO 0x588; Pop(1)

0x579: PushEmpty(string)
0x57a: Stack[-1] = "Neutral"
0x57b: Call2 0x393

0x57c: Pop(1)
0x57d: Push((int) 536098)
0x57e: @@ SetMessage(Stack[-1])
0x57f: Pop(1)
0x580: @@ ClearReplies()
0x581: Pop(0)
0x582: Push((int) 511138)
0x583: Push((int) -1)
0x584: Push((int) 12327)
0x585: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x586: Pop(3)
0x587: Return(); Pop(0)

0x588: Push((int) 9751)
0x589: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x58a: IF (Stack[-1] == 0) GOTO 0x59f; Pop(1)

0x58b: PushEmpty(string)
0x58c: Stack[-1] = "Neutral"
0x58d: Call2 0x393

0x58e: Pop(1)
0x58f: Push((int) 508890)
0x590: @@ SetMessage(Stack[-1])
0x591: Pop(1)
0x592: @@ ClearReplies()
0x593: Pop(0)
0x594: Push((int) 508891)
0x595: Push((int) 9753)
0x596: Push((int) 9752)
0x597: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x598: Pop(3)
0x599: Push((int) 508893)
0x59a: Push((int) 9759)
0x59b: Push((int) 9754)
0x59c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x59d: Pop(3)
0x59e: Return(); Pop(0)

0x59f: Push((int) 9759)
0x5a0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5a1: IF (Stack[-1] == 0) GOTO 0x5b6; Pop(1)

0x5a2: PushEmpty(string)
0x5a3: Stack[-1] = "Neutral"
0x5a4: Call2 0x393

0x5a5: Pop(1)
0x5a6: Push((int) 508898)
0x5a7: @@ SetMessage(Stack[-1])
0x5a8: Pop(1)
0x5a9: @@ ClearReplies()
0x5aa: Pop(0)
0x5ab: Push((int) 508899)
0x5ac: Push((int) -1)
0x5ad: Push((int) 9760)
0x5ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5af: Pop(3)
0x5b0: Push((int) 508900)
0x5b1: Push((int) -1)
0x5b2: Push((int) 9762)
0x5b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5b4: Pop(3)
0x5b5: Return(); Pop(0)

0x5b6: Push((int) 9753)
0x5b7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5b8: IF (Stack[-1] == 0) GOTO 0x5c8; Pop(1)

0x5b9: PushEmpty(string)
0x5ba: Stack[-1] = "Neutral"
0x5bb: Call2 0x393

0x5bc: Pop(1)
0x5bd: Push((int) 508892)
0x5be: @@ SetMessage(Stack[-1])
0x5bf: Pop(1)
0x5c0: @@ ClearReplies()
0x5c1: Pop(0)
0x5c2: Push((int) 508894)
0x5c3: Push((int) 9756)
0x5c4: Push((int) 9755)
0x5c5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c6: Pop(3)
0x5c7: Return(); Pop(0)

0x5c8: Push((int) 9756)
0x5c9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5ca: IF (Stack[-1] == 0) GOTO 0x5df; Pop(1)

0x5cb: PushEmpty(string)
0x5cc: Stack[-1] = "Neutral"
0x5cd: Call2 0x393

0x5ce: Pop(1)
0x5cf: Push((int) 508895)
0x5d0: @@ SetMessage(Stack[-1])
0x5d1: Pop(1)
0x5d2: @@ ClearReplies()
0x5d3: Pop(0)
0x5d4: Push((int) 508896)
0x5d5: Push((int) 9763)
0x5d6: Push((int) 9757)
0x5d7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d8: Pop(3)
0x5d9: Push((int) 508897)
0x5da: Push((int) 9759)
0x5db: Push((int) 9758)
0x5dc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5dd: Pop(3)
0x5de: Return(); Pop(0)

0x5df: Push((int) 9763)
0x5e0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5e1: IF (Stack[-1] == 0) GOTO 0x5f6; Pop(1)

0x5e2: PushEmpty(string)
0x5e3: Stack[-1] = "Neutral"
0x5e4: Call2 0x393

0x5e5: Pop(1)
0x5e6: Push((int) 508901)
0x5e7: @@ SetMessage(Stack[-1])
0x5e8: Pop(1)
0x5e9: @@ ClearReplies()
0x5ea: Pop(0)
0x5eb: Push((int) 508902)
0x5ec: Push((int) 9766)
0x5ed: Push((int) 9764)
0x5ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ef: Pop(3)
0x5f0: Push((int) 508903)
0x5f1: Push((int) 9766)
0x5f2: Push((int) 9765)
0x5f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5f4: Pop(3)
0x5f5: Return(); Pop(0)

0x5f6: Push((int) 9766)
0x5f7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5f8: IF (Stack[-1] == 0) GOTO 0x60d; Pop(1)

0x5f9: PushEmpty(string)
0x5fa: Stack[-1] = "Neutral"
0x5fb: Call2 0x393

0x5fc: Pop(1)
0x5fd: Push((int) 508904)
0x5fe: @@ SetMessage(Stack[-1])
0x5ff: Pop(1)
0x600: @@ ClearReplies()
0x601: Pop(0)
0x602: Push((int) 508905)
0x603: Push((int) -1)
0x604: Push((int) 9768)
0x605: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x606: Pop(3)
0x607: Push((int) 508906)
0x608: Push((int) -1)
0x609: Push((int) 9769)
0x60a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x60b: Pop(3)
0x60c: Return(); Pop(0)

0x60d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x60e: PushEmpty(bool)
0x60f: Call2 0x13bd

0x610: Pop(0)
0x611: IF (Stack[-1] == 0) GOTO 0x615; Pop(1)

0x612: @ lshStopAnimation()
0x613: Pop(0)
0x614: GOTO 0x617

0x615: @ StopAnimation()
0x616: Pop(0)
0x617: Return(); Pop(0)

0x618: GOTO 0x3aa

0x619: Return(); Pop(0)

0x61a: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x61b: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x61c: PushEmpty(bool, object, float)
0x61d: Stack[-2] = Stack[-12]
0x61e: Stack[-1] = (float) 70.0
0x61f: Call2 0x1226

0x620: Pop(2)
0x621: Pop(1); Push((bool) Stack[-1] == 0)
0x622: IF (Stack[-1] == 0) GOTO 0x625; Pop(1)

0x623: Stack[-10] = (int) -2
0x624: Return(); Pop(8)

0x625: @ CreateDialog(Stack[-4])
0x626: Pop(0)
0x627: PushEmpty(int)
0x628: Call2 0x13b7

0x629: Pop(0)
0x62a: @@ SetNPCName(Stack[-1])
0x62b: Pop(1)
0x62c: PushEmpty(int)
0x62d: Call2 0x13b5

0x62e: Pop(0)
0x62f: @@ SetNPCDescription(Stack[-1])
0x630: Pop(1)
0x631: PushEmpty(string)
0x632: Call2 0x13b9

0x633: Pop(0)
0x634: @@ SetPhoto(Stack[-1])
0x635: Pop(1)
0x636: PushEmpty(string)
0x637: Call2 0x13bb

0x638: Pop(0)
0x639: @@ SetPhoto2(Stack[-1])
0x63a: Pop(1)
0x63b: PushEmpty(int)
0x63c: Call2 0x16a5

0x63d: Pop(0)
0x63e: @@ SetPlayerName(Stack[-1])
0x63f: Pop(1)
0x640: Stack[-2] = (int) -1
0x641: @ IsOverrideActive(Stack[-3])
0x642: Pop(0)
0x643: Push(Stack[-3])
0x644: IF (Stack[-1] == 0) GOTO 0x647; Pop(1)

0x645: Stack[-10] = (int) -2
0x646: Return(); Pop(8)

0x647: @ DoDialog(Stack[-4])
0x648: Pop(0)
0x649: PushEmpty(bool, object)
0x64a: PushEmpty(object)
0x64b: Call2 0x133c

0x64c: Stack[-2] = Stack[-1]
0x64d: Pop(1)
0x64e: Call2 0x127d

0x64f: Pop(2)
0x650: PushEmpty(object, object)
0x651: Stack[-2] = Stack[-11]
0x652: Stack[-1] = Stack[-6]
0x653: Push(-2, 4); TaskCall(5)
0x654: Call2 0x66b

0x655: Pop(-2, 4); TaskReturn
0x656: Pop(2)
0x657: @@ IsDialogEnd(Stack[-1])
0x658: Pop(0)
0x659: Pop(0); Push((bool) Stack[-1] == 0)
0x65a: IF (Stack[-1] == 0) GOTO 0x660; Pop(1)

0x65b: @ sync()
0x65c: Pop(0)
0x65d: @@ IsDialogEnd(Stack[-1])
0x65e: Pop(0)
0x65f: GOTO 0x659

0x660: PushEmpty(object)
0x661: Stack[-1] = Stack[-10]
0x662: Call2 0x126b

0x663: Pop(1)
0x664: @ StopDialog(Stack[-4])
0x665: Pop(0)
0x666: @@ GetReturnValue(Stack[-2])
0x667: Pop(0)
0x668: Stack[-10] = Stack[-2]
0x669: Return(); Pop(8)

0x66a: Stack[-4] = 0
0x66b: PushEmpty()
0x66c: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x66d: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x66e: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x66f: Push((int) 1)
0x670: IF (Stack[-1] == 0) GOTO 0x6ad; Pop(1)

0x671: PushEmpty(string)
0x672: Stack[-1] = "Neutral"
0x673: Call2 0x6cb

0x674: Pop(1)
0x675: Push((int) 511065)
0x676: @@ SetMessage(Stack[-1])
0x677: Pop(1)
0x678: @@ ClearReplies()
0x679: Pop(0)
0x67a: PushEmpty(bool)
0x67b: Stack[-1] = (bool) 0
0x67c: PushEmpty(bool, object)
0x67d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x67e: Call2 0x153d

0x67f: Pop(1)
0x680: IF (Stack[-1] == 0) GOTO 0x687; Pop(1)

0x681: PushEmpty(bool, object)
0x682: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x683: Call2 0x1531

0x684: Pop(1)
0x685: IF (Stack[-1] == 0) GOTO 0x687; Pop(1)

0x686: Stack[-1] = (bool) 1
0x687: IF (Stack[-1] == 0) GOTO 0x68d; Pop(1)

0x688: Push((int) 511066)
0x689: Push((int) 12248)
0x68a: Push((int) 12247)
0x68b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x68c: Pop(3)
0x68d: PushEmpty(bool)
0x68e: Stack[-1] = (bool) 0
0x68f: PushEmpty(bool, object)
0x690: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x691: Call2 0x1555

0x692: Pop(1)
0x693: IF (Stack[-1] == 0) GOTO 0x69a; Pop(1)

0x694: PushEmpty(bool, object)
0x695: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x696: Call2 0x1549

0x697: Pop(1)
0x698: IF (Stack[-1] == 0) GOTO 0x69a; Pop(1)

0x699: Stack[-1] = (bool) 1
0x69a: IF (Stack[-1] == 0) GOTO 0x6a0; Pop(1)

0x69b: Push((int) 511079)
0x69c: Push((int) 12268)
0x69d: Push((int) 12263)
0x69e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69f: Pop(3)
0x6a0: Push((int) 511505)
0x6a1: Push((int) -1)
0x6a2: Push((int) 12707)
0x6a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6a4: Pop(3)
0x6a5: Push((int) 536130)
0x6a6: Push((int) -1)
0x6a7: Push((int) 37889)
0x6a8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6a9: Pop(3)
0x6aa: GOTO 0x6ad

0x6ab: Return(); Pop(0)

0x6ac: GOTO 0x66f

0x6ad: PushEmpty(bool)
0x6ae: Call2 0x13bd

0x6af: Pop(0)
0x6b0: IF (Stack[-1] == 0) GOTO 0x6bc; Pop(1)

0x6b1: @ lshWaitForAnimEnd()
0x6b2: Pop(0)
0x6b3: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6b4: IF (Stack[-1] == 0) GOTO 0x6b6; Pop(1)

0x6b5: GOTO 0x6bb

0x6b6: PushEmpty(string)
0x6b7: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x6b8: Call2 0x1307

0x6b9: Pop(1)
0x6ba: GOTO 0x6b1

0x6bb: GOTO 0x6ca

0x6bc: Push("all")
0x6bd: Push("idle")
0x6be: @ PlayAnimation(Stack[-2], Stack[-1])
0x6bf: Pop(2)
0x6c0: @ WaitForAnimEnd()
0x6c1: Pop(0)
0x6c2: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6c3: IF (Stack[-1] == 0) GOTO 0x6c5; Pop(1)

0x6c4: GOTO 0x6ca

0x6c5: Push("all")
0x6c6: Push("idle")
0x6c7: @ PlayAnimation(Stack[-2], Stack[-1])
0x6c8: Pop(2)
0x6c9: GOTO 0x6c0

0x6ca: Return(); Pop(0)

0x6cb: PushEmpty()
0x6cc: PushEmpty(bool)
0x6cd: Call2 0x13bd

0x6ce: Pop(0)
0x6cf: Pop(1); Push((bool) Stack[-1] == 0)
0x6d0: IF (Stack[-1] == 0) GOTO 0x6d2; Pop(1)

0x6d1: Return(); Pop(0)

0x6d2: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x6d3: IF (Stack[-1] == 0) GOTO 0x6d5; Pop(1)

0x6d4: Return(); Pop(0)

0x6d5: PushEmpty(string, bool)
0x6d6: Stack[-2] = Stack[-3]
0x6d7: Push("")
0x6d8: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x6d9: IF (Stack[-1] == 0) GOTO 0x6dc; Pop(1)

0x6da: Stack[-1] = (bool) 0
0x6db: GOTO 0x6dd

0x6dc: Stack[-1] = (bool) 1
0x6dd: Call2 0x1317

0x6de: Pop(2)
0x6df: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x6e0: Return(); Pop(0)

0x6e1: PushEmpty()
0x6e2: Push((int) 1)
0x6e3: IF (Stack[-1] == 0) GOTO 0x84f; Pop(1)

0x6e4: PushEmpty()
0x6e5: Call2 0x1335

0x6e6: Pop(0)
0x6e7: Push((int) 12266)
0x6e8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6e9: IF (Stack[-1] == 0) GOTO 0x6f9; Pop(1)

0x6ea: PushEmpty(object, object)
0x6eb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6ec: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6ed: Call2 0x1462

0x6ee: Pop(2)
0x6ef: PushEmpty(object, object)
0x6f0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6f1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6f2: Call2 0x144e

0x6f3: Pop(2)
0x6f4: PushEmpty(object, object)
0x6f5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6f6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6f7: Call2 0x143e

0x6f8: Pop(2)
0x6f9: Push((int) 12267)
0x6fa: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6fb: IF (Stack[-1] == 0) GOTO 0x70b; Pop(1)

0x6fc: PushEmpty(object, object)
0x6fd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6fe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6ff: Call2 0x1462

0x700: Pop(2)
0x701: PushEmpty(object, object)
0x702: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x703: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x704: Call2 0x144e

0x705: Pop(2)
0x706: PushEmpty(object, object)
0x707: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x708: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x709: Call2 0x143e

0x70a: Pop(2)
0x70b: Push((int) 12281)
0x70c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x70d: IF (Stack[-1] == 0) GOTO 0x718; Pop(1)

0x70e: PushEmpty(object, object)
0x70f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x710: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x711: Call2 0x146e

0x712: Pop(2)
0x713: PushEmpty(object, object)
0x714: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x715: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x716: Call2 0x1468

0x717: Pop(2)
0x718: Push((int) 12246)
0x719: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x71a: IF (Stack[-1] == 0) GOTO 0x755; Pop(1)

0x71b: PushEmpty(string)
0x71c: Stack[-1] = "Neutral"
0x71d: Call2 0x6cb

0x71e: Pop(1)
0x71f: Push((int) 511065)
0x720: @@ SetMessage(Stack[-1])
0x721: Pop(1)
0x722: @@ ClearReplies()
0x723: Pop(0)
0x724: PushEmpty(bool)
0x725: Stack[-1] = (bool) 0
0x726: PushEmpty(bool, object)
0x727: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x728: Call2 0x153d

0x729: Pop(1)
0x72a: IF (Stack[-1] == 0) GOTO 0x731; Pop(1)

0x72b: PushEmpty(bool, object)
0x72c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x72d: Call2 0x1531

0x72e: Pop(1)
0x72f: IF (Stack[-1] == 0) GOTO 0x731; Pop(1)

0x730: Stack[-1] = (bool) 1
0x731: IF (Stack[-1] == 0) GOTO 0x737; Pop(1)

0x732: Push((int) 511066)
0x733: Push((int) 12248)
0x734: Push((int) 12247)
0x735: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x736: Pop(3)
0x737: PushEmpty(bool)
0x738: Stack[-1] = (bool) 0
0x739: PushEmpty(bool, object)
0x73a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x73b: Call2 0x1555

0x73c: Pop(1)
0x73d: IF (Stack[-1] == 0) GOTO 0x744; Pop(1)

0x73e: PushEmpty(bool, object)
0x73f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x740: Call2 0x1549

0x741: Pop(1)
0x742: IF (Stack[-1] == 0) GOTO 0x744; Pop(1)

0x743: Stack[-1] = (bool) 1
0x744: IF (Stack[-1] == 0) GOTO 0x74a; Pop(1)

0x745: Push((int) 511079)
0x746: Push((int) 12268)
0x747: Push((int) 12263)
0x748: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x749: Pop(3)
0x74a: Push((int) 511505)
0x74b: Push((int) -1)
0x74c: Push((int) 12707)
0x74d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x74e: Pop(3)
0x74f: Push((int) 536130)
0x750: Push((int) -1)
0x751: Push((int) 37889)
0x752: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x753: Pop(3)
0x754: Return(); Pop(0)

0x755: Push((int) 12268)
0x756: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x757: IF (Stack[-1] == 0) GOTO 0x76c; Pop(1)

0x758: PushEmpty(string)
0x759: Stack[-1] = "Neutral"
0x75a: Call2 0x6cb

0x75b: Pop(1)
0x75c: Push((int) 511083)
0x75d: @@ SetMessage(Stack[-1])
0x75e: Pop(1)
0x75f: @@ ClearReplies()
0x760: Pop(0)
0x761: Push((int) 511084)
0x762: Push((int) 12271)
0x763: Push((int) 12269)
0x764: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x765: Pop(3)
0x766: Push((int) 511085)
0x767: Push((int) 12272)
0x768: Push((int) 12270)
0x769: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x76a: Pop(3)
0x76b: Return(); Pop(0)

0x76c: Push((int) 12272)
0x76d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x76e: IF (Stack[-1] == 0) GOTO 0x77e; Pop(1)

0x76f: PushEmpty(string)
0x770: Stack[-1] = "Neutral"
0x771: Call2 0x6cb

0x772: Pop(1)
0x773: Push((int) 511087)
0x774: @@ SetMessage(Stack[-1])
0x775: Pop(1)
0x776: @@ ClearReplies()
0x777: Pop(0)
0x778: Push((int) 511088)
0x779: Push((int) 12275)
0x77a: Push((int) 12273)
0x77b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x77c: Pop(3)
0x77d: Return(); Pop(0)

0x77e: Push((int) 12271)
0x77f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x780: IF (Stack[-1] == 0) GOTO 0x790; Pop(1)

0x781: PushEmpty(string)
0x782: Stack[-1] = "Neutral"
0x783: Call2 0x6cb

0x784: Pop(1)
0x785: Push((int) 511086)
0x786: @@ SetMessage(Stack[-1])
0x787: Pop(1)
0x788: @@ ClearReplies()
0x789: Pop(0)
0x78a: Push((int) 511089)
0x78b: Push((int) 12275)
0x78c: Push((int) 12274)
0x78d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x78e: Pop(3)
0x78f: Return(); Pop(0)

0x790: Push((int) 12275)
0x791: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x792: IF (Stack[-1] == 0) GOTO 0x7a7; Pop(1)

0x793: PushEmpty(string)
0x794: Stack[-1] = "Neutral"
0x795: Call2 0x6cb

0x796: Pop(1)
0x797: Push((int) 511090)
0x798: @@ SetMessage(Stack[-1])
0x799: Pop(1)
0x79a: @@ ClearReplies()
0x79b: Pop(0)
0x79c: Push((int) 511091)
0x79d: Push((int) 12279)
0x79e: Push((int) 12276)
0x79f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7a0: Pop(3)
0x7a1: Push((int) 511092)
0x7a2: Push((int) 12279)
0x7a3: Push((int) 12277)
0x7a4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7a5: Pop(3)
0x7a6: Return(); Pop(0)

0x7a7: Push((int) 12279)
0x7a8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7a9: IF (Stack[-1] == 0) GOTO 0x7b9; Pop(1)

0x7aa: PushEmpty(string)
0x7ab: Stack[-1] = "Neutral"
0x7ac: Call2 0x6cb

0x7ad: Pop(1)
0x7ae: Push((int) 511093)
0x7af: @@ SetMessage(Stack[-1])
0x7b0: Pop(1)
0x7b1: @@ ClearReplies()
0x7b2: Pop(0)
0x7b3: Push((int) 511094)
0x7b4: Push((int) -1)
0x7b5: Push((int) 12281)
0x7b6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b7: Pop(3)
0x7b8: Return(); Pop(0)

0x7b9: Push((int) 12248)
0x7ba: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7bb: IF (Stack[-1] == 0) GOTO 0x7d0; Pop(1)

0x7bc: PushEmpty(string)
0x7bd: Stack[-1] = "Neutral"
0x7be: Call2 0x6cb

0x7bf: Pop(1)
0x7c0: Push((int) 511067)
0x7c1: @@ SetMessage(Stack[-1])
0x7c2: Pop(1)
0x7c3: @@ ClearReplies()
0x7c4: Pop(0)
0x7c5: Push((int) 511068)
0x7c6: Push((int) 12250)
0x7c7: Push((int) 12249)
0x7c8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c9: Pop(3)
0x7ca: Push((int) 511073)
0x7cb: Push((int) 12255)
0x7cc: Push((int) 12254)
0x7cd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ce: Pop(3)
0x7cf: Return(); Pop(0)

0x7d0: Push((int) 12250)
0x7d1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7d2: IF (Stack[-1] == 0) GOTO 0x7ec; Pop(1)

0x7d3: PushEmpty(string)
0x7d4: Stack[-1] = "Neutral"
0x7d5: Call2 0x6cb

0x7d6: Pop(1)
0x7d7: Push((int) 511069)
0x7d8: @@ SetMessage(Stack[-1])
0x7d9: Pop(1)
0x7da: @@ ClearReplies()
0x7db: Pop(0)
0x7dc: Push((int) 511070)
0x7dd: Push((int) 12257)
0x7de: Push((int) 12251)
0x7df: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7e0: Pop(3)
0x7e1: Push((int) 511071)
0x7e2: Push((int) 12257)
0x7e3: Push((int) 12252)
0x7e4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7e5: Pop(3)
0x7e6: Push((int) 511072)
0x7e7: Push((int) 12255)
0x7e8: Push((int) 12253)
0x7e9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ea: Pop(3)
0x7eb: Return(); Pop(0)

0x7ec: Push((int) 12255)
0x7ed: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7ee: IF (Stack[-1] == 0) GOTO 0x7fe; Pop(1)

0x7ef: PushEmpty(string)
0x7f0: Stack[-1] = "Neutral"
0x7f1: Call2 0x6cb

0x7f2: Pop(1)
0x7f3: Push((int) 511074)
0x7f4: @@ SetMessage(Stack[-1])
0x7f5: Pop(1)
0x7f6: @@ ClearReplies()
0x7f7: Pop(0)
0x7f8: Push((int) 511075)
0x7f9: Push((int) 12257)
0x7fa: Push((int) 12256)
0x7fb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7fc: Pop(3)
0x7fd: Return(); Pop(0)

0x7fe: Push((int) 12257)
0x7ff: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x800: IF (Stack[-1] == 0) GOTO 0x815; Pop(1)

0x801: PushEmpty(string)
0x802: Stack[-1] = "Neutral"
0x803: Call2 0x6cb

0x804: Pop(1)
0x805: Push((int) 511076)
0x806: @@ SetMessage(Stack[-1])
0x807: Pop(1)
0x808: @@ ClearReplies()
0x809: Pop(0)
0x80a: Push((int) 511077)
0x80b: Push((int) 40703)
0x80c: Push((int) 12261)
0x80d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x80e: Pop(3)
0x80f: Push((int) 511078)
0x810: Push((int) 12264)
0x811: Push((int) 12262)
0x812: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x813: Pop(3)
0x814: Return(); Pop(0)

0x815: Push((int) 40703)
0x816: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x817: IF (Stack[-1] == 0) GOTO 0x82c; Pop(1)

0x818: PushEmpty(string)
0x819: Stack[-1] = "Neutral"
0x81a: Call2 0x6cb

0x81b: Pop(1)
0x81c: Push((int) 538787)
0x81d: @@ SetMessage(Stack[-1])
0x81e: Pop(1)
0x81f: @@ ClearReplies()
0x820: Pop(0)
0x821: Push((int) 538788)
0x822: Push((int) 12264)
0x823: Push((int) 40704)
0x824: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x825: Pop(3)
0x826: Push((int) 538789)
0x827: Push((int) 12264)
0x828: Push((int) 40705)
0x829: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82a: Pop(3)
0x82b: Return(); Pop(0)

0x82c: Push((int) 12264)
0x82d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x82e: IF (Stack[-1] == 0) GOTO 0x843; Pop(1)

0x82f: PushEmpty(string)
0x830: Stack[-1] = "Neutral"
0x831: Call2 0x6cb

0x832: Pop(1)
0x833: Push((int) 511080)
0x834: @@ SetMessage(Stack[-1])
0x835: Pop(1)
0x836: @@ ClearReplies()
0x837: Pop(0)
0x838: Push((int) 511081)
0x839: Push((int) -1)
0x83a: Push((int) 12266)
0x83b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x83c: Pop(3)
0x83d: Push((int) 511082)
0x83e: Push((int) -1)
0x83f: Push((int) 12267)
0x840: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x841: Pop(3)
0x842: Return(); Pop(0)

0x843: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x844: PushEmpty(bool)
0x845: Call2 0x13bd

0x846: Pop(0)
0x847: IF (Stack[-1] == 0) GOTO 0x84b; Pop(1)

0x848: @ lshStopAnimation()
0x849: Pop(0)
0x84a: GOTO 0x84d

0x84b: @ StopAnimation()
0x84c: Pop(0)
0x84d: Return(); Pop(0)

0x84e: GOTO 0x6e2

0x84f: Return(); Pop(0)

0x850: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x851: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x852: PushEmpty(bool, object, float)
0x853: Stack[-2] = Stack[-12]
0x854: Stack[-1] = (float) 70.0
0x855: Call2 0x1226

0x856: Pop(2)
0x857: Pop(1); Push((bool) Stack[-1] == 0)
0x858: IF (Stack[-1] == 0) GOTO 0x85b; Pop(1)

0x859: Stack[-10] = (int) -2
0x85a: Return(); Pop(8)

0x85b: @ CreateDialog(Stack[-4])
0x85c: Pop(0)
0x85d: PushEmpty(int)
0x85e: Call2 0x13b7

0x85f: Pop(0)
0x860: @@ SetNPCName(Stack[-1])
0x861: Pop(1)
0x862: PushEmpty(int)
0x863: Call2 0x13b5

0x864: Pop(0)
0x865: @@ SetNPCDescription(Stack[-1])
0x866: Pop(1)
0x867: PushEmpty(string)
0x868: Call2 0x13b9

0x869: Pop(0)
0x86a: @@ SetPhoto(Stack[-1])
0x86b: Pop(1)
0x86c: PushEmpty(string)
0x86d: Call2 0x13bb

0x86e: Pop(0)
0x86f: @@ SetPhoto2(Stack[-1])
0x870: Pop(1)
0x871: PushEmpty(int)
0x872: Call2 0x16a5

0x873: Pop(0)
0x874: @@ SetPlayerName(Stack[-1])
0x875: Pop(1)
0x876: Stack[-2] = (int) -1
0x877: @ IsOverrideActive(Stack[-3])
0x878: Pop(0)
0x879: Push(Stack[-3])
0x87a: IF (Stack[-1] == 0) GOTO 0x87d; Pop(1)

0x87b: Stack[-10] = (int) -2
0x87c: Return(); Pop(8)

0x87d: @ DoDialog(Stack[-4])
0x87e: Pop(0)
0x87f: PushEmpty(bool, object)
0x880: PushEmpty(object)
0x881: Call2 0x133c

0x882: Stack[-2] = Stack[-1]
0x883: Pop(1)
0x884: Call2 0x127d

0x885: Pop(2)
0x886: PushEmpty(object, object)
0x887: Stack[-2] = Stack[-11]
0x888: Stack[-1] = Stack[-6]
0x889: Push(-2, 4); TaskCall(7)
0x88a: Call2 0x8a1

0x88b: Pop(-2, 4); TaskReturn
0x88c: Pop(2)
0x88d: @@ IsDialogEnd(Stack[-1])
0x88e: Pop(0)
0x88f: Pop(0); Push((bool) Stack[-1] == 0)
0x890: IF (Stack[-1] == 0) GOTO 0x896; Pop(1)

0x891: @ sync()
0x892: Pop(0)
0x893: @@ IsDialogEnd(Stack[-1])
0x894: Pop(0)
0x895: GOTO 0x88f

0x896: PushEmpty(object)
0x897: Stack[-1] = Stack[-10]
0x898: Call2 0x126b

0x899: Pop(1)
0x89a: @ StopDialog(Stack[-4])
0x89b: Pop(0)
0x89c: @@ GetReturnValue(Stack[-2])
0x89d: Pop(0)
0x89e: Stack[-10] = Stack[-2]
0x89f: Return(); Pop(8)

0x8a0: Stack[-4] = 0
0x8a1: PushEmpty()
0x8a2: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x8a3: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x8a4: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x8a5: Push((int) 1)
0x8a6: IF (Stack[-1] == 0) GOTO 0x8d6; Pop(1)

0x8a7: PushEmpty(string)
0x8a8: Stack[-1] = "Neutral"
0x8a9: Call2 0x8f4

0x8aa: Pop(1)
0x8ab: Push((int) 512374)
0x8ac: @@ SetMessage(Stack[-1])
0x8ad: Pop(1)
0x8ae: @@ ClearReplies()
0x8af: Pop(0)
0x8b0: PushEmpty(bool)
0x8b1: Stack[-1] = (bool) 0
0x8b2: PushEmpty(bool, object)
0x8b3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8b4: Call2 0x1585

0x8b5: Pop(1)
0x8b6: Pop(1); Push((bool) Stack[-1] == 0)
0x8b7: IF (Stack[-1] == 0) GOTO 0x8be; Pop(1)

0x8b8: PushEmpty(bool, object)
0x8b9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8ba: Call2 0x159d

0x8bb: Pop(1)
0x8bc: IF (Stack[-1] == 0) GOTO 0x8be; Pop(1)

0x8bd: Stack[-1] = (bool) 1
0x8be: IF (Stack[-1] == 0) GOTO 0x8c4; Pop(1)

0x8bf: Push((int) 513641)
0x8c0: Push((int) 14898)
0x8c1: Push((int) 14897)
0x8c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8c3: Pop(3)
0x8c4: PushEmpty(bool, object)
0x8c5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8c6: Call2 0x1591

0x8c7: Pop(1)
0x8c8: IF (Stack[-1] == 0) GOTO 0x8ce; Pop(1)

0x8c9: Push((int) 512375)
0x8ca: Push((int) 13536)
0x8cb: Push((int) 13535)
0x8cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8cd: Pop(3)
0x8ce: Push((int) 513658)
0x8cf: Push((int) -1)
0x8d0: Push((int) 14916)
0x8d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d2: Pop(3)
0x8d3: GOTO 0x8d6

0x8d4: Return(); Pop(0)

0x8d5: GOTO 0x8a5

0x8d6: PushEmpty(bool)
0x8d7: Call2 0x13bd

0x8d8: Pop(0)
0x8d9: IF (Stack[-1] == 0) GOTO 0x8e5; Pop(1)

0x8da: @ lshWaitForAnimEnd()
0x8db: Pop(0)
0x8dc: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8dd: IF (Stack[-1] == 0) GOTO 0x8df; Pop(1)

0x8de: GOTO 0x8e4

0x8df: PushEmpty(string)
0x8e0: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8e1: Call2 0x1307

0x8e2: Pop(1)
0x8e3: GOTO 0x8da

0x8e4: GOTO 0x8f3

0x8e5: Push("all")
0x8e6: Push("idle")
0x8e7: @ PlayAnimation(Stack[-2], Stack[-1])
0x8e8: Pop(2)
0x8e9: @ WaitForAnimEnd()
0x8ea: Pop(0)
0x8eb: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8ec: IF (Stack[-1] == 0) GOTO 0x8ee; Pop(1)

0x8ed: GOTO 0x8f3

0x8ee: Push("all")
0x8ef: Push("idle")
0x8f0: @ PlayAnimation(Stack[-2], Stack[-1])
0x8f1: Pop(2)
0x8f2: GOTO 0x8e9

0x8f3: Return(); Pop(0)

0x8f4: PushEmpty()
0x8f5: PushEmpty(bool)
0x8f6: Call2 0x13bd

0x8f7: Pop(0)
0x8f8: Pop(1); Push((bool) Stack[-1] == 0)
0x8f9: IF (Stack[-1] == 0) GOTO 0x8fb; Pop(1)

0x8fa: Return(); Pop(0)

0x8fb: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x8fc: IF (Stack[-1] == 0) GOTO 0x8fe; Pop(1)

0x8fd: Return(); Pop(0)

0x8fe: PushEmpty(string, bool)
0x8ff: Stack[-2] = Stack[-3]
0x900: Push("")
0x901: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x902: IF (Stack[-1] == 0) GOTO 0x905; Pop(1)

0x903: Stack[-1] = (bool) 0
0x904: GOTO 0x906

0x905: Stack[-1] = (bool) 1
0x906: Call2 0x1317

0x907: Pop(2)
0x908: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x909: Return(); Pop(0)

0x90a: PushEmpty()
0x90b: Push((int) 1)
0x90c: IF (Stack[-1] == 0) GOTO 0xb2f; Pop(1)

0x90d: PushEmpty()
0x90e: Call2 0x1335

0x90f: Pop(0)
0x910: Push((int) 14897)
0x911: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x912: IF (Stack[-1] == 0) GOTO 0x918; Pop(1)

0x913: PushEmpty(object, object)
0x914: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x915: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x916: Call2 0x149d

0x917: Pop(2)
0x918: Push((int) 14911)
0x919: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x91a: IF (Stack[-1] == 0) GOTO 0x925; Pop(1)

0x91b: PushEmpty(object, object)
0x91c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x91d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x91e: Call2 0x1480

0x91f: Pop(2)
0x920: PushEmpty(object, object)
0x921: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x922: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x923: Call2 0x142e

0x924: Pop(2)
0x925: Push((int) 40378)
0x926: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x927: IF (Stack[-1] == 0) GOTO 0x932; Pop(1)

0x928: PushEmpty(object, object)
0x929: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x92a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x92b: Call2 0x1480

0x92c: Pop(2)
0x92d: PushEmpty(object, object)
0x92e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x92f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x930: Call2 0x142e

0x931: Pop(2)
0x932: Push((int) 40377)
0x933: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x934: IF (Stack[-1] == 0) GOTO 0x93f; Pop(1)

0x935: PushEmpty(object, object)
0x936: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x937: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x938: Call2 0x1480

0x939: Pop(2)
0x93a: PushEmpty(object, object)
0x93b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x93c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x93d: Call2 0x142e

0x93e: Pop(2)
0x93f: Push((int) 13535)
0x940: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x941: IF (Stack[-1] == 0) GOTO 0x947; Pop(1)

0x942: PushEmpty(object, object)
0x943: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x944: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x945: Call2 0x1497

0x946: Pop(2)
0x947: Push((int) 13534)
0x948: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x949: IF (Stack[-1] == 0) GOTO 0x977; Pop(1)

0x94a: PushEmpty(string)
0x94b: Stack[-1] = "Neutral"
0x94c: Call2 0x8f4

0x94d: Pop(1)
0x94e: Push((int) 512374)
0x94f: @@ SetMessage(Stack[-1])
0x950: Pop(1)
0x951: @@ ClearReplies()
0x952: Pop(0)
0x953: PushEmpty(bool)
0x954: Stack[-1] = (bool) 0
0x955: PushEmpty(bool, object)
0x956: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x957: Call2 0x1585

0x958: Pop(1)
0x959: Pop(1); Push((bool) Stack[-1] == 0)
0x95a: IF (Stack[-1] == 0) GOTO 0x961; Pop(1)

0x95b: PushEmpty(bool, object)
0x95c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x95d: Call2 0x159d

0x95e: Pop(1)
0x95f: IF (Stack[-1] == 0) GOTO 0x961; Pop(1)

0x960: Stack[-1] = (bool) 1
0x961: IF (Stack[-1] == 0) GOTO 0x967; Pop(1)

0x962: Push((int) 513641)
0x963: Push((int) 14898)
0x964: Push((int) 14897)
0x965: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x966: Pop(3)
0x967: PushEmpty(bool, object)
0x968: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x969: Call2 0x1591

0x96a: Pop(1)
0x96b: IF (Stack[-1] == 0) GOTO 0x971; Pop(1)

0x96c: Push((int) 512375)
0x96d: Push((int) 13536)
0x96e: Push((int) 13535)
0x96f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x970: Pop(3)
0x971: Push((int) 513658)
0x972: Push((int) -1)
0x973: Push((int) 14916)
0x974: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x975: Pop(3)
0x976: Return(); Pop(0)

0x977: Push((int) 13536)
0x978: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x979: IF (Stack[-1] == 0) GOTO 0x98e; Pop(1)

0x97a: PushEmpty(string)
0x97b: Stack[-1] = "Neutral"
0x97c: Call2 0x8f4

0x97d: Pop(1)
0x97e: Push((int) 512376)
0x97f: @@ SetMessage(Stack[-1])
0x980: Pop(1)
0x981: @@ ClearReplies()
0x982: Pop(0)
0x983: Push((int) 512378)
0x984: Push((int) 13544)
0x985: Push((int) 13538)
0x986: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x987: Pop(3)
0x988: Push((int) 512377)
0x989: Push((int) 13539)
0x98a: Push((int) 13537)
0x98b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x98c: Pop(3)
0x98d: Return(); Pop(0)

0x98e: Push((int) 13539)
0x98f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x990: IF (Stack[-1] == 0) GOTO 0x9a0; Pop(1)

0x991: PushEmpty(string)
0x992: Stack[-1] = "Neutral"
0x993: Call2 0x8f4

0x994: Pop(1)
0x995: Push((int) 512379)
0x996: @@ SetMessage(Stack[-1])
0x997: Pop(1)
0x998: @@ ClearReplies()
0x999: Pop(0)
0x99a: Push((int) 512380)
0x99b: Push((int) 13541)
0x99c: Push((int) 13540)
0x99d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x99e: Pop(3)
0x99f: Return(); Pop(0)

0x9a0: Push((int) 13541)
0x9a1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9a2: IF (Stack[-1] == 0) GOTO 0x9b7; Pop(1)

0x9a3: PushEmpty(string)
0x9a4: Stack[-1] = "Neutral"
0x9a5: Call2 0x8f4

0x9a6: Pop(1)
0x9a7: Push((int) 512381)
0x9a8: @@ SetMessage(Stack[-1])
0x9a9: Pop(1)
0x9aa: @@ ClearReplies()
0x9ab: Pop(0)
0x9ac: Push((int) 512382)
0x9ad: Push((int) -1)
0x9ae: Push((int) 13542)
0x9af: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9b0: Pop(3)
0x9b1: Push((int) 512383)
0x9b2: Push((int) -1)
0x9b3: Push((int) 13543)
0x9b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9b5: Pop(3)
0x9b6: Return(); Pop(0)

0x9b7: Push((int) 13544)
0x9b8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9b9: IF (Stack[-1] == 0) GOTO 0x9ce; Pop(1)

0x9ba: PushEmpty(string)
0x9bb: Stack[-1] = "Neutral"
0x9bc: Call2 0x8f4

0x9bd: Pop(1)
0x9be: Push((int) 512384)
0x9bf: @@ SetMessage(Stack[-1])
0x9c0: Pop(1)
0x9c1: @@ ClearReplies()
0x9c2: Pop(0)
0x9c3: Push((int) 512385)
0x9c4: Push((int) 13552)
0x9c5: Push((int) 13545)
0x9c6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9c7: Pop(3)
0x9c8: Push((int) 512386)
0x9c9: Push((int) 13547)
0x9ca: Push((int) 13546)
0x9cb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9cc: Pop(3)
0x9cd: Return(); Pop(0)

0x9ce: Push((int) 13547)
0x9cf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9d0: IF (Stack[-1] == 0) GOTO 0x9e5; Pop(1)

0x9d1: PushEmpty(string)
0x9d2: Stack[-1] = "Neutral"
0x9d3: Call2 0x8f4

0x9d4: Pop(1)
0x9d5: Push((int) 512387)
0x9d6: @@ SetMessage(Stack[-1])
0x9d7: Pop(1)
0x9d8: @@ ClearReplies()
0x9d9: Pop(0)
0x9da: Push((int) 512388)
0x9db: Push((int) 13550)
0x9dc: Push((int) 13548)
0x9dd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9de: Pop(3)
0x9df: Push((int) 512389)
0x9e0: Push((int) 13550)
0x9e1: Push((int) 13549)
0x9e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9e3: Pop(3)
0x9e4: Return(); Pop(0)

0x9e5: Push((int) 13550)
0x9e6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9e7: IF (Stack[-1] == 0) GOTO 0x9f7; Pop(1)

0x9e8: PushEmpty(string)
0x9e9: Stack[-1] = "Neutral"
0x9ea: Call2 0x8f4

0x9eb: Pop(1)
0x9ec: Push((int) 512390)
0x9ed: @@ SetMessage(Stack[-1])
0x9ee: Pop(1)
0x9ef: @@ ClearReplies()
0x9f0: Pop(0)
0x9f1: Push((int) 512391)
0x9f2: Push((int) -1)
0x9f3: Push((int) 13551)
0x9f4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9f5: Pop(3)
0x9f6: Return(); Pop(0)

0x9f7: Push((int) 13552)
0x9f8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9f9: IF (Stack[-1] == 0) GOTO 0xa13; Pop(1)

0x9fa: PushEmpty(string)
0x9fb: Stack[-1] = "Neutral"
0x9fc: Call2 0x8f4

0x9fd: Pop(1)
0x9fe: Push((int) 512392)
0x9ff: @@ SetMessage(Stack[-1])
0xa00: Pop(1)
0xa01: @@ ClearReplies()
0xa02: Pop(0)
0xa03: Push((int) 512393)
0xa04: Push((int) 13559)
0xa05: Push((int) 13554)
0xa06: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa07: Pop(3)
0xa08: Push((int) 512394)
0xa09: Push((int) 13557)
0xa0a: Push((int) 13555)
0xa0b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa0c: Pop(3)
0xa0d: Push((int) 512395)
0xa0e: Push((int) 13558)
0xa0f: Push((int) 13556)
0xa10: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa11: Pop(3)
0xa12: Return(); Pop(0)

0xa13: Push((int) 13558)
0xa14: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa15: IF (Stack[-1] == 0) GOTO 0xa25; Pop(1)

0xa16: PushEmpty(string)
0xa17: Stack[-1] = "Neutral"
0xa18: Call2 0x8f4

0xa19: Pop(1)
0xa1a: Push((int) 512397)
0xa1b: @@ SetMessage(Stack[-1])
0xa1c: Pop(1)
0xa1d: @@ ClearReplies()
0xa1e: Pop(0)
0xa1f: Push((int) 512403)
0xa20: Push((int) 13565)
0xa21: Push((int) 13564)
0xa22: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa23: Pop(3)
0xa24: Return(); Pop(0)

0xa25: Push((int) 13557)
0xa26: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa27: IF (Stack[-1] == 0) GOTO 0xa37; Pop(1)

0xa28: PushEmpty(string)
0xa29: Stack[-1] = "Neutral"
0xa2a: Call2 0x8f4

0xa2b: Pop(1)
0xa2c: Push((int) 512396)
0xa2d: @@ SetMessage(Stack[-1])
0xa2e: Pop(1)
0xa2f: @@ ClearReplies()
0xa30: Pop(0)
0xa31: Push((int) 512402)
0xa32: Push((int) 13565)
0xa33: Push((int) 13563)
0xa34: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa35: Pop(3)
0xa36: Return(); Pop(0)

0xa37: Push((int) 13559)
0xa38: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa39: IF (Stack[-1] == 0) GOTO 0xa49; Pop(1)

0xa3a: PushEmpty(string)
0xa3b: Stack[-1] = "Neutral"
0xa3c: Call2 0x8f4

0xa3d: Pop(1)
0xa3e: Push((int) 512398)
0xa3f: @@ SetMessage(Stack[-1])
0xa40: Pop(1)
0xa41: @@ ClearReplies()
0xa42: Pop(0)
0xa43: Push((int) 512399)
0xa44: Push((int) 13561)
0xa45: Push((int) 13560)
0xa46: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa47: Pop(3)
0xa48: Return(); Pop(0)

0xa49: Push((int) 13561)
0xa4a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa4b: IF (Stack[-1] == 0) GOTO 0xa5b; Pop(1)

0xa4c: PushEmpty(string)
0xa4d: Stack[-1] = "Neutral"
0xa4e: Call2 0x8f4

0xa4f: Pop(1)
0xa50: Push((int) 512400)
0xa51: @@ SetMessage(Stack[-1])
0xa52: Pop(1)
0xa53: @@ ClearReplies()
0xa54: Pop(0)
0xa55: Push((int) 512401)
0xa56: Push((int) 13565)
0xa57: Push((int) 13562)
0xa58: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa59: Pop(3)
0xa5a: Return(); Pop(0)

0xa5b: Push((int) 13565)
0xa5c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa5d: IF (Stack[-1] == 0) GOTO 0xa72; Pop(1)

0xa5e: PushEmpty(string)
0xa5f: Stack[-1] = "Neutral"
0xa60: Call2 0x8f4

0xa61: Pop(1)
0xa62: Push((int) 512404)
0xa63: @@ SetMessage(Stack[-1])
0xa64: Pop(1)
0xa65: @@ ClearReplies()
0xa66: Pop(0)
0xa67: Push((int) 512405)
0xa68: Push((int) 13570)
0xa69: Push((int) 13568)
0xa6a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa6b: Pop(3)
0xa6c: Push((int) 512406)
0xa6d: Push((int) 13570)
0xa6e: Push((int) 13569)
0xa6f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa70: Pop(3)
0xa71: Return(); Pop(0)

0xa72: Push((int) 13570)
0xa73: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa74: IF (Stack[-1] == 0) GOTO 0xa84; Pop(1)

0xa75: PushEmpty(string)
0xa76: Stack[-1] = "Neutral"
0xa77: Call2 0x8f4

0xa78: Pop(1)
0xa79: Push((int) 512407)
0xa7a: @@ SetMessage(Stack[-1])
0xa7b: Pop(1)
0xa7c: @@ ClearReplies()
0xa7d: Pop(0)
0xa7e: Push((int) 512408)
0xa7f: Push((int) -1)
0xa80: Push((int) 13572)
0xa81: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa82: Pop(3)
0xa83: Return(); Pop(0)

0xa84: Push((int) 14898)
0xa85: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa86: IF (Stack[-1] == 0) GOTO 0xa96; Pop(1)

0xa87: PushEmpty(string)
0xa88: Stack[-1] = "Neutral"
0xa89: Call2 0x8f4

0xa8a: Pop(1)
0xa8b: Push((int) 513642)
0xa8c: @@ SetMessage(Stack[-1])
0xa8d: Pop(1)
0xa8e: @@ ClearReplies()
0xa8f: Pop(0)
0xa90: Push((int) 513643)
0xa91: Push((int) 14900)
0xa92: Push((int) 14899)
0xa93: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa94: Pop(3)
0xa95: Return(); Pop(0)

0xa96: Push((int) 14900)
0xa97: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa98: IF (Stack[-1] == 0) GOTO 0xaa8; Pop(1)

0xa99: PushEmpty(string)
0xa9a: Stack[-1] = "Neutral"
0xa9b: Call2 0x8f4

0xa9c: Pop(1)
0xa9d: Push((int) 513644)
0xa9e: @@ SetMessage(Stack[-1])
0xa9f: Pop(1)
0xaa0: @@ ClearReplies()
0xaa1: Pop(0)
0xaa2: Push((int) 513645)
0xaa3: Push((int) 14902)
0xaa4: Push((int) 14901)
0xaa5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaa6: Pop(3)
0xaa7: Return(); Pop(0)

0xaa8: Push((int) 14902)
0xaa9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaaa: IF (Stack[-1] == 0) GOTO 0xabf; Pop(1)

0xaab: PushEmpty(string)
0xaac: Stack[-1] = "Neutral"
0xaad: Call2 0x8f4

0xaae: Pop(1)
0xaaf: Push((int) 513646)
0xab0: @@ SetMessage(Stack[-1])
0xab1: Pop(1)
0xab2: @@ ClearReplies()
0xab3: Pop(0)
0xab4: Push((int) 513647)
0xab5: Push((int) 14904)
0xab6: Push((int) 14903)
0xab7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xab8: Pop(3)
0xab9: Push((int) 513649)
0xaba: Push((int) 14906)
0xabb: Push((int) 14905)
0xabc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xabd: Pop(3)
0xabe: Return(); Pop(0)

0xabf: Push((int) 14906)
0xac0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xac1: IF (Stack[-1] == 0) GOTO 0xad1; Pop(1)

0xac2: PushEmpty(string)
0xac3: Stack[-1] = "Neutral"
0xac4: Call2 0x8f4

0xac5: Pop(1)
0xac6: Push((int) 513650)
0xac7: @@ SetMessage(Stack[-1])
0xac8: Pop(1)
0xac9: @@ ClearReplies()
0xaca: Pop(0)
0xacb: Push((int) 513652)
0xacc: Push((int) 40376)
0xacd: Push((int) 14908)
0xace: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xacf: Pop(3)
0xad0: Return(); Pop(0)

0xad1: Push((int) 40376)
0xad2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xad3: IF (Stack[-1] == 0) GOTO 0xae3; Pop(1)

0xad4: PushEmpty(string)
0xad5: Stack[-1] = "Neutral"
0xad6: Call2 0x8f4

0xad7: Pop(1)
0xad8: Push((int) 538490)
0xad9: @@ SetMessage(Stack[-1])
0xada: Pop(1)
0xadb: @@ ClearReplies()
0xadc: Pop(0)
0xadd: Push((int) 538491)
0xade: Push((int) -1)
0xadf: Push((int) 40377)
0xae0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xae1: Pop(3)
0xae2: Return(); Pop(0)

0xae3: Push((int) 14904)
0xae4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xae5: IF (Stack[-1] == 0) GOTO 0xafa; Pop(1)

0xae6: PushEmpty(string)
0xae7: Stack[-1] = "Neutral"
0xae8: Call2 0x8f4

0xae9: Pop(1)
0xaea: Push((int) 513648)
0xaeb: @@ SetMessage(Stack[-1])
0xaec: Pop(1)
0xaed: @@ ClearReplies()
0xaee: Pop(0)
0xaef: Push((int) 513651)
0xaf0: Push((int) 14909)
0xaf1: Push((int) 14907)
0xaf2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaf3: Pop(3)
0xaf4: Push((int) 513655)
0xaf5: Push((int) 14913)
0xaf6: Push((int) 14912)
0xaf7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaf8: Pop(3)
0xaf9: Return(); Pop(0)

0xafa: Push((int) 14913)
0xafb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xafc: IF (Stack[-1] == 0) GOTO 0xb0c; Pop(1)

0xafd: PushEmpty(string)
0xafe: Stack[-1] = "Neutral"
0xaff: Call2 0x8f4

0xb00: Pop(1)
0xb01: Push((int) 513656)
0xb02: @@ SetMessage(Stack[-1])
0xb03: Pop(1)
0xb04: @@ ClearReplies()
0xb05: Pop(0)
0xb06: Push((int) 513657)
0xb07: Push((int) 14909)
0xb08: Push((int) 14914)
0xb09: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb0a: Pop(3)
0xb0b: Return(); Pop(0)

0xb0c: Push((int) 14909)
0xb0d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb0e: IF (Stack[-1] == 0) GOTO 0xb23; Pop(1)

0xb0f: PushEmpty(string)
0xb10: Stack[-1] = "Neutral"
0xb11: Call2 0x8f4

0xb12: Pop(1)
0xb13: Push((int) 513653)
0xb14: @@ SetMessage(Stack[-1])
0xb15: Pop(1)
0xb16: @@ ClearReplies()
0xb17: Pop(0)
0xb18: Push((int) 513654)
0xb19: Push((int) -1)
0xb1a: Push((int) 14911)
0xb1b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb1c: Pop(3)
0xb1d: Push((int) 538492)
0xb1e: Push((int) -1)
0xb1f: Push((int) 40378)
0xb20: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb21: Pop(3)
0xb22: Return(); Pop(0)

0xb23: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xb24: PushEmpty(bool)
0xb25: Call2 0x13bd

0xb26: Pop(0)
0xb27: IF (Stack[-1] == 0) GOTO 0xb2b; Pop(1)

0xb28: @ lshStopAnimation()
0xb29: Pop(0)
0xb2a: GOTO 0xb2d

0xb2b: @ StopAnimation()
0xb2c: Pop(0)
0xb2d: Return(); Pop(0)

0xb2e: GOTO 0x90b

0xb2f: Return(); Pop(0)

0xb30: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xb31: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xb32: PushEmpty(bool, object, float)
0xb33: Stack[-2] = Stack[-12]
0xb34: Stack[-1] = (float) 70.0
0xb35: Call2 0x1226

0xb36: Pop(2)
0xb37: Pop(1); Push((bool) Stack[-1] == 0)
0xb38: IF (Stack[-1] == 0) GOTO 0xb3b; Pop(1)

0xb39: Stack[-10] = (int) -2
0xb3a: Return(); Pop(8)

0xb3b: @ CreateDialog(Stack[-4])
0xb3c: Pop(0)
0xb3d: PushEmpty(int)
0xb3e: Call2 0x13b7

0xb3f: Pop(0)
0xb40: @@ SetNPCName(Stack[-1])
0xb41: Pop(1)
0xb42: PushEmpty(int)
0xb43: Call2 0x13b5

0xb44: Pop(0)
0xb45: @@ SetNPCDescription(Stack[-1])
0xb46: Pop(1)
0xb47: PushEmpty(string)
0xb48: Call2 0x13b9

0xb49: Pop(0)
0xb4a: @@ SetPhoto(Stack[-1])
0xb4b: Pop(1)
0xb4c: PushEmpty(string)
0xb4d: Call2 0x13bb

0xb4e: Pop(0)
0xb4f: @@ SetPhoto2(Stack[-1])
0xb50: Pop(1)
0xb51: PushEmpty(int)
0xb52: Call2 0x16a5

0xb53: Pop(0)
0xb54: @@ SetPlayerName(Stack[-1])
0xb55: Pop(1)
0xb56: Stack[-2] = (int) -1
0xb57: @ IsOverrideActive(Stack[-3])
0xb58: Pop(0)
0xb59: Push(Stack[-3])
0xb5a: IF (Stack[-1] == 0) GOTO 0xb5d; Pop(1)

0xb5b: Stack[-10] = (int) -2
0xb5c: Return(); Pop(8)

0xb5d: @ DoDialog(Stack[-4])
0xb5e: Pop(0)
0xb5f: PushEmpty(bool, object)
0xb60: PushEmpty(object)
0xb61: Call2 0x133c

0xb62: Stack[-2] = Stack[-1]
0xb63: Pop(1)
0xb64: Call2 0x127d

0xb65: Pop(2)
0xb66: PushEmpty(object, object)
0xb67: Stack[-2] = Stack[-11]
0xb68: Stack[-1] = Stack[-6]
0xb69: Push(-2, 4); TaskCall(9)
0xb6a: Call2 0xb81

0xb6b: Pop(-2, 4); TaskReturn
0xb6c: Pop(2)
0xb6d: @@ IsDialogEnd(Stack[-1])
0xb6e: Pop(0)
0xb6f: Pop(0); Push((bool) Stack[-1] == 0)
0xb70: IF (Stack[-1] == 0) GOTO 0xb76; Pop(1)

0xb71: @ sync()
0xb72: Pop(0)
0xb73: @@ IsDialogEnd(Stack[-1])
0xb74: Pop(0)
0xb75: GOTO 0xb6f

0xb76: PushEmpty(object)
0xb77: Stack[-1] = Stack[-10]
0xb78: Call2 0x126b

0xb79: Pop(1)
0xb7a: @ StopDialog(Stack[-4])
0xb7b: Pop(0)
0xb7c: @@ GetReturnValue(Stack[-2])
0xb7d: Pop(0)
0xb7e: Stack[-10] = Stack[-2]
0xb7f: Return(); Pop(8)

0xb80: Stack[-4] = 0
0xb81: PushEmpty()
0xb82: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xb83: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xb84: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xb85: Push((int) 1)
0xb86: IF (Stack[-1] == 0) GOTO 0xba2; Pop(1)

0xb87: PushEmpty(string)
0xb88: Stack[-1] = "Neutral"
0xb89: Call2 0xbc0

0xb8a: Pop(1)
0xb8b: Push((int) 520784)
0xb8c: @@ SetMessage(Stack[-1])
0xb8d: Pop(1)
0xb8e: @@ ClearReplies()
0xb8f: Pop(0)
0xb90: Push((int) 520785)
0xb91: Push((int) 22000)
0xb92: Push((int) 21999)
0xb93: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb94: Pop(3)
0xb95: Push((int) 520792)
0xb96: Push((int) 22008)
0xb97: Push((int) 22007)
0xb98: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb99: Pop(3)
0xb9a: Push((int) 520796)
0xb9b: Push((int) 22014)
0xb9c: Push((int) 22013)
0xb9d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb9e: Pop(3)
0xb9f: GOTO 0xba2

0xba0: Return(); Pop(0)

0xba1: GOTO 0xb85

0xba2: PushEmpty(bool)
0xba3: Call2 0x13bd

0xba4: Pop(0)
0xba5: IF (Stack[-1] == 0) GOTO 0xbb1; Pop(1)

0xba6: @ lshWaitForAnimEnd()
0xba7: Pop(0)
0xba8: Push( Stack[3 + Tasks[-1].StackPointer] )
0xba9: IF (Stack[-1] == 0) GOTO 0xbab; Pop(1)

0xbaa: GOTO 0xbb0

0xbab: PushEmpty(string)
0xbac: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xbad: Call2 0x1307

0xbae: Pop(1)
0xbaf: GOTO 0xba6

0xbb0: GOTO 0xbbf

0xbb1: Push("all")
0xbb2: Push("idle")
0xbb3: @ PlayAnimation(Stack[-2], Stack[-1])
0xbb4: Pop(2)
0xbb5: @ WaitForAnimEnd()
0xbb6: Pop(0)
0xbb7: Push( Stack[3 + Tasks[-1].StackPointer] )
0xbb8: IF (Stack[-1] == 0) GOTO 0xbba; Pop(1)

0xbb9: GOTO 0xbbf

0xbba: Push("all")
0xbbb: Push("idle")
0xbbc: @ PlayAnimation(Stack[-2], Stack[-1])
0xbbd: Pop(2)
0xbbe: GOTO 0xbb5

0xbbf: Return(); Pop(0)

0xbc0: PushEmpty()
0xbc1: PushEmpty(bool)
0xbc2: Call2 0x13bd

0xbc3: Pop(0)
0xbc4: Pop(1); Push((bool) Stack[-1] == 0)
0xbc5: IF (Stack[-1] == 0) GOTO 0xbc7; Pop(1)

0xbc6: Return(); Pop(0)

0xbc7: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xbc8: IF (Stack[-1] == 0) GOTO 0xbca; Pop(1)

0xbc9: Return(); Pop(0)

0xbca: PushEmpty(string, bool)
0xbcb: Stack[-2] = Stack[-3]
0xbcc: Push("")
0xbcd: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xbce: IF (Stack[-1] == 0) GOTO 0xbd1; Pop(1)

0xbcf: Stack[-1] = (bool) 0
0xbd0: GOTO 0xbd2

0xbd1: Stack[-1] = (bool) 1
0xbd2: Call2 0x1317

0xbd3: Pop(2)
0xbd4: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xbd5: Return(); Pop(0)

0xbd6: PushEmpty()
0xbd7: Push((int) 1)
0xbd8: IF (Stack[-1] == 0) GOTO 0xc5b; Pop(1)

0xbd9: PushEmpty()
0xbda: Call2 0x1335

0xbdb: Pop(0)
0xbdc: Push((int) 21998)
0xbdd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbde: IF (Stack[-1] == 0) GOTO 0xbf8; Pop(1)

0xbdf: PushEmpty(string)
0xbe0: Stack[-1] = "Neutral"
0xbe1: Call2 0xbc0

0xbe2: Pop(1)
0xbe3: Push((int) 520784)
0xbe4: @@ SetMessage(Stack[-1])
0xbe5: Pop(1)
0xbe6: @@ ClearReplies()
0xbe7: Pop(0)
0xbe8: Push((int) 520785)
0xbe9: Push((int) 22000)
0xbea: Push((int) 21999)
0xbeb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbec: Pop(3)
0xbed: Push((int) 520792)
0xbee: Push((int) 22008)
0xbef: Push((int) 22007)
0xbf0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbf1: Pop(3)
0xbf2: Push((int) 520796)
0xbf3: Push((int) 22014)
0xbf4: Push((int) 22013)
0xbf5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbf6: Pop(3)
0xbf7: Return(); Pop(0)

0xbf8: Push((int) 22014)
0xbf9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbfa: IF (Stack[-1] == 0) GOTO 0xc0a; Pop(1)

0xbfb: PushEmpty(string)
0xbfc: Stack[-1] = "Neutral"
0xbfd: Call2 0xbc0

0xbfe: Pop(1)
0xbff: Push((int) 520797)
0xc00: @@ SetMessage(Stack[-1])
0xc01: Pop(1)
0xc02: @@ ClearReplies()
0xc03: Pop(0)
0xc04: Push((int) 520798)
0xc05: Push((int) -1)
0xc06: Push((int) 22015)
0xc07: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc08: Pop(3)
0xc09: Return(); Pop(0)

0xc0a: Push((int) 22008)
0xc0b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc0c: IF (Stack[-1] == 0) GOTO 0xc21; Pop(1)

0xc0d: PushEmpty(string)
0xc0e: Stack[-1] = "Neutral"
0xc0f: Call2 0xbc0

0xc10: Pop(1)
0xc11: Push((int) 520793)
0xc12: @@ SetMessage(Stack[-1])
0xc13: Pop(1)
0xc14: @@ ClearReplies()
0xc15: Pop(0)
0xc16: Push((int) 520794)
0xc17: Push((int) 22000)
0xc18: Push((int) 22009)
0xc19: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc1a: Pop(3)
0xc1b: Push((int) 520795)
0xc1c: Push((int) 22000)
0xc1d: Push((int) 22011)
0xc1e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc1f: Pop(3)
0xc20: Return(); Pop(0)

0xc21: Push((int) 22000)
0xc22: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc23: IF (Stack[-1] == 0) GOTO 0xc38; Pop(1)

0xc24: PushEmpty(string)
0xc25: Stack[-1] = "Neutral"
0xc26: Call2 0xbc0

0xc27: Pop(1)
0xc28: Push((int) 520786)
0xc29: @@ SetMessage(Stack[-1])
0xc2a: Pop(1)
0xc2b: @@ ClearReplies()
0xc2c: Pop(0)
0xc2d: Push((int) 520787)
0xc2e: Push((int) 22002)
0xc2f: Push((int) 22001)
0xc30: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc31: Pop(3)
0xc32: Push((int) 520791)
0xc33: Push((int) 22002)
0xc34: Push((int) 22005)
0xc35: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc36: Pop(3)
0xc37: Return(); Pop(0)

0xc38: Push((int) 22002)
0xc39: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc3a: IF (Stack[-1] == 0) GOTO 0xc4f; Pop(1)

0xc3b: PushEmpty(string)
0xc3c: Stack[-1] = "Neutral"
0xc3d: Call2 0xbc0

0xc3e: Pop(1)
0xc3f: Push((int) 520788)
0xc40: @@ SetMessage(Stack[-1])
0xc41: Pop(1)
0xc42: @@ ClearReplies()
0xc43: Pop(0)
0xc44: Push((int) 520789)
0xc45: Push((int) -1)
0xc46: Push((int) 22003)
0xc47: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc48: Pop(3)
0xc49: Push((int) 520790)
0xc4a: Push((int) -1)
0xc4b: Push((int) 22004)
0xc4c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc4d: Pop(3)
0xc4e: Return(); Pop(0)

0xc4f: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xc50: PushEmpty(bool)
0xc51: Call2 0x13bd

0xc52: Pop(0)
0xc53: IF (Stack[-1] == 0) GOTO 0xc57; Pop(1)

0xc54: @ lshStopAnimation()
0xc55: Pop(0)
0xc56: GOTO 0xc59

0xc57: @ StopAnimation()
0xc58: Pop(0)
0xc59: Return(); Pop(0)

0xc5a: GOTO 0xbd7

0xc5b: Return(); Pop(0)

0xc5c: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xc5d: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xc5e: PushEmpty(bool, object, float)
0xc5f: Stack[-2] = Stack[-12]
0xc60: Stack[-1] = (float) 70.0
0xc61: Call2 0x1226

0xc62: Pop(2)
0xc63: Pop(1); Push((bool) Stack[-1] == 0)
0xc64: IF (Stack[-1] == 0) GOTO 0xc67; Pop(1)

0xc65: Stack[-10] = (int) -2
0xc66: Return(); Pop(8)

0xc67: @ CreateDialog(Stack[-4])
0xc68: Pop(0)
0xc69: PushEmpty(int)
0xc6a: Call2 0x13b7

0xc6b: Pop(0)
0xc6c: @@ SetNPCName(Stack[-1])
0xc6d: Pop(1)
0xc6e: PushEmpty(int)
0xc6f: Call2 0x13b5

0xc70: Pop(0)
0xc71: @@ SetNPCDescription(Stack[-1])
0xc72: Pop(1)
0xc73: PushEmpty(string)
0xc74: Call2 0x13b9

0xc75: Pop(0)
0xc76: @@ SetPhoto(Stack[-1])
0xc77: Pop(1)
0xc78: PushEmpty(string)
0xc79: Call2 0x13bb

0xc7a: Pop(0)
0xc7b: @@ SetPhoto2(Stack[-1])
0xc7c: Pop(1)
0xc7d: PushEmpty(int)
0xc7e: Call2 0x16a5

0xc7f: Pop(0)
0xc80: @@ SetPlayerName(Stack[-1])
0xc81: Pop(1)
0xc82: Stack[-2] = (int) -1
0xc83: @ IsOverrideActive(Stack[-3])
0xc84: Pop(0)
0xc85: Push(Stack[-3])
0xc86: IF (Stack[-1] == 0) GOTO 0xc89; Pop(1)

0xc87: Stack[-10] = (int) -2
0xc88: Return(); Pop(8)

0xc89: @ DoDialog(Stack[-4])
0xc8a: Pop(0)
0xc8b: PushEmpty(bool, object)
0xc8c: PushEmpty(object)
0xc8d: Call2 0x133c

0xc8e: Stack[-2] = Stack[-1]
0xc8f: Pop(1)
0xc90: Call2 0x127d

0xc91: Pop(2)
0xc92: PushEmpty(object, object)
0xc93: Stack[-2] = Stack[-11]
0xc94: Stack[-1] = Stack[-6]
0xc95: Push(-2, 4); TaskCall(11)
0xc96: Call2 0xcad

0xc97: Pop(-2, 4); TaskReturn
0xc98: Pop(2)
0xc99: @@ IsDialogEnd(Stack[-1])
0xc9a: Pop(0)
0xc9b: Pop(0); Push((bool) Stack[-1] == 0)
0xc9c: IF (Stack[-1] == 0) GOTO 0xca2; Pop(1)

0xc9d: @ sync()
0xc9e: Pop(0)
0xc9f: @@ IsDialogEnd(Stack[-1])
0xca0: Pop(0)
0xca1: GOTO 0xc9b

0xca2: PushEmpty(object)
0xca3: Stack[-1] = Stack[-10]
0xca4: Call2 0x126b

0xca5: Pop(1)
0xca6: @ StopDialog(Stack[-4])
0xca7: Pop(0)
0xca8: @@ GetReturnValue(Stack[-2])
0xca9: Pop(0)
0xcaa: Stack[-10] = Stack[-2]
0xcab: Return(); Pop(8)

0xcac: Stack[-4] = 0
0xcad: PushEmpty()
0xcae: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xcaf: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xcb0: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xcb1: Push((int) 1)
0xcb2: IF (Stack[-1] == 0) GOTO 0xcfe; Pop(1)

0xcb3: PushEmpty(bool)
0xcb4: Stack[-1] = (bool) 0
0xcb5: PushEmpty(bool, object)
0xcb6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcb7: Call2 0x14c5

0xcb8: Pop(1)
0xcb9: IF (Stack[-1] == 0) GOTO 0xcc0; Pop(1)

0xcba: PushEmpty(bool, object)
0xcbb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcbc: Call2 0x14dd

0xcbd: Pop(1)
0xcbe: IF (Stack[-1] == 0) GOTO 0xcc0; Pop(1)

0xcbf: Stack[-1] = (bool) 1
0xcc0: IF (Stack[-1] == 0) GOTO 0xcda; Pop(1)

0xcc1: PushEmpty(object, object)
0xcc2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcc3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcc4: Call2 0x13cc

0xcc5: Pop(2)
0xcc6: PushEmpty(string)
0xcc7: Stack[-1] = "Neutral"
0xcc8: Call2 0xd1c

0xcc9: Pop(1)
0xcca: Push((int) 532352)
0xccb: @@ SetMessage(Stack[-1])
0xccc: Pop(1)
0xccd: @@ ClearReplies()
0xcce: Pop(0)
0xccf: Push((int) 532353)
0xcd0: Push((int) 33783)
0xcd1: Push((int) 33782)
0xcd2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcd3: Pop(3)
0xcd4: Push((int) 532386)
0xcd5: Push((int) 33825)
0xcd6: Push((int) 33824)
0xcd7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcd8: Pop(3)
0xcd9: GOTO 0xcfe

0xcda: PushEmpty(string)
0xcdb: Stack[-1] = "Neutral"
0xcdc: Call2 0xd1c

0xcdd: Pop(1)
0xcde: Push((int) 532393)
0xcdf: @@ SetMessage(Stack[-1])
0xce0: Pop(1)
0xce1: @@ ClearReplies()
0xce2: Pop(0)
0xce3: PushEmpty(bool)
0xce4: Stack[-1] = (bool) 0
0xce5: PushEmpty(bool, object)
0xce6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xce7: Call2 0x14d1

0xce8: Pop(1)
0xce9: IF (Stack[-1] == 0) GOTO 0xcf0; Pop(1)

0xcea: PushEmpty(bool, object)
0xceb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcec: Call2 0x15cd

0xced: Pop(1)
0xcee: IF (Stack[-1] == 0) GOTO 0xcf0; Pop(1)

0xcef: Stack[-1] = (bool) 1
0xcf0: IF (Stack[-1] == 0) GOTO 0xcf6; Pop(1)

0xcf1: Push((int) 532394)
0xcf2: Push((int) 33836)
0xcf3: Push((int) 33835)
0xcf4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcf5: Pop(3)
0xcf6: Push((int) 532453)
0xcf7: Push((int) -1)
0xcf8: Push((int) 33895)
0xcf9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcfa: Pop(3)
0xcfb: GOTO 0xcfe

0xcfc: Return(); Pop(0)

0xcfd: GOTO 0xcb1

0xcfe: PushEmpty(bool)
0xcff: Call2 0x13bd

0xd00: Pop(0)
0xd01: IF (Stack[-1] == 0) GOTO 0xd0d; Pop(1)

0xd02: @ lshWaitForAnimEnd()
0xd03: Pop(0)
0xd04: Push( Stack[3 + Tasks[-1].StackPointer] )
0xd05: IF (Stack[-1] == 0) GOTO 0xd07; Pop(1)

0xd06: GOTO 0xd0c

0xd07: PushEmpty(string)
0xd08: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xd09: Call2 0x1307

0xd0a: Pop(1)
0xd0b: GOTO 0xd02

0xd0c: GOTO 0xd1b

0xd0d: Push("all")
0xd0e: Push("idle")
0xd0f: @ PlayAnimation(Stack[-2], Stack[-1])
0xd10: Pop(2)
0xd11: @ WaitForAnimEnd()
0xd12: Pop(0)
0xd13: Push( Stack[3 + Tasks[-1].StackPointer] )
0xd14: IF (Stack[-1] == 0) GOTO 0xd16; Pop(1)

0xd15: GOTO 0xd1b

0xd16: Push("all")
0xd17: Push("idle")
0xd18: @ PlayAnimation(Stack[-2], Stack[-1])
0xd19: Pop(2)
0xd1a: GOTO 0xd11

0xd1b: Return(); Pop(0)

0xd1c: PushEmpty()
0xd1d: PushEmpty(bool)
0xd1e: Call2 0x13bd

0xd1f: Pop(0)
0xd20: Pop(1); Push((bool) Stack[-1] == 0)
0xd21: IF (Stack[-1] == 0) GOTO 0xd23; Pop(1)

0xd22: Return(); Pop(0)

0xd23: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xd24: IF (Stack[-1] == 0) GOTO 0xd26; Pop(1)

0xd25: Return(); Pop(0)

0xd26: PushEmpty(string, bool)
0xd27: Stack[-2] = Stack[-3]
0xd28: Push("")
0xd29: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xd2a: IF (Stack[-1] == 0) GOTO 0xd2d; Pop(1)

0xd2b: Stack[-1] = (bool) 0
0xd2c: GOTO 0xd2e

0xd2d: Stack[-1] = (bool) 1
0xd2e: Call2 0x1317

0xd2f: Pop(2)
0xd30: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xd31: Return(); Pop(0)

0xd32: PushEmpty()
0xd33: Push((int) 1)
0xd34: IF (Stack[-1] == 0) GOTO 0xf34; Pop(1)

0xd35: PushEmpty()
0xd36: Call2 0x1335

0xd37: Pop(0)
0xd38: Push((int) 33796)
0xd39: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd3a: IF (Stack[-1] == 0) GOTO 0xd40; Pop(1)

0xd3b: PushEmpty(object, object)
0xd3c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd3d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd3e: Call2 0x13bf

0xd3f: Pop(2)
0xd40: Push((int) 33811)
0xd41: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd42: IF (Stack[-1] == 0) GOTO 0xd48; Pop(1)

0xd43: PushEmpty(object, object)
0xd44: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd45: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd46: Call2 0x13d2

0xd47: Pop(2)
0xd48: Push((int) 33835)
0xd49: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd4a: IF (Stack[-1] == 0) GOTO 0xd50; Pop(1)

0xd4b: PushEmpty(object, object)
0xd4c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd4d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd4e: Call2 0x13c6

0xd4f: Pop(2)
0xd50: Push((int) 33781)
0xd51: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd52: IF (Stack[-1] == 0) GOTO 0xd9c; Pop(1)

0xd53: PushEmpty(bool)
0xd54: Stack[-1] = (bool) 0
0xd55: PushEmpty(bool, object)
0xd56: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd57: Call2 0x14c5

0xd58: Pop(1)
0xd59: IF (Stack[-1] == 0) GOTO 0xd60; Pop(1)

0xd5a: PushEmpty(bool, object)
0xd5b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd5c: Call2 0x14dd

0xd5d: Pop(1)
0xd5e: IF (Stack[-1] == 0) GOTO 0xd60; Pop(1)

0xd5f: Stack[-1] = (bool) 1
0xd60: IF (Stack[-1] == 0) GOTO 0xd7a; Pop(1)

0xd61: PushEmpty(object, object)
0xd62: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd63: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd64: Call2 0x13cc

0xd65: Pop(2)
0xd66: PushEmpty(string)
0xd67: Stack[-1] = "Neutral"
0xd68: Call2 0xd1c

0xd69: Pop(1)
0xd6a: Push((int) 532352)
0xd6b: @@ SetMessage(Stack[-1])
0xd6c: Pop(1)
0xd6d: @@ ClearReplies()
0xd6e: Pop(0)
0xd6f: Push((int) 532353)
0xd70: Push((int) 33783)
0xd71: Push((int) 33782)
0xd72: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd73: Pop(3)
0xd74: Push((int) 532386)
0xd75: Push((int) 33825)
0xd76: Push((int) 33824)
0xd77: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd78: Pop(3)
0xd79: Return(); Pop(0)

0xd7a: PushEmpty(string)
0xd7b: Stack[-1] = "Neutral"
0xd7c: Call2 0xd1c

0xd7d: Pop(1)
0xd7e: Push((int) 532393)
0xd7f: @@ SetMessage(Stack[-1])
0xd80: Pop(1)
0xd81: @@ ClearReplies()
0xd82: Pop(0)
0xd83: PushEmpty(bool)
0xd84: Stack[-1] = (bool) 0
0xd85: PushEmpty(bool, object)
0xd86: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd87: Call2 0x14d1

0xd88: Pop(1)
0xd89: IF (Stack[-1] == 0) GOTO 0xd90; Pop(1)

0xd8a: PushEmpty(bool, object)
0xd8b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd8c: Call2 0x15cd

0xd8d: Pop(1)
0xd8e: IF (Stack[-1] == 0) GOTO 0xd90; Pop(1)

0xd8f: Stack[-1] = (bool) 1
0xd90: IF (Stack[-1] == 0) GOTO 0xd96; Pop(1)

0xd91: Push((int) 532394)
0xd92: Push((int) 33836)
0xd93: Push((int) 33835)
0xd94: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd95: Pop(3)
0xd96: Push((int) 532453)
0xd97: Push((int) -1)
0xd98: Push((int) 33895)
0xd99: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd9a: Pop(3)
0xd9b: Return(); Pop(0)

0xd9c: Push((int) 33836)
0xd9d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd9e: IF (Stack[-1] == 0) GOTO 0xdb8; Pop(1)

0xd9f: PushEmpty(string)
0xda0: Stack[-1] = "Strange"
0xda1: Call2 0xd1c

0xda2: Pop(1)
0xda3: Push((int) 532395)
0xda4: @@ SetMessage(Stack[-1])
0xda5: Pop(1)
0xda6: @@ ClearReplies()
0xda7: Pop(0)
0xda8: Push((int) 532396)
0xda9: Push((int) 33838)
0xdaa: Push((int) 33837)
0xdab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdac: Pop(3)
0xdad: Push((int) 532404)
0xdae: Push((int) 33847)
0xdaf: Push((int) 33846)
0xdb0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdb1: Pop(3)
0xdb2: Push((int) 532408)
0xdb3: Push((int) -1)
0xdb4: Push((int) 33850)
0xdb5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdb6: Pop(3)
0xdb7: Return(); Pop(0)

0xdb8: Push((int) 33847)
0xdb9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdba: IF (Stack[-1] == 0) GOTO 0xdcf; Pop(1)

0xdbb: PushEmpty(string)
0xdbc: Stack[-1] = "Neutral"
0xdbd: Call2 0xd1c

0xdbe: Pop(1)
0xdbf: Push((int) 532405)
0xdc0: @@ SetMessage(Stack[-1])
0xdc1: Pop(1)
0xdc2: @@ ClearReplies()
0xdc3: Pop(0)
0xdc4: Push((int) 532406)
0xdc5: Push((int) -1)
0xdc6: Push((int) 33848)
0xdc7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdc8: Pop(3)
0xdc9: Push((int) 532407)
0xdca: Push((int) -1)
0xdcb: Push((int) 33849)
0xdcc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdcd: Pop(3)
0xdce: Return(); Pop(0)

0xdcf: Push((int) 33838)
0xdd0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdd1: IF (Stack[-1] == 0) GOTO 0xdeb; Pop(1)

0xdd2: PushEmpty(string)
0xdd3: Stack[-1] = "Strange"
0xdd4: Call2 0xd1c

0xdd5: Pop(1)
0xdd6: Push((int) 532397)
0xdd7: @@ SetMessage(Stack[-1])
0xdd8: Pop(1)
0xdd9: @@ ClearReplies()
0xdda: Pop(0)
0xddb: Push((int) 532398)
0xddc: Push((int) 33840)
0xddd: Push((int) 33839)
0xdde: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xddf: Pop(3)
0xde0: Push((int) 532402)
0xde1: Push((int) -1)
0xde2: Push((int) 33843)
0xde3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xde4: Pop(3)
0xde5: Push((int) 532403)
0xde6: Push((int) 33840)
0xde7: Push((int) 33844)
0xde8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xde9: Pop(3)
0xdea: Return(); Pop(0)

0xdeb: Push((int) 33840)
0xdec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xded: IF (Stack[-1] == 0) GOTO 0xe02; Pop(1)

0xdee: PushEmpty(string)
0xdef: Stack[-1] = "Neutral"
0xdf0: Call2 0xd1c

0xdf1: Pop(1)
0xdf2: Push((int) 532399)
0xdf3: @@ SetMessage(Stack[-1])
0xdf4: Pop(1)
0xdf5: @@ ClearReplies()
0xdf6: Pop(0)
0xdf7: Push((int) 532400)
0xdf8: Push((int) -1)
0xdf9: Push((int) 33841)
0xdfa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdfb: Pop(3)
0xdfc: Push((int) 532401)
0xdfd: Push((int) -1)
0xdfe: Push((int) 33842)
0xdff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe00: Pop(3)
0xe01: Return(); Pop(0)

0xe02: Push((int) 33825)
0xe03: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe04: IF (Stack[-1] == 0) GOTO 0xe19; Pop(1)

0xe05: PushEmpty(string)
0xe06: Stack[-1] = "Grin"
0xe07: Call2 0xd1c

0xe08: Pop(1)
0xe09: Push((int) 532387)
0xe0a: @@ SetMessage(Stack[-1])
0xe0b: Pop(1)
0xe0c: @@ ClearReplies()
0xe0d: Pop(0)
0xe0e: Push((int) 532388)
0xe0f: Push((int) 33827)
0xe10: Push((int) 33826)
0xe11: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe12: Pop(3)
0xe13: Push((int) 532392)
0xe14: Push((int) 33819)
0xe15: Push((int) 33832)
0xe16: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe17: Pop(3)
0xe18: Return(); Pop(0)

0xe19: Push((int) 33827)
0xe1a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe1b: IF (Stack[-1] == 0) GOTO 0xe30; Pop(1)

0xe1c: PushEmpty(string)
0xe1d: Stack[-1] = "Grin"
0xe1e: Call2 0xd1c

0xe1f: Pop(1)
0xe20: Push((int) 532389)
0xe21: @@ SetMessage(Stack[-1])
0xe22: Pop(1)
0xe23: @@ ClearReplies()
0xe24: Pop(0)
0xe25: Push((int) 532390)
0xe26: Push((int) 33819)
0xe27: Push((int) 33828)
0xe28: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe29: Pop(3)
0xe2a: Push((int) 532391)
0xe2b: Push((int) 33819)
0xe2c: Push((int) 33830)
0xe2d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe2e: Pop(3)
0xe2f: Return(); Pop(0)

0xe30: Push((int) 33783)
0xe31: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe32: IF (Stack[-1] == 0) GOTO 0xe47; Pop(1)

0xe33: PushEmpty(string)
0xe34: Stack[-1] = "Grin"
0xe35: Call2 0xd1c

0xe36: Pop(1)
0xe37: Push((int) 532354)
0xe38: @@ SetMessage(Stack[-1])
0xe39: Pop(1)
0xe3a: @@ ClearReplies()
0xe3b: Pop(0)
0xe3c: Push((int) 532355)
0xe3d: Push((int) 33785)
0xe3e: Push((int) 33784)
0xe3f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe40: Pop(3)
0xe41: Push((int) 532385)
0xe42: Push((int) 33785)
0xe43: Push((int) 33822)
0xe44: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe45: Pop(3)
0xe46: Return(); Pop(0)

0xe47: Push((int) 33785)
0xe48: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe49: IF (Stack[-1] == 0) GOTO 0xe5e; Pop(1)

0xe4a: PushEmpty(string)
0xe4b: Stack[-1] = "Neutral"
0xe4c: Call2 0xd1c

0xe4d: Pop(1)
0xe4e: Push((int) 532356)
0xe4f: @@ SetMessage(Stack[-1])
0xe50: Pop(1)
0xe51: @@ ClearReplies()
0xe52: Pop(0)
0xe53: Push((int) 532357)
0xe54: Push((int) 33787)
0xe55: Push((int) 33786)
0xe56: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe57: Pop(3)
0xe58: Push((int) 532382)
0xe59: Push((int) 33819)
0xe5a: Push((int) 33818)
0xe5b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe5c: Pop(3)
0xe5d: Return(); Pop(0)

0xe5e: Push((int) 33819)
0xe5f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe60: IF (Stack[-1] == 0) GOTO 0xe70; Pop(1)

0xe61: PushEmpty(string)
0xe62: Stack[-1] = "Neutral"
0xe63: Call2 0xd1c

0xe64: Pop(1)
0xe65: Push((int) 532383)
0xe66: @@ SetMessage(Stack[-1])
0xe67: Pop(1)
0xe68: @@ ClearReplies()
0xe69: Pop(0)
0xe6a: Push((int) 532384)
0xe6b: Push((int) 33787)
0xe6c: Push((int) 33820)
0xe6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe6e: Pop(3)
0xe6f: Return(); Pop(0)

0xe70: Push((int) 33787)
0xe71: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe72: IF (Stack[-1] == 0) GOTO 0xe8c; Pop(1)

0xe73: PushEmpty(string)
0xe74: Stack[-1] = "Grin"
0xe75: Call2 0xd1c

0xe76: Pop(1)
0xe77: Push((int) 532358)
0xe78: @@ SetMessage(Stack[-1])
0xe79: Pop(1)
0xe7a: @@ ClearReplies()
0xe7b: Pop(0)
0xe7c: Push((int) 532359)
0xe7d: Push((int) 33789)
0xe7e: Push((int) 33788)
0xe7f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe80: Pop(3)
0xe81: Push((int) 532373)
0xe82: Push((int) 33808)
0xe83: Push((int) 33807)
0xe84: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe85: Pop(3)
0xe86: Push((int) 532379)
0xe87: Push((int) 33815)
0xe88: Push((int) 33814)
0xe89: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe8a: Pop(3)
0xe8b: Return(); Pop(0)

0xe8c: Push((int) 33815)
0xe8d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe8e: IF (Stack[-1] == 0) GOTO 0xe9e; Pop(1)

0xe8f: PushEmpty(string)
0xe90: Stack[-1] = "Neutral"
0xe91: Call2 0xd1c

0xe92: Pop(1)
0xe93: Push((int) 532380)
0xe94: @@ SetMessage(Stack[-1])
0xe95: Pop(1)
0xe96: @@ ClearReplies()
0xe97: Pop(0)
0xe98: Push((int) 532381)
0xe99: Push((int) 33808)
0xe9a: Push((int) 33816)
0xe9b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe9c: Pop(3)
0xe9d: Return(); Pop(0)

0xe9e: Push((int) 33808)
0xe9f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xea0: IF (Stack[-1] == 0) GOTO 0xeb5; Pop(1)

0xea1: PushEmpty(string)
0xea2: Stack[-1] = "Neutral"
0xea3: Call2 0xd1c

0xea4: Pop(1)
0xea5: Push((int) 532374)
0xea6: @@ SetMessage(Stack[-1])
0xea7: Pop(1)
0xea8: @@ ClearReplies()
0xea9: Pop(0)
0xeaa: Push((int) 532375)
0xeab: Push((int) 33810)
0xeac: Push((int) 33809)
0xead: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeae: Pop(3)
0xeaf: Push((int) 532378)
0xeb0: Push((int) 33789)
0xeb1: Push((int) 33812)
0xeb2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeb3: Pop(3)
0xeb4: Return(); Pop(0)

0xeb5: Push((int) 33810)
0xeb6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xeb7: IF (Stack[-1] == 0) GOTO 0xec7; Pop(1)

0xeb8: PushEmpty(string)
0xeb9: Stack[-1] = "Neutral"
0xeba: Call2 0xd1c

0xebb: Pop(1)
0xebc: Push((int) 532376)
0xebd: @@ SetMessage(Stack[-1])
0xebe: Pop(1)
0xebf: @@ ClearReplies()
0xec0: Pop(0)
0xec1: Push((int) 532377)
0xec2: Push((int) -1)
0xec3: Push((int) 33811)
0xec4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xec5: Pop(3)
0xec6: Return(); Pop(0)

0xec7: Push((int) 33789)
0xec8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xec9: IF (Stack[-1] == 0) GOTO 0xee3; Pop(1)

0xeca: PushEmpty(string)
0xecb: Stack[-1] = "Grin"
0xecc: Call2 0xd1c

0xecd: Pop(1)
0xece: Push((int) 532360)
0xecf: @@ SetMessage(Stack[-1])
0xed0: Pop(1)
0xed1: @@ ClearReplies()
0xed2: Pop(0)
0xed3: Push((int) 532361)
0xed4: Push((int) 33795)
0xed5: Push((int) 33790)
0xed6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xed7: Pop(3)
0xed8: Push((int) 532362)
0xed9: Push((int) 33793)
0xeda: Push((int) 33792)
0xedb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xedc: Pop(3)
0xedd: Push((int) 532372)
0xede: Push((int) 33810)
0xedf: Push((int) 33805)
0xee0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xee1: Pop(3)
0xee2: Return(); Pop(0)

0xee3: Push((int) 33793)
0xee4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xee5: IF (Stack[-1] == 0) GOTO 0xefa; Pop(1)

0xee6: PushEmpty(string)
0xee7: Stack[-1] = "Neutral"
0xee8: Call2 0xd1c

0xee9: Pop(1)
0xeea: Push((int) 532363)
0xeeb: @@ SetMessage(Stack[-1])
0xeec: Pop(1)
0xeed: @@ ClearReplies()
0xeee: Pop(0)
0xeef: Push((int) 532364)
0xef0: Push((int) 33795)
0xef1: Push((int) 33794)
0xef2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xef3: Pop(3)
0xef4: Push((int) 532368)
0xef5: Push((int) 33800)
0xef6: Push((int) 33799)
0xef7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xef8: Pop(3)
0xef9: Return(); Pop(0)

0xefa: Push((int) 33800)
0xefb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xefc: IF (Stack[-1] == 0) GOTO 0xf11; Pop(1)

0xefd: PushEmpty(string)
0xefe: Stack[-1] = "Neutral"
0xeff: Call2 0xd1c

0xf00: Pop(1)
0xf01: Push((int) 532369)
0xf02: @@ SetMessage(Stack[-1])
0xf03: Pop(1)
0xf04: @@ ClearReplies()
0xf05: Pop(0)
0xf06: Push((int) 532370)
0xf07: Push((int) 33795)
0xf08: Push((int) 33801)
0xf09: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf0a: Pop(3)
0xf0b: Push((int) 532371)
0xf0c: Push((int) 33810)
0xf0d: Push((int) 33803)
0xf0e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf0f: Pop(3)
0xf10: Return(); Pop(0)

0xf11: Push((int) 33795)
0xf12: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf13: IF (Stack[-1] == 0) GOTO 0xf28; Pop(1)

0xf14: PushEmpty(string)
0xf15: Stack[-1] = "Neutral"
0xf16: Call2 0xd1c

0xf17: Pop(1)
0xf18: Push((int) 532365)
0xf19: @@ SetMessage(Stack[-1])
0xf1a: Pop(1)
0xf1b: @@ ClearReplies()
0xf1c: Pop(0)
0xf1d: Push((int) 532366)
0xf1e: Push((int) -1)
0xf1f: Push((int) 33796)
0xf20: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf21: Pop(3)
0xf22: Push((int) 532367)
0xf23: Push((int) 33810)
0xf24: Push((int) 33797)
0xf25: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf26: Pop(3)
0xf27: Return(); Pop(0)

0xf28: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xf29: PushEmpty(bool)
0xf2a: Call2 0x13bd

0xf2b: Pop(0)
0xf2c: IF (Stack[-1] == 0) GOTO 0xf30; Pop(1)

0xf2d: @ lshStopAnimation()
0xf2e: Pop(0)
0xf2f: GOTO 0xf32

0xf30: @ StopAnimation()
0xf31: Pop(0)
0xf32: Return(); Pop(0)

0xf33: GOTO 0xd33

0xf34: Return(); Pop(0)

0xf35: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xf36: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xf37: PushEmpty(bool, object, float)
0xf38: Stack[-2] = Stack[-12]
0xf39: Stack[-1] = (float) 70.0
0xf3a: Call2 0x1226

0xf3b: Pop(2)
0xf3c: Pop(1); Push((bool) Stack[-1] == 0)
0xf3d: IF (Stack[-1] == 0) GOTO 0xf40; Pop(1)

0xf3e: Stack[-10] = (int) -2
0xf3f: Return(); Pop(8)

0xf40: @ CreateDialog(Stack[-4])
0xf41: Pop(0)
0xf42: PushEmpty(int)
0xf43: Call2 0x13b7

0xf44: Pop(0)
0xf45: @@ SetNPCName(Stack[-1])
0xf46: Pop(1)
0xf47: PushEmpty(int)
0xf48: Call2 0x13b5

0xf49: Pop(0)
0xf4a: @@ SetNPCDescription(Stack[-1])
0xf4b: Pop(1)
0xf4c: PushEmpty(string)
0xf4d: Call2 0x13b9

0xf4e: Pop(0)
0xf4f: @@ SetPhoto(Stack[-1])
0xf50: Pop(1)
0xf51: PushEmpty(string)
0xf52: Call2 0x13bb

0xf53: Pop(0)
0xf54: @@ SetPhoto2(Stack[-1])
0xf55: Pop(1)
0xf56: PushEmpty(int)
0xf57: Call2 0x16a5

0xf58: Pop(0)
0xf59: @@ SetPlayerName(Stack[-1])
0xf5a: Pop(1)
0xf5b: Stack[-2] = (int) -1
0xf5c: @ IsOverrideActive(Stack[-3])
0xf5d: Pop(0)
0xf5e: Push(Stack[-3])
0xf5f: IF (Stack[-1] == 0) GOTO 0xf62; Pop(1)

0xf60: Stack[-10] = (int) -2
0xf61: Return(); Pop(8)

0xf62: @ DoDialog(Stack[-4])
0xf63: Pop(0)
0xf64: PushEmpty(bool, object)
0xf65: PushEmpty(object)
0xf66: Call2 0x133c

0xf67: Stack[-2] = Stack[-1]
0xf68: Pop(1)
0xf69: Call2 0x127d

0xf6a: Pop(2)
0xf6b: PushEmpty(object, object)
0xf6c: Stack[-2] = Stack[-11]
0xf6d: Stack[-1] = Stack[-6]
0xf6e: Push(-2, 4); TaskCall(13)
0xf6f: Call2 0xf86

0xf70: Pop(-2, 4); TaskReturn
0xf71: Pop(2)
0xf72: @@ IsDialogEnd(Stack[-1])
0xf73: Pop(0)
0xf74: Pop(0); Push((bool) Stack[-1] == 0)
0xf75: IF (Stack[-1] == 0) GOTO 0xf7b; Pop(1)

0xf76: @ sync()
0xf77: Pop(0)
0xf78: @@ IsDialogEnd(Stack[-1])
0xf79: Pop(0)
0xf7a: GOTO 0xf74

0xf7b: PushEmpty(object)
0xf7c: Stack[-1] = Stack[-10]
0xf7d: Call2 0x126b

0xf7e: Pop(1)
0xf7f: @ StopDialog(Stack[-4])
0xf80: Pop(0)
0xf81: @@ GetReturnValue(Stack[-2])
0xf82: Pop(0)
0xf83: Stack[-10] = Stack[-2]
0xf84: Return(); Pop(8)

0xf85: Stack[-4] = 0
0xf86: PushEmpty()
0xf87: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xf88: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xf89: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xf8a: Push((int) 1)
0xf8b: IF (Stack[-1] == 0) GOTO 0xfa7; Pop(1)

0xf8c: PushEmpty(string)
0xf8d: Stack[-1] = "Neutral"
0xf8e: Call2 0xfc5

0xf8f: Pop(1)
0xf90: Push((int) 535294)
0xf91: @@ SetMessage(Stack[-1])
0xf92: Pop(1)
0xf93: @@ ClearReplies()
0xf94: Pop(0)
0xf95: Push((int) 535295)
0xf96: Push((int) 36973)
0xf97: Push((int) 36972)
0xf98: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf99: Pop(3)
0xf9a: Push((int) 535302)
0xf9b: Push((int) -1)
0xf9c: Push((int) 36980)
0xf9d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf9e: Pop(3)
0xf9f: Push((int) 535303)
0xfa0: Push((int) -1)
0xfa1: Push((int) 36981)
0xfa2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfa3: Pop(3)
0xfa4: GOTO 0xfa7

0xfa5: Return(); Pop(0)

0xfa6: GOTO 0xf8a

0xfa7: PushEmpty(bool)
0xfa8: Call2 0x13bd

0xfa9: Pop(0)
0xfaa: IF (Stack[-1] == 0) GOTO 0xfb6; Pop(1)

0xfab: @ lshWaitForAnimEnd()
0xfac: Pop(0)
0xfad: Push( Stack[3 + Tasks[-1].StackPointer] )
0xfae: IF (Stack[-1] == 0) GOTO 0xfb0; Pop(1)

0xfaf: GOTO 0xfb5

0xfb0: PushEmpty(string)
0xfb1: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xfb2: Call2 0x1307

0xfb3: Pop(1)
0xfb4: GOTO 0xfab

0xfb5: GOTO 0xfc4

0xfb6: Push("all")
0xfb7: Push("idle")
0xfb8: @ PlayAnimation(Stack[-2], Stack[-1])
0xfb9: Pop(2)
0xfba: @ WaitForAnimEnd()
0xfbb: Pop(0)
0xfbc: Push( Stack[3 + Tasks[-1].StackPointer] )
0xfbd: IF (Stack[-1] == 0) GOTO 0xfbf; Pop(1)

0xfbe: GOTO 0xfc4

0xfbf: Push("all")
0xfc0: Push("idle")
0xfc1: @ PlayAnimation(Stack[-2], Stack[-1])
0xfc2: Pop(2)
0xfc3: GOTO 0xfba

0xfc4: Return(); Pop(0)

0xfc5: PushEmpty()
0xfc6: PushEmpty(bool)
0xfc7: Call2 0x13bd

0xfc8: Pop(0)
0xfc9: Pop(1); Push((bool) Stack[-1] == 0)
0xfca: IF (Stack[-1] == 0) GOTO 0xfcc; Pop(1)

0xfcb: Return(); Pop(0)

0xfcc: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xfcd: IF (Stack[-1] == 0) GOTO 0xfcf; Pop(1)

0xfce: Return(); Pop(0)

0xfcf: PushEmpty(string, bool)
0xfd0: Stack[-2] = Stack[-3]
0xfd1: Push("")
0xfd2: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xfd3: IF (Stack[-1] == 0) GOTO 0xfd6; Pop(1)

0xfd4: Stack[-1] = (bool) 0
0xfd5: GOTO 0xfd7

0xfd6: Stack[-1] = (bool) 1
0xfd7: Call2 0x1317

0xfd8: Pop(2)
0xfd9: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xfda: Return(); Pop(0)

0xfdb: PushEmpty()
0xfdc: Push((int) 1)
0xfdd: IF (Stack[-1] == 0) GOTO 0x1037; Pop(1)

0xfde: PushEmpty()
0xfdf: Call2 0x1335

0xfe0: Pop(0)
0xfe1: Push((int) 36971)
0xfe2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfe3: IF (Stack[-1] == 0) GOTO 0xffd; Pop(1)

0xfe4: PushEmpty(string)
0xfe5: Stack[-1] = "Neutral"
0xfe6: Call2 0xfc5

0xfe7: Pop(1)
0xfe8: Push((int) 535294)
0xfe9: @@ SetMessage(Stack[-1])
0xfea: Pop(1)
0xfeb: @@ ClearReplies()
0xfec: Pop(0)
0xfed: Push((int) 535295)
0xfee: Push((int) 36973)
0xfef: Push((int) 36972)
0xff0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xff1: Pop(3)
0xff2: Push((int) 535302)
0xff3: Push((int) -1)
0xff4: Push((int) 36980)
0xff5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xff6: Pop(3)
0xff7: Push((int) 535303)
0xff8: Push((int) -1)
0xff9: Push((int) 36981)
0xffa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xffb: Pop(3)
0xffc: Return(); Pop(0)

0xffd: Push((int) 36973)
0xffe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfff: IF (Stack[-1] == 0) GOTO 0x1014; Pop(1)

0x1000: PushEmpty(string)
0x1001: Stack[-1] = "Neutral"
0x1002: Call2 0xfc5

0x1003: Pop(1)
0x1004: Push((int) 535296)
0x1005: @@ SetMessage(Stack[-1])
0x1006: Pop(1)
0x1007: @@ ClearReplies()
0x1008: Pop(0)
0x1009: Push((int) 535297)
0x100a: Push((int) 36975)
0x100b: Push((int) 36974)
0x100c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x100d: Pop(3)
0x100e: Push((int) 535301)
0x100f: Push((int) 36975)
0x1010: Push((int) 36978)
0x1011: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1012: Pop(3)
0x1013: Return(); Pop(0)

0x1014: Push((int) 36975)
0x1015: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1016: IF (Stack[-1] == 0) GOTO 0x102b; Pop(1)

0x1017: PushEmpty(string)
0x1018: Stack[-1] = "Neutral"
0x1019: Call2 0xfc5

0x101a: Pop(1)
0x101b: Push((int) 535298)
0x101c: @@ SetMessage(Stack[-1])
0x101d: Pop(1)
0x101e: @@ ClearReplies()
0x101f: Pop(0)
0x1020: Push((int) 535299)
0x1021: Push((int) -1)
0x1022: Push((int) 36976)
0x1023: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1024: Pop(3)
0x1025: Push((int) 535300)
0x1026: Push((int) -1)
0x1027: Push((int) 36977)
0x1028: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1029: Pop(3)
0x102a: Return(); Pop(0)

0x102b: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x102c: PushEmpty(bool)
0x102d: Call2 0x13bd

0x102e: Pop(0)
0x102f: IF (Stack[-1] == 0) GOTO 0x1033; Pop(1)

0x1030: @ lshStopAnimation()
0x1031: Pop(0)
0x1032: GOTO 0x1035

0x1033: @ StopAnimation()
0x1034: Pop(0)
0x1035: Return(); Pop(0)

0x1036: GOTO 0xfdc

0x1037: Return(); Pop(0)

0x1038: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1039: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x103a: PushEmpty(bool, object, float)
0x103b: Stack[-2] = Stack[-12]
0x103c: Stack[-1] = (float) 70.0
0x103d: Call2 0x1226

0x103e: Pop(2)
0x103f: Pop(1); Push((bool) Stack[-1] == 0)
0x1040: IF (Stack[-1] == 0) GOTO 0x1043; Pop(1)

0x1041: Stack[-10] = (int) -2
0x1042: Return(); Pop(8)

0x1043: @ CreateDialog(Stack[-4])
0x1044: Pop(0)
0x1045: PushEmpty(int)
0x1046: Call2 0x13b7

0x1047: Pop(0)
0x1048: @@ SetNPCName(Stack[-1])
0x1049: Pop(1)
0x104a: PushEmpty(int)
0x104b: Call2 0x13b5

0x104c: Pop(0)
0x104d: @@ SetNPCDescription(Stack[-1])
0x104e: Pop(1)
0x104f: PushEmpty(string)
0x1050: Call2 0x13b9

0x1051: Pop(0)
0x1052: @@ SetPhoto(Stack[-1])
0x1053: Pop(1)
0x1054: PushEmpty(string)
0x1055: Call2 0x13bb

0x1056: Pop(0)
0x1057: @@ SetPhoto2(Stack[-1])
0x1058: Pop(1)
0x1059: PushEmpty(int)
0x105a: Call2 0x16a5

0x105b: Pop(0)
0x105c: @@ SetPlayerName(Stack[-1])
0x105d: Pop(1)
0x105e: Stack[-2] = (int) -1
0x105f: @ IsOverrideActive(Stack[-3])
0x1060: Pop(0)
0x1061: Push(Stack[-3])
0x1062: IF (Stack[-1] == 0) GOTO 0x1065; Pop(1)

0x1063: Stack[-10] = (int) -2
0x1064: Return(); Pop(8)

0x1065: @ DoDialog(Stack[-4])
0x1066: Pop(0)
0x1067: PushEmpty(bool, object)
0x1068: PushEmpty(object)
0x1069: Call2 0x133c

0x106a: Stack[-2] = Stack[-1]
0x106b: Pop(1)
0x106c: Call2 0x127d

0x106d: Pop(2)
0x106e: PushEmpty(object, object)
0x106f: Stack[-2] = Stack[-11]
0x1070: Stack[-1] = Stack[-6]
0x1071: Push(-2, 4); TaskCall(15)
0x1072: Call2 0x1089

0x1073: Pop(-2, 4); TaskReturn
0x1074: Pop(2)
0x1075: @@ IsDialogEnd(Stack[-1])
0x1076: Pop(0)
0x1077: Pop(0); Push((bool) Stack[-1] == 0)
0x1078: IF (Stack[-1] == 0) GOTO 0x107e; Pop(1)

0x1079: @ sync()
0x107a: Pop(0)
0x107b: @@ IsDialogEnd(Stack[-1])
0x107c: Pop(0)
0x107d: GOTO 0x1077

0x107e: PushEmpty(object)
0x107f: Stack[-1] = Stack[-10]
0x1080: Call2 0x126b

0x1081: Pop(1)
0x1082: @ StopDialog(Stack[-4])
0x1083: Pop(0)
0x1084: @@ GetReturnValue(Stack[-2])
0x1085: Pop(0)
0x1086: Stack[-10] = Stack[-2]
0x1087: Return(); Pop(8)

0x1088: Stack[-4] = 0
0x1089: PushEmpty()
0x108a: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x108b: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x108c: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x108d: Push((int) 1)
0x108e: IF (Stack[-1] == 0) GOTO 0x10a5; Pop(1)

0x108f: PushEmpty(string)
0x1090: Stack[-1] = "Neutral"
0x1091: Call2 0x10c3

0x1092: Pop(1)
0x1093: Push((int) 540548)
0x1094: @@ SetMessage(Stack[-1])
0x1095: Pop(1)
0x1096: @@ ClearReplies()
0x1097: Pop(0)
0x1098: Push((int) 540549)
0x1099: Push((int) -1)
0x109a: Push((int) 42558)
0x109b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x109c: Pop(3)
0x109d: Push((int) 540797)
0x109e: Push((int) -1)
0x109f: Push((int) 42846)
0x10a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10a1: Pop(3)
0x10a2: GOTO 0x10a5

0x10a3: Return(); Pop(0)

0x10a4: GOTO 0x108d

0x10a5: PushEmpty(bool)
0x10a6: Call2 0x13bd

0x10a7: Pop(0)
0x10a8: IF (Stack[-1] == 0) GOTO 0x10b4; Pop(1)

0x10a9: @ lshWaitForAnimEnd()
0x10aa: Pop(0)
0x10ab: Push( Stack[3 + Tasks[-1].StackPointer] )
0x10ac: IF (Stack[-1] == 0) GOTO 0x10ae; Pop(1)

0x10ad: GOTO 0x10b3

0x10ae: PushEmpty(string)
0x10af: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x10b0: Call2 0x1307

0x10b1: Pop(1)
0x10b2: GOTO 0x10a9

0x10b3: GOTO 0x10c2

0x10b4: Push("all")
0x10b5: Push("idle")
0x10b6: @ PlayAnimation(Stack[-2], Stack[-1])
0x10b7: Pop(2)
0x10b8: @ WaitForAnimEnd()
0x10b9: Pop(0)
0x10ba: Push( Stack[3 + Tasks[-1].StackPointer] )
0x10bb: IF (Stack[-1] == 0) GOTO 0x10bd; Pop(1)

0x10bc: GOTO 0x10c2

0x10bd: Push("all")
0x10be: Push("idle")
0x10bf: @ PlayAnimation(Stack[-2], Stack[-1])
0x10c0: Pop(2)
0x10c1: GOTO 0x10b8

0x10c2: Return(); Pop(0)

0x10c3: PushEmpty()
0x10c4: PushEmpty(bool)
0x10c5: Call2 0x13bd

0x10c6: Pop(0)
0x10c7: Pop(1); Push((bool) Stack[-1] == 0)
0x10c8: IF (Stack[-1] == 0) GOTO 0x10ca; Pop(1)

0x10c9: Return(); Pop(0)

0x10ca: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x10cb: IF (Stack[-1] == 0) GOTO 0x10cd; Pop(1)

0x10cc: Return(); Pop(0)

0x10cd: PushEmpty(string, bool)
0x10ce: Stack[-2] = Stack[-3]
0x10cf: Push("")
0x10d0: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x10d1: IF (Stack[-1] == 0) GOTO 0x10d4; Pop(1)

0x10d2: Stack[-1] = (bool) 0
0x10d3: GOTO 0x10d5

0x10d4: Stack[-1] = (bool) 1
0x10d5: Call2 0x1317

0x10d6: Pop(2)
0x10d7: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x10d8: Return(); Pop(0)

0x10d9: PushEmpty()
0x10da: Push((int) 1)
0x10db: IF (Stack[-1] == 0) GOTO 0x1102; Pop(1)

0x10dc: PushEmpty()
0x10dd: Call2 0x1335

0x10de: Pop(0)
0x10df: Push((int) 42557)
0x10e0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10e1: IF (Stack[-1] == 0) GOTO 0x10f6; Pop(1)

0x10e2: PushEmpty(string)
0x10e3: Stack[-1] = "Neutral"
0x10e4: Call2 0x10c3

0x10e5: Pop(1)
0x10e6: Push((int) 540548)
0x10e7: @@ SetMessage(Stack[-1])
0x10e8: Pop(1)
0x10e9: @@ ClearReplies()
0x10ea: Pop(0)
0x10eb: Push((int) 540549)
0x10ec: Push((int) -1)
0x10ed: Push((int) 42558)
0x10ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10ef: Pop(3)
0x10f0: Push((int) 540797)
0x10f1: Push((int) -1)
0x10f2: Push((int) 42846)
0x10f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10f4: Pop(3)
0x10f5: Return(); Pop(0)

0x10f6: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x10f7: PushEmpty(bool)
0x10f8: Call2 0x13bd

0x10f9: Pop(0)
0x10fa: IF (Stack[-1] == 0) GOTO 0x10fe; Pop(1)

0x10fb: @ lshStopAnimation()
0x10fc: Pop(0)
0x10fd: GOTO 0x1100

0x10fe: @ StopAnimation()
0x10ff: Pop(0)
0x1100: Return(); Pop(0)

0x1101: GOTO 0x10da

0x1102: Return(); Pop(0)

0x1103: Push(GlobalVars[1])
0x1104: Stack[-1] = (bool) 0
0x1105: GlobalVars[1] = Stack[-1]; Pop(1)
0x1106: PushEmpty()
0x1107: Call2 0x110a

0x1108: Pop(0)
0x1109: Return(); Pop(0)

0x110a: PushEmpty(bool)
0x110b: Call2 0x1221

0x110c: Pop(0)
0x110d: Pop(1); Push((bool) Stack[-1] == 0)
0x110e: IF (Stack[-1] == 0) GOTO 0x1111; Pop(1)

0x110f: @ Hold()
0x1110: Pop(0)
0x1111: @ GetDirection(Stack[-0])
0x1112: Pop(0)
0x1113: PushEmpty()
0x1114: Call2 0x11ba

0x1115: Pop(0)
0x1116: GOTO 0x1113

0x1117: Return(); Pop(0)

0x1118: PushEmpty(object, object)
0x1119: Push("player")
0x111a: @ FindActor(Stack[-2], Stack[-1])
0x111b: Pop(1)
0x111c: Pop(0); Push((bool) Stack[-1] == 0)
0x111d: IF (Stack[-1] == 0) GOTO 0x1120; Pop(1)

0x111e: Stack[-3] = (bool) 0
0x111f: Return(); Pop(2)

0x1120: PushEmpty(bool, object)
0x1121: Stack[-1] = Stack[-3]
0x1122: Call2 0x1218

0x1123: Stack[-5] = Stack[-2]
0x1124: Pop(2)
0x1125: Return(); Pop(2)

0x1126: Stack[-1] = 0
0x1127: Push(CvectorIndex(Stack[-0], 0))
0x1128: Push(CvectorIndex(Stack[-0], 2))
0x1129: @ RotateAsync(Stack[-2], Stack[-1])
0x112a: Pop(2)
0x112b: Return(); Pop(0)

0x112c: PushEmpty(object, bool, object, bool)
0x112d: Push("player")
0x112e: @ FindActor(Stack[-3], Stack[-1])
0x112f: Pop(1)
0x1130: Pop(0); Push((bool) Stack[-2] == 0)
0x1131: IF (Stack[-1] == 0) GOTO 0x1134; Pop(1)

0x1132: Stack[-5] = (bool) 0
0x1133: Return(); Pop(4)

0x1134: PushEmpty(float, object)
0x1135: Stack[-1] = Stack[-4]
0x1136: Call2 0x1206

0x1137: Pop(1)
0x1138: Push((float)90000.0)
0x1139: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x113a: IF (Stack[-1] == 0) GOTO 0x113d; Pop(1)

0x113b: Stack[-5] = (bool) 0
0x113c: Return(); Pop(4)

0x113d: @ CanSee(Stack[-1], Stack[-2])
0x113e: Pop(0)
0x113f: Stack[-5] = Stack[-1]
0x1140: Return(); Pop(4)

0x1141: Stack[-2] = 0
0x1142: PushEmpty(float, float)
0x1143: Push((int) 8)
0x1144: Push((int) 16)
0x1145: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x1146: Pop(2)
0x1147: Push((int) 10)
0x1148: @ SetTimer(Stack[-1], Stack[-2])
0x1149: Pop(1)
0x114a: Return(); Pop(2)

0x114b: Push((int) 10)
0x114c: @ KillTimer(Stack[-1])
0x114d: Pop(1)
0x114e: Return(); Pop(0)

0x114f: PushEmpty()
0x1150: Push((int) 10)
0x1151: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1152: IF (Stack[-1] == 0) GOTO 0x1174; Pop(1)

0x1153: PushEmpty()
0x1154: Call2 0x114b

0x1155: Pop(0)
0x1156: PushEmpty(bool)
0x1157: Stack[-1] = (bool) 0
0x1158: PushEmpty(bool)
0x1159: Call2 0x1221

0x115a: Pop(0)
0x115b: IF (Stack[-1] == 0) GOTO 0x1161; Pop(1)

0x115c: PushEmpty(bool)
0x115d: Call2 0x112c

0x115e: Pop(0)
0x115f: IF (Stack[-1] == 0) GOTO 0x1161; Pop(1)

0x1160: Stack[-1] = (bool) 1
0x1161: IF (Stack[-1] == 0) GOTO 0x116e; Pop(1)

0x1162: PushEmpty(bool)
0x1163: Call2 0x1118

0x1164: Pop(0)
0x1165: IF (Stack[-1] == 0) GOTO 0x116d; Pop(1)

0x1166: PushEmpty(bool, object)
0x1167: PushEmpty(object)
0x1168: Call2 0x133c

0x1169: Stack[-2] = Stack[-1]
0x116a: Pop(1)
0x116b: Call2 0x12b7

0x116c: Pop(2)
0x116d: GOTO 0x1174

0x116e: PushEmpty()
0x116f: Call2 0x1127

0x1170: Pop(0)
0x1171: PushEmpty()
0x1172: Call2 0x1142

0x1173: Pop(0)
0x1174: Return(); Pop(0)

0x1175: PushEmpty()
0x1176: Call2 0x1201

0x1177: Pop(0)
0x1178: PushEmpty()
0x1179: Call2 0x114b

0x117a: Pop(0)
0x117b: @ lshStopSpeech()
0x117c: Pop(0)
0x117d: @ lshStopAnimation()
0x117e: Pop(0)
0x117f: @ StopAsync()
0x1180: Pop(0)
0x1181: @ Hold()
0x1182: Pop(0)
0x1183: Return(); Pop(0)

0x1184: @ StopGroup0()
0x1185: Pop(0)
0x1186: PushEmpty()
0x1187: Call2 0x114b

0x1188: Pop(0)
0x1189: PushEmpty(string)
0x118a: Stack[-1] = "Neutral"
0x118b: Call2 0x1307

0x118c: Pop(1)
0x118d: PushEmpty()
0x118e: Call2 0x1142

0x118f: Pop(0)
0x1190: Return(); Pop(0)

0x1191: PushEmpty()
0x1192: Push(Stack[-1])
0x1193: IF (Stack[-1] == 0) GOTO 0x1198; Pop(1)

0x1194: PushEmpty()
0x1195: Call2 0x1142

0x1196: Pop(0)
0x1197: GOTO 0x119c

0x1198: PushEmpty(string)
0x1199: Stack[-1] = "Neutral"
0x119a: Call2 0x1307

0x119b: Pop(1)
0x119c: Return(); Pop(0)

0x119d: PushEmpty(bool, bool)
0x119e: @ IsOverrideActive(Stack[-1])
0x119f: Pop(0)
0x11a0: Pop(0); Push((bool) Stack[-1] == 0)
0x11a1: IF (Stack[-1] == 0) GOTO 0x11b9; Pop(1)

0x11a2: EventDisable(0)
0x11a3: PushEmpty()
0x11a4: Call2 0x1201

0x11a5: Pop(0)
0x11a6: PushEmpty(bool, object)
0x11a7: Stack[-1] = Stack[-5]
0x11a8: Call2 0x1218

0x11a9: Pop(2)
0x11aa: EventEnable(0)
0x11ab: PushEmpty(object)
0x11ac: Stack[-1] = Stack[-4]
0x11ad: Call2 0x16b6

0x11ae: Pop(1)
0x11af: PushEmpty(string)
0x11b0: Stack[-1] = "Neutral"
0x11b1: Call2 0x1307

0x11b2: Pop(1)
0x11b3: PushEmpty()
0x11b4: Call2 0x114b

0x11b5: Pop(0)
0x11b6: PushEmpty()
0x11b7: Call2 0x1142

0x11b8: Pop(0)
0x11b9: Return(); Pop(2)

0x11ba: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x11bb: @ WaitForAnimEnd()
0x11bc: Pop(0)
0x11bd: PushEmpty(bool)
0x11be: Call2 0x1221

0x11bf: Pop(0)
0x11c0: Pop(1); Push((bool) Stack[-1] == 0)
0x11c1: IF (Stack[-1] == 0) GOTO 0x11c3; Pop(1)

0x11c2: Return(); Pop(12)

0x11c3: PushEmpty(int)
0x11c4: Call2 0x13a4

0x11c5: Stack[-7] = Stack[-1]
0x11c6: Pop(1)
0x11c7: Stack[-5] = (int) 0
0x11c8: PushEmpty(bool)
0x11c9: Stack[-1] = (bool) 0
0x11ca: Push((int) 5)
0x11cb: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x11cc: IF (Stack[-1] == 0) GOTO 0x11d2; Pop(1)

0x11cd: PushEmpty(bool)
0x11ce: Call2 0x1221

0x11cf: Pop(0)
0x11d0: IF (Stack[-1] == 0) GOTO 0x11d2; Pop(1)

0x11d1: Stack[-1] = (bool) 1
0x11d2: IF (Stack[-1] == 0) GOTO 0x11fc; Pop(1)

0x11d3: Pop(0); Push((bool) Stack[-6] == 0)
0x11d4: IF (Stack[-1] == 0) GOTO 0x11dc; Pop(1)

0x11d5: Push((int) 3)
0x11d6: @ Sleep(Stack[-1], Stack[-5])
0x11d7: Pop(1)
0x11d8: Pop(0); Push((bool) Stack[-4] == 0)
0x11d9: IF (Stack[-1] == 0) GOTO 0x11db; Pop(1)

0x11da: GOTO 0x11fc

0x11db: GOTO 0x11f1

0x11dc: @ irand(Stack[-3], Stack[-6])
0x11dd: Pop(0)
0x11de: Push((int) 5)
0x11df: @ irand(Stack[-3], Stack[-1])
0x11e0: Pop(1)
0x11e1: Push((int) 0)
0x11e2: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x11e3: IF (Stack[-1] == 0) GOTO 0x11e5; Pop(1)

0x11e4: Stack[-3] = (int) 0
0x11e5: Push("all")
0x11e6: PushEmpty(string, int)
0x11e7: Stack[-1] = Stack[-6]
0x11e8: Call2 0x139d

0x11e9: Pop(1)
0x11ea: @ PlayAnimation(Stack[-2], Stack[-1])
0x11eb: Pop(2)
0x11ec: @ WaitForAnimEnd(Stack[-1])
0x11ed: Pop(0)
0x11ee: Pop(0); Push((bool) Stack[-1] == 0)
0x11ef: IF (Stack[-1] == 0) GOTO 0x11f1; Pop(1)

0x11f0: GOTO 0x11fc

0x11f1: PushEmpty(bool)
0x11f2: Call2 0x11ff

0x11f3: Pop(0)
0x11f4: Pop(1); Push((bool) Stack[-1] == 0)
0x11f5: IF (Stack[-1] == 0) GOTO 0x11f7; Pop(1)

0x11f6: GOTO 0x11fc

0x11f7: @ ResetAAS()
0x11f8: Pop(0)
0x11f9: Push((int) 1)
0x11fa: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x11fb: GOTO 0x11c8

0x11fc: @ ResetAAS()
0x11fd: Pop(0)
0x11fe: Return(); Pop(12)

0x11ff: Stack[-1] = (bool) 1
0x1200: Return(); Pop(0)

0x1201: @ StopAnimation()
0x1202: Pop(0)
0x1203: @ StopGroup0()
0x1204: Pop(0)
0x1205: Return(); Pop(0)

0x1206: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x1207: @ GetPosition(Stack[-3])
0x1208: Pop(0)
0x1209: @@ GetPosition(Stack[-2])
0x120a: Pop(0)
0x120b: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x120c: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x120d: Return(); Pop(6)

0x120e: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x120f: @ GetPosition(Stack[-3])
0x1210: Pop(0)
0x1211: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x1212: Push(CvectorIndex(Stack[-2], 0))
0x1213: Push(CvectorIndex(Stack[-3], 2))
0x1214: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x1215: Pop(2)
0x1216: Stack[-8] = Stack[-1]
0x1217: Return(); Pop(6)

0x1218: PushEmpty(cvector, cvector)
0x1219: @@ GetPosition(Stack[-1])
0x121a: Pop(0)
0x121b: PushEmpty(bool, cvector)
0x121c: Stack[-1] = Stack[-3]
0x121d: Call2 0x120e

0x121e: Stack[-6] = Stack[-2]
0x121f: Pop(2)
0x1220: Return(); Pop(2)

0x1221: PushEmpty(bool, bool)
0x1222: @ IsLoaded(Stack[-1])
0x1223: Pop(0)
0x1224: Stack[-3] = Stack[-1]
0x1225: Return(); Pop(2)

0x1226: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x1227: @@ GetPosition(Stack[-8])
0x1228: Pop(0)
0x1229: @@ GetEyesHeight(Stack[-9])
0x122a: Pop(0)
0x122b: Push(CvectorIndex(Stack[-8], 1))
0x122c: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x122d: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x122e: @ GetPosition(Stack[-7])
0x122f: Pop(0)
0x1230: @ GetEyesHeight(Stack[-9])
0x1231: Pop(0)
0x1232: Push(CvectorIndex(Stack[-7], 1))
0x1233: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1234: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1235: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x1236: Push(CvectorIndex(Stack[-6], 1))
0x1237: Stack[-1] = (int) 0
0x1238: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1239: Pop(0); Push(Stack[-6] | Stack[-6]);
0x123a: Pop(1); Push(Sqrt(Stack[-1]))
0x123b: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x123c: Stack[-5] = -Stack[-6]; Pop(0);
0x123d: Pop(0); Push(Stack[-6] * Stack[-19]);
0x123e: PushEmpty(cvector, cvector)
0x123f: Push(CVector(0.0, 1.0, 0.0))
0x1240: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x1241: Call2 0x1342

0x1242: Pop(1)
0x1243: Push((int) 25)
0x1244: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1245: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1246: Push(CVector(0.0, 10.0, 0.0))
0x1247: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x1248: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x1249: @ IsOverrideActive(Stack[-2])
0x124a: Pop(0)
0x124b: Push(Stack[-2])
0x124c: IF (Stack[-1] == 0) GOTO 0x124f; Pop(1)

0x124d: Stack[-21] = (bool) 0
0x124e: Return(); Pop(18)

0x124f: @ StopWorld()
0x1250: Pop(0)
0x1251: Push((bool) 1)
0x1252: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x1253: Pop(1)
0x1254: Push(CvectorIndex(Stack[-4], 0))
0x1255: Push(CvectorIndex(Stack[-5], 2))
0x1256: @ Rotate(Stack[-2], Stack[-1])
0x1257: Pop(2)
0x1258: PushEmpty(bool)
0x1259: Call2 0x13bd

0x125a: Pop(0)
0x125b: IF (Stack[-1] == 0) GOTO 0x125d; Pop(1)

0x125c: GOTO 0x1265

0x125d: Push("head")
0x125e: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x125f: Pop(1)
0x1260: Push(Stack[-1])
0x1261: IF (Stack[-1] == 0) GOTO 0x1265; Pop(1)

0x1262: Push("head")
0x1263: @ LookAsyncCamera(Stack[-1])
0x1264: Pop(1)
0x1265: @ CameraWaitForPlayFinish()
0x1266: Pop(0)
0x1267: @ ResumeWorld()
0x1268: Pop(0)
0x1269: Stack[-21] = (bool) 1
0x126a: Return(); Pop(18)

0x126b: PushEmpty(bool, bool)
0x126c: Push((bool) 1)
0x126d: @ CameraSwitchToNormal(Stack[-1])
0x126e: Pop(1)
0x126f: PushEmpty(bool)
0x1270: Call2 0x13bd

0x1271: Pop(0)
0x1272: IF (Stack[-1] == 0) GOTO 0x1274; Pop(1)

0x1273: GOTO 0x127c

0x1274: Push("head")
0x1275: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x1276: Pop(1)
0x1277: Push(Stack[-1])
0x1278: IF (Stack[-1] == 0) GOTO 0x127c; Pop(1)

0x1279: Push("head")
0x127a: @ UnlookAsync(Stack[-1])
0x127b: Pop(1)
0x127c: Return(); Pop(2)

0x127d: PushEmpty(int, int, int, int)
0x127e: Push("voice_common")
0x127f: @ GetVariable(Stack[-1], Stack[-3])
0x1280: Pop(1)
0x1281: Push(Stack[-2])
0x1282: IF (Stack[-1] == 0) GOTO 0x12a3; Pop(1)

0x1283: PushEmpty(bool, object)
0x1284: Stack[-1] = Stack[-7]
0x1285: Call2 0x12b7

0x1286: Pop(1)
0x1287: Pop(1); Push((bool) Stack[-1] == 0)
0x1288: IF (Stack[-1] == 0) GOTO 0x1291; Pop(1)

0x1289: PushEmpty(bool, object)
0x128a: Stack[-1] = Stack[-7]
0x128b: Call2 0x12dc

0x128c: Pop(1)
0x128d: Pop(1); Push((bool) Stack[-1] == 0)
0x128e: IF (Stack[-1] == 0) GOTO 0x1291; Pop(1)

0x128f: Stack[-6] = (bool) 0
0x1290: Return(); Pop(4)

0x1291: Push((int) 2)
0x1292: @ irand(Stack[-2], Stack[-1])
0x1293: Pop(1)
0x1294: Push(Stack[-1])
0x1295: IF (Stack[-1] == 0) GOTO 0x129e; Pop(1)

0x1296: Push("voice_common")
0x1297: Push((int) 1)
0x1298: Pop(1); Push(Stack[-4] + Stack[-1]);
0x1299: Push((int) 3)
0x129a: Pop(2); Push(Stack[-2] % Stack[-1]);
0x129b: @ SetVariable(Stack[-2], Stack[-1])
0x129c: Pop(2)
0x129d: GOTO 0x12a2

0x129e: Push("voice_common")
0x129f: Push((int) 0)
0x12a0: @ SetVariable(Stack[-2], Stack[-1])
0x12a1: Pop(2)
0x12a2: GOTO 0x12b5

0x12a3: PushEmpty(bool, object)
0x12a4: Stack[-1] = Stack[-7]
0x12a5: Call2 0x12dc

0x12a6: Pop(1)
0x12a7: Pop(1); Push((bool) Stack[-1] == 0)
0x12a8: IF (Stack[-1] == 0) GOTO 0x12b1; Pop(1)

0x12a9: PushEmpty(bool, object)
0x12aa: Stack[-1] = Stack[-7]
0x12ab: Call2 0x12b7

0x12ac: Pop(1)
0x12ad: Pop(1); Push((bool) Stack[-1] == 0)
0x12ae: IF (Stack[-1] == 0) GOTO 0x12b1; Pop(1)

0x12af: Stack[-6] = (bool) 0
0x12b0: Return(); Pop(4)

0x12b1: Push("voice_common")
0x12b2: Push((int) 1)
0x12b3: @ SetVariable(Stack[-2], Stack[-1])
0x12b4: Pop(2)
0x12b5: Stack[-6] = (bool) 1
0x12b6: Return(); Pop(4)

0x12b7: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x12b8: Stack[-5] = "c"
0x12b9: Stack[-4] = (int) 0
0x12ba: Push((int) 1)
0x12bb: IF (Stack[-1] == 0) GOTO 0x12c7; Pop(1)

0x12bc: Push((int) 1)
0x12bd: Pop(1); Push(Stack[-5] + Stack[-1]);
0x12be: Pop(1); Push(Stack[-6] + Stack[-1]);
0x12bf: @@ HasProperty(Stack[-1], Stack[-4])
0x12c0: Pop(1)
0x12c1: Pop(0); Push((bool) Stack[-3] == 0)
0x12c2: IF (Stack[-1] == 0) GOTO 0x12c4; Pop(1)

0x12c3: GOTO 0x12c7

0x12c4: Push((int) 1)
0x12c5: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x12c6: GOTO 0x12ba

0x12c7: Pop(0); Push((bool) Stack[-4] == 0)
0x12c8: IF (Stack[-1] == 0) GOTO 0x12cb; Pop(1)

0x12c9: Stack[-12] = (bool) 0
0x12ca: Return(); Pop(10)

0x12cb: Stack[-2] = (int) 0
0x12cc: Push((int) 1)
0x12cd: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x12ce: IF (Stack[-1] == 0) GOTO 0x12d1; Pop(1)

0x12cf: @ irand(Stack[-2], Stack[-4])
0x12d0: Pop(0)
0x12d1: Push((int) 1)
0x12d2: Pop(1); Push(Stack[-3] + Stack[-1]);
0x12d3: Pop(1); Push(Stack[-6] + Stack[-1]);
0x12d4: @@ GetProperty(Stack[-1], Stack[-2])
0x12d5: Pop(1)
0x12d6: PushEmpty(bool, string)
0x12d7: Stack[-1] = Stack[-3]
0x12d8: Call2 0x1326

0x12d9: Stack[-14] = Stack[-2]
0x12da: Pop(2)
0x12db: Return(); Pop(10)

0x12dc: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x12dd: Push("d")
0x12de: PushEmpty(int)
0x12df: Call2 0x138e

0x12e0: Pop(0)
0x12e1: Pop(2); Push(Stack[-2] + Stack[-1]);
0x12e2: Push("m")
0x12e3: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x12e4: Stack[-4] = (int) 0
0x12e5: Push((int) 1)
0x12e6: IF (Stack[-1] == 0) GOTO 0x12f2; Pop(1)

0x12e7: Push((int) 1)
0x12e8: Pop(1); Push(Stack[-5] + Stack[-1]);
0x12e9: Pop(1); Push(Stack[-6] + Stack[-1]);
0x12ea: @@ HasProperty(Stack[-1], Stack[-4])
0x12eb: Pop(1)
0x12ec: Pop(0); Push((bool) Stack[-3] == 0)
0x12ed: IF (Stack[-1] == 0) GOTO 0x12ef; Pop(1)

0x12ee: GOTO 0x12f2

0x12ef: Push((int) 1)
0x12f0: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x12f1: GOTO 0x12e5

0x12f2: Pop(0); Push((bool) Stack[-4] == 0)
0x12f3: IF (Stack[-1] == 0) GOTO 0x12f6; Pop(1)

0x12f4: Stack[-12] = (bool) 0
0x12f5: Return(); Pop(10)

0x12f6: Stack[-2] = (int) 0
0x12f7: Push((int) 1)
0x12f8: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x12f9: IF (Stack[-1] == 0) GOTO 0x12fc; Pop(1)

0x12fa: @ irand(Stack[-2], Stack[-4])
0x12fb: Pop(0)
0x12fc: Push((int) 1)
0x12fd: Pop(1); Push(Stack[-3] + Stack[-1]);
0x12fe: Pop(1); Push(Stack[-6] + Stack[-1]);
0x12ff: @@ GetProperty(Stack[-1], Stack[-2])
0x1300: Pop(1)
0x1301: PushEmpty(bool, string)
0x1302: Stack[-1] = Stack[-3]
0x1303: Call2 0x1326

0x1304: Stack[-14] = Stack[-2]
0x1305: Pop(2)
0x1306: Return(); Pop(10)

0x1307: PushEmpty(bool, float, float, bool, float, float)
0x1308: @ lshHasAnimation(Stack[-3], Stack[-7])
0x1309: Pop(0)
0x130a: Push(Stack[-3])
0x130b: IF (Stack[-1] == 0) GOTO 0x1312; Pop(1)

0x130c: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x130d: Pop(0)
0x130e: Push((bool) 0)
0x130f: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x1310: Pop(1)
0x1311: GOTO 0x1316

0x1312: Push("Can't find lsh animation : ")
0x1313: Pop(1); Push(Stack[-1] + Stack[-8]);
0x1314: @ Trace(Stack[-1])
0x1315: Pop(1)
0x1316: Return(); Pop(6)

0x1317: PushEmpty(bool, float, float, bool, float, float)
0x1318: @ lshHasAnimation(Stack[-3], Stack[-8])
0x1319: Pop(0)
0x131a: Push(Stack[-3])
0x131b: IF (Stack[-1] == 0) GOTO 0x1321; Pop(1)

0x131c: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x131d: Pop(0)
0x131e: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x131f: Pop(0)
0x1320: GOTO 0x1325

0x1321: Push("Can't find lsh animation : ")
0x1322: Pop(1); Push(Stack[-1] + Stack[-9]);
0x1323: @ Trace(Stack[-1])
0x1324: Pop(1)
0x1325: Return(); Pop(6)

0x1326: PushEmpty(bool, bool)
0x1327: PushEmpty(bool)
0x1328: Call2 0x13bd

0x1329: Pop(0)
0x132a: IF (Stack[-1] == 0) GOTO 0x1333; Pop(1)

0x132b: @ lshHasSpeech(Stack[-1], Stack[-3])
0x132c: Pop(0)
0x132d: Push(Stack[-1])
0x132e: IF (Stack[-1] == 0) GOTO 0x1333; Pop(1)

0x132f: @ lshPlaySpeech(Stack[-3])
0x1330: Pop(0)
0x1331: Stack[-4] = (bool) 1
0x1332: Return(); Pop(2)

0x1333: Stack[-4] = (bool) 0
0x1334: Return(); Pop(2)

0x1335: PushEmpty(bool)
0x1336: Call2 0x13bd

0x1337: Pop(0)
0x1338: IF (Stack[-1] == 0) GOTO 0x133b; Pop(1)

0x1339: @ lshStopSpeech()
0x133a: Pop(0)
0x133b: Return(); Pop(0)

0x133c: PushEmpty(object, object)
0x133d: @ self(Stack[-1])
0x133e: Pop(0)
0x133f: Stack[-3] = Stack[-1]
0x1340: Return(); Pop(2)

0x1341: Stack[-1] = 0
0x1342: PushEmpty(float, float)
0x1343: Pop(0); Push(Stack[-3] | Stack[-3]);
0x1344: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1345: Push((float)0.0)
0x1346: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x1347: IF (Stack[-1] == 0) GOTO 0x134a; Pop(1)

0x1348: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x1349: Return(); Pop(2)

0x134a: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x134b: Return(); Pop(2)

0x134c: PushEmpty(int, int)
0x134d: @ GetVariable(Stack[-3], Stack[-1])
0x134e: Pop(0)
0x134f: Stack[-4] = Stack[-1]
0x1350: Return(); Pop(2)

0x1351: PushEmpty(object, object)
0x1352: @ CreateIntVector(Stack[-1])
0x1353: Pop(0)
0x1354: @@ add(Stack[-4])
0x1355: Pop(0)
0x1356: @@ add(Stack[-3])
0x1357: Pop(0)
0x1358: Push((int) 3)
0x1359: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x135a: Pop(1)
0x135b: Return(); Pop(2)

0x135c: Stack[-1] = 0
0x135d: PushEmpty(int, int, bool, int, int, bool)
0x135e: @@ GetItemID(Stack[-3])
0x135f: Pop(0)
0x1360: Push("Category")
0x1361: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x1362: Pop(1)
0x1363: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x1364: Pop(0)
0x1365: Pop(0); Push((bool) Stack[-1] == 0)
0x1366: IF (Stack[-1] == 0) GOTO 0x136a; Pop(1)

0x1367: @@ DropItems(Stack[-8], Stack[-7])
0x1368: Pop(0)
0x1369: GOTO 0x136f

0x136a: PushEmpty(int, int)
0x136b: Stack[-2] = Stack[-5]
0x136c: Stack[-1] = Stack[-9]
0x136d: Call2 0x1351

0x136e: Pop(2)
0x136f: Return(); Pop(6)

0x1370: PushEmpty(object, object)
0x1371: @ CreateInvItem(Stack[-1])
0x1372: Pop(0)
0x1373: @@ SetItemName(Stack[-4])
0x1374: Pop(0)
0x1375: PushEmpty(object, object, int)
0x1376: Stack[-3] = Stack[-8]
0x1377: Stack[-2] = Stack[-4]
0x1378: Stack[-1] = Stack[-6]
0x1379: Call2 0x135d

0x137a: Pop(3)
0x137b: Return(); Pop(2)

0x137c: Stack[-1] = 0
0x137d: PushEmpty(object, object)
0x137e: @ FindActor(Stack[-1], Stack[-4])
0x137f: Pop(0)
0x1380: Pop(0); Push((bool) Stack[-1] == 0)
0x1381: IF (Stack[-1] == 0) GOTO 0x1384; Pop(1)

0x1382: Stack[-5] = (bool) 0
0x1383: Return(); Pop(2)

0x1384: @ Trigger(Stack[-1], Stack[-3])
0x1385: Pop(0)
0x1386: Stack[-5] = (bool) 1
0x1387: Return(); Pop(2)

0x1388: Stack[-1] = 0
0x1389: PushEmpty(float, float)
0x138a: @ GetGameTime(Stack[-1])
0x138b: Pop(0)
0x138c: Stack[-3] = Stack[-1]
0x138d: Return(); Pop(2)

0x138e: PushEmpty(float, float)
0x138f: @ GetGameTime(Stack[-1])
0x1390: Pop(0)
0x1391: Push((int) 1)
0x1392: PushEmpty(int)
0x1393: Push((int) 24)
0x1394: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x1395: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x1396: Return(); Pop(2)

0x1397: PushEmpty()
0x1398: PushEmpty(int)
0x1399: Call2 0x138e

0x139a: Pop(0)
0x139b: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x139c: Return(); Pop(0)

0x139d: PushEmpty(string, string)
0x139e: Stack[-1] = "idle"
0x139f: Push(Stack[-3])
0x13a0: IF (Stack[-1] == 0) GOTO 0x13a2; Pop(1)

0x13a1: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x13a2: Stack[-4] = Stack[-1]
0x13a3: Return(); Pop(2)

0x13a4: PushEmpty(int, bool, int, bool)
0x13a5: Stack[-2] = (int) 0
0x13a6: Push("all")
0x13a7: PushEmpty(string, int)
0x13a8: Stack[-1] = Stack[-5]
0x13a9: Call2 0x139d

0x13aa: Pop(1)
0x13ab: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x13ac: Pop(2)
0x13ad: Pop(0); Push((bool) Stack[-1] == 0)
0x13ae: IF (Stack[-1] == 0) GOTO 0x13b0; Pop(1)

0x13af: GOTO 0x13b3

0x13b0: Push((int) 1)
0x13b1: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x13b2: GOTO 0x13a6

0x13b3: Stack[-5] = Stack[-2]
0x13b4: Return(); Pop(4)

0x13b5: Stack[-1] = (int) 515549
0x13b6: Return(); Pop(0)

0x13b7: Stack[-1] = (int) 502874
0x13b8: Return(); Pop(0)

0x13b9: Stack[-1] = "ui/NPC_Ospina.png"
0x13ba: Return(); Pop(0)

0x13bb: Stack[-1] = "ui/NPC_Ospina_b.png"
0x13bc: Return(); Pop(0)

0x13bd: Stack[-1] = (bool) 1
0x13be: Return(); Pop(0)

0x13bf: PushEmpty()
0x13c0: PushEmpty(bool, string, string)
0x13c1: Stack[-2] = "quest_d1_03"
0x13c2: Stack[-1] = "eva_finish"
0x13c3: Call2 0x137d

0x13c4: Pop(3)
0x13c5: Return(); Pop(0)

0x13c6: PushEmpty()
0x13c7: Push("ood1Ospina1")
0x13c8: Push((int) 1)
0x13c9: @ SetVariable(Stack[-2], Stack[-1])
0x13ca: Pop(2)
0x13cb: Return(); Pop(0)

0x13cc: PushEmpty()
0x13cd: Push("ood1Ospina2")
0x13ce: Push((int) 1)
0x13cf: @ SetVariable(Stack[-2], Stack[-1])
0x13d0: Pop(2)
0x13d1: Return(); Pop(0)

0x13d2: PushEmpty()
0x13d3: PushEmpty()
0x13d4: Call2 0x15ef

0x13d5: Pop(0)
0x13d6: PushEmpty(bool, string, string)
0x13d7: Stack[-2] = "quest_d1_03"
0x13d8: Stack[-1] = "unlock_butcher"
0x13d9: Call2 0x137d

0x13da: Pop(3)
0x13db: Return(); Pop(0)

0x13dc: PushEmpty()
0x13dd: PushEmpty()
0x13de: Call2 0x1630

0x13df: Pop(0)
0x13e0: Return(); Pop(0)

0x13e1: PushEmpty()
0x13e2: Push("ood3Ospina1")
0x13e3: Push((int) 1)
0x13e4: @ SetVariable(Stack[-2], Stack[-1])
0x13e5: Pop(2)
0x13e6: Return(); Pop(0)

0x13e7: PushEmpty()
0x13e8: Push("ood3Ospina2")
0x13e9: Push((int) 1)
0x13ea: @ SetVariable(Stack[-2], Stack[-1])
0x13eb: Pop(2)
0x13ec: Return(); Pop(0)

0x13ed: PushEmpty()
0x13ee: Push("ood3Ospina3")
0x13ef: Push((int) 1)
0x13f0: @ SetVariable(Stack[-2], Stack[-1])
0x13f1: Pop(2)
0x13f2: Return(); Pop(0)

0x13f3: PushEmpty(object, object)
0x13f4: Push("d3q01")
0x13f5: Push((int) 3)
0x13f6: @ SetVariable(Stack[-2], Stack[-1])
0x13f7: Pop(2)
0x13f8: PushEmpty(object)
0x13f9: Call2 0x1673

0x13fa: Stack[-2] = Stack[-1]
0x13fb: Pop(1)
0x13fc: Push("d3q01OspinaGotoBigVlad")
0x13fd: Push("pt_map_bigvlad")
0x13fe: Push((int) 1)
0x13ff: Push((int) 511152)
0x1400: PushEmpty(float)
0x1401: Call2 0x1389

0x1402: Pop(0)
0x1403: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1404: Pop(5)
0x1405: PushEmpty()
0x1406: Call2 0x1609

0x1407: Pop(0)
0x1408: Return(); Pop(2)

0x1409: Stack[-1] = 0
0x140a: PushEmpty()
0x140b: Push("ood3Ospina4")
0x140c: Push((int) 1)
0x140d: @ SetVariable(Stack[-2], Stack[-1])
0x140e: Pop(2)
0x140f: Return(); Pop(0)

0x1410: PushEmpty()
0x1411: Push("d3q01")
0x1412: Push((int) 7)
0x1413: @ SetVariable(Stack[-2], Stack[-1])
0x1414: Pop(2)
0x1415: PushEmpty()
0x1416: Call2 0x15fc

0x1417: Pop(0)
0x1418: PushEmpty(bool, string, string)
0x1419: Stack[-2] = "quest_d3_01"
0x141a: Stack[-1] = "place_butchers"
0x141b: Call2 0x137d

0x141c: Pop(3)
0x141d: Return(); Pop(0)

0x141e: PushEmpty()
0x141f: PushEmpty(object, string, float)
0x1420: PushEmpty(object)
0x1421: Call2 0x1673

0x1422: Stack[-4] = Stack[-1]
0x1423: Pop(1)
0x1424: Stack[-2] = "pt_map_bigvlad"
0x1425: Stack[-1] = (int) 2
0x1426: Call2 0x1684

0x1427: Pop(3)
0x1428: PushEmpty(object)
0x1429: Call2 0x1673

0x142a: Pop(0)
0x142b: @@ ShowMap(Stack[-1])
0x142c: Pop(1)
0x142d: Return(); Pop(0)

0x142e: PushEmpty()
0x142f: PushEmpty(object, string, float)
0x1430: PushEmpty(object)
0x1431: Call2 0x1673

0x1432: Stack[-4] = Stack[-1]
0x1433: Pop(1)
0x1434: Stack[-2] = "pt_map_mladvlad"
0x1435: Stack[-1] = (int) 2
0x1436: Call2 0x1684

0x1437: Pop(3)
0x1438: PushEmpty(object)
0x1439: Call2 0x1673

0x143a: Pop(0)
0x143b: @@ ShowMap(Stack[-1])
0x143c: Pop(1)
0x143d: Return(); Pop(0)

0x143e: PushEmpty()
0x143f: PushEmpty(object, string, float)
0x1440: PushEmpty(object)
0x1441: Call2 0x1673

0x1442: Stack[-4] = Stack[-1]
0x1443: Pop(1)
0x1444: Stack[-2] = "pt_map_lara"
0x1445: Stack[-1] = (int) 2
0x1446: Call2 0x1684

0x1447: Pop(3)
0x1448: PushEmpty(object)
0x1449: Call2 0x1673

0x144a: Pop(0)
0x144b: @@ ShowMap(Stack[-1])
0x144c: Pop(1)
0x144d: Return(); Pop(0)

0x144e: PushEmpty(object, object)
0x144f: Push("d4q01_subquest")
0x1450: Push((int) 2)
0x1451: @ SetVariable(Stack[-2], Stack[-1])
0x1452: Pop(2)
0x1453: PushEmpty(object)
0x1454: Call2 0x1673

0x1455: Stack[-2] = Stack[-1]
0x1456: Pop(1)
0x1457: Push("d4q01OspinaGotoLara")
0x1458: Push("pt_map_lara")
0x1459: Push((int) 1)
0x145a: Push((int) 511504)
0x145b: PushEmpty(float)
0x145c: Call2 0x1389

0x145d: Pop(0)
0x145e: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x145f: Pop(5)
0x1460: Return(); Pop(2)

0x1461: Stack[-1] = 0
0x1462: PushEmpty()
0x1463: Push("ood4Ospina1")
0x1464: Push((int) 1)
0x1465: @ SetVariable(Stack[-2], Stack[-1])
0x1466: Pop(2)
0x1467: Return(); Pop(0)

0x1468: PushEmpty()
0x1469: Push("d4q01_subquest")
0x146a: Push((int) 1000)
0x146b: @ SetVariable(Stack[-2], Stack[-1])
0x146c: Pop(2)
0x146d: Return(); Pop(0)

0x146e: PushEmpty()
0x146f: Push("ood4Ospina2")
0x1470: Push((int) 1)
0x1471: @ SetVariable(Stack[-2], Stack[-1])
0x1472: Pop(2)
0x1473: Return(); Pop(0)

0x1474: PushEmpty()
0x1475: Push("ood6Ospina1")
0x1476: Push((int) 1)
0x1477: @ SetVariable(Stack[-2], Stack[-1])
0x1478: Pop(2)
0x1479: Return(); Pop(0)

0x147a: PushEmpty()
0x147b: Push("ood6Ospina2")
0x147c: Push((int) 1)
0x147d: @ SetVariable(Stack[-2], Stack[-1])
0x147e: Pop(2)
0x147f: Return(); Pop(0)

0x1480: PushEmpty(object, object)
0x1481: Push("d8q01MladVladIsBad")
0x1482: Push((int) 1)
0x1483: @ SetVariable(Stack[-2], Stack[-1])
0x1484: Pop(2)
0x1485: PushEmpty(object)
0x1486: Call2 0x1673

0x1487: Stack[-2] = Stack[-1]
0x1488: Pop(1)
0x1489: Push("d8q01OspinaGotoMladVlad")
0x148a: Push("pt_map_mladvlad")
0x148b: Push((int) 1)
0x148c: Push((int) 515307)
0x148d: PushEmpty(float)
0x148e: Call2 0x1389

0x148f: Pop(0)
0x1490: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1491: Pop(5)
0x1492: PushEmpty()
0x1493: Call2 0x163d

0x1494: Pop(0)
0x1495: Return(); Pop(2)

0x1496: Stack[-1] = 0
0x1497: PushEmpty()
0x1498: Push("ood8Ospina1")
0x1499: Push((int) 1)
0x149a: @ SetVariable(Stack[-2], Stack[-1])
0x149b: Pop(2)
0x149c: Return(); Pop(0)

0x149d: PushEmpty()
0x149e: Push("ood8Ospina2")
0x149f: Push((int) 1)
0x14a0: @ SetVariable(Stack[-2], Stack[-1])
0x14a1: Pop(2)
0x14a2: Return(); Pop(0)

0x14a3: PushEmpty()
0x14a4: PushEmpty()
0x14a5: Call2 0x1616

0x14a6: Pop(0)
0x14a7: Push("ospina blood is given")
0x14a8: @ Trace(Stack[-1])
0x14a9: Pop(1)
0x14aa: PushEmpty(object, string, int)
0x14ab: Stack[-3] = Stack[-5]
0x14ac: Stack[-2] = "d6q01_ospina_blood"
0x14ad: Stack[-1] = (int) 1
0x14ae: Call2 0x1370

0x14af: Pop(3)
0x14b0: Return(); Pop(0)

0x14b1: PushEmpty()
0x14b2: Push("playsound")
0x14b3: Push("giveitem")
0x14b4: @ TriggerWorld(Stack[-2], Stack[-1])
0x14b5: Pop(2)
0x14b6: Return(); Pop(0)

0x14b7: PushEmpty()
0x14b8: Push("d6q01OspinaVolonteer")
0x14b9: Push((int) 1)
0x14ba: @ SetVariable(Stack[-2], Stack[-1])
0x14bb: Pop(2)
0x14bc: PushEmpty()
0x14bd: Call2 0x1623

0x14be: Pop(0)
0x14bf: PushEmpty(bool, string, string)
0x14c0: Stack[-2] = "quest_d6_01"
0x14c1: Stack[-1] = "completed"
0x14c2: Call2 0x137d

0x14c3: Pop(3)
0x14c4: Return(); Pop(0)

0x14c5: PushEmpty()
0x14c6: PushEmpty(int, string)
0x14c7: Stack[-1] = "d1q03"
0x14c8: Call2 0x134c

0x14c9: Pop(1)
0x14ca: Push((int) 1)
0x14cb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14cc: IF (Stack[-1] == 0) GOTO 0x14cf; Pop(1)

0x14cd: Stack[-2] = (bool) 1
0x14ce: Return(); Pop(0)

0x14cf: Stack[-2] = (bool) 0
0x14d0: Return(); Pop(0)

0x14d1: PushEmpty()
0x14d2: PushEmpty(int, string)
0x14d3: Stack[-1] = "ood1Ospina1"
0x14d4: Call2 0x134c

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
0x14df: Stack[-1] = "ood1Ospina2"
0x14e0: Call2 0x134c

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
0x14eb: Stack[-1] = "ood3Ospina1"
0x14ec: Call2 0x134c

0x14ed: Pop(1)
0x14ee: Push((int) 0)
0x14ef: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14f0: IF (Stack[-1] == 0) GOTO 0x14f3; Pop(1)

0x14f1: Stack[-2] = (bool) 1
0x14f2: Return(); Pop(0)

0x14f3: Stack[-2] = (bool) 0
0x14f4: Return(); Pop(0)

0x14f5: PushEmpty()
0x14f6: PushEmpty(int, string)
0x14f7: Stack[-1] = "ood3Ospina2"
0x14f8: Call2 0x134c

0x14f9: Pop(1)
0x14fa: Push((int) 0)
0x14fb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14fc: IF (Stack[-1] == 0) GOTO 0x14ff; Pop(1)

0x14fd: Stack[-2] = (bool) 1
0x14fe: Return(); Pop(0)

0x14ff: Stack[-2] = (bool) 0
0x1500: Return(); Pop(0)

0x1501: PushEmpty()
0x1502: PushEmpty(int, string)
0x1503: Stack[-1] = "ood3Ospina3"
0x1504: Call2 0x134c

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
0x150f: Stack[-1] = "ood3Ospina4"
0x1510: Call2 0x134c

0x1511: Pop(1)
0x1512: Push((int) 0)
0x1513: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1514: IF (Stack[-1] == 0) GOTO 0x1517; Pop(1)

0x1515: Stack[-2] = (bool) 1
0x1516: Return(); Pop(0)

0x1517: Stack[-2] = (bool) 0
0x1518: Return(); Pop(0)

0x1519: PushEmpty()
0x151a: PushEmpty(int, string)
0x151b: Stack[-1] = "d3q01"
0x151c: Call2 0x134c

0x151d: Pop(1)
0x151e: Push((int) 2)
0x151f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1520: IF (Stack[-1] == 0) GOTO 0x1523; Pop(1)

0x1521: Stack[-2] = (bool) 1
0x1522: Return(); Pop(0)

0x1523: Stack[-2] = (bool) 0
0x1524: Return(); Pop(0)

0x1525: PushEmpty()
0x1526: PushEmpty(int, string)
0x1527: Stack[-1] = "d3q01"
0x1528: Call2 0x134c

0x1529: Pop(1)
0x152a: Push((int) 6)
0x152b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x152c: IF (Stack[-1] == 0) GOTO 0x152f; Pop(1)

0x152d: Stack[-2] = (bool) 1
0x152e: Return(); Pop(0)

0x152f: Stack[-2] = (bool) 0
0x1530: Return(); Pop(0)

0x1531: PushEmpty()
0x1532: PushEmpty(int, string)
0x1533: Stack[-1] = "d4q01_subquest"
0x1534: Call2 0x134c

0x1535: Pop(1)
0x1536: Push((int) 1)
0x1537: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1538: IF (Stack[-1] == 0) GOTO 0x153b; Pop(1)

0x1539: Stack[-2] = (bool) 1
0x153a: Return(); Pop(0)

0x153b: Stack[-2] = (bool) 0
0x153c: Return(); Pop(0)

0x153d: PushEmpty()
0x153e: PushEmpty(int, string)
0x153f: Stack[-1] = "ood4Ospina1"
0x1540: Call2 0x134c

0x1541: Pop(1)
0x1542: Push((int) 0)
0x1543: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1544: IF (Stack[-1] == 0) GOTO 0x1547; Pop(1)

0x1545: Stack[-2] = (bool) 1
0x1546: Return(); Pop(0)

0x1547: Stack[-2] = (bool) 0
0x1548: Return(); Pop(0)

0x1549: PushEmpty()
0x154a: PushEmpty(int, string)
0x154b: Stack[-1] = "d4q01_subquest"
0x154c: Call2 0x134c

0x154d: Pop(1)
0x154e: Push((int) 3)
0x154f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1550: IF (Stack[-1] == 0) GOTO 0x1553; Pop(1)

0x1551: Stack[-2] = (bool) 1
0x1552: Return(); Pop(0)

0x1553: Stack[-2] = (bool) 0
0x1554: Return(); Pop(0)

0x1555: PushEmpty()
0x1556: PushEmpty(int, string)
0x1557: Stack[-1] = "ood4Ospina2"
0x1558: Call2 0x134c

0x1559: Pop(1)
0x155a: Push((int) 0)
0x155b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x155c: IF (Stack[-1] == 0) GOTO 0x155f; Pop(1)

0x155d: Stack[-2] = (bool) 1
0x155e: Return(); Pop(0)

0x155f: Stack[-2] = (bool) 0
0x1560: Return(); Pop(0)

0x1561: PushEmpty()
0x1562: PushEmpty(int, string)
0x1563: Stack[-1] = "d6q01"
0x1564: Call2 0x134c

0x1565: Pop(1)
0x1566: Push((int) 1)
0x1567: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1568: IF (Stack[-1] == 0) GOTO 0x156b; Pop(1)

0x1569: Stack[-2] = (bool) 1
0x156a: Return(); Pop(0)

0x156b: Stack[-2] = (bool) 0
0x156c: Return(); Pop(0)

0x156d: PushEmpty()
0x156e: PushEmpty(int, string)
0x156f: Stack[-1] = "ood6Ospina1"
0x1570: Call2 0x134c

0x1571: Pop(1)
0x1572: Push((int) 0)
0x1573: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1574: IF (Stack[-1] == 0) GOTO 0x1577; Pop(1)

0x1575: Stack[-2] = (bool) 1
0x1576: Return(); Pop(0)

0x1577: Stack[-2] = (bool) 0
0x1578: Return(); Pop(0)

0x1579: PushEmpty()
0x157a: PushEmpty(int, string)
0x157b: Stack[-1] = "ood6Ospina2"
0x157c: Call2 0x134c

0x157d: Pop(1)
0x157e: Push((int) 0)
0x157f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1580: IF (Stack[-1] == 0) GOTO 0x1583; Pop(1)

0x1581: Stack[-2] = (bool) 1
0x1582: Return(); Pop(0)

0x1583: Stack[-2] = (bool) 0
0x1584: Return(); Pop(0)

0x1585: PushEmpty()
0x1586: PushEmpty(int, string)
0x1587: Stack[-1] = "d8q01"
0x1588: Call2 0x134c

0x1589: Pop(1)
0x158a: Push((int) 0)
0x158b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x158c: IF (Stack[-1] == 0) GOTO 0x158f; Pop(1)

0x158d: Stack[-2] = (bool) 1
0x158e: Return(); Pop(0)

0x158f: Stack[-2] = (bool) 0
0x1590: Return(); Pop(0)

0x1591: PushEmpty()
0x1592: PushEmpty(int, string)
0x1593: Stack[-1] = "ood8Ospina1"
0x1594: Call2 0x134c

0x1595: Pop(1)
0x1596: Push((int) 0)
0x1597: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1598: IF (Stack[-1] == 0) GOTO 0x159b; Pop(1)

0x1599: Stack[-2] = (bool) 1
0x159a: Return(); Pop(0)

0x159b: Stack[-2] = (bool) 0
0x159c: Return(); Pop(0)

0x159d: PushEmpty()
0x159e: PushEmpty(int, string)
0x159f: Stack[-1] = "ood8Ospina2"
0x15a0: Call2 0x134c

0x15a1: Pop(1)
0x15a2: Push((int) 0)
0x15a3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x15a4: IF (Stack[-1] == 0) GOTO 0x15a7; Pop(1)

0x15a5: Stack[-2] = (bool) 1
0x15a6: Return(); Pop(0)

0x15a7: Stack[-2] = (bool) 0
0x15a8: Return(); Pop(0)

0x15a9: PushEmpty()
0x15aa: PushEmpty(int, string)
0x15ab: Stack[-1] = "microscope_d6q01_ospina_blood"
0x15ac: Call2 0x134c

0x15ad: Pop(1)
0x15ae: Push((int) 0)
0x15af: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x15b0: IF (Stack[-1] == 0) GOTO 0x15b3; Pop(1)

0x15b1: Stack[-2] = (bool) 1
0x15b2: Return(); Pop(0)

0x15b3: Stack[-2] = (bool) 0
0x15b4: Return(); Pop(0)

0x15b5: PushEmpty()
0x15b6: PushEmpty(int, string)
0x15b7: Stack[-1] = "d6q01"
0x15b8: Call2 0x134c

0x15b9: Pop(1)
0x15ba: Push((int) 1000)
0x15bb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x15bc: IF (Stack[-1] == 0) GOTO 0x15bf; Pop(1)

0x15bd: Stack[-2] = (bool) 1
0x15be: Return(); Pop(0)

0x15bf: Stack[-2] = (bool) 0
0x15c0: Return(); Pop(0)

0x15c1: PushEmpty()
0x15c2: PushEmpty(int, string)
0x15c3: Stack[-1] = "d6q01"
0x15c4: Call2 0x134c

0x15c5: Pop(1)
0x15c6: Push((int) -1)
0x15c7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x15c8: IF (Stack[-1] == 0) GOTO 0x15cb; Pop(1)

0x15c9: Stack[-2] = (bool) 1
0x15ca: Return(); Pop(0)

0x15cb: Stack[-2] = (bool) 0
0x15cc: Return(); Pop(0)

0x15cd: PushEmpty()
0x15ce: PushEmpty(bool)
0x15cf: Stack[-1] = (bool) 0
0x15d0: PushEmpty(bool)
0x15d1: Stack[-1] = (bool) 0
0x15d2: PushEmpty(int, string)
0x15d3: Stack[-1] = "d1q01"
0x15d4: Call2 0x134c

0x15d5: Pop(1)
0x15d6: Push((int) 0)
0x15d7: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x15d8: IF (Stack[-1] == 0) GOTO 0x15e1; Pop(1)

0x15d9: PushEmpty(int, string)
0x15da: Stack[-1] = "d1q01"
0x15db: Call2 0x134c

0x15dc: Pop(1)
0x15dd: Push((int) 1000)
0x15de: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x15df: IF (Stack[-1] == 0) GOTO 0x15e1; Pop(1)

0x15e0: Stack[-1] = (bool) 1
0x15e1: IF (Stack[-1] == 0) GOTO 0x15ea; Pop(1)

0x15e2: PushEmpty(int, string)
0x15e3: Stack[-1] = "d1q01"
0x15e4: Call2 0x134c

0x15e5: Pop(1)
0x15e6: Push((int) -1)
0x15e7: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x15e8: IF (Stack[-1] == 0) GOTO 0x15ea; Pop(1)

0x15e9: Stack[-1] = (bool) 1
0x15ea: IF (Stack[-1] == 0) GOTO 0x15ed; Pop(1)

0x15eb: Stack[-2] = (bool) 1
0x15ec: Return(); Pop(0)

0x15ed: Stack[-2] = (bool) 0
0x15ee: Return(); Pop(0)

0x15ef: PushEmpty(object, object)
0x15f0: Push((int) 623)
0x15f1: Push((int) 2)
0x15f2: Push((int) 532457)
0x15f3: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x15f4: Pop(3)
0x15f5: PushEmpty(bool, object, int)
0x15f6: Stack[-2] = Stack[-4]
0x15f7: Stack[-1] = (int) 37
0x15f8: Call2 0x1657

0x15f9: Pop(3)
0x15fa: Return(); Pop(2)

0x15fb: Stack[-1] = 0
0x15fc: PushEmpty(object, object)
0x15fd: Push((int) 71)
0x15fe: Push((int) 1)
0x15ff: Push((int) 512153)
0x1600: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1601: Pop(3)
0x1602: PushEmpty(bool, object, int)
0x1603: Stack[-2] = Stack[-4]
0x1604: Stack[-1] = (int) 25
0x1605: Call2 0x1657

0x1606: Pop(3)
0x1607: Return(); Pop(2)

0x1608: Stack[-1] = 0
0x1609: PushEmpty(object, object)
0x160a: Push((int) 70)
0x160b: Push((int) 1)
0x160c: Push((int) 512152)
0x160d: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x160e: Pop(3)
0x160f: PushEmpty(bool, object, int)
0x1610: Stack[-2] = Stack[-4]
0x1611: Stack[-1] = (int) 25
0x1612: Call2 0x1657

0x1613: Pop(3)
0x1614: Return(); Pop(2)

0x1615: Stack[-1] = 0
0x1616: PushEmpty(object, object)
0x1617: Push((int) 162)
0x1618: Push((int) 1)
0x1619: Push((int) 515395)
0x161a: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x161b: Pop(3)
0x161c: PushEmpty(bool, object, int)
0x161d: Stack[-2] = Stack[-4]
0x161e: Stack[-1] = (int) 111
0x161f: Call2 0x1657

0x1620: Pop(3)
0x1621: Return(); Pop(2)

0x1622: Stack[-1] = 0
0x1623: PushEmpty(object, object)
0x1624: Push((int) 121)
0x1625: Push((int) 1)
0x1626: Push((int) 513744)
0x1627: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1628: Pop(3)
0x1629: PushEmpty(bool, object, int)
0x162a: Stack[-2] = Stack[-4]
0x162b: Stack[-1] = (int) 111
0x162c: Call2 0x1657

0x162d: Pop(3)
0x162e: Return(); Pop(2)

0x162f: Stack[-1] = 0
0x1630: PushEmpty(object, object)
0x1631: Push((int) 721)
0x1632: Push((int) 1)
0x1633: Push((int) 538785)
0x1634: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1635: Pop(3)
0x1636: PushEmpty(bool, object, int)
0x1637: Stack[-2] = Stack[-4]
0x1638: Stack[-1] = (int) 111
0x1639: Call2 0x1657

0x163a: Pop(3)
0x163b: Return(); Pop(2)

0x163c: Stack[-1] = 0
0x163d: PushEmpty(object, object)
0x163e: Push((int) 178)
0x163f: Push((int) 1)
0x1640: Push((int) 515437)
0x1641: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1642: Pop(3)
0x1643: PushEmpty(bool, object, int)
0x1644: Stack[-2] = Stack[-4]
0x1645: Stack[-1] = (int) 175
0x1646: Call2 0x1657

0x1647: Pop(3)
0x1648: Return(); Pop(2)

0x1649: Stack[-1] = 0
0x164a: PushEmpty(object, object)
0x164b: @ GetDiaryRoot(Stack[-1])
0x164c: Pop(0)
0x164d: Pop(0); Push((bool) Stack[-1] == 0)
0x164e: IF (Stack[-1] == 0) GOTO 0x1654; Pop(1)

0x164f: Push("Can't retrieve diary root")
0x1650: @ Trace(Stack[-1])
0x1651: Pop(1)
0x1652: Stack[-3] = (bool) 0
0x1653: Return(); Pop(2)

0x1654: Stack[-3] = Stack[-1]
0x1655: Return(); Pop(2)

0x1656: Stack[-1] = 0
0x1657: PushEmpty(object, object, int, object, object, int)
0x1658: PushEmpty(object)
0x1659: Call2 0x164a

0x165a: Stack[-4] = Stack[-1]
0x165b: Pop(1)
0x165c: @@ Find(Stack[-7], Stack[-2])
0x165d: Pop(0)
0x165e: Pop(0); Push((bool) Stack[-2] == 0)
0x165f: IF (Stack[-1] == 0) GOTO 0x1666; Pop(1)

0x1660: Push("Can't find diary parent with id: ")
0x1661: Pop(1); Push(Stack[-1] + Stack[-8]);
0x1662: @ Trace(Stack[-1])
0x1663: Pop(1)
0x1664: Stack[-9] = (bool) 0
0x1665: Return(); Pop(6)

0x1666: @@ AddChild(Stack[-8])
0x1667: Pop(0)
0x1668: Push((int) 7)
0x1669: @ SendWorldWndMessage(Stack[-1])
0x166a: Pop(1)
0x166b: @@ GetCategory(Stack[-1])
0x166c: Pop(0)
0x166d: @ SetDiarySection(Stack[-1])
0x166e: Pop(0)
0x166f: Stack[-9] = (bool) 0
0x1670: Return(); Pop(6)

0x1671: Stack[-2] = 0
0x1672: Stack[-3] = 0
0x1673: PushEmpty(object, object, object, object)
0x1674: @ GetMainOutdoorScene(Stack[-2])
0x1675: Pop(0)
0x1676: Pop(0); Push((bool) Stack[-2] == 0)
0x1677: IF (Stack[-1] == 0) GOTO 0x167e; Pop(1)

0x1678: Push("Can't find main outdoor scene")
0x1679: @ Trace(Stack[-1])
0x167a: Pop(1)
0x167b: Stack[-1] = 0
0x167c: Stack[-5] = Stack[-1]
0x167d: Return(); Pop(4)

0x167e: @@ GetMap(Stack[-1])
0x167f: Pop(0)
0x1680: Stack[-5] = Stack[-1]
0x1681: Return(); Pop(4)

0x1682: Stack[-1] = 0
0x1683: Stack[-2] = 0
0x1684: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x1685: @ GetMainOutdoorScene(Stack[-2])
0x1686: Pop(0)
0x1687: Pop(0); Push((bool) Stack[-2] == 0)
0x1688: IF (Stack[-1] == 0) GOTO 0x168d; Pop(1)

0x1689: Push("Can't find main outdoor scene")
0x168a: @ Trace(Stack[-1])
0x168b: Pop(1)
0x168c: Return(); Pop(8)

0x168d: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x168e: Pop(0)
0x168f: Pop(0); Push((bool) Stack[-1] == 0)
0x1690: IF (Stack[-1] == 0) GOTO 0x1697; Pop(1)

0x1691: Push("Warning: outdoor scene locator ")
0x1692: Pop(1); Push(Stack[-1] + Stack[-11]);
0x1693: Push(" doesnt exist")
0x1694: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1695: @ Trace(Stack[-1])
0x1696: Pop(1)
0x1697: @@ GetMap(Stack[-11])
0x1698: Pop(0)
0x1699: Pop(0); Push((bool) Stack[-11] == 0)
0x169a: IF (Stack[-1] == 0) GOTO 0x169f; Pop(1)

0x169b: Push("Can't find map")
0x169c: @ Trace(Stack[-1])
0x169d: Pop(1)
0x169e: Return(); Pop(8)

0x169f: Push(CvectorIndex(Stack[-4], 0))
0x16a0: Push(CvectorIndex(Stack[-5], 2))
0x16a1: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x16a2: Pop(2)
0x16a3: Return(); Pop(8)

0x16a4: Stack[-2] = 0
0x16a5: PushEmpty(int, int)
0x16a6: Push("branch")
0x16a7: @ GetVariable(Stack[-1], Stack[-2])
0x16a8: Pop(1)
0x16a9: Push((int) 0)
0x16aa: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x16ab: IF (Stack[-1] == 0) GOTO 0x16af; Pop(1)

0x16ac: Stack[-3] = (int) 1
0x16ad: Return(); Pop(2)

0x16ae: GOTO 0x16b4

0x16af: Push((int) 1)
0x16b0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x16b1: IF (Stack[-1] == 0) GOTO 0x16b4; Pop(1)

0x16b2: Stack[-3] = (int) 2
0x16b3: Return(); Pop(2)

0x16b4: Stack[-3] = (int) 3
0x16b5: Return(); Pop(2)

0x16b6: PushEmpty()
0x16b7: Push(GlobalVars[1])
0x16b8: Pop(1); Push((bool) Stack[-1] == 0)
0x16b9: IF (Stack[-1] == 0) GOTO 0x16c3; Pop(1)

0x16ba: PushEmpty(int, object)
0x16bb: Stack[-1] = Stack[-3]
0x16bc: Push(-2, 1); TaskCall(8)
0x16bd: Call2 0xb30

0x16be: Pop(-2, 1); TaskReturn
0x16bf: Pop(2)
0x16c0: Push(GlobalVars[1])
0x16c1: Stack[-1] = (bool) 1
0x16c2: GlobalVars[1] = Stack[-1]; Pop(1)
0x16c3: PushEmpty(bool, int)
0x16c4: Stack[-1] = (int) 1
0x16c5: Call2 0x1397

0x16c6: Pop(1)
0x16c7: IF (Stack[-1] == 0) GOTO 0x16cf; Pop(1)

0x16c8: PushEmpty(int, object)
0x16c9: Stack[-1] = Stack[-3]
0x16ca: Push(-2, 1); TaskCall(10)
0x16cb: Call2 0xc5c

0x16cc: Pop(-2, 1); TaskReturn
0x16cd: Pop(2)
0x16ce: Return(); Pop(0)

0x16cf: PushEmpty(bool, int)
0x16d0: Stack[-1] = (int) 3
0x16d1: Call2 0x1397

0x16d2: Pop(1)
0x16d3: IF (Stack[-1] == 0) GOTO 0x16db; Pop(1)

0x16d4: PushEmpty(int, object)
0x16d5: Stack[-1] = Stack[-3]
0x16d6: Push(-2, 1); TaskCall(2)
0x16d7: Call2 0x2bb

0x16d8: Pop(-2, 1); TaskReturn
0x16d9: Pop(2)
0x16da: Return(); Pop(0)

0x16db: PushEmpty(bool, int)
0x16dc: Stack[-1] = (int) 4
0x16dd: Call2 0x1397

0x16de: Pop(1)
0x16df: IF (Stack[-1] == 0) GOTO 0x16e7; Pop(1)

0x16e0: PushEmpty(int, object)
0x16e1: Stack[-1] = Stack[-3]
0x16e2: Push(-2, 1); TaskCall(4)
0x16e3: Call2 0x61a

0x16e4: Pop(-2, 1); TaskReturn
0x16e5: Pop(2)
0x16e6: Return(); Pop(0)

0x16e7: PushEmpty(bool, int)
0x16e8: Stack[-1] = (int) 6
0x16e9: Call2 0x1397

0x16ea: Pop(1)
0x16eb: IF (Stack[-1] == 0) GOTO 0x16f3; Pop(1)

0x16ec: PushEmpty(int, object)
0x16ed: Stack[-1] = Stack[-3]
0x16ee: Push(-2, 1); TaskCall(0)
0x16ef: Call2 0x0

0x16f0: Pop(-2, 1); TaskReturn
0x16f1: Pop(2)
0x16f2: Return(); Pop(0)

0x16f3: PushEmpty(bool, int)
0x16f4: Stack[-1] = (int) 8
0x16f5: Call2 0x1397

0x16f6: Pop(1)
0x16f7: IF (Stack[-1] == 0) GOTO 0x16ff; Pop(1)

0x16f8: PushEmpty(int, object)
0x16f9: Stack[-1] = Stack[-3]
0x16fa: Push(-2, 1); TaskCall(6)
0x16fb: Call2 0x850

0x16fc: Pop(-2, 1); TaskReturn
0x16fd: Pop(2)
0x16fe: Return(); Pop(0)

0x16ff: PushEmpty(bool, int)
0x1700: Stack[-1] = (int) 12
0x1701: Call2 0x1397

0x1702: Pop(1)
0x1703: IF (Stack[-1] == 0) GOTO 0x170b; Pop(1)

0x1704: PushEmpty(int, object)
0x1705: Stack[-1] = Stack[-3]
0x1706: Push(-2, 1); TaskCall(12)
0x1707: Call2 0xf35

0x1708: Pop(-2, 1); TaskReturn
0x1709: Pop(2)
0x170a: Return(); Pop(0)

0x170b: PushEmpty(int, object)
0x170c: Stack[-1] = Stack[-3]
0x170d: Push(-2, 1); TaskCall(14)
0x170e: Call2 0x1038

0x170f: Pop(-2, 1); TaskReturn
0x1710: Pop(2)
0x1711: Return(); Pop(0)

