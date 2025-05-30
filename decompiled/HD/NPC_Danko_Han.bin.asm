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
	Questioning
	SetMessage
	ClearReplies
	AddReply
	Neutral
	all
	idle
	Suspicion
	Doubt
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
	HasItem
	ui/NPC_Han.png
	ui/NPC_Han_b.png
	ood7Han1
	d11q05
	quest_d11_05
	place_enemy_before
	quest_d9_01
	teleport_to_mnogogrannik
	map_chertez_state
	map_chertez_force
	pt_map_aglaja
	ShowMap
	ood9Xan3
	playsound
	giveitem
	d3q02
	d3q02HanGotoMladVlad
	pt_map_mladvlad
	AddMark
	ood8Han1
	ood9Xan1
	d9q01
	Rifle
	RemoveItemByType
	SelectWeapon
	completed
	burah_serum
	GetItemCountOfType
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
	mt_han

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

RunOp = 0xd85
RunTask = 16

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xc8 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x2ec Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x43e Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x605 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x91b Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa39 Vars = (int, int)
	GTASK_12 Vars = (object) Params = 2
	GTASK_13 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xc5d Vars = (int, int)
	GTASK_14 Vars = (object) Params = 2
	GTASK_15 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xd5b Vars = (int, int)
	GTASK_16 Vars = (cvector) Params = 0
		EVENT_7 Op = 0xdce Vars = (int)
		EVENT_6 Op = 0xdf4 Vars = ()
		EVENT_5 Op = 0xe03 Vars = ()
		EVENT_45 Op = 0xe10 Vars = (bool)
		EVENT_0 Op = 0xe1c Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0xea5

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x1011

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x100f

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x1013

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x1015

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x11dd

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
0x31: Call2 0xfbb

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0xefc

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
0x48: Call2 0xeea

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
0x56: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x57: PushEmpty(bool)
0x58: Stack[-1] = (bool) 0
0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b: Call2 0x10e1

0x5c: Pop(1)
0x5d: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x5e: PushEmpty(bool, object)
0x5f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x60: Call2 0x10dc

0x61: Pop(1)
0x62: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x63: Stack[-1] = (bool) 1
0x64: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x65: PushEmpty(object, object)
0x66: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x67: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x68: Call2 0x1061

0x69: Pop(2)
0x6a: PushEmpty(string)
0x6b: Stack[-1] = "Questioning"
0x6c: Call2 0xb2

0x6d: Pop(1)
0x6e: Push((int) 510420)
0x6f: @@ SetMessage(Stack[-1])
0x70: Pop(1)
0x71: @@ ClearReplies()
0x72: Pop(0)
0x73: Push((int) 510421)
0x74: Push((int) 11490)
0x75: Push((int) 11489)
0x76: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x77: Pop(3)
0x78: Push((int) 534384)
0x79: Push((int) 36001)
0x7a: Push((int) 35999)
0x7b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c: Pop(3)
0x7d: GOTO 0x94

0x7e: PushEmpty(string)
0x7f: Stack[-1] = "Neutral"
0x80: Call2 0xb2

0x81: Pop(1)
0x82: Push((int) 534418)
0x83: @@ SetMessage(Stack[-1])
0x84: Pop(1)
0x85: @@ ClearReplies()
0x86: Pop(0)
0x87: Push((int) 534419)
0x88: Push((int) -1)
0x89: Push((int) 36046)
0x8a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8b: Pop(3)
0x8c: Push((int) 536096)
0x8d: Push((int) -1)
0x8e: Push((int) 37848)
0x8f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x90: Pop(3)
0x91: GOTO 0x94

0x92: Return(); Pop(0)

0x93: GOTO 0x55

0x94: PushEmpty(bool)
0x95: Call2 0x1017

0x96: Pop(0)
0x97: IF (Stack[-1] == 0) GOTO 0xa3; Pop(1)

0x98: @ lshWaitForAnimEnd()
0x99: Pop(0)
0x9a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9b: IF (Stack[-1] == 0) GOTO 0x9d; Pop(1)

0x9c: GOTO 0xa2

0x9d: PushEmpty(string)
0x9e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x9f: Call2 0xf86

0xa0: Pop(1)
0xa1: GOTO 0x98

0xa2: GOTO 0xb1

0xa3: Push("all")
0xa4: Push("idle")
0xa5: @ PlayAnimation(Stack[-2], Stack[-1])
0xa6: Pop(2)
0xa7: @ WaitForAnimEnd()
0xa8: Pop(0)
0xa9: Push( Stack[3 + Tasks[-1].StackPointer] )
0xaa: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xab: GOTO 0xb1

0xac: Push("all")
0xad: Push("idle")
0xae: @ PlayAnimation(Stack[-2], Stack[-1])
0xaf: Pop(2)
0xb0: GOTO 0xa7

0xb1: Return(); Pop(0)

0xb2: PushEmpty()
0xb3: PushEmpty(bool)
0xb4: Call2 0x1017

0xb5: Pop(0)
0xb6: Pop(1); Push((bool) Stack[-1] == 0)
0xb7: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb8: Return(); Pop(0)

0xb9: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xba: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xbb: Return(); Pop(0)

0xbc: PushEmpty(string, bool)
0xbd: Stack[-2] = Stack[-3]
0xbe: Push("")
0xbf: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xc0: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0xc1: Stack[-1] = (bool) 0
0xc2: GOTO 0xc4

0xc3: Stack[-1] = (bool) 1
0xc4: Call2 0xf96

0xc5: Pop(2)
0xc6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xc7: Return(); Pop(0)

0xc8: PushEmpty()
0xc9: Push((int) 1)
0xca: IF (Stack[-1] == 0) GOTO 0x245; Pop(1)

0xcb: PushEmpty()
0xcc: Call2 0xfb4

0xcd: Pop(0)
0xce: Push((int) 11509)
0xcf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd0: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xd1: PushEmpty(object, object)
0xd2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd4: Call2 0x1063

0xd5: Pop(2)
0xd6: Push((int) 11510)
0xd7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd8: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xd9: PushEmpty(object, object)
0xda: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdc: Call2 0x1063

0xdd: Pop(2)
0xde: Push((int) 11505)
0xdf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe0: IF (Stack[-1] == 0) GOTO 0xe6; Pop(1)

0xe1: PushEmpty(object, object)
0xe2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe4: Call2 0x1063

0xe5: Pop(2)
0xe6: Push((int) 11498)
0xe7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe8: IF (Stack[-1] == 0) GOTO 0xee; Pop(1)

0xe9: PushEmpty(object, object)
0xea: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xeb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xec: Call2 0x1063

0xed: Pop(2)
0xee: Push((int) 11488)
0xef: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf0: IF (Stack[-1] == 0) GOTO 0x12c; Pop(1)

0xf1: PushEmpty(bool)
0xf2: Stack[-1] = (bool) 0
0xf3: PushEmpty(bool, object)
0xf4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf5: Call2 0x10e1

0xf6: Pop(1)
0xf7: IF (Stack[-1] == 0) GOTO 0xfe; Pop(1)

0xf8: PushEmpty(bool, object)
0xf9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xfa: Call2 0x10dc

0xfb: Pop(1)
0xfc: IF (Stack[-1] == 0) GOTO 0xfe; Pop(1)

0xfd: Stack[-1] = (bool) 1
0xfe: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0xff: PushEmpty(object, object)
0x100: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x101: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x102: Call2 0x1061

0x103: Pop(2)
0x104: PushEmpty(string)
0x105: Stack[-1] = "Questioning"
0x106: Call2 0xb2

0x107: Pop(1)
0x108: Push((int) 510420)
0x109: @@ SetMessage(Stack[-1])
0x10a: Pop(1)
0x10b: @@ ClearReplies()
0x10c: Pop(0)
0x10d: Push((int) 510421)
0x10e: Push((int) 11490)
0x10f: Push((int) 11489)
0x110: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x111: Pop(3)
0x112: Push((int) 534384)
0x113: Push((int) 36001)
0x114: Push((int) 35999)
0x115: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x116: Pop(3)
0x117: Return(); Pop(0)

0x118: PushEmpty(string)
0x119: Stack[-1] = "Neutral"
0x11a: Call2 0xb2

0x11b: Pop(1)
0x11c: Push((int) 534418)
0x11d: @@ SetMessage(Stack[-1])
0x11e: Pop(1)
0x11f: @@ ClearReplies()
0x120: Pop(0)
0x121: Push((int) 534419)
0x122: Push((int) -1)
0x123: Push((int) 36046)
0x124: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x125: Pop(3)
0x126: Push((int) 536096)
0x127: Push((int) -1)
0x128: Push((int) 37848)
0x129: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12a: Pop(3)
0x12b: Return(); Pop(0)

0x12c: Push((int) 36001)
0x12d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12e: IF (Stack[-1] == 0) GOTO 0x13e; Pop(1)

0x12f: PushEmpty(string)
0x130: Stack[-1] = "Questioning"
0x131: Call2 0xb2

0x132: Pop(1)
0x133: Push((int) 534386)
0x134: @@ SetMessage(Stack[-1])
0x135: Pop(1)
0x136: @@ ClearReplies()
0x137: Pop(0)
0x138: Push((int) 534387)
0x139: Push((int) 36003)
0x13a: Push((int) 36002)
0x13b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13c: Pop(3)
0x13d: Return(); Pop(0)

0x13e: Push((int) 36003)
0x13f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x140: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0x141: PushEmpty(string)
0x142: Stack[-1] = "Questioning"
0x143: Call2 0xb2

0x144: Pop(1)
0x145: Push((int) 534388)
0x146: @@ SetMessage(Stack[-1])
0x147: Pop(1)
0x148: @@ ClearReplies()
0x149: Pop(0)
0x14a: Push((int) 534389)
0x14b: Push((int) 36006)
0x14c: Push((int) 36004)
0x14d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14e: Pop(3)
0x14f: Push((int) 534390)
0x150: Push((int) 36006)
0x151: Push((int) 36005)
0x152: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x153: Pop(3)
0x154: Return(); Pop(0)

0x155: Push((int) 36006)
0x156: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x157: IF (Stack[-1] == 0) GOTO 0x16c; Pop(1)

0x158: PushEmpty(string)
0x159: Stack[-1] = "Questioning"
0x15a: Call2 0xb2

0x15b: Pop(1)
0x15c: Push((int) 534391)
0x15d: @@ SetMessage(Stack[-1])
0x15e: Pop(1)
0x15f: @@ ClearReplies()
0x160: Pop(0)
0x161: Push((int) 534392)
0x162: Push((int) 36009)
0x163: Push((int) 36007)
0x164: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x165: Pop(3)
0x166: Push((int) 534393)
0x167: Push((int) 36009)
0x168: Push((int) 36008)
0x169: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16a: Pop(3)
0x16b: Return(); Pop(0)

0x16c: Push((int) 36009)
0x16d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16e: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x16f: PushEmpty(string)
0x170: Stack[-1] = "Suspicion"
0x171: Call2 0xb2

0x172: Pop(1)
0x173: Push((int) 534394)
0x174: @@ SetMessage(Stack[-1])
0x175: Pop(1)
0x176: @@ ClearReplies()
0x177: Pop(0)
0x178: Push((int) 534395)
0x179: Push((int) 36013)
0x17a: Push((int) 36012)
0x17b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17c: Pop(3)
0x17d: Return(); Pop(0)

0x17e: Push((int) 36013)
0x17f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x180: IF (Stack[-1] == 0) GOTO 0x190; Pop(1)

0x181: PushEmpty(string)
0x182: Stack[-1] = "Neutral"
0x183: Call2 0xb2

0x184: Pop(1)
0x185: Push((int) 534396)
0x186: @@ SetMessage(Stack[-1])
0x187: Pop(1)
0x188: @@ ClearReplies()
0x189: Pop(0)
0x18a: Push((int) 534397)
0x18b: Push((int) 11492)
0x18c: Push((int) 36014)
0x18d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18e: Pop(3)
0x18f: Return(); Pop(0)

0x190: Push((int) 11490)
0x191: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x192: IF (Stack[-1] == 0) GOTO 0x1a7; Pop(1)

0x193: PushEmpty(string)
0x194: Stack[-1] = "Doubt"
0x195: Call2 0xb2

0x196: Pop(1)
0x197: Push((int) 510422)
0x198: @@ SetMessage(Stack[-1])
0x199: Pop(1)
0x19a: @@ ClearReplies()
0x19b: Pop(0)
0x19c: Push((int) 510423)
0x19d: Push((int) 11492)
0x19e: Push((int) 11491)
0x19f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a0: Pop(3)
0x1a1: Push((int) 534385)
0x1a2: Push((int) 11502)
0x1a3: Push((int) 36000)
0x1a4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a5: Pop(3)
0x1a6: Return(); Pop(0)

0x1a7: Push((int) 11492)
0x1a8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a9: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1aa: PushEmpty(string)
0x1ab: Stack[-1] = "Doubt"
0x1ac: Call2 0xb2

0x1ad: Pop(1)
0x1ae: Push((int) 510424)
0x1af: @@ SetMessage(Stack[-1])
0x1b0: Pop(1)
0x1b1: @@ ClearReplies()
0x1b2: Pop(0)
0x1b3: Push((int) 510425)
0x1b4: Push((int) 11494)
0x1b5: Push((int) 11493)
0x1b6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b7: Pop(3)
0x1b8: Return(); Pop(0)

0x1b9: Push((int) 11494)
0x1ba: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1bb: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1bc: PushEmpty(string)
0x1bd: Stack[-1] = "Grin"
0x1be: Call2 0xb2

0x1bf: Pop(1)
0x1c0: Push((int) 510426)
0x1c1: @@ SetMessage(Stack[-1])
0x1c2: Pop(1)
0x1c3: @@ ClearReplies()
0x1c4: Pop(0)
0x1c5: Push((int) 510427)
0x1c6: Push((int) 11496)
0x1c7: Push((int) 11495)
0x1c8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c9: Pop(3)
0x1ca: Return(); Pop(0)

0x1cb: Push((int) 11496)
0x1cc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1cd: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0x1ce: PushEmpty(string)
0x1cf: Stack[-1] = "Questioning"
0x1d0: Call2 0xb2

0x1d1: Pop(1)
0x1d2: Push((int) 510428)
0x1d3: @@ SetMessage(Stack[-1])
0x1d4: Pop(1)
0x1d5: @@ ClearReplies()
0x1d6: Pop(0)
0x1d7: Push((int) 510429)
0x1d8: Push((int) 11499)
0x1d9: Push((int) 11497)
0x1da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1db: Pop(3)
0x1dc: Push((int) 510430)
0x1dd: Push((int) -1)
0x1de: Push((int) 11498)
0x1df: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e0: Pop(3)
0x1e1: Return(); Pop(0)

0x1e2: Push((int) 11499)
0x1e3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e4: IF (Stack[-1] == 0) GOTO 0x1f9; Pop(1)

0x1e5: PushEmpty(string)
0x1e6: Stack[-1] = "Suspicion"
0x1e7: Call2 0xb2

0x1e8: Pop(1)
0x1e9: Push((int) 510431)
0x1ea: @@ SetMessage(Stack[-1])
0x1eb: Pop(1)
0x1ec: @@ ClearReplies()
0x1ed: Pop(0)
0x1ee: Push((int) 510432)
0x1ef: Push((int) 11502)
0x1f0: Push((int) 11500)
0x1f1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f2: Pop(3)
0x1f3: Push((int) 510433)
0x1f4: Push((int) 11502)
0x1f5: Push((int) 11501)
0x1f6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f7: Pop(3)
0x1f8: Return(); Pop(0)

0x1f9: Push((int) 11502)
0x1fa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1fb: IF (Stack[-1] == 0) GOTO 0x210; Pop(1)

0x1fc: PushEmpty(string)
0x1fd: Stack[-1] = "Suspicion"
0x1fe: Call2 0xb2

0x1ff: Pop(1)
0x200: Push((int) 510434)
0x201: @@ SetMessage(Stack[-1])
0x202: Pop(1)
0x203: @@ ClearReplies()
0x204: Pop(0)
0x205: Push((int) 510435)
0x206: Push((int) 11504)
0x207: Push((int) 11503)
0x208: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x209: Pop(3)
0x20a: Push((int) 510437)
0x20b: Push((int) -1)
0x20c: Push((int) 11505)
0x20d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20e: Pop(3)
0x20f: Return(); Pop(0)

0x210: Push((int) 11504)
0x211: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x212: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x213: PushEmpty(string)
0x214: Stack[-1] = "Neutral"
0x215: Call2 0xb2

0x216: Pop(1)
0x217: Push((int) 510436)
0x218: @@ SetMessage(Stack[-1])
0x219: Pop(1)
0x21a: @@ ClearReplies()
0x21b: Pop(0)
0x21c: Push((int) 510438)
0x21d: Push((int) 11508)
0x21e: Push((int) 11507)
0x21f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x220: Pop(3)
0x221: Return(); Pop(0)

0x222: Push((int) 11508)
0x223: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x224: IF (Stack[-1] == 0) GOTO 0x239; Pop(1)

0x225: PushEmpty(string)
0x226: Stack[-1] = "Neutral"
0x227: Call2 0xb2

0x228: Pop(1)
0x229: Push((int) 510439)
0x22a: @@ SetMessage(Stack[-1])
0x22b: Pop(1)
0x22c: @@ ClearReplies()
0x22d: Pop(0)
0x22e: Push((int) 510440)
0x22f: Push((int) -1)
0x230: Push((int) 11509)
0x231: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x232: Pop(3)
0x233: Push((int) 510441)
0x234: Push((int) -1)
0x235: Push((int) 11510)
0x236: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x237: Pop(3)
0x238: Return(); Pop(0)

0x239: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x23a: PushEmpty(bool)
0x23b: Call2 0x1017

0x23c: Pop(0)
0x23d: IF (Stack[-1] == 0) GOTO 0x241; Pop(1)

0x23e: @ lshStopAnimation()
0x23f: Pop(0)
0x240: GOTO 0x243

0x241: @ StopAnimation()
0x242: Pop(0)
0x243: Return(); Pop(0)

0x244: GOTO 0xc9

0x245: Return(); Pop(0)

0x246: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x247: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x248: PushEmpty(bool, object, float)
0x249: Stack[-2] = Stack[-12]
0x24a: Stack[-1] = (float) 70.0
0x24b: Call2 0xea5

0x24c: Pop(2)
0x24d: Pop(1); Push((bool) Stack[-1] == 0)
0x24e: IF (Stack[-1] == 0) GOTO 0x251; Pop(1)

0x24f: Stack[-10] = (int) -2
0x250: Return(); Pop(8)

0x251: @ CreateDialog(Stack[-4])
0x252: Pop(0)
0x253: PushEmpty(int)
0x254: Call2 0x1011

0x255: Pop(0)
0x256: @@ SetNPCName(Stack[-1])
0x257: Pop(1)
0x258: PushEmpty(int)
0x259: Call2 0x100f

0x25a: Pop(0)
0x25b: @@ SetNPCDescription(Stack[-1])
0x25c: Pop(1)
0x25d: PushEmpty(string)
0x25e: Call2 0x1013

0x25f: Pop(0)
0x260: @@ SetPhoto(Stack[-1])
0x261: Pop(1)
0x262: PushEmpty(string)
0x263: Call2 0x1015

0x264: Pop(0)
0x265: @@ SetPhoto2(Stack[-1])
0x266: Pop(1)
0x267: PushEmpty(int)
0x268: Call2 0x11dd

0x269: Pop(0)
0x26a: @@ SetPlayerName(Stack[-1])
0x26b: Pop(1)
0x26c: Stack[-2] = (int) -1
0x26d: @ IsOverrideActive(Stack[-3])
0x26e: Pop(0)
0x26f: Push(Stack[-3])
0x270: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x271: Stack[-10] = (int) -2
0x272: Return(); Pop(8)

0x273: @ DoDialog(Stack[-4])
0x274: Pop(0)
0x275: PushEmpty(bool, object)
0x276: PushEmpty(object)
0x277: Call2 0xfbb

0x278: Stack[-2] = Stack[-1]
0x279: Pop(1)
0x27a: Call2 0xefc

0x27b: Pop(2)
0x27c: PushEmpty(object, object)
0x27d: Stack[-2] = Stack[-11]
0x27e: Stack[-1] = Stack[-6]
0x27f: Push(-2, 4); TaskCall(3)
0x280: Call2 0x297

0x281: Pop(-2, 4); TaskReturn
0x282: Pop(2)
0x283: @@ IsDialogEnd(Stack[-1])
0x284: Pop(0)
0x285: Pop(0); Push((bool) Stack[-1] == 0)
0x286: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x287: @ sync()
0x288: Pop(0)
0x289: @@ IsDialogEnd(Stack[-1])
0x28a: Pop(0)
0x28b: GOTO 0x285

0x28c: PushEmpty(object)
0x28d: Stack[-1] = Stack[-10]
0x28e: Call2 0xeea

0x28f: Pop(1)
0x290: @ StopDialog(Stack[-4])
0x291: Pop(0)
0x292: @@ GetReturnValue(Stack[-2])
0x293: Pop(0)
0x294: Stack[-10] = Stack[-2]
0x295: Return(); Pop(8)

0x296: Stack[-4] = 0
0x297: PushEmpty()
0x298: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x299: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x29a: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x29b: Push((int) 1)
0x29c: IF (Stack[-1] == 0) GOTO 0x2b8; Pop(1)

0x29d: PushEmpty(string)
0x29e: Stack[-1] = "Suspicion"
0x29f: Call2 0x2d6

0x2a0: Pop(1)
0x2a1: Push((int) 512232)
0x2a2: @@ SetMessage(Stack[-1])
0x2a3: Pop(1)
0x2a4: @@ ClearReplies()
0x2a5: Pop(0)
0x2a6: PushEmpty(bool, object)
0x2a7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2a8: Call2 0x10a1

0x2a9: Pop(1)
0x2aa: IF (Stack[-1] == 0) GOTO 0x2b0; Pop(1)

0x2ab: Push((int) 512233)
0x2ac: Push((int) 13389)
0x2ad: Push((int) 13388)
0x2ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2af: Pop(3)
0x2b0: Push((int) 533144)
0x2b1: Push((int) -1)
0x2b2: Push((int) 34662)
0x2b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b4: Pop(3)
0x2b5: GOTO 0x2b8

0x2b6: Return(); Pop(0)

0x2b7: GOTO 0x29b

0x2b8: PushEmpty(bool)
0x2b9: Call2 0x1017

0x2ba: Pop(0)
0x2bb: IF (Stack[-1] == 0) GOTO 0x2c7; Pop(1)

0x2bc: @ lshWaitForAnimEnd()
0x2bd: Pop(0)
0x2be: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2bf: IF (Stack[-1] == 0) GOTO 0x2c1; Pop(1)

