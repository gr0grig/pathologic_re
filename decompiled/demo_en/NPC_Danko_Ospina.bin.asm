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
	Strange
	Grin
	Grimacing
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
	ood1Ospina2
	unlock_butcher
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
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	TriggerWorld (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x105a
RunTask = 16

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xbe Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x31a Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x44d Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x716 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa28 Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xc51 Vars = (int, int)
	GTASK_12 Vars = (object) Params = 2
	GTASK_13 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xf09 Vars = (int, int)
	GTASK_14 Vars = (object) Params = 2
	GTASK_15 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1030 Vars = (int, int)
	GTASK_16 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x10a6 Vars = (int)
		EVENT_6 Op = 0x10cc Vars = ()
		EVENT_5 Op = 0x10db Vars = ()
		EVENT_45 Op = 0x10e8 Vars = (bool)
		EVENT_0 Op = 0x10f4 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x117d

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x130c

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x130a

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x130e

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x1310

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x15b4

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
0x31: Call2 0x1291

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x11d2

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
0x48: Call2 0x11c1

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
0x56: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x57: PushEmpty(bool)
0x58: Stack[-1] = (bool) 0
0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b: Call2 0x140e

0x5c: Pop(1)
0x5d: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x5e: PushEmpty(bool, object)
0x5f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x60: Call2 0x141a

0x61: Pop(1)
0x62: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x63: Stack[-1] = (bool) 1
0x64: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x65: PushEmpty(object, object)
0x66: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x67: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x68: Call2 0x131b

0x69: Pop(2)
0x6a: PushEmpty(string)
0x6b: Stack[-1] = "Neutral"
0x6c: Call2 0xa8

0x6d: Pop(1)
0x6e: Push((int) 532352)
0x6f: @@ SetMessage(Stack[-1])
0x70: Pop(1)
0x71: @@ ClearReplies()
0x72: Pop(0)
0x73: Push((int) 532353)
0x74: Push((int) 33783)
0x75: Push((int) 33782)
0x76: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x77: Pop(3)
0x78: GOTO 0x8a

0x79: PushEmpty(string)
0x7a: Stack[-1] = "Neutral"
0x7b: Call2 0xa8

0x7c: Pop(1)
0x7d: Push((int) 532393)
0x7e: @@ SetMessage(Stack[-1])
0x7f: Pop(1)
0x80: @@ ClearReplies()
0x81: Pop(0)
0x82: Push((int) 532453)
0x83: Push((int) -1)
0x84: Push((int) 33895)
0x85: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x86: Pop(3)
0x87: GOTO 0x8a

0x88: Return(); Pop(0)

0x89: GOTO 0x55

0x8a: PushEmpty(bool)
0x8b: Call2 0x1312

0x8c: Pop(0)
0x8d: IF (Stack[-1] == 0) GOTO 0x99; Pop(1)

0x8e: @ lshWaitForAnimEnd()
0x8f: Pop(0)
0x90: Push( Stack[3 + Tasks[-1].StackPointer] )
0x91: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x92: GOTO 0x98

0x93: PushEmpty(string)
0x94: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x95: Call2 0x125c

0x96: Pop(1)
0x97: GOTO 0x8e

0x98: GOTO 0xa7

0x99: Push("all")
0x9a: Push("idle")
0x9b: @ PlayAnimation(Stack[-2], Stack[-1])
0x9c: Pop(2)
0x9d: @ WaitForAnimEnd()
0x9e: Pop(0)
0x9f: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa0: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0xa1: GOTO 0xa7

0xa2: Push("all")
0xa3: Push("idle")
0xa4: @ PlayAnimation(Stack[-2], Stack[-1])
0xa5: Pop(2)
0xa6: GOTO 0x9d

0xa7: Return(); Pop(0)

0xa8: PushEmpty()
0xa9: PushEmpty(bool)
0xaa: Call2 0x1312

0xab: Pop(0)
0xac: Pop(1); Push((bool) Stack[-1] == 0)
0xad: IF (Stack[-1] == 0) GOTO 0xaf; Pop(1)

0xae: Return(); Pop(0)

0xaf: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xb0: IF (Stack[-1] == 0) GOTO 0xb2; Pop(1)

0xb1: Return(); Pop(0)

0xb2: PushEmpty(string, bool)
0xb3: Stack[-2] = Stack[-3]
0xb4: Push("")
0xb5: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb6: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb7: Stack[-1] = (bool) 0
0xb8: GOTO 0xba

0xb9: Stack[-1] = (bool) 1
0xba: Call2 0x126c

0xbb: Pop(2)
0xbc: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xbd: Return(); Pop(0)

0xbe: PushEmpty()
0xbf: Push((int) 1)
0xc0: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0xc1: PushEmpty()
0xc2: Call2 0x128a

0xc3: Pop(0)
0xc4: Push((int) 33796)
0xc5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc6: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xc7: PushEmpty(object, object)
0xc8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xca: Call2 0x1314

0xcb: Pop(2)
0xcc: Push((int) 33811)
0xcd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xce: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xcf: PushEmpty(object, object)
0xd0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd2: Call2 0x1321

0xd3: Pop(2)
0xd4: Push((int) 33781)
0xd5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd6: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0xd7: PushEmpty(bool)
0xd8: Stack[-1] = (bool) 0
0xd9: PushEmpty(bool, object)
0xda: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xdb: Call2 0x140e

0xdc: Pop(1)
0xdd: IF (Stack[-1] == 0) GOTO 0xe4; Pop(1)

0xde: PushEmpty(bool, object)
0xdf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe0: Call2 0x141a

0xe1: Pop(1)
0xe2: IF (Stack[-1] == 0) GOTO 0xe4; Pop(1)

0xe3: Stack[-1] = (bool) 1
0xe4: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xe5: PushEmpty(object, object)
0xe6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe8: Call2 0x131b

0xe9: Pop(2)
0xea: PushEmpty(string)
0xeb: Stack[-1] = "Neutral"
0xec: Call2 0xa8

0xed: Pop(1)
0xee: Push((int) 532352)
0xef: @@ SetMessage(Stack[-1])
0xf0: Pop(1)
0xf1: @@ ClearReplies()
0xf2: Pop(0)
0xf3: Push((int) 532353)
0xf4: Push((int) 33783)
0xf5: Push((int) 33782)
0xf6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf7: Pop(3)
0xf8: Return(); Pop(0)

0xf9: PushEmpty(string)
0xfa: Stack[-1] = "Neutral"
0xfb: Call2 0xa8

0xfc: Pop(1)
0xfd: Push((int) 532393)
0xfe: @@ SetMessage(Stack[-1])
0xff: Pop(1)
0x100: @@ ClearReplies()
0x101: Pop(0)
0x102: Push((int) 532453)
0x103: Push((int) -1)
0x104: Push((int) 33895)
0x105: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x106: Pop(3)
0x107: Return(); Pop(0)

0x108: Push((int) 33836)
0x109: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10a: IF (Stack[-1] == 0) GOTO 0x10b; Pop(1)

0x10b: Push((int) 33847)
0x10c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10d: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x10e: PushEmpty(string)
0x10f: Stack[-1] = "Neutral"
0x110: Call2 0xa8

0x111: Pop(1)
0x112: Push((int) 532405)
0x113: @@ SetMessage(Stack[-1])
0x114: Pop(1)
0x115: @@ ClearReplies()
0x116: Pop(0)
0x117: Push((int) 532406)
0x118: Push((int) -1)
0x119: Push((int) 33848)
0x11a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11b: Pop(3)
0x11c: Push((int) 532407)
0x11d: Push((int) -1)
0x11e: Push((int) 33849)
0x11f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x120: Pop(3)
0x121: Return(); Pop(0)

0x122: Push((int) 33838)
0x123: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x124: IF (Stack[-1] == 0) GOTO 0x13e; Pop(1)

0x125: PushEmpty(string)
0x126: Stack[-1] = "Strange"
0x127: Call2 0xa8

0x128: Pop(1)
0x129: Push((int) 532397)
0x12a: @@ SetMessage(Stack[-1])
0x12b: Pop(1)
0x12c: @@ ClearReplies()
0x12d: Pop(0)
0x12e: Push((int) 532398)
0x12f: Push((int) 33840)
0x130: Push((int) 33839)
0x131: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x132: Pop(3)
0x133: Push((int) 532402)
0x134: Push((int) -1)
0x135: Push((int) 33843)
0x136: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x137: Pop(3)
0x138: Push((int) 532403)
0x139: Push((int) 33840)
0x13a: Push((int) 33844)
0x13b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13c: Pop(3)
0x13d: Return(); Pop(0)

0x13e: Push((int) 33840)
0x13f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x140: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0x141: PushEmpty(string)
0x142: Stack[-1] = "Neutral"
0x143: Call2 0xa8

0x144: Pop(1)
0x145: Push((int) 532399)
0x146: @@ SetMessage(Stack[-1])
0x147: Pop(1)
0x148: @@ ClearReplies()
0x149: Pop(0)
0x14a: Push((int) 532400)
0x14b: Push((int) -1)
0x14c: Push((int) 33841)
0x14d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14e: Pop(3)
0x14f: Push((int) 532401)
0x150: Push((int) -1)
0x151: Push((int) 33842)
0x152: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x153: Pop(3)
0x154: Return(); Pop(0)

0x155: Push((int) 33825)
0x156: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x157: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x158: Push((int) 33827)
0x159: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15a: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x15b: PushEmpty(string)
0x15c: Stack[-1] = "Grin"
0x15d: Call2 0xa8

0x15e: Pop(1)
0x15f: Push((int) 532389)
0x160: @@ SetMessage(Stack[-1])
0x161: Pop(1)
0x162: @@ ClearReplies()
0x163: Pop(0)
0x164: Push((int) 532390)
0x165: Push((int) 33819)
0x166: Push((int) 33828)
0x167: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x168: Pop(3)
0x169: Push((int) 532391)
0x16a: Push((int) 33819)
0x16b: Push((int) 33830)
0x16c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16d: Pop(3)
0x16e: Return(); Pop(0)

0x16f: Push((int) 33783)
0x170: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x171: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x172: PushEmpty(string)
0x173: Stack[-1] = "Grin"
0x174: Call2 0xa8

0x175: Pop(1)
0x176: Push((int) 532354)
0x177: @@ SetMessage(Stack[-1])
0x178: Pop(1)
0x179: @@ ClearReplies()
0x17a: Pop(0)
0x17b: Push((int) 532355)
0x17c: Push((int) 33785)
0x17d: Push((int) 33784)
0x17e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17f: Pop(3)
0x180: Push((int) 532385)
0x181: Push((int) 33785)
0x182: Push((int) 33822)
0x183: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x184: Pop(3)
0x185: Return(); Pop(0)

0x186: Push((int) 33785)
0x187: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x188: IF (Stack[-1] == 0) GOTO 0x19d; Pop(1)

0x189: PushEmpty(string)
0x18a: Stack[-1] = "Neutral"
0x18b: Call2 0xa8

0x18c: Pop(1)
0x18d: Push((int) 532356)
0x18e: @@ SetMessage(Stack[-1])
0x18f: Pop(1)
0x190: @@ ClearReplies()
0x191: Pop(0)
0x192: Push((int) 532357)
0x193: Push((int) 33787)
0x194: Push((int) 33786)
0x195: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x196: Pop(3)
0x197: Push((int) 532382)
0x198: Push((int) 33819)
0x199: Push((int) 33818)
0x19a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19b: Pop(3)
0x19c: Return(); Pop(0)

0x19d: Push((int) 33819)
0x19e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19f: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x1a0: PushEmpty(string)
0x1a1: Stack[-1] = "Neutral"
0x1a2: Call2 0xa8

0x1a3: Pop(1)
0x1a4: Push((int) 532383)
0x1a5: @@ SetMessage(Stack[-1])
0x1a6: Pop(1)
0x1a7: @@ ClearReplies()
0x1a8: Pop(0)
0x1a9: Push((int) 532384)
0x1aa: Push((int) 33787)
0x1ab: Push((int) 33820)
0x1ac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ad: Pop(3)
0x1ae: Return(); Pop(0)

0x1af: Push((int) 33787)
0x1b0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b1: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1b2: PushEmpty(string)
0x1b3: Stack[-1] = "Grin"
0x1b4: Call2 0xa8

0x1b5: Pop(1)
0x1b6: Push((int) 532358)
0x1b7: @@ SetMessage(Stack[-1])
0x1b8: Pop(1)
0x1b9: @@ ClearReplies()
0x1ba: Pop(0)
0x1bb: Push((int) 532359)
0x1bc: Push((int) 33789)
0x1bd: Push((int) 33788)
0x1be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1bf: Pop(3)
0x1c0: Push((int) 532373)
0x1c1: Push((int) 33808)
0x1c2: Push((int) 33807)
0x1c3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c4: Pop(3)
0x1c5: Push((int) 532379)
0x1c6: Push((int) 33815)
0x1c7: Push((int) 33814)
0x1c8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c9: Pop(3)
0x1ca: Return(); Pop(0)

0x1cb: Push((int) 33815)
0x1cc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1cd: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1ce: PushEmpty(string)
0x1cf: Stack[-1] = "Neutral"
0x1d0: Call2 0xa8

0x1d1: Pop(1)
0x1d2: Push((int) 532380)
0x1d3: @@ SetMessage(Stack[-1])
0x1d4: Pop(1)
0x1d5: @@ ClearReplies()
0x1d6: Pop(0)
0x1d7: Push((int) 532381)
0x1d8: Push((int) 33808)
0x1d9: Push((int) 33816)
0x1da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1db: Pop(3)
0x1dc: Return(); Pop(0)

0x1dd: Push((int) 33808)
0x1de: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1df: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1e0: PushEmpty(string)
0x1e1: Stack[-1] = "Neutral"
0x1e2: Call2 0xa8

0x1e3: Pop(1)
0x1e4: Push((int) 532374)
0x1e5: @@ SetMessage(Stack[-1])
0x1e6: Pop(1)
0x1e7: @@ ClearReplies()
0x1e8: Pop(0)
0x1e9: Push((int) 532375)
0x1ea: Push((int) 33810)
0x1eb: Push((int) 33809)
0x1ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ed: Pop(3)
0x1ee: Push((int) 532378)
0x1ef: Push((int) 33789)
0x1f0: Push((int) 33812)
0x1f1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f2: Pop(3)
0x1f3: Return(); Pop(0)

0x1f4: Push((int) 33810)
0x1f5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f6: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x1f7: PushEmpty(string)
0x1f8: Stack[-1] = "Neutral"
0x1f9: Call2 0xa8

0x1fa: Pop(1)
0x1fb: Push((int) 532376)
0x1fc: @@ SetMessage(Stack[-1])
0x1fd: Pop(1)
0x1fe: @@ ClearReplies()
0x1ff: Pop(0)
0x200: Push((int) 532377)
0x201: Push((int) -1)
0x202: Push((int) 33811)
0x203: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x204: Pop(3)
0x205: Return(); Pop(0)

0x206: Push((int) 33789)
0x207: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x208: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x209: PushEmpty(string)
0x20a: Stack[-1] = "Grin"
0x20b: Call2 0xa8

0x20c: Pop(1)
0x20d: Push((int) 532360)
0x20e: @@ SetMessage(Stack[-1])
0x20f: Pop(1)
0x210: @@ ClearReplies()
0x211: Pop(0)
0x212: Push((int) 532361)
0x213: Push((int) 33795)
0x214: Push((int) 33790)
0x215: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x216: Pop(3)
0x217: Push((int) 532362)
0x218: Push((int) 33793)
0x219: Push((int) 33792)
0x21a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21b: Pop(3)
0x21c: Push((int) 532372)
0x21d: Push((int) 33810)
0x21e: Push((int) 33805)
0x21f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x220: Pop(3)
0x221: Return(); Pop(0)

0x222: Push((int) 33793)
0x223: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x224: IF (Stack[-1] == 0) GOTO 0x239; Pop(1)

0x225: PushEmpty(string)
0x226: Stack[-1] = "Neutral"
0x227: Call2 0xa8

0x228: Pop(1)
0x229: Push((int) 532363)
0x22a: @@ SetMessage(Stack[-1])
0x22b: Pop(1)
0x22c: @@ ClearReplies()
0x22d: Pop(0)
0x22e: Push((int) 532364)
0x22f: Push((int) 33795)
0x230: Push((int) 33794)
0x231: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x232: Pop(3)
0x233: Push((int) 532368)
0x234: Push((int) 33800)
0x235: Push((int) 33799)
0x236: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x237: Pop(3)
0x238: Return(); Pop(0)

0x239: Push((int) 33800)
0x23a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x23b: IF (Stack[-1] == 0) GOTO 0x250; Pop(1)

0x23c: PushEmpty(string)
0x23d: Stack[-1] = "Neutral"
0x23e: Call2 0xa8

0x23f: Pop(1)
0x240: Push((int) 532369)
0x241: @@ SetMessage(Stack[-1])
0x242: Pop(1)
0x243: @@ ClearReplies()
0x244: Pop(0)
0x245: Push((int) 532370)
0x246: Push((int) 33795)
0x247: Push((int) 33801)
0x248: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x249: Pop(3)
0x24a: Push((int) 532371)
0x24b: Push((int) 33810)
0x24c: Push((int) 33803)
0x24d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24e: Pop(3)
0x24f: Return(); Pop(0)

0x250: Push((int) 33795)
0x251: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x252: IF (Stack[-1] == 0) GOTO 0x267; Pop(1)

0x253: PushEmpty(string)
0x254: Stack[-1] = "Neutral"
0x255: Call2 0xa8

0x256: Pop(1)
0x257: Push((int) 532365)
0x258: @@ SetMessage(Stack[-1])
0x259: Pop(1)
0x25a: @@ ClearReplies()
0x25b: Pop(0)
0x25c: Push((int) 532366)
0x25d: Push((int) -1)
0x25e: Push((int) 33796)
0x25f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x260: Pop(3)
0x261: Push((int) 532367)
0x262: Push((int) 33810)
0x263: Push((int) 33797)
0x264: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x265: Pop(3)
0x266: Return(); Pop(0)

0x267: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x268: PushEmpty(bool)
0x269: Call2 0x1312

0x26a: Pop(0)
0x26b: IF (Stack[-1] == 0) GOTO 0x26f; Pop(1)

0x26c: @ lshStopAnimation()
0x26d: Pop(0)
0x26e: GOTO 0x271

0x26f: @ StopAnimation()
0x270: Pop(0)
0x271: Return(); Pop(0)

0x272: GOTO 0xbf

0x273: Return(); Pop(0)

0x274: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x275: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x276: PushEmpty(bool, object, float)
0x277: Stack[-2] = Stack[-12]
0x278: Stack[-1] = (float) 70.0
0x279: Call2 0x117d

0x27a: Pop(2)
0x27b: Pop(1); Push((bool) Stack[-1] == 0)
0x27c: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x27d: Stack[-10] = (int) -2
0x27e: Return(); Pop(8)

0x27f: @ CreateDialog(Stack[-4])
0x280: Pop(0)
0x281: PushEmpty(int)
0x282: Call2 0x130c

0x283: Pop(0)
0x284: @@ SetNPCName(Stack[-1])
0x285: Pop(1)
0x286: PushEmpty(int)
0x287: Call2 0x130a

0x288: Pop(0)
0x289: @@ SetNPCDescription(Stack[-1])
0x28a: Pop(1)
0x28b: PushEmpty(string)
0x28c: Call2 0x130e

0x28d: Pop(0)
0x28e: @@ SetPhoto(Stack[-1])
0x28f: Pop(1)
0x290: PushEmpty(string)
0x291: Call2 0x1310

0x292: Pop(0)
0x293: @@ SetPhoto2(Stack[-1])
0x294: Pop(1)
0x295: PushEmpty(int)
0x296: Call2 0x15b4

0x297: Pop(0)
0x298: @@ SetPlayerName(Stack[-1])
0x299: Pop(1)
0x29a: Stack[-2] = (int) -1
0x29b: @ IsOverrideActive(Stack[-3])
0x29c: Pop(0)
0x29d: Push(Stack[-3])
0x29e: IF (Stack[-1] == 0) GOTO 0x2a1; Pop(1)

0x29f: Stack[-10] = (int) -2
0x2a0: Return(); Pop(8)

0x2a1: @ DoDialog(Stack[-4])
0x2a2: Pop(0)
0x2a3: PushEmpty(bool, object)
0x2a4: PushEmpty(object)
0x2a5: Call2 0x1291

0x2a6: Stack[-2] = Stack[-1]
0x2a7: Pop(1)
0x2a8: Call2 0x11d2

0x2a9: Pop(2)
0x2aa: PushEmpty(object, object)
0x2ab: Stack[-2] = Stack[-11]
0x2ac: Stack[-1] = Stack[-6]
0x2ad: Push(-2, 4); TaskCall(3)
0x2ae: Call2 0x2c5

0x2af: Pop(-2, 4); TaskReturn
0x2b0: Pop(2)
0x2b1: @@ IsDialogEnd(Stack[-1])
0x2b2: Pop(0)
0x2b3: Pop(0); Push((bool) Stack[-1] == 0)
0x2b4: IF (Stack[-1] == 0) GOTO 0x2ba; Pop(1)

0x2b5: @ sync()
0x2b6: Pop(0)
0x2b7: @@ IsDialogEnd(Stack[-1])
0x2b8: Pop(0)
0x2b9: GOTO 0x2b3

0x2ba: PushEmpty(object)
0x2bb: Stack[-1] = Stack[-10]
0x2bc: Call2 0x11c1

0x2bd: Pop(1)
0x2be: @ StopDialog(Stack[-4])
0x2bf: Pop(0)
0x2c0: @@ GetReturnValue(Stack[-2])
0x2c1: Pop(0)
0x2c2: Stack[-10] = Stack[-2]
0x2c3: Return(); Pop(8)

0x2c4: Stack[-4] = 0
0x2c5: PushEmpty()
0x2c6: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x2c7: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x2c8: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x2c9: Push((int) 1)
0x2ca: IF (Stack[-1] == 0) GOTO 0x2e6; Pop(1)

0x2cb: PushEmpty(string)
0x2cc: Stack[-1] = "Neutral"
0x2cd: Call2 0x304

0x2ce: Pop(1)
0x2cf: Push((int) 535294)
0x2d0: @@ SetMessage(Stack[-1])
0x2d1: Pop(1)
0x2d2: @@ ClearReplies()
0x2d3: Pop(0)
0x2d4: Push((int) 535295)
0x2d5: Push((int) 36973)
0x2d6: Push((int) 36972)
0x2d7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d8: Pop(3)
0x2d9: Push((int) 535302)
0x2da: Push((int) -1)
0x2db: Push((int) 36980)
0x2dc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2dd: Pop(3)
0x2de: Push((int) 535303)
0x2df: Push((int) -1)
0x2e0: Push((int) 36981)
0x2e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e2: Pop(3)
0x2e3: GOTO 0x2e6

0x2e4: Return(); Pop(0)

0x2e5: GOTO 0x2c9

0x2e6: PushEmpty(bool)
0x2e7: Call2 0x1312

0x2e8: Pop(0)
0x2e9: IF (Stack[-1] == 0) GOTO 0x2f5; Pop(1)

0x2ea: @ lshWaitForAnimEnd()
0x2eb: Pop(0)
0x2ec: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2ed: IF (Stack[-1] == 0) GOTO 0x2ef; Pop(1)

0x2ee: GOTO 0x2f4

0x2ef: PushEmpty(string)
0x2f0: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x2f1: Call2 0x125c

0x2f2: Pop(1)
0x2f3: GOTO 0x2ea

0x2f4: GOTO 0x303

0x2f5: Push("all")
0x2f6: Push("idle")
0x2f7: @ PlayAnimation(Stack[-2], Stack[-1])
0x2f8: Pop(2)
0x2f9: @ WaitForAnimEnd()
0x2fa: Pop(0)
0x2fb: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2fc: IF (Stack[-1] == 0) GOTO 0x2fe; Pop(1)

0x2fd: GOTO 0x303

0x2fe: Push("all")
0x2ff: Push("idle")
0x300: @ PlayAnimation(Stack[-2], Stack[-1])
0x301: Pop(2)
0x302: GOTO 0x2f9

0x303: Return(); Pop(0)

0x304: PushEmpty()
0x305: PushEmpty(bool)
0x306: Call2 0x1312

0x307: Pop(0)
0x308: Pop(1); Push((bool) Stack[-1] == 0)
0x309: IF (Stack[-1] == 0) GOTO 0x30b; Pop(1)

0x30a: Return(); Pop(0)

0x30b: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x30c: IF (Stack[-1] == 0) GOTO 0x30e; Pop(1)

0x30d: Return(); Pop(0)

0x30e: PushEmpty(string, bool)
0x30f: Stack[-2] = Stack[-3]
0x310: Push("")
0x311: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x312: IF (Stack[-1] == 0) GOTO 0x315; Pop(1)

0x313: Stack[-1] = (bool) 0
0x314: GOTO 0x316

0x315: Stack[-1] = (bool) 1
0x316: Call2 0x126c

0x317: Pop(2)
0x318: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x319: Return(); Pop(0)

0x31a: PushEmpty()
0x31b: Push((int) 1)
0x31c: IF (Stack[-1] == 0) GOTO 0x376; Pop(1)

0x31d: PushEmpty()
0x31e: Call2 0x128a

0x31f: Pop(0)
0x320: Push((int) 36971)
0x321: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x322: IF (Stack[-1] == 0) GOTO 0x33c; Pop(1)

0x323: PushEmpty(string)
0x324: Stack[-1] = "Neutral"
0x325: Call2 0x304

0x326: Pop(1)
0x327: Push((int) 535294)
0x328: @@ SetMessage(Stack[-1])
0x329: Pop(1)
0x32a: @@ ClearReplies()
0x32b: Pop(0)
0x32c: Push((int) 535295)
0x32d: Push((int) 36973)
0x32e: Push((int) 36972)
0x32f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x330: Pop(3)
0x331: Push((int) 535302)
0x332: Push((int) -1)
0x333: Push((int) 36980)
0x334: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x335: Pop(3)
0x336: Push((int) 535303)
0x337: Push((int) -1)
0x338: Push((int) 36981)
0x339: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x33a: Pop(3)
0x33b: Return(); Pop(0)

0x33c: Push((int) 36973)
0x33d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x33e: IF (Stack[-1] == 0) GOTO 0x353; Pop(1)

0x33f: PushEmpty(string)
0x340: Stack[-1] = "Neutral"
0x341: Call2 0x304

0x342: Pop(1)
0x343: Push((int) 535296)
0x344: @@ SetMessage(Stack[-1])
0x345: Pop(1)
0x346: @@ ClearReplies()
0x347: Pop(0)
0x348: Push((int) 535297)
0x349: Push((int) 36975)
0x34a: Push((int) 36974)
0x34b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x34c: Pop(3)
0x34d: Push((int) 535301)
0x34e: Push((int) 36975)
0x34f: Push((int) 36978)
0x350: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x351: Pop(3)
0x352: Return(); Pop(0)

0x353: Push((int) 36975)
0x354: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x355: IF (Stack[-1] == 0) GOTO 0x36a; Pop(1)

0x356: PushEmpty(string)
0x357: Stack[-1] = "Neutral"
0x358: Call2 0x304

0x359: Pop(1)
0x35a: Push((int) 535298)
0x35b: @@ SetMessage(Stack[-1])
0x35c: Pop(1)
0x35d: @@ ClearReplies()
0x35e: Pop(0)
0x35f: Push((int) 535299)
0x360: Push((int) -1)
0x361: Push((int) 36976)
0x362: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x363: Pop(3)
0x364: Push((int) 535300)
0x365: Push((int) -1)
0x366: Push((int) 36977)
0x367: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x368: Pop(3)
0x369: Return(); Pop(0)

0x36a: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x36b: PushEmpty(bool)
0x36c: Call2 0x1312

0x36d: Pop(0)
0x36e: IF (Stack[-1] == 0) GOTO 0x372; Pop(1)

0x36f: @ lshStopAnimation()
0x370: Pop(0)
0x371: GOTO 0x374

0x372: @ StopAnimation()
0x373: Pop(0)
0x374: Return(); Pop(0)

0x375: GOTO 0x31b

0x376: Return(); Pop(0)

0x377: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x378: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x379: PushEmpty(bool, object, float)
0x37a: Stack[-2] = Stack[-12]
0x37b: Stack[-1] = (float) 70.0
0x37c: Call2 0x117d

0x37d: Pop(2)
0x37e: Pop(1); Push((bool) Stack[-1] == 0)
0x37f: IF (Stack[-1] == 0) GOTO 0x382; Pop(1)

0x380: Stack[-10] = (int) -2
0x381: Return(); Pop(8)

0x382: @ CreateDialog(Stack[-4])
0x383: Pop(0)
0x384: PushEmpty(int)
0x385: Call2 0x130c

0x386: Pop(0)
0x387: @@ SetNPCName(Stack[-1])
0x388: Pop(1)
0x389: PushEmpty(int)
0x38a: Call2 0x130a

0x38b: Pop(0)
0x38c: @@ SetNPCDescription(Stack[-1])
0x38d: Pop(1)
0x38e: PushEmpty(string)
0x38f: Call2 0x130e

0x390: Pop(0)
0x391: @@ SetPhoto(Stack[-1])
0x392: Pop(1)
0x393: PushEmpty(string)
0x394: Call2 0x1310

0x395: Pop(0)
0x396: @@ SetPhoto2(Stack[-1])
0x397: Pop(1)
0x398: PushEmpty(int)
0x399: Call2 0x15b4

0x39a: Pop(0)
0x39b: @@ SetPlayerName(Stack[-1])
0x39c: Pop(1)
0x39d: Stack[-2] = (int) -1
0x39e: @ IsOverrideActive(Stack[-3])
0x39f: Pop(0)
0x3a0: Push(Stack[-3])
0x3a1: IF (Stack[-1] == 0) GOTO 0x3a4; Pop(1)

0x3a2: Stack[-10] = (int) -2
0x3a3: Return(); Pop(8)

0x3a4: @ DoDialog(Stack[-4])
0x3a5: Pop(0)
0x3a6: PushEmpty(bool, object)
0x3a7: PushEmpty(object)
0x3a8: Call2 0x1291

0x3a9: Stack[-2] = Stack[-1]
0x3aa: Pop(1)
0x3ab: Call2 0x11d2

0x3ac: Pop(2)
0x3ad: PushEmpty(object, object)
0x3ae: Stack[-2] = Stack[-11]
0x3af: Stack[-1] = Stack[-6]
0x3b0: Push(-2, 4); TaskCall(5)
0x3b1: Call2 0x3c8

0x3b2: Pop(-2, 4); TaskReturn
0x3b3: Pop(2)
0x3b4: @@ IsDialogEnd(Stack[-1])
0x3b5: Pop(0)
0x3b6: Pop(0); Push((bool) Stack[-1] == 0)
0x3b7: IF (Stack[-1] == 0) GOTO 0x3bd; Pop(1)

0x3b8: @ sync()
0x3b9: Pop(0)
0x3ba: @@ IsDialogEnd(Stack[-1])
0x3bb: Pop(0)
0x3bc: GOTO 0x3b6

0x3bd: PushEmpty(object)
0x3be: Stack[-1] = Stack[-10]
0x3bf: Call2 0x11c1

0x3c0: Pop(1)
0x3c1: @ StopDialog(Stack[-4])
0x3c2: Pop(0)
0x3c3: @@ GetReturnValue(Stack[-2])
0x3c4: Pop(0)
0x3c5: Stack[-10] = Stack[-2]
0x3c6: Return(); Pop(8)

0x3c7: Stack[-4] = 0
0x3c8: PushEmpty()
0x3c9: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x3ca: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x3cb: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x3cc: Push((int) 1)
0x3cd: IF (Stack[-1] == 0) GOTO 0x419; Pop(1)

0x3ce: PushEmpty(string)
0x3cf: Stack[-1] = "Neutral"
0x3d0: Call2 0x437

0x3d1: Pop(1)
0x3d2: Push((int) 512729)
0x3d3: @@ SetMessage(Stack[-1])
0x3d4: Pop(1)
0x3d5: @@ ClearReplies()
0x3d6: Pop(0)
0x3d7: PushEmpty(bool)
0x3d8: Stack[-1] = (bool) 0
0x3d9: PushEmpty(bool, object)
0x3da: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3db: Call2 0x149e

0x3dc: Pop(1)
0x3dd: IF (Stack[-1] == 0) GOTO 0x3e4; Pop(1)

0x3de: PushEmpty(bool, object)
0x3df: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3e0: Call2 0x1492

0x3e1: Pop(1)
0x3e2: IF (Stack[-1] == 0) GOTO 0x3e4; Pop(1)

0x3e3: Stack[-1] = (bool) 1
0x3e4: IF (Stack[-1] == 0) GOTO 0x3ea; Pop(1)

0x3e5: Push((int) 512731)
0x3e6: Push((int) 3851)
0x3e7: Push((int) 13924)
0x3e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e9: Pop(3)
0x3ea: PushEmpty(bool)
0x3eb: Stack[-1] = (bool) 0
0x3ec: PushEmpty(bool)
0x3ed: Stack[-1] = (bool) 0
0x3ee: PushEmpty(bool)
0x3ef: Stack[-1] = (bool) 0
0x3f0: PushEmpty(bool, object)
0x3f1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3f2: Call2 0x14aa

0x3f3: Pop(1)
0x3f4: IF (Stack[-1] == 0) GOTO 0x3fb; Pop(1)

0x3f5: PushEmpty(bool, object)
0x3f6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3f7: Call2 0x14da

0x3f8: Pop(1)
0x3f9: IF (Stack[-1] == 0) GOTO 0x3fb; Pop(1)

0x3fa: Stack[-1] = (bool) 1
0x3fb: IF (Stack[-1] == 0) GOTO 0x403; Pop(1)

0x3fc: PushEmpty(bool, object)
0x3fd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3fe: Call2 0x14e6

0x3ff: Pop(1)
0x400: Pop(1); Push((bool) Stack[-1] == 0)
0x401: IF (Stack[-1] == 0) GOTO 0x403; Pop(1)

0x402: Stack[-1] = (bool) 1
0x403: IF (Stack[-1] == 0) GOTO 0x40b; Pop(1)

0x404: PushEmpty(bool, object)
0x405: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x406: Call2 0x14f2

0x407: Pop(1)
0x408: Pop(1); Push((bool) Stack[-1] == 0)
0x409: IF (Stack[-1] == 0) GOTO 0x40b; Pop(1)

0x40a: Stack[-1] = (bool) 1
0x40b: IF (Stack[-1] == 0) GOTO 0x411; Pop(1)

0x40c: Push((int) 512730)
0x40d: Push((int) 11927)
0x40e: Push((int) 13923)
0x40f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x410: Pop(3)
0x411: Push((int) 512732)
0x412: Push((int) -1)
0x413: Push((int) 13926)
0x414: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x415: Pop(3)
0x416: GOTO 0x419

0x417: Return(); Pop(0)

0x418: GOTO 0x3cc

0x419: PushEmpty(bool)
0x41a: Call2 0x1312

0x41b: Pop(0)
0x41c: IF (Stack[-1] == 0) GOTO 0x428; Pop(1)

0x41d: @ lshWaitForAnimEnd()
0x41e: Pop(0)
0x41f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x420: IF (Stack[-1] == 0) GOTO 0x422; Pop(1)

0x421: GOTO 0x427

0x422: PushEmpty(string)
0x423: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x424: Call2 0x125c

0x425: Pop(1)
0x426: GOTO 0x41d

0x427: GOTO 0x436

0x428: Push("all")
0x429: Push("idle")
0x42a: @ PlayAnimation(Stack[-2], Stack[-1])
0x42b: Pop(2)
0x42c: @ WaitForAnimEnd()
0x42d: Pop(0)
0x42e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x42f: IF (Stack[-1] == 0) GOTO 0x431; Pop(1)

0x430: GOTO 0x436

0x431: Push("all")
0x432: Push("idle")
0x433: @ PlayAnimation(Stack[-2], Stack[-1])
0x434: Pop(2)
0x435: GOTO 0x42c

0x436: Return(); Pop(0)

0x437: PushEmpty()
0x438: PushEmpty(bool)
0x439: Call2 0x1312

0x43a: Pop(0)
0x43b: Pop(1); Push((bool) Stack[-1] == 0)
0x43c: IF (Stack[-1] == 0) GOTO 0x43e; Pop(1)

0x43d: Return(); Pop(0)

0x43e: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x43f: IF (Stack[-1] == 0) GOTO 0x441; Pop(1)

0x440: Return(); Pop(0)

0x441: PushEmpty(string, bool)
0x442: Stack[-2] = Stack[-3]
0x443: Push("")
0x444: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x445: IF (Stack[-1] == 0) GOTO 0x448; Pop(1)

0x446: Stack[-1] = (bool) 0
0x447: GOTO 0x449

0x448: Stack[-1] = (bool) 1
0x449: Call2 0x126c

0x44a: Pop(2)
0x44b: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x44c: Return(); Pop(0)

0x44d: PushEmpty()
0x44e: Push((int) 1)
0x44f: IF (Stack[-1] == 0) GOTO 0x631; Pop(1)

0x450: PushEmpty()
0x451: Call2 0x128a

0x452: Pop(0)
0x453: Push((int) 3872)
0x454: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x455: IF (Stack[-1] == 0) GOTO 0x465; Pop(1)

0x456: PushEmpty(object, object)
0x457: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x458: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x459: Call2 0x13bd

0x45a: Pop(2)
0x45b: PushEmpty(object, object)
0x45c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x45d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x45e: Call2 0x13fa

0x45f: Pop(2)
0x460: PushEmpty(object, object)
0x461: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x462: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x463: Call2 0x13ec

0x464: Pop(2)
0x465: Push((int) 3870)
0x466: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x467: IF (Stack[-1] == 0) GOTO 0x477; Pop(1)

0x468: PushEmpty(object, object)
0x469: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x46a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x46b: Call2 0x13bd

0x46c: Pop(2)
0x46d: PushEmpty(object, object)
0x46e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x46f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x470: Call2 0x13ec

0x471: Pop(2)
0x472: PushEmpty(object, object)
0x473: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x474: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x475: Call2 0x13fa

0x476: Pop(2)
0x477: Push((int) 3860)
0x478: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x479: IF (Stack[-1] == 0) GOTO 0x489; Pop(1)

0x47a: PushEmpty(object, object)
0x47b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x47c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x47d: Call2 0x13bd

0x47e: Pop(2)
0x47f: PushEmpty(object, object)
0x480: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x481: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x482: Call2 0x13fa

0x483: Pop(2)
0x484: PushEmpty(object, object)
0x485: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x486: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x487: Call2 0x13ec

0x488: Pop(2)
0x489: Push((int) 3857)
0x48a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x48b: IF (Stack[-1] == 0) GOTO 0x49b; Pop(1)

0x48c: PushEmpty(object, object)
0x48d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x48e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x48f: Call2 0x13bd

0x490: Pop(2)
0x491: PushEmpty(object, object)
0x492: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x493: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x494: Call2 0x13ec

0x495: Pop(2)
0x496: PushEmpty(object, object)
0x497: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x498: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x499: Call2 0x13fa

0x49a: Pop(2)
0x49b: Push((int) 13923)
0x49c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x49d: IF (Stack[-1] == 0) GOTO 0x4a3; Pop(1)

0x49e: PushEmpty(object, object)
0x49f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4a0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4a1: Call2 0x13c3

0x4a2: Pop(2)
0x4a3: Push((int) 11939)
0x4a4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4a5: IF (Stack[-1] == 0) GOTO 0x4ab; Pop(1)

0x4a6: PushEmpty(object, object)
0x4a7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4a8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4a9: Call2 0x1400

0x4aa: Pop(2)
0x4ab: Push((int) 11940)
0x4ac: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4ad: IF (Stack[-1] == 0) GOTO 0x4b3; Pop(1)

0x4ae: PushEmpty(object, object)
0x4af: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4b0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4b1: Call2 0x132b

0x4b2: Pop(2)
0x4b3: Push((int) 13922)
0x4b4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4b5: IF (Stack[-1] == 0) GOTO 0x4ff; Pop(1)

0x4b6: PushEmpty(string)
0x4b7: Stack[-1] = "Neutral"
0x4b8: Call2 0x437

0x4b9: Pop(1)
0x4ba: Push((int) 512729)
0x4bb: @@ SetMessage(Stack[-1])
0x4bc: Pop(1)
0x4bd: @@ ClearReplies()
0x4be: Pop(0)
0x4bf: PushEmpty(bool)
0x4c0: Stack[-1] = (bool) 0
0x4c1: PushEmpty(bool, object)
0x4c2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4c3: Call2 0x149e

0x4c4: Pop(1)
0x4c5: IF (Stack[-1] == 0) GOTO 0x4cc; Pop(1)

0x4c6: PushEmpty(bool, object)
0x4c7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4c8: Call2 0x1492

0x4c9: Pop(1)
0x4ca: IF (Stack[-1] == 0) GOTO 0x4cc; Pop(1)

0x4cb: Stack[-1] = (bool) 1
0x4cc: IF (Stack[-1] == 0) GOTO 0x4d2; Pop(1)

0x4cd: Push((int) 512731)
0x4ce: Push((int) 3851)
0x4cf: Push((int) 13924)
0x4d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4d1: Pop(3)
0x4d2: PushEmpty(bool)
0x4d3: Stack[-1] = (bool) 0
0x4d4: PushEmpty(bool)
0x4d5: Stack[-1] = (bool) 0
0x4d6: PushEmpty(bool)
0x4d7: Stack[-1] = (bool) 0
0x4d8: PushEmpty(bool, object)
0x4d9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4da: Call2 0x14aa

0x4db: Pop(1)
0x4dc: IF (Stack[-1] == 0) GOTO 0x4e3; Pop(1)

0x4dd: PushEmpty(bool, object)
0x4de: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4df: Call2 0x14da

0x4e0: Pop(1)
0x4e1: IF (Stack[-1] == 0) GOTO 0x4e3; Pop(1)

0x4e2: Stack[-1] = (bool) 1
0x4e3: IF (Stack[-1] == 0) GOTO 0x4eb; Pop(1)

0x4e4: PushEmpty(bool, object)
0x4e5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4e6: Call2 0x14e6

0x4e7: Pop(1)
0x4e8: Pop(1); Push((bool) Stack[-1] == 0)
0x4e9: IF (Stack[-1] == 0) GOTO 0x4eb; Pop(1)

0x4ea: Stack[-1] = (bool) 1
0x4eb: IF (Stack[-1] == 0) GOTO 0x4f3; Pop(1)

0x4ec: PushEmpty(bool, object)
0x4ed: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4ee: Call2 0x14f2

0x4ef: Pop(1)
0x4f0: Pop(1); Push((bool) Stack[-1] == 0)
0x4f1: IF (Stack[-1] == 0) GOTO 0x4f3; Pop(1)

0x4f2: Stack[-1] = (bool) 1
0x4f3: IF (Stack[-1] == 0) GOTO 0x4f9; Pop(1)

0x4f4: Push((int) 512730)
0x4f5: Push((int) 11927)
0x4f6: Push((int) 13923)
0x4f7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4f8: Pop(3)
0x4f9: Push((int) 512732)
0x4fa: Push((int) -1)
0x4fb: Push((int) 13926)
0x4fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4fd: Pop(3)
0x4fe: Return(); Pop(0)

0x4ff: Push((int) 11927)
0x500: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x501: IF (Stack[-1] == 0) GOTO 0x516; Pop(1)

0x502: PushEmpty(string)
0x503: Stack[-1] = "Neutral"
0x504: Call2 0x437

0x505: Pop(1)
0x506: Push((int) 510791)
0x507: @@ SetMessage(Stack[-1])
0x508: Pop(1)
0x509: @@ ClearReplies()
0x50a: Pop(0)
0x50b: Push((int) 510792)
0x50c: Push((int) 11929)
0x50d: Push((int) 11928)
0x50e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x50f: Pop(3)
0x510: Push((int) 510810)
0x511: Push((int) 11929)
0x512: Push((int) 11950)
0x513: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x514: Pop(3)
0x515: Return(); Pop(0)

0x516: Push((int) 11929)
0x517: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x518: IF (Stack[-1] == 0) GOTO 0x52d; Pop(1)

0x519: PushEmpty(string)
0x51a: Stack[-1] = "Neutral"
0x51b: Call2 0x437

0x51c: Pop(1)
0x51d: Push((int) 510793)
0x51e: @@ SetMessage(Stack[-1])
0x51f: Pop(1)
0x520: @@ ClearReplies()
0x521: Pop(0)
0x522: Push((int) 510794)
0x523: Push((int) 11931)
0x524: Push((int) 11930)
0x525: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x526: Pop(3)
0x527: Push((int) 510808)
0x528: Push((int) 11931)
0x529: Push((int) 11946)
0x52a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x52b: Pop(3)
0x52c: Return(); Pop(0)

0x52d: Push((int) 11931)
0x52e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x52f: IF (Stack[-1] == 0) GOTO 0x544; Pop(1)

0x530: PushEmpty(string)
0x531: Stack[-1] = "Neutral"
0x532: Call2 0x437

0x533: Pop(1)
0x534: Push((int) 510795)
0x535: @@ SetMessage(Stack[-1])
0x536: Pop(1)
0x537: @@ ClearReplies()
0x538: Pop(0)
0x539: Push((int) 510796)
0x53a: Push((int) 11933)
0x53b: Push((int) 11932)
0x53c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x53d: Pop(3)
0x53e: Push((int) 510807)
0x53f: Push((int) 11933)
0x540: Push((int) 11945)
0x541: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x542: Pop(3)
0x543: Return(); Pop(0)

0x544: Push((int) 11933)
0x545: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x546: IF (Stack[-1] == 0) GOTO 0x55b; Pop(1)

0x547: PushEmpty(string)
0x548: Stack[-1] = "Neutral"
0x549: Call2 0x437

0x54a: Pop(1)
0x54b: Push((int) 510797)
0x54c: @@ SetMessage(Stack[-1])
0x54d: Pop(1)
0x54e: @@ ClearReplies()
0x54f: Pop(0)
0x550: Push((int) 510798)
0x551: Push((int) 11935)
0x552: Push((int) 11934)
0x553: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x554: Pop(3)
0x555: Push((int) 510806)
0x556: Push((int) 11937)
0x557: Push((int) 11943)
0x558: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x559: Pop(3)
0x55a: Return(); Pop(0)

0x55b: Push((int) 11935)
0x55c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x55d: IF (Stack[-1] == 0) GOTO 0x572; Pop(1)

0x55e: PushEmpty(string)
0x55f: Stack[-1] = "Neutral"
0x560: Call2 0x437

0x561: Pop(1)
0x562: Push((int) 510799)
0x563: @@ SetMessage(Stack[-1])
0x564: Pop(1)
0x565: @@ ClearReplies()
0x566: Pop(0)
0x567: Push((int) 510800)
0x568: Push((int) 11937)
0x569: Push((int) 11936)
0x56a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x56b: Pop(3)
0x56c: Push((int) 510805)
0x56d: Push((int) 11937)
0x56e: Push((int) 11941)
0x56f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x570: Pop(3)
0x571: Return(); Pop(0)

0x572: Push((int) 11937)
0x573: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x574: IF (Stack[-1] == 0) GOTO 0x589; Pop(1)

0x575: PushEmpty(string)
0x576: Stack[-1] = "Neutral"
0x577: Call2 0x437

0x578: Pop(1)
0x579: Push((int) 510801)
0x57a: @@ SetMessage(Stack[-1])
0x57b: Pop(1)
0x57c: @@ ClearReplies()
0x57d: Pop(0)
0x57e: Push((int) 510803)
0x57f: Push((int) -1)
0x580: Push((int) 11939)
0x581: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x582: Pop(3)
0x583: Push((int) 510804)
0x584: Push((int) -1)
0x585: Push((int) 11940)
0x586: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x587: Pop(3)
0x588: Return(); Pop(0)

0x589: Push((int) 3851)
0x58a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x58b: IF (Stack[-1] == 0) GOTO 0x5a5; Pop(1)

0x58c: PushEmpty(string)
0x58d: Stack[-1] = "Neutral"
0x58e: Call2 0x437

0x58f: Pop(1)
0x590: Push((int) 503562)
0x591: @@ SetMessage(Stack[-1])
0x592: Pop(1)
0x593: @@ ClearReplies()
0x594: Pop(0)
0x595: Push((int) 503563)
0x596: Push((int) 3858)
0x597: Push((int) 3852)
0x598: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x599: Pop(3)
0x59a: Push((int) 503564)
0x59b: Push((int) 3858)
0x59c: Push((int) 3853)
0x59d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x59e: Pop(3)
0x59f: Push((int) 503565)
0x5a0: Push((int) 3855)
0x5a1: Push((int) 3854)
0x5a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a3: Pop(3)
0x5a4: Return(); Pop(0)

0x5a5: Push((int) 3855)
0x5a6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5a7: IF (Stack[-1] == 0) GOTO 0x5b7; Pop(1)

0x5a8: PushEmpty(string)
0x5a9: Stack[-1] = "Neutral"
0x5aa: Call2 0x437

0x5ab: Pop(1)
0x5ac: Push((int) 503566)
0x5ad: @@ SetMessage(Stack[-1])
0x5ae: Pop(1)
0x5af: @@ ClearReplies()
0x5b0: Pop(0)
0x5b1: Push((int) 503568)
0x5b2: Push((int) -1)
0x5b3: Push((int) 3857)
0x5b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5b5: Pop(3)
0x5b6: Return(); Pop(0)

0x5b7: Push((int) 3858)
0x5b8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5b9: IF (Stack[-1] == 0) GOTO 0x5d3; Pop(1)

0x5ba: PushEmpty(string)
0x5bb: Stack[-1] = "Neutral"
0x5bc: Call2 0x437

0x5bd: Pop(1)
0x5be: Push((int) 503569)
0x5bf: @@ SetMessage(Stack[-1])
0x5c0: Pop(1)
0x5c1: @@ ClearReplies()
0x5c2: Pop(0)
0x5c3: Push((int) 503571)
0x5c4: Push((int) 3862)
0x5c5: Push((int) 3861)
0x5c6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c7: Pop(3)
0x5c8: Push((int) 503582)
0x5c9: Push((int) 3874)
0x5ca: Push((int) 3873)
0x5cb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5cc: Pop(3)
0x5cd: Push((int) 503570)
0x5ce: Push((int) -1)
0x5cf: Push((int) 3860)
0x5d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d1: Pop(3)
0x5d2: Return(); Pop(0)

0x5d3: Push((int) 3874)
0x5d4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5d5: IF (Stack[-1] == 0) GOTO 0x5e5; Pop(1)

0x5d6: PushEmpty(string)
0x5d7: Stack[-1] = "Neutral"
0x5d8: Call2 0x437

0x5d9: Pop(1)
0x5da: Push((int) 503583)
0x5db: @@ SetMessage(Stack[-1])
0x5dc: Pop(1)
0x5dd: @@ ClearReplies()
0x5de: Pop(0)
0x5df: Push((int) 503584)
0x5e0: Push((int) 3867)
0x5e1: Push((int) 3875)
0x5e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5e3: Pop(3)
0x5e4: Return(); Pop(0)

0x5e5: Push((int) 3862)
0x5e6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5e7: IF (Stack[-1] == 0) GOTO 0x5fc; Pop(1)

0x5e8: PushEmpty(string)
0x5e9: Stack[-1] = "Neutral"
0x5ea: Call2 0x437

0x5eb: Pop(1)
0x5ec: Push((int) 503572)
0x5ed: @@ SetMessage(Stack[-1])
0x5ee: Pop(1)
0x5ef: @@ ClearReplies()
0x5f0: Pop(0)
0x5f1: Push((int) 503573)
0x5f2: Push((int) 3864)
0x5f3: Push((int) 3863)
0x5f4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5f5: Pop(3)
0x5f6: Push((int) 503576)
0x5f7: Push((int) 3867)
0x5f8: Push((int) 3866)
0x5f9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5fa: Pop(3)
0x5fb: Return(); Pop(0)

0x5fc: Push((int) 3864)
0x5fd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5fe: IF (Stack[-1] == 0) GOTO 0x613; Pop(1)

0x5ff: PushEmpty(string)
0x600: Stack[-1] = "Neutral"
0x601: Call2 0x437

0x602: Pop(1)
0x603: Push((int) 503574)
0x604: @@ SetMessage(Stack[-1])
0x605: Pop(1)
0x606: @@ ClearReplies()
0x607: Pop(0)
0x608: Push((int) 503575)
0x609: Push((int) 3867)
0x60a: Push((int) 3865)
0x60b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x60c: Pop(3)
0x60d: Push((int) 503579)
0x60e: Push((int) -1)
0x60f: Push((int) 3870)
0x610: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x611: Pop(3)
0x612: Return(); Pop(0)

0x613: Push((int) 3867)
0x614: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x615: IF (Stack[-1] == 0) GOTO 0x625; Pop(1)

0x616: PushEmpty(string)
0x617: Stack[-1] = "Neutral"
0x618: Call2 0x437

0x619: Pop(1)
0x61a: Push((int) 503577)
0x61b: @@ SetMessage(Stack[-1])
0x61c: Pop(1)
0x61d: @@ ClearReplies()
0x61e: Pop(0)
0x61f: Push((int) 503581)
0x620: Push((int) -1)
0x621: Push((int) 3872)
0x622: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x623: Pop(3)
0x624: Return(); Pop(0)

0x625: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x626: PushEmpty(bool)
0x627: Call2 0x1312

0x628: Pop(0)
0x629: IF (Stack[-1] == 0) GOTO 0x62d; Pop(1)

0x62a: @ lshStopAnimation()
0x62b: Pop(0)
0x62c: GOTO 0x62f

0x62d: @ StopAnimation()
0x62e: Pop(0)
0x62f: Return(); Pop(0)

0x630: GOTO 0x44e

0x631: Return(); Pop(0)

0x632: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x633: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x634: PushEmpty(bool, object, float)
0x635: Stack[-2] = Stack[-12]
0x636: Stack[-1] = (float) 70.0
0x637: Call2 0x117d

0x638: Pop(2)
0x639: Pop(1); Push((bool) Stack[-1] == 0)
0x63a: IF (Stack[-1] == 0) GOTO 0x63d; Pop(1)

0x63b: Stack[-10] = (int) -2
0x63c: Return(); Pop(8)

0x63d: @ CreateDialog(Stack[-4])
0x63e: Pop(0)
0x63f: PushEmpty(int)
0x640: Call2 0x130c

0x641: Pop(0)
0x642: @@ SetNPCName(Stack[-1])
0x643: Pop(1)
0x644: PushEmpty(int)
0x645: Call2 0x130a

0x646: Pop(0)
0x647: @@ SetNPCDescription(Stack[-1])
0x648: Pop(1)
0x649: PushEmpty(string)
0x64a: Call2 0x130e

0x64b: Pop(0)
0x64c: @@ SetPhoto(Stack[-1])
0x64d: Pop(1)
0x64e: PushEmpty(string)
0x64f: Call2 0x1310

0x650: Pop(0)
0x651: @@ SetPhoto2(Stack[-1])
0x652: Pop(1)
0x653: PushEmpty(int)
0x654: Call2 0x15b4

0x655: Pop(0)
0x656: @@ SetPlayerName(Stack[-1])
0x657: Pop(1)
0x658: Stack[-2] = (int) -1
0x659: @ IsOverrideActive(Stack[-3])
0x65a: Pop(0)
0x65b: Push(Stack[-3])
0x65c: IF (Stack[-1] == 0) GOTO 0x65f; Pop(1)

0x65d: Stack[-10] = (int) -2
0x65e: Return(); Pop(8)

0x65f: @ DoDialog(Stack[-4])
0x660: Pop(0)
0x661: PushEmpty(bool, object)
0x662: PushEmpty(object)
0x663: Call2 0x1291

0x664: Stack[-2] = Stack[-1]
0x665: Pop(1)
0x666: Call2 0x11d2

0x667: Pop(2)
0x668: PushEmpty(object, object)
0x669: Stack[-2] = Stack[-11]
0x66a: Stack[-1] = Stack[-6]
0x66b: Push(-2, 4); TaskCall(7)
0x66c: Call2 0x683

0x66d: Pop(-2, 4); TaskReturn
0x66e: Pop(2)
0x66f: @@ IsDialogEnd(Stack[-1])
0x670: Pop(0)
0x671: Pop(0); Push((bool) Stack[-1] == 0)
0x672: IF (Stack[-1] == 0) GOTO 0x678; Pop(1)

0x673: @ sync()
0x674: Pop(0)
0x675: @@ IsDialogEnd(Stack[-1])
0x676: Pop(0)
0x677: GOTO 0x671

0x678: PushEmpty(object)
0x679: Stack[-1] = Stack[-10]
0x67a: Call2 0x11c1

0x67b: Pop(1)
0x67c: @ StopDialog(Stack[-4])
0x67d: Pop(0)
0x67e: @@ GetReturnValue(Stack[-2])
0x67f: Pop(0)
0x680: Stack[-10] = Stack[-2]
0x681: Return(); Pop(8)

0x682: Stack[-4] = 0
0x683: PushEmpty()
0x684: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x685: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x686: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x687: Push((int) 1)
0x688: IF (Stack[-1] == 0) GOTO 0x6e2; Pop(1)

0x689: PushEmpty(string)
0x68a: Stack[-1] = "Neutral"
0x68b: Call2 0x700

0x68c: Pop(1)
0x68d: Push((int) 508869)
0x68e: @@ SetMessage(Stack[-1])
0x68f: Pop(1)
0x690: @@ ClearReplies()
0x691: Pop(0)
0x692: PushEmpty(bool)
0x693: Stack[-1] = (bool) 0
0x694: PushEmpty(bool, object)
0x695: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x696: Call2 0x1426

0x697: Pop(1)
0x698: IF (Stack[-1] == 0) GOTO 0x69f; Pop(1)

0x699: PushEmpty(bool, object)
0x69a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x69b: Call2 0x144a

0x69c: Pop(1)
0x69d: IF (Stack[-1] == 0) GOTO 0x69f; Pop(1)

0x69e: Stack[-1] = (bool) 1
0x69f: IF (Stack[-1] == 0) GOTO 0x6a5; Pop(1)

0x6a0: Push((int) 508889)
0x6a1: Push((int) 9751)
0x6a2: Push((int) 9750)
0x6a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6a4: Pop(3)
0x6a5: PushEmpty(bool)
0x6a6: Stack[-1] = (bool) 0
0x6a7: PushEmpty(bool)
0x6a8: Stack[-1] = (bool) 0
0x6a9: PushEmpty(bool, object)
0x6aa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6ab: Call2 0x143e

0x6ac: Pop(1)
0x6ad: IF (Stack[-1] == 0) GOTO 0x6b5; Pop(1)

0x6ae: PushEmpty(bool, object)
0x6af: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6b0: Call2 0x1426

0x6b1: Pop(1)
0x6b2: Pop(1); Push((bool) Stack[-1] == 0)
0x6b3: IF (Stack[-1] == 0) GOTO 0x6b5; Pop(1)

0x6b4: Stack[-1] = (bool) 1
0x6b5: IF (Stack[-1] == 0) GOTO 0x6bc; Pop(1)

0x6b6: PushEmpty(bool, object)
0x6b7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6b8: Call2 0x144a

0x6b9: Pop(1)
0x6ba: IF (Stack[-1] == 0) GOTO 0x6bc; Pop(1)

0x6bb: Stack[-1] = (bool) 1
0x6bc: IF (Stack[-1] == 0) GOTO 0x6c2; Pop(1)

0x6bd: Push((int) 511136)
0x6be: Push((int) 12326)
0x6bf: Push((int) 12325)
0x6c0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c1: Pop(3)
0x6c2: PushEmpty(bool)
0x6c3: Stack[-1] = (bool) 0
0x6c4: PushEmpty(bool, object)
0x6c5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6c6: Call2 0x1432

0x6c7: Pop(1)
0x6c8: IF (Stack[-1] == 0) GOTO 0x6cf; Pop(1)

0x6c9: PushEmpty(bool, object)
0x6ca: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6cb: Call2 0x1456

0x6cc: Pop(1)
0x6cd: IF (Stack[-1] == 0) GOTO 0x6cf; Pop(1)

0x6ce: Stack[-1] = (bool) 1
0x6cf: IF (Stack[-1] == 0) GOTO 0x6d5; Pop(1)

0x6d0: Push((int) 508908)
0x6d1: Push((int) 9772)
0x6d2: Push((int) 9771)
0x6d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6d4: Pop(3)
0x6d5: Push((int) 511134)
0x6d6: Push((int) -1)
0x6d7: Push((int) 12323)
0x6d8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6d9: Pop(3)
0x6da: Push((int) 536099)
0x6db: Push((int) -1)
0x6dc: Push((int) 37851)
0x6dd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6de: Pop(3)
0x6df: GOTO 0x6e2

0x6e0: Return(); Pop(0)

0x6e1: GOTO 0x687

0x6e2: PushEmpty(bool)
0x6e3: Call2 0x1312

0x6e4: Pop(0)
0x6e5: IF (Stack[-1] == 0) GOTO 0x6f1; Pop(1)

0x6e6: @ lshWaitForAnimEnd()
0x6e7: Pop(0)
0x6e8: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6e9: IF (Stack[-1] == 0) GOTO 0x6eb; Pop(1)

0x6ea: GOTO 0x6f0

0x6eb: PushEmpty(string)
0x6ec: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x6ed: Call2 0x125c

0x6ee: Pop(1)
0x6ef: GOTO 0x6e6

0x6f0: GOTO 0x6ff

0x6f1: Push("all")
0x6f2: Push("idle")
0x6f3: @ PlayAnimation(Stack[-2], Stack[-1])
0x6f4: Pop(2)
0x6f5: @ WaitForAnimEnd()
0x6f6: Pop(0)
0x6f7: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6f8: IF (Stack[-1] == 0) GOTO 0x6fa; Pop(1)

0x6f9: GOTO 0x6ff

0x6fa: Push("all")
0x6fb: Push("idle")
0x6fc: @ PlayAnimation(Stack[-2], Stack[-1])
0x6fd: Pop(2)
0x6fe: GOTO 0x6f5

0x6ff: Return(); Pop(0)

0x700: PushEmpty()
0x701: PushEmpty(bool)
0x702: Call2 0x1312

0x703: Pop(0)
0x704: Pop(1); Push((bool) Stack[-1] == 0)
0x705: IF (Stack[-1] == 0) GOTO 0x707; Pop(1)

0x706: Return(); Pop(0)

0x707: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x708: IF (Stack[-1] == 0) GOTO 0x70a; Pop(1)

0x709: Return(); Pop(0)

0x70a: PushEmpty(string, bool)
0x70b: Stack[-2] = Stack[-3]
0x70c: Push("")
0x70d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x70e: IF (Stack[-1] == 0) GOTO 0x711; Pop(1)

0x70f: Stack[-1] = (bool) 0
0x710: GOTO 0x712

0x711: Stack[-1] = (bool) 1
0x712: Call2 0x126c

0x713: Pop(2)
0x714: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x715: Return(); Pop(0)

0x716: PushEmpty()
0x717: Push((int) 1)
0x718: IF (Stack[-1] == 0) GOTO 0x960; Pop(1)

0x719: PushEmpty()
0x71a: Call2 0x128a

0x71b: Pop(0)
0x71c: Push((int) 9768)
0x71d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x71e: IF (Stack[-1] == 0) GOTO 0x72e; Pop(1)

0x71f: PushEmpty(object, object)
0x720: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x721: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x722: Call2 0x133c

0x723: Pop(2)
0x724: PushEmpty(object, object)
0x725: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x726: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x727: Call2 0x1330

0x728: Pop(2)
0x729: PushEmpty(object, object)
0x72a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x72b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x72c: Call2 0x1367

0x72d: Pop(2)
0x72e: Push((int) 9769)
0x72f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x730: IF (Stack[-1] == 0) GOTO 0x736; Pop(1)

0x731: PushEmpty(object, object)
0x732: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x733: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x734: Call2 0x1330

0x735: Pop(2)
0x736: Push((int) 9760)
0x737: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x738: IF (Stack[-1] == 0) GOTO 0x73e; Pop(1)

0x739: PushEmpty(object, object)
0x73a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x73b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x73c: Call2 0x1330

0x73d: Pop(2)
0x73e: Push((int) 9762)
0x73f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x740: IF (Stack[-1] == 0) GOTO 0x746; Pop(1)

0x741: PushEmpty(object, object)
0x742: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x743: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x744: Call2 0x1330

0x745: Pop(2)
0x746: Push((int) 12327)
0x747: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x748: IF (Stack[-1] == 0) GOTO 0x758; Pop(1)

0x749: PushEmpty(object, object)
0x74a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x74b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x74c: Call2 0x133c

0x74d: Pop(2)
0x74e: PushEmpty(object, object)
0x74f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x750: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x751: Call2 0x1353

0x752: Pop(2)
0x753: PushEmpty(object, object)
0x754: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x755: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x756: Call2 0x1367

0x757: Pop(2)
0x758: Push((int) 9788)
0x759: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x75a: IF (Stack[-1] == 0) GOTO 0x765; Pop(1)

0x75b: PushEmpty(object, object)
0x75c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x75d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x75e: Call2 0x1336

0x75f: Pop(2)
0x760: PushEmpty(object, object)
0x761: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x762: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x763: Call2 0x1359

0x764: Pop(2)
0x765: Push((int) 9789)
0x766: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x767: IF (Stack[-1] == 0) GOTO 0x772; Pop(1)

0x768: PushEmpty(object, object)
0x769: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x76a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x76b: Call2 0x1336

0x76c: Pop(2)
0x76d: PushEmpty(object, object)
0x76e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x76f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x770: Call2 0x1359

0x771: Pop(2)
0x772: Push((int) 9728)
0x773: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x774: IF (Stack[-1] == 0) GOTO 0x7cc; Pop(1)

0x775: PushEmpty(string)
0x776: Stack[-1] = "Neutral"
0x777: Call2 0x700

0x778: Pop(1)
0x779: Push((int) 508869)
0x77a: @@ SetMessage(Stack[-1])
0x77b: Pop(1)
0x77c: @@ ClearReplies()
0x77d: Pop(0)
0x77e: PushEmpty(bool)
0x77f: Stack[-1] = (bool) 0
0x780: PushEmpty(bool, object)
0x781: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x782: Call2 0x1426

0x783: Pop(1)
0x784: IF (Stack[-1] == 0) GOTO 0x78b; Pop(1)

0x785: PushEmpty(bool, object)
0x786: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x787: Call2 0x144a

0x788: Pop(1)
0x789: IF (Stack[-1] == 0) GOTO 0x78b; Pop(1)

0x78a: Stack[-1] = (bool) 1
0x78b: IF (Stack[-1] == 0) GOTO 0x791; Pop(1)

0x78c: Push((int) 508889)
0x78d: Push((int) 9751)
0x78e: Push((int) 9750)
0x78f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x790: Pop(3)
0x791: PushEmpty(bool)
0x792: Stack[-1] = (bool) 0
0x793: PushEmpty(bool)
0x794: Stack[-1] = (bool) 0
0x795: PushEmpty(bool, object)
0x796: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x797: Call2 0x143e

0x798: Pop(1)
0x799: IF (Stack[-1] == 0) GOTO 0x7a1; Pop(1)

0x79a: PushEmpty(bool, object)
0x79b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x79c: Call2 0x1426

0x79d: Pop(1)
0x79e: Pop(1); Push((bool) Stack[-1] == 0)
0x79f: IF (Stack[-1] == 0) GOTO 0x7a1; Pop(1)

0x7a0: Stack[-1] = (bool) 1
0x7a1: IF (Stack[-1] == 0) GOTO 0x7a8; Pop(1)

0x7a2: PushEmpty(bool, object)
0x7a3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7a4: Call2 0x144a

0x7a5: Pop(1)
0x7a6: IF (Stack[-1] == 0) GOTO 0x7a8; Pop(1)

0x7a7: Stack[-1] = (bool) 1
0x7a8: IF (Stack[-1] == 0) GOTO 0x7ae; Pop(1)

0x7a9: Push((int) 511136)
0x7aa: Push((int) 12326)
0x7ab: Push((int) 12325)
0x7ac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ad: Pop(3)
0x7ae: PushEmpty(bool)
0x7af: Stack[-1] = (bool) 0
0x7b0: PushEmpty(bool, object)
0x7b1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7b2: Call2 0x1432

0x7b3: Pop(1)
0x7b4: IF (Stack[-1] == 0) GOTO 0x7bb; Pop(1)

0x7b5: PushEmpty(bool, object)
0x7b6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7b7: Call2 0x1456

0x7b8: Pop(1)
0x7b9: IF (Stack[-1] == 0) GOTO 0x7bb; Pop(1)

0x7ba: Stack[-1] = (bool) 1
0x7bb: IF (Stack[-1] == 0) GOTO 0x7c1; Pop(1)

0x7bc: Push((int) 508908)
0x7bd: Push((int) 9772)
0x7be: Push((int) 9771)
0x7bf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c0: Pop(3)
0x7c1: Push((int) 511134)
0x7c2: Push((int) -1)
0x7c3: Push((int) 12323)
0x7c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c5: Pop(3)
0x7c6: Push((int) 536099)
0x7c7: Push((int) -1)
0x7c8: Push((int) 37851)
0x7c9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ca: Pop(3)
0x7cb: Return(); Pop(0)

0x7cc: Push((int) 9772)
0x7cd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7ce: IF (Stack[-1] == 0) GOTO 0x7e3; Pop(1)

0x7cf: PushEmpty(string)
0x7d0: Stack[-1] = "Neutral"
0x7d1: Call2 0x700

0x7d2: Pop(1)
0x7d3: Push((int) 508909)
0x7d4: @@ SetMessage(Stack[-1])
0x7d5: Pop(1)
0x7d6: @@ ClearReplies()
0x7d7: Pop(0)
0x7d8: Push((int) 508913)
0x7d9: Push((int) 9778)
0x7da: Push((int) 9777)
0x7db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7dc: Pop(3)
0x7dd: Push((int) 508910)
0x7de: Push((int) 9778)
0x7df: Push((int) 9773)
0x7e0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7e1: Pop(3)
0x7e2: Return(); Pop(0)

0x7e3: Push((int) 9778)
0x7e4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7e5: IF (Stack[-1] == 0) GOTO 0x7fa; Pop(1)

0x7e6: PushEmpty(string)
0x7e7: Stack[-1] = "Neutral"
0x7e8: Call2 0x700

0x7e9: Pop(1)
0x7ea: Push((int) 508914)
0x7eb: @@ SetMessage(Stack[-1])
0x7ec: Pop(1)
0x7ed: @@ ClearReplies()
0x7ee: Pop(0)
0x7ef: Push((int) 508916)
0x7f0: Push((int) 9781)
0x7f1: Push((int) 9780)
0x7f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7f3: Pop(3)
0x7f4: Push((int) 508918)
0x7f5: Push((int) 9783)
0x7f6: Push((int) 9782)
0x7f7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7f8: Pop(3)
0x7f9: Return(); Pop(0)

0x7fa: Push((int) 9783)
0x7fb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7fc: IF (Stack[-1] == 0) GOTO 0x80c; Pop(1)

0x7fd: PushEmpty(string)
0x7fe: Stack[-1] = "Neutral"
0x7ff: Call2 0x700

0x800: Pop(1)
0x801: Push((int) 508919)
0x802: @@ SetMessage(Stack[-1])
0x803: Pop(1)
0x804: @@ ClearReplies()
0x805: Pop(0)
0x806: Push((int) 508920)
0x807: Push((int) 9786)
0x808: Push((int) 9784)
0x809: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x80a: Pop(3)
0x80b: Return(); Pop(0)

0x80c: Push((int) 9781)
0x80d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x80e: IF (Stack[-1] == 0) GOTO 0x81e; Pop(1)

0x80f: PushEmpty(string)
0x810: Stack[-1] = "Neutral"
0x811: Call2 0x700

0x812: Pop(1)
0x813: Push((int) 508917)
0x814: @@ SetMessage(Stack[-1])
0x815: Pop(1)
0x816: @@ ClearReplies()
0x817: Pop(0)
0x818: Push((int) 508921)
0x819: Push((int) 9786)
0x81a: Push((int) 9785)
0x81b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x81c: Pop(3)
0x81d: Return(); Pop(0)

0x81e: Push((int) 9786)
0x81f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x820: IF (Stack[-1] == 0) GOTO 0x835; Pop(1)

0x821: PushEmpty(string)
0x822: Stack[-1] = "Neutral"
0x823: Call2 0x700

0x824: Pop(1)
0x825: Push((int) 508922)
0x826: @@ SetMessage(Stack[-1])
0x827: Pop(1)
0x828: @@ ClearReplies()
0x829: Pop(0)
0x82a: Push((int) 508923)
0x82b: Push((int) -1)
0x82c: Push((int) 9788)
0x82d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82e: Pop(3)
0x82f: Push((int) 508924)
0x830: Push((int) -1)
0x831: Push((int) 9789)
0x832: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x833: Pop(3)
0x834: Return(); Pop(0)

0x835: Push((int) 9729)
0x836: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x837: IF (Stack[-1] == 0) GOTO 0x838; Pop(1)

0x838: Push((int) 9731)
0x839: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x83a: IF (Stack[-1] == 0) GOTO 0x84f; Pop(1)

0x83b: PushEmpty(string)
0x83c: Stack[-1] = "Grimacing"
0x83d: Call2 0x700

0x83e: Pop(1)
0x83f: Push((int) 508872)
0x840: @@ SetMessage(Stack[-1])
0x841: Pop(1)
0x842: @@ ClearReplies()
0x843: Pop(0)
0x844: Push((int) 508873)
0x845: Push((int) 9733)
0x846: Push((int) 9732)
0x847: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x848: Pop(3)
0x849: Push((int) 508880)
0x84a: Push((int) 9740)
0x84b: Push((int) 9739)
0x84c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x84d: Pop(3)
0x84e: Return(); Pop(0)

0x84f: Push((int) 9740)
0x850: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x851: IF (Stack[-1] == 0) GOTO 0x866; Pop(1)

0x852: PushEmpty(string)
0x853: Stack[-1] = "Neutral"
0x854: Call2 0x700

0x855: Pop(1)
0x856: Push((int) 508881)
0x857: @@ SetMessage(Stack[-1])
0x858: Pop(1)
0x859: @@ ClearReplies()
0x85a: Pop(0)
0x85b: Push((int) 508882)
0x85c: Push((int) 9733)
0x85d: Push((int) 9741)
0x85e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x85f: Pop(3)
0x860: Push((int) 508883)
0x861: Push((int) 9744)
0x862: Push((int) 9743)
0x863: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x864: Pop(3)
0x865: Return(); Pop(0)

0x866: Push((int) 9744)
0x867: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x868: IF (Stack[-1] == 0) GOTO 0x87d; Pop(1)

0x869: PushEmpty(string)
0x86a: Stack[-1] = "Neutral"
0x86b: Call2 0x700

0x86c: Pop(1)
0x86d: Push((int) 508884)
0x86e: @@ SetMessage(Stack[-1])
0x86f: Pop(1)
0x870: @@ ClearReplies()
0x871: Pop(0)
0x872: Push((int) 508885)
0x873: Push((int) -1)
0x874: Push((int) 9745)
0x875: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x876: Pop(3)
0x877: Push((int) 508886)
0x878: Push((int) -1)
0x879: Push((int) 9746)
0x87a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x87b: Pop(3)
0x87c: Return(); Pop(0)

0x87d: Push((int) 9733)
0x87e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x87f: IF (Stack[-1] == 0) GOTO 0x894; Pop(1)

0x880: PushEmpty(string)
0x881: Stack[-1] = "Grimacing"
0x882: Call2 0x700

0x883: Pop(1)
0x884: Push((int) 508874)
0x885: @@ SetMessage(Stack[-1])
0x886: Pop(1)
0x887: @@ ClearReplies()
0x888: Pop(0)
0x889: Push((int) 508875)
0x88a: Push((int) 9735)
0x88b: Push((int) 9734)
0x88c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x88d: Pop(3)
0x88e: Push((int) 508879)
0x88f: Push((int) -1)
0x890: Push((int) 9738)
0x891: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x892: Pop(3)
0x893: Return(); Pop(0)

0x894: Push((int) 9735)
0x895: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x896: IF (Stack[-1] == 0) GOTO 0x8ab; Pop(1)

0x897: PushEmpty(string)
0x898: Stack[-1] = "Neutral"
0x899: Call2 0x700

0x89a: Pop(1)
0x89b: Push((int) 508876)
0x89c: @@ SetMessage(Stack[-1])
0x89d: Pop(1)
0x89e: @@ ClearReplies()
0x89f: Pop(0)
0x8a0: Push((int) 508877)
0x8a1: Push((int) -1)
0x8a2: Push((int) 9736)
0x8a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8a4: Pop(3)
0x8a5: Push((int) 508878)
0x8a6: Push((int) -1)
0x8a7: Push((int) 9737)
0x8a8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8a9: Pop(3)
0x8aa: Return(); Pop(0)

0x8ab: Push((int) 12326)
0x8ac: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8ad: IF (Stack[-1] == 0) GOTO 0x8bd; Pop(1)

0x8ae: PushEmpty(string)
0x8af: Stack[-1] = "Neutral"
0x8b0: Call2 0x700

0x8b1: Pop(1)
0x8b2: Push((int) 511137)
0x8b3: @@ SetMessage(Stack[-1])
0x8b4: Pop(1)
0x8b5: @@ ClearReplies()
0x8b6: Pop(0)
0x8b7: Push((int) 536097)
0x8b8: Push((int) 37850)
0x8b9: Push((int) 37849)
0x8ba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8bb: Pop(3)
0x8bc: Return(); Pop(0)

0x8bd: Push((int) 37850)
0x8be: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8bf: IF (Stack[-1] == 0) GOTO 0x8cf; Pop(1)

0x8c0: PushEmpty(string)
0x8c1: Stack[-1] = "Neutral"
0x8c2: Call2 0x700

0x8c3: Pop(1)
0x8c4: Push((int) 536098)
0x8c5: @@ SetMessage(Stack[-1])
0x8c6: Pop(1)
0x8c7: @@ ClearReplies()
0x8c8: Pop(0)
0x8c9: Push((int) 511138)
0x8ca: Push((int) -1)
0x8cb: Push((int) 12327)
0x8cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8cd: Pop(3)
0x8ce: Return(); Pop(0)

0x8cf: Push((int) 9751)
0x8d0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8d1: IF (Stack[-1] == 0) GOTO 0x8e6; Pop(1)

0x8d2: PushEmpty(string)
0x8d3: Stack[-1] = "Neutral"
0x8d4: Call2 0x700

0x8d5: Pop(1)
0x8d6: Push((int) 508890)
0x8d7: @@ SetMessage(Stack[-1])
0x8d8: Pop(1)
0x8d9: @@ ClearReplies()
0x8da: Pop(0)
0x8db: Push((int) 508891)
0x8dc: Push((int) 9753)
0x8dd: Push((int) 9752)
0x8de: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8df: Pop(3)
0x8e0: Push((int) 508893)
0x8e1: Push((int) 9759)
0x8e2: Push((int) 9754)
0x8e3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8e4: Pop(3)
0x8e5: Return(); Pop(0)

0x8e6: Push((int) 9759)
0x8e7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8e8: IF (Stack[-1] == 0) GOTO 0x8fd; Pop(1)

0x8e9: PushEmpty(string)
0x8ea: Stack[-1] = "Neutral"
0x8eb: Call2 0x700

0x8ec: Pop(1)
0x8ed: Push((int) 508898)
0x8ee: @@ SetMessage(Stack[-1])
0x8ef: Pop(1)
0x8f0: @@ ClearReplies()
0x8f1: Pop(0)
0x8f2: Push((int) 508899)
0x8f3: Push((int) -1)
0x8f4: Push((int) 9760)
0x8f5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8f6: Pop(3)
0x8f7: Push((int) 508900)
0x8f8: Push((int) -1)
0x8f9: Push((int) 9762)
0x8fa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8fb: Pop(3)
0x8fc: Return(); Pop(0)

0x8fd: Push((int) 9753)
0x8fe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8ff: IF (Stack[-1] == 0) GOTO 0x90f; Pop(1)

0x900: PushEmpty(string)
0x901: Stack[-1] = "Neutral"
0x902: Call2 0x700

0x903: Pop(1)
0x904: Push((int) 508892)
0x905: @@ SetMessage(Stack[-1])
0x906: Pop(1)
0x907: @@ ClearReplies()
0x908: Pop(0)
0x909: Push((int) 508894)
0x90a: Push((int) 9756)
0x90b: Push((int) 9755)
0x90c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x90d: Pop(3)
0x90e: Return(); Pop(0)

0x90f: Push((int) 9756)
0x910: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x911: IF (Stack[-1] == 0) GOTO 0x926; Pop(1)

0x912: PushEmpty(string)
0x913: Stack[-1] = "Neutral"
0x914: Call2 0x700

0x915: Pop(1)
0x916: Push((int) 508895)
0x917: @@ SetMessage(Stack[-1])
0x918: Pop(1)
0x919: @@ ClearReplies()
0x91a: Pop(0)
0x91b: Push((int) 508896)
0x91c: Push((int) 9763)
0x91d: Push((int) 9757)
0x91e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x91f: Pop(3)
0x920: Push((int) 508897)
0x921: Push((int) 9759)
0x922: Push((int) 9758)
0x923: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x924: Pop(3)
0x925: Return(); Pop(0)

0x926: Push((int) 9763)
0x927: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x928: IF (Stack[-1] == 0) GOTO 0x93d; Pop(1)

0x929: PushEmpty(string)
0x92a: Stack[-1] = "Neutral"
0x92b: Call2 0x700

0x92c: Pop(1)
0x92d: Push((int) 508901)
0x92e: @@ SetMessage(Stack[-1])
0x92f: Pop(1)
0x930: @@ ClearReplies()
0x931: Pop(0)
0x932: Push((int) 508902)
0x933: Push((int) 9766)
0x934: Push((int) 9764)
0x935: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x936: Pop(3)
0x937: Push((int) 508903)
0x938: Push((int) 9766)
0x939: Push((int) 9765)
0x93a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x93b: Pop(3)
0x93c: Return(); Pop(0)

0x93d: Push((int) 9766)
0x93e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x93f: IF (Stack[-1] == 0) GOTO 0x954; Pop(1)

0x940: PushEmpty(string)
0x941: Stack[-1] = "Neutral"
0x942: Call2 0x700

0x943: Pop(1)
0x944: Push((int) 508904)
0x945: @@ SetMessage(Stack[-1])
0x946: Pop(1)
0x947: @@ ClearReplies()
0x948: Pop(0)
0x949: Push((int) 508905)
0x94a: Push((int) -1)
0x94b: Push((int) 9768)
0x94c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x94d: Pop(3)
0x94e: Push((int) 508906)
0x94f: Push((int) -1)
0x950: Push((int) 9769)
0x951: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x952: Pop(3)
0x953: Return(); Pop(0)

0x954: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x955: PushEmpty(bool)
0x956: Call2 0x1312

0x957: Pop(0)
0x958: IF (Stack[-1] == 0) GOTO 0x95c; Pop(1)

0x959: @ lshStopAnimation()
0x95a: Pop(0)
0x95b: GOTO 0x95e

0x95c: @ StopAnimation()
0x95d: Pop(0)
0x95e: Return(); Pop(0)

0x95f: GOTO 0x717

0x960: Return(); Pop(0)

0x961: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x962: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x963: PushEmpty(bool, object, float)
0x964: Stack[-2] = Stack[-12]
0x965: Stack[-1] = (float) 70.0
0x966: Call2 0x117d

0x967: Pop(2)
0x968: Pop(1); Push((bool) Stack[-1] == 0)
0x969: IF (Stack[-1] == 0) GOTO 0x96c; Pop(1)

0x96a: Stack[-10] = (int) -2
0x96b: Return(); Pop(8)

0x96c: @ CreateDialog(Stack[-4])
0x96d: Pop(0)
0x96e: PushEmpty(int)
0x96f: Call2 0x130c

0x970: Pop(0)
0x971: @@ SetNPCName(Stack[-1])
0x972: Pop(1)
0x973: PushEmpty(int)
0x974: Call2 0x130a

0x975: Pop(0)
0x976: @@ SetNPCDescription(Stack[-1])
0x977: Pop(1)
0x978: PushEmpty(string)
0x979: Call2 0x130e

0x97a: Pop(0)
0x97b: @@ SetPhoto(Stack[-1])
0x97c: Pop(1)
0x97d: PushEmpty(string)
0x97e: Call2 0x1310

0x97f: Pop(0)
0x980: @@ SetPhoto2(Stack[-1])
0x981: Pop(1)
0x982: PushEmpty(int)
0x983: Call2 0x15b4

0x984: Pop(0)
0x985: @@ SetPlayerName(Stack[-1])
0x986: Pop(1)
0x987: Stack[-2] = (int) -1
0x988: @ IsOverrideActive(Stack[-3])
0x989: Pop(0)
0x98a: Push(Stack[-3])
0x98b: IF (Stack[-1] == 0) GOTO 0x98e; Pop(1)

0x98c: Stack[-10] = (int) -2
0x98d: Return(); Pop(8)

0x98e: @ DoDialog(Stack[-4])
0x98f: Pop(0)
0x990: PushEmpty(bool, object)
0x991: PushEmpty(object)
0x992: Call2 0x1291

0x993: Stack[-2] = Stack[-1]
0x994: Pop(1)
0x995: Call2 0x11d2

0x996: Pop(2)
0x997: PushEmpty(object, object)
0x998: Stack[-2] = Stack[-11]
0x999: Stack[-1] = Stack[-6]
0x99a: Push(-2, 4); TaskCall(9)
0x99b: Call2 0x9b2

0x99c: Pop(-2, 4); TaskReturn
0x99d: Pop(2)
0x99e: @@ IsDialogEnd(Stack[-1])
0x99f: Pop(0)
0x9a0: Pop(0); Push((bool) Stack[-1] == 0)
0x9a1: IF (Stack[-1] == 0) GOTO 0x9a7; Pop(1)

0x9a2: @ sync()
0x9a3: Pop(0)
0x9a4: @@ IsDialogEnd(Stack[-1])
0x9a5: Pop(0)
0x9a6: GOTO 0x9a0

0x9a7: PushEmpty(object)
0x9a8: Stack[-1] = Stack[-10]
0x9a9: Call2 0x11c1

0x9aa: Pop(1)
0x9ab: @ StopDialog(Stack[-4])
0x9ac: Pop(0)
0x9ad: @@ GetReturnValue(Stack[-2])
0x9ae: Pop(0)
0x9af: Stack[-10] = Stack[-2]
0x9b0: Return(); Pop(8)

0x9b1: Stack[-4] = 0
0x9b2: PushEmpty()
0x9b3: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x9b4: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x9b5: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x9b6: Push((int) 1)
0x9b7: IF (Stack[-1] == 0) GOTO 0x9f4; Pop(1)

0x9b8: PushEmpty(string)
0x9b9: Stack[-1] = "Neutral"
0x9ba: Call2 0xa12

0x9bb: Pop(1)
0x9bc: Push((int) 511065)
0x9bd: @@ SetMessage(Stack[-1])
0x9be: Pop(1)
0x9bf: @@ ClearReplies()
0x9c0: Pop(0)
0x9c1: PushEmpty(bool)
0x9c2: Stack[-1] = (bool) 0
0x9c3: PushEmpty(bool, object)
0x9c4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9c5: Call2 0x146e

0x9c6: Pop(1)
0x9c7: IF (Stack[-1] == 0) GOTO 0x9ce; Pop(1)

0x9c8: PushEmpty(bool, object)
0x9c9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9ca: Call2 0x1462

0x9cb: Pop(1)
0x9cc: IF (Stack[-1] == 0) GOTO 0x9ce; Pop(1)

0x9cd: Stack[-1] = (bool) 1
0x9ce: IF (Stack[-1] == 0) GOTO 0x9d4; Pop(1)

0x9cf: Push((int) 511066)
0x9d0: Push((int) 12248)
0x9d1: Push((int) 12247)
0x9d2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9d3: Pop(3)
0x9d4: PushEmpty(bool)
0x9d5: Stack[-1] = (bool) 0
0x9d6: PushEmpty(bool, object)
0x9d7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9d8: Call2 0x1486

0x9d9: Pop(1)
0x9da: IF (Stack[-1] == 0) GOTO 0x9e1; Pop(1)

0x9db: PushEmpty(bool, object)
0x9dc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9dd: Call2 0x147a

0x9de: Pop(1)
0x9df: IF (Stack[-1] == 0) GOTO 0x9e1; Pop(1)

0x9e0: Stack[-1] = (bool) 1
0x9e1: IF (Stack[-1] == 0) GOTO 0x9e7; Pop(1)

0x9e2: Push((int) 511079)
0x9e3: Push((int) 12268)
0x9e4: Push((int) 12263)
0x9e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9e6: Pop(3)
0x9e7: Push((int) 511505)
0x9e8: Push((int) -1)
0x9e9: Push((int) 12707)
0x9ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9eb: Pop(3)
0x9ec: Push((int) 536130)
0x9ed: Push((int) -1)
0x9ee: Push((int) 37889)
0x9ef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9f0: Pop(3)
0x9f1: GOTO 0x9f4

0x9f2: Return(); Pop(0)

0x9f3: GOTO 0x9b6

0x9f4: PushEmpty(bool)
0x9f5: Call2 0x1312

0x9f6: Pop(0)
0x9f7: IF (Stack[-1] == 0) GOTO 0xa03; Pop(1)

0x9f8: @ lshWaitForAnimEnd()
0x9f9: Pop(0)
0x9fa: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9fb: IF (Stack[-1] == 0) GOTO 0x9fd; Pop(1)

0x9fc: GOTO 0xa02

0x9fd: PushEmpty(string)
0x9fe: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x9ff: Call2 0x125c

0xa00: Pop(1)
0xa01: GOTO 0x9f8

0xa02: GOTO 0xa11

0xa03: Push("all")
0xa04: Push("idle")
0xa05: @ PlayAnimation(Stack[-2], Stack[-1])
0xa06: Pop(2)
0xa07: @ WaitForAnimEnd()
0xa08: Pop(0)
0xa09: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa0a: IF (Stack[-1] == 0) GOTO 0xa0c; Pop(1)

0xa0b: GOTO 0xa11

0xa0c: Push("all")
0xa0d: Push("idle")
0xa0e: @ PlayAnimation(Stack[-2], Stack[-1])
0xa0f: Pop(2)
0xa10: GOTO 0xa07

0xa11: Return(); Pop(0)

0xa12: PushEmpty()
0xa13: PushEmpty(bool)
0xa14: Call2 0x1312

0xa15: Pop(0)
0xa16: Pop(1); Push((bool) Stack[-1] == 0)
0xa17: IF (Stack[-1] == 0) GOTO 0xa19; Pop(1)

0xa18: Return(); Pop(0)

0xa19: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa1a: IF (Stack[-1] == 0) GOTO 0xa1c; Pop(1)

0xa1b: Return(); Pop(0)

0xa1c: PushEmpty(string, bool)
0xa1d: Stack[-2] = Stack[-3]
0xa1e: Push("")
0xa1f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa20: IF (Stack[-1] == 0) GOTO 0xa23; Pop(1)

0xa21: Stack[-1] = (bool) 0
0xa22: GOTO 0xa24

0xa23: Stack[-1] = (bool) 1
0xa24: Call2 0x126c

0xa25: Pop(2)
0xa26: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa27: Return(); Pop(0)

0xa28: PushEmpty()
0xa29: Push((int) 1)
0xa2a: IF (Stack[-1] == 0) GOTO 0xb96; Pop(1)

0xa2b: PushEmpty()
0xa2c: Call2 0x128a

0xa2d: Pop(0)
0xa2e: Push((int) 12266)
0xa2f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa30: IF (Stack[-1] == 0) GOTO 0xa40; Pop(1)

0xa31: PushEmpty(object, object)
0xa32: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa33: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa34: Call2 0x13ab

0xa35: Pop(2)
0xa36: PushEmpty(object, object)
0xa37: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa38: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa39: Call2 0x1397

0xa3a: Pop(2)
0xa3b: PushEmpty(object, object)
0xa3c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa3d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa3e: Call2 0x1387

0xa3f: Pop(2)
0xa40: Push((int) 12267)
0xa41: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa42: IF (Stack[-1] == 0) GOTO 0xa52; Pop(1)

0xa43: PushEmpty(object, object)
0xa44: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa45: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa46: Call2 0x13ab

0xa47: Pop(2)
0xa48: PushEmpty(object, object)
0xa49: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa4a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa4b: Call2 0x1397

0xa4c: Pop(2)
0xa4d: PushEmpty(object, object)
0xa4e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa4f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa50: Call2 0x1387

0xa51: Pop(2)
0xa52: Push((int) 12281)
0xa53: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa54: IF (Stack[-1] == 0) GOTO 0xa5f; Pop(1)

0xa55: PushEmpty(object, object)
0xa56: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa57: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa58: Call2 0x13b7

0xa59: Pop(2)
0xa5a: PushEmpty(object, object)
0xa5b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa5c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa5d: Call2 0x13b1

0xa5e: Pop(2)
0xa5f: Push((int) 12246)
0xa60: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa61: IF (Stack[-1] == 0) GOTO 0xa9c; Pop(1)

0xa62: PushEmpty(string)
0xa63: Stack[-1] = "Neutral"
0xa64: Call2 0xa12

0xa65: Pop(1)
0xa66: Push((int) 511065)
0xa67: @@ SetMessage(Stack[-1])
0xa68: Pop(1)
0xa69: @@ ClearReplies()
0xa6a: Pop(0)
0xa6b: PushEmpty(bool)
0xa6c: Stack[-1] = (bool) 0
0xa6d: PushEmpty(bool, object)
0xa6e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa6f: Call2 0x146e

0xa70: Pop(1)
0xa71: IF (Stack[-1] == 0) GOTO 0xa78; Pop(1)

0xa72: PushEmpty(bool, object)
0xa73: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa74: Call2 0x1462

0xa75: Pop(1)
0xa76: IF (Stack[-1] == 0) GOTO 0xa78; Pop(1)

0xa77: Stack[-1] = (bool) 1
0xa78: IF (Stack[-1] == 0) GOTO 0xa7e; Pop(1)

0xa79: Push((int) 511066)
0xa7a: Push((int) 12248)
0xa7b: Push((int) 12247)
0xa7c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa7d: Pop(3)
0xa7e: PushEmpty(bool)
0xa7f: Stack[-1] = (bool) 0
0xa80: PushEmpty(bool, object)
0xa81: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa82: Call2 0x1486

0xa83: Pop(1)
0xa84: IF (Stack[-1] == 0) GOTO 0xa8b; Pop(1)

0xa85: PushEmpty(bool, object)
0xa86: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa87: Call2 0x147a

0xa88: Pop(1)
0xa89: IF (Stack[-1] == 0) GOTO 0xa8b; Pop(1)

0xa8a: Stack[-1] = (bool) 1
0xa8b: IF (Stack[-1] == 0) GOTO 0xa91; Pop(1)

0xa8c: Push((int) 511079)
0xa8d: Push((int) 12268)
0xa8e: Push((int) 12263)
0xa8f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa90: Pop(3)
0xa91: Push((int) 511505)
0xa92: Push((int) -1)
0xa93: Push((int) 12707)
0xa94: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa95: Pop(3)
0xa96: Push((int) 536130)
0xa97: Push((int) -1)
0xa98: Push((int) 37889)
0xa99: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa9a: Pop(3)
0xa9b: Return(); Pop(0)

0xa9c: Push((int) 12268)
0xa9d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa9e: IF (Stack[-1] == 0) GOTO 0xab3; Pop(1)

0xa9f: PushEmpty(string)
0xaa0: Stack[-1] = "Neutral"
0xaa1: Call2 0xa12

0xaa2: Pop(1)
0xaa3: Push((int) 511083)
0xaa4: @@ SetMessage(Stack[-1])
0xaa5: Pop(1)
0xaa6: @@ ClearReplies()
0xaa7: Pop(0)
0xaa8: Push((int) 511084)
0xaa9: Push((int) 12271)
0xaaa: Push((int) 12269)
0xaab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaac: Pop(3)
0xaad: Push((int) 511085)
0xaae: Push((int) 12272)
0xaaf: Push((int) 12270)
0xab0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xab1: Pop(3)
0xab2: Return(); Pop(0)

0xab3: Push((int) 12272)
0xab4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xab5: IF (Stack[-1] == 0) GOTO 0xac5; Pop(1)

0xab6: PushEmpty(string)
0xab7: Stack[-1] = "Neutral"
0xab8: Call2 0xa12

0xab9: Pop(1)
0xaba: Push((int) 511087)
0xabb: @@ SetMessage(Stack[-1])
0xabc: Pop(1)
0xabd: @@ ClearReplies()
0xabe: Pop(0)
0xabf: Push((int) 511088)
0xac0: Push((int) 12275)
0xac1: Push((int) 12273)
0xac2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xac3: Pop(3)
0xac4: Return(); Pop(0)

0xac5: Push((int) 12271)
0xac6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xac7: IF (Stack[-1] == 0) GOTO 0xad7; Pop(1)

0xac8: PushEmpty(string)
0xac9: Stack[-1] = "Neutral"
0xaca: Call2 0xa12

0xacb: Pop(1)
0xacc: Push((int) 511086)
0xacd: @@ SetMessage(Stack[-1])
0xace: Pop(1)
0xacf: @@ ClearReplies()
0xad0: Pop(0)
0xad1: Push((int) 511089)
0xad2: Push((int) 12275)
0xad3: Push((int) 12274)
0xad4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xad5: Pop(3)
0xad6: Return(); Pop(0)

0xad7: Push((int) 12275)
0xad8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xad9: IF (Stack[-1] == 0) GOTO 0xaee; Pop(1)

0xada: PushEmpty(string)
0xadb: Stack[-1] = "Neutral"
0xadc: Call2 0xa12

0xadd: Pop(1)
0xade: Push((int) 511090)
0xadf: @@ SetMessage(Stack[-1])
0xae0: Pop(1)
0xae1: @@ ClearReplies()
0xae2: Pop(0)
0xae3: Push((int) 511091)
0xae4: Push((int) 12279)
0xae5: Push((int) 12276)
0xae6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xae7: Pop(3)
0xae8: Push((int) 511092)
0xae9: Push((int) 12279)
0xaea: Push((int) 12277)
0xaeb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaec: Pop(3)
0xaed: Return(); Pop(0)

0xaee: Push((int) 12279)
0xaef: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaf0: IF (Stack[-1] == 0) GOTO 0xb00; Pop(1)

0xaf1: PushEmpty(string)
0xaf2: Stack[-1] = "Neutral"
0xaf3: Call2 0xa12

0xaf4: Pop(1)
0xaf5: Push((int) 511093)
0xaf6: @@ SetMessage(Stack[-1])
0xaf7: Pop(1)
0xaf8: @@ ClearReplies()
0xaf9: Pop(0)
0xafa: Push((int) 511094)
0xafb: Push((int) -1)
0xafc: Push((int) 12281)
0xafd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xafe: Pop(3)
0xaff: Return(); Pop(0)

0xb00: Push((int) 12248)
0xb01: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb02: IF (Stack[-1] == 0) GOTO 0xb17; Pop(1)

0xb03: PushEmpty(string)
0xb04: Stack[-1] = "Neutral"
0xb05: Call2 0xa12

0xb06: Pop(1)
0xb07: Push((int) 511067)
0xb08: @@ SetMessage(Stack[-1])
0xb09: Pop(1)
0xb0a: @@ ClearReplies()
0xb0b: Pop(0)
0xb0c: Push((int) 511068)
0xb0d: Push((int) 12250)
0xb0e: Push((int) 12249)
0xb0f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb10: Pop(3)
0xb11: Push((int) 511073)
0xb12: Push((int) 12255)
0xb13: Push((int) 12254)
0xb14: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb15: Pop(3)
0xb16: Return(); Pop(0)

0xb17: Push((int) 12250)
0xb18: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb19: IF (Stack[-1] == 0) GOTO 0xb33; Pop(1)

0xb1a: PushEmpty(string)
0xb1b: Stack[-1] = "Neutral"
0xb1c: Call2 0xa12

0xb1d: Pop(1)
0xb1e: Push((int) 511069)
0xb1f: @@ SetMessage(Stack[-1])
0xb20: Pop(1)
0xb21: @@ ClearReplies()
0xb22: Pop(0)
0xb23: Push((int) 511070)
0xb24: Push((int) 12257)
0xb25: Push((int) 12251)
0xb26: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb27: Pop(3)
0xb28: Push((int) 511071)
0xb29: Push((int) 12257)
0xb2a: Push((int) 12252)
0xb2b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb2c: Pop(3)
0xb2d: Push((int) 511072)
0xb2e: Push((int) 12255)
0xb2f: Push((int) 12253)
0xb30: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb31: Pop(3)
0xb32: Return(); Pop(0)

0xb33: Push((int) 12255)
0xb34: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb35: IF (Stack[-1] == 0) GOTO 0xb45; Pop(1)

0xb36: PushEmpty(string)
0xb37: Stack[-1] = "Neutral"
0xb38: Call2 0xa12

0xb39: Pop(1)
0xb3a: Push((int) 511074)
0xb3b: @@ SetMessage(Stack[-1])
0xb3c: Pop(1)
0xb3d: @@ ClearReplies()
0xb3e: Pop(0)
0xb3f: Push((int) 511075)
0xb40: Push((int) 12257)
0xb41: Push((int) 12256)
0xb42: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb43: Pop(3)
0xb44: Return(); Pop(0)

0xb45: Push((int) 12257)
0xb46: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb47: IF (Stack[-1] == 0) GOTO 0xb5c; Pop(1)

0xb48: PushEmpty(string)
0xb49: Stack[-1] = "Neutral"
0xb4a: Call2 0xa12

0xb4b: Pop(1)
0xb4c: Push((int) 511076)
0xb4d: @@ SetMessage(Stack[-1])
0xb4e: Pop(1)
0xb4f: @@ ClearReplies()
0xb50: Pop(0)
0xb51: Push((int) 511077)
0xb52: Push((int) 40703)
0xb53: Push((int) 12261)
0xb54: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb55: Pop(3)
0xb56: Push((int) 511078)
0xb57: Push((int) 12264)
0xb58: Push((int) 12262)
0xb59: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb5a: Pop(3)
0xb5b: Return(); Pop(0)

0xb5c: Push((int) 40703)
0xb5d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb5e: IF (Stack[-1] == 0) GOTO 0xb73; Pop(1)

0xb5f: PushEmpty(string)
0xb60: Stack[-1] = "Neutral"
0xb61: Call2 0xa12

0xb62: Pop(1)
0xb63: Push((int) 538787)
0xb64: @@ SetMessage(Stack[-1])
0xb65: Pop(1)
0xb66: @@ ClearReplies()
0xb67: Pop(0)
0xb68: Push((int) 538788)
0xb69: Push((int) 12264)
0xb6a: Push((int) 40704)
0xb6b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb6c: Pop(3)
0xb6d: Push((int) 538789)
0xb6e: Push((int) 12264)
0xb6f: Push((int) 40705)
0xb70: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb71: Pop(3)
0xb72: Return(); Pop(0)

0xb73: Push((int) 12264)
0xb74: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb75: IF (Stack[-1] == 0) GOTO 0xb8a; Pop(1)

0xb76: PushEmpty(string)
0xb77: Stack[-1] = "Neutral"
0xb78: Call2 0xa12

0xb79: Pop(1)
0xb7a: Push((int) 511080)
0xb7b: @@ SetMessage(Stack[-1])
0xb7c: Pop(1)
0xb7d: @@ ClearReplies()
0xb7e: Pop(0)
0xb7f: Push((int) 511081)
0xb80: Push((int) -1)
0xb81: Push((int) 12266)
0xb82: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb83: Pop(3)
0xb84: Push((int) 511082)
0xb85: Push((int) -1)
0xb86: Push((int) 12267)
0xb87: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb88: Pop(3)
0xb89: Return(); Pop(0)

0xb8a: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xb8b: PushEmpty(bool)
0xb8c: Call2 0x1312

0xb8d: Pop(0)
0xb8e: IF (Stack[-1] == 0) GOTO 0xb92; Pop(1)

0xb8f: @ lshStopAnimation()
0xb90: Pop(0)
0xb91: GOTO 0xb94

0xb92: @ StopAnimation()
0xb93: Pop(0)
0xb94: Return(); Pop(0)

0xb95: GOTO 0xa29

0xb96: Return(); Pop(0)

0xb97: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xb98: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xb99: PushEmpty(bool, object, float)
0xb9a: Stack[-2] = Stack[-12]
0xb9b: Stack[-1] = (float) 70.0
0xb9c: Call2 0x117d

0xb9d: Pop(2)
0xb9e: Pop(1); Push((bool) Stack[-1] == 0)
0xb9f: IF (Stack[-1] == 0) GOTO 0xba2; Pop(1)

0xba0: Stack[-10] = (int) -2
0xba1: Return(); Pop(8)

0xba2: @ CreateDialog(Stack[-4])
0xba3: Pop(0)
0xba4: PushEmpty(int)
0xba5: Call2 0x130c

0xba6: Pop(0)
0xba7: @@ SetNPCName(Stack[-1])
0xba8: Pop(1)
0xba9: PushEmpty(int)
0xbaa: Call2 0x130a

0xbab: Pop(0)
0xbac: @@ SetNPCDescription(Stack[-1])
0xbad: Pop(1)
0xbae: PushEmpty(string)
0xbaf: Call2 0x130e

0xbb0: Pop(0)
0xbb1: @@ SetPhoto(Stack[-1])
0xbb2: Pop(1)
0xbb3: PushEmpty(string)
0xbb4: Call2 0x1310

0xbb5: Pop(0)
0xbb6: @@ SetPhoto2(Stack[-1])
0xbb7: Pop(1)
0xbb8: PushEmpty(int)
0xbb9: Call2 0x15b4

0xbba: Pop(0)
0xbbb: @@ SetPlayerName(Stack[-1])
0xbbc: Pop(1)
0xbbd: Stack[-2] = (int) -1
0xbbe: @ IsOverrideActive(Stack[-3])
0xbbf: Pop(0)
0xbc0: Push(Stack[-3])
0xbc1: IF (Stack[-1] == 0) GOTO 0xbc4; Pop(1)

0xbc2: Stack[-10] = (int) -2
0xbc3: Return(); Pop(8)

0xbc4: @ DoDialog(Stack[-4])
0xbc5: Pop(0)
0xbc6: PushEmpty(bool, object)
0xbc7: PushEmpty(object)
0xbc8: Call2 0x1291

0xbc9: Stack[-2] = Stack[-1]
0xbca: Pop(1)
0xbcb: Call2 0x11d2

0xbcc: Pop(2)
0xbcd: PushEmpty(object, object)
0xbce: Stack[-2] = Stack[-11]
0xbcf: Stack[-1] = Stack[-6]
0xbd0: Push(-2, 4); TaskCall(11)
0xbd1: Call2 0xbe8

0xbd2: Pop(-2, 4); TaskReturn
0xbd3: Pop(2)
0xbd4: @@ IsDialogEnd(Stack[-1])
0xbd5: Pop(0)
0xbd6: Pop(0); Push((bool) Stack[-1] == 0)
0xbd7: IF (Stack[-1] == 0) GOTO 0xbdd; Pop(1)

0xbd8: @ sync()
0xbd9: Pop(0)
0xbda: @@ IsDialogEnd(Stack[-1])
0xbdb: Pop(0)
0xbdc: GOTO 0xbd6

0xbdd: PushEmpty(object)
0xbde: Stack[-1] = Stack[-10]
0xbdf: Call2 0x11c1

0xbe0: Pop(1)
0xbe1: @ StopDialog(Stack[-4])
0xbe2: Pop(0)
0xbe3: @@ GetReturnValue(Stack[-2])
0xbe4: Pop(0)
0xbe5: Stack[-10] = Stack[-2]
0xbe6: Return(); Pop(8)

0xbe7: Stack[-4] = 0
0xbe8: PushEmpty()
0xbe9: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xbea: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xbeb: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xbec: Push((int) 1)
0xbed: IF (Stack[-1] == 0) GOTO 0xc1d; Pop(1)

0xbee: PushEmpty(string)
0xbef: Stack[-1] = "Neutral"
0xbf0: Call2 0xc3b

0xbf1: Pop(1)
0xbf2: Push((int) 512374)
0xbf3: @@ SetMessage(Stack[-1])
0xbf4: Pop(1)
0xbf5: @@ ClearReplies()
0xbf6: Pop(0)
0xbf7: PushEmpty(bool)
0xbf8: Stack[-1] = (bool) 0
0xbf9: PushEmpty(bool, object)
0xbfa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbfb: Call2 0x14b6

0xbfc: Pop(1)
0xbfd: Pop(1); Push((bool) Stack[-1] == 0)
0xbfe: IF (Stack[-1] == 0) GOTO 0xc05; Pop(1)

0xbff: PushEmpty(bool, object)
0xc00: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc01: Call2 0x14ce

0xc02: Pop(1)
0xc03: IF (Stack[-1] == 0) GOTO 0xc05; Pop(1)

0xc04: Stack[-1] = (bool) 1
0xc05: IF (Stack[-1] == 0) GOTO 0xc0b; Pop(1)

0xc06: Push((int) 513641)
0xc07: Push((int) 14898)
0xc08: Push((int) 14897)
0xc09: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc0a: Pop(3)
0xc0b: PushEmpty(bool, object)
0xc0c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc0d: Call2 0x14c2

0xc0e: Pop(1)
0xc0f: IF (Stack[-1] == 0) GOTO 0xc15; Pop(1)

0xc10: Push((int) 512375)
0xc11: Push((int) 13536)
0xc12: Push((int) 13535)
0xc13: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc14: Pop(3)
0xc15: Push((int) 513658)
0xc16: Push((int) -1)
0xc17: Push((int) 14916)
0xc18: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc19: Pop(3)
0xc1a: GOTO 0xc1d

0xc1b: Return(); Pop(0)

0xc1c: GOTO 0xbec

0xc1d: PushEmpty(bool)
0xc1e: Call2 0x1312

0xc1f: Pop(0)
0xc20: IF (Stack[-1] == 0) GOTO 0xc2c; Pop(1)

0xc21: @ lshWaitForAnimEnd()
0xc22: Pop(0)
0xc23: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc24: IF (Stack[-1] == 0) GOTO 0xc26; Pop(1)

0xc25: GOTO 0xc2b

0xc26: PushEmpty(string)
0xc27: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xc28: Call2 0x125c

0xc29: Pop(1)
0xc2a: GOTO 0xc21

0xc2b: GOTO 0xc3a

0xc2c: Push("all")
0xc2d: Push("idle")
0xc2e: @ PlayAnimation(Stack[-2], Stack[-1])
0xc2f: Pop(2)
0xc30: @ WaitForAnimEnd()
0xc31: Pop(0)
0xc32: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc33: IF (Stack[-1] == 0) GOTO 0xc35; Pop(1)

0xc34: GOTO 0xc3a

0xc35: Push("all")
0xc36: Push("idle")
0xc37: @ PlayAnimation(Stack[-2], Stack[-1])
0xc38: Pop(2)
0xc39: GOTO 0xc30

0xc3a: Return(); Pop(0)

0xc3b: PushEmpty()
0xc3c: PushEmpty(bool)
0xc3d: Call2 0x1312

0xc3e: Pop(0)
0xc3f: Pop(1); Push((bool) Stack[-1] == 0)
0xc40: IF (Stack[-1] == 0) GOTO 0xc42; Pop(1)

0xc41: Return(); Pop(0)

0xc42: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xc43: IF (Stack[-1] == 0) GOTO 0xc45; Pop(1)

0xc44: Return(); Pop(0)

0xc45: PushEmpty(string, bool)
0xc46: Stack[-2] = Stack[-3]
0xc47: Push("")
0xc48: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xc49: IF (Stack[-1] == 0) GOTO 0xc4c; Pop(1)

0xc4a: Stack[-1] = (bool) 0
0xc4b: GOTO 0xc4d

0xc4c: Stack[-1] = (bool) 1
0xc4d: Call2 0x126c

0xc4e: Pop(2)
0xc4f: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xc50: Return(); Pop(0)

0xc51: PushEmpty()
0xc52: Push((int) 1)
0xc53: IF (Stack[-1] == 0) GOTO 0xe62; Pop(1)

0xc54: PushEmpty()
0xc55: Call2 0x128a

0xc56: Pop(0)
0xc57: Push((int) 14897)
0xc58: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc59: IF (Stack[-1] == 0) GOTO 0xc5f; Pop(1)

0xc5a: PushEmpty(object, object)
0xc5b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc5c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc5d: Call2 0x13e6

0xc5e: Pop(2)
0xc5f: Push((int) 14911)
0xc60: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc61: IF (Stack[-1] == 0) GOTO 0xc6c; Pop(1)

0xc62: PushEmpty(object, object)
0xc63: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc64: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc65: Call2 0x13c9

0xc66: Pop(2)
0xc67: PushEmpty(object, object)
0xc68: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc69: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc6a: Call2 0x1377

0xc6b: Pop(2)
0xc6c: Push((int) 40378)
0xc6d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc6e: IF (Stack[-1] == 0) GOTO 0xc79; Pop(1)

0xc6f: PushEmpty(object, object)
0xc70: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc71: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc72: Call2 0x13c9

0xc73: Pop(2)
0xc74: PushEmpty(object, object)
0xc75: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc76: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc77: Call2 0x1377

0xc78: Pop(2)
0xc79: Push((int) 40377)
0xc7a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc7b: IF (Stack[-1] == 0) GOTO 0xc86; Pop(1)

0xc7c: PushEmpty(object, object)
0xc7d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc7e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc7f: Call2 0x13c9

0xc80: Pop(2)
0xc81: PushEmpty(object, object)
0xc82: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc83: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc84: Call2 0x1377

0xc85: Pop(2)
0xc86: Push((int) 13535)
0xc87: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc88: IF (Stack[-1] == 0) GOTO 0xc8e; Pop(1)

0xc89: PushEmpty(object, object)
0xc8a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc8b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc8c: Call2 0x13e0

0xc8d: Pop(2)
0xc8e: Push((int) 13534)
0xc8f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc90: IF (Stack[-1] == 0) GOTO 0xcbe; Pop(1)

0xc91: PushEmpty(string)
0xc92: Stack[-1] = "Neutral"
0xc93: Call2 0xc3b

0xc94: Pop(1)
0xc95: Push((int) 512374)
0xc96: @@ SetMessage(Stack[-1])
0xc97: Pop(1)
0xc98: @@ ClearReplies()
0xc99: Pop(0)
0xc9a: PushEmpty(bool)
0xc9b: Stack[-1] = (bool) 0
0xc9c: PushEmpty(bool, object)
0xc9d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc9e: Call2 0x14b6

0xc9f: Pop(1)
0xca0: Pop(1); Push((bool) Stack[-1] == 0)
0xca1: IF (Stack[-1] == 0) GOTO 0xca8; Pop(1)

0xca2: PushEmpty(bool, object)
0xca3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xca4: Call2 0x14ce

0xca5: Pop(1)
0xca6: IF (Stack[-1] == 0) GOTO 0xca8; Pop(1)

0xca7: Stack[-1] = (bool) 1
0xca8: IF (Stack[-1] == 0) GOTO 0xcae; Pop(1)

0xca9: Push((int) 513641)
0xcaa: Push((int) 14898)
0xcab: Push((int) 14897)
0xcac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcad: Pop(3)
0xcae: PushEmpty(bool, object)
0xcaf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcb0: Call2 0x14c2

0xcb1: Pop(1)
0xcb2: IF (Stack[-1] == 0) GOTO 0xcb8; Pop(1)

0xcb3: Push((int) 512375)
0xcb4: Push((int) 13536)
0xcb5: Push((int) 13535)
0xcb6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcb7: Pop(3)
0xcb8: Push((int) 513658)
0xcb9: Push((int) -1)
0xcba: Push((int) 14916)
0xcbb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcbc: Pop(3)
0xcbd: Return(); Pop(0)

0xcbe: Push((int) 13536)
0xcbf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcc0: IF (Stack[-1] == 0) GOTO 0xcd0; Pop(1)

0xcc1: PushEmpty(string)
0xcc2: Stack[-1] = "Neutral"
0xcc3: Call2 0xc3b

0xcc4: Pop(1)
0xcc5: Push((int) 512376)
0xcc6: @@ SetMessage(Stack[-1])
0xcc7: Pop(1)
0xcc8: @@ ClearReplies()
0xcc9: Pop(0)
0xcca: Push((int) 512378)
0xccb: Push((int) 13544)
0xccc: Push((int) 13538)
0xccd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcce: Pop(3)
0xccf: Return(); Pop(0)

0xcd0: Push((int) 13539)
0xcd1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcd2: IF (Stack[-1] == 0) GOTO 0xcd3; Pop(1)

0xcd3: Push((int) 13541)
0xcd4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcd5: IF (Stack[-1] == 0) GOTO 0xcea; Pop(1)

0xcd6: PushEmpty(string)
0xcd7: Stack[-1] = "Neutral"
0xcd8: Call2 0xc3b

0xcd9: Pop(1)
0xcda: Push((int) 512381)
0xcdb: @@ SetMessage(Stack[-1])
0xcdc: Pop(1)
0xcdd: @@ ClearReplies()
0xcde: Pop(0)
0xcdf: Push((int) 512382)
0xce0: Push((int) -1)
0xce1: Push((int) 13542)
0xce2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xce3: Pop(3)
0xce4: Push((int) 512383)
0xce5: Push((int) -1)
0xce6: Push((int) 13543)
0xce7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xce8: Pop(3)
0xce9: Return(); Pop(0)

0xcea: Push((int) 13544)
0xceb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcec: IF (Stack[-1] == 0) GOTO 0xd01; Pop(1)

0xced: PushEmpty(string)
0xcee: Stack[-1] = "Neutral"
0xcef: Call2 0xc3b

0xcf0: Pop(1)
0xcf1: Push((int) 512384)
0xcf2: @@ SetMessage(Stack[-1])
0xcf3: Pop(1)
0xcf4: @@ ClearReplies()
0xcf5: Pop(0)
0xcf6: Push((int) 512385)
0xcf7: Push((int) 13552)
0xcf8: Push((int) 13545)
0xcf9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcfa: Pop(3)
0xcfb: Push((int) 512386)
0xcfc: Push((int) 13547)
0xcfd: Push((int) 13546)
0xcfe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcff: Pop(3)
0xd00: Return(); Pop(0)

0xd01: Push((int) 13547)
0xd02: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd03: IF (Stack[-1] == 0) GOTO 0xd18; Pop(1)

0xd04: PushEmpty(string)
0xd05: Stack[-1] = "Neutral"
0xd06: Call2 0xc3b

0xd07: Pop(1)
0xd08: Push((int) 512387)
0xd09: @@ SetMessage(Stack[-1])
0xd0a: Pop(1)
0xd0b: @@ ClearReplies()
0xd0c: Pop(0)
0xd0d: Push((int) 512388)
0xd0e: Push((int) 13550)
0xd0f: Push((int) 13548)
0xd10: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd11: Pop(3)
0xd12: Push((int) 512389)
0xd13: Push((int) 13550)
0xd14: Push((int) 13549)
0xd15: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd16: Pop(3)
0xd17: Return(); Pop(0)

0xd18: Push((int) 13550)
0xd19: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd1a: IF (Stack[-1] == 0) GOTO 0xd2a; Pop(1)

0xd1b: PushEmpty(string)
0xd1c: Stack[-1] = "Neutral"
0xd1d: Call2 0xc3b

0xd1e: Pop(1)
0xd1f: Push((int) 512390)
0xd20: @@ SetMessage(Stack[-1])
0xd21: Pop(1)
0xd22: @@ ClearReplies()
0xd23: Pop(0)
0xd24: Push((int) 512391)
0xd25: Push((int) -1)
0xd26: Push((int) 13551)
0xd27: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd28: Pop(3)
0xd29: Return(); Pop(0)

0xd2a: Push((int) 13552)
0xd2b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd2c: IF (Stack[-1] == 0) GOTO 0xd46; Pop(1)

0xd2d: PushEmpty(string)
0xd2e: Stack[-1] = "Neutral"
0xd2f: Call2 0xc3b

0xd30: Pop(1)
0xd31: Push((int) 512392)
0xd32: @@ SetMessage(Stack[-1])
0xd33: Pop(1)
0xd34: @@ ClearReplies()
0xd35: Pop(0)
0xd36: Push((int) 512393)
0xd37: Push((int) 13559)
0xd38: Push((int) 13554)
0xd39: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd3a: Pop(3)
0xd3b: Push((int) 512394)
0xd3c: Push((int) 13557)
0xd3d: Push((int) 13555)
0xd3e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd3f: Pop(3)
0xd40: Push((int) 512395)
0xd41: Push((int) 13558)
0xd42: Push((int) 13556)
0xd43: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd44: Pop(3)
0xd45: Return(); Pop(0)

0xd46: Push((int) 13558)
0xd47: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd48: IF (Stack[-1] == 0) GOTO 0xd58; Pop(1)

0xd49: PushEmpty(string)
0xd4a: Stack[-1] = "Neutral"
0xd4b: Call2 0xc3b

0xd4c: Pop(1)
0xd4d: Push((int) 512397)
0xd4e: @@ SetMessage(Stack[-1])
0xd4f: Pop(1)
0xd50: @@ ClearReplies()
0xd51: Pop(0)
0xd52: Push((int) 512403)
0xd53: Push((int) 13565)
0xd54: Push((int) 13564)
0xd55: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd56: Pop(3)
0xd57: Return(); Pop(0)

0xd58: Push((int) 13557)
0xd59: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd5a: IF (Stack[-1] == 0) GOTO 0xd6a; Pop(1)

0xd5b: PushEmpty(string)
0xd5c: Stack[-1] = "Neutral"
0xd5d: Call2 0xc3b

0xd5e: Pop(1)
0xd5f: Push((int) 512396)
0xd60: @@ SetMessage(Stack[-1])
0xd61: Pop(1)
0xd62: @@ ClearReplies()
0xd63: Pop(0)
0xd64: Push((int) 512402)
0xd65: Push((int) 13565)
0xd66: Push((int) 13563)
0xd67: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd68: Pop(3)
0xd69: Return(); Pop(0)

0xd6a: Push((int) 13559)
0xd6b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd6c: IF (Stack[-1] == 0) GOTO 0xd7c; Pop(1)

0xd6d: PushEmpty(string)
0xd6e: Stack[-1] = "Neutral"
0xd6f: Call2 0xc3b

0xd70: Pop(1)
0xd71: Push((int) 512398)
0xd72: @@ SetMessage(Stack[-1])
0xd73: Pop(1)
0xd74: @@ ClearReplies()
0xd75: Pop(0)
0xd76: Push((int) 512399)
0xd77: Push((int) 13561)
0xd78: Push((int) 13560)
0xd79: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd7a: Pop(3)
0xd7b: Return(); Pop(0)

0xd7c: Push((int) 13561)
0xd7d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd7e: IF (Stack[-1] == 0) GOTO 0xd8e; Pop(1)

0xd7f: PushEmpty(string)
0xd80: Stack[-1] = "Neutral"
0xd81: Call2 0xc3b

0xd82: Pop(1)
0xd83: Push((int) 512400)
0xd84: @@ SetMessage(Stack[-1])
0xd85: Pop(1)
0xd86: @@ ClearReplies()
0xd87: Pop(0)
0xd88: Push((int) 512401)
0xd89: Push((int) 13565)
0xd8a: Push((int) 13562)
0xd8b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd8c: Pop(3)
0xd8d: Return(); Pop(0)

0xd8e: Push((int) 13565)
0xd8f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd90: IF (Stack[-1] == 0) GOTO 0xda5; Pop(1)

0xd91: PushEmpty(string)
0xd92: Stack[-1] = "Neutral"
0xd93: Call2 0xc3b

0xd94: Pop(1)
0xd95: Push((int) 512404)
0xd96: @@ SetMessage(Stack[-1])
0xd97: Pop(1)
0xd98: @@ ClearReplies()
0xd99: Pop(0)
0xd9a: Push((int) 512405)
0xd9b: Push((int) 13570)
0xd9c: Push((int) 13568)
0xd9d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd9e: Pop(3)
0xd9f: Push((int) 512406)
0xda0: Push((int) 13570)
0xda1: Push((int) 13569)
0xda2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xda3: Pop(3)
0xda4: Return(); Pop(0)

0xda5: Push((int) 13570)
0xda6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xda7: IF (Stack[-1] == 0) GOTO 0xdb7; Pop(1)

0xda8: PushEmpty(string)
0xda9: Stack[-1] = "Neutral"
0xdaa: Call2 0xc3b

0xdab: Pop(1)
0xdac: Push((int) 512407)
0xdad: @@ SetMessage(Stack[-1])
0xdae: Pop(1)
0xdaf: @@ ClearReplies()
0xdb0: Pop(0)
0xdb1: Push((int) 512408)
0xdb2: Push((int) -1)
0xdb3: Push((int) 13572)
0xdb4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdb5: Pop(3)
0xdb6: Return(); Pop(0)

0xdb7: Push((int) 14898)
0xdb8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdb9: IF (Stack[-1] == 0) GOTO 0xdc9; Pop(1)

0xdba: PushEmpty(string)
0xdbb: Stack[-1] = "Neutral"
0xdbc: Call2 0xc3b

0xdbd: Pop(1)
0xdbe: Push((int) 513642)
0xdbf: @@ SetMessage(Stack[-1])
0xdc0: Pop(1)
0xdc1: @@ ClearReplies()
0xdc2: Pop(0)
0xdc3: Push((int) 513643)
0xdc4: Push((int) 14900)
0xdc5: Push((int) 14899)
0xdc6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdc7: Pop(3)
0xdc8: Return(); Pop(0)

0xdc9: Push((int) 14900)
0xdca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdcb: IF (Stack[-1] == 0) GOTO 0xddb; Pop(1)

0xdcc: PushEmpty(string)
0xdcd: Stack[-1] = "Neutral"
0xdce: Call2 0xc3b

0xdcf: Pop(1)
0xdd0: Push((int) 513644)
0xdd1: @@ SetMessage(Stack[-1])
0xdd2: Pop(1)
0xdd3: @@ ClearReplies()
0xdd4: Pop(0)
0xdd5: Push((int) 513645)
0xdd6: Push((int) 14902)
0xdd7: Push((int) 14901)
0xdd8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdd9: Pop(3)
0xdda: Return(); Pop(0)

0xddb: Push((int) 14902)
0xddc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xddd: IF (Stack[-1] == 0) GOTO 0xdf2; Pop(1)

0xdde: PushEmpty(string)
0xddf: Stack[-1] = "Neutral"
0xde0: Call2 0xc3b

0xde1: Pop(1)
0xde2: Push((int) 513646)
0xde3: @@ SetMessage(Stack[-1])
0xde4: Pop(1)
0xde5: @@ ClearReplies()
0xde6: Pop(0)
0xde7: Push((int) 513647)
0xde8: Push((int) 14904)
0xde9: Push((int) 14903)
0xdea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdeb: Pop(3)
0xdec: Push((int) 513649)
0xded: Push((int) 14906)
0xdee: Push((int) 14905)
0xdef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdf0: Pop(3)
0xdf1: Return(); Pop(0)

0xdf2: Push((int) 14906)
0xdf3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdf4: IF (Stack[-1] == 0) GOTO 0xe04; Pop(1)

0xdf5: PushEmpty(string)
0xdf6: Stack[-1] = "Neutral"
0xdf7: Call2 0xc3b

0xdf8: Pop(1)
0xdf9: Push((int) 513650)
0xdfa: @@ SetMessage(Stack[-1])
0xdfb: Pop(1)
0xdfc: @@ ClearReplies()
0xdfd: Pop(0)
0xdfe: Push((int) 513652)
0xdff: Push((int) 40376)
0xe00: Push((int) 14908)
0xe01: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe02: Pop(3)
0xe03: Return(); Pop(0)

0xe04: Push((int) 40376)
0xe05: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe06: IF (Stack[-1] == 0) GOTO 0xe16; Pop(1)

0xe07: PushEmpty(string)
0xe08: Stack[-1] = "Neutral"
0xe09: Call2 0xc3b

0xe0a: Pop(1)
0xe0b: Push((int) 538490)
0xe0c: @@ SetMessage(Stack[-1])
0xe0d: Pop(1)
0xe0e: @@ ClearReplies()
0xe0f: Pop(0)
0xe10: Push((int) 538491)
0xe11: Push((int) -1)
0xe12: Push((int) 40377)
0xe13: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe14: Pop(3)
0xe15: Return(); Pop(0)

0xe16: Push((int) 14904)
0xe17: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe18: IF (Stack[-1] == 0) GOTO 0xe2d; Pop(1)

0xe19: PushEmpty(string)
0xe1a: Stack[-1] = "Neutral"
0xe1b: Call2 0xc3b

0xe1c: Pop(1)
0xe1d: Push((int) 513648)
0xe1e: @@ SetMessage(Stack[-1])
0xe1f: Pop(1)
0xe20: @@ ClearReplies()
0xe21: Pop(0)
0xe22: Push((int) 513651)
0xe23: Push((int) 14909)
0xe24: Push((int) 14907)
0xe25: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe26: Pop(3)
0xe27: Push((int) 513655)
0xe28: Push((int) 14913)
0xe29: Push((int) 14912)
0xe2a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe2b: Pop(3)
0xe2c: Return(); Pop(0)

0xe2d: Push((int) 14913)
0xe2e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe2f: IF (Stack[-1] == 0) GOTO 0xe3f; Pop(1)

0xe30: PushEmpty(string)
0xe31: Stack[-1] = "Neutral"
0xe32: Call2 0xc3b

0xe33: Pop(1)
0xe34: Push((int) 513656)
0xe35: @@ SetMessage(Stack[-1])
0xe36: Pop(1)
0xe37: @@ ClearReplies()
0xe38: Pop(0)
0xe39: Push((int) 513657)
0xe3a: Push((int) 14909)
0xe3b: Push((int) 14914)
0xe3c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe3d: Pop(3)
0xe3e: Return(); Pop(0)

0xe3f: Push((int) 14909)
0xe40: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe41: IF (Stack[-1] == 0) GOTO 0xe56; Pop(1)

0xe42: PushEmpty(string)
0xe43: Stack[-1] = "Neutral"
0xe44: Call2 0xc3b

0xe45: Pop(1)
0xe46: Push((int) 513653)
0xe47: @@ SetMessage(Stack[-1])
0xe48: Pop(1)
0xe49: @@ ClearReplies()
0xe4a: Pop(0)
0xe4b: Push((int) 513654)
0xe4c: Push((int) -1)
0xe4d: Push((int) 14911)
0xe4e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe4f: Pop(3)
0xe50: Push((int) 538492)
0xe51: Push((int) -1)
0xe52: Push((int) 40378)
0xe53: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe54: Pop(3)
0xe55: Return(); Pop(0)

0xe56: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xe57: PushEmpty(bool)
0xe58: Call2 0x1312

0xe59: Pop(0)
0xe5a: IF (Stack[-1] == 0) GOTO 0xe5e; Pop(1)

0xe5b: @ lshStopAnimation()
0xe5c: Pop(0)
0xe5d: GOTO 0xe60

0xe5e: @ StopAnimation()
0xe5f: Pop(0)
0xe60: Return(); Pop(0)

0xe61: GOTO 0xc52

0xe62: Return(); Pop(0)

0xe63: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xe64: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xe65: PushEmpty(bool, object, float)
0xe66: Stack[-2] = Stack[-12]
0xe67: Stack[-1] = (float) 70.0
0xe68: Call2 0x117d

0xe69: Pop(2)
0xe6a: Pop(1); Push((bool) Stack[-1] == 0)
0xe6b: IF (Stack[-1] == 0) GOTO 0xe6e; Pop(1)

0xe6c: Stack[-10] = (int) -2
0xe6d: Return(); Pop(8)

0xe6e: @ CreateDialog(Stack[-4])
0xe6f: Pop(0)
0xe70: PushEmpty(int)
0xe71: Call2 0x130c

0xe72: Pop(0)
0xe73: @@ SetNPCName(Stack[-1])
0xe74: Pop(1)
0xe75: PushEmpty(int)
0xe76: Call2 0x130a

0xe77: Pop(0)
0xe78: @@ SetNPCDescription(Stack[-1])
0xe79: Pop(1)
0xe7a: PushEmpty(string)
0xe7b: Call2 0x130e

0xe7c: Pop(0)
0xe7d: @@ SetPhoto(Stack[-1])
0xe7e: Pop(1)
0xe7f: PushEmpty(string)
0xe80: Call2 0x1310

0xe81: Pop(0)
0xe82: @@ SetPhoto2(Stack[-1])
0xe83: Pop(1)
0xe84: PushEmpty(int)
0xe85: Call2 0x15b4

0xe86: Pop(0)
0xe87: @@ SetPlayerName(Stack[-1])
0xe88: Pop(1)
0xe89: Stack[-2] = (int) -1
0xe8a: @ IsOverrideActive(Stack[-3])
0xe8b: Pop(0)
0xe8c: Push(Stack[-3])
0xe8d: IF (Stack[-1] == 0) GOTO 0xe90; Pop(1)

0xe8e: Stack[-10] = (int) -2
0xe8f: Return(); Pop(8)

0xe90: @ DoDialog(Stack[-4])
0xe91: Pop(0)
0xe92: PushEmpty(bool, object)
0xe93: PushEmpty(object)
0xe94: Call2 0x1291

0xe95: Stack[-2] = Stack[-1]
0xe96: Pop(1)
0xe97: Call2 0x11d2

0xe98: Pop(2)
0xe99: PushEmpty(object, object)
0xe9a: Stack[-2] = Stack[-11]
0xe9b: Stack[-1] = Stack[-6]
0xe9c: Push(-2, 4); TaskCall(13)
0xe9d: Call2 0xeb4

0xe9e: Pop(-2, 4); TaskReturn
0xe9f: Pop(2)
0xea0: @@ IsDialogEnd(Stack[-1])
0xea1: Pop(0)
0xea2: Pop(0); Push((bool) Stack[-1] == 0)
0xea3: IF (Stack[-1] == 0) GOTO 0xea9; Pop(1)

0xea4: @ sync()
0xea5: Pop(0)
0xea6: @@ IsDialogEnd(Stack[-1])
0xea7: Pop(0)
0xea8: GOTO 0xea2

0xea9: PushEmpty(object)
0xeaa: Stack[-1] = Stack[-10]
0xeab: Call2 0x11c1

0xeac: Pop(1)
0xead: @ StopDialog(Stack[-4])
0xeae: Pop(0)
0xeaf: @@ GetReturnValue(Stack[-2])
0xeb0: Pop(0)
0xeb1: Stack[-10] = Stack[-2]
0xeb2: Return(); Pop(8)

0xeb3: Stack[-4] = 0
0xeb4: PushEmpty()
0xeb5: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xeb6: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xeb7: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xeb8: Push((int) 1)
0xeb9: IF (Stack[-1] == 0) GOTO 0xed5; Pop(1)

0xeba: PushEmpty(string)
0xebb: Stack[-1] = "Neutral"
0xebc: Call2 0xef3

0xebd: Pop(1)
0xebe: Push((int) 520784)
0xebf: @@ SetMessage(Stack[-1])
0xec0: Pop(1)
0xec1: @@ ClearReplies()
0xec2: Pop(0)
0xec3: Push((int) 520785)
0xec4: Push((int) 22000)
0xec5: Push((int) 21999)
0xec6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xec7: Pop(3)
0xec8: Push((int) 520792)
0xec9: Push((int) 22008)
0xeca: Push((int) 22007)
0xecb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xecc: Pop(3)
0xecd: Push((int) 520796)
0xece: Push((int) 22014)
0xecf: Push((int) 22013)
0xed0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xed1: Pop(3)
0xed2: GOTO 0xed5

0xed3: Return(); Pop(0)

0xed4: GOTO 0xeb8

0xed5: PushEmpty(bool)
0xed6: Call2 0x1312

0xed7: Pop(0)
0xed8: IF (Stack[-1] == 0) GOTO 0xee4; Pop(1)

0xed9: @ lshWaitForAnimEnd()
0xeda: Pop(0)
0xedb: Push( Stack[3 + Tasks[-1].StackPointer] )
0xedc: IF (Stack[-1] == 0) GOTO 0xede; Pop(1)

0xedd: GOTO 0xee3

0xede: PushEmpty(string)
0xedf: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xee0: Call2 0x125c

0xee1: Pop(1)
0xee2: GOTO 0xed9

0xee3: GOTO 0xef2

0xee4: Push("all")
0xee5: Push("idle")
0xee6: @ PlayAnimation(Stack[-2], Stack[-1])
0xee7: Pop(2)
0xee8: @ WaitForAnimEnd()
0xee9: Pop(0)
0xeea: Push( Stack[3 + Tasks[-1].StackPointer] )
0xeeb: IF (Stack[-1] == 0) GOTO 0xeed; Pop(1)

0xeec: GOTO 0xef2

0xeed: Push("all")
0xeee: Push("idle")
0xeef: @ PlayAnimation(Stack[-2], Stack[-1])
0xef0: Pop(2)
0xef1: GOTO 0xee8

0xef2: Return(); Pop(0)

0xef3: PushEmpty()
0xef4: PushEmpty(bool)
0xef5: Call2 0x1312

0xef6: Pop(0)
0xef7: Pop(1); Push((bool) Stack[-1] == 0)
0xef8: IF (Stack[-1] == 0) GOTO 0xefa; Pop(1)

0xef9: Return(); Pop(0)

0xefa: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xefb: IF (Stack[-1] == 0) GOTO 0xefd; Pop(1)

0xefc: Return(); Pop(0)

0xefd: PushEmpty(string, bool)
0xefe: Stack[-2] = Stack[-3]
0xeff: Push("")
0xf00: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xf01: IF (Stack[-1] == 0) GOTO 0xf04; Pop(1)

0xf02: Stack[-1] = (bool) 0
0xf03: GOTO 0xf05

0xf04: Stack[-1] = (bool) 1
0xf05: Call2 0x126c

0xf06: Pop(2)
0xf07: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xf08: Return(); Pop(0)

0xf09: PushEmpty()
0xf0a: Push((int) 1)
0xf0b: IF (Stack[-1] == 0) GOTO 0xf8e; Pop(1)

0xf0c: PushEmpty()
0xf0d: Call2 0x128a

0xf0e: Pop(0)
0xf0f: Push((int) 21998)
0xf10: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf11: IF (Stack[-1] == 0) GOTO 0xf2b; Pop(1)

0xf12: PushEmpty(string)
0xf13: Stack[-1] = "Neutral"
0xf14: Call2 0xef3

0xf15: Pop(1)
0xf16: Push((int) 520784)
0xf17: @@ SetMessage(Stack[-1])
0xf18: Pop(1)
0xf19: @@ ClearReplies()
0xf1a: Pop(0)
0xf1b: Push((int) 520785)
0xf1c: Push((int) 22000)
0xf1d: Push((int) 21999)
0xf1e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf1f: Pop(3)
0xf20: Push((int) 520792)
0xf21: Push((int) 22008)
0xf22: Push((int) 22007)
0xf23: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf24: Pop(3)
0xf25: Push((int) 520796)
0xf26: Push((int) 22014)
0xf27: Push((int) 22013)
0xf28: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf29: Pop(3)
0xf2a: Return(); Pop(0)

0xf2b: Push((int) 22014)
0xf2c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf2d: IF (Stack[-1] == 0) GOTO 0xf3d; Pop(1)

0xf2e: PushEmpty(string)
0xf2f: Stack[-1] = "Neutral"
0xf30: Call2 0xef3

0xf31: Pop(1)
0xf32: Push((int) 520797)
0xf33: @@ SetMessage(Stack[-1])
0xf34: Pop(1)
0xf35: @@ ClearReplies()
0xf36: Pop(0)
0xf37: Push((int) 520798)
0xf38: Push((int) -1)
0xf39: Push((int) 22015)
0xf3a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf3b: Pop(3)
0xf3c: Return(); Pop(0)

0xf3d: Push((int) 22008)
0xf3e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf3f: IF (Stack[-1] == 0) GOTO 0xf54; Pop(1)

0xf40: PushEmpty(string)
0xf41: Stack[-1] = "Neutral"
0xf42: Call2 0xef3

0xf43: Pop(1)
0xf44: Push((int) 520793)
0xf45: @@ SetMessage(Stack[-1])
0xf46: Pop(1)
0xf47: @@ ClearReplies()
0xf48: Pop(0)
0xf49: Push((int) 520794)
0xf4a: Push((int) 22000)
0xf4b: Push((int) 22009)
0xf4c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf4d: Pop(3)
0xf4e: Push((int) 520795)
0xf4f: Push((int) 22000)
0xf50: Push((int) 22011)
0xf51: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf52: Pop(3)
0xf53: Return(); Pop(0)

0xf54: Push((int) 22000)
0xf55: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf56: IF (Stack[-1] == 0) GOTO 0xf6b; Pop(1)

0xf57: PushEmpty(string)
0xf58: Stack[-1] = "Neutral"
0xf59: Call2 0xef3

0xf5a: Pop(1)
0xf5b: Push((int) 520786)
0xf5c: @@ SetMessage(Stack[-1])
0xf5d: Pop(1)
0xf5e: @@ ClearReplies()
0xf5f: Pop(0)
0xf60: Push((int) 520787)
0xf61: Push((int) 22002)
0xf62: Push((int) 22001)
0xf63: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf64: Pop(3)
0xf65: Push((int) 520791)
0xf66: Push((int) 22002)
0xf67: Push((int) 22005)
0xf68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf69: Pop(3)
0xf6a: Return(); Pop(0)

0xf6b: Push((int) 22002)
0xf6c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf6d: IF (Stack[-1] == 0) GOTO 0xf82; Pop(1)

0xf6e: PushEmpty(string)
0xf6f: Stack[-1] = "Neutral"
0xf70: Call2 0xef3

0xf71: Pop(1)
0xf72: Push((int) 520788)
0xf73: @@ SetMessage(Stack[-1])
0xf74: Pop(1)
0xf75: @@ ClearReplies()
0xf76: Pop(0)
0xf77: Push((int) 520789)
0xf78: Push((int) -1)
0xf79: Push((int) 22003)
0xf7a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf7b: Pop(3)
0xf7c: Push((int) 520790)
0xf7d: Push((int) -1)
0xf7e: Push((int) 22004)
0xf7f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf80: Pop(3)
0xf81: Return(); Pop(0)

0xf82: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xf83: PushEmpty(bool)
0xf84: Call2 0x1312

0xf85: Pop(0)
0xf86: IF (Stack[-1] == 0) GOTO 0xf8a; Pop(1)

0xf87: @ lshStopAnimation()
0xf88: Pop(0)
0xf89: GOTO 0xf8c

0xf8a: @ StopAnimation()
0xf8b: Pop(0)
0xf8c: Return(); Pop(0)

0xf8d: GOTO 0xf0a

0xf8e: Return(); Pop(0)

0xf8f: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xf90: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xf91: PushEmpty(bool, object, float)
0xf92: Stack[-2] = Stack[-12]
0xf93: Stack[-1] = (float) 70.0
0xf94: Call2 0x117d

0xf95: Pop(2)
0xf96: Pop(1); Push((bool) Stack[-1] == 0)
0xf97: IF (Stack[-1] == 0) GOTO 0xf9a; Pop(1)

0xf98: Stack[-10] = (int) -2
0xf99: Return(); Pop(8)

0xf9a: @ CreateDialog(Stack[-4])
0xf9b: Pop(0)
0xf9c: PushEmpty(int)
0xf9d: Call2 0x130c

0xf9e: Pop(0)
0xf9f: @@ SetNPCName(Stack[-1])
0xfa0: Pop(1)
0xfa1: PushEmpty(int)
0xfa2: Call2 0x130a

0xfa3: Pop(0)
0xfa4: @@ SetNPCDescription(Stack[-1])
0xfa5: Pop(1)
0xfa6: PushEmpty(string)
0xfa7: Call2 0x130e

0xfa8: Pop(0)
0xfa9: @@ SetPhoto(Stack[-1])
0xfaa: Pop(1)
0xfab: PushEmpty(string)
0xfac: Call2 0x1310

0xfad: Pop(0)
0xfae: @@ SetPhoto2(Stack[-1])
0xfaf: Pop(1)
0xfb0: PushEmpty(int)
0xfb1: Call2 0x15b4

0xfb2: Pop(0)
0xfb3: @@ SetPlayerName(Stack[-1])
0xfb4: Pop(1)
0xfb5: Stack[-2] = (int) -1
0xfb6: @ IsOverrideActive(Stack[-3])
0xfb7: Pop(0)
0xfb8: Push(Stack[-3])
0xfb9: IF (Stack[-1] == 0) GOTO 0xfbc; Pop(1)

0xfba: Stack[-10] = (int) -2
0xfbb: Return(); Pop(8)

0xfbc: @ DoDialog(Stack[-4])
0xfbd: Pop(0)
0xfbe: PushEmpty(bool, object)
0xfbf: PushEmpty(object)
0xfc0: Call2 0x1291

0xfc1: Stack[-2] = Stack[-1]
0xfc2: Pop(1)
0xfc3: Call2 0x11d2

0xfc4: Pop(2)
0xfc5: PushEmpty(object, object)
0xfc6: Stack[-2] = Stack[-11]
0xfc7: Stack[-1] = Stack[-6]
0xfc8: Push(-2, 4); TaskCall(15)
0xfc9: Call2 0xfe0

0xfca: Pop(-2, 4); TaskReturn
0xfcb: Pop(2)
0xfcc: @@ IsDialogEnd(Stack[-1])
0xfcd: Pop(0)
0xfce: Pop(0); Push((bool) Stack[-1] == 0)
0xfcf: IF (Stack[-1] == 0) GOTO 0xfd5; Pop(1)

0xfd0: @ sync()
0xfd1: Pop(0)
0xfd2: @@ IsDialogEnd(Stack[-1])
0xfd3: Pop(0)
0xfd4: GOTO 0xfce

0xfd5: PushEmpty(object)
0xfd6: Stack[-1] = Stack[-10]
0xfd7: Call2 0x11c1

0xfd8: Pop(1)
0xfd9: @ StopDialog(Stack[-4])
0xfda: Pop(0)
0xfdb: @@ GetReturnValue(Stack[-2])
0xfdc: Pop(0)
0xfdd: Stack[-10] = Stack[-2]
0xfde: Return(); Pop(8)

0xfdf: Stack[-4] = 0
0xfe0: PushEmpty()
0xfe1: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xfe2: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xfe3: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xfe4: Push((int) 1)
0xfe5: IF (Stack[-1] == 0) GOTO 0xffc; Pop(1)

0xfe6: PushEmpty(string)
0xfe7: Stack[-1] = "Neutral"
0xfe8: Call2 0x101a

0xfe9: Pop(1)
0xfea: Push((int) 540548)
0xfeb: @@ SetMessage(Stack[-1])
0xfec: Pop(1)
0xfed: @@ ClearReplies()
0xfee: Pop(0)
0xfef: Push((int) 540549)
0xff0: Push((int) -1)
0xff1: Push((int) 42558)
0xff2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xff3: Pop(3)
0xff4: Push((int) 540797)
0xff5: Push((int) -1)
0xff6: Push((int) 42846)
0xff7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xff8: Pop(3)
0xff9: GOTO 0xffc

0xffa: Return(); Pop(0)

0xffb: GOTO 0xfe4

0xffc: PushEmpty(bool)
0xffd: Call2 0x1312

0xffe: Pop(0)
0xfff: IF (Stack[-1] == 0) GOTO 0x100b; Pop(1)

0x1000: @ lshWaitForAnimEnd()
0x1001: Pop(0)
0x1002: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1003: IF (Stack[-1] == 0) GOTO 0x1005; Pop(1)

0x1004: GOTO 0x100a

0x1005: PushEmpty(string)
0x1006: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x1007: Call2 0x125c

0x1008: Pop(1)
0x1009: GOTO 0x1000

0x100a: GOTO 0x1019

0x100b: Push("all")
0x100c: Push("idle")
0x100d: @ PlayAnimation(Stack[-2], Stack[-1])
0x100e: Pop(2)
0x100f: @ WaitForAnimEnd()
0x1010: Pop(0)
0x1011: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1012: IF (Stack[-1] == 0) GOTO 0x1014; Pop(1)

0x1013: GOTO 0x1019

0x1014: Push("all")
0x1015: Push("idle")
0x1016: @ PlayAnimation(Stack[-2], Stack[-1])
0x1017: Pop(2)
0x1018: GOTO 0x100f

0x1019: Return(); Pop(0)

0x101a: PushEmpty()
0x101b: PushEmpty(bool)
0x101c: Call2 0x1312

0x101d: Pop(0)
0x101e: Pop(1); Push((bool) Stack[-1] == 0)
0x101f: IF (Stack[-1] == 0) GOTO 0x1021; Pop(1)

0x1020: Return(); Pop(0)

0x1021: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1022: IF (Stack[-1] == 0) GOTO 0x1024; Pop(1)

0x1023: Return(); Pop(0)

0x1024: PushEmpty(string, bool)
0x1025: Stack[-2] = Stack[-3]
0x1026: Push("")
0x1027: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1028: IF (Stack[-1] == 0) GOTO 0x102b; Pop(1)

0x1029: Stack[-1] = (bool) 0
0x102a: GOTO 0x102c

0x102b: Stack[-1] = (bool) 1
0x102c: Call2 0x126c

0x102d: Pop(2)
0x102e: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x102f: Return(); Pop(0)

0x1030: PushEmpty()
0x1031: Push((int) 1)
0x1032: IF (Stack[-1] == 0) GOTO 0x1059; Pop(1)

0x1033: PushEmpty()
0x1034: Call2 0x128a

0x1035: Pop(0)
0x1036: Push((int) 42557)
0x1037: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1038: IF (Stack[-1] == 0) GOTO 0x104d; Pop(1)

0x1039: PushEmpty(string)
0x103a: Stack[-1] = "Neutral"
0x103b: Call2 0x101a

0x103c: Pop(1)
0x103d: Push((int) 540548)
0x103e: @@ SetMessage(Stack[-1])
0x103f: Pop(1)
0x1040: @@ ClearReplies()
0x1041: Pop(0)
0x1042: Push((int) 540549)
0x1043: Push((int) -1)
0x1044: Push((int) 42558)
0x1045: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1046: Pop(3)
0x1047: Push((int) 540797)
0x1048: Push((int) -1)
0x1049: Push((int) 42846)
0x104a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x104b: Pop(3)
0x104c: Return(); Pop(0)

0x104d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x104e: PushEmpty(bool)
0x104f: Call2 0x1312

0x1050: Pop(0)
0x1051: IF (Stack[-1] == 0) GOTO 0x1055; Pop(1)

0x1052: @ lshStopAnimation()
0x1053: Pop(0)
0x1054: GOTO 0x1057

0x1055: @ StopAnimation()
0x1056: Pop(0)
0x1057: Return(); Pop(0)

0x1058: GOTO 0x1031

0x1059: Return(); Pop(0)

0x105a: Push(GlobalVars[1])
0x105b: Stack[-1] = (bool) 0
0x105c: GlobalVars[1] = Stack[-1]; Pop(1)
0x105d: PushEmpty()
0x105e: Call2 0x1061

0x105f: Pop(0)
0x1060: Return(); Pop(0)

0x1061: PushEmpty(bool)
0x1062: Call2 0x1178

0x1063: Pop(0)
0x1064: Pop(1); Push((bool) Stack[-1] == 0)
0x1065: IF (Stack[-1] == 0) GOTO 0x1068; Pop(1)

0x1066: @ Hold()
0x1067: Pop(0)
0x1068: @ GetDirection(Stack[-0])
0x1069: Pop(0)
0x106a: PushEmpty()
0x106b: Call2 0x1111

0x106c: Pop(0)
0x106d: GOTO 0x106a

0x106e: Return(); Pop(0)

0x106f: PushEmpty(object, object)
0x1070: Push("player")
0x1071: @ FindActor(Stack[-2], Stack[-1])
0x1072: Pop(1)
0x1073: Pop(0); Push((bool) Stack[-1] == 0)
0x1074: IF (Stack[-1] == 0) GOTO 0x1077; Pop(1)

0x1075: Stack[-3] = (bool) 0
0x1076: Return(); Pop(2)

0x1077: PushEmpty(bool, object)
0x1078: Stack[-1] = Stack[-3]
0x1079: Call2 0x116f

0x107a: Stack[-5] = Stack[-2]
0x107b: Pop(2)
0x107c: Return(); Pop(2)

0x107d: Stack[-1] = 0
0x107e: Push(CvectorIndex(Stack[-0], 0))
0x107f: Push(CvectorIndex(Stack[-0], 2))
0x1080: @ RotateAsync(Stack[-2], Stack[-1])
0x1081: Pop(2)
0x1082: Return(); Pop(0)

0x1083: PushEmpty(object, bool, object, bool)
0x1084: Push("player")
0x1085: @ FindActor(Stack[-3], Stack[-1])
0x1086: Pop(1)
0x1087: Pop(0); Push((bool) Stack[-2] == 0)
0x1088: IF (Stack[-1] == 0) GOTO 0x108b; Pop(1)

0x1089: Stack[-5] = (bool) 0
0x108a: Return(); Pop(4)

0x108b: PushEmpty(float, object)
0x108c: Stack[-1] = Stack[-4]
0x108d: Call2 0x115d

0x108e: Pop(1)
0x108f: Push((float)90000.0)
0x1090: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x1091: IF (Stack[-1] == 0) GOTO 0x1094; Pop(1)

0x1092: Stack[-5] = (bool) 0
0x1093: Return(); Pop(4)

0x1094: @ CanSee(Stack[-1], Stack[-2])
0x1095: Pop(0)
0x1096: Stack[-5] = Stack[-1]
0x1097: Return(); Pop(4)

0x1098: Stack[-2] = 0
0x1099: PushEmpty(float, float)
0x109a: Push((int) 8)
0x109b: Push((int) 16)
0x109c: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x109d: Pop(2)
0x109e: Push((int) 10)
0x109f: @ SetTimer(Stack[-1], Stack[-2])
0x10a0: Pop(1)
0x10a1: Return(); Pop(2)

0x10a2: Push((int) 10)
0x10a3: @ KillTimer(Stack[-1])
0x10a4: Pop(1)
0x10a5: Return(); Pop(0)

0x10a6: PushEmpty()
0x10a7: Push((int) 10)
0x10a8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10a9: IF (Stack[-1] == 0) GOTO 0x10cb; Pop(1)

0x10aa: PushEmpty()
0x10ab: Call2 0x10a2

0x10ac: Pop(0)
0x10ad: PushEmpty(bool)
0x10ae: Stack[-1] = (bool) 0
0x10af: PushEmpty(bool)
0x10b0: Call2 0x1178

0x10b1: Pop(0)
0x10b2: IF (Stack[-1] == 0) GOTO 0x10b8; Pop(1)

0x10b3: PushEmpty(bool)
0x10b4: Call2 0x1083

0x10b5: Pop(0)
0x10b6: IF (Stack[-1] == 0) GOTO 0x10b8; Pop(1)

0x10b7: Stack[-1] = (bool) 1
0x10b8: IF (Stack[-1] == 0) GOTO 0x10c5; Pop(1)

0x10b9: PushEmpty(bool)
0x10ba: Call2 0x106f

0x10bb: Pop(0)
0x10bc: IF (Stack[-1] == 0) GOTO 0x10c4; Pop(1)

0x10bd: PushEmpty(bool, object)
0x10be: PushEmpty(object)
0x10bf: Call2 0x1291

0x10c0: Stack[-2] = Stack[-1]
0x10c1: Pop(1)
0x10c2: Call2 0x120c

0x10c3: Pop(2)
0x10c4: GOTO 0x10cb

0x10c5: PushEmpty()
0x10c6: Call2 0x107e

0x10c7: Pop(0)
0x10c8: PushEmpty()
0x10c9: Call2 0x1099

0x10ca: Pop(0)
0x10cb: Return(); Pop(0)

0x10cc: PushEmpty()
0x10cd: Call2 0x1158

0x10ce: Pop(0)
0x10cf: PushEmpty()
0x10d0: Call2 0x10a2

0x10d1: Pop(0)
0x10d2: @ lshStopSpeech()
0x10d3: Pop(0)
0x10d4: @ lshStopAnimation()
0x10d5: Pop(0)
0x10d6: @ StopAsync()
0x10d7: Pop(0)
0x10d8: @ Hold()
0x10d9: Pop(0)
0x10da: Return(); Pop(0)

0x10db: @ StopGroup0()
0x10dc: Pop(0)
0x10dd: PushEmpty()
0x10de: Call2 0x10a2

0x10df: Pop(0)
0x10e0: PushEmpty(string)
0x10e1: Stack[-1] = "Neutral"
0x10e2: Call2 0x125c

0x10e3: Pop(1)
0x10e4: PushEmpty()
0x10e5: Call2 0x1099

0x10e6: Pop(0)
0x10e7: Return(); Pop(0)

0x10e8: PushEmpty()
0x10e9: Push(Stack[-1])
0x10ea: IF (Stack[-1] == 0) GOTO 0x10ef; Pop(1)

0x10eb: PushEmpty()
0x10ec: Call2 0x1099

0x10ed: Pop(0)
0x10ee: GOTO 0x10f3

0x10ef: PushEmpty(string)
0x10f0: Stack[-1] = "Neutral"
0x10f1: Call2 0x125c

0x10f2: Pop(1)
0x10f3: Return(); Pop(0)

0x10f4: PushEmpty(bool, bool)
0x10f5: @ IsOverrideActive(Stack[-1])
0x10f6: Pop(0)
0x10f7: Pop(0); Push((bool) Stack[-1] == 0)
0x10f8: IF (Stack[-1] == 0) GOTO 0x1110; Pop(1)

0x10f9: EventDisable(0)
0x10fa: PushEmpty()
0x10fb: Call2 0x1158

0x10fc: Pop(0)
0x10fd: PushEmpty(bool, object)
0x10fe: Stack[-1] = Stack[-5]
0x10ff: Call2 0x116f

0x1100: Pop(2)
0x1101: EventEnable(0)
0x1102: PushEmpty(object)
0x1103: Stack[-1] = Stack[-4]
0x1104: Call2 0x15c5

0x1105: Pop(1)
0x1106: PushEmpty(string)
0x1107: Stack[-1] = "Neutral"
0x1108: Call2 0x125c

0x1109: Pop(1)
0x110a: PushEmpty()
0x110b: Call2 0x10a2

0x110c: Pop(0)
0x110d: PushEmpty()
0x110e: Call2 0x1099

0x110f: Pop(0)
0x1110: Return(); Pop(2)

0x1111: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x1112: @ WaitForAnimEnd()
0x1113: Pop(0)
0x1114: PushEmpty(bool)
0x1115: Call2 0x1178

0x1116: Pop(0)
0x1117: Pop(1); Push((bool) Stack[-1] == 0)
0x1118: IF (Stack[-1] == 0) GOTO 0x111a; Pop(1)

0x1119: Return(); Pop(12)

0x111a: PushEmpty(int)
0x111b: Call2 0x12f9

0x111c: Stack[-7] = Stack[-1]
0x111d: Pop(1)
0x111e: Stack[-5] = (int) 0
0x111f: PushEmpty(bool)
0x1120: Stack[-1] = (bool) 0
0x1121: Push((int) 5)
0x1122: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x1123: IF (Stack[-1] == 0) GOTO 0x1129; Pop(1)

0x1124: PushEmpty(bool)
0x1125: Call2 0x1178

0x1126: Pop(0)
0x1127: IF (Stack[-1] == 0) GOTO 0x1129; Pop(1)

0x1128: Stack[-1] = (bool) 1
0x1129: IF (Stack[-1] == 0) GOTO 0x1153; Pop(1)

0x112a: Pop(0); Push((bool) Stack[-6] == 0)
0x112b: IF (Stack[-1] == 0) GOTO 0x1133; Pop(1)

0x112c: Push((int) 3)
0x112d: @ Sleep(Stack[-1], Stack[-5])
0x112e: Pop(1)
0x112f: Pop(0); Push((bool) Stack[-4] == 0)
0x1130: IF (Stack[-1] == 0) GOTO 0x1132; Pop(1)

0x1131: GOTO 0x1153

0x1132: GOTO 0x1148

0x1133: @ irand(Stack[-3], Stack[-6])
0x1134: Pop(0)
0x1135: Push((int) 5)
0x1136: @ irand(Stack[-3], Stack[-1])
0x1137: Pop(1)
0x1138: Push((int) 0)
0x1139: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x113a: IF (Stack[-1] == 0) GOTO 0x113c; Pop(1)

0x113b: Stack[-3] = (int) 0
0x113c: Push("all")
0x113d: PushEmpty(string, int)
0x113e: Stack[-1] = Stack[-6]
0x113f: Call2 0x12f2

0x1140: Pop(1)
0x1141: @ PlayAnimation(Stack[-2], Stack[-1])
0x1142: Pop(2)
0x1143: @ WaitForAnimEnd(Stack[-1])
0x1144: Pop(0)
0x1145: Pop(0); Push((bool) Stack[-1] == 0)
0x1146: IF (Stack[-1] == 0) GOTO 0x1148; Pop(1)

0x1147: GOTO 0x1153

0x1148: PushEmpty(bool)
0x1149: Call2 0x1156

0x114a: Pop(0)
0x114b: Pop(1); Push((bool) Stack[-1] == 0)
0x114c: IF (Stack[-1] == 0) GOTO 0x114e; Pop(1)

0x114d: GOTO 0x1153

0x114e: @ ResetAAS()
0x114f: Pop(0)
0x1150: Push((int) 1)
0x1151: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x1152: GOTO 0x111f

0x1153: @ ResetAAS()
0x1154: Pop(0)
0x1155: Return(); Pop(12)

0x1156: Stack[-1] = (bool) 1
0x1157: Return(); Pop(0)

0x1158: @ StopAnimation()
0x1159: Pop(0)
0x115a: @ StopGroup0()
0x115b: Pop(0)
0x115c: Return(); Pop(0)

0x115d: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x115e: @ GetPosition(Stack[-3])
0x115f: Pop(0)
0x1160: @@ GetPosition(Stack[-2])
0x1161: Pop(0)
0x1162: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x1163: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x1164: Return(); Pop(6)

0x1165: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x1166: @ GetPosition(Stack[-3])
0x1167: Pop(0)
0x1168: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x1169: Push(CvectorIndex(Stack[-2], 0))
0x116a: Push(CvectorIndex(Stack[-3], 2))
0x116b: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x116c: Pop(2)
0x116d: Stack[-8] = Stack[-1]
0x116e: Return(); Pop(6)

0x116f: PushEmpty(cvector, cvector)
0x1170: @@ GetPosition(Stack[-1])
0x1171: Pop(0)
0x1172: PushEmpty(bool, cvector)
0x1173: Stack[-1] = Stack[-3]
0x1174: Call2 0x1165

0x1175: Stack[-6] = Stack[-2]
0x1176: Pop(2)
0x1177: Return(); Pop(2)

0x1178: PushEmpty(bool, bool)
0x1179: @ IsLoaded(Stack[-1])
0x117a: Pop(0)
0x117b: Stack[-3] = Stack[-1]
0x117c: Return(); Pop(2)

0x117d: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x117e: @@ GetPosition(Stack[-8])
0x117f: Pop(0)
0x1180: @@ GetEyesHeight(Stack[-9])
0x1181: Pop(0)
0x1182: Push(CvectorIndex(Stack[-8], 1))
0x1183: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1184: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x1185: @ GetPosition(Stack[-7])
0x1186: Pop(0)
0x1187: @ GetEyesHeight(Stack[-9])
0x1188: Pop(0)
0x1189: Push(CvectorIndex(Stack[-7], 1))
0x118a: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x118b: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x118c: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x118d: Push(CvectorIndex(Stack[-6], 1))
0x118e: Stack[-1] = (int) 0
0x118f: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1190: Pop(0); Push(Stack[-6] | Stack[-6]);
0x1191: Pop(1); Push(Sqrt(Stack[-1]))
0x1192: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x1193: Stack[-5] = -Stack[-6]; Pop(0);
0x1194: Pop(0); Push(Stack[-6] * Stack[-19]);
0x1195: PushEmpty(cvector, cvector)
0x1196: Push(CVector(0.0, 1.0, 0.0))
0x1197: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x1198: Call2 0x1297

0x1199: Pop(1)
0x119a: Push((int) 25)
0x119b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x119c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x119d: Push(CVector(0.0, 10.0, 0.0))
0x119e: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x119f: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x11a0: @ IsOverrideActive(Stack[-2])
0x11a1: Pop(0)
0x11a2: Push(Stack[-2])
0x11a3: IF (Stack[-1] == 0) GOTO 0x11a6; Pop(1)

0x11a4: Stack[-21] = (bool) 0
0x11a5: Return(); Pop(18)

0x11a6: @ StopWorld()
0x11a7: Pop(0)
0x11a8: @ CameraTransit(Stack[-3], Stack[-5])
0x11a9: Pop(0)
0x11aa: Push(CvectorIndex(Stack[-4], 0))
0x11ab: Push(CvectorIndex(Stack[-5], 2))
0x11ac: @ Rotate(Stack[-2], Stack[-1])
0x11ad: Pop(2)
0x11ae: PushEmpty(bool)
0x11af: Call2 0x1312

0x11b0: Pop(0)
0x11b1: IF (Stack[-1] == 0) GOTO 0x11b3; Pop(1)

0x11b2: GOTO 0x11bb

0x11b3: Push("head")
0x11b4: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x11b5: Pop(1)
0x11b6: Push(Stack[-1])
0x11b7: IF (Stack[-1] == 0) GOTO 0x11bb; Pop(1)

0x11b8: Push("head")
0x11b9: @ LookAsyncCamera(Stack[-1])
0x11ba: Pop(1)
0x11bb: @ CameraWaitForPlayFinish()
0x11bc: Pop(0)
0x11bd: @ ResumeWorld()
0x11be: Pop(0)
0x11bf: Stack[-21] = (bool) 1
0x11c0: Return(); Pop(18)

0x11c1: PushEmpty(bool, bool)
0x11c2: @ CameraSwitchToNormal()
0x11c3: Pop(0)
0x11c4: PushEmpty(bool)
0x11c5: Call2 0x1312

0x11c6: Pop(0)
0x11c7: IF (Stack[-1] == 0) GOTO 0x11c9; Pop(1)

0x11c8: GOTO 0x11d1

0x11c9: Push("head")
0x11ca: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x11cb: Pop(1)
0x11cc: Push(Stack[-1])
0x11cd: IF (Stack[-1] == 0) GOTO 0x11d1; Pop(1)

0x11ce: Push("head")
0x11cf: @ UnlookAsync(Stack[-1])
0x11d0: Pop(1)
0x11d1: Return(); Pop(2)

0x11d2: PushEmpty(int, int, int, int)
0x11d3: Push("voice_common")
0x11d4: @ GetVariable(Stack[-1], Stack[-3])
0x11d5: Pop(1)
0x11d6: Push(Stack[-2])
0x11d7: IF (Stack[-1] == 0) GOTO 0x11f8; Pop(1)

0x11d8: PushEmpty(bool, object)
0x11d9: Stack[-1] = Stack[-7]
0x11da: Call2 0x120c

0x11db: Pop(1)
0x11dc: Pop(1); Push((bool) Stack[-1] == 0)
0x11dd: IF (Stack[-1] == 0) GOTO 0x11e6; Pop(1)

0x11de: PushEmpty(bool, object)
0x11df: Stack[-1] = Stack[-7]
0x11e0: Call2 0x1231

0x11e1: Pop(1)
0x11e2: Pop(1); Push((bool) Stack[-1] == 0)
0x11e3: IF (Stack[-1] == 0) GOTO 0x11e6; Pop(1)

0x11e4: Stack[-6] = (bool) 0
0x11e5: Return(); Pop(4)

0x11e6: Push((int) 2)
0x11e7: @ irand(Stack[-2], Stack[-1])
0x11e8: Pop(1)
0x11e9: Push(Stack[-1])
0x11ea: IF (Stack[-1] == 0) GOTO 0x11f3; Pop(1)

0x11eb: Push("voice_common")
0x11ec: Push((int) 1)
0x11ed: Pop(1); Push(Stack[-4] + Stack[-1]);
0x11ee: Push((int) 3)
0x11ef: Pop(2); Push(Stack[-2] % Stack[-1]);
0x11f0: @ SetVariable(Stack[-2], Stack[-1])
0x11f1: Pop(2)
0x11f2: GOTO 0x11f7

0x11f3: Push("voice_common")
0x11f4: Push((int) 0)
0x11f5: @ SetVariable(Stack[-2], Stack[-1])
0x11f6: Pop(2)
0x11f7: GOTO 0x120a

0x11f8: PushEmpty(bool, object)
0x11f9: Stack[-1] = Stack[-7]
0x11fa: Call2 0x1231

0x11fb: Pop(1)
0x11fc: Pop(1); Push((bool) Stack[-1] == 0)
0x11fd: IF (Stack[-1] == 0) GOTO 0x1206; Pop(1)

0x11fe: PushEmpty(bool, object)
0x11ff: Stack[-1] = Stack[-7]
0x1200: Call2 0x120c

0x1201: Pop(1)
0x1202: Pop(1); Push((bool) Stack[-1] == 0)
0x1203: IF (Stack[-1] == 0) GOTO 0x1206; Pop(1)

0x1204: Stack[-6] = (bool) 0
0x1205: Return(); Pop(4)

0x1206: Push("voice_common")
0x1207: Push((int) 1)
0x1208: @ SetVariable(Stack[-2], Stack[-1])
0x1209: Pop(2)
0x120a: Stack[-6] = (bool) 1
0x120b: Return(); Pop(4)

0x120c: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x120d: Stack[-5] = "c"
0x120e: Stack[-4] = (int) 0
0x120f: Push((int) 1)
0x1210: IF (Stack[-1] == 0) GOTO 0x121c; Pop(1)

0x1211: Push((int) 1)
0x1212: Pop(1); Push(Stack[-5] + Stack[-1]);
0x1213: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1214: @@ HasProperty(Stack[-1], Stack[-4])
0x1215: Pop(1)
0x1216: Pop(0); Push((bool) Stack[-3] == 0)
0x1217: IF (Stack[-1] == 0) GOTO 0x1219; Pop(1)

0x1218: GOTO 0x121c

0x1219: Push((int) 1)
0x121a: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x121b: GOTO 0x120f

0x121c: Pop(0); Push((bool) Stack[-4] == 0)
0x121d: IF (Stack[-1] == 0) GOTO 0x1220; Pop(1)

0x121e: Stack[-12] = (bool) 0
0x121f: Return(); Pop(10)

0x1220: Stack[-2] = (int) 0
0x1221: Push((int) 1)
0x1222: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x1223: IF (Stack[-1] == 0) GOTO 0x1226; Pop(1)

0x1224: @ irand(Stack[-2], Stack[-4])
0x1225: Pop(0)
0x1226: Push((int) 1)
0x1227: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1228: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1229: @@ GetProperty(Stack[-1], Stack[-2])
0x122a: Pop(1)
0x122b: PushEmpty(bool, string)
0x122c: Stack[-1] = Stack[-3]
0x122d: Call2 0x127b

0x122e: Stack[-14] = Stack[-2]
0x122f: Pop(2)
0x1230: Return(); Pop(10)

0x1231: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x1232: Push("d")
0x1233: PushEmpty(int)
0x1234: Call2 0x12e3

0x1235: Pop(0)
0x1236: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1237: Push("m")
0x1238: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x1239: Stack[-4] = (int) 0
0x123a: Push((int) 1)
0x123b: IF (Stack[-1] == 0) GOTO 0x1247; Pop(1)

0x123c: Push((int) 1)
0x123d: Pop(1); Push(Stack[-5] + Stack[-1]);
0x123e: Pop(1); Push(Stack[-6] + Stack[-1]);
0x123f: @@ HasProperty(Stack[-1], Stack[-4])
0x1240: Pop(1)
0x1241: Pop(0); Push((bool) Stack[-3] == 0)
0x1242: IF (Stack[-1] == 0) GOTO 0x1244; Pop(1)

0x1243: GOTO 0x1247

0x1244: Push((int) 1)
0x1245: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x1246: GOTO 0x123a

0x1247: Pop(0); Push((bool) Stack[-4] == 0)
0x1248: IF (Stack[-1] == 0) GOTO 0x124b; Pop(1)

0x1249: Stack[-12] = (bool) 0
0x124a: Return(); Pop(10)

0x124b: Stack[-2] = (int) 0
0x124c: Push((int) 1)
0x124d: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x124e: IF (Stack[-1] == 0) GOTO 0x1251; Pop(1)

0x124f: @ irand(Stack[-2], Stack[-4])
0x1250: Pop(0)
0x1251: Push((int) 1)
0x1252: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1253: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1254: @@ GetProperty(Stack[-1], Stack[-2])
0x1255: Pop(1)
0x1256: PushEmpty(bool, string)
0x1257: Stack[-1] = Stack[-3]
0x1258: Call2 0x127b

0x1259: Stack[-14] = Stack[-2]
0x125a: Pop(2)
0x125b: Return(); Pop(10)

0x125c: PushEmpty(bool, float, float, bool, float, float)
0x125d: @ lshHasAnimation(Stack[-3], Stack[-7])
0x125e: Pop(0)
0x125f: Push(Stack[-3])
0x1260: IF (Stack[-1] == 0) GOTO 0x1267; Pop(1)

0x1261: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x1262: Pop(0)
0x1263: Push((bool) 0)
0x1264: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x1265: Pop(1)
0x1266: GOTO 0x126b

0x1267: Push("Can't find lsh animation : ")
0x1268: Pop(1); Push(Stack[-1] + Stack[-8]);
0x1269: @ Trace(Stack[-1])
0x126a: Pop(1)
0x126b: Return(); Pop(6)

0x126c: PushEmpty(bool, float, float, bool, float, float)
0x126d: @ lshHasAnimation(Stack[-3], Stack[-8])
0x126e: Pop(0)
0x126f: Push(Stack[-3])
0x1270: IF (Stack[-1] == 0) GOTO 0x1276; Pop(1)

0x1271: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x1272: Pop(0)
0x1273: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x1274: Pop(0)
0x1275: GOTO 0x127a

0x1276: Push("Can't find lsh animation : ")
0x1277: Pop(1); Push(Stack[-1] + Stack[-9]);
0x1278: @ Trace(Stack[-1])
0x1279: Pop(1)
0x127a: Return(); Pop(6)

0x127b: PushEmpty(bool, bool)
0x127c: PushEmpty(bool)
0x127d: Call2 0x1312

0x127e: Pop(0)
0x127f: IF (Stack[-1] == 0) GOTO 0x1288; Pop(1)

0x1280: @ lshHasSpeech(Stack[-1], Stack[-3])
0x1281: Pop(0)
0x1282: Push(Stack[-1])
0x1283: IF (Stack[-1] == 0) GOTO 0x1288; Pop(1)

0x1284: @ lshPlaySpeech(Stack[-3])
0x1285: Pop(0)
0x1286: Stack[-4] = (bool) 1
0x1287: Return(); Pop(2)

0x1288: Stack[-4] = (bool) 0
0x1289: Return(); Pop(2)

0x128a: PushEmpty(bool)
0x128b: Call2 0x1312

0x128c: Pop(0)
0x128d: IF (Stack[-1] == 0) GOTO 0x1290; Pop(1)

0x128e: @ lshStopSpeech()
0x128f: Pop(0)
0x1290: Return(); Pop(0)

0x1291: PushEmpty(object, object)
0x1292: @ self(Stack[-1])
0x1293: Pop(0)
0x1294: Stack[-3] = Stack[-1]
0x1295: Return(); Pop(2)

0x1296: Stack[-1] = 0
0x1297: PushEmpty(float, float)
0x1298: Pop(0); Push(Stack[-3] | Stack[-3]);
0x1299: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x129a: Push((float)0.0)
0x129b: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x129c: IF (Stack[-1] == 0) GOTO 0x129f; Pop(1)

0x129d: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x129e: Return(); Pop(2)

0x129f: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x12a0: Return(); Pop(2)

0x12a1: PushEmpty(int, int)
0x12a2: @ GetVariable(Stack[-3], Stack[-1])
0x12a3: Pop(0)
0x12a4: Stack[-4] = Stack[-1]
0x12a5: Return(); Pop(2)

0x12a6: PushEmpty(object, object)
0x12a7: @ CreateIntVector(Stack[-1])
0x12a8: Pop(0)
0x12a9: @@ add(Stack[-4])
0x12aa: Pop(0)
0x12ab: @@ add(Stack[-3])
0x12ac: Pop(0)
0x12ad: Push((int) 3)
0x12ae: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x12af: Pop(1)
0x12b0: Return(); Pop(2)

0x12b1: Stack[-1] = 0
0x12b2: PushEmpty(int, int, bool, int, int, bool)
0x12b3: @@ GetItemID(Stack[-3])
0x12b4: Pop(0)
0x12b5: Push("Category")
0x12b6: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x12b7: Pop(1)
0x12b8: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x12b9: Pop(0)
0x12ba: Pop(0); Push((bool) Stack[-1] == 0)
0x12bb: IF (Stack[-1] == 0) GOTO 0x12bf; Pop(1)

0x12bc: @@ DropItems(Stack[-8], Stack[-7])
0x12bd: Pop(0)
0x12be: GOTO 0x12c4

0x12bf: PushEmpty(int, int)
0x12c0: Stack[-2] = Stack[-5]
0x12c1: Stack[-1] = Stack[-9]
0x12c2: Call2 0x12a6

0x12c3: Pop(2)
0x12c4: Return(); Pop(6)

0x12c5: PushEmpty(object, object)
0x12c6: @ CreateInvItem(Stack[-1])
0x12c7: Pop(0)
0x12c8: @@ SetItemName(Stack[-4])
0x12c9: Pop(0)
0x12ca: PushEmpty(object, object, int)
0x12cb: Stack[-3] = Stack[-8]
0x12cc: Stack[-2] = Stack[-4]
0x12cd: Stack[-1] = Stack[-6]
0x12ce: Call2 0x12b2

0x12cf: Pop(3)
0x12d0: Return(); Pop(2)

0x12d1: Stack[-1] = 0
0x12d2: PushEmpty(object, object)
0x12d3: @ FindActor(Stack[-1], Stack[-4])
0x12d4: Pop(0)
0x12d5: Pop(0); Push((bool) Stack[-1] == 0)
0x12d6: IF (Stack[-1] == 0) GOTO 0x12d9; Pop(1)

0x12d7: Stack[-5] = (bool) 0
0x12d8: Return(); Pop(2)

0x12d9: @ Trigger(Stack[-1], Stack[-3])
0x12da: Pop(0)
0x12db: Stack[-5] = (bool) 1
0x12dc: Return(); Pop(2)

0x12dd: Stack[-1] = 0
0x12de: PushEmpty(float, float)
0x12df: @ GetGameTime(Stack[-1])
0x12e0: Pop(0)
0x12e1: Stack[-3] = Stack[-1]
0x12e2: Return(); Pop(2)

0x12e3: PushEmpty(float, float)
0x12e4: @ GetGameTime(Stack[-1])
0x12e5: Pop(0)
0x12e6: Push((int) 1)
0x12e7: PushEmpty(int)
0x12e8: Push((int) 24)
0x12e9: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x12ea: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x12eb: Return(); Pop(2)

0x12ec: PushEmpty()
0x12ed: PushEmpty(int)
0x12ee: Call2 0x12e3

0x12ef: Pop(0)
0x12f0: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x12f1: Return(); Pop(0)

0x12f2: PushEmpty(string, string)
0x12f3: Stack[-1] = "idle"
0x12f4: Push(Stack[-3])
0x12f5: IF (Stack[-1] == 0) GOTO 0x12f7; Pop(1)

0x12f6: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x12f7: Stack[-4] = Stack[-1]
0x12f8: Return(); Pop(2)

0x12f9: PushEmpty(int, bool, int, bool)
0x12fa: Stack[-2] = (int) 0
0x12fb: Push("all")
0x12fc: PushEmpty(string, int)
0x12fd: Stack[-1] = Stack[-5]
0x12fe: Call2 0x12f2

0x12ff: Pop(1)
0x1300: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x1301: Pop(2)
0x1302: Pop(0); Push((bool) Stack[-1] == 0)
0x1303: IF (Stack[-1] == 0) GOTO 0x1305; Pop(1)

0x1304: GOTO 0x1308

0x1305: Push((int) 1)
0x1306: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x1307: GOTO 0x12fb

0x1308: Stack[-5] = Stack[-2]
0x1309: Return(); Pop(4)

0x130a: Stack[-1] = (int) 515549
0x130b: Return(); Pop(0)

0x130c: Stack[-1] = (int) 502874
0x130d: Return(); Pop(0)

0x130e: Stack[-1] = "ui/NPC_Ospina.png"
0x130f: Return(); Pop(0)

0x1310: Stack[-1] = "ui/NPC_Ospina_b.png"
0x1311: Return(); Pop(0)

0x1312: Stack[-1] = (bool) 1
0x1313: Return(); Pop(0)

0x1314: PushEmpty()
0x1315: PushEmpty(bool, string, string)
0x1316: Stack[-2] = "quest_d1_03"
0x1317: Stack[-1] = "eva_finish"
0x1318: Call2 0x12d2

0x1319: Pop(3)
0x131a: Return(); Pop(0)

0x131b: PushEmpty()
0x131c: Push("ood1Ospina2")
0x131d: Push((int) 1)
0x131e: @ SetVariable(Stack[-2], Stack[-1])
0x131f: Pop(2)
0x1320: Return(); Pop(0)

0x1321: PushEmpty()
0x1322: PushEmpty()
0x1323: Call2 0x14fe

0x1324: Pop(0)
0x1325: PushEmpty(bool, string, string)
0x1326: Stack[-2] = "quest_d1_03"
0x1327: Stack[-1] = "unlock_butcher"
0x1328: Call2 0x12d2

0x1329: Pop(3)
0x132a: Return(); Pop(0)

0x132b: PushEmpty()
0x132c: PushEmpty()
0x132d: Call2 0x153f

0x132e: Pop(0)
0x132f: Return(); Pop(0)

0x1330: PushEmpty()
0x1331: Push("ood3Ospina2")
0x1332: Push((int) 1)
0x1333: @ SetVariable(Stack[-2], Stack[-1])
0x1334: Pop(2)
0x1335: Return(); Pop(0)

0x1336: PushEmpty()
0x1337: Push("ood3Ospina3")
0x1338: Push((int) 1)
0x1339: @ SetVariable(Stack[-2], Stack[-1])
0x133a: Pop(2)
0x133b: Return(); Pop(0)

0x133c: PushEmpty(object, object)
0x133d: Push("d3q01")
0x133e: Push((int) 3)
0x133f: @ SetVariable(Stack[-2], Stack[-1])
0x1340: Pop(2)
0x1341: PushEmpty(object)
0x1342: Call2 0x1582

0x1343: Stack[-2] = Stack[-1]
0x1344: Pop(1)
0x1345: Push("d3q01OspinaGotoBigVlad")
0x1346: Push("pt_map_bigvlad")
0x1347: Push((int) 1)
0x1348: Push((int) 511152)
0x1349: PushEmpty(float)
0x134a: Call2 0x12de

0x134b: Pop(0)
0x134c: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x134d: Pop(5)
0x134e: PushEmpty()
0x134f: Call2 0x1518

0x1350: Pop(0)
0x1351: Return(); Pop(2)

0x1352: Stack[-1] = 0
0x1353: PushEmpty()
0x1354: Push("ood3Ospina4")
0x1355: Push((int) 1)
0x1356: @ SetVariable(Stack[-2], Stack[-1])
0x1357: Pop(2)
0x1358: Return(); Pop(0)

0x1359: PushEmpty()
0x135a: Push("d3q01")
0x135b: Push((int) 7)
0x135c: @ SetVariable(Stack[-2], Stack[-1])
0x135d: Pop(2)
0x135e: PushEmpty()
0x135f: Call2 0x150b

0x1360: Pop(0)
0x1361: PushEmpty(bool, string, string)
0x1362: Stack[-2] = "quest_d3_01"
0x1363: Stack[-1] = "place_butchers"
0x1364: Call2 0x12d2

0x1365: Pop(3)
0x1366: Return(); Pop(0)

0x1367: PushEmpty()
0x1368: PushEmpty(object, string, float)
0x1369: PushEmpty(object)
0x136a: Call2 0x1582

0x136b: Stack[-4] = Stack[-1]
0x136c: Pop(1)
0x136d: Stack[-2] = "pt_map_bigvlad"
0x136e: Stack[-1] = (int) 2
0x136f: Call2 0x1593

0x1370: Pop(3)
0x1371: PushEmpty(object)
0x1372: Call2 0x1582

0x1373: Pop(0)
0x1374: @@ ShowMap(Stack[-1])
0x1375: Pop(1)
0x1376: Return(); Pop(0)

0x1377: PushEmpty()
0x1378: PushEmpty(object, string, float)
0x1379: PushEmpty(object)
0x137a: Call2 0x1582

0x137b: Stack[-4] = Stack[-1]
0x137c: Pop(1)
0x137d: Stack[-2] = "pt_map_mladvlad"
0x137e: Stack[-1] = (int) 2
0x137f: Call2 0x1593

0x1380: Pop(3)
0x1381: PushEmpty(object)
0x1382: Call2 0x1582

0x1383: Pop(0)
0x1384: @@ ShowMap(Stack[-1])
0x1385: Pop(1)
0x1386: Return(); Pop(0)

0x1387: PushEmpty()
0x1388: PushEmpty(object, string, float)
0x1389: PushEmpty(object)
0x138a: Call2 0x1582

0x138b: Stack[-4] = Stack[-1]
0x138c: Pop(1)
0x138d: Stack[-2] = "pt_map_lara"
0x138e: Stack[-1] = (int) 2
0x138f: Call2 0x1593

0x1390: Pop(3)
0x1391: PushEmpty(object)
0x1392: Call2 0x1582

0x1393: Pop(0)
0x1394: @@ ShowMap(Stack[-1])
0x1395: Pop(1)
0x1396: Return(); Pop(0)

0x1397: PushEmpty(object, object)
0x1398: Push("d4q01_subquest")
0x1399: Push((int) 2)
0x139a: @ SetVariable(Stack[-2], Stack[-1])
0x139b: Pop(2)
0x139c: PushEmpty(object)
0x139d: Call2 0x1582

0x139e: Stack[-2] = Stack[-1]
0x139f: Pop(1)
0x13a0: Push("d4q01OspinaGotoLara")
0x13a1: Push("pt_map_lara")
0x13a2: Push((int) 1)
0x13a3: Push((int) 511504)
0x13a4: PushEmpty(float)
0x13a5: Call2 0x12de

0x13a6: Pop(0)
0x13a7: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x13a8: Pop(5)
0x13a9: Return(); Pop(2)

0x13aa: Stack[-1] = 0
0x13ab: PushEmpty()
0x13ac: Push("ood4Ospina1")
0x13ad: Push((int) 1)
0x13ae: @ SetVariable(Stack[-2], Stack[-1])
0x13af: Pop(2)
0x13b0: Return(); Pop(0)

0x13b1: PushEmpty()
0x13b2: Push("d4q01_subquest")
0x13b3: Push((int) 1000)
0x13b4: @ SetVariable(Stack[-2], Stack[-1])
0x13b5: Pop(2)
0x13b6: Return(); Pop(0)

0x13b7: PushEmpty()
0x13b8: Push("ood4Ospina2")
0x13b9: Push((int) 1)
0x13ba: @ SetVariable(Stack[-2], Stack[-1])
0x13bb: Pop(2)
0x13bc: Return(); Pop(0)

0x13bd: PushEmpty()
0x13be: Push("ood6Ospina1")
0x13bf: Push((int) 1)
0x13c0: @ SetVariable(Stack[-2], Stack[-1])
0x13c1: Pop(2)
0x13c2: Return(); Pop(0)

0x13c3: PushEmpty()
0x13c4: Push("ood6Ospina2")
0x13c5: Push((int) 1)
0x13c6: @ SetVariable(Stack[-2], Stack[-1])
0x13c7: Pop(2)
0x13c8: Return(); Pop(0)

0x13c9: PushEmpty(object, object)
0x13ca: Push("d8q01MladVladIsBad")
0x13cb: Push((int) 1)
0x13cc: @ SetVariable(Stack[-2], Stack[-1])
0x13cd: Pop(2)
0x13ce: PushEmpty(object)
0x13cf: Call2 0x1582

0x13d0: Stack[-2] = Stack[-1]
0x13d1: Pop(1)
0x13d2: Push("d8q01OspinaGotoMladVlad")
0x13d3: Push("pt_map_mladvlad")
0x13d4: Push((int) 1)
0x13d5: Push((int) 515307)
0x13d6: PushEmpty(float)
0x13d7: Call2 0x12de

0x13d8: Pop(0)
0x13d9: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x13da: Pop(5)
0x13db: PushEmpty()
0x13dc: Call2 0x154c

0x13dd: Pop(0)
0x13de: Return(); Pop(2)

0x13df: Stack[-1] = 0
0x13e0: PushEmpty()
0x13e1: Push("ood8Ospina1")
0x13e2: Push((int) 1)
0x13e3: @ SetVariable(Stack[-2], Stack[-1])
0x13e4: Pop(2)
0x13e5: Return(); Pop(0)

0x13e6: PushEmpty()
0x13e7: Push("ood8Ospina2")
0x13e8: Push((int) 1)
0x13e9: @ SetVariable(Stack[-2], Stack[-1])
0x13ea: Pop(2)
0x13eb: Return(); Pop(0)

0x13ec: PushEmpty()
0x13ed: PushEmpty()
0x13ee: Call2 0x1525

0x13ef: Pop(0)
0x13f0: Push("ospina blood is given")
0x13f1: @ Trace(Stack[-1])
0x13f2: Pop(1)
0x13f3: PushEmpty(object, string, int)
0x13f4: Stack[-3] = Stack[-5]
0x13f5: Stack[-2] = "d6q01_ospina_blood"
0x13f6: Stack[-1] = (int) 1
0x13f7: Call2 0x12c5

0x13f8: Pop(3)
0x13f9: Return(); Pop(0)

0x13fa: PushEmpty()
0x13fb: Push("playsound")
0x13fc: Push("giveitem")
0x13fd: @ TriggerWorld(Stack[-2], Stack[-1])
0x13fe: Pop(2)
0x13ff: Return(); Pop(0)

0x1400: PushEmpty()
0x1401: Push("d6q01OspinaVolonteer")
0x1402: Push((int) 1)
0x1403: @ SetVariable(Stack[-2], Stack[-1])
0x1404: Pop(2)
0x1405: PushEmpty()
0x1406: Call2 0x1532

0x1407: Pop(0)
0x1408: PushEmpty(bool, string, string)
0x1409: Stack[-2] = "quest_d6_01"
0x140a: Stack[-1] = "completed"
0x140b: Call2 0x12d2

0x140c: Pop(3)
0x140d: Return(); Pop(0)

0x140e: PushEmpty()
0x140f: PushEmpty(int, string)
0x1410: Stack[-1] = "d1q03"
0x1411: Call2 0x12a1

0x1412: Pop(1)
0x1413: Push((int) 1)
0x1414: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1415: IF (Stack[-1] == 0) GOTO 0x1418; Pop(1)

0x1416: Stack[-2] = (bool) 1
0x1417: Return(); Pop(0)

0x1418: Stack[-2] = (bool) 0
0x1419: Return(); Pop(0)

0x141a: PushEmpty()
0x141b: PushEmpty(int, string)
0x141c: Stack[-1] = "ood1Ospina2"
0x141d: Call2 0x12a1

0x141e: Pop(1)
0x141f: Push((int) 0)
0x1420: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1421: IF (Stack[-1] == 0) GOTO 0x1424; Pop(1)

0x1422: Stack[-2] = (bool) 1
0x1423: Return(); Pop(0)

0x1424: Stack[-2] = (bool) 0
0x1425: Return(); Pop(0)

0x1426: PushEmpty()
0x1427: PushEmpty(int, string)
0x1428: Stack[-1] = "ood3Ospina2"
0x1429: Call2 0x12a1

0x142a: Pop(1)
0x142b: Push((int) 0)
0x142c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x142d: IF (Stack[-1] == 0) GOTO 0x1430; Pop(1)

0x142e: Stack[-2] = (bool) 1
0x142f: Return(); Pop(0)

0x1430: Stack[-2] = (bool) 0
0x1431: Return(); Pop(0)

0x1432: PushEmpty()
0x1433: PushEmpty(int, string)
0x1434: Stack[-1] = "ood3Ospina3"
0x1435: Call2 0x12a1

0x1436: Pop(1)
0x1437: Push((int) 0)
0x1438: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1439: IF (Stack[-1] == 0) GOTO 0x143c; Pop(1)

0x143a: Stack[-2] = (bool) 1
0x143b: Return(); Pop(0)

0x143c: Stack[-2] = (bool) 0
0x143d: Return(); Pop(0)

0x143e: PushEmpty()
0x143f: PushEmpty(int, string)
0x1440: Stack[-1] = "ood3Ospina4"
0x1441: Call2 0x12a1

0x1442: Pop(1)
0x1443: Push((int) 0)
0x1444: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1445: IF (Stack[-1] == 0) GOTO 0x1448; Pop(1)

0x1446: Stack[-2] = (bool) 1
0x1447: Return(); Pop(0)

0x1448: Stack[-2] = (bool) 0
0x1449: Return(); Pop(0)

0x144a: PushEmpty()
0x144b: PushEmpty(int, string)
0x144c: Stack[-1] = "d3q01"
0x144d: Call2 0x12a1

0x144e: Pop(1)
0x144f: Push((int) 2)
0x1450: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1451: IF (Stack[-1] == 0) GOTO 0x1454; Pop(1)

0x1452: Stack[-2] = (bool) 1
0x1453: Return(); Pop(0)

0x1454: Stack[-2] = (bool) 0
0x1455: Return(); Pop(0)

0x1456: PushEmpty()
0x1457: PushEmpty(int, string)
0x1458: Stack[-1] = "d3q01"
0x1459: Call2 0x12a1

0x145a: Pop(1)
0x145b: Push((int) 6)
0x145c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x145d: IF (Stack[-1] == 0) GOTO 0x1460; Pop(1)

0x145e: Stack[-2] = (bool) 1
0x145f: Return(); Pop(0)

0x1460: Stack[-2] = (bool) 0
0x1461: Return(); Pop(0)

0x1462: PushEmpty()
0x1463: PushEmpty(int, string)
0x1464: Stack[-1] = "d4q01_subquest"
0x1465: Call2 0x12a1

0x1466: Pop(1)
0x1467: Push((int) 1)
0x1468: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1469: IF (Stack[-1] == 0) GOTO 0x146c; Pop(1)

0x146a: Stack[-2] = (bool) 1
0x146b: Return(); Pop(0)

0x146c: Stack[-2] = (bool) 0
0x146d: Return(); Pop(0)

0x146e: PushEmpty()
0x146f: PushEmpty(int, string)
0x1470: Stack[-1] = "ood4Ospina1"
0x1471: Call2 0x12a1

0x1472: Pop(1)
0x1473: Push((int) 0)
0x1474: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1475: IF (Stack[-1] == 0) GOTO 0x1478; Pop(1)

0x1476: Stack[-2] = (bool) 1
0x1477: Return(); Pop(0)

0x1478: Stack[-2] = (bool) 0
0x1479: Return(); Pop(0)

0x147a: PushEmpty()
0x147b: PushEmpty(int, string)
0x147c: Stack[-1] = "d4q01_subquest"
0x147d: Call2 0x12a1

0x147e: Pop(1)
0x147f: Push((int) 3)
0x1480: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1481: IF (Stack[-1] == 0) GOTO 0x1484; Pop(1)

0x1482: Stack[-2] = (bool) 1
0x1483: Return(); Pop(0)

0x1484: Stack[-2] = (bool) 0
0x1485: Return(); Pop(0)

0x1486: PushEmpty()
0x1487: PushEmpty(int, string)
0x1488: Stack[-1] = "ood4Ospina2"
0x1489: Call2 0x12a1

0x148a: Pop(1)
0x148b: Push((int) 0)
0x148c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x148d: IF (Stack[-1] == 0) GOTO 0x1490; Pop(1)

0x148e: Stack[-2] = (bool) 1
0x148f: Return(); Pop(0)

0x1490: Stack[-2] = (bool) 0
0x1491: Return(); Pop(0)

0x1492: PushEmpty()
0x1493: PushEmpty(int, string)
0x1494: Stack[-1] = "d6q01"
0x1495: Call2 0x12a1

0x1496: Pop(1)
0x1497: Push((int) 1)
0x1498: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1499: IF (Stack[-1] == 0) GOTO 0x149c; Pop(1)

0x149a: Stack[-2] = (bool) 1
0x149b: Return(); Pop(0)

0x149c: Stack[-2] = (bool) 0
0x149d: Return(); Pop(0)

0x149e: PushEmpty()
0x149f: PushEmpty(int, string)
0x14a0: Stack[-1] = "ood6Ospina1"
0x14a1: Call2 0x12a1

0x14a2: Pop(1)
0x14a3: Push((int) 0)
0x14a4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14a5: IF (Stack[-1] == 0) GOTO 0x14a8; Pop(1)

0x14a6: Stack[-2] = (bool) 1
0x14a7: Return(); Pop(0)

0x14a8: Stack[-2] = (bool) 0
0x14a9: Return(); Pop(0)

0x14aa: PushEmpty()
0x14ab: PushEmpty(int, string)
0x14ac: Stack[-1] = "ood6Ospina2"
0x14ad: Call2 0x12a1

0x14ae: Pop(1)
0x14af: Push((int) 0)
0x14b0: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14b1: IF (Stack[-1] == 0) GOTO 0x14b4; Pop(1)

0x14b2: Stack[-2] = (bool) 1
0x14b3: Return(); Pop(0)

0x14b4: Stack[-2] = (bool) 0
0x14b5: Return(); Pop(0)

0x14b6: PushEmpty()
0x14b7: PushEmpty(int, string)
0x14b8: Stack[-1] = "d8q01"
0x14b9: Call2 0x12a1

0x14ba: Pop(1)
0x14bb: Push((int) 0)
0x14bc: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14bd: IF (Stack[-1] == 0) GOTO 0x14c0; Pop(1)

0x14be: Stack[-2] = (bool) 1
0x14bf: Return(); Pop(0)

0x14c0: Stack[-2] = (bool) 0
0x14c1: Return(); Pop(0)

0x14c2: PushEmpty()
0x14c3: PushEmpty(int, string)
0x14c4: Stack[-1] = "ood8Ospina1"
0x14c5: Call2 0x12a1

0x14c6: Pop(1)
0x14c7: Push((int) 0)
0x14c8: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14c9: IF (Stack[-1] == 0) GOTO 0x14cc; Pop(1)

0x14ca: Stack[-2] = (bool) 1
0x14cb: Return(); Pop(0)

0x14cc: Stack[-2] = (bool) 0
0x14cd: Return(); Pop(0)

0x14ce: PushEmpty()
0x14cf: PushEmpty(int, string)
0x14d0: Stack[-1] = "ood8Ospina2"
0x14d1: Call2 0x12a1

0x14d2: Pop(1)
0x14d3: Push((int) 0)
0x14d4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14d5: IF (Stack[-1] == 0) GOTO 0x14d8; Pop(1)

0x14d6: Stack[-2] = (bool) 1
0x14d7: Return(); Pop(0)

0x14d8: Stack[-2] = (bool) 0
0x14d9: Return(); Pop(0)

0x14da: PushEmpty()
0x14db: PushEmpty(int, string)
0x14dc: Stack[-1] = "microscope_d6q01_ospina_blood"
0x14dd: Call2 0x12a1

0x14de: Pop(1)
0x14df: Push((int) 0)
0x14e0: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x14e1: IF (Stack[-1] == 0) GOTO 0x14e4; Pop(1)

0x14e2: Stack[-2] = (bool) 1
0x14e3: Return(); Pop(0)

0x14e4: Stack[-2] = (bool) 0
0x14e5: Return(); Pop(0)

0x14e6: PushEmpty()
0x14e7: PushEmpty(int, string)
0x14e8: Stack[-1] = "d6q01"
0x14e9: Call2 0x12a1

0x14ea: Pop(1)
0x14eb: Push((int) 1000)
0x14ec: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14ed: IF (Stack[-1] == 0) GOTO 0x14f0; Pop(1)

0x14ee: Stack[-2] = (bool) 1
0x14ef: Return(); Pop(0)

0x14f0: Stack[-2] = (bool) 0
0x14f1: Return(); Pop(0)

0x14f2: PushEmpty()
0x14f3: PushEmpty(int, string)
0x14f4: Stack[-1] = "d6q01"
0x14f5: Call2 0x12a1

0x14f6: Pop(1)
0x14f7: Push((int) -1)
0x14f8: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14f9: IF (Stack[-1] == 0) GOTO 0x14fc; Pop(1)

0x14fa: Stack[-2] = (bool) 1
0x14fb: Return(); Pop(0)

0x14fc: Stack[-2] = (bool) 0
0x14fd: Return(); Pop(0)

0x14fe: PushEmpty(object, object)
0x14ff: Push((int) 623)
0x1500: Push((int) 2)
0x1501: Push((int) 532457)
0x1502: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1503: Pop(3)
0x1504: PushEmpty(bool, object, int)
0x1505: Stack[-2] = Stack[-4]
0x1506: Stack[-1] = (int) 37
0x1507: Call2 0x1566

0x1508: Pop(3)
0x1509: Return(); Pop(2)

0x150a: Stack[-1] = 0
0x150b: PushEmpty(object, object)
0x150c: Push((int) 71)
0x150d: Push((int) 1)
0x150e: Push((int) 512153)
0x150f: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1510: Pop(3)
0x1511: PushEmpty(bool, object, int)
0x1512: Stack[-2] = Stack[-4]
0x1513: Stack[-1] = (int) 25
0x1514: Call2 0x1566

0x1515: Pop(3)
0x1516: Return(); Pop(2)

0x1517: Stack[-1] = 0
0x1518: PushEmpty(object, object)
0x1519: Push((int) 70)
0x151a: Push((int) 1)
0x151b: Push((int) 512152)
0x151c: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x151d: Pop(3)
0x151e: PushEmpty(bool, object, int)
0x151f: Stack[-2] = Stack[-4]
0x1520: Stack[-1] = (int) 25
0x1521: Call2 0x1566

0x1522: Pop(3)
0x1523: Return(); Pop(2)

0x1524: Stack[-1] = 0
0x1525: PushEmpty(object, object)
0x1526: Push((int) 162)
0x1527: Push((int) 1)
0x1528: Push((int) 515395)
0x1529: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x152a: Pop(3)
0x152b: PushEmpty(bool, object, int)
0x152c: Stack[-2] = Stack[-4]
0x152d: Stack[-1] = (int) 111
0x152e: Call2 0x1566

0x152f: Pop(3)
0x1530: Return(); Pop(2)

0x1531: Stack[-1] = 0
0x1532: PushEmpty(object, object)
0x1533: Push((int) 121)
0x1534: Push((int) 1)
0x1535: Push((int) 513744)
0x1536: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1537: Pop(3)
0x1538: PushEmpty(bool, object, int)
0x1539: Stack[-2] = Stack[-4]
0x153a: Stack[-1] = (int) 111
0x153b: Call2 0x1566

0x153c: Pop(3)
0x153d: Return(); Pop(2)

0x153e: Stack[-1] = 0
0x153f: PushEmpty(object, object)
0x1540: Push((int) 721)
0x1541: Push((int) 1)
0x1542: Push((int) 538785)
0x1543: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1544: Pop(3)
0x1545: PushEmpty(bool, object, int)
0x1546: Stack[-2] = Stack[-4]
0x1547: Stack[-1] = (int) 111
0x1548: Call2 0x1566

0x1549: Pop(3)
0x154a: Return(); Pop(2)

0x154b: Stack[-1] = 0
0x154c: PushEmpty(object, object)
0x154d: Push((int) 178)
0x154e: Push((int) 1)
0x154f: Push((int) 515437)
0x1550: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1551: Pop(3)
0x1552: PushEmpty(bool, object, int)
0x1553: Stack[-2] = Stack[-4]
0x1554: Stack[-1] = (int) 175
0x1555: Call2 0x1566

0x1556: Pop(3)
0x1557: Return(); Pop(2)

0x1558: Stack[-1] = 0
0x1559: PushEmpty(object, object)
0x155a: @ GetDiaryRoot(Stack[-1])
0x155b: Pop(0)
0x155c: Pop(0); Push((bool) Stack[-1] == 0)
0x155d: IF (Stack[-1] == 0) GOTO 0x1563; Pop(1)

0x155e: Push("Can't retrieve diary root")
0x155f: @ Trace(Stack[-1])
0x1560: Pop(1)
0x1561: Stack[-3] = (bool) 0
0x1562: Return(); Pop(2)

0x1563: Stack[-3] = Stack[-1]
0x1564: Return(); Pop(2)

0x1565: Stack[-1] = 0
0x1566: PushEmpty(object, object, int, object, object, int)
0x1567: PushEmpty(object)
0x1568: Call2 0x1559

0x1569: Stack[-4] = Stack[-1]
0x156a: Pop(1)
0x156b: @@ Find(Stack[-7], Stack[-2])
0x156c: Pop(0)
0x156d: Pop(0); Push((bool) Stack[-2] == 0)
0x156e: IF (Stack[-1] == 0) GOTO 0x1575; Pop(1)

0x156f: Push("Can't find diary parent with id: ")
0x1570: Pop(1); Push(Stack[-1] + Stack[-8]);
0x1571: @ Trace(Stack[-1])
0x1572: Pop(1)
0x1573: Stack[-9] = (bool) 0
0x1574: Return(); Pop(6)

0x1575: @@ AddChild(Stack[-8])
0x1576: Pop(0)
0x1577: Push((int) 7)
0x1578: @ SendWorldWndMessage(Stack[-1])
0x1579: Pop(1)
0x157a: @@ GetCategory(Stack[-1])
0x157b: Pop(0)
0x157c: @ SetDiarySection(Stack[-1])
0x157d: Pop(0)
0x157e: Stack[-9] = (bool) 0
0x157f: Return(); Pop(6)

0x1580: Stack[-2] = 0
0x1581: Stack[-3] = 0
0x1582: PushEmpty(object, object, object, object)
0x1583: @ GetMainOutdoorScene(Stack[-2])
0x1584: Pop(0)
0x1585: Pop(0); Push((bool) Stack[-2] == 0)
0x1586: IF (Stack[-1] == 0) GOTO 0x158d; Pop(1)

0x1587: Push("Can't find main outdoor scene")
0x1588: @ Trace(Stack[-1])
0x1589: Pop(1)
0x158a: Stack[-1] = 0
0x158b: Stack[-5] = Stack[-1]
0x158c: Return(); Pop(4)

0x158d: @@ GetMap(Stack[-1])
0x158e: Pop(0)
0x158f: Stack[-5] = Stack[-1]
0x1590: Return(); Pop(4)

0x1591: Stack[-1] = 0
0x1592: Stack[-2] = 0
0x1593: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x1594: @ GetMainOutdoorScene(Stack[-2])
0x1595: Pop(0)
0x1596: Pop(0); Push((bool) Stack[-2] == 0)
0x1597: IF (Stack[-1] == 0) GOTO 0x159c; Pop(1)

0x1598: Push("Can't find main outdoor scene")
0x1599: @ Trace(Stack[-1])
0x159a: Pop(1)
0x159b: Return(); Pop(8)

0x159c: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x159d: Pop(0)
0x159e: Pop(0); Push((bool) Stack[-1] == 0)
0x159f: IF (Stack[-1] == 0) GOTO 0x15a6; Pop(1)

0x15a0: Push("Warning: outdoor scene locator ")
0x15a1: Pop(1); Push(Stack[-1] + Stack[-11]);
0x15a2: Push(" doesnt exist")
0x15a3: Pop(2); Push(Stack[-2] + Stack[-1]);
0x15a4: @ Trace(Stack[-1])
0x15a5: Pop(1)
0x15a6: @@ GetMap(Stack[-11])
0x15a7: Pop(0)
0x15a8: Pop(0); Push((bool) Stack[-11] == 0)
0x15a9: IF (Stack[-1] == 0) GOTO 0x15ae; Pop(1)

0x15aa: Push("Can't find map")
0x15ab: @ Trace(Stack[-1])
0x15ac: Pop(1)
0x15ad: Return(); Pop(8)

0x15ae: Push(CvectorIndex(Stack[-4], 0))
0x15af: Push(CvectorIndex(Stack[-5], 2))
0x15b0: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x15b1: Pop(2)
0x15b2: Return(); Pop(8)

0x15b3: Stack[-2] = 0
0x15b4: PushEmpty(int, int)
0x15b5: Push("branch")
0x15b6: @ GetVariable(Stack[-1], Stack[-2])
0x15b7: Pop(1)
0x15b8: Push((int) 0)
0x15b9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x15ba: IF (Stack[-1] == 0) GOTO 0x15be; Pop(1)

0x15bb: Stack[-3] = (int) 1
0x15bc: Return(); Pop(2)

0x15bd: GOTO 0x15c3

0x15be: Push((int) 1)
0x15bf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x15c0: IF (Stack[-1] == 0) GOTO 0x15c3; Pop(1)

0x15c1: Stack[-3] = (int) 2
0x15c2: Return(); Pop(2)

0x15c3: Stack[-3] = (int) 3
0x15c4: Return(); Pop(2)

0x15c5: PushEmpty()
0x15c6: Push(GlobalVars[1])
0x15c7: Pop(1); Push((bool) Stack[-1] == 0)
0x15c8: IF (Stack[-1] == 0) GOTO 0x15d2; Pop(1)

0x15c9: PushEmpty(int, object)
0x15ca: Stack[-1] = Stack[-3]
0x15cb: Push(-2, 1); TaskCall(12)
0x15cc: Call2 0xe63

0x15cd: Pop(-2, 1); TaskReturn
0x15ce: Pop(2)
0x15cf: Push(GlobalVars[1])
0x15d0: Stack[-1] = (bool) 1
0x15d1: GlobalVars[1] = Stack[-1]; Pop(1)
0x15d2: PushEmpty(bool, int)
0x15d3: Stack[-1] = (int) 1
0x15d4: Call2 0x12ec

0x15d5: Pop(1)
0x15d6: IF (Stack[-1] == 0) GOTO 0x15de; Pop(1)

0x15d7: PushEmpty(int, object)
0x15d8: Stack[-1] = Stack[-3]
0x15d9: Push(-2, 1); TaskCall(0)
0x15da: Call2 0x0

0x15db: Pop(-2, 1); TaskReturn
0x15dc: Pop(2)
0x15dd: Return(); Pop(0)

0x15de: PushEmpty(bool, int)
0x15df: Stack[-1] = (int) 3
0x15e0: Call2 0x12ec

0x15e1: Pop(1)
0x15e2: IF (Stack[-1] == 0) GOTO 0x15ea; Pop(1)

0x15e3: PushEmpty(int, object)
0x15e4: Stack[-1] = Stack[-3]
0x15e5: Push(-2, 1); TaskCall(6)
0x15e6: Call2 0x632

0x15e7: Pop(-2, 1); TaskReturn
0x15e8: Pop(2)
0x15e9: Return(); Pop(0)

0x15ea: PushEmpty(bool, int)
0x15eb: Stack[-1] = (int) 4
0x15ec: Call2 0x12ec

0x15ed: Pop(1)
0x15ee: IF (Stack[-1] == 0) GOTO 0x15f6; Pop(1)

0x15ef: PushEmpty(int, object)
0x15f0: Stack[-1] = Stack[-3]
0x15f1: Push(-2, 1); TaskCall(8)
0x15f2: Call2 0x961

0x15f3: Pop(-2, 1); TaskReturn
0x15f4: Pop(2)
0x15f5: Return(); Pop(0)

0x15f6: PushEmpty(bool, int)
0x15f7: Stack[-1] = (int) 6
0x15f8: Call2 0x12ec

0x15f9: Pop(1)
0x15fa: IF (Stack[-1] == 0) GOTO 0x1602; Pop(1)

0x15fb: PushEmpty(int, object)
0x15fc: Stack[-1] = Stack[-3]
0x15fd: Push(-2, 1); TaskCall(4)
0x15fe: Call2 0x377

0x15ff: Pop(-2, 1); TaskReturn
0x1600: Pop(2)
0x1601: Return(); Pop(0)

0x1602: PushEmpty(bool, int)
0x1603: Stack[-1] = (int) 8
0x1604: Call2 0x12ec

0x1605: Pop(1)
0x1606: IF (Stack[-1] == 0) GOTO 0x160e; Pop(1)

0x1607: PushEmpty(int, object)
0x1608: Stack[-1] = Stack[-3]
0x1609: Push(-2, 1); TaskCall(10)
0x160a: Call2 0xb97

0x160b: Pop(-2, 1); TaskReturn
0x160c: Pop(2)
0x160d: Return(); Pop(0)

0x160e: PushEmpty(bool, int)
0x160f: Stack[-1] = (int) 12
0x1610: Call2 0x12ec

0x1611: Pop(1)
0x1612: IF (Stack[-1] == 0) GOTO 0x161a; Pop(1)

0x1613: PushEmpty(int, object)
0x1614: Stack[-1] = Stack[-3]
0x1615: Push(-2, 1); TaskCall(2)
0x1616: Call2 0x274

0x1617: Pop(-2, 1); TaskReturn
0x1618: Pop(2)
0x1619: Return(); Pop(0)

0x161a: PushEmpty(int, object)
0x161b: Stack[-1] = Stack[-3]
0x161c: Push(-2, 1); TaskCall(14)
0x161d: Call2 0xf8f

0x161e: Pop(-2, 1); TaskReturn
0x161f: Pop(2)
0x1620: Return(); Pop(0)