0x2c0: GOTO 0x2c6

0x2c1: PushEmpty(string)
0x2c2: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x2c3: Call2 0xf86

0x2c4: Pop(1)
0x2c5: GOTO 0x2bc

0x2c6: GOTO 0x2d5

0x2c7: Push("all")
0x2c8: Push("idle")
0x2c9: @ PlayAnimation(Stack[-2], Stack[-1])
0x2ca: Pop(2)
0x2cb: @ WaitForAnimEnd()
0x2cc: Pop(0)
0x2cd: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2ce: IF (Stack[-1] == 0) GOTO 0x2d0; Pop(1)

0x2cf: GOTO 0x2d5

0x2d0: Push("all")
0x2d1: Push("idle")
0x2d2: @ PlayAnimation(Stack[-2], Stack[-1])
0x2d3: Pop(2)
0x2d4: GOTO 0x2cb

0x2d5: Return(); Pop(0)

0x2d6: PushEmpty()
0x2d7: PushEmpty(bool)
0x2d8: Call2 0x1017

0x2d9: Pop(0)
0x2da: Pop(1); Push((bool) Stack[-1] == 0)
0x2db: IF (Stack[-1] == 0) GOTO 0x2dd; Pop(1)

0x2dc: Return(); Pop(0)

0x2dd: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x2de: IF (Stack[-1] == 0) GOTO 0x2e0; Pop(1)

0x2df: Return(); Pop(0)

0x2e0: PushEmpty(string, bool)
0x2e1: Stack[-2] = Stack[-3]
0x2e2: Push("")
0x2e3: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2e4: IF (Stack[-1] == 0) GOTO 0x2e7; Pop(1)

0x2e5: Stack[-1] = (bool) 0
0x2e6: GOTO 0x2e8

0x2e7: Stack[-1] = (bool) 1
0x2e8: Call2 0xf96

0x2e9: Pop(2)
0x2ea: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x2eb: Return(); Pop(0)

0x2ec: PushEmpty()
0x2ed: Push((int) 1)
0x2ee: IF (Stack[-1] == 0) GOTO 0x37e; Pop(1)

0x2ef: PushEmpty()
0x2f0: Call2 0xfb4

0x2f1: Pop(0)
0x2f2: Push((int) 13388)
0x2f3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2f4: IF (Stack[-1] == 0) GOTO 0x2fa; Pop(1)

0x2f5: PushEmpty(object, object)
0x2f6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2f7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2f8: Call2 0x1019

0x2f9: Pop(2)
0x2fa: Push((int) 13387)
0x2fb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2fc: IF (Stack[-1] == 0) GOTO 0x316; Pop(1)

0x2fd: PushEmpty(string)
0x2fe: Stack[-1] = "Suspicion"
0x2ff: Call2 0x2d6

0x300: Pop(1)
0x301: Push((int) 512232)
0x302: @@ SetMessage(Stack[-1])
0x303: Pop(1)
0x304: @@ ClearReplies()
0x305: Pop(0)
0x306: PushEmpty(bool, object)
0x307: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x308: Call2 0x10a1

0x309: Pop(1)
0x30a: IF (Stack[-1] == 0) GOTO 0x310; Pop(1)

0x30b: Push((int) 512233)
0x30c: Push((int) 13389)
0x30d: Push((int) 13388)
0x30e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x30f: Pop(3)
0x310: Push((int) 533144)
0x311: Push((int) -1)
0x312: Push((int) 34662)
0x313: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x314: Pop(3)
0x315: Return(); Pop(0)

0x316: Push((int) 13389)
0x317: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x318: IF (Stack[-1] == 0) GOTO 0x332; Pop(1)

0x319: PushEmpty(string)
0x31a: Stack[-1] = "Questioning"
0x31b: Call2 0x2d6

0x31c: Pop(1)
0x31d: Push((int) 512234)
0x31e: @@ SetMessage(Stack[-1])
0x31f: Pop(1)
0x320: @@ ClearReplies()
0x321: Pop(0)
0x322: Push((int) 512235)
0x323: Push((int) 13393)
0x324: Push((int) 13390)
0x325: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x326: Pop(3)
0x327: Push((int) 512236)
0x328: Push((int) 13393)
0x329: Push((int) 13391)
0x32a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x32b: Pop(3)
0x32c: Push((int) 512237)
0x32d: Push((int) 13393)
0x32e: Push((int) 13392)
0x32f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x330: Pop(3)
0x331: Return(); Pop(0)

0x332: Push((int) 13393)
0x333: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x334: IF (Stack[-1] == 0) GOTO 0x349; Pop(1)

0x335: PushEmpty(string)
0x336: Stack[-1] = "Questioning"
0x337: Call2 0x2d6

0x338: Pop(1)
0x339: Push((int) 512238)
0x33a: @@ SetMessage(Stack[-1])
0x33b: Pop(1)
0x33c: @@ ClearReplies()
0x33d: Pop(0)
0x33e: Push((int) 535824)
0x33f: Push((int) 37518)
0x340: Push((int) 37517)
0x341: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x342: Pop(3)
0x343: Push((int) 535826)
0x344: Push((int) 37518)
0x345: Push((int) 37519)
0x346: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x347: Pop(3)
0x348: Return(); Pop(0)

0x349: Push((int) 37518)
0x34a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x34b: IF (Stack[-1] == 0) GOTO 0x35b; Pop(1)

0x34c: PushEmpty(string)
0x34d: Stack[-1] = "Questioning"
0x34e: Call2 0x2d6

0x34f: Pop(1)
0x350: Push((int) 535825)
0x351: @@ SetMessage(Stack[-1])
0x352: Pop(1)
0x353: @@ ClearReplies()
0x354: Pop(0)
0x355: Push((int) 512240)
0x356: Push((int) 13397)
0x357: Push((int) 13396)
0x358: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x359: Pop(3)
0x35a: Return(); Pop(0)

0x35b: Push((int) 13397)
0x35c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x35d: IF (Stack[-1] == 0) GOTO 0x372; Pop(1)

0x35e: PushEmpty(string)
0x35f: Stack[-1] = "Doubt"
0x360: Call2 0x2d6

0x361: Pop(1)
0x362: Push((int) 512241)
0x363: @@ SetMessage(Stack[-1])
0x364: Pop(1)
0x365: @@ ClearReplies()
0x366: Pop(0)
0x367: Push((int) 512242)
0x368: Push((int) -1)
0x369: Push((int) 13398)
0x36a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x36b: Pop(3)
0x36c: Push((int) 535827)
0x36d: Push((int) -1)
0x36e: Push((int) 37521)
0x36f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x370: Pop(3)
0x371: Return(); Pop(0)

0x372: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x373: PushEmpty(bool)
0x374: Call2 0x1017

0x375: Pop(0)
0x376: IF (Stack[-1] == 0) GOTO 0x37a; Pop(1)

0x377: @ lshStopAnimation()
0x378: Pop(0)
0x379: GOTO 0x37c

0x37a: @ StopAnimation()
0x37b: Pop(0)
0x37c: Return(); Pop(0)

0x37d: GOTO 0x2ed

0x37e: Return(); Pop(0)

0x37f: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x380: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x381: PushEmpty(bool, object, float)
0x382: Stack[-2] = Stack[-12]
0x383: Stack[-1] = (float) 70.0
0x384: Call2 0xea5

0x385: Pop(2)
0x386: Pop(1); Push((bool) Stack[-1] == 0)
0x387: IF (Stack[-1] == 0) GOTO 0x38a; Pop(1)

0x388: Stack[-10] = (int) -2
0x389: Return(); Pop(8)

0x38a: @ CreateDialog(Stack[-4])
0x38b: Pop(0)
0x38c: PushEmpty(int)
0x38d: Call2 0x1011

0x38e: Pop(0)
0x38f: @@ SetNPCName(Stack[-1])
0x390: Pop(1)
0x391: PushEmpty(int)
0x392: Call2 0x100f

0x393: Pop(0)
0x394: @@ SetNPCDescription(Stack[-1])
0x395: Pop(1)
0x396: PushEmpty(string)
0x397: Call2 0x1013

0x398: Pop(0)
0x399: @@ SetPhoto(Stack[-1])
0x39a: Pop(1)
0x39b: PushEmpty(string)
0x39c: Call2 0x1015

0x39d: Pop(0)
0x39e: @@ SetPhoto2(Stack[-1])
0x39f: Pop(1)
0x3a0: PushEmpty(int)
0x3a1: Call2 0x11dd

0x3a2: Pop(0)
0x3a3: @@ SetPlayerName(Stack[-1])
0x3a4: Pop(1)
0x3a5: Stack[-2] = (int) -1
0x3a6: @ IsOverrideActive(Stack[-3])
0x3a7: Pop(0)
0x3a8: Push(Stack[-3])
0x3a9: IF (Stack[-1] == 0) GOTO 0x3ac; Pop(1)

0x3aa: Stack[-10] = (int) -2
0x3ab: Return(); Pop(8)

0x3ac: @ DoDialog(Stack[-4])
0x3ad: Pop(0)
0x3ae: PushEmpty(bool, object)
0x3af: PushEmpty(object)
0x3b0: Call2 0xfbb

0x3b1: Stack[-2] = Stack[-1]
0x3b2: Pop(1)
0x3b3: Call2 0xefc

0x3b4: Pop(2)
0x3b5: PushEmpty(object, object)
0x3b6: Stack[-2] = Stack[-11]
0x3b7: Stack[-1] = Stack[-6]
0x3b8: Push(-2, 4); TaskCall(5)
0x3b9: Call2 0x3d0

0x3ba: Pop(-2, 4); TaskReturn
0x3bb: Pop(2)
0x3bc: @@ IsDialogEnd(Stack[-1])
0x3bd: Pop(0)
0x3be: Pop(0); Push((bool) Stack[-1] == 0)
0x3bf: IF (Stack[-1] == 0) GOTO 0x3c5; Pop(1)

0x3c0: @ sync()
0x3c1: Pop(0)
0x3c2: @@ IsDialogEnd(Stack[-1])
0x3c3: Pop(0)
0x3c4: GOTO 0x3be

0x3c5: PushEmpty(object)
0x3c6: Stack[-1] = Stack[-10]
0x3c7: Call2 0xeea

0x3c8: Pop(1)
0x3c9: @ StopDialog(Stack[-4])
0x3ca: Pop(0)
0x3cb: @@ GetReturnValue(Stack[-2])
0x3cc: Pop(0)
0x3cd: Stack[-10] = Stack[-2]
0x3ce: Return(); Pop(8)

0x3cf: Stack[-4] = 0
0x3d0: PushEmpty()
0x3d1: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x3d2: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x3d3: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x3d4: Push((int) 1)
0x3d5: IF (Stack[-1] == 0) GOTO 0x40a; Pop(1)

0x3d6: PushEmpty(bool, object)
0x3d7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3d8: Call2 0x10ed

0x3d9: Pop(1)
0x3da: IF (Stack[-1] == 0) GOTO 0x3f4; Pop(1)

0x3db: PushEmpty(object, object)
0x3dc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3dd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3de: Call2 0x107a

0x3df: Pop(2)
0x3e0: PushEmpty(string)
0x3e1: Stack[-1] = "Grin"
0x3e2: Call2 0x428

0x3e3: Pop(1)
0x3e4: Push((int) 512330)
0x3e5: @@ SetMessage(Stack[-1])
0x3e6: Pop(1)
0x3e7: @@ ClearReplies()
0x3e8: Pop(0)
0x3e9: Push((int) 512331)
0x3ea: Push((int) 13491)
0x3eb: Push((int) 13490)
0x3ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ed: Pop(3)
0x3ee: Push((int) 512336)
0x3ef: Push((int) -1)
0x3f0: Push((int) 13495)
0x3f1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f2: Pop(3)
0x3f3: GOTO 0x40a

0x3f4: PushEmpty(string)
0x3f5: Stack[-1] = "Neutral"
0x3f6: Call2 0x428

0x3f7: Pop(1)
0x3f8: Push((int) 513781)
0x3f9: @@ SetMessage(Stack[-1])
0x3fa: Pop(1)
0x3fb: @@ ClearReplies()
0x3fc: Pop(0)
0x3fd: Push((int) 513782)
0x3fe: Push((int) -1)
0x3ff: Push((int) 15018)
0x400: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x401: Pop(3)
0x402: Push((int) 541839)
0x403: Push((int) -1)
0x404: Push((int) 44056)
0x405: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x406: Pop(3)
0x407: GOTO 0x40a

0x408: Return(); Pop(0)

0x409: GOTO 0x3d4

0x40a: PushEmpty(bool)
0x40b: Call2 0x1017

0x40c: Pop(0)
0x40d: IF (Stack[-1] == 0) GOTO 0x419; Pop(1)

0x40e: @ lshWaitForAnimEnd()
0x40f: Pop(0)
0x410: Push( Stack[3 + Tasks[-1].StackPointer] )
0x411: IF (Stack[-1] == 0) GOTO 0x413; Pop(1)

0x412: GOTO 0x418

0x413: PushEmpty(string)
0x414: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x415: Call2 0xf86

0x416: Pop(1)
0x417: GOTO 0x40e

0x418: GOTO 0x427

0x419: Push("all")
0x41a: Push("idle")
0x41b: @ PlayAnimation(Stack[-2], Stack[-1])
0x41c: Pop(2)
0x41d: @ WaitForAnimEnd()
0x41e: Pop(0)
0x41f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x420: IF (Stack[-1] == 0) GOTO 0x422; Pop(1)

0x421: GOTO 0x427

0x422: Push("all")
0x423: Push("idle")
0x424: @ PlayAnimation(Stack[-2], Stack[-1])
0x425: Pop(2)
0x426: GOTO 0x41d

0x427: Return(); Pop(0)

0x428: PushEmpty()
0x429: PushEmpty(bool)
0x42a: Call2 0x1017

0x42b: Pop(0)
0x42c: Pop(1); Push((bool) Stack[-1] == 0)
0x42d: IF (Stack[-1] == 0) GOTO 0x42f; Pop(1)

0x42e: Return(); Pop(0)

0x42f: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x430: IF (Stack[-1] == 0) GOTO 0x432; Pop(1)

0x431: Return(); Pop(0)

0x432: PushEmpty(string, bool)
0x433: Stack[-2] = Stack[-3]
0x434: Push("")
0x435: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x436: IF (Stack[-1] == 0) GOTO 0x439; Pop(1)

0x437: Stack[-1] = (bool) 0
0x438: GOTO 0x43a

0x439: Stack[-1] = (bool) 1
0x43a: Call2 0xf96

0x43b: Pop(2)
0x43c: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x43d: Return(); Pop(0)

0x43e: PushEmpty()
0x43f: Push((int) 1)
0x440: IF (Stack[-1] == 0) GOTO 0x50d; Pop(1)

0x441: PushEmpty()
0x442: Call2 0xfb4

0x443: Pop(0)
0x444: Push((int) 13489)
0x445: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x446: IF (Stack[-1] == 0) GOTO 0x479; Pop(1)

0x447: PushEmpty(bool, object)
0x448: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x449: Call2 0x10ed

0x44a: Pop(1)
0x44b: IF (Stack[-1] == 0) GOTO 0x465; Pop(1)

0x44c: PushEmpty(object, object)
0x44d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x44e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x44f: Call2 0x107a

0x450: Pop(2)
0x451: PushEmpty(string)
0x452: Stack[-1] = "Grin"
0x453: Call2 0x428

0x454: Pop(1)
0x455: Push((int) 512330)
0x456: @@ SetMessage(Stack[-1])
0x457: Pop(1)
0x458: @@ ClearReplies()
0x459: Pop(0)
0x45a: Push((int) 512331)
0x45b: Push((int) 13491)
0x45c: Push((int) 13490)
0x45d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x45e: Pop(3)
0x45f: Push((int) 512336)
0x460: Push((int) -1)
0x461: Push((int) 13495)
0x462: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x463: Pop(3)
0x464: Return(); Pop(0)

0x465: PushEmpty(string)
0x466: Stack[-1] = "Neutral"
0x467: Call2 0x428

0x468: Pop(1)
0x469: Push((int) 513781)
0x46a: @@ SetMessage(Stack[-1])
0x46b: Pop(1)
0x46c: @@ ClearReplies()
0x46d: Pop(0)
0x46e: Push((int) 513782)
0x46f: Push((int) -1)
0x470: Push((int) 15018)
0x471: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x472: Pop(3)
0x473: Push((int) 541839)
0x474: Push((int) -1)
0x475: Push((int) 44056)
0x476: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x477: Pop(3)
0x478: Return(); Pop(0)

0x479: Push((int) 13491)
0x47a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x47b: IF (Stack[-1] == 0) GOTO 0x490; Pop(1)

0x47c: PushEmpty(string)
0x47d: Stack[-1] = "Grin"
0x47e: Call2 0x428

0x47f: Pop(1)
0x480: Push((int) 512332)
0x481: @@ SetMessage(Stack[-1])
0x482: Pop(1)
0x483: @@ ClearReplies()
0x484: Pop(0)
0x485: Push((int) 512333)
0x486: Push((int) 13493)
0x487: Push((int) 13492)
0x488: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x489: Pop(3)
0x48a: Push((int) 512337)
0x48b: Push((int) 13497)
0x48c: Push((int) 13496)
0x48d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x48e: Pop(3)
0x48f: Return(); Pop(0)

0x490: Push((int) 13497)
0x491: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x492: IF (Stack[-1] == 0) GOTO 0x4a2; Pop(1)

0x493: PushEmpty(string)
0x494: Stack[-1] = "Grin"
0x495: Call2 0x428

0x496: Pop(1)
0x497: Push((int) 512338)
0x498: @@ SetMessage(Stack[-1])
0x499: Pop(1)
0x49a: @@ ClearReplies()
0x49b: Pop(0)
0x49c: Push((int) 512339)
0x49d: Push((int) 13499)
0x49e: Push((int) 13498)
0x49f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4a0: Pop(3)
0x4a1: Return(); Pop(0)

0x4a2: Push((int) 13499)
0x4a3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4a4: IF (Stack[-1] == 0) GOTO 0x4b9; Pop(1)

0x4a5: PushEmpty(string)
0x4a6: Stack[-1] = "Neutral"
0x4a7: Call2 0x428

0x4a8: Pop(1)
0x4a9: Push((int) 512340)
0x4aa: @@ SetMessage(Stack[-1])
0x4ab: Pop(1)
0x4ac: @@ ClearReplies()
0x4ad: Pop(0)
0x4ae: Push((int) 512341)
0x4af: Push((int) -1)
0x4b0: Push((int) 13500)
0x4b1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b2: Pop(3)
0x4b3: Push((int) 512342)
0x4b4: Push((int) 13502)
0x4b5: Push((int) 13501)
0x4b6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b7: Pop(3)
0x4b8: Return(); Pop(0)

0x4b9: Push((int) 13502)
0x4ba: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4bb: IF (Stack[-1] == 0) GOTO 0x4cb; Pop(1)

0x4bc: PushEmpty(string)
0x4bd: Stack[-1] = "Neutral"
0x4be: Call2 0x428

0x4bf: Pop(1)
0x4c0: Push((int) 512343)
0x4c1: @@ SetMessage(Stack[-1])
0x4c2: Pop(1)
0x4c3: @@ ClearReplies()
0x4c4: Pop(0)
0x4c5: Push((int) 512344)
0x4c6: Push((int) -1)
0x4c7: Push((int) 13503)
0x4c8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4c9: Pop(3)
0x4ca: Return(); Pop(0)

0x4cb: Push((int) 13493)
0x4cc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4cd: IF (Stack[-1] == 0) GOTO 0x4dd; Pop(1)

0x4ce: PushEmpty(string)
0x4cf: Stack[-1] = "Grin"
0x4d0: Call2 0x428

0x4d1: Pop(1)
0x4d2: Push((int) 512334)
0x4d3: @@ SetMessage(Stack[-1])
0x4d4: Pop(1)
0x4d5: @@ ClearReplies()
0x4d6: Pop(0)
0x4d7: Push((int) 512335)
0x4d8: Push((int) 13504)
0x4d9: Push((int) 13494)
0x4da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4db: Pop(3)
0x4dc: Return(); Pop(0)

0x4dd: Push((int) 13504)
0x4de: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4df: IF (Stack[-1] == 0) GOTO 0x4ef; Pop(1)

0x4e0: PushEmpty(string)
0x4e1: Stack[-1] = "Grin"
0x4e2: Call2 0x428

0x4e3: Pop(1)
0x4e4: Push((int) 512345)
0x4e5: @@ SetMessage(Stack[-1])
0x4e6: Pop(1)
0x4e7: @@ ClearReplies()
0x4e8: Pop(0)
0x4e9: Push((int) 512346)
0x4ea: Push((int) 13506)
0x4eb: Push((int) 13505)
0x4ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ed: Pop(3)
0x4ee: Return(); Pop(0)

0x4ef: Push((int) 13506)
0x4f0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4f1: IF (Stack[-1] == 0) GOTO 0x501; Pop(1)

0x4f2: PushEmpty(string)
0x4f3: Stack[-1] = "Grin"
0x4f4: Call2 0x428

0x4f5: Pop(1)
0x4f6: Push((int) 512347)
0x4f7: @@ SetMessage(Stack[-1])
0x4f8: Pop(1)
0x4f9: @@ ClearReplies()
0x4fa: Pop(0)
0x4fb: Push((int) 512348)
0x4fc: Push((int) -1)
0x4fd: Push((int) 13507)
0x4fe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ff: Pop(3)
0x500: Return(); Pop(0)

0x501: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x502: PushEmpty(bool)
0x503: Call2 0x1017

0x504: Pop(0)
0x505: IF (Stack[-1] == 0) GOTO 0x509; Pop(1)

0x506: @ lshStopAnimation()
0x507: Pop(0)
0x508: GOTO 0x50b

0x509: @ StopAnimation()
0x50a: Pop(0)
0x50b: Return(); Pop(0)

0x50c: GOTO 0x43f

0x50d: Return(); Pop(0)

0x50e: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x50f: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x510: PushEmpty(bool, object, float)
0x511: Stack[-2] = Stack[-12]
0x512: Stack[-1] = (float) 70.0
0x513: Call2 0xea5

0x514: Pop(2)
0x515: Pop(1); Push((bool) Stack[-1] == 0)
0x516: IF (Stack[-1] == 0) GOTO 0x519; Pop(1)

0x517: Stack[-10] = (int) -2
0x518: Return(); Pop(8)

0x519: @ CreateDialog(Stack[-4])
0x51a: Pop(0)
0x51b: PushEmpty(int)
0x51c: Call2 0x1011

0x51d: Pop(0)
0x51e: @@ SetNPCName(Stack[-1])
0x51f: Pop(1)
0x520: PushEmpty(int)
0x521: Call2 0x100f

0x522: Pop(0)
0x523: @@ SetNPCDescription(Stack[-1])
0x524: Pop(1)
0x525: PushEmpty(string)
0x526: Call2 0x1013

0x527: Pop(0)
0x528: @@ SetPhoto(Stack[-1])
0x529: Pop(1)
0x52a: PushEmpty(string)
0x52b: Call2 0x1015

0x52c: Pop(0)
0x52d: @@ SetPhoto2(Stack[-1])
0x52e: Pop(1)
0x52f: PushEmpty(int)
0x530: Call2 0x11dd

0x531: Pop(0)
0x532: @@ SetPlayerName(Stack[-1])
0x533: Pop(1)
0x534: Stack[-2] = (int) -1
0x535: @ IsOverrideActive(Stack[-3])
0x536: Pop(0)
0x537: Push(Stack[-3])
0x538: IF (Stack[-1] == 0) GOTO 0x53b; Pop(1)

0x539: Stack[-10] = (int) -2
0x53a: Return(); Pop(8)

0x53b: @ DoDialog(Stack[-4])
0x53c: Pop(0)
0x53d: PushEmpty(bool, object)
0x53e: PushEmpty(object)
0x53f: Call2 0xfbb

0x540: Stack[-2] = Stack[-1]
0x541: Pop(1)
0x542: Call2 0xefc

0x543: Pop(2)
0x544: PushEmpty(object, object)
0x545: Stack[-2] = Stack[-11]
0x546: Stack[-1] = Stack[-6]
0x547: Push(-2, 4); TaskCall(7)
0x548: Call2 0x55f

0x549: Pop(-2, 4); TaskReturn
0x54a: Pop(2)
0x54b: @@ IsDialogEnd(Stack[-1])
0x54c: Pop(0)
0x54d: Pop(0); Push((bool) Stack[-1] == 0)
0x54e: IF (Stack[-1] == 0) GOTO 0x554; Pop(1)

0x54f: @ sync()
0x550: Pop(0)
0x551: @@ IsDialogEnd(Stack[-1])
0x552: Pop(0)
0x553: GOTO 0x54d

0x554: PushEmpty(object)
0x555: Stack[-1] = Stack[-10]
0x556: Call2 0xeea

0x557: Pop(1)
0x558: @ StopDialog(Stack[-4])
0x559: Pop(0)
0x55a: @@ GetReturnValue(Stack[-2])
0x55b: Pop(0)
0x55c: Stack[-10] = Stack[-2]
0x55d: Return(); Pop(8)

0x55e: Stack[-4] = 0
0x55f: PushEmpty()
0x560: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x561: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x562: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x563: Push((int) 1)
0x564: IF (Stack[-1] == 0) GOTO 0x5d1; Pop(1)

0x565: PushEmpty(bool)
0x566: Stack[-1] = (bool) 0
0x567: PushEmpty(bool, object)
0x568: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x569: Call2 0x10f9

0x56a: Pop(1)
0x56b: IF (Stack[-1] == 0) GOTO 0x572; Pop(1)

0x56c: PushEmpty(bool, object)
0x56d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x56e: Call2 0x1105

0x56f: Pop(1)
0x570: IF (Stack[-1] == 0) GOTO 0x572; Pop(1)

0x571: Stack[-1] = (bool) 1
0x572: IF (Stack[-1] == 0) GOTO 0x587; Pop(1)

0x573: PushEmpty(object, object)
0x574: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x575: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x576: Call2 0x1080

0x577: Pop(2)
0x578: PushEmpty(string)
0x579: Stack[-1] = "Neutral"
0x57a: Call2 0x5ef

0x57b: Pop(1)
0x57c: Push((int) 514041)
0x57d: @@ SetMessage(Stack[-1])
0x57e: Pop(1)
0x57f: @@ ClearReplies()
0x580: Pop(0)
0x581: Push((int) 514042)
0x582: Push((int) 15278)
0x583: Push((int) 15277)
0x584: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x585: Pop(3)
0x586: GOTO 0x5d1

0x587: PushEmpty(string)
0x588: Stack[-1] = "Suspicion"
0x589: Call2 0x5ef

0x58a: Pop(1)
0x58b: Push((int) 514063)
0x58c: @@ SetMessage(Stack[-1])
0x58d: Pop(1)
0x58e: @@ ClearReplies()
0x58f: Pop(0)
0x590: PushEmpty(bool)
0x591: Stack[-1] = (bool) 0
0x592: PushEmpty(bool, object)
0x593: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x594: Call2 0x111d

0x595: Pop(1)
0x596: IF (Stack[-1] == 0) GOTO 0x59d; Pop(1)

0x597: PushEmpty(bool, object)
0x598: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x599: Call2 0x1111

0x59a: Pop(1)
0x59b: IF (Stack[-1] == 0) GOTO 0x59d; Pop(1)

0x59c: Stack[-1] = (bool) 1
0x59d: IF (Stack[-1] == 0) GOTO 0x5a3; Pop(1)

0x59e: Push((int) 514068)
0x59f: Push((int) 40760)
0x5a0: Push((int) 15305)
0x5a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a2: Pop(3)
0x5a3: PushEmpty(bool)
0x5a4: Stack[-1] = (bool) 0
0x5a5: PushEmpty(bool, object)
0x5a6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5a7: Call2 0x1127

0x5a8: Pop(1)
0x5a9: IF (Stack[-1] == 0) GOTO 0x5b0; Pop(1)

0x5aa: PushEmpty(bool, object)
0x5ab: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5ac: Call2 0x1111

0x5ad: Pop(1)
0x5ae: IF (Stack[-1] == 0) GOTO 0x5b0; Pop(1)

0x5af: Stack[-1] = (bool) 1
0x5b0: IF (Stack[-1] == 0) GOTO 0x5b6; Pop(1)

0x5b1: Push((int) 514069)
0x5b2: Push((int) 15307)
0x5b3: Push((int) 15306)
0x5b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5b5: Pop(3)
0x5b6: PushEmpty(bool)
0x5b7: Stack[-1] = (bool) 0
0x5b8: PushEmpty(bool, object)
0x5b9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5ba: Call2 0x10c4

0x5bb: Pop(1)
0x5bc: IF (Stack[-1] == 0) GOTO 0x5c3; Pop(1)

0x5bd: PushEmpty(bool, object)
0x5be: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5bf: Call2 0x10d0

0x5c0: Pop(1)
0x5c1: IF (Stack[-1] == 0) GOTO 0x5c3; Pop(1)

0x5c2: Stack[-1] = (bool) 1
0x5c3: IF (Stack[-1] == 0) GOTO 0x5c9; Pop(1)

0x5c4: Push((int) 538835)
0x5c5: Push((int) 40765)
0x5c6: Push((int) 40764)
0x5c7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c8: Pop(3)
0x5c9: Push((int) 514064)
0x5ca: Push((int) -1)
0x5cb: Push((int) 15300)
0x5cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5cd: Pop(3)
0x5ce: GOTO 0x5d1

0x5cf: Return(); Pop(0)

0x5d0: GOTO 0x563

0x5d1: PushEmpty(bool)
0x5d2: Call2 0x1017

0x5d3: Pop(0)
0x5d4: IF (Stack[-1] == 0) GOTO 0x5e0; Pop(1)

0x5d5: @ lshWaitForAnimEnd()
0x5d6: Pop(0)
0x5d7: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5d8: IF (Stack[-1] == 0) GOTO 0x5da; Pop(1)

0x5d9: GOTO 0x5df

0x5da: PushEmpty(string)
0x5db: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x5dc: Call2 0xf86

0x5dd: Pop(1)
0x5de: GOTO 0x5d5

0x5df: GOTO 0x5ee

0x5e0: Push("all")
0x5e1: Push("idle")
0x5e2: @ PlayAnimation(Stack[-2], Stack[-1])
0x5e3: Pop(2)
0x5e4: @ WaitForAnimEnd()
0x5e5: Pop(0)
0x5e6: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5e7: IF (Stack[-1] == 0) GOTO 0x5e9; Pop(1)

0x5e8: GOTO 0x5ee

0x5e9: Push("all")
0x5ea: Push("idle")
0x5eb: @ PlayAnimation(Stack[-2], Stack[-1])
0x5ec: Pop(2)
0x5ed: GOTO 0x5e4

0x5ee: Return(); Pop(0)

0x5ef: PushEmpty()
0x5f0: PushEmpty(bool)
0x5f1: Call2 0x1017

0x5f2: Pop(0)
0x5f3: Pop(1); Push((bool) Stack[-1] == 0)
0x5f4: IF (Stack[-1] == 0) GOTO 0x5f6; Pop(1)

0x5f5: Return(); Pop(0)

0x5f6: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x5f7: IF (Stack[-1] == 0) GOTO 0x5f9; Pop(1)

0x5f8: Return(); Pop(0)

0x5f9: PushEmpty(string, bool)
0x5fa: Stack[-2] = Stack[-3]
0x5fb: Push("")
0x5fc: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x5fd: IF (Stack[-1] == 0) GOTO 0x600; Pop(1)

0x5fe: Stack[-1] = (bool) 0
0x5ff: GOTO 0x601

0x600: Stack[-1] = (bool) 1
0x601: Call2 0xf96

0x602: Pop(2)
0x603: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x604: Return(); Pop(0)

0x605: PushEmpty()
0x606: Push((int) 1)
0x607: IF (Stack[-1] == 0) GOTO 0x879; Pop(1)

0x608: PushEmpty()
0x609: Call2 0xfb4

0x60a: Pop(0)
0x60b: Push((int) 15289)
0x60c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x60d: IF (Stack[-1] == 0) GOTO 0x613; Pop(1)

0x60e: PushEmpty(object, object)
0x60f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x610: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x611: Call2 0x1086

0x612: Pop(2)
0x613: Push((int) 15310)
0x614: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x615: IF (Stack[-1] == 0) GOTO 0x62a; Pop(1)

0x616: PushEmpty(object, object)
0x617: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x618: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x619: Call2 0x105b

0x61a: Pop(2)
0x61b: PushEmpty(object, object)
0x61c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x61d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x61e: Call2 0x108f

0x61f: Pop(2)
0x620: PushEmpty(object, object)
0x621: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x622: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x623: Call2 0x102d

0x624: Pop(2)
0x625: PushEmpty(object, object)
0x626: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x627: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x628: Call2 0x1097

0x629: Pop(2)
0x62a: Push((int) 40764)
0x62b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x62c: IF (Stack[-1] == 0) GOTO 0x632; Pop(1)

0x62d: PushEmpty(object, object)
0x62e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x62f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x630: Call2 0x1055

0x631: Pop(2)
0x632: Push((int) 40789)
0x633: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x634: IF (Stack[-1] == 0) GOTO 0x63f; Pop(1)

0x635: PushEmpty(object, object)
0x636: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x637: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x638: Call2 0x1034

0x639: Pop(2)
0x63a: PushEmpty(object, object)
0x63b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x63c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x63d: Call2 0x1045

0x63e: Pop(2)
0x63f: Push((int) 40790)
0x640: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x641: IF (Stack[-1] == 0) GOTO 0x64c; Pop(1)

0x642: PushEmpty(object, object)
0x643: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x644: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x645: Call2 0x1034

0x646: Pop(2)
0x647: PushEmpty(object, object)
0x648: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x649: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x64a: Call2 0x1045

0x64b: Pop(2)
0x64c: Push((int) 40787)
0x64d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x64e: IF (Stack[-1] == 0) GOTO 0x659; Pop(1)

0x64f: PushEmpty(object, object)
0x650: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x651: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x652: Call2 0x1034

0x653: Pop(2)
0x654: PushEmpty(object, object)
0x655: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x656: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x657: Call2 0x1045

0x658: Pop(2)
0x659: Push((int) 15276)
0x65a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x65b: IF (Stack[-1] == 0) GOTO 0x6c6; Pop(1)

0x65c: PushEmpty(bool)
0x65d: Stack[-1] = (bool) 0
0x65e: PushEmpty(bool, object)
0x65f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x660: Call2 0x10f9

0x661: Pop(1)
0x662: IF (Stack[-1] == 0) GOTO 0x669; Pop(1)

0x663: PushEmpty(bool, object)
0x664: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x665: Call2 0x1105

0x666: Pop(1)
0x667: IF (Stack[-1] == 0) GOTO 0x669; Pop(1)

0x668: Stack[-1] = (bool) 1
0x669: IF (Stack[-1] == 0) GOTO 0x67e; Pop(1)

0x66a: PushEmpty(object, object)
0x66b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x66c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x66d: Call2 0x1080

0x66e: Pop(2)
0x66f: PushEmpty(string)
0x670: Stack[-1] = "Neutral"
0x671: Call2 0x5ef

0x672: Pop(1)
0x673: Push((int) 514041)
0x674: @@ SetMessage(Stack[-1])
0x675: Pop(1)
0x676: @@ ClearReplies()
0x677: Pop(0)
0x678: Push((int) 514042)
0x679: Push((int) 15278)
0x67a: Push((int) 15277)
0x67b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67c: Pop(3)
0x67d: Return(); Pop(0)

0x67e: PushEmpty(string)
0x67f: Stack[-1] = "Suspicion"
0x680: Call2 0x5ef

0x681: Pop(1)
0x682: Push((int) 514063)
0x683: @@ SetMessage(Stack[-1])
0x684: Pop(1)
0x685: @@ ClearReplies()
0x686: Pop(0)
0x687: PushEmpty(bool)
0x688: Stack[-1] = (bool) 0
0x689: PushEmpty(bool, object)
0x68a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x68b: Call2 0x111d

0x68c: Pop(1)
0x68d: IF (Stack[-1] == 0) GOTO 0x694; Pop(1)

0x68e: PushEmpty(bool, object)
0x68f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x690: Call2 0x1111

0x691: Pop(1)
0x692: IF (Stack[-1] == 0) GOTO 0x694; Pop(1)

0x693: Stack[-1] = (bool) 1
0x694: IF (Stack[-1] == 0) GOTO 0x69a; Pop(1)

0x695: Push((int) 514068)
0x696: Push((int) 40760)
0x697: Push((int) 15305)
0x698: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x699: Pop(3)
0x69a: PushEmpty(bool)
0x69b: Stack[-1] = (bool) 0
0x69c: PushEmpty(bool, object)
0x69d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x69e: Call2 0x1127

0x69f: Pop(1)
0x6a0: IF (Stack[-1] == 0) GOTO 0x6a7; Pop(1)

0x6a1: PushEmpty(bool, object)
0x6a2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6a3: Call2 0x1111

0x6a4: Pop(1)
0x6a5: IF (Stack[-1] == 0) GOTO 0x6a7; Pop(1)

0x6a6: Stack[-1] = (bool) 1
0x6a7: IF (Stack[-1] == 0) GOTO 0x6ad; Pop(1)

0x6a8: Push((int) 514069)
0x6a9: Push((int) 15307)
0x6aa: Push((int) 15306)
0x6ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ac: Pop(3)
0x6ad: PushEmpty(bool)
0x6ae: Stack[-1] = (bool) 0
0x6af: PushEmpty(bool, object)
0x6b0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6b1: Call2 0x10c4

0x6b2: Pop(1)
0x6b3: IF (Stack[-1] == 0) GOTO 0x6ba; Pop(1)

0x6b4: PushEmpty(bool, object)
0x6b5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6b6: Call2 0x10d0

0x6b7: Pop(1)
0x6b8: IF (Stack[-1] == 0) GOTO 0x6ba; Pop(1)

0x6b9: Stack[-1] = (bool) 1
0x6ba: IF (Stack[-1] == 0) GOTO 0x6c0; Pop(1)

0x6bb: Push((int) 538835)
0x6bc: Push((int) 40765)
0x6bd: Push((int) 40764)
0x6be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6bf: Pop(3)
0x6c0: Push((int) 514064)
0x6c1: Push((int) -1)
0x6c2: Push((int) 15300)
0x6c3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c4: Pop(3)
0x6c5: Return(); Pop(0)

0x6c6: Push((int) 40765)
0x6c7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6c8: IF (Stack[-1] == 0) GOTO 0x6e2; Pop(1)

0x6c9: PushEmpty(string)
0x6ca: Stack[-1] = "Neutral"
0x6cb: Call2 0x5ef

0x6cc: Pop(1)
0x6cd: Push((int) 538836)
0x6ce: @@ SetMessage(Stack[-1])
0x6cf: Pop(1)
0x6d0: @@ ClearReplies()
0x6d1: Pop(0)
0x6d2: Push((int) 538837)
0x6d3: Push((int) 40775)
0x6d4: Push((int) 40766)
0x6d5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6d6: Pop(3)
0x6d7: Push((int) 538838)
0x6d8: Push((int) 40774)
0x6d9: Push((int) 40767)
0x6da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6db: Pop(3)
0x6dc: Push((int) 538839)
0x6dd: Push((int) 40769)
0x6de: Push((int) 40768)
0x6df: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e0: Pop(3)
0x6e1: Return(); Pop(0)

0x6e2: Push((int) 40769)
0x6e3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6e4: IF (Stack[-1] == 0) GOTO 0x6f4; Pop(1)

0x6e5: PushEmpty(string)
0x6e6: Stack[-1] = "Neutral"
0x6e7: Call2 0x5ef

0x6e8: Pop(1)
0x6e9: Push((int) 538840)
0x6ea: @@ SetMessage(Stack[-1])
0x6eb: Pop(1)
0x6ec: @@ ClearReplies()
0x6ed: Pop(0)
0x6ee: Push((int) 538841)
0x6ef: Push((int) 40773)
0x6f0: Push((int) 40772)
0x6f1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f2: Pop(3)
0x6f3: Return(); Pop(0)

0x6f4: Push((int) 40773)
0x6f5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6f6: IF (Stack[-1] == 0) GOTO 0x706; Pop(1)

0x6f7: PushEmpty(string)
0x6f8: Stack[-1] = "Neutral"
0x6f9: Call2 0x5ef

0x6fa: Pop(1)
0x6fb: Push((int) 538842)
0x6fc: @@ SetMessage(Stack[-1])
0x6fd: Pop(1)
0x6fe: @@ ClearReplies()
0x6ff: Pop(0)
0x700: Push((int) 538847)
0x701: Push((int) 40780)
0x702: Push((int) 40779)
0x703: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x704: Pop(3)
0x705: Return(); Pop(0)

0x706: Push((int) 40774)
0x707: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x708: IF (Stack[-1] == 0) GOTO 0x71d; Pop(1)

0x709: PushEmpty(string)
0x70a: Stack[-1] = "Neutral"
0x70b: Call2 0x5ef

0x70c: Pop(1)
0x70d: Push((int) 538843)
0x70e: @@ SetMessage(Stack[-1])
0x70f: Pop(1)
0x710: @@ ClearReplies()
0x711: Pop(0)
0x712: Push((int) 538846)
0x713: Push((int) 40769)
0x714: Push((int) 40777)
0x715: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x716: Pop(3)
0x717: Push((int) 538849)
0x718: Push((int) 40780)
0x719: Push((int) 40781)
0x71a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x71b: Pop(3)
0x71c: Return(); Pop(0)

0x71d: Push((int) 40775)
0x71e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x71f: IF (Stack[-1] == 0) GOTO 0x72f; Pop(1)

0x720: PushEmpty(string)
0x721: Stack[-1] = "Neutral"
0x722: Call2 0x5ef

0x723: Pop(1)
0x724: Push((int) 538844)
0x725: @@ SetMessage(Stack[-1])
0x726: Pop(1)
0x727: @@ ClearReplies()
0x728: Pop(0)
0x729: Push((int) 538845)
0x72a: Push((int) 40780)
0x72b: Push((int) 40776)
0x72c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x72d: Pop(3)
0x72e: Return(); Pop(0)

0x72f: Push((int) 40780)
0x730: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x731: IF (Stack[-1] == 0) GOTO 0x741; Pop(1)

0x732: PushEmpty(string)
0x733: Stack[-1] = "Questioning"
0x734: Call2 0x5ef

0x735: Pop(1)
0x736: Push((int) 538848)
0x737: @@ SetMessage(Stack[-1])
0x738: Pop(1)
0x739: @@ ClearReplies()
0x73a: Pop(0)
0x73b: Push((int) 538850)
0x73c: Push((int) 40783)
0x73d: Push((int) 40782)
0x73e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73f: Pop(3)
0x740: Return(); Pop(0)

0x741: Push((int) 40783)
0x742: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x743: IF (Stack[-1] == 0) GOTO 0x758; Pop(1)

0x744: PushEmpty(string)
0x745: Stack[-1] = "Neutral"
0x746: Call2 0x5ef

0x747: Pop(1)
0x748: Push((int) 538851)
0x749: @@ SetMessage(Stack[-1])
0x74a: Pop(1)
0x74b: @@ ClearReplies()
0x74c: Pop(0)
0x74d: Push((int) 538852)
0x74e: Push((int) 40788)
0x74f: Push((int) 40786)
0x750: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x751: Pop(3)
0x752: Push((int) 538853)
0x753: Push((int) -1)
0x754: Push((int) 40787)
0x755: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x756: Pop(3)
0x757: Return(); Pop(0)

0x758: Push((int) 40788)
0x759: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x75a: IF (Stack[-1] == 0) GOTO 0x76f; Pop(1)

0x75b: PushEmpty(string)
0x75c: Stack[-1] = "Neutral"
0x75d: Call2 0x5ef

0x75e: Pop(1)
0x75f: Push((int) 538854)
0x760: @@ SetMessage(Stack[-1])
0x761: Pop(1)
0x762: @@ ClearReplies()
0x763: Pop(0)
0x764: Push((int) 538855)
0x765: Push((int) -1)
0x766: Push((int) 40789)
0x767: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x768: Pop(3)
0x769: Push((int) 538856)
0x76a: Push((int) -1)
0x76b: Push((int) 40790)
0x76c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x76d: Pop(3)
0x76e: Return(); Pop(0)

0x76f: Push((int) 15307)
0x770: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x771: IF (Stack[-1] == 0) GOTO 0x781; Pop(1)

0x772: PushEmpty(string)
0x773: Stack[-1] = "Suspicion"
0x774: Call2 0x5ef

0x775: Pop(1)
0x776: Push((int) 514070)
0x777: @@ SetMessage(Stack[-1])
0x778: Pop(1)
0x779: @@ ClearReplies()
0x77a: Pop(0)
0x77b: Push((int) 514071)
0x77c: Push((int) -1)
0x77d: Push((int) 15308)
0x77e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x77f: Pop(3)
0x780: Return(); Pop(0)

0x781: Push((int) 40760)
0x782: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x783: IF (Stack[-1] == 0) GOTO 0x793; Pop(1)

0x784: PushEmpty(string)
0x785: Stack[-1] = "Suspicion"
0x786: Call2 0x5ef

0x787: Pop(1)
0x788: Push((int) 538831)
0x789: @@ SetMessage(Stack[-1])
0x78a: Pop(1)
0x78b: @@ ClearReplies()
0x78c: Pop(0)
0x78d: Push((int) 538832)
0x78e: Push((int) 40762)
0x78f: Push((int) 40761)
0x790: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x791: Pop(3)
0x792: Return(); Pop(0)

0x793: Push((int) 40762)
0x794: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x795: IF (Stack[-1] == 0) GOTO 0x7a5; Pop(1)

0x796: PushEmpty(string)
0x797: Stack[-1] = "Grin"
0x798: Call2 0x5ef

0x799: Pop(1)
0x79a: Push((int) 538833)
0x79b: @@ SetMessage(Stack[-1])
0x79c: Pop(1)
0x79d: @@ ClearReplies()
0x79e: Pop(0)
0x79f: Push((int) 538834)
0x7a0: Push((int) 15309)
0x7a1: Push((int) 40763)
0x7a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7a3: Pop(3)
0x7a4: Return(); Pop(0)

0x7a5: Push((int) 15309)
0x7a6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7a7: IF (Stack[-1] == 0) GOTO 0x7b7; Pop(1)

0x7a8: PushEmpty(string)
0x7a9: Stack[-1] = "Neutral"
0x7aa: Call2 0x5ef

0x7ab: Pop(1)
0x7ac: Push((int) 514072)
0x7ad: @@ SetMessage(Stack[-1])
0x7ae: Pop(1)
0x7af: @@ ClearReplies()
0x7b0: Pop(0)
0x7b1: Push((int) 514073)
0x7b2: Push((int) -1)
0x7b3: Push((int) 15310)
0x7b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b5: Pop(3)
0x7b6: Return(); Pop(0)

0x7b7: Push((int) 15278)
0x7b8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7b9: IF (Stack[-1] == 0) GOTO 0x7ce; Pop(1)

0x7ba: PushEmpty(string)
0x7bb: Stack[-1] = "Neutral"
0x7bc: Call2 0x5ef

0x7bd: Pop(1)
0x7be: Push((int) 514043)
0x7bf: @@ SetMessage(Stack[-1])
0x7c0: Pop(1)
0x7c1: @@ ClearReplies()
0x7c2: Pop(0)
0x7c3: Push((int) 514044)
0x7c4: Push((int) 15280)
0x7c5: Push((int) 15279)
0x7c6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c7: Pop(3)
0x7c8: Push((int) 538829)
0x7c9: Push((int) 15280)
0x7ca: Push((int) 40756)
0x7cb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7cc: Pop(3)
0x7cd: Return(); Pop(0)

0x7ce: Push((int) 15280)
0x7cf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7d0: IF (Stack[-1] == 0) GOTO 0x7e0; Pop(1)

0x7d1: PushEmpty(string)
0x7d2: Stack[-1] = "Neutral"
0x7d3: Call2 0x5ef

0x7d4: Pop(1)
0x7d5: Push((int) 514045)
0x7d6: @@ SetMessage(Stack[-1])
0x7d7: Pop(1)
0x7d8: @@ ClearReplies()
0x7d9: Pop(0)
0x7da: Push((int) 514046)
0x7db: Push((int) 15282)
0x7dc: Push((int) 15281)
0x7dd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7de: Pop(3)
0x7df: Return(); Pop(0)

0x7e0: Push((int) 15282)
0x7e1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7e2: IF (Stack[-1] == 0) GOTO 0x7f7; Pop(1)

0x7e3: PushEmpty(string)
0x7e4: Stack[-1] = "Neutral"
0x7e5: Call2 0x5ef

0x7e6: Pop(1)
0x7e7: Push((int) 514047)
0x7e8: @@ SetMessage(Stack[-1])
0x7e9: Pop(1)
0x7ea: @@ ClearReplies()
0x7eb: Pop(0)
0x7ec: Push((int) 514048)
0x7ed: Push((int) 15284)
0x7ee: Push((int) 15283)
0x7ef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7f0: Pop(3)
0x7f1: Push((int) 514060)
0x7f2: Push((int) 15297)
0x7f3: Push((int) 15296)
0x7f4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7f5: Pop(3)
0x7f6: Return(); Pop(0)

0x7f7: Push((int) 15297)
0x7f8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7f9: IF (Stack[-1] == 0) GOTO 0x80e; Pop(1)

0x7fa: PushEmpty(string)
0x7fb: Stack[-1] = "Neutral"
0x7fc: Call2 0x5ef

0x7fd: Pop(1)
0x7fe: Push((int) 514061)
0x7ff: @@ SetMessage(Stack[-1])
0x800: Pop(1)
0x801: @@ ClearReplies()
0x802: Pop(0)
0x803: Push((int) 514062)
0x804: Push((int) 15286)
0x805: Push((int) 15298)
0x806: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x807: Pop(3)
0x808: Push((int) 538830)
0x809: Push((int) 15286)
0x80a: Push((int) 40758)
0x80b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x80c: Pop(3)
0x80d: Return(); Pop(0)

0x80e: Push((int) 15284)
0x80f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x810: IF (Stack[-1] == 0) GOTO 0x825; Pop(1)

0x811: PushEmpty(string)
0x812: Stack[-1] = "Questioning"
0x813: Call2 0x5ef

0x814: Pop(1)
0x815: Push((int) 514049)
0x816: @@ SetMessage(Stack[-1])
0x817: Pop(1)
0x818: @@ ClearReplies()
0x819: Pop(0)
0x81a: Push((int) 514050)
0x81b: Push((int) 15286)
0x81c: Push((int) 15285)
0x81d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x81e: Pop(3)
0x81f: Push((int) 514055)
0x820: Push((int) 15291)
0x821: Push((int) 15290)
0x822: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x823: Pop(3)
0x824: Return(); Pop(0)

0x825: Push((int) 15291)
0x826: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x827: IF (Stack[-1] == 0) GOTO 0x837; Pop(1)

0x828: PushEmpty(string)
0x829: Stack[-1] = "Questioning"
0x82a: Call2 0x5ef

0x82b: Pop(1)
0x82c: Push((int) 514056)
0x82d: @@ SetMessage(Stack[-1])
0x82e: Pop(1)
0x82f: @@ ClearReplies()
0x830: Pop(0)
0x831: Push((int) 514057)
0x832: Push((int) 15293)
0x833: Push((int) 15292)
0x834: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x835: Pop(3)
0x836: Return(); Pop(0)

0x837: Push((int) 15293)
0x838: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x839: IF (Stack[-1] == 0) GOTO 0x849; Pop(1)

0x83a: PushEmpty(string)
0x83b: Stack[-1] = "Questioning"
0x83c: Call2 0x5ef

0x83d: Pop(1)
0x83e: Push((int) 514058)
0x83f: @@ SetMessage(Stack[-1])
0x840: Pop(1)
0x841: @@ ClearReplies()
0x842: Pop(0)
0x843: Push((int) 514059)
0x844: Push((int) 15286)
0x845: Push((int) 15294)
0x846: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x847: Pop(3)
0x848: Return(); Pop(0)

0x849: Push((int) 15286)
0x84a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x84b: IF (Stack[-1] == 0) GOTO 0x85b; Pop(1)

0x84c: PushEmpty(string)
0x84d: Stack[-1] = "Questioning"
0x84e: Call2 0x5ef

0x84f: Pop(1)
0x850: Push((int) 514051)
0x851: @@ SetMessage(Stack[-1])
0x852: Pop(1)
0x853: @@ ClearReplies()
0x854: Pop(0)
0x855: Push((int) 514052)
0x856: Push((int) 15288)
0x857: Push((int) 15287)
0x858: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x859: Pop(3)
0x85a: Return(); Pop(0)

0x85b: Push((int) 15288)
0x85c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x85d: IF (Stack[-1] == 0) GOTO 0x86d; Pop(1)

0x85e: PushEmpty(string)
0x85f: Stack[-1] = "Grin"
0x860: Call2 0x5ef

0x861: Pop(1)
0x862: Push((int) 514053)
0x863: @@ SetMessage(Stack[-1])
0x864: Pop(1)
0x865: @@ ClearReplies()
0x866: Pop(0)
0x867: Push((int) 514054)
0x868: Push((int) -1)
0x869: Push((int) 15289)
0x86a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x86b: Pop(3)
0x86c: Return(); Pop(0)

0x86d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x86e: PushEmpty(bool)
0x86f: Call2 0x1017

0x870: Pop(0)
0x871: IF (Stack[-1] == 0) GOTO 0x875; Pop(1)

0x872: @ lshStopAnimation()
0x873: Pop(0)
0x874: GOTO 0x877

0x875: @ StopAnimation()
0x876: Pop(0)
0x877: Return(); Pop(0)

0x878: GOTO 0x606

0x879: Return(); Pop(0)

0x87a: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x87b: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x87c: PushEmpty(bool, object, float)
0x87d: Stack[-2] = Stack[-12]
0x87e: Stack[-1] = (float) 70.0
0x87f: Call2 0xea5

0x880: Pop(2)
0x881: Pop(1); Push((bool) Stack[-1] == 0)
0x882: IF (Stack[-1] == 0) GOTO 0x885; Pop(1)

0x883: Stack[-10] = (int) -2
0x884: Return(); Pop(8)

0x885: @ CreateDialog(Stack[-4])
0x886: Pop(0)
0x887: PushEmpty(int)
0x888: Call2 0x1011

0x889: Pop(0)
0x88a: @@ SetNPCName(Stack[-1])
0x88b: Pop(1)
0x88c: PushEmpty(int)
0x88d: Call2 0x100f

0x88e: Pop(0)
0x88f: @@ SetNPCDescription(Stack[-1])
0x890: Pop(1)
0x891: PushEmpty(string)
0x892: Call2 0x1013

0x893: Pop(0)
0x894: @@ SetPhoto(Stack[-1])
0x895: Pop(1)
0x896: PushEmpty(string)
0x897: Call2 0x1015

0x898: Pop(0)
0x899: @@ SetPhoto2(Stack[-1])
0x89a: Pop(1)
0x89b: PushEmpty(int)
0x89c: Call2 0x11dd

0x89d: Pop(0)
0x89e: @@ SetPlayerName(Stack[-1])
0x89f: Pop(1)
0x8a0: Stack[-2] = (int) -1
0x8a1: @ IsOverrideActive(Stack[-3])
0x8a2: Pop(0)
0x8a3: Push(Stack[-3])
0x8a4: IF (Stack[-1] == 0) GOTO 0x8a7; Pop(1)

0x8a5: Stack[-10] = (int) -2
0x8a6: Return(); Pop(8)

0x8a7: @ DoDialog(Stack[-4])
0x8a8: Pop(0)
0x8a9: PushEmpty(bool, object)
0x8aa: PushEmpty(object)
0x8ab: Call2 0xfbb

0x8ac: Stack[-2] = Stack[-1]
0x8ad: Pop(1)
0x8ae: Call2 0xefc

0x8af: Pop(2)
0x8b0: PushEmpty(object, object)
0x8b1: Stack[-2] = Stack[-11]
0x8b2: Stack[-1] = Stack[-6]
0x8b3: Push(-2, 4); TaskCall(9)
0x8b4: Call2 0x8cb

0x8b5: Pop(-2, 4); TaskReturn
0x8b6: Pop(2)
0x8b7: @@ IsDialogEnd(Stack[-1])
0x8b8: Pop(0)
0x8b9: Pop(0); Push((bool) Stack[-1] == 0)
0x8ba: IF (Stack[-1] == 0) GOTO 0x8c0; Pop(1)

0x8bb: @ sync()
0x8bc: Pop(0)
0x8bd: @@ IsDialogEnd(Stack[-1])
0x8be: Pop(0)
0x8bf: GOTO 0x8b9

0x8c0: PushEmpty(object)
0x8c1: Stack[-1] = Stack[-10]
0x8c2: Call2 0xeea

0x8c3: Pop(1)
0x8c4: @ StopDialog(Stack[-4])
0x8c5: Pop(0)
0x8c6: @@ GetReturnValue(Stack[-2])
0x8c7: Pop(0)
0x8c8: Stack[-10] = Stack[-2]
0x8c9: Return(); Pop(8)

0x8ca: Stack[-4] = 0
0x8cb: PushEmpty()
0x8cc: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x8cd: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x8ce: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x8cf: Push((int) 1)
0x8d0: IF (Stack[-1] == 0) GOTO 0x8e7; Pop(1)

0x8d1: PushEmpty(string)
0x8d2: Stack[-1] = "Neutral"
0x8d3: Call2 0x905

0x8d4: Pop(1)
0x8d5: Push((int) 518006)
0x8d6: @@ SetMessage(Stack[-1])
0x8d7: Pop(1)
0x8d8: @@ ClearReplies()
0x8d9: Pop(0)
0x8da: Push((int) 518007)
0x8db: Push((int) 36191)
0x8dc: Push((int) 19140)
0x8dd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8de: Pop(3)
0x8df: Push((int) 534556)
0x8e0: Push((int) 36189)
0x8e1: Push((int) 36188)
0x8e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8e3: Pop(3)
0x8e4: GOTO 0x8e7

0x8e5: Return(); Pop(0)

0x8e6: GOTO 0x8cf

0x8e7: PushEmpty(bool)
0x8e8: Call2 0x1017

0x8e9: Pop(0)
0x8ea: IF (Stack[-1] == 0) GOTO 0x8f6; Pop(1)

0x8eb: @ lshWaitForAnimEnd()
0x8ec: Pop(0)
0x8ed: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8ee: IF (Stack[-1] == 0) GOTO 0x8f0; Pop(1)

0x8ef: GOTO 0x8f5

0x8f0: PushEmpty(string)
0x8f1: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8f2: Call2 0xf86

0x8f3: Pop(1)
0x8f4: GOTO 0x8eb

0x8f5: GOTO 0x904

0x8f6: Push("all")
0x8f7: Push("idle")
0x8f8: @ PlayAnimation(Stack[-2], Stack[-1])
0x8f9: Pop(2)
0x8fa: @ WaitForAnimEnd()
0x8fb: Pop(0)
0x8fc: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8fd: IF (Stack[-1] == 0) GOTO 0x8ff; Pop(1)

0x8fe: GOTO 0x904

0x8ff: Push("all")
0x900: Push("idle")
0x901: @ PlayAnimation(Stack[-2], Stack[-1])
0x902: Pop(2)
0x903: GOTO 0x8fa

0x904: Return(); Pop(0)

0x905: PushEmpty()
0x906: PushEmpty(bool)
0x907: Call2 0x1017

0x908: Pop(0)
0x909: Pop(1); Push((bool) Stack[-1] == 0)
0x90a: IF (Stack[-1] == 0) GOTO 0x90c; Pop(1)

0x90b: Return(); Pop(0)

0x90c: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x90d: IF (Stack[-1] == 0) GOTO 0x90f; Pop(1)

0x90e: Return(); Pop(0)

0x90f: PushEmpty(string, bool)
0x910: Stack[-2] = Stack[-3]
0x911: Push("")
0x912: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x913: IF (Stack[-1] == 0) GOTO 0x916; Pop(1)

0x914: Stack[-1] = (bool) 0
0x915: GOTO 0x917

0x916: Stack[-1] = (bool) 1
0x917: Call2 0xf96

0x918: Pop(2)
0x919: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x91a: Return(); Pop(0)

0x91b: PushEmpty()
0x91c: Push((int) 1)
0x91d: IF (Stack[-1] == 0) GOTO 0x984; Pop(1)

0x91e: PushEmpty()
0x91f: Call2 0xfb4

0x920: Pop(0)
0x921: Push((int) 19139)
0x922: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x923: IF (Stack[-1] == 0) GOTO 0x938; Pop(1)

0x924: PushEmpty(string)
0x925: Stack[-1] = "Neutral"
0x926: Call2 0x905

0x927: Pop(1)
0x928: Push((int) 518006)
0x929: @@ SetMessage(Stack[-1])
0x92a: Pop(1)
0x92b: @@ ClearReplies()
0x92c: Pop(0)
0x92d: Push((int) 518007)
0x92e: Push((int) 36191)
0x92f: Push((int) 19140)
0x930: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x931: Pop(3)
0x932: Push((int) 534556)
0x933: Push((int) 36189)
0x934: Push((int) 36188)
0x935: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x936: Pop(3)
0x937: Return(); Pop(0)

0x938: Push((int) 36189)
0x939: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x93a: IF (Stack[-1] == 0) GOTO 0x94a; Pop(1)

0x93b: PushEmpty(string)
0x93c: Stack[-1] = "Neutral"
0x93d: Call2 0x905

0x93e: Pop(1)
0x93f: Push((int) 534557)
0x940: @@ SetMessage(Stack[-1])
0x941: Pop(1)
0x942: @@ ClearReplies()
0x943: Pop(0)
0x944: Push((int) 534558)
0x945: Push((int) 36195)
0x946: Push((int) 36190)
0x947: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x948: Pop(3)
0x949: Return(); Pop(0)

0x94a: Push((int) 36195)
0x94b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x94c: IF (Stack[-1] == 0) GOTO 0x966; Pop(1)

0x94d: PushEmpty(string)
0x94e: Stack[-1] = "Neutral"
0x94f: Call2 0x905

0x950: Pop(1)
0x951: Push((int) 534562)
0x952: @@ SetMessage(Stack[-1])
0x953: Pop(1)
0x954: @@ ClearReplies()
0x955: Pop(0)
0x956: Push((int) 534563)
0x957: Push((int) -1)
0x958: Push((int) 36196)
0x959: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x95a: Pop(3)
0x95b: Push((int) 534565)
0x95c: Push((int) -1)
0x95d: Push((int) 36198)
0x95e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x95f: Pop(3)
0x960: Push((int) 534564)
0x961: Push((int) -1)
0x962: Push((int) 36197)
0x963: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x964: Pop(3)
0x965: Return(); Pop(0)

0x966: Push((int) 36191)
0x967: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x968: IF (Stack[-1] == 0) GOTO 0x978; Pop(1)

0x969: PushEmpty(string)
0x96a: Stack[-1] = "Neutral"
0x96b: Call2 0x905

0x96c: Pop(1)
0x96d: Push((int) 534559)
0x96e: @@ SetMessage(Stack[-1])
0x96f: Pop(1)
0x970: @@ ClearReplies()
0x971: Pop(0)
0x972: Push((int) 534560)
0x973: Push((int) 36189)
0x974: Push((int) 36192)
0x975: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x976: Pop(3)
0x977: Return(); Pop(0)

0x978: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x979: PushEmpty(bool)
0x97a: Call2 0x1017

0x97b: Pop(0)
0x97c: IF (Stack[-1] == 0) GOTO 0x980; Pop(1)

0x97d: @ lshStopAnimation()
0x97e: Pop(0)
0x97f: GOTO 0x982

0x980: @ StopAnimation()
0x981: Pop(0)
0x982: Return(); Pop(0)

0x983: GOTO 0x91c

0x984: Return(); Pop(0)

0x985: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x986: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x987: PushEmpty(bool, object, float)
0x988: Stack[-2] = Stack[-12]
0x989: Stack[-1] = (float) 70.0
0x98a: Call2 0xea5

0x98b: Pop(2)
0x98c: Pop(1); Push((bool) Stack[-1] == 0)
0x98d: IF (Stack[-1] == 0) GOTO 0x990; Pop(1)

0x98e: Stack[-10] = (int) -2
0x98f: Return(); Pop(8)

0x990: @ CreateDialog(Stack[-4])
0x991: Pop(0)
0x992: PushEmpty(int)
0x993: Call2 0x1011

0x994: Pop(0)
0x995: @@ SetNPCName(Stack[-1])
0x996: Pop(1)
0x997: PushEmpty(int)
0x998: Call2 0x100f

0x999: Pop(0)
0x99a: @@ SetNPCDescription(Stack[-1])
0x99b: Pop(1)
0x99c: PushEmpty(string)
0x99d: Call2 0x1013

0x99e: Pop(0)
0x99f: @@ SetPhoto(Stack[-1])
0x9a0: Pop(1)
0x9a1: PushEmpty(string)
0x9a2: Call2 0x1015

0x9a3: Pop(0)
0x9a4: @@ SetPhoto2(Stack[-1])
0x9a5: Pop(1)
0x9a6: PushEmpty(int)
0x9a7: Call2 0x11dd

0x9a8: Pop(0)
0x9a9: @@ SetPlayerName(Stack[-1])
0x9aa: Pop(1)
0x9ab: Stack[-2] = (int) -1
0x9ac: @ IsOverrideActive(Stack[-3])
0x9ad: Pop(0)
0x9ae: Push(Stack[-3])
0x9af: IF (Stack[-1] == 0) GOTO 0x9b2; Pop(1)

0x9b0: Stack[-10] = (int) -2
0x9b1: Return(); Pop(8)

0x9b2: @ DoDialog(Stack[-4])
0x9b3: Pop(0)
0x9b4: PushEmpty(bool, object)
0x9b5: PushEmpty(object)
0x9b6: Call2 0xfbb

0x9b7: Stack[-2] = Stack[-1]
0x9b8: Pop(1)
0x9b9: Call2 0xefc

0x9ba: Pop(2)
0x9bb: PushEmpty(object, object)
0x9bc: Stack[-2] = Stack[-11]
0x9bd: Stack[-1] = Stack[-6]
0x9be: Push(-2, 4); TaskCall(11)
0x9bf: Call2 0x9d6

0x9c0: Pop(-2, 4); TaskReturn
0x9c1: Pop(2)
0x9c2: @@ IsDialogEnd(Stack[-1])
0x9c3: Pop(0)
0x9c4: Pop(0); Push((bool) Stack[-1] == 0)
0x9c5: IF (Stack[-1] == 0) GOTO 0x9cb; Pop(1)

0x9c6: @ sync()
0x9c7: Pop(0)
0x9c8: @@ IsDialogEnd(Stack[-1])
0x9c9: Pop(0)
0x9ca: GOTO 0x9c4

0x9cb: PushEmpty(object)
0x9cc: Stack[-1] = Stack[-10]
0x9cd: Call2 0xeea

0x9ce: Pop(1)
0x9cf: @ StopDialog(Stack[-4])
0x9d0: Pop(0)
0x9d1: @@ GetReturnValue(Stack[-2])
0x9d2: Pop(0)
0x9d3: Stack[-10] = Stack[-2]
0x9d4: Return(); Pop(8)

0x9d5: Stack[-4] = 0
0x9d6: PushEmpty()
0x9d7: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x9d8: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x9d9: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x9da: Push((int) 1)
0x9db: IF (Stack[-1] == 0) GOTO 0xa05; Pop(1)

0x9dc: PushEmpty(string)
0x9dd: Stack[-1] = "Suspicion"
0x9de: Call2 0xa23

0x9df: Pop(1)
0x9e0: Push((int) 534481)
0x9e1: @@ SetMessage(Stack[-1])
0x9e2: Pop(1)
0x9e3: @@ ClearReplies()
0x9e4: Pop(0)
0x9e5: PushEmpty(bool)
0x9e6: Stack[-1] = (bool) 0
0x9e7: PushEmpty(bool, object)
0x9e8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9e9: Call2 0x10ad

0x9ea: Pop(1)
0x9eb: IF (Stack[-1] == 0) GOTO 0x9f2; Pop(1)

0x9ec: PushEmpty(bool, object)
0x9ed: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9ee: Call2 0x10b9

0x9ef: Pop(1)
0x9f0: IF (Stack[-1] == 0) GOTO 0x9f2; Pop(1)

0x9f1: Stack[-1] = (bool) 1
0x9f2: IF (Stack[-1] == 0) GOTO 0x9f8; Pop(1)

0x9f3: Push((int) 534482)
0x9f4: Push((int) 38410)
0x9f5: Push((int) 36127)
0x9f6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9f7: Pop(3)
0x9f8: Push((int) 534489)
0x9f9: Push((int) -1)
0x9fa: Push((int) 36134)
0x9fb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9fc: Pop(3)
0x9fd: Push((int) 536587)
0x9fe: Push((int) -1)
0x9ff: Push((int) 38409)
0xa00: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa01: Pop(3)
0xa02: GOTO 0xa05

0xa03: Return(); Pop(0)

0xa04: GOTO 0x9da

0xa05: PushEmpty(bool)
0xa06: Call2 0x1017

0xa07: Pop(0)
0xa08: IF (Stack[-1] == 0) GOTO 0xa14; Pop(1)

0xa09: @ lshWaitForAnimEnd()
0xa0a: Pop(0)
0xa0b: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa0c: IF (Stack[-1] == 0) GOTO 0xa0e; Pop(1)

0xa0d: GOTO 0xa13

0xa0e: PushEmpty(string)
0xa0f: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa10: Call2 0xf86

0xa11: Pop(1)
0xa12: GOTO 0xa09

0xa13: GOTO 0xa22

0xa14: Push("all")
0xa15: Push("idle")
0xa16: @ PlayAnimation(Stack[-2], Stack[-1])
0xa17: Pop(2)
0xa18: @ WaitForAnimEnd()
0xa19: Pop(0)
0xa1a: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa1b: IF (Stack[-1] == 0) GOTO 0xa1d; Pop(1)

0xa1c: GOTO 0xa22

0xa1d: Push("all")
0xa1e: Push("idle")
0xa1f: @ PlayAnimation(Stack[-2], Stack[-1])
0xa20: Pop(2)
0xa21: GOTO 0xa18

0xa22: Return(); Pop(0)

0xa23: PushEmpty()
0xa24: PushEmpty(bool)
0xa25: Call2 0x1017

0xa26: Pop(0)
0xa27: Pop(1); Push((bool) Stack[-1] == 0)
0xa28: IF (Stack[-1] == 0) GOTO 0xa2a; Pop(1)

0xa29: Return(); Pop(0)

0xa2a: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa2b: IF (Stack[-1] == 0) GOTO 0xa2d; Pop(1)

0xa2c: Return(); Pop(0)

0xa2d: PushEmpty(string, bool)
0xa2e: Stack[-2] = Stack[-3]
0xa2f: Push("")
0xa30: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa31: IF (Stack[-1] == 0) GOTO 0xa34; Pop(1)

0xa32: Stack[-1] = (bool) 0
0xa33: GOTO 0xa35

0xa34: Stack[-1] = (bool) 1
0xa35: Call2 0xf96

0xa36: Pop(2)
0xa37: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa38: Return(); Pop(0)

0xa39: PushEmpty()
0xa3a: Push((int) 1)
0xa3b: IF (Stack[-1] == 0) GOTO 0xbb6; Pop(1)

0xa3c: PushEmpty()
0xa3d: Call2 0xfb4

0xa3e: Pop(0)
0xa3f: Push((int) 36133)
0xa40: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa41: IF (Stack[-1] == 0) GOTO 0xa47; Pop(1)

0xa42: PushEmpty(object, object)
0xa43: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa44: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa45: Call2 0x101f

0xa46: Pop(2)
0xa47: Push((int) 38442)
0xa48: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa49: IF (Stack[-1] == 0) GOTO 0xa4f; Pop(1)

0xa4a: PushEmpty(object, object)
0xa4b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa4c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa4d: Call2 0x101f

0xa4e: Pop(2)
0xa4f: Push((int) 41671)
0xa50: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa51: IF (Stack[-1] == 0) GOTO 0xa57; Pop(1)

0xa52: PushEmpty(object, object)
0xa53: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa54: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa55: Call2 0x101f

0xa56: Pop(2)
0xa57: Push((int) 36126)
0xa58: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa59: IF (Stack[-1] == 0) GOTO 0xa81; Pop(1)

0xa5a: PushEmpty(string)
0xa5b: Stack[-1] = "Suspicion"
0xa5c: Call2 0xa23

0xa5d: Pop(1)
0xa5e: Push((int) 534481)
0xa5f: @@ SetMessage(Stack[-1])
0xa60: Pop(1)
0xa61: @@ ClearReplies()
0xa62: Pop(0)
0xa63: PushEmpty(bool)
0xa64: Stack[-1] = (bool) 0
0xa65: PushEmpty(bool, object)
0xa66: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa67: Call2 0x10ad

0xa68: Pop(1)
0xa69: IF (Stack[-1] == 0) GOTO 0xa70; Pop(1)

0xa6a: PushEmpty(bool, object)
0xa6b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa6c: Call2 0x10b9

0xa6d: Pop(1)
0xa6e: IF (Stack[-1] == 0) GOTO 0xa70; Pop(1)

0xa6f: Stack[-1] = (bool) 1
0xa70: IF (Stack[-1] == 0) GOTO 0xa76; Pop(1)

0xa71: Push((int) 534482)
0xa72: Push((int) 38410)
0xa73: Push((int) 36127)
0xa74: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa75: Pop(3)
0xa76: Push((int) 534489)
0xa77: Push((int) -1)
0xa78: Push((int) 36134)
0xa79: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa7a: Pop(3)
0xa7b: Push((int) 536587)
0xa7c: Push((int) -1)
0xa7d: Push((int) 38409)
0xa7e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa7f: Pop(3)
0xa80: Return(); Pop(0)

0xa81: Push((int) 38410)
0xa82: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa83: IF (Stack[-1] == 0) GOTO 0xa98; Pop(1)

0xa84: PushEmpty(string)
0xa85: Stack[-1] = "Suspicion"
0xa86: Call2 0xa23

0xa87: Pop(1)
0xa88: Push((int) 536588)
0xa89: @@ SetMessage(Stack[-1])
0xa8a: Pop(1)
0xa8b: @@ ClearReplies()
0xa8c: Pop(0)
0xa8d: Push((int) 536589)
0xa8e: Push((int) 38412)
0xa8f: Push((int) 38411)
0xa90: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa91: Pop(3)
0xa92: Push((int) 536598)
0xa93: Push((int) 38421)
0xa94: Push((int) 38420)
0xa95: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa96: Pop(3)
0xa97: Return(); Pop(0)

0xa98: Push((int) 38421)
0xa99: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa9a: IF (Stack[-1] == 0) GOTO 0xaaa; Pop(1)

0xa9b: PushEmpty(string)
0xa9c: Stack[-1] = "Neutral"
0xa9d: Call2 0xa23

0xa9e: Pop(1)
0xa9f: Push((int) 536599)
0xaa0: @@ SetMessage(Stack[-1])
0xaa1: Pop(1)
0xaa2: @@ ClearReplies()
0xaa3: Pop(0)
0xaa4: Push((int) 536600)
0xaa5: Push((int) 36128)
0xaa6: Push((int) 38422)
0xaa7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaa8: Pop(3)
0xaa9: Return(); Pop(0)

0xaaa: Push((int) 38412)
0xaab: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaac: IF (Stack[-1] == 0) GOTO 0xac1; Pop(1)

0xaad: PushEmpty(string)
0xaae: Stack[-1] = "Grin"
0xaaf: Call2 0xa23

0xab0: Pop(1)
0xab1: Push((int) 536590)
0xab2: @@ SetMessage(Stack[-1])
0xab3: Pop(1)
0xab4: @@ ClearReplies()
0xab5: Pop(0)
0xab6: Push((int) 536591)
0xab7: Push((int) 38414)
0xab8: Push((int) 38413)
0xab9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaba: Pop(3)
0xabb: Push((int) 536601)
0xabc: Push((int) 38418)
0xabd: Push((int) 38424)
0xabe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xabf: Pop(3)
0xac0: Return(); Pop(0)

0xac1: Push((int) 38414)
0xac2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xac3: IF (Stack[-1] == 0) GOTO 0xad8; Pop(1)

0xac4: PushEmpty(string)
0xac5: Stack[-1] = "Grin"
0xac6: Call2 0xa23

0xac7: Pop(1)
0xac8: Push((int) 536592)
0xac9: @@ SetMessage(Stack[-1])
0xaca: Pop(1)
0xacb: @@ ClearReplies()
0xacc: Pop(0)
0xacd: Push((int) 536595)
0xace: Push((int) 38418)
0xacf: Push((int) 38417)
0xad0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xad1: Pop(3)
0xad2: Push((int) 539710)
0xad3: Push((int) 41666)
0xad4: Push((int) 41668)
0xad5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xad6: Pop(3)
0xad7: Return(); Pop(0)

0xad8: Push((int) 38418)
0xad9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xada: IF (Stack[-1] == 0) GOTO 0xaef; Pop(1)

0xadb: PushEmpty(string)
0xadc: Stack[-1] = "Grin"
0xadd: Call2 0xa23

0xade: Pop(1)
0xadf: Push((int) 536596)
0xae0: @@ SetMessage(Stack[-1])
0xae1: Pop(1)
0xae2: @@ ClearReplies()
0xae3: Pop(0)
0xae4: Push((int) 536610)
0xae5: Push((int) 38437)
0xae6: Push((int) 38436)
0xae7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xae8: Pop(3)
0xae9: Push((int) 536612)
0xaea: Push((int) 38437)
0xaeb: Push((int) 38438)
0xaec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaed: Pop(3)
0xaee: Return(); Pop(0)

0xaef: Push((int) 38437)
0xaf0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaf1: IF (Stack[-1] == 0) GOTO 0xb06; Pop(1)

0xaf2: PushEmpty(string)
0xaf3: Stack[-1] = "Neutral"
0xaf4: Call2 0xa23

0xaf5: Pop(1)
0xaf6: Push((int) 536611)
0xaf7: @@ SetMessage(Stack[-1])
0xaf8: Pop(1)
0xaf9: @@ ClearReplies()
0xafa: Pop(0)
0xafb: Push((int) 536603)
0xafc: Push((int) 36130)
0xafd: Push((int) 38427)
0xafe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaff: Pop(3)
0xb00: Push((int) 534484)
0xb01: Push((int) 36132)
0xb02: Push((int) 36129)
0xb03: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb04: Pop(3)
0xb05: Return(); Pop(0)

0xb06: Push((int) 36130)
0xb07: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb08: IF (Stack[-1] == 0) GOTO 0xb1d; Pop(1)

0xb09: PushEmpty(string)
0xb0a: Stack[-1] = "Doubt"
0xb0b: Call2 0xa23

0xb0c: Pop(1)
0xb0d: Push((int) 534485)
0xb0e: @@ SetMessage(Stack[-1])
0xb0f: Pop(1)
0xb10: @@ ClearReplies()
0xb11: Pop(0)
0xb12: Push((int) 534486)
0xb13: Push((int) 36132)
0xb14: Push((int) 36131)
0xb15: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb16: Pop(3)
0xb17: Push((int) 536605)
0xb18: Push((int) 41666)
0xb19: Push((int) 38430)
0xb1a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb1b: Pop(3)
0xb1c: Return(); Pop(0)

0xb1d: Push((int) 41666)
0xb1e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb1f: IF (Stack[-1] == 0) GOTO 0xb34; Pop(1)

0xb20: PushEmpty(string)
0xb21: Stack[-1] = "Doubt"
0xb22: Call2 0xa23

0xb23: Pop(1)
0xb24: Push((int) 539708)
0xb25: @@ SetMessage(Stack[-1])
0xb26: Pop(1)
0xb27: @@ ClearReplies()
0xb28: Pop(0)
0xb29: Push((int) 539709)
0xb2a: Push((int) 38431)
0xb2b: Push((int) 41667)
0xb2c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb2d: Pop(3)
0xb2e: Push((int) 536593)
0xb2f: Push((int) 38416)
0xb30: Push((int) 38415)
0xb31: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb32: Pop(3)
0xb33: Return(); Pop(0)

0xb34: Push((int) 38416)
0xb35: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb36: IF (Stack[-1] == 0) GOTO 0xb46; Pop(1)

0xb37: PushEmpty(string)
0xb38: Stack[-1] = "Neutral"
0xb39: Call2 0xa23

0xb3a: Pop(1)
0xb3b: Push((int) 536594)
0xb3c: @@ SetMessage(Stack[-1])
0xb3d: Pop(1)
0xb3e: @@ ClearReplies()
0xb3f: Pop(0)
0xb40: Push((int) 539711)
0xb41: Push((int) 36132)
0xb42: Push((int) 41669)
0xb43: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb44: Pop(3)
0xb45: Return(); Pop(0)

0xb46: Push((int) 38431)
0xb47: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb48: IF (Stack[-1] == 0) GOTO 0xb5d; Pop(1)

0xb49: PushEmpty(string)
0xb4a: Stack[-1] = "Neutral"
0xb4b: Call2 0xa23

0xb4c: Pop(1)
0xb4d: Push((int) 536606)
0xb4e: @@ SetMessage(Stack[-1])
0xb4f: Pop(1)
0xb50: @@ ClearReplies()
0xb51: Pop(0)
0xb52: Push((int) 536607)
0xb53: Push((int) 38433)
0xb54: Push((int) 38432)
0xb55: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb56: Pop(3)
0xb57: Push((int) 539712)
0xb58: Push((int) -1)
0xb59: Push((int) 41671)
0xb5a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb5b: Pop(3)
0xb5c: Return(); Pop(0)

0xb5d: Push((int) 38433)
0xb5e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb5f: IF (Stack[-1] == 0) GOTO 0xb6f; Pop(1)

0xb60: PushEmpty(string)
0xb61: Stack[-1] = "Neutral"
0xb62: Call2 0xa23

0xb63: Pop(1)
0xb64: Push((int) 536608)
0xb65: @@ SetMessage(Stack[-1])
0xb66: Pop(1)
0xb67: @@ ClearReplies()
0xb68: Pop(0)
0xb69: Push((int) 536609)
0xb6a: Push((int) 36128)
0xb6b: Push((int) 38434)
0xb6c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb6d: Pop(3)
0xb6e: Return(); Pop(0)

0xb6f: Push((int) 36132)
0xb70: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb71: IF (Stack[-1] == 0) GOTO 0xb81; Pop(1)

0xb72: PushEmpty(string)
0xb73: Stack[-1] = "Doubt"
0xb74: Call2 0xa23

0xb75: Pop(1)
0xb76: Push((int) 534487)
0xb77: @@ SetMessage(Stack[-1])
0xb78: Pop(1)
0xb79: @@ ClearReplies()
0xb7a: Pop(0)
0xb7b: Push((int) 536597)
0xb7c: Push((int) 36128)
0xb7d: Push((int) 38419)
0xb7e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb7f: Pop(3)
0xb80: Return(); Pop(0)

0xb81: Push((int) 36128)
0xb82: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb83: IF (Stack[-1] == 0) GOTO 0xb98; Pop(1)

0xb84: PushEmpty(string)
0xb85: Stack[-1] = "Neutral"
0xb86: Call2 0xa23

0xb87: Pop(1)
0xb88: Push((int) 534483)
0xb89: @@ SetMessage(Stack[-1])
0xb8a: Pop(1)
0xb8b: @@ ClearReplies()
0xb8c: Pop(0)
0xb8d: Push((int) 534488)
0xb8e: Push((int) -1)
0xb8f: Push((int) 36133)
0xb90: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb91: Pop(3)
0xb92: Push((int) 536613)
0xb93: Push((int) 38441)
0xb94: Push((int) 38440)
0xb95: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb96: Pop(3)
0xb97: Return(); Pop(0)

0xb98: Push((int) 38441)
0xb99: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb9a: IF (Stack[-1] == 0) GOTO 0xbaa; Pop(1)

0xb9b: PushEmpty(string)
0xb9c: Stack[-1] = "Neutral"
0xb9d: Call2 0xa23

0xb9e: Pop(1)
0xb9f: Push((int) 536614)
0xba0: @@ SetMessage(Stack[-1])
0xba1: Pop(1)
0xba2: @@ ClearReplies()
0xba3: Pop(0)
0xba4: Push((int) 536615)
0xba5: Push((int) -1)
0xba6: Push((int) 38442)
0xba7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xba8: Pop(3)
0xba9: Return(); Pop(0)

0xbaa: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xbab: PushEmpty(bool)
0xbac: Call2 0x1017

0xbad: Pop(0)
0xbae: IF (Stack[-1] == 0) GOTO 0xbb2; Pop(1)

0xbaf: @ lshStopAnimation()
0xbb0: Pop(0)
0xbb1: GOTO 0xbb4

0xbb2: @ StopAnimation()
0xbb3: Pop(0)
0xbb4: Return(); Pop(0)

0xbb5: GOTO 0xa3a

0xbb6: Return(); Pop(0)

0xbb7: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xbb8: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xbb9: PushEmpty(bool, object, float)
0xbba: Stack[-2] = Stack[-12]
0xbbb: Stack[-1] = (float) 70.0
0xbbc: Call2 0xea5

0xbbd: Pop(2)
0xbbe: Pop(1); Push((bool) Stack[-1] == 0)
0xbbf: IF (Stack[-1] == 0) GOTO 0xbc2; Pop(1)

0xbc0: Stack[-10] = (int) -2
0xbc1: Return(); Pop(8)

0xbc2: @ CreateDialog(Stack[-4])
0xbc3: Pop(0)
0xbc4: PushEmpty(int)
0xbc5: Call2 0x1011

0xbc6: Pop(0)
0xbc7: @@ SetNPCName(Stack[-1])
0xbc8: Pop(1)
0xbc9: PushEmpty(int)
0xbca: Call2 0x100f

0xbcb: Pop(0)
0xbcc: @@ SetNPCDescription(Stack[-1])
0xbcd: Pop(1)
0xbce: PushEmpty(string)
0xbcf: Call2 0x1013

0xbd0: Pop(0)
0xbd1: @@ SetPhoto(Stack[-1])
0xbd2: Pop(1)
0xbd3: PushEmpty(string)
0xbd4: Call2 0x1015

0xbd5: Pop(0)
0xbd6: @@ SetPhoto2(Stack[-1])
0xbd7: Pop(1)
0xbd8: PushEmpty(int)
0xbd9: Call2 0x11dd

0xbda: Pop(0)
0xbdb: @@ SetPlayerName(Stack[-1])
0xbdc: Pop(1)
0xbdd: Stack[-2] = (int) -1
0xbde: @ IsOverrideActive(Stack[-3])
0xbdf: Pop(0)
0xbe0: Push(Stack[-3])
0xbe1: IF (Stack[-1] == 0) GOTO 0xbe4; Pop(1)

0xbe2: Stack[-10] = (int) -2
0xbe3: Return(); Pop(8)

0xbe4: @ DoDialog(Stack[-4])
0xbe5: Pop(0)
0xbe6: PushEmpty(bool, object)
0xbe7: PushEmpty(object)
0xbe8: Call2 0xfbb

0xbe9: Stack[-2] = Stack[-1]
0xbea: Pop(1)
0xbeb: Call2 0xefc

0xbec: Pop(2)
0xbed: PushEmpty(object, object)
0xbee: Stack[-2] = Stack[-11]
0xbef: Stack[-1] = Stack[-6]
0xbf0: Push(-2, 4); TaskCall(13)
0xbf1: Call2 0xc08

0xbf2: Pop(-2, 4); TaskReturn
0xbf3: Pop(2)
0xbf4: @@ IsDialogEnd(Stack[-1])
0xbf5: Pop(0)
0xbf6: Pop(0); Push((bool) Stack[-1] == 0)
0xbf7: IF (Stack[-1] == 0) GOTO 0xbfd; Pop(1)

0xbf8: @ sync()
0xbf9: Pop(0)
0xbfa: @@ IsDialogEnd(Stack[-1])
0xbfb: Pop(0)
0xbfc: GOTO 0xbf6

0xbfd: PushEmpty(object)
0xbfe: Stack[-1] = Stack[-10]
0xbff: Call2 0xeea

0xc00: Pop(1)
0xc01: @ StopDialog(Stack[-4])
0xc02: Pop(0)
0xc03: @@ GetReturnValue(Stack[-2])
0xc04: Pop(0)
0xc05: Stack[-10] = Stack[-2]
0xc06: Return(); Pop(8)

0xc07: Stack[-4] = 0
0xc08: PushEmpty()
0xc09: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xc0a: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xc0b: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xc0c: Push((int) 1)
0xc0d: IF (Stack[-1] == 0) GOTO 0xc29; Pop(1)

0xc0e: PushEmpty(string)
0xc0f: Stack[-1] = "Neutral"
0xc10: Call2 0xc47

0xc11: Pop(1)
0xc12: Push((int) 535284)
0xc13: @@ SetMessage(Stack[-1])
0xc14: Pop(1)
0xc15: @@ ClearReplies()
0xc16: Pop(0)
0xc17: Push((int) 535285)
0xc18: Push((int) 36962)
0xc19: Push((int) 36961)
0xc1a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc1b: Pop(3)
0xc1c: Push((int) 535292)
0xc1d: Push((int) -1)
0xc1e: Push((int) 36968)
0xc1f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc20: Pop(3)
0xc21: Push((int) 535293)
0xc22: Push((int) -1)
0xc23: Push((int) 36969)
0xc24: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc25: Pop(3)
0xc26: GOTO 0xc29

0xc27: Return(); Pop(0)

0xc28: GOTO 0xc0c

0xc29: PushEmpty(bool)
0xc2a: Call2 0x1017

0xc2b: Pop(0)
0xc2c: IF (Stack[-1] == 0) GOTO 0xc38; Pop(1)

0xc2d: @ lshWaitForAnimEnd()
0xc2e: Pop(0)
0xc2f: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc30: IF (Stack[-1] == 0) GOTO 0xc32; Pop(1)

0xc31: GOTO 0xc37

0xc32: PushEmpty(string)
0xc33: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xc34: Call2 0xf86

0xc35: Pop(1)
0xc36: GOTO 0xc2d

0xc37: GOTO 0xc46

0xc38: Push("all")
0xc39: Push("idle")
0xc3a: @ PlayAnimation(Stack[-2], Stack[-1])
0xc3b: Pop(2)
0xc3c: @ WaitForAnimEnd()
0xc3d: Pop(0)
0xc3e: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc3f: IF (Stack[-1] == 0) GOTO 0xc41; Pop(1)

0xc40: GOTO 0xc46

0xc41: Push("all")
0xc42: Push("idle")
0xc43: @ PlayAnimation(Stack[-2], Stack[-1])
0xc44: Pop(2)
0xc45: GOTO 0xc3c

0xc46: Return(); Pop(0)

0xc47: PushEmpty()
0xc48: PushEmpty(bool)
0xc49: Call2 0x1017

0xc4a: Pop(0)
0xc4b: Pop(1); Push((bool) Stack[-1] == 0)
0xc4c: IF (Stack[-1] == 0) GOTO 0xc4e; Pop(1)

0xc4d: Return(); Pop(0)

0xc4e: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xc4f: IF (Stack[-1] == 0) GOTO 0xc51; Pop(1)

0xc50: Return(); Pop(0)

0xc51: PushEmpty(string, bool)
0xc52: Stack[-2] = Stack[-3]
0xc53: Push("")
0xc54: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xc55: IF (Stack[-1] == 0) GOTO 0xc58; Pop(1)

0xc56: Stack[-1] = (bool) 0
0xc57: GOTO 0xc59

0xc58: Stack[-1] = (bool) 1
0xc59: Call2 0xf96

0xc5a: Pop(2)
0xc5b: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xc5c: Return(); Pop(0)

0xc5d: PushEmpty()
0xc5e: Push((int) 1)
0xc5f: IF (Stack[-1] == 0) GOTO 0xcb9; Pop(1)

0xc60: PushEmpty()
0xc61: Call2 0xfb4

0xc62: Pop(0)
0xc63: Push((int) 36960)
0xc64: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc65: IF (Stack[-1] == 0) GOTO 0xc7f; Pop(1)

0xc66: PushEmpty(string)
0xc67: Stack[-1] = "Neutral"
0xc68: Call2 0xc47

0xc69: Pop(1)
0xc6a: Push((int) 535284)
0xc6b: @@ SetMessage(Stack[-1])
0xc6c: Pop(1)
0xc6d: @@ ClearReplies()
0xc6e: Pop(0)
0xc6f: Push((int) 535285)
0xc70: Push((int) 36962)
0xc71: Push((int) 36961)
0xc72: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc73: Pop(3)
0xc74: Push((int) 535292)
0xc75: Push((int) -1)
0xc76: Push((int) 36968)
0xc77: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc78: Pop(3)
0xc79: Push((int) 535293)
0xc7a: Push((int) -1)
0xc7b: Push((int) 36969)
0xc7c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc7d: Pop(3)
0xc7e: Return(); Pop(0)

0xc7f: Push((int) 36962)
0xc80: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc81: IF (Stack[-1] == 0) GOTO 0xc96; Pop(1)

0xc82: PushEmpty(string)
0xc83: Stack[-1] = "Neutral"
0xc84: Call2 0xc47

0xc85: Pop(1)
0xc86: Push((int) 535286)
0xc87: @@ SetMessage(Stack[-1])
0xc88: Pop(1)
0xc89: @@ ClearReplies()
0xc8a: Pop(0)
0xc8b: Push((int) 535287)
0xc8c: Push((int) 36964)
0xc8d: Push((int) 36963)
0xc8e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc8f: Pop(3)
0xc90: Push((int) 535291)
0xc91: Push((int) -1)
0xc92: Push((int) 36967)
0xc93: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc94: Pop(3)
0xc95: Return(); Pop(0)

0xc96: Push((int) 36964)
0xc97: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc98: IF (Stack[-1] == 0) GOTO 0xcad; Pop(1)

0xc99: PushEmpty(string)
0xc9a: Stack[-1] = "Neutral"
0xc9b: Call2 0xc47

0xc9c: Pop(1)
0xc9d: Push((int) 535288)
0xc9e: @@ SetMessage(Stack[-1])
0xc9f: Pop(1)
0xca0: @@ ClearReplies()
0xca1: Pop(0)
0xca2: Push((int) 535289)
0xca3: Push((int) -1)
0xca4: Push((int) 36965)
0xca5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xca6: Pop(3)
0xca7: Push((int) 535290)
0xca8: Push((int) -1)
0xca9: Push((int) 36966)
0xcaa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcab: Pop(3)
0xcac: Return(); Pop(0)

0xcad: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xcae: PushEmpty(bool)
0xcaf: Call2 0x1017

0xcb0: Pop(0)
0xcb1: IF (Stack[-1] == 0) GOTO 0xcb5; Pop(1)

0xcb2: @ lshStopAnimation()
0xcb3: Pop(0)
0xcb4: GOTO 0xcb7

0xcb5: @ StopAnimation()
0xcb6: Pop(0)
0xcb7: Return(); Pop(0)

0xcb8: GOTO 0xc5e

0xcb9: Return(); Pop(0)

0xcba: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xcbb: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xcbc: PushEmpty(bool, object, float)
0xcbd: Stack[-2] = Stack[-12]
0xcbe: Stack[-1] = (float) 70.0
0xcbf: Call2 0xea5

0xcc0: Pop(2)
0xcc1: Pop(1); Push((bool) Stack[-1] == 0)
0xcc2: IF (Stack[-1] == 0) GOTO 0xcc5; Pop(1)

0xcc3: Stack[-10] = (int) -2
0xcc4: Return(); Pop(8)

0xcc5: @ CreateDialog(Stack[-4])
0xcc6: Pop(0)
0xcc7: PushEmpty(int)
0xcc8: Call2 0x1011

0xcc9: Pop(0)
0xcca: @@ SetNPCName(Stack[-1])
0xccb: Pop(1)
0xccc: PushEmpty(int)
0xccd: Call2 0x100f

0xcce: Pop(0)
0xccf: @@ SetNPCDescription(Stack[-1])
0xcd0: Pop(1)
0xcd1: PushEmpty(string)
0xcd2: Call2 0x1013

0xcd3: Pop(0)
0xcd4: @@ SetPhoto(Stack[-1])
0xcd5: Pop(1)
0xcd6: PushEmpty(string)
0xcd7: Call2 0x1015

0xcd8: Pop(0)
0xcd9: @@ SetPhoto2(Stack[-1])
0xcda: Pop(1)
0xcdb: PushEmpty(int)
0xcdc: Call2 0x11dd

0xcdd: Pop(0)
0xcde: @@ SetPlayerName(Stack[-1])
0xcdf: Pop(1)
0xce0: Stack[-2] = (int) -1
0xce1: @ IsOverrideActive(Stack[-3])
0xce2: Pop(0)
0xce3: Push(Stack[-3])
0xce4: IF (Stack[-1] == 0) GOTO 0xce7; Pop(1)

0xce5: Stack[-10] = (int) -2
0xce6: Return(); Pop(8)

0xce7: @ DoDialog(Stack[-4])
0xce8: Pop(0)
0xce9: PushEmpty(bool, object)
0xcea: PushEmpty(object)
0xceb: Call2 0xfbb

0xcec: Stack[-2] = Stack[-1]
0xced: Pop(1)
0xcee: Call2 0xefc

0xcef: Pop(2)
0xcf0: PushEmpty(object, object)
0xcf1: Stack[-2] = Stack[-11]
0xcf2: Stack[-1] = Stack[-6]
0xcf3: Push(-2, 4); TaskCall(15)
0xcf4: Call2 0xd0b

0xcf5: Pop(-2, 4); TaskReturn
0xcf6: Pop(2)
0xcf7: @@ IsDialogEnd(Stack[-1])
0xcf8: Pop(0)
0xcf9: Pop(0); Push((bool) Stack[-1] == 0)
0xcfa: IF (Stack[-1] == 0) GOTO 0xd00; Pop(1)

0xcfb: @ sync()
0xcfc: Pop(0)
0xcfd: @@ IsDialogEnd(Stack[-1])
0xcfe: Pop(0)
0xcff: GOTO 0xcf9

0xd00: PushEmpty(object)
0xd01: Stack[-1] = Stack[-10]
0xd02: Call2 0xeea

0xd03: Pop(1)
0xd04: @ StopDialog(Stack[-4])
0xd05: Pop(0)
0xd06: @@ GetReturnValue(Stack[-2])
0xd07: Pop(0)
0xd08: Stack[-10] = Stack[-2]
0xd09: Return(); Pop(8)

0xd0a: Stack[-4] = 0
0xd0b: PushEmpty()
0xd0c: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xd0d: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xd0e: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xd0f: Push((int) 1)
0xd10: IF (Stack[-1] == 0) GOTO 0xd27; Pop(1)

0xd11: PushEmpty(string)
0xd12: Stack[-1] = "Neutral"
0xd13: Call2 0xd45

0xd14: Pop(1)
0xd15: Push((int) 540542)
0xd16: @@ SetMessage(Stack[-1])
0xd17: Pop(1)
0xd18: @@ ClearReplies()
0xd19: Pop(0)
0xd1a: Push((int) 540543)
0xd1b: Push((int) -1)
0xd1c: Push((int) 42552)
0xd1d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd1e: Pop(3)
0xd1f: Push((int) 540796)
0xd20: Push((int) -1)
0xd21: Push((int) 42845)
0xd22: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd23: Pop(3)
0xd24: GOTO 0xd27

0xd25: Return(); Pop(0)

0xd26: GOTO 0xd0f

0xd27: PushEmpty(bool)
0xd28: Call2 0x1017

0xd29: Pop(0)
0xd2a: IF (Stack[-1] == 0) GOTO 0xd36; Pop(1)

0xd2b: @ lshWaitForAnimEnd()
0xd2c: Pop(0)
0xd2d: Push( Stack[3 + Tasks[-1].StackPointer] )
0xd2e: IF (Stack[-1] == 0) GOTO 0xd30; Pop(1)

0xd2f: GOTO 0xd35

0xd30: PushEmpty(string)
0xd31: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xd32: Call2 0xf86

0xd33: Pop(1)
0xd34: GOTO 0xd2b

0xd35: GOTO 0xd44

0xd36: Push("all")
0xd37: Push("idle")
0xd38: @ PlayAnimation(Stack[-2], Stack[-1])
0xd39: Pop(2)
0xd3a: @ WaitForAnimEnd()
0xd3b: Pop(0)
0xd3c: Push( Stack[3 + Tasks[-1].StackPointer] )
0xd3d: IF (Stack[-1] == 0) GOTO 0xd3f; Pop(1)

0xd3e: GOTO 0xd44

0xd3f: Push("all")
0xd40: Push("idle")
0xd41: @ PlayAnimation(Stack[-2], Stack[-1])
0xd42: Pop(2)
0xd43: GOTO 0xd3a

0xd44: Return(); Pop(0)

0xd45: PushEmpty()
0xd46: PushEmpty(bool)
0xd47: Call2 0x1017

0xd48: Pop(0)
0xd49: Pop(1); Push((bool) Stack[-1] == 0)
0xd4a: IF (Stack[-1] == 0) GOTO 0xd4c; Pop(1)

0xd4b: Return(); Pop(0)

0xd4c: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xd4d: IF (Stack[-1] == 0) GOTO 0xd4f; Pop(1)

0xd4e: Return(); Pop(0)

0xd4f: PushEmpty(string, bool)
0xd50: Stack[-2] = Stack[-3]
0xd51: Push("")
0xd52: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xd53: IF (Stack[-1] == 0) GOTO 0xd56; Pop(1)

0xd54: Stack[-1] = (bool) 0
0xd55: GOTO 0xd57

0xd56: Stack[-1] = (bool) 1
0xd57: Call2 0xf96

0xd58: Pop(2)
0xd59: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xd5a: Return(); Pop(0)

0xd5b: PushEmpty()
0xd5c: Push((int) 1)
0xd5d: IF (Stack[-1] == 0) GOTO 0xd84; Pop(1)

0xd5e: PushEmpty()
0xd5f: Call2 0xfb4

0xd60: Pop(0)
0xd61: Push((int) 42551)
0xd62: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd63: IF (Stack[-1] == 0) GOTO 0xd78; Pop(1)

0xd64: PushEmpty(string)
0xd65: Stack[-1] = "Neutral"
0xd66: Call2 0xd45

0xd67: Pop(1)
0xd68: Push((int) 540542)
0xd69: @@ SetMessage(Stack[-1])
0xd6a: Pop(1)
0xd6b: @@ ClearReplies()
0xd6c: Pop(0)
0xd6d: Push((int) 540543)
0xd6e: Push((int) -1)
0xd6f: Push((int) 42552)
0xd70: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd71: Pop(3)
0xd72: Push((int) 540796)
0xd73: Push((int) -1)
0xd74: Push((int) 42845)
0xd75: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd76: Pop(3)
0xd77: Return(); Pop(0)

0xd78: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xd79: PushEmpty(bool)
0xd7a: Call2 0x1017

0xd7b: Pop(0)
0xd7c: IF (Stack[-1] == 0) GOTO 0xd80; Pop(1)

0xd7d: @ lshStopAnimation()
0xd7e: Pop(0)
0xd7f: GOTO 0xd82

0xd80: @ StopAnimation()
0xd81: Pop(0)
0xd82: Return(); Pop(0)

0xd83: GOTO 0xd5c

0xd84: Return(); Pop(0)

0xd85: PushEmpty()
0xd86: Call2 0xd89

0xd87: Pop(0)
0xd88: Return(); Pop(0)

0xd89: PushEmpty(bool)
0xd8a: Call2 0xea0

0xd8b: Pop(0)
0xd8c: Pop(1); Push((bool) Stack[-1] == 0)
0xd8d: IF (Stack[-1] == 0) GOTO 0xd90; Pop(1)

0xd8e: @ Hold()
0xd8f: Pop(0)
0xd90: @ GetDirection(Stack[-0])
0xd91: Pop(0)
0xd92: PushEmpty()
0xd93: Call2 0xe39

0xd94: Pop(0)
0xd95: GOTO 0xd92

0xd96: Return(); Pop(0)

0xd97: PushEmpty(object, object)
0xd98: Push("player")
0xd99: @ FindActor(Stack[-2], Stack[-1])
0xd9a: Pop(1)
0xd9b: Pop(0); Push((bool) Stack[-1] == 0)
0xd9c: IF (Stack[-1] == 0) GOTO 0xd9f; Pop(1)

0xd9d: Stack[-3] = (bool) 0
0xd9e: Return(); Pop(2)

0xd9f: PushEmpty(bool, object)
0xda0: Stack[-1] = Stack[-3]
0xda1: Call2 0xe97

0xda2: Stack[-5] = Stack[-2]
0xda3: Pop(2)
0xda4: Return(); Pop(2)

0xda5: Stack[-1] = 0
0xda6: Push(CvectorIndex(Stack[-0], 0))
0xda7: Push(CvectorIndex(Stack[-0], 2))
0xda8: @ RotateAsync(Stack[-2], Stack[-1])
0xda9: Pop(2)
0xdaa: Return(); Pop(0)

0xdab: PushEmpty(object, bool, object, bool)
0xdac: Push("player")
0xdad: @ FindActor(Stack[-3], Stack[-1])
0xdae: Pop(1)
0xdaf: Pop(0); Push((bool) Stack[-2] == 0)
0xdb0: IF (Stack[-1] == 0) GOTO 0xdb3; Pop(1)

0xdb1: Stack[-5] = (bool) 0
0xdb2: Return(); Pop(4)

0xdb3: PushEmpty(float, object)
0xdb4: Stack[-1] = Stack[-4]
0xdb5: Call2 0xe85

0xdb6: Pop(1)
0xdb7: Push((float)90000.0)
0xdb8: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0xdb9: IF (Stack[-1] == 0) GOTO 0xdbc; Pop(1)

0xdba: Stack[-5] = (bool) 0
0xdbb: Return(); Pop(4)

0xdbc: @ CanSee(Stack[-1], Stack[-2])
0xdbd: Pop(0)
0xdbe: Stack[-5] = Stack[-1]
0xdbf: Return(); Pop(4)

0xdc0: Stack[-2] = 0
0xdc1: PushEmpty(float, float)
0xdc2: Push((int) 8)
0xdc3: Push((int) 16)
0xdc4: @ rand(Stack[-3], Stack[-2], Stack[-1])
0xdc5: Pop(2)
0xdc6: Push((int) 10)
0xdc7: @ SetTimer(Stack[-1], Stack[-2])
0xdc8: Pop(1)
0xdc9: Return(); Pop(2)

0xdca: Push((int) 10)
0xdcb: @ KillTimer(Stack[-1])
0xdcc: Pop(1)
0xdcd: Return(); Pop(0)

0xdce: PushEmpty()
0xdcf: Push((int) 10)
0xdd0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdd1: IF (Stack[-1] == 0) GOTO 0xdf3; Pop(1)

0xdd2: PushEmpty()
0xdd3: Call2 0xdca

0xdd4: Pop(0)
0xdd5: PushEmpty(bool)
0xdd6: Stack[-1] = (bool) 0
0xdd7: PushEmpty(bool)
0xdd8: Call2 0xea0

0xdd9: Pop(0)
0xdda: IF (Stack[-1] == 0) GOTO 0xde0; Pop(1)

0xddb: PushEmpty(bool)
0xddc: Call2 0xdab

0xddd: Pop(0)
0xdde: IF (Stack[-1] == 0) GOTO 0xde0; Pop(1)

0xddf: Stack[-1] = (bool) 1
0xde0: IF (Stack[-1] == 0) GOTO 0xded; Pop(1)

0xde1: PushEmpty(bool)
0xde2: Call2 0xd97

0xde3: Pop(0)
0xde4: IF (Stack[-1] == 0) GOTO 0xdec; Pop(1)

0xde5: PushEmpty(bool, object)
0xde6: PushEmpty(object)
0xde7: Call2 0xfbb

0xde8: Stack[-2] = Stack[-1]
0xde9: Pop(1)
0xdea: Call2 0xf36

0xdeb: Pop(2)
0xdec: GOTO 0xdf3

0xded: PushEmpty()
0xdee: Call2 0xda6

0xdef: Pop(0)
0xdf0: PushEmpty()
0xdf1: Call2 0xdc1

0xdf2: Pop(0)
0xdf3: Return(); Pop(0)

0xdf4: PushEmpty()
0xdf5: Call2 0xe80

0xdf6: Pop(0)
0xdf7: PushEmpty()
0xdf8: Call2 0xdca

0xdf9: Pop(0)
0xdfa: @ lshStopSpeech()
0xdfb: Pop(0)
0xdfc: @ lshStopAnimation()
0xdfd: Pop(0)
0xdfe: @ StopAsync()
0xdff: Pop(0)
0xe00: @ Hold()
0xe01: Pop(0)
0xe02: Return(); Pop(0)

0xe03: @ StopGroup0()
0xe04: Pop(0)
0xe05: PushEmpty()
0xe06: Call2 0xdca

0xe07: Pop(0)
0xe08: PushEmpty(string)
0xe09: Stack[-1] = "Neutral"
0xe0a: Call2 0xf86

0xe0b: Pop(1)
0xe0c: PushEmpty()
0xe0d: Call2 0xdc1

0xe0e: Pop(0)
0xe0f: Return(); Pop(0)

0xe10: PushEmpty()
0xe11: Push(Stack[-1])
0xe12: IF (Stack[-1] == 0) GOTO 0xe17; Pop(1)

0xe13: PushEmpty()
0xe14: Call2 0xdc1

0xe15: Pop(0)
0xe16: GOTO 0xe1b

0xe17: PushEmpty(string)
0xe18: Stack[-1] = "Neutral"
0xe19: Call2 0xf86

0xe1a: Pop(1)
0xe1b: Return(); Pop(0)

0xe1c: PushEmpty(bool, bool)
0xe1d: @ IsOverrideActive(Stack[-1])
0xe1e: Pop(0)
0xe1f: Pop(0); Push((bool) Stack[-1] == 0)
0xe20: IF (Stack[-1] == 0) GOTO 0xe38; Pop(1)

0xe21: EventDisable(0)
0xe22: PushEmpty()
0xe23: Call2 0xe80

0xe24: Pop(0)
0xe25: PushEmpty(bool, object)
0xe26: Stack[-1] = Stack[-5]
0xe27: Call2 0xe97

0xe28: Pop(2)
0xe29: EventEnable(0)
0xe2a: PushEmpty(object)
0xe2b: Stack[-1] = Stack[-4]
0xe2c: Call2 0x11ee

0xe2d: Pop(1)
0xe2e: PushEmpty(string)
0xe2f: Stack[-1] = "Neutral"
0xe30: Call2 0xf86

0xe31: Pop(1)
0xe32: PushEmpty()
0xe33: Call2 0xdca

0xe34: Pop(0)
0xe35: PushEmpty()
0xe36: Call2 0xdc1

0xe37: Pop(0)
0xe38: Return(); Pop(2)

0xe39: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0xe3a: @ WaitForAnimEnd()
0xe3b: Pop(0)
0xe3c: PushEmpty(bool)
0xe3d: Call2 0xea0

0xe3e: Pop(0)
0xe3f: Pop(1); Push((bool) Stack[-1] == 0)
0xe40: IF (Stack[-1] == 0) GOTO 0xe42; Pop(1)

0xe41: Return(); Pop(12)

0xe42: PushEmpty(int)
0xe43: Call2 0xffe

0xe44: Stack[-7] = Stack[-1]
0xe45: Pop(1)
0xe46: Stack[-5] = (int) 0
0xe47: PushEmpty(bool)
0xe48: Stack[-1] = (bool) 0
0xe49: Push((int) 5)
0xe4a: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0xe4b: IF (Stack[-1] == 0) GOTO 0xe51; Pop(1)

0xe4c: PushEmpty(bool)
0xe4d: Call2 0xea0

0xe4e: Pop(0)
0xe4f: IF (Stack[-1] == 0) GOTO 0xe51; Pop(1)

0xe50: Stack[-1] = (bool) 1
0xe51: IF (Stack[-1] == 0) GOTO 0xe7b; Pop(1)

0xe52: Pop(0); Push((bool) Stack[-6] == 0)
0xe53: IF (Stack[-1] == 0) GOTO 0xe5b; Pop(1)

0xe54: Push((int) 3)
0xe55: @ Sleep(Stack[-1], Stack[-5])
0xe56: Pop(1)
0xe57: Pop(0); Push((bool) Stack[-4] == 0)
0xe58: IF (Stack[-1] == 0) GOTO 0xe5a; Pop(1)

0xe59: GOTO 0xe7b

0xe5a: GOTO 0xe70

0xe5b: @ irand(Stack[-3], Stack[-6])
0xe5c: Pop(0)
0xe5d: Push((int) 5)
0xe5e: @ irand(Stack[-3], Stack[-1])
0xe5f: Pop(1)
0xe60: Push((int) 0)
0xe61: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0xe62: IF (Stack[-1] == 0) GOTO 0xe64; Pop(1)

0xe63: Stack[-3] = (int) 0
0xe64: Push("all")
0xe65: PushEmpty(string, int)
0xe66: Stack[-1] = Stack[-6]
0xe67: Call2 0xff7

0xe68: Pop(1)
0xe69: @ PlayAnimation(Stack[-2], Stack[-1])
0xe6a: Pop(2)
0xe6b: @ WaitForAnimEnd(Stack[-1])
0xe6c: Pop(0)
0xe6d: Pop(0); Push((bool) Stack[-1] == 0)
0xe6e: IF (Stack[-1] == 0) GOTO 0xe70; Pop(1)

0xe6f: GOTO 0xe7b

0xe70: PushEmpty(bool)
0xe71: Call2 0xe7e

0xe72: Pop(0)
0xe73: Pop(1); Push((bool) Stack[-1] == 0)
0xe74: IF (Stack[-1] == 0) GOTO 0xe76; Pop(1)

0xe75: GOTO 0xe7b

0xe76: @ ResetAAS()
0xe77: Pop(0)
0xe78: Push((int) 1)
0xe79: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0xe7a: GOTO 0xe47

0xe7b: @ ResetAAS()
0xe7c: Pop(0)
0xe7d: Return(); Pop(12)

0xe7e: Stack[-1] = (bool) 1
0xe7f: Return(); Pop(0)

0xe80: @ StopAnimation()
0xe81: Pop(0)
0xe82: @ StopGroup0()
0xe83: Pop(0)
0xe84: Return(); Pop(0)

0xe85: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xe86: @ GetPosition(Stack[-3])
0xe87: Pop(0)
0xe88: @@ GetPosition(Stack[-2])
0xe89: Pop(0)
0xe8a: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0xe8b: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0xe8c: Return(); Pop(6)

0xe8d: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0xe8e: @ GetPosition(Stack[-3])
0xe8f: Pop(0)
0xe90: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0xe91: Push(CvectorIndex(Stack[-2], 0))
0xe92: Push(CvectorIndex(Stack[-3], 2))
0xe93: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0xe94: Pop(2)
0xe95: Stack[-8] = Stack[-1]
0xe96: Return(); Pop(6)

0xe97: PushEmpty(cvector, cvector)
0xe98: @@ GetPosition(Stack[-1])
0xe99: Pop(0)
0xe9a: PushEmpty(bool, cvector)
0xe9b: Stack[-1] = Stack[-3]
0xe9c: Call2 0xe8d

0xe9d: Stack[-6] = Stack[-2]
0xe9e: Pop(2)
0xe9f: Return(); Pop(2)

0xea0: PushEmpty(bool, bool)
0xea1: @ IsLoaded(Stack[-1])
0xea2: Pop(0)
0xea3: Stack[-3] = Stack[-1]
0xea4: Return(); Pop(2)

0xea5: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0xea6: @@ GetPosition(Stack[-8])
0xea7: Pop(0)
0xea8: @@ GetEyesHeight(Stack[-9])
0xea9: Pop(0)
0xeaa: Push(CvectorIndex(Stack[-8], 1))
0xeab: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xeac: CvectorIndex(Stack[-9], 1) = Stack[-1];
0xead: @ GetPosition(Stack[-7])
0xeae: Pop(0)
0xeaf: @ GetEyesHeight(Stack[-9])
0xeb0: Pop(0)
0xeb1: Push(CvectorIndex(Stack[-7], 1))
0xeb2: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xeb3: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xeb4: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xeb5: Push(CvectorIndex(Stack[-6], 1))
0xeb6: Stack[-1] = (int) 0
0xeb7: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xeb8: Pop(0); Push(Stack[-6] | Stack[-6]);
0xeb9: Pop(1); Push(Sqrt(Stack[-1]))
0xeba: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0xebb: Stack[-5] = -Stack[-6]; Pop(0);
0xebc: Pop(0); Push(Stack[-6] * Stack[-19]);
0xebd: PushEmpty(cvector, cvector)
0xebe: Push(CVector(0.0, 1.0, 0.0))
0xebf: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0xec0: Call2 0xfc1

0xec1: Pop(1)
0xec2: Push((int) 25)
0xec3: Pop(2); Push(Stack[-2] * Stack[-1]);
0xec4: Pop(2); Push(Stack[-2] + Stack[-1]);
0xec5: Push(CVector(0.0, 10.0, 0.0))
0xec6: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xec7: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0xec8: @ IsOverrideActive(Stack[-2])
0xec9: Pop(0)
0xeca: Push(Stack[-2])
0xecb: IF (Stack[-1] == 0) GOTO 0xece; Pop(1)

0xecc: Stack[-21] = (bool) 0
0xecd: Return(); Pop(18)

0xece: @ StopWorld()
0xecf: Pop(0)
0xed0: Push((bool) 1)
0xed1: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0xed2: Pop(1)
0xed3: Push(CvectorIndex(Stack[-4], 0))
0xed4: Push(CvectorIndex(Stack[-5], 2))
0xed5: @ Rotate(Stack[-2], Stack[-1])
0xed6: Pop(2)
0xed7: PushEmpty(bool)
0xed8: Call2 0x1017

0xed9: Pop(0)
0xeda: IF (Stack[-1] == 0) GOTO 0xedc; Pop(1)

0xedb: GOTO 0xee4

0xedc: Push("head")
0xedd: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xede: Pop(1)
0xedf: Push(Stack[-1])
0xee0: IF (Stack[-1] == 0) GOTO 0xee4; Pop(1)

0xee1: Push("head")
0xee2: @ LookAsyncCamera(Stack[-1])
0xee3: Pop(1)
0xee4: @ CameraWaitForPlayFinish()
0xee5: Pop(0)
0xee6: @ ResumeWorld()
0xee7: Pop(0)
0xee8: Stack[-21] = (bool) 1
0xee9: Return(); Pop(18)

0xeea: PushEmpty(bool, bool)
0xeeb: Push((bool) 1)
0xeec: @ CameraSwitchToNormal(Stack[-1])
0xeed: Pop(1)
0xeee: PushEmpty(bool)
0xeef: Call2 0x1017

0xef0: Pop(0)
0xef1: IF (Stack[-1] == 0) GOTO 0xef3; Pop(1)

0xef2: GOTO 0xefb

0xef3: Push("head")
0xef4: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xef5: Pop(1)
0xef6: Push(Stack[-1])
0xef7: IF (Stack[-1] == 0) GOTO 0xefb; Pop(1)

0xef8: Push("head")
0xef9: @ UnlookAsync(Stack[-1])
0xefa: Pop(1)
0xefb: Return(); Pop(2)

0xefc: PushEmpty(int, int, int, int)
0xefd: Push("voice_common")
0xefe: @ GetVariable(Stack[-1], Stack[-3])
0xeff: Pop(1)
0xf00: Push(Stack[-2])
0xf01: IF (Stack[-1] == 0) GOTO 0xf22; Pop(1)

0xf02: PushEmpty(bool, object)
0xf03: Stack[-1] = Stack[-7]
0xf04: Call2 0xf36

0xf05: Pop(1)
0xf06: Pop(1); Push((bool) Stack[-1] == 0)
0xf07: IF (Stack[-1] == 0) GOTO 0xf10; Pop(1)

0xf08: PushEmpty(bool, object)
0xf09: Stack[-1] = Stack[-7]
0xf0a: Call2 0xf5b

0xf0b: Pop(1)
0xf0c: Pop(1); Push((bool) Stack[-1] == 0)
0xf0d: IF (Stack[-1] == 0) GOTO 0xf10; Pop(1)

0xf0e: Stack[-6] = (bool) 0
0xf0f: Return(); Pop(4)

0xf10: Push((int) 2)
0xf11: @ irand(Stack[-2], Stack[-1])
0xf12: Pop(1)
0xf13: Push(Stack[-1])
0xf14: IF (Stack[-1] == 0) GOTO 0xf1d; Pop(1)

0xf15: Push("voice_common")
0xf16: Push((int) 1)
0xf17: Pop(1); Push(Stack[-4] + Stack[-1]);
0xf18: Push((int) 3)
0xf19: Pop(2); Push(Stack[-2] % Stack[-1]);
0xf1a: @ SetVariable(Stack[-2], Stack[-1])
0xf1b: Pop(2)
0xf1c: GOTO 0xf21

0xf1d: Push("voice_common")
0xf1e: Push((int) 0)
0xf1f: @ SetVariable(Stack[-2], Stack[-1])
0xf20: Pop(2)
0xf21: GOTO 0xf34

0xf22: PushEmpty(bool, object)
0xf23: Stack[-1] = Stack[-7]
0xf24: Call2 0xf5b

0xf25: Pop(1)
0xf26: Pop(1); Push((bool) Stack[-1] == 0)
0xf27: IF (Stack[-1] == 0) GOTO 0xf30; Pop(1)

0xf28: PushEmpty(bool, object)
0xf29: Stack[-1] = Stack[-7]
0xf2a: Call2 0xf36

0xf2b: Pop(1)
0xf2c: Pop(1); Push((bool) Stack[-1] == 0)
0xf2d: IF (Stack[-1] == 0) GOTO 0xf30; Pop(1)

0xf2e: Stack[-6] = (bool) 0
0xf2f: Return(); Pop(4)

0xf30: Push("voice_common")
0xf31: Push((int) 1)
0xf32: @ SetVariable(Stack[-2], Stack[-1])
0xf33: Pop(2)
0xf34: Stack[-6] = (bool) 1
0xf35: Return(); Pop(4)

0xf36: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xf37: Stack[-5] = "c"
0xf38: Stack[-4] = (int) 0
0xf39: Push((int) 1)
0xf3a: IF (Stack[-1] == 0) GOTO 0xf46; Pop(1)

0xf3b: Push((int) 1)
0xf3c: Pop(1); Push(Stack[-5] + Stack[-1]);
0xf3d: Pop(1); Push(Stack[-6] + Stack[-1]);
0xf3e: @@ HasProperty(Stack[-1], Stack[-4])
0xf3f: Pop(1)
0xf40: Pop(0); Push((bool) Stack[-3] == 0)
0xf41: IF (Stack[-1] == 0) GOTO 0xf43; Pop(1)

0xf42: GOTO 0xf46

0xf43: Push((int) 1)
0xf44: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xf45: GOTO 0xf39

0xf46: Pop(0); Push((bool) Stack[-4] == 0)
0xf47: IF (Stack[-1] == 0) GOTO 0xf4a; Pop(1)

0xf48: Stack[-12] = (bool) 0
0xf49: Return(); Pop(10)

0xf4a: Stack[-2] = (int) 0
0xf4b: Push((int) 1)
0xf4c: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xf4d: IF (Stack[-1] == 0) GOTO 0xf50; Pop(1)

0xf4e: @ irand(Stack[-2], Stack[-4])
0xf4f: Pop(0)
0xf50: Push((int) 1)
0xf51: Pop(1); Push(Stack[-3] + Stack[-1]);
0xf52: Pop(1); Push(Stack[-6] + Stack[-1]);
0xf53: @@ GetProperty(Stack[-1], Stack[-2])
0xf54: Pop(1)
0xf55: PushEmpty(bool, string)
0xf56: Stack[-1] = Stack[-3]
0xf57: Call2 0xfa5

0xf58: Stack[-14] = Stack[-2]
0xf59: Pop(2)
0xf5a: Return(); Pop(10)

0xf5b: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xf5c: Push("d")
0xf5d: PushEmpty(int)
0xf5e: Call2 0xfe8

0xf5f: Pop(0)
0xf60: Pop(2); Push(Stack[-2] + Stack[-1]);
0xf61: Push("m")
0xf62: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0xf63: Stack[-4] = (int) 0
0xf64: Push((int) 1)
0xf65: IF (Stack[-1] == 0) GOTO 0xf71; Pop(1)

0xf66: Push((int) 1)
0xf67: Pop(1); Push(Stack[-5] + Stack[-1]);
0xf68: Pop(1); Push(Stack[-6] + Stack[-1]);
0xf69: @@ HasProperty(Stack[-1], Stack[-4])
0xf6a: Pop(1)
0xf6b: Pop(0); Push((bool) Stack[-3] == 0)
0xf6c: IF (Stack[-1] == 0) GOTO 0xf6e; Pop(1)

0xf6d: GOTO 0xf71

0xf6e: Push((int) 1)
0xf6f: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xf70: GOTO 0xf64

0xf71: Pop(0); Push((bool) Stack[-4] == 0)
0xf72: IF (Stack[-1] == 0) GOTO 0xf75; Pop(1)

0xf73: Stack[-12] = (bool) 0
0xf74: Return(); Pop(10)

0xf75: Stack[-2] = (int) 0
0xf76: Push((int) 1)
0xf77: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xf78: IF (Stack[-1] == 0) GOTO 0xf7b; Pop(1)

0xf79: @ irand(Stack[-2], Stack[-4])
0xf7a: Pop(0)
0xf7b: Push((int) 1)
0xf7c: Pop(1); Push(Stack[-3] + Stack[-1]);
0xf7d: Pop(1); Push(Stack[-6] + Stack[-1]);
0xf7e: @@ GetProperty(Stack[-1], Stack[-2])
0xf7f: Pop(1)
0xf80: PushEmpty(bool, string)
0xf81: Stack[-1] = Stack[-3]
0xf82: Call2 0xfa5

0xf83: Stack[-14] = Stack[-2]
0xf84: Pop(2)
0xf85: Return(); Pop(10)

0xf86: PushEmpty(bool, float, float, bool, float, float)
0xf87: @ lshHasAnimation(Stack[-3], Stack[-7])
0xf88: Pop(0)
0xf89: Push(Stack[-3])
0xf8a: IF (Stack[-1] == 0) GOTO 0xf91; Pop(1)

0xf8b: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0xf8c: Pop(0)
0xf8d: Push((bool) 0)
0xf8e: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xf8f: Pop(1)
0xf90: GOTO 0xf95

0xf91: Push("Can't find lsh animation : ")
0xf92: Pop(1); Push(Stack[-1] + Stack[-8]);
0xf93: @ Trace(Stack[-1])
0xf94: Pop(1)
0xf95: Return(); Pop(6)

0xf96: PushEmpty(bool, float, float, bool, float, float)
0xf97: @ lshHasAnimation(Stack[-3], Stack[-8])
0xf98: Pop(0)
0xf99: Push(Stack[-3])
0xf9a: IF (Stack[-1] == 0) GOTO 0xfa0; Pop(1)

0xf9b: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0xf9c: Pop(0)
0xf9d: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0xf9e: Pop(0)
0xf9f: GOTO 0xfa4

0xfa0: Push("Can't find lsh animation : ")
0xfa1: Pop(1); Push(Stack[-1] + Stack[-9]);
0xfa2: @ Trace(Stack[-1])
0xfa3: Pop(1)
0xfa4: Return(); Pop(6)

0xfa5: PushEmpty(bool, bool)
0xfa6: PushEmpty(bool)
0xfa7: Call2 0x1017

0xfa8: Pop(0)
0xfa9: IF (Stack[-1] == 0) GOTO 0xfb2; Pop(1)

0xfaa: @ lshHasSpeech(Stack[-1], Stack[-3])
0xfab: Pop(0)
0xfac: Push(Stack[-1])
0xfad: IF (Stack[-1] == 0) GOTO 0xfb2; Pop(1)

0xfae: @ lshPlaySpeech(Stack[-3])
0xfaf: Pop(0)
0xfb0: Stack[-4] = (bool) 1
0xfb1: Return(); Pop(2)

0xfb2: Stack[-4] = (bool) 0
0xfb3: Return(); Pop(2)

0xfb4: PushEmpty(bool)
0xfb5: Call2 0x1017

0xfb6: Pop(0)
0xfb7: IF (Stack[-1] == 0) GOTO 0xfba; Pop(1)

0xfb8: @ lshStopSpeech()
0xfb9: Pop(0)
0xfba: Return(); Pop(0)

0xfbb: PushEmpty(object, object)
0xfbc: @ self(Stack[-1])
0xfbd: Pop(0)
0xfbe: Stack[-3] = Stack[-1]
0xfbf: Return(); Pop(2)

0xfc0: Stack[-1] = 0
0xfc1: PushEmpty(float, float)
0xfc2: Pop(0); Push(Stack[-3] | Stack[-3]);
0xfc3: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xfc4: Push((float)0.0)
0xfc5: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xfc6: IF (Stack[-1] == 0) GOTO 0xfc9; Pop(1)

0xfc7: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xfc8: Return(); Pop(2)

0xfc9: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xfca: Return(); Pop(2)

0xfcb: PushEmpty(int, int)
0xfcc: @ GetVariable(Stack[-3], Stack[-1])
0xfcd: Pop(0)
0xfce: Stack[-4] = Stack[-1]
0xfcf: Return(); Pop(2)

0xfd0: PushEmpty(int, bool, int, bool)
0xfd1: @ GetInvItemByName(Stack[-2], Stack[-5])
0xfd2: Pop(0)
0xfd3: @@ HasItem(Stack[-2], Stack[-1])
0xfd4: Pop(0)
0xfd5: Stack[-7] = Stack[-1]
0xfd6: Return(); Pop(4)

0xfd7: PushEmpty(object, object)
0xfd8: @ FindActor(Stack[-1], Stack[-4])
0xfd9: Pop(0)
0xfda: Pop(0); Push((bool) Stack[-1] == 0)
0xfdb: IF (Stack[-1] == 0) GOTO 0xfde; Pop(1)

0xfdc: Stack[-5] = (bool) 0
0xfdd: Return(); Pop(2)

0xfde: @ Trigger(Stack[-1], Stack[-3])
0xfdf: Pop(0)
0xfe0: Stack[-5] = (bool) 1
0xfe1: Return(); Pop(2)

0xfe2: Stack[-1] = 0
0xfe3: PushEmpty(float, float)
0xfe4: @ GetGameTime(Stack[-1])
0xfe5: Pop(0)
0xfe6: Stack[-3] = Stack[-1]
0xfe7: Return(); Pop(2)

0xfe8: PushEmpty(float, float)
0xfe9: @ GetGameTime(Stack[-1])
0xfea: Pop(0)
0xfeb: Push((int) 1)
0xfec: PushEmpty(int)
0xfed: Push((int) 24)
0xfee: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xfef: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xff0: Return(); Pop(2)

0xff1: PushEmpty()
0xff2: PushEmpty(int)
0xff3: Call2 0xfe8

0xff4: Pop(0)
0xff5: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0xff6: Return(); Pop(0)

0xff7: PushEmpty(string, string)
0xff8: Stack[-1] = "idle"
0xff9: Push(Stack[-3])
0xffa: IF (Stack[-1] == 0) GOTO 0xffc; Pop(1)

0xffb: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xffc: Stack[-4] = Stack[-1]
0xffd: Return(); Pop(2)

0xffe: PushEmpty(int, bool, int, bool)
0xfff: Stack[-2] = (int) 0
0x1000: Push("all")
0x1001: PushEmpty(string, int)
0x1002: Stack[-1] = Stack[-5]
0x1003: Call2 0xff7

0x1004: Pop(1)
0x1005: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x1006: Pop(2)
0x1007: Pop(0); Push((bool) Stack[-1] == 0)
0x1008: IF (Stack[-1] == 0) GOTO 0x100a; Pop(1)

0x1009: GOTO 0x100d

0x100a: Push((int) 1)
0x100b: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x100c: GOTO 0x1000

0x100d: Stack[-5] = Stack[-2]
0x100e: Return(); Pop(4)

0x100f: Stack[-1] = (int) 515536
0x1010: Return(); Pop(0)

0x1011: Stack[-1] = (int) 502861
0x1012: Return(); Pop(0)

0x1013: Stack[-1] = "ui/NPC_Han.png"
0x1014: Return(); Pop(0)

0x1015: Stack[-1] = "ui/NPC_Han_b.png"
0x1016: Return(); Pop(0)

0x1017: Stack[-1] = (bool) 1
0x1018: Return(); Pop(0)

0x1019: PushEmpty()
0x101a: Push("ood7Han1")
0x101b: Push((int) 1)
0x101c: @ SetVariable(Stack[-2], Stack[-1])
0x101d: Pop(2)
0x101e: Return(); Pop(0)

0x101f: PushEmpty()
0x1020: Push("d11q05")
0x1021: Push((int) 2)
0x1022: @ SetVariable(Stack[-2], Stack[-1])
0x1023: Pop(2)
0x1024: PushEmpty()
0x1025: Call2 0x114e

0x1026: Pop(0)
0x1027: PushEmpty(bool, string, string)
0x1028: Stack[-2] = "quest_d11_05"
0x1029: Stack[-1] = "place_enemy_before"
0x102a: Call2 0xfd7

0x102b: Pop(3)
0x102c: Return(); Pop(0)

0x102d: PushEmpty()
0x102e: PushEmpty(bool, string, string)
0x102f: Stack[-2] = "quest_d9_01"
0x1030: Stack[-1] = "teleport_to_mnogogrannik"
0x1031: Call2 0xfd7

0x1032: Pop(3)
0x1033: Return(); Pop(0)

0x1034: PushEmpty()
0x1035: PushEmpty(int, string)
0x1036: Stack[-1] = "map_chertez_state"
0x1037: Call2 0xfcb

0x1038: Pop(1)
0x1039: Push((int) 3)
0x103a: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x103b: IF (Stack[-1] == 0) GOTO 0x1044; Pop(1)

0x103c: Push("map_chertez_state")
0x103d: Push((int) 3)
0x103e: @ SetVariable(Stack[-2], Stack[-1])
0x103f: Pop(2)
0x1040: Push("map_chertez_force")
0x1041: Push((int) 1)
0x1042: @ SetVariable(Stack[-2], Stack[-1])
0x1043: Pop(2)
0x1044: Return(); Pop(0)

0x1045: PushEmpty()
0x1046: PushEmpty(object, string, float)
0x1047: PushEmpty(object)
0x1048: Call2 0x11ab

0x1049: Stack[-4] = Stack[-1]
0x104a: Pop(1)
0x104b: Stack[-2] = "pt_map_aglaja"
0x104c: Stack[-1] = (int) -1
0x104d: Call2 0x11bc

0x104e: Pop(3)
0x104f: PushEmpty(object)
0x1050: Call2 0x11ab

0x1051: Pop(0)
0x1052: @@ ShowMap(Stack[-1])
0x1053: Pop(1)
0x1054: Return(); Pop(0)

0x1055: PushEmpty()
0x1056: Push("ood9Xan3")
0x1057: Push((int) 1)
0x1058: @ SetVariable(Stack[-2], Stack[-1])
0x1059: Pop(2)
0x105a: Return(); Pop(0)

0x105b: PushEmpty()
0x105c: Push("playsound")
0x105d: Push("giveitem")
0x105e: @ TriggerWorld(Stack[-2], Stack[-1])
0x105f: Pop(2)
0x1060: Return(); Pop(0)

0x1061: PushEmpty()
0x1062: Return(); Pop(0)

0x1063: PushEmpty(object, object)
0x1064: Push("d3q02")
0x1065: Push((int) 4)
0x1066: @ SetVariable(Stack[-2], Stack[-1])
0x1067: Pop(2)
0x1068: PushEmpty(object)
0x1069: Call2 0x11ab

0x106a: Stack[-2] = Stack[-1]
0x106b: Pop(1)
0x106c: Push("d3q02HanGotoMladVlad")
0x106d: Push("pt_map_mladvlad")
0x106e: Push((int) 0)
0x106f: Push((int) 511386)
0x1070: PushEmpty(float)
0x1071: Call2 0xfe3

0x1072: Pop(0)
0x1073: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1074: Pop(5)
0x1075: PushEmpty()
0x1076: Call2 0x115b

0x1077: Pop(0)
0x1078: Return(); Pop(2)

0x1079: Stack[-1] = 0
0x107a: PushEmpty()
0x107b: Push("ood8Han1")
0x107c: Push((int) 1)
0x107d: @ SetVariable(Stack[-2], Stack[-1])
0x107e: Pop(2)
0x107f: Return(); Pop(0)

0x1080: PushEmpty()
0x1081: Push("ood9Xan1")
0x1082: Push((int) 1)
0x1083: @ SetVariable(Stack[-2], Stack[-1])
0x1084: Pop(2)
0x1085: Return(); Pop(0)

0x1086: PushEmpty()
0x1087: Push("d9q01")
0x1088: Push((int) 2)
0x1089: @ SetVariable(Stack[-2], Stack[-1])
0x108a: Pop(2)
0x108b: PushEmpty()
0x108c: Call2 0x1175

0x108d: Pop(0)
0x108e: Return(); Pop(0)

0x108f: PushEmpty(int, int)
0x1090: Push("Rifle")
0x1091: Push((int) 5)
0x1092: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0x1093: Pop(2)
0x1094: @@ SelectWeapon()
0x1095: Pop(0)
0x1096: Return(); Pop(2)

0x1097: PushEmpty()
0x1098: PushEmpty()
0x1099: Call2 0x1168

0x109a: Pop(0)
0x109b: PushEmpty(bool, string, string)
0x109c: Stack[-2] = "quest_d9_01"
0x109d: Stack[-1] = "completed"
0x109e: Call2 0xfd7

0x109f: Pop(3)
0x10a0: Return(); Pop(0)

0x10a1: PushEmpty()
0x10a2: PushEmpty(int, string)
0x10a3: Stack[-1] = "ood7Han1"
0x10a4: Call2 0xfcb

0x10a5: Pop(1)
0x10a6: Push((int) 0)
0x10a7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x10a8: IF (Stack[-1] == 0) GOTO 0x10ab; Pop(1)

0x10a9: Stack[-2] = (bool) 1
0x10aa: Return(); Pop(0)

0x10ab: Stack[-2] = (bool) 0
0x10ac: Return(); Pop(0)

0x10ad: PushEmpty()
0x10ae: PushEmpty(int, string)
0x10af: Stack[-1] = "d11q05"
0x10b0: Call2 0xfcb

0x10b1: Pop(1)
0x10b2: Push((int) 1)
0x10b3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x10b4: IF (Stack[-1] == 0) GOTO 0x10b7; Pop(1)

0x10b5: Stack[-2] = (bool) 1
0x10b6: Return(); Pop(0)

0x10b7: Stack[-2] = (bool) 0
0x10b8: Return(); Pop(0)

0x10b9: PushEmpty()
0x10ba: PushEmpty(bool, object, string)
0x10bb: Stack[-2] = Stack[-4]
0x10bc: Stack[-1] = "burah_serum"
0x10bd: Call2 0xfd0

0x10be: Pop(2)
0x10bf: IF (Stack[-1] == 0) GOTO 0x10c2; Pop(1)

0x10c0: Stack[-2] = (bool) 1
0x10c1: Return(); Pop(0)

0x10c2: Stack[-2] = (bool) 0
0x10c3: Return(); Pop(0)

0x10c4: PushEmpty()
0x10c5: PushEmpty(int, string)
0x10c6: Stack[-1] = "d9q01"
0x10c7: Call2 0xfcb

0x10c8: Pop(1)
0x10c9: Push((int) 1000)
0x10ca: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x10cb: IF (Stack[-1] == 0) GOTO 0x10ce; Pop(1)

0x10cc: Stack[-2] = (bool) 1
0x10cd: Return(); Pop(0)

0x10ce: Stack[-2] = (bool) 0
0x10cf: Return(); Pop(0)

0x10d0: PushEmpty()
0x10d1: PushEmpty(int, string)
0x10d2: Stack[-1] = "ood9Xan3"
0x10d3: Call2 0xfcb

0x10d4: Pop(1)
0x10d5: Push((int) 0)
0x10d6: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x10d7: IF (Stack[-1] == 0) GOTO 0x10da; Pop(1)

0x10d8: Stack[-2] = (bool) 1
0x10d9: Return(); Pop(0)

0x10da: Stack[-2] = (bool) 0
0x10db: Return(); Pop(0)

0x10dc: PushEmpty()
0x10dd: Stack[-2] = (bool) 1
0x10de: Return(); Pop(0)

0x10df: Stack[-2] = (bool) 0
0x10e0: Return(); Pop(0)

0x10e1: PushEmpty()
0x10e2: PushEmpty(int, string)
0x10e3: Stack[-1] = "d3q02"
0x10e4: Call2 0xfcb

0x10e5: Pop(1)
0x10e6: Push((int) 3)
0x10e7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x10e8: IF (Stack[-1] == 0) GOTO 0x10eb; Pop(1)

0x10e9: Stack[-2] = (bool) 1
0x10ea: Return(); Pop(0)

0x10eb: Stack[-2] = (bool) 0
0x10ec: Return(); Pop(0)

0x10ed: PushEmpty()
0x10ee: PushEmpty(int, string)
0x10ef: Stack[-1] = "ood8Han1"
0x10f0: Call2 0xfcb

0x10f1: Pop(1)
0x10f2: Push((int) 0)
0x10f3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x10f4: IF (Stack[-1] == 0) GOTO 0x10f7; Pop(1)

0x10f5: Stack[-2] = (bool) 1
0x10f6: Return(); Pop(0)

0x10f7: Stack[-2] = (bool) 0
0x10f8: Return(); Pop(0)

0x10f9: PushEmpty()
0x10fa: PushEmpty(int, string)
0x10fb: Stack[-1] = "d9q01"
0x10fc: Call2 0xfcb

0x10fd: Pop(1)
0x10fe: Push((int) 1)
0x10ff: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1100: IF (Stack[-1] == 0) GOTO 0x1103; Pop(1)

0x1101: Stack[-2] = (bool) 1
0x1102: Return(); Pop(0)

0x1103: Stack[-2] = (bool) 0
0x1104: Return(); Pop(0)

0x1105: PushEmpty()
0x1106: PushEmpty(int, string)
0x1107: Stack[-1] = "ood9Xan1"
0x1108: Call2 0xfcb

0x1109: Pop(1)
0x110a: Push((int) 0)
0x110b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x110c: IF (Stack[-1] == 0) GOTO 0x110f; Pop(1)

0x110d: Stack[-2] = (bool) 1
0x110e: Return(); Pop(0)

0x110f: Stack[-2] = (bool) 0
0x1110: Return(); Pop(0)

0x1111: PushEmpty()
0x1112: PushEmpty(int, string)
0x1113: Stack[-1] = "d9q01"
0x1114: Call2 0xfcb

0x1115: Pop(1)
0x1116: Push((int) 2)
0x1117: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1118: IF (Stack[-1] == 0) GOTO 0x111b; Pop(1)

0x1119: Stack[-2] = (bool) 1
0x111a: Return(); Pop(0)

0x111b: Stack[-2] = (bool) 0
0x111c: Return(); Pop(0)

0x111d: PushEmpty()
0x111e: PushEmpty(bool, object)
0x111f: Stack[-1] = Stack[-3]
0x1120: Call2 0x1131

0x1121: Pop(1)
0x1122: IF (Stack[-1] == 0) GOTO 0x1125; Pop(1)

0x1123: Stack[-2] = (bool) 1
0x1124: Return(); Pop(0)

0x1125: Stack[-2] = (bool) 0
0x1126: Return(); Pop(0)

0x1127: PushEmpty()
0x1128: PushEmpty(bool, object)
0x1129: Stack[-1] = Stack[-3]
0x112a: Call2 0x113c

0x112b: Pop(1)
0x112c: IF (Stack[-1] == 0) GOTO 0x112f; Pop(1)

0x112d: Stack[-2] = (bool) 1
0x112e: Return(); Pop(0)

0x112f: Stack[-2] = (bool) 0
0x1130: Return(); Pop(0)

0x1131: PushEmpty(int, int)
0x1132: Push("Rifle")
0x1133: @@ GetItemCountOfType(Stack[-2], Stack[-1])
0x1134: Pop(1)
0x1135: Push((int) 5)
0x1136: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x1137: IF (Stack[-1] == 0) GOTO 0x113a; Pop(1)

0x1138: Stack[-4] = (bool) 1
0x1139: Return(); Pop(2)

0x113a: Stack[-4] = (bool) 0
0x113b: Return(); Pop(2)

0x113c: PushEmpty(int, int)
0x113d: Push("Rifle")
0x113e: @@ GetItemCountOfType(Stack[-2], Stack[-1])
0x113f: Pop(1)
0x1140: PushEmpty(bool)
0x1141: Stack[-1] = (bool) 0
0x1142: Push((int) 0)
0x1143: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x1144: IF (Stack[-1] == 0) GOTO 0x1149; Pop(1)

0x1145: Push((int) 5)
0x1146: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x1147: IF (Stack[-1] == 0) GOTO 0x1149; Pop(1)

0x1148: Stack[-1] = (bool) 1
0x1149: IF (Stack[-1] == 0) GOTO 0x114c; Pop(1)

0x114a: Stack[-4] = (bool) 1
0x114b: Return(); Pop(2)

0x114c: Stack[-4] = (bool) 0
0x114d: Return(); Pop(2)

0x114e: PushEmpty(object, object)
0x114f: Push((int) 684)
0x1150: Push((int) 2)
0x1151: Push((int) 534499)
0x1152: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1153: Pop(3)
0x1154: PushEmpty(bool, object, int)
0x1155: Stack[-2] = Stack[-4]
0x1156: Stack[-1] = (int) 682
0x1157: Call2 0x118f

0x1158: Pop(3)
0x1159: Return(); Pop(2)

0x115a: Stack[-1] = 0
0x115b: PushEmpty(object, object)
0x115c: Push((int) 679)
0x115d: Push((int) 2)
0x115e: Push((int) 534420)
0x115f: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1160: Pop(3)
0x1161: PushEmpty(bool, object, int)
0x1162: Stack[-2] = Stack[-4]
0x1163: Stack[-1] = (int) 26
0x1164: Call2 0x118f

0x1165: Pop(3)
0x1166: Return(); Pop(2)

0x1167: Stack[-1] = 0
0x1168: PushEmpty(object, object)
0x1169: Push((int) 185)
0x116a: Push((int) 1)
0x116b: Push((int) 515448)
0x116c: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x116d: Pop(3)
0x116e: PushEmpty(bool, object, int)
0x116f: Stack[-2] = Stack[-4]
0x1170: Stack[-1] = (int) 182
0x1171: Call2 0x118f

0x1172: Pop(3)
0x1173: Return(); Pop(2)

0x1174: Stack[-1] = 0
0x1175: PushEmpty(object, object)
0x1176: Push((int) 184)
0x1177: Push((int) 1)
0x1178: Push((int) 515447)
0x1179: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x117a: Pop(3)
0x117b: PushEmpty(bool, object, int)
0x117c: Stack[-2] = Stack[-4]
0x117d: Stack[-1] = (int) 182
0x117e: Call2 0x118f

0x117f: Pop(3)
0x1180: Return(); Pop(2)

0x1181: Stack[-1] = 0
0x1182: PushEmpty(object, object)
0x1183: @ GetDiaryRoot(Stack[-1])
0x1184: Pop(0)
0x1185: Pop(0); Push((bool) Stack[-1] == 0)
0x1186: IF (Stack[-1] == 0) GOTO 0x118c; Pop(1)

0x1187: Push("Can't retrieve diary root")
0x1188: @ Trace(Stack[-1])
0x1189: Pop(1)
0x118a: Stack[-3] = (bool) 0
0x118b: Return(); Pop(2)

0x118c: Stack[-3] = Stack[-1]
0x118d: Return(); Pop(2)

0x118e: Stack[-1] = 0
0x118f: PushEmpty(object, object, int, object, object, int)
0x1190: PushEmpty(object)
0x1191: Call2 0x1182

0x1192: Stack[-4] = Stack[-1]
0x1193: Pop(1)
0x1194: @@ Find(Stack[-7], Stack[-2])
0x1195: Pop(0)
0x1196: Pop(0); Push((bool) Stack[-2] == 0)
0x1197: IF (Stack[-1] == 0) GOTO 0x119e; Pop(1)

0x1198: Push("Can't find diary parent with id: ")
0x1199: Pop(1); Push(Stack[-1] + Stack[-8]);
0x119a: @ Trace(Stack[-1])
0x119b: Pop(1)
0x119c: Stack[-9] = (bool) 0
0x119d: Return(); Pop(6)

0x119e: @@ AddChild(Stack[-8])
0x119f: Pop(0)
0x11a0: Push((int) 7)
0x11a1: @ SendWorldWndMessage(Stack[-1])
0x11a2: Pop(1)
0x11a3: @@ GetCategory(Stack[-1])
0x11a4: Pop(0)
0x11a5: @ SetDiarySection(Stack[-1])
0x11a6: Pop(0)
0x11a7: Stack[-9] = (bool) 0
0x11a8: Return(); Pop(6)

0x11a9: Stack[-2] = 0
0x11aa: Stack[-3] = 0
0x11ab: PushEmpty(object, object, object, object)
0x11ac: @ GetMainOutdoorScene(Stack[-2])
0x11ad: Pop(0)
0x11ae: Pop(0); Push((bool) Stack[-2] == 0)
0x11af: IF (Stack[-1] == 0) GOTO 0x11b6; Pop(1)

0x11b0: Push("Can't find main outdoor scene")
0x11b1: @ Trace(Stack[-1])
0x11b2: Pop(1)
0x11b3: Stack[-1] = 0
0x11b4: Stack[-5] = Stack[-1]
0x11b5: Return(); Pop(4)

0x11b6: @@ GetMap(Stack[-1])
0x11b7: Pop(0)
0x11b8: Stack[-5] = Stack[-1]
0x11b9: Return(); Pop(4)

0x11ba: Stack[-1] = 0
0x11bb: Stack[-2] = 0
0x11bc: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x11bd: @ GetMainOutdoorScene(Stack[-2])
0x11be: Pop(0)
0x11bf: Pop(0); Push((bool) Stack[-2] == 0)
0x11c0: IF (Stack[-1] == 0) GOTO 0x11c5; Pop(1)

0x11c1: Push("Can't find main outdoor scene")
0x11c2: @ Trace(Stack[-1])
0x11c3: Pop(1)
0x11c4: Return(); Pop(8)

0x11c5: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x11c6: Pop(0)
0x11c7: Pop(0); Push((bool) Stack[-1] == 0)
0x11c8: IF (Stack[-1] == 0) GOTO 0x11cf; Pop(1)

0x11c9: Push("Warning: outdoor scene locator ")
0x11ca: Pop(1); Push(Stack[-1] + Stack[-11]);
0x11cb: Push(" doesnt exist")
0x11cc: Pop(2); Push(Stack[-2] + Stack[-1]);
0x11cd: @ Trace(Stack[-1])
0x11ce: Pop(1)
0x11cf: @@ GetMap(Stack[-11])
0x11d0: Pop(0)
0x11d1: Pop(0); Push((bool) Stack[-11] == 0)
0x11d2: IF (Stack[-1] == 0) GOTO 0x11d7; Pop(1)

0x11d3: Push("Can't find map")
0x11d4: @ Trace(Stack[-1])
0x11d5: Pop(1)
0x11d6: Return(); Pop(8)

0x11d7: Push(CvectorIndex(Stack[-4], 0))
0x11d8: Push(CvectorIndex(Stack[-5], 2))
0x11d9: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x11da: Pop(2)
0x11db: Return(); Pop(8)

0x11dc: Stack[-2] = 0
0x11dd: PushEmpty(int, int)
0x11de: Push("branch")
0x11df: @ GetVariable(Stack[-1], Stack[-2])
0x11e0: Pop(1)
0x11e1: Push((int) 0)
0x11e2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x11e3: IF (Stack[-1] == 0) GOTO 0x11e7; Pop(1)

0x11e4: Stack[-3] = (int) 1
0x11e5: Return(); Pop(2)

0x11e6: GOTO 0x11ec

0x11e7: Push((int) 1)
0x11e8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x11e9: IF (Stack[-1] == 0) GOTO 0x11ec; Pop(1)

0x11ea: Stack[-3] = (int) 2
0x11eb: Return(); Pop(2)

0x11ec: Stack[-3] = (int) 3
0x11ed: Return(); Pop(2)

0x11ee: PushEmpty(int, int)
0x11ef: Push("mt_han")
0x11f0: @ GetVariable(Stack[-1], Stack[-2])
0x11f1: Pop(1)
0x11f2: Pop(0); Push((bool) Stack[-1] == 0)
0x11f3: IF (Stack[-1] == 0) GOTO 0x11fe; Pop(1)

0x11f4: PushEmpty(int, object)
0x11f5: Stack[-1] = Stack[-5]
0x11f6: Push(-2, 1); TaskCall(8)
0x11f7: Call2 0x87a

0x11f8: Pop(-2, 1); TaskReturn
0x11f9: Pop(2)
0x11fa: Push("mt_han")
0x11fb: Push((int) 1)
0x11fc: @ SetVariable(Stack[-2], Stack[-1])
0x11fd: Pop(2)
0x11fe: PushEmpty(bool, int)
0x11ff: Stack[-1] = (int) 1
0x1200: Call2 0xff1

0x1201: Pop(1)
0x1202: IF (Stack[-1] == 0) GOTO 0x1204; Pop(1)

0x1203: Return(); Pop(2)

0x1204: PushEmpty(bool, int)
0x1205: Stack[-1] = (int) 3
0x1206: Call2 0xff1

0x1207: Pop(1)
0x1208: IF (Stack[-1] == 0) GOTO 0x1210; Pop(1)

0x1209: PushEmpty(int, object)
0x120a: Stack[-1] = Stack[-5]
0x120b: Push(-2, 1); TaskCall(0)
0x120c: Call2 0x0

0x120d: Pop(-2, 1); TaskReturn
0x120e: Pop(2)
0x120f: Return(); Pop(2)

0x1210: PushEmpty(bool, int)
0x1211: Stack[-1] = (int) 7
0x1212: Call2 0xff1

0x1213: Pop(1)
0x1214: IF (Stack[-1] == 0) GOTO 0x121c; Pop(1)

0x1215: PushEmpty(int, object)
0x1216: Stack[-1] = Stack[-5]
0x1217: Push(-2, 1); TaskCall(2)
0x1218: Call2 0x246

0x1219: Pop(-2, 1); TaskReturn
0x121a: Pop(2)
0x121b: Return(); Pop(2)

0x121c: PushEmpty(bool, int)
0x121d: Stack[-1] = (int) 8
0x121e: Call2 0xff1

0x121f: Pop(1)
0x1220: IF (Stack[-1] == 0) GOTO 0x1228; Pop(1)

0x1221: PushEmpty(int, object)
0x1222: Stack[-1] = Stack[-5]
0x1223: Push(-2, 1); TaskCall(4)
0x1224: Call2 0x37f

0x1225: Pop(-2, 1); TaskReturn
0x1226: Pop(2)
0x1227: Return(); Pop(2)

0x1228: PushEmpty(bool, int)
0x1229: Stack[-1] = (int) 9
0x122a: Call2 0xff1

0x122b: Pop(1)
0x122c: IF (Stack[-1] == 0) GOTO 0x1234; Pop(1)

0x122d: PushEmpty(int, object)
0x122e: Stack[-1] = Stack[-5]
0x122f: Push(-2, 1); TaskCall(6)
0x1230: Call2 0x50e

0x1231: Pop(-2, 1); TaskReturn
0x1232: Pop(2)
0x1233: Return(); Pop(2)

0x1234: PushEmpty(bool, int)
0x1235: Stack[-1] = (int) 11
0x1236: Call2 0xff1

0x1237: Pop(1)
0x1238: IF (Stack[-1] == 0) GOTO 0x1240; Pop(1)

0x1239: PushEmpty(int, object)
0x123a: Stack[-1] = Stack[-5]
0x123b: Push(-2, 1); TaskCall(10)
0x123c: Call2 0x985

0x123d: Pop(-2, 1); TaskReturn
0x123e: Pop(2)
0x123f: Return(); Pop(2)

0x1240: PushEmpty(bool, int)
0x1241: Stack[-1] = (int) 12
0x1242: Call2 0xff1

0x1243: Pop(1)
0x1244: IF (Stack[-1] == 0) GOTO 0x124c; Pop(1)

0x1245: PushEmpty(int, object)
0x1246: Stack[-1] = Stack[-5]
0x1247: Push(-2, 1); TaskCall(12)
0x1248: Call2 0xbb7

0x1249: Pop(-2, 1); TaskReturn
0x124a: Pop(2)
0x124b: Return(); Pop(2)

0x124c: PushEmpty(int, object)
0x124d: Stack[-1] = Stack[-5]
0x124e: Push(-2, 1); TaskCall(14)
0x124f: Call2 0xcba

0x1250: Pop(-2, 1); TaskReturn
0x1251: Pop(2)
0x1252: Return(); Pop(2)

