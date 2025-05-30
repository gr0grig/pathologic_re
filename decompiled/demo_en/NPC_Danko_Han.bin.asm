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
	Suspicion
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	Neutral
	Grin
	Doubt
	Questioning
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

RunOp = 0xd58
RunTask = 16

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb4 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x2d8 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x3f8 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x608 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x75a Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x90d Vars = (int, int)
	GTASK_12 Vars = (object) Params = 2
	GTASK_13 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xc23 Vars = (int, int)
	GTASK_14 Vars = (object) Params = 2
	GTASK_15 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xd2e Vars = (int, int)
	GTASK_16 Vars = (cvector) Params = 0
		EVENT_7 Op = 0xda1 Vars = (int)
		EVENT_6 Op = 0xdc7 Vars = ()
		EVENT_5 Op = 0xdd6 Vars = ()
		EVENT_45 Op = 0xde3 Vars = (bool)
		EVENT_0 Op = 0xdef Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0xe78

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0xfe2

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0xfe0

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0xfe4

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0xfe6

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x11ae

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
0x31: Call2 0xf8c

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0xecd

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
0x48: Call2 0xebc

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
0x56: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x57: PushEmpty(string)
0x58: Stack[-1] = "Suspicion"
0x59: Call2 0x9e

0x5a: Pop(1)
0x5b: Push((int) 534481)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: PushEmpty(bool)
0x61: Stack[-1] = (bool) 0
0x62: PushEmpty(bool, object)
0x63: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x64: Call2 0x107e

0x65: Pop(1)
0x66: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x67: PushEmpty(bool, object)
0x68: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x69: Call2 0x108a

0x6a: Pop(1)
0x6b: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x6c: Stack[-1] = (bool) 1
0x6d: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x6e: Push((int) 534482)
0x6f: Push((int) 38410)
0x70: Push((int) 36127)
0x71: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x72: Pop(3)
0x73: Push((int) 534489)
0x74: Push((int) -1)
0x75: Push((int) 36134)
0x76: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x77: Pop(3)
0x78: Push((int) 536587)
0x79: Push((int) -1)
0x7a: Push((int) 38409)
0x7b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c: Pop(3)
0x7d: GOTO 0x80

0x7e: Return(); Pop(0)

0x7f: GOTO 0x55

0x80: PushEmpty(bool)
0x81: Call2 0xfe8

0x82: Pop(0)
0x83: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x84: @ lshWaitForAnimEnd()
0x85: Pop(0)
0x86: Push( Stack[3 + Tasks[-1].StackPointer] )
0x87: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x88: GOTO 0x8e

0x89: PushEmpty(string)
0x8a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8b: Call2 0xf57

0x8c: Pop(1)
0x8d: GOTO 0x84

0x8e: GOTO 0x9d

0x8f: Push("all")
0x90: Push("idle")
0x91: @ PlayAnimation(Stack[-2], Stack[-1])
0x92: Pop(2)
0x93: @ WaitForAnimEnd()
0x94: Pop(0)
0x95: Push( Stack[3 + Tasks[-1].StackPointer] )
0x96: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x97: GOTO 0x9d

0x98: Push("all")
0x99: Push("idle")
0x9a: @ PlayAnimation(Stack[-2], Stack[-1])
0x9b: Pop(2)
0x9c: GOTO 0x93

0x9d: Return(); Pop(0)

0x9e: PushEmpty()
0x9f: PushEmpty(bool)
0xa0: Call2 0xfe8

0xa1: Pop(0)
0xa2: Pop(1); Push((bool) Stack[-1] == 0)
0xa3: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0xa4: Return(); Pop(0)

0xa5: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa6: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa7: Return(); Pop(0)

0xa8: PushEmpty(string, bool)
0xa9: Stack[-2] = Stack[-3]
0xaa: Push("")
0xab: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xac: IF (Stack[-1] == 0) GOTO 0xaf; Pop(1)

0xad: Stack[-1] = (bool) 0
0xae: GOTO 0xb0

0xaf: Stack[-1] = (bool) 1
0xb0: Call2 0xf67

0xb1: Pop(2)
0xb2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb3: Return(); Pop(0)

0xb4: PushEmpty()
0xb5: Push((int) 1)
0xb6: IF (Stack[-1] == 0) GOTO 0x231; Pop(1)

0xb7: PushEmpty()
0xb8: Call2 0xf85

0xb9: Pop(0)
0xba: Push((int) 36133)
0xbb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbc: IF (Stack[-1] == 0) GOTO 0xc2; Pop(1)

0xbd: PushEmpty(object, object)
0xbe: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc0: Call2 0xff0

0xc1: Pop(2)
0xc2: Push((int) 38442)
0xc3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc4: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xc5: PushEmpty(object, object)
0xc6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc8: Call2 0xff0

0xc9: Pop(2)
0xca: Push((int) 41671)
0xcb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcc: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xcd: PushEmpty(object, object)
0xce: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd0: Call2 0xff0

0xd1: Pop(2)
0xd2: Push((int) 36126)
0xd3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd4: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xd5: PushEmpty(string)
0xd6: Stack[-1] = "Suspicion"
0xd7: Call2 0x9e

0xd8: Pop(1)
0xd9: Push((int) 534481)
0xda: @@ SetMessage(Stack[-1])
0xdb: Pop(1)
0xdc: @@ ClearReplies()
0xdd: Pop(0)
0xde: PushEmpty(bool)
0xdf: Stack[-1] = (bool) 0
0xe0: PushEmpty(bool, object)
0xe1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe2: Call2 0x107e

0xe3: Pop(1)
0xe4: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xe5: PushEmpty(bool, object)
0xe6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe7: Call2 0x108a

0xe8: Pop(1)
0xe9: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xea: Stack[-1] = (bool) 1
0xeb: IF (Stack[-1] == 0) GOTO 0xf1; Pop(1)

0xec: Push((int) 534482)
0xed: Push((int) 38410)
0xee: Push((int) 36127)
0xef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf0: Pop(3)
0xf1: Push((int) 534489)
0xf2: Push((int) -1)
0xf3: Push((int) 36134)
0xf4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf5: Pop(3)
0xf6: Push((int) 536587)
0xf7: Push((int) -1)
0xf8: Push((int) 38409)
0xf9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfa: Pop(3)
0xfb: Return(); Pop(0)

0xfc: Push((int) 38410)
0xfd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfe: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0xff: PushEmpty(string)
0x100: Stack[-1] = "Suspicion"
0x101: Call2 0x9e

0x102: Pop(1)
0x103: Push((int) 536588)
0x104: @@ SetMessage(Stack[-1])
0x105: Pop(1)
0x106: @@ ClearReplies()
0x107: Pop(0)
0x108: Push((int) 536589)
0x109: Push((int) 38412)
0x10a: Push((int) 38411)
0x10b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10c: Pop(3)
0x10d: Push((int) 536598)
0x10e: Push((int) 38421)
0x10f: Push((int) 38420)
0x110: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x111: Pop(3)
0x112: Return(); Pop(0)

0x113: Push((int) 38421)
0x114: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x115: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x116: PushEmpty(string)
0x117: Stack[-1] = "Neutral"
0x118: Call2 0x9e

0x119: Pop(1)
0x11a: Push((int) 536599)
0x11b: @@ SetMessage(Stack[-1])
0x11c: Pop(1)
0x11d: @@ ClearReplies()
0x11e: Pop(0)
0x11f: Push((int) 536600)
0x120: Push((int) 36128)
0x121: Push((int) 38422)
0x122: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x123: Pop(3)
0x124: Return(); Pop(0)

0x125: Push((int) 38412)
0x126: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x127: IF (Stack[-1] == 0) GOTO 0x13c; Pop(1)

0x128: PushEmpty(string)
0x129: Stack[-1] = "Grin"
0x12a: Call2 0x9e

0x12b: Pop(1)
0x12c: Push((int) 536590)
0x12d: @@ SetMessage(Stack[-1])
0x12e: Pop(1)
0x12f: @@ ClearReplies()
0x130: Pop(0)
0x131: Push((int) 536591)
0x132: Push((int) 38414)
0x133: Push((int) 38413)
0x134: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x135: Pop(3)
0x136: Push((int) 536601)
0x137: Push((int) 38418)
0x138: Push((int) 38424)
0x139: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13a: Pop(3)
0x13b: Return(); Pop(0)

0x13c: Push((int) 38414)
0x13d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13e: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x13f: PushEmpty(string)
0x140: Stack[-1] = "Grin"
0x141: Call2 0x9e

0x142: Pop(1)
0x143: Push((int) 536592)
0x144: @@ SetMessage(Stack[-1])
0x145: Pop(1)
0x146: @@ ClearReplies()
0x147: Pop(0)
0x148: Push((int) 536595)
0x149: Push((int) 38418)
0x14a: Push((int) 38417)
0x14b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14c: Pop(3)
0x14d: Push((int) 539710)
0x14e: Push((int) 41666)
0x14f: Push((int) 41668)
0x150: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x151: Pop(3)
0x152: Return(); Pop(0)

0x153: Push((int) 38418)
0x154: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x155: IF (Stack[-1] == 0) GOTO 0x16a; Pop(1)

0x156: PushEmpty(string)
0x157: Stack[-1] = "Grin"
0x158: Call2 0x9e

0x159: Pop(1)
0x15a: Push((int) 536596)
0x15b: @@ SetMessage(Stack[-1])
0x15c: Pop(1)
0x15d: @@ ClearReplies()
0x15e: Pop(0)
0x15f: Push((int) 536610)
0x160: Push((int) 38437)
0x161: Push((int) 38436)
0x162: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x163: Pop(3)
0x164: Push((int) 536612)
0x165: Push((int) 38437)
0x166: Push((int) 38438)
0x167: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x168: Pop(3)
0x169: Return(); Pop(0)

0x16a: Push((int) 38437)
0x16b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16c: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x16d: PushEmpty(string)
0x16e: Stack[-1] = "Neutral"
0x16f: Call2 0x9e

0x170: Pop(1)
0x171: Push((int) 536611)
0x172: @@ SetMessage(Stack[-1])
0x173: Pop(1)
0x174: @@ ClearReplies()
0x175: Pop(0)
0x176: Push((int) 536603)
0x177: Push((int) 36130)
0x178: Push((int) 38427)
0x179: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17a: Pop(3)
0x17b: Push((int) 534484)
0x17c: Push((int) 36132)
0x17d: Push((int) 36129)
0x17e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17f: Pop(3)
0x180: Return(); Pop(0)

0x181: Push((int) 36130)
0x182: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x183: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x184: PushEmpty(string)
0x185: Stack[-1] = "Doubt"
0x186: Call2 0x9e

0x187: Pop(1)
0x188: Push((int) 534485)
0x189: @@ SetMessage(Stack[-1])
0x18a: Pop(1)
0x18b: @@ ClearReplies()
0x18c: Pop(0)
0x18d: Push((int) 534486)
0x18e: Push((int) 36132)
0x18f: Push((int) 36131)
0x190: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x191: Pop(3)
0x192: Push((int) 536605)
0x193: Push((int) 41666)
0x194: Push((int) 38430)
0x195: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x196: Pop(3)
0x197: Return(); Pop(0)

0x198: Push((int) 41666)
0x199: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19a: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x19b: PushEmpty(string)
0x19c: Stack[-1] = "Doubt"
0x19d: Call2 0x9e

0x19e: Pop(1)
0x19f: Push((int) 539708)
0x1a0: @@ SetMessage(Stack[-1])
0x1a1: Pop(1)
0x1a2: @@ ClearReplies()
0x1a3: Pop(0)
0x1a4: Push((int) 539709)
0x1a5: Push((int) 38431)
0x1a6: Push((int) 41667)
0x1a7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a8: Pop(3)
0x1a9: Push((int) 536593)
0x1aa: Push((int) 38416)
0x1ab: Push((int) 38415)
0x1ac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ad: Pop(3)
0x1ae: Return(); Pop(0)

0x1af: Push((int) 38416)
0x1b0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b1: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1b2: PushEmpty(string)
0x1b3: Stack[-1] = "Neutral"
0x1b4: Call2 0x9e

0x1b5: Pop(1)
0x1b6: Push((int) 536594)
0x1b7: @@ SetMessage(Stack[-1])
0x1b8: Pop(1)
0x1b9: @@ ClearReplies()
0x1ba: Pop(0)
0x1bb: Push((int) 539711)
0x1bc: Push((int) 36132)
0x1bd: Push((int) 41669)
0x1be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1bf: Pop(3)
0x1c0: Return(); Pop(0)

0x1c1: Push((int) 38431)
0x1c2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c3: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x1c4: PushEmpty(string)
0x1c5: Stack[-1] = "Neutral"
0x1c6: Call2 0x9e

0x1c7: Pop(1)
0x1c8: Push((int) 536606)
0x1c9: @@ SetMessage(Stack[-1])
0x1ca: Pop(1)
0x1cb: @@ ClearReplies()
0x1cc: Pop(0)
0x1cd: Push((int) 536607)
0x1ce: Push((int) 38433)
0x1cf: Push((int) 38432)
0x1d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d1: Pop(3)
0x1d2: Push((int) 539712)
0x1d3: Push((int) -1)
0x1d4: Push((int) 41671)
0x1d5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d6: Pop(3)
0x1d7: Return(); Pop(0)

0x1d8: Push((int) 38433)
0x1d9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1da: IF (Stack[-1] == 0) GOTO 0x1ea; Pop(1)

0x1db: PushEmpty(string)
0x1dc: Stack[-1] = "Neutral"
0x1dd: Call2 0x9e

0x1de: Pop(1)
0x1df: Push((int) 536608)
0x1e0: @@ SetMessage(Stack[-1])
0x1e1: Pop(1)
0x1e2: @@ ClearReplies()
0x1e3: Pop(0)
0x1e4: Push((int) 536609)
0x1e5: Push((int) 36128)
0x1e6: Push((int) 38434)
0x1e7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e8: Pop(3)
0x1e9: Return(); Pop(0)

0x1ea: Push((int) 36132)
0x1eb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ec: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0x1ed: PushEmpty(string)
0x1ee: Stack[-1] = "Doubt"
0x1ef: Call2 0x9e

0x1f0: Pop(1)
0x1f1: Push((int) 534487)
0x1f2: @@ SetMessage(Stack[-1])
0x1f3: Pop(1)
0x1f4: @@ ClearReplies()
0x1f5: Pop(0)
0x1f6: Push((int) 536597)
0x1f7: Push((int) 36128)
0x1f8: Push((int) 38419)
0x1f9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1fa: Pop(3)
0x1fb: Return(); Pop(0)

0x1fc: Push((int) 36128)
0x1fd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1fe: IF (Stack[-1] == 0) GOTO 0x213; Pop(1)

0x1ff: PushEmpty(string)
0x200: Stack[-1] = "Neutral"
0x201: Call2 0x9e

0x202: Pop(1)
0x203: Push((int) 534483)
0x204: @@ SetMessage(Stack[-1])
0x205: Pop(1)
0x206: @@ ClearReplies()
0x207: Pop(0)
0x208: Push((int) 534488)
0x209: Push((int) -1)
0x20a: Push((int) 36133)
0x20b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20c: Pop(3)
0x20d: Push((int) 536613)
0x20e: Push((int) 38441)
0x20f: Push((int) 38440)
0x210: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x211: Pop(3)
0x212: Return(); Pop(0)

0x213: Push((int) 38441)
0x214: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x215: IF (Stack[-1] == 0) GOTO 0x225; Pop(1)

0x216: PushEmpty(string)
0x217: Stack[-1] = "Neutral"
0x218: Call2 0x9e

0x219: Pop(1)
0x21a: Push((int) 536614)
0x21b: @@ SetMessage(Stack[-1])
0x21c: Pop(1)
0x21d: @@ ClearReplies()
0x21e: Pop(0)
0x21f: Push((int) 536615)
0x220: Push((int) -1)
0x221: Push((int) 38442)
0x222: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x223: Pop(3)
0x224: Return(); Pop(0)

0x225: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x226: PushEmpty(bool)
0x227: Call2 0xfe8

0x228: Pop(0)
0x229: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x22a: @ lshStopAnimation()
0x22b: Pop(0)
0x22c: GOTO 0x22f

0x22d: @ StopAnimation()
0x22e: Pop(0)
0x22f: Return(); Pop(0)

0x230: GOTO 0xb5

0x231: Return(); Pop(0)

0x232: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x233: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x234: PushEmpty(bool, object, float)
0x235: Stack[-2] = Stack[-12]
0x236: Stack[-1] = (float) 70.0
0x237: Call2 0xe78

0x238: Pop(2)
0x239: Pop(1); Push((bool) Stack[-1] == 0)
0x23a: IF (Stack[-1] == 0) GOTO 0x23d; Pop(1)

0x23b: Stack[-10] = (int) -2
0x23c: Return(); Pop(8)

0x23d: @ CreateDialog(Stack[-4])
0x23e: Pop(0)
0x23f: PushEmpty(int)
0x240: Call2 0xfe2

0x241: Pop(0)
0x242: @@ SetNPCName(Stack[-1])
0x243: Pop(1)
0x244: PushEmpty(int)
0x245: Call2 0xfe0

0x246: Pop(0)
0x247: @@ SetNPCDescription(Stack[-1])
0x248: Pop(1)
0x249: PushEmpty(string)
0x24a: Call2 0xfe4

0x24b: Pop(0)
0x24c: @@ SetPhoto(Stack[-1])
0x24d: Pop(1)
0x24e: PushEmpty(string)
0x24f: Call2 0xfe6

0x250: Pop(0)
0x251: @@ SetPhoto2(Stack[-1])
0x252: Pop(1)
0x253: PushEmpty(int)
0x254: Call2 0x11ae

0x255: Pop(0)
0x256: @@ SetPlayerName(Stack[-1])
0x257: Pop(1)
0x258: Stack[-2] = (int) -1
0x259: @ IsOverrideActive(Stack[-3])
0x25a: Pop(0)
0x25b: Push(Stack[-3])
0x25c: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x25d: Stack[-10] = (int) -2
0x25e: Return(); Pop(8)

0x25f: @ DoDialog(Stack[-4])
0x260: Pop(0)
0x261: PushEmpty(bool, object)
0x262: PushEmpty(object)
0x263: Call2 0xf8c

0x264: Stack[-2] = Stack[-1]
0x265: Pop(1)
0x266: Call2 0xecd

0x267: Pop(2)
0x268: PushEmpty(object, object)
0x269: Stack[-2] = Stack[-11]
0x26a: Stack[-1] = Stack[-6]
0x26b: Push(-2, 4); TaskCall(3)
0x26c: Call2 0x283

0x26d: Pop(-2, 4); TaskReturn
0x26e: Pop(2)
0x26f: @@ IsDialogEnd(Stack[-1])
0x270: Pop(0)
0x271: Pop(0); Push((bool) Stack[-1] == 0)
0x272: IF (Stack[-1] == 0) GOTO 0x278; Pop(1)

0x273: @ sync()
0x274: Pop(0)
0x275: @@ IsDialogEnd(Stack[-1])
0x276: Pop(0)
0x277: GOTO 0x271

0x278: PushEmpty(object)
0x279: Stack[-1] = Stack[-10]
0x27a: Call2 0xebc

0x27b: Pop(1)
0x27c: @ StopDialog(Stack[-4])
0x27d: Pop(0)
0x27e: @@ GetReturnValue(Stack[-2])
0x27f: Pop(0)
0x280: Stack[-10] = Stack[-2]
0x281: Return(); Pop(8)

0x282: Stack[-4] = 0
0x283: PushEmpty()
0x284: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x285: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x286: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x287: Push((int) 1)
0x288: IF (Stack[-1] == 0) GOTO 0x2a4; Pop(1)

0x289: PushEmpty(string)
0x28a: Stack[-1] = "Neutral"
0x28b: Call2 0x2c2

0x28c: Pop(1)
0x28d: Push((int) 535284)
0x28e: @@ SetMessage(Stack[-1])
0x28f: Pop(1)
0x290: @@ ClearReplies()
0x291: Pop(0)
0x292: Push((int) 535285)
0x293: Push((int) 36962)
0x294: Push((int) 36961)
0x295: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x296: Pop(3)
0x297: Push((int) 535292)
0x298: Push((int) -1)
0x299: Push((int) 36968)
0x29a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x29b: Pop(3)
0x29c: Push((int) 535293)
0x29d: Push((int) -1)
0x29e: Push((int) 36969)
0x29f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a0: Pop(3)
0x2a1: GOTO 0x2a4

0x2a2: Return(); Pop(0)

0x2a3: GOTO 0x287

0x2a4: PushEmpty(bool)
0x2a5: Call2 0xfe8

0x2a6: Pop(0)
0x2a7: IF (Stack[-1] == 0) GOTO 0x2b3; Pop(1)

0x2a8: @ lshWaitForAnimEnd()
0x2a9: Pop(0)
0x2aa: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2ab: IF (Stack[-1] == 0) GOTO 0x2ad; Pop(1)

0x2ac: GOTO 0x2b2

0x2ad: PushEmpty(string)
0x2ae: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x2af: Call2 0xf57

0x2b0: Pop(1)
0x2b1: GOTO 0x2a8

0x2b2: GOTO 0x2c1

0x2b3: Push("all")
0x2b4: Push("idle")
0x2b5: @ PlayAnimation(Stack[-2], Stack[-1])
0x2b6: Pop(2)
0x2b7: @ WaitForAnimEnd()
0x2b8: Pop(0)
0x2b9: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2ba: IF (Stack[-1] == 0) GOTO 0x2bc; Pop(1)

0x2bb: GOTO 0x2c1

0x2bc: Push("all")
0x2bd: Push("idle")
0x2be: @ PlayAnimation(Stack[-2], Stack[-1])
0x2bf: Pop(2)
0x2c0: GOTO 0x2b7

0x2c1: Return(); Pop(0)

0x2c2: PushEmpty()
0x2c3: PushEmpty(bool)
0x2c4: Call2 0xfe8

0x2c5: Pop(0)
0x2c6: Pop(1); Push((bool) Stack[-1] == 0)
0x2c7: IF (Stack[-1] == 0) GOTO 0x2c9; Pop(1)

0x2c8: Return(); Pop(0)

0x2c9: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x2ca: IF (Stack[-1] == 0) GOTO 0x2cc; Pop(1)

0x2cb: Return(); Pop(0)

0x2cc: PushEmpty(string, bool)
0x2cd: Stack[-2] = Stack[-3]
0x2ce: Push("")
0x2cf: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2d0: IF (Stack[-1] == 0) GOTO 0x2d3; Pop(1)

0x2d1: Stack[-1] = (bool) 0
0x2d2: GOTO 0x2d4

0x2d3: Stack[-1] = (bool) 1
0x2d4: Call2 0xf67

0x2d5: Pop(2)
0x2d6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x2d7: Return(); Pop(0)

0x2d8: PushEmpty()
0x2d9: Push((int) 1)
0x2da: IF (Stack[-1] == 0) GOTO 0x334; Pop(1)

0x2db: PushEmpty()
0x2dc: Call2 0xf85

0x2dd: Pop(0)
0x2de: Push((int) 36960)
0x2df: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2e0: IF (Stack[-1] == 0) GOTO 0x2fa; Pop(1)

0x2e1: PushEmpty(string)
0x2e2: Stack[-1] = "Neutral"
0x2e3: Call2 0x2c2

0x2e4: Pop(1)
0x2e5: Push((int) 535284)
0x2e6: @@ SetMessage(Stack[-1])
0x2e7: Pop(1)
0x2e8: @@ ClearReplies()
0x2e9: Pop(0)
0x2ea: Push((int) 535285)
0x2eb: Push((int) 36962)
0x2ec: Push((int) 36961)
0x2ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ee: Pop(3)
0x2ef: Push((int) 535292)
0x2f0: Push((int) -1)
0x2f1: Push((int) 36968)
0x2f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f3: Pop(3)
0x2f4: Push((int) 535293)
0x2f5: Push((int) -1)
0x2f6: Push((int) 36969)
0x2f7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f8: Pop(3)
0x2f9: Return(); Pop(0)

0x2fa: Push((int) 36962)
0x2fb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2fc: IF (Stack[-1] == 0) GOTO 0x311; Pop(1)

0x2fd: PushEmpty(string)
0x2fe: Stack[-1] = "Neutral"
0x2ff: Call2 0x2c2

0x300: Pop(1)
0x301: Push((int) 535286)
0x302: @@ SetMessage(Stack[-1])
0x303: Pop(1)
0x304: @@ ClearReplies()
0x305: Pop(0)
0x306: Push((int) 535287)
0x307: Push((int) 36964)
0x308: Push((int) 36963)
0x309: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x30a: Pop(3)
0x30b: Push((int) 535291)
0x30c: Push((int) -1)
0x30d: Push((int) 36967)
0x30e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x30f: Pop(3)
0x310: Return(); Pop(0)

0x311: Push((int) 36964)
0x312: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x313: IF (Stack[-1] == 0) GOTO 0x328; Pop(1)

0x314: PushEmpty(string)
0x315: Stack[-1] = "Neutral"
0x316: Call2 0x2c2

0x317: Pop(1)
0x318: Push((int) 535288)
0x319: @@ SetMessage(Stack[-1])
0x31a: Pop(1)
0x31b: @@ ClearReplies()
0x31c: Pop(0)
0x31d: Push((int) 535289)
0x31e: Push((int) -1)
0x31f: Push((int) 36965)
0x320: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x321: Pop(3)
0x322: Push((int) 535290)
0x323: Push((int) -1)
0x324: Push((int) 36966)
0x325: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x326: Pop(3)
0x327: Return(); Pop(0)

0x328: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x329: PushEmpty(bool)
0x32a: Call2 0xfe8

0x32b: Pop(0)
0x32c: IF (Stack[-1] == 0) GOTO 0x330; Pop(1)

0x32d: @ lshStopAnimation()
0x32e: Pop(0)
0x32f: GOTO 0x332

0x330: @ StopAnimation()
0x331: Pop(0)
0x332: Return(); Pop(0)

0x333: GOTO 0x2d9

0x334: Return(); Pop(0)

0x335: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x336: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x337: PushEmpty(bool, object, float)
0x338: Stack[-2] = Stack[-12]
0x339: Stack[-1] = (float) 70.0
0x33a: Call2 0xe78

0x33b: Pop(2)
0x33c: Pop(1); Push((bool) Stack[-1] == 0)
0x33d: IF (Stack[-1] == 0) GOTO 0x340; Pop(1)

0x33e: Stack[-10] = (int) -2
0x33f: Return(); Pop(8)

0x340: @ CreateDialog(Stack[-4])
0x341: Pop(0)
0x342: PushEmpty(int)
0x343: Call2 0xfe2

0x344: Pop(0)
0x345: @@ SetNPCName(Stack[-1])
0x346: Pop(1)
0x347: PushEmpty(int)
0x348: Call2 0xfe0

0x349: Pop(0)
0x34a: @@ SetNPCDescription(Stack[-1])
0x34b: Pop(1)
0x34c: PushEmpty(string)
0x34d: Call2 0xfe4

0x34e: Pop(0)
0x34f: @@ SetPhoto(Stack[-1])
0x350: Pop(1)
0x351: PushEmpty(string)
0x352: Call2 0xfe6

0x353: Pop(0)
0x354: @@ SetPhoto2(Stack[-1])
0x355: Pop(1)
0x356: PushEmpty(int)
0x357: Call2 0x11ae

0x358: Pop(0)
0x359: @@ SetPlayerName(Stack[-1])
0x35a: Pop(1)
0x35b: Stack[-2] = (int) -1
0x35c: @ IsOverrideActive(Stack[-3])
0x35d: Pop(0)
0x35e: Push(Stack[-3])
0x35f: IF (Stack[-1] == 0) GOTO 0x362; Pop(1)

0x360: Stack[-10] = (int) -2
0x361: Return(); Pop(8)

0x362: @ DoDialog(Stack[-4])
0x363: Pop(0)
0x364: PushEmpty(bool, object)
0x365: PushEmpty(object)
0x366: Call2 0xf8c

0x367: Stack[-2] = Stack[-1]
0x368: Pop(1)
0x369: Call2 0xecd

0x36a: Pop(2)
0x36b: PushEmpty(object, object)
0x36c: Stack[-2] = Stack[-11]
0x36d: Stack[-1] = Stack[-6]
0x36e: Push(-2, 4); TaskCall(5)
0x36f: Call2 0x386

0x370: Pop(-2, 4); TaskReturn
0x371: Pop(2)
0x372: @@ IsDialogEnd(Stack[-1])
0x373: Pop(0)
0x374: Pop(0); Push((bool) Stack[-1] == 0)
0x375: IF (Stack[-1] == 0) GOTO 0x37b; Pop(1)

0x376: @ sync()
0x377: Pop(0)
0x378: @@ IsDialogEnd(Stack[-1])
0x379: Pop(0)
0x37a: GOTO 0x374

0x37b: PushEmpty(object)
0x37c: Stack[-1] = Stack[-10]
0x37d: Call2 0xebc

0x37e: Pop(1)
0x37f: @ StopDialog(Stack[-4])
0x380: Pop(0)
0x381: @@ GetReturnValue(Stack[-2])
0x382: Pop(0)
0x383: Stack[-10] = Stack[-2]
0x384: Return(); Pop(8)

0x385: Stack[-4] = 0
0x386: PushEmpty()
0x387: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x388: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x389: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x38a: Push((int) 1)
0x38b: IF (Stack[-1] == 0) GOTO 0x3c4; Pop(1)

0x38c: PushEmpty(bool)
0x38d: Stack[-1] = (bool) 0
0x38e: PushEmpty(bool, object)
0x38f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x390: Call2 0x10b2

0x391: Pop(1)
0x392: IF (Stack[-1] == 0) GOTO 0x399; Pop(1)

0x393: PushEmpty(bool, object)
0x394: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x395: Call2 0x10ad

0x396: Pop(1)
0x397: IF (Stack[-1] == 0) GOTO 0x399; Pop(1)

0x398: Stack[-1] = (bool) 1
0x399: IF (Stack[-1] == 0) GOTO 0x3ae; Pop(1)

0x39a: PushEmpty(object, object)
0x39b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x39c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x39d: Call2 0x1032

0x39e: Pop(2)
0x39f: PushEmpty(string)
0x3a0: Stack[-1] = "Questioning"
0x3a1: Call2 0x3e2

0x3a2: Pop(1)
0x3a3: Push((int) 510420)
0x3a4: @@ SetMessage(Stack[-1])
0x3a5: Pop(1)
0x3a6: @@ ClearReplies()
0x3a7: Pop(0)
0x3a8: Push((int) 510421)
0x3a9: Push((int) 11490)
0x3aa: Push((int) 11489)
0x3ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ac: Pop(3)
0x3ad: GOTO 0x3c4

0x3ae: PushEmpty(string)
0x3af: Stack[-1] = "Neutral"
0x3b0: Call2 0x3e2

0x3b1: Pop(1)
0x3b2: Push((int) 534418)
0x3b3: @@ SetMessage(Stack[-1])
0x3b4: Pop(1)
0x3b5: @@ ClearReplies()
0x3b6: Pop(0)
0x3b7: Push((int) 534419)
0x3b8: Push((int) -1)
0x3b9: Push((int) 36046)
0x3ba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3bb: Pop(3)
0x3bc: Push((int) 536096)
0x3bd: Push((int) -1)
0x3be: Push((int) 37848)
0x3bf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c0: Pop(3)
0x3c1: GOTO 0x3c4

0x3c2: Return(); Pop(0)

0x3c3: GOTO 0x38a

0x3c4: PushEmpty(bool)
0x3c5: Call2 0xfe8

0x3c6: Pop(0)
0x3c7: IF (Stack[-1] == 0) GOTO 0x3d3; Pop(1)

0x3c8: @ lshWaitForAnimEnd()
0x3c9: Pop(0)
0x3ca: Push( Stack[3 + Tasks[-1].StackPointer] )
0x3cb: IF (Stack[-1] == 0) GOTO 0x3cd; Pop(1)

0x3cc: GOTO 0x3d2

0x3cd: PushEmpty(string)
0x3ce: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x3cf: Call2 0xf57

0x3d0: Pop(1)
0x3d1: GOTO 0x3c8

0x3d2: GOTO 0x3e1

0x3d3: Push("all")
0x3d4: Push("idle")
0x3d5: @ PlayAnimation(Stack[-2], Stack[-1])
0x3d6: Pop(2)
0x3d7: @ WaitForAnimEnd()
0x3d8: Pop(0)
0x3d9: Push( Stack[3 + Tasks[-1].StackPointer] )
0x3da: IF (Stack[-1] == 0) GOTO 0x3dc; Pop(1)

0x3db: GOTO 0x3e1

0x3dc: Push("all")
0x3dd: Push("idle")
0x3de: @ PlayAnimation(Stack[-2], Stack[-1])
0x3df: Pop(2)
0x3e0: GOTO 0x3d7

0x3e1: Return(); Pop(0)

0x3e2: PushEmpty()
0x3e3: PushEmpty(bool)
0x3e4: Call2 0xfe8

0x3e5: Pop(0)
0x3e6: Pop(1); Push((bool) Stack[-1] == 0)
0x3e7: IF (Stack[-1] == 0) GOTO 0x3e9; Pop(1)

0x3e8: Return(); Pop(0)

0x3e9: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x3ea: IF (Stack[-1] == 0) GOTO 0x3ec; Pop(1)

0x3eb: Return(); Pop(0)

0x3ec: PushEmpty(string, bool)
0x3ed: Stack[-2] = Stack[-3]
0x3ee: Push("")
0x3ef: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x3f0: IF (Stack[-1] == 0) GOTO 0x3f3; Pop(1)

0x3f1: Stack[-1] = (bool) 0
0x3f2: GOTO 0x3f4

0x3f3: Stack[-1] = (bool) 1
0x3f4: Call2 0xf67

0x3f5: Pop(2)
0x3f6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x3f7: Return(); Pop(0)

0x3f8: PushEmpty()
0x3f9: Push((int) 1)
0x3fa: IF (Stack[-1] == 0) GOTO 0x561; Pop(1)

0x3fb: PushEmpty()
0x3fc: Call2 0xf85

0x3fd: Pop(0)
0x3fe: Push((int) 11509)
0x3ff: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x400: IF (Stack[-1] == 0) GOTO 0x406; Pop(1)

0x401: PushEmpty(object, object)
0x402: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x403: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x404: Call2 0x1034

0x405: Pop(2)
0x406: Push((int) 11510)
0x407: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x408: IF (Stack[-1] == 0) GOTO 0x40e; Pop(1)

0x409: PushEmpty(object, object)
0x40a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x40b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x40c: Call2 0x1034

0x40d: Pop(2)
0x40e: Push((int) 11505)
0x40f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x410: IF (Stack[-1] == 0) GOTO 0x416; Pop(1)

0x411: PushEmpty(object, object)
0x412: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x413: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x414: Call2 0x1034

0x415: Pop(2)
0x416: Push((int) 11498)
0x417: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x418: IF (Stack[-1] == 0) GOTO 0x41e; Pop(1)

0x419: PushEmpty(object, object)
0x41a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x41b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x41c: Call2 0x1034

0x41d: Pop(2)
0x41e: Push((int) 11488)
0x41f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x420: IF (Stack[-1] == 0) GOTO 0x457; Pop(1)

0x421: PushEmpty(bool)
0x422: Stack[-1] = (bool) 0
0x423: PushEmpty(bool, object)
0x424: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x425: Call2 0x10b2

0x426: Pop(1)
0x427: IF (Stack[-1] == 0) GOTO 0x42e; Pop(1)

0x428: PushEmpty(bool, object)
0x429: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x42a: Call2 0x10ad

0x42b: Pop(1)
0x42c: IF (Stack[-1] == 0) GOTO 0x42e; Pop(1)

0x42d: Stack[-1] = (bool) 1
0x42e: IF (Stack[-1] == 0) GOTO 0x443; Pop(1)

0x42f: PushEmpty(object, object)
0x430: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x431: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x432: Call2 0x1032

0x433: Pop(2)
0x434: PushEmpty(string)
0x435: Stack[-1] = "Questioning"
0x436: Call2 0x3e2

0x437: Pop(1)
0x438: Push((int) 510420)
0x439: @@ SetMessage(Stack[-1])
0x43a: Pop(1)
0x43b: @@ ClearReplies()
0x43c: Pop(0)
0x43d: Push((int) 510421)
0x43e: Push((int) 11490)
0x43f: Push((int) 11489)
0x440: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x441: Pop(3)
0x442: Return(); Pop(0)

0x443: PushEmpty(string)
0x444: Stack[-1] = "Neutral"
0x445: Call2 0x3e2

0x446: Pop(1)
0x447: Push((int) 534418)
0x448: @@ SetMessage(Stack[-1])
0x449: Pop(1)
0x44a: @@ ClearReplies()
0x44b: Pop(0)
0x44c: Push((int) 534419)
0x44d: Push((int) -1)
0x44e: Push((int) 36046)
0x44f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x450: Pop(3)
0x451: Push((int) 536096)
0x452: Push((int) -1)
0x453: Push((int) 37848)
0x454: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x455: Pop(3)
0x456: Return(); Pop(0)

0x457: Push((int) 36001)
0x458: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x459: IF (Stack[-1] == 0) GOTO 0x45a; Pop(1)

0x45a: Push((int) 36003)
0x45b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x45c: IF (Stack[-1] == 0) GOTO 0x471; Pop(1)

0x45d: PushEmpty(string)
0x45e: Stack[-1] = "Questioning"
0x45f: Call2 0x3e2

0x460: Pop(1)
0x461: Push((int) 534388)
0x462: @@ SetMessage(Stack[-1])
0x463: Pop(1)
0x464: @@ ClearReplies()
0x465: Pop(0)
0x466: Push((int) 534389)
0x467: Push((int) 36006)
0x468: Push((int) 36004)
0x469: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x46a: Pop(3)
0x46b: Push((int) 534390)
0x46c: Push((int) 36006)
0x46d: Push((int) 36005)
0x46e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x46f: Pop(3)
0x470: Return(); Pop(0)

0x471: Push((int) 36006)
0x472: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x473: IF (Stack[-1] == 0) GOTO 0x488; Pop(1)

0x474: PushEmpty(string)
0x475: Stack[-1] = "Questioning"
0x476: Call2 0x3e2

0x477: Pop(1)
0x478: Push((int) 534391)
0x479: @@ SetMessage(Stack[-1])
0x47a: Pop(1)
0x47b: @@ ClearReplies()
0x47c: Pop(0)
0x47d: Push((int) 534392)
0x47e: Push((int) 36009)
0x47f: Push((int) 36007)
0x480: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x481: Pop(3)
0x482: Push((int) 534393)
0x483: Push((int) 36009)
0x484: Push((int) 36008)
0x485: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x486: Pop(3)
0x487: Return(); Pop(0)

0x488: Push((int) 36009)
0x489: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x48a: IF (Stack[-1] == 0) GOTO 0x49a; Pop(1)

0x48b: PushEmpty(string)
0x48c: Stack[-1] = "Suspicion"
0x48d: Call2 0x3e2

0x48e: Pop(1)
0x48f: Push((int) 534394)
0x490: @@ SetMessage(Stack[-1])
0x491: Pop(1)
0x492: @@ ClearReplies()
0x493: Pop(0)
0x494: Push((int) 534395)
0x495: Push((int) 36013)
0x496: Push((int) 36012)
0x497: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x498: Pop(3)
0x499: Return(); Pop(0)

0x49a: Push((int) 36013)
0x49b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x49c: IF (Stack[-1] == 0) GOTO 0x4ac; Pop(1)

0x49d: PushEmpty(string)
0x49e: Stack[-1] = "Neutral"
0x49f: Call2 0x3e2

0x4a0: Pop(1)
0x4a1: Push((int) 534396)
0x4a2: @@ SetMessage(Stack[-1])
0x4a3: Pop(1)
0x4a4: @@ ClearReplies()
0x4a5: Pop(0)
0x4a6: Push((int) 534397)
0x4a7: Push((int) 11492)
0x4a8: Push((int) 36014)
0x4a9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4aa: Pop(3)
0x4ab: Return(); Pop(0)

0x4ac: Push((int) 11490)
0x4ad: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4ae: IF (Stack[-1] == 0) GOTO 0x4c3; Pop(1)

0x4af: PushEmpty(string)
0x4b0: Stack[-1] = "Doubt"
0x4b1: Call2 0x3e2

0x4b2: Pop(1)
0x4b3: Push((int) 510422)
0x4b4: @@ SetMessage(Stack[-1])
0x4b5: Pop(1)
0x4b6: @@ ClearReplies()
0x4b7: Pop(0)
0x4b8: Push((int) 510423)
0x4b9: Push((int) 11492)
0x4ba: Push((int) 11491)
0x4bb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4bc: Pop(3)
0x4bd: Push((int) 534385)
0x4be: Push((int) 11502)
0x4bf: Push((int) 36000)
0x4c0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4c1: Pop(3)
0x4c2: Return(); Pop(0)

0x4c3: Push((int) 11492)
0x4c4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4c5: IF (Stack[-1] == 0) GOTO 0x4d5; Pop(1)

0x4c6: PushEmpty(string)
0x4c7: Stack[-1] = "Doubt"
0x4c8: Call2 0x3e2

0x4c9: Pop(1)
0x4ca: Push((int) 510424)
0x4cb: @@ SetMessage(Stack[-1])
0x4cc: Pop(1)
0x4cd: @@ ClearReplies()
0x4ce: Pop(0)
0x4cf: Push((int) 510425)
0x4d0: Push((int) 11494)
0x4d1: Push((int) 11493)
0x4d2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4d3: Pop(3)
0x4d4: Return(); Pop(0)

0x4d5: Push((int) 11494)
0x4d6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4d7: IF (Stack[-1] == 0) GOTO 0x4e7; Pop(1)

0x4d8: PushEmpty(string)
0x4d9: Stack[-1] = "Grin"
0x4da: Call2 0x3e2

0x4db: Pop(1)
0x4dc: Push((int) 510426)
0x4dd: @@ SetMessage(Stack[-1])
0x4de: Pop(1)
0x4df: @@ ClearReplies()
0x4e0: Pop(0)
0x4e1: Push((int) 510427)
0x4e2: Push((int) 11496)
0x4e3: Push((int) 11495)
0x4e4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4e5: Pop(3)
0x4e6: Return(); Pop(0)

0x4e7: Push((int) 11496)
0x4e8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4e9: IF (Stack[-1] == 0) GOTO 0x4fe; Pop(1)

0x4ea: PushEmpty(string)
0x4eb: Stack[-1] = "Questioning"
0x4ec: Call2 0x3e2

0x4ed: Pop(1)
0x4ee: Push((int) 510428)
0x4ef: @@ SetMessage(Stack[-1])
0x4f0: Pop(1)
0x4f1: @@ ClearReplies()
0x4f2: Pop(0)
0x4f3: Push((int) 510429)
0x4f4: Push((int) 11499)
0x4f5: Push((int) 11497)
0x4f6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4f7: Pop(3)
0x4f8: Push((int) 510430)
0x4f9: Push((int) -1)
0x4fa: Push((int) 11498)
0x4fb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4fc: Pop(3)
0x4fd: Return(); Pop(0)

0x4fe: Push((int) 11499)
0x4ff: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x500: IF (Stack[-1] == 0) GOTO 0x515; Pop(1)

0x501: PushEmpty(string)
0x502: Stack[-1] = "Suspicion"
0x503: Call2 0x3e2

0x504: Pop(1)
0x505: Push((int) 510431)
0x506: @@ SetMessage(Stack[-1])
0x507: Pop(1)
0x508: @@ ClearReplies()
0x509: Pop(0)
0x50a: Push((int) 510432)
0x50b: Push((int) 11502)
0x50c: Push((int) 11500)
0x50d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x50e: Pop(3)
0x50f: Push((int) 510433)
0x510: Push((int) 11502)
0x511: Push((int) 11501)
0x512: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x513: Pop(3)
0x514: Return(); Pop(0)

0x515: Push((int) 11502)
0x516: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x517: IF (Stack[-1] == 0) GOTO 0x52c; Pop(1)

0x518: PushEmpty(string)
0x519: Stack[-1] = "Suspicion"
0x51a: Call2 0x3e2

0x51b: Pop(1)
0x51c: Push((int) 510434)
0x51d: @@ SetMessage(Stack[-1])
0x51e: Pop(1)
0x51f: @@ ClearReplies()
0x520: Pop(0)
0x521: Push((int) 510435)
0x522: Push((int) 11504)
0x523: Push((int) 11503)
0x524: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x525: Pop(3)
0x526: Push((int) 510437)
0x527: Push((int) -1)
0x528: Push((int) 11505)
0x529: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x52a: Pop(3)
0x52b: Return(); Pop(0)

0x52c: Push((int) 11504)
0x52d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x52e: IF (Stack[-1] == 0) GOTO 0x53e; Pop(1)

0x52f: PushEmpty(string)
0x530: Stack[-1] = "Neutral"
0x531: Call2 0x3e2

0x532: Pop(1)
0x533: Push((int) 510436)
0x534: @@ SetMessage(Stack[-1])
0x535: Pop(1)
0x536: @@ ClearReplies()
0x537: Pop(0)
0x538: Push((int) 510438)
0x539: Push((int) 11508)
0x53a: Push((int) 11507)
0x53b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x53c: Pop(3)
0x53d: Return(); Pop(0)

0x53e: Push((int) 11508)
0x53f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x540: IF (Stack[-1] == 0) GOTO 0x555; Pop(1)

0x541: PushEmpty(string)
0x542: Stack[-1] = "Neutral"
0x543: Call2 0x3e2

0x544: Pop(1)
0x545: Push((int) 510439)
0x546: @@ SetMessage(Stack[-1])
0x547: Pop(1)
0x548: @@ ClearReplies()
0x549: Pop(0)
0x54a: Push((int) 510440)
0x54b: Push((int) -1)
0x54c: Push((int) 11509)
0x54d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x54e: Pop(3)
0x54f: Push((int) 510441)
0x550: Push((int) -1)
0x551: Push((int) 11510)
0x552: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x553: Pop(3)
0x554: Return(); Pop(0)

0x555: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x556: PushEmpty(bool)
0x557: Call2 0xfe8

0x558: Pop(0)
0x559: IF (Stack[-1] == 0) GOTO 0x55d; Pop(1)

0x55a: @ lshStopAnimation()
0x55b: Pop(0)
0x55c: GOTO 0x55f

0x55d: @ StopAnimation()
0x55e: Pop(0)
0x55f: Return(); Pop(0)

0x560: GOTO 0x3f9

0x561: Return(); Pop(0)

0x562: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x563: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x564: PushEmpty(bool, object, float)
0x565: Stack[-2] = Stack[-12]
0x566: Stack[-1] = (float) 70.0
0x567: Call2 0xe78

0x568: Pop(2)
0x569: Pop(1); Push((bool) Stack[-1] == 0)
0x56a: IF (Stack[-1] == 0) GOTO 0x56d; Pop(1)

0x56b: Stack[-10] = (int) -2
0x56c: Return(); Pop(8)

0x56d: @ CreateDialog(Stack[-4])
0x56e: Pop(0)
0x56f: PushEmpty(int)
0x570: Call2 0xfe2

0x571: Pop(0)
0x572: @@ SetNPCName(Stack[-1])
0x573: Pop(1)
0x574: PushEmpty(int)
0x575: Call2 0xfe0

0x576: Pop(0)
0x577: @@ SetNPCDescription(Stack[-1])
0x578: Pop(1)
0x579: PushEmpty(string)
0x57a: Call2 0xfe4

0x57b: Pop(0)
0x57c: @@ SetPhoto(Stack[-1])
0x57d: Pop(1)
0x57e: PushEmpty(string)
0x57f: Call2 0xfe6

0x580: Pop(0)
0x581: @@ SetPhoto2(Stack[-1])
0x582: Pop(1)
0x583: PushEmpty(int)
0x584: Call2 0x11ae

0x585: Pop(0)
0x586: @@ SetPlayerName(Stack[-1])
0x587: Pop(1)
0x588: Stack[-2] = (int) -1
0x589: @ IsOverrideActive(Stack[-3])
0x58a: Pop(0)
0x58b: Push(Stack[-3])
0x58c: IF (Stack[-1] == 0) GOTO 0x58f; Pop(1)

0x58d: Stack[-10] = (int) -2
0x58e: Return(); Pop(8)

0x58f: @ DoDialog(Stack[-4])
0x590: Pop(0)
0x591: PushEmpty(bool, object)
0x592: PushEmpty(object)
0x593: Call2 0xf8c

0x594: Stack[-2] = Stack[-1]
0x595: Pop(1)
0x596: Call2 0xecd

0x597: Pop(2)
0x598: PushEmpty(object, object)
0x599: Stack[-2] = Stack[-11]
0x59a: Stack[-1] = Stack[-6]
0x59b: Push(-2, 4); TaskCall(7)
0x59c: Call2 0x5b3

0x59d: Pop(-2, 4); TaskReturn
0x59e: Pop(2)
0x59f: @@ IsDialogEnd(Stack[-1])
0x5a0: Pop(0)
0x5a1: Pop(0); Push((bool) Stack[-1] == 0)
0x5a2: IF (Stack[-1] == 0) GOTO 0x5a8; Pop(1)

0x5a3: @ sync()
0x5a4: Pop(0)
0x5a5: @@ IsDialogEnd(Stack[-1])
0x5a6: Pop(0)
0x5a7: GOTO 0x5a1

0x5a8: PushEmpty(object)
0x5a9: Stack[-1] = Stack[-10]
0x5aa: Call2 0xebc

0x5ab: Pop(1)
0x5ac: @ StopDialog(Stack[-4])
0x5ad: Pop(0)
0x5ae: @@ GetReturnValue(Stack[-2])
0x5af: Pop(0)
0x5b0: Stack[-10] = Stack[-2]
0x5b1: Return(); Pop(8)

0x5b2: Stack[-4] = 0
0x5b3: PushEmpty()
0x5b4: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x5b5: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x5b6: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x5b7: Push((int) 1)
0x5b8: IF (Stack[-1] == 0) GOTO 0x5d4; Pop(1)

0x5b9: PushEmpty(string)
0x5ba: Stack[-1] = "Suspicion"
0x5bb: Call2 0x5f2

0x5bc: Pop(1)
0x5bd: Push((int) 512232)
0x5be: @@ SetMessage(Stack[-1])
0x5bf: Pop(1)
0x5c0: @@ ClearReplies()
0x5c1: Pop(0)
0x5c2: PushEmpty(bool, object)
0x5c3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5c4: Call2 0x1072

0x5c5: Pop(1)
0x5c6: IF (Stack[-1] == 0) GOTO 0x5cc; Pop(1)

0x5c7: Push((int) 512233)
0x5c8: Push((int) 13389)
0x5c9: Push((int) 13388)
0x5ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5cb: Pop(3)
0x5cc: Push((int) 533144)
0x5cd: Push((int) -1)
0x5ce: Push((int) 34662)
0x5cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d0: Pop(3)
0x5d1: GOTO 0x5d4

0x5d2: Return(); Pop(0)

0x5d3: GOTO 0x5b7

0x5d4: PushEmpty(bool)
0x5d5: Call2 0xfe8

0x5d6: Pop(0)
0x5d7: IF (Stack[-1] == 0) GOTO 0x5e3; Pop(1)

0x5d8: @ lshWaitForAnimEnd()
0x5d9: Pop(0)
0x5da: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5db: IF (Stack[-1] == 0) GOTO 0x5dd; Pop(1)

0x5dc: GOTO 0x5e2

0x5dd: PushEmpty(string)
0x5de: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x5df: Call2 0xf57

0x5e0: Pop(1)
0x5e1: GOTO 0x5d8

0x5e2: GOTO 0x5f1

0x5e3: Push("all")
0x5e4: Push("idle")
0x5e5: @ PlayAnimation(Stack[-2], Stack[-1])
0x5e6: Pop(2)
0x5e7: @ WaitForAnimEnd()
0x5e8: Pop(0)
0x5e9: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5ea: IF (Stack[-1] == 0) GOTO 0x5ec; Pop(1)

0x5eb: GOTO 0x5f1

0x5ec: Push("all")
0x5ed: Push("idle")
0x5ee: @ PlayAnimation(Stack[-2], Stack[-1])
0x5ef: Pop(2)
0x5f0: GOTO 0x5e7

0x5f1: Return(); Pop(0)

0x5f2: PushEmpty()
0x5f3: PushEmpty(bool)
0x5f4: Call2 0xfe8

0x5f5: Pop(0)
0x5f6: Pop(1); Push((bool) Stack[-1] == 0)
0x5f7: IF (Stack[-1] == 0) GOTO 0x5f9; Pop(1)

0x5f8: Return(); Pop(0)

0x5f9: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x5fa: IF (Stack[-1] == 0) GOTO 0x5fc; Pop(1)

0x5fb: Return(); Pop(0)

0x5fc: PushEmpty(string, bool)
0x5fd: Stack[-2] = Stack[-3]
0x5fe: Push("")
0x5ff: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x600: IF (Stack[-1] == 0) GOTO 0x603; Pop(1)

0x601: Stack[-1] = (bool) 0
0x602: GOTO 0x604

0x603: Stack[-1] = (bool) 1
0x604: Call2 0xf67

0x605: Pop(2)
0x606: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x607: Return(); Pop(0)

0x608: PushEmpty()
0x609: Push((int) 1)
0x60a: IF (Stack[-1] == 0) GOTO 0x69a; Pop(1)

0x60b: PushEmpty()
0x60c: Call2 0xf85

0x60d: Pop(0)
0x60e: Push((int) 13388)
0x60f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x610: IF (Stack[-1] == 0) GOTO 0x616; Pop(1)

0x611: PushEmpty(object, object)
0x612: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x613: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x614: Call2 0xfea

0x615: Pop(2)
0x616: Push((int) 13387)
0x617: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x618: IF (Stack[-1] == 0) GOTO 0x632; Pop(1)

0x619: PushEmpty(string)
0x61a: Stack[-1] = "Suspicion"
0x61b: Call2 0x5f2

0x61c: Pop(1)
0x61d: Push((int) 512232)
0x61e: @@ SetMessage(Stack[-1])
0x61f: Pop(1)
0x620: @@ ClearReplies()
0x621: Pop(0)
0x622: PushEmpty(bool, object)
0x623: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x624: Call2 0x1072

0x625: Pop(1)
0x626: IF (Stack[-1] == 0) GOTO 0x62c; Pop(1)

0x627: Push((int) 512233)
0x628: Push((int) 13389)
0x629: Push((int) 13388)
0x62a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62b: Pop(3)
0x62c: Push((int) 533144)
0x62d: Push((int) -1)
0x62e: Push((int) 34662)
0x62f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x630: Pop(3)
0x631: Return(); Pop(0)

0x632: Push((int) 13389)
0x633: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x634: IF (Stack[-1] == 0) GOTO 0x64e; Pop(1)

0x635: PushEmpty(string)
0x636: Stack[-1] = "Questioning"
0x637: Call2 0x5f2

0x638: Pop(1)
0x639: Push((int) 512234)
0x63a: @@ SetMessage(Stack[-1])
0x63b: Pop(1)
0x63c: @@ ClearReplies()
0x63d: Pop(0)
0x63e: Push((int) 512235)
0x63f: Push((int) 13393)
0x640: Push((int) 13390)
0x641: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x642: Pop(3)
0x643: Push((int) 512236)
0x644: Push((int) 13393)
0x645: Push((int) 13391)
0x646: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x647: Pop(3)
0x648: Push((int) 512237)
0x649: Push((int) 13393)
0x64a: Push((int) 13392)
0x64b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64c: Pop(3)
0x64d: Return(); Pop(0)

0x64e: Push((int) 13393)
0x64f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x650: IF (Stack[-1] == 0) GOTO 0x665; Pop(1)

0x651: PushEmpty(string)
0x652: Stack[-1] = "Questioning"
0x653: Call2 0x5f2

0x654: Pop(1)
0x655: Push((int) 512238)
0x656: @@ SetMessage(Stack[-1])
0x657: Pop(1)
0x658: @@ ClearReplies()
0x659: Pop(0)
0x65a: Push((int) 535824)
0x65b: Push((int) 37518)
0x65c: Push((int) 37517)
0x65d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x65e: Pop(3)
0x65f: Push((int) 535826)
0x660: Push((int) 37518)
0x661: Push((int) 37519)
0x662: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x663: Pop(3)
0x664: Return(); Pop(0)

0x665: Push((int) 37518)
0x666: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x667: IF (Stack[-1] == 0) GOTO 0x677; Pop(1)

0x668: PushEmpty(string)
0x669: Stack[-1] = "Questioning"
0x66a: Call2 0x5f2

0x66b: Pop(1)
0x66c: Push((int) 535825)
0x66d: @@ SetMessage(Stack[-1])
0x66e: Pop(1)
0x66f: @@ ClearReplies()
0x670: Pop(0)
0x671: Push((int) 512240)
0x672: Push((int) 13397)
0x673: Push((int) 13396)
0x674: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x675: Pop(3)
0x676: Return(); Pop(0)

0x677: Push((int) 13397)
0x678: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x679: IF (Stack[-1] == 0) GOTO 0x68e; Pop(1)

0x67a: PushEmpty(string)
0x67b: Stack[-1] = "Doubt"
0x67c: Call2 0x5f2

0x67d: Pop(1)
0x67e: Push((int) 512241)
0x67f: @@ SetMessage(Stack[-1])
0x680: Pop(1)
0x681: @@ ClearReplies()
0x682: Pop(0)
0x683: Push((int) 512242)
0x684: Push((int) -1)
0x685: Push((int) 13398)
0x686: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x687: Pop(3)
0x688: Push((int) 535827)
0x689: Push((int) -1)
0x68a: Push((int) 37521)
0x68b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x68c: Pop(3)
0x68d: Return(); Pop(0)

0x68e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x68f: PushEmpty(bool)
0x690: Call2 0xfe8

0x691: Pop(0)
0x692: IF (Stack[-1] == 0) GOTO 0x696; Pop(1)

0x693: @ lshStopAnimation()
0x694: Pop(0)
0x695: GOTO 0x698

0x696: @ StopAnimation()
0x697: Pop(0)
0x698: Return(); Pop(0)

0x699: GOTO 0x609

0x69a: Return(); Pop(0)

0x69b: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x69c: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x69d: PushEmpty(bool, object, float)
0x69e: Stack[-2] = Stack[-12]
0x69f: Stack[-1] = (float) 70.0
0x6a0: Call2 0xe78

0x6a1: Pop(2)
0x6a2: Pop(1); Push((bool) Stack[-1] == 0)
0x6a3: IF (Stack[-1] == 0) GOTO 0x6a6; Pop(1)

0x6a4: Stack[-10] = (int) -2
0x6a5: Return(); Pop(8)

0x6a6: @ CreateDialog(Stack[-4])
0x6a7: Pop(0)
0x6a8: PushEmpty(int)
0x6a9: Call2 0xfe2

0x6aa: Pop(0)
0x6ab: @@ SetNPCName(Stack[-1])
0x6ac: Pop(1)
0x6ad: PushEmpty(int)
0x6ae: Call2 0xfe0

0x6af: Pop(0)
0x6b0: @@ SetNPCDescription(Stack[-1])
0x6b1: Pop(1)
0x6b2: PushEmpty(string)
0x6b3: Call2 0xfe4

0x6b4: Pop(0)
0x6b5: @@ SetPhoto(Stack[-1])
0x6b6: Pop(1)
0x6b7: PushEmpty(string)
0x6b8: Call2 0xfe6

0x6b9: Pop(0)
0x6ba: @@ SetPhoto2(Stack[-1])
0x6bb: Pop(1)
0x6bc: PushEmpty(int)
0x6bd: Call2 0x11ae

0x6be: Pop(0)
0x6bf: @@ SetPlayerName(Stack[-1])
0x6c0: Pop(1)
0x6c1: Stack[-2] = (int) -1
0x6c2: @ IsOverrideActive(Stack[-3])
0x6c3: Pop(0)
0x6c4: Push(Stack[-3])
0x6c5: IF (Stack[-1] == 0) GOTO 0x6c8; Pop(1)

0x6c6: Stack[-10] = (int) -2
0x6c7: Return(); Pop(8)

0x6c8: @ DoDialog(Stack[-4])
0x6c9: Pop(0)
0x6ca: PushEmpty(bool, object)
0x6cb: PushEmpty(object)
0x6cc: Call2 0xf8c

0x6cd: Stack[-2] = Stack[-1]
0x6ce: Pop(1)
0x6cf: Call2 0xecd

0x6d0: Pop(2)
0x6d1: PushEmpty(object, object)
0x6d2: Stack[-2] = Stack[-11]
0x6d3: Stack[-1] = Stack[-6]
0x6d4: Push(-2, 4); TaskCall(9)
0x6d5: Call2 0x6ec

0x6d6: Pop(-2, 4); TaskReturn
0x6d7: Pop(2)
0x6d8: @@ IsDialogEnd(Stack[-1])
0x6d9: Pop(0)
0x6da: Pop(0); Push((bool) Stack[-1] == 0)
0x6db: IF (Stack[-1] == 0) GOTO 0x6e1; Pop(1)

0x6dc: @ sync()
0x6dd: Pop(0)
0x6de: @@ IsDialogEnd(Stack[-1])
0x6df: Pop(0)
0x6e0: GOTO 0x6da

0x6e1: PushEmpty(object)
0x6e2: Stack[-1] = Stack[-10]
0x6e3: Call2 0xebc

0x6e4: Pop(1)
0x6e5: @ StopDialog(Stack[-4])
0x6e6: Pop(0)
0x6e7: @@ GetReturnValue(Stack[-2])
0x6e8: Pop(0)
0x6e9: Stack[-10] = Stack[-2]
0x6ea: Return(); Pop(8)

0x6eb: Stack[-4] = 0
0x6ec: PushEmpty()
0x6ed: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x6ee: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x6ef: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x6f0: Push((int) 1)
0x6f1: IF (Stack[-1] == 0) GOTO 0x726; Pop(1)

0x6f2: PushEmpty(bool, object)
0x6f3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6f4: Call2 0x10be

0x6f5: Pop(1)
0x6f6: IF (Stack[-1] == 0) GOTO 0x710; Pop(1)

0x6f7: PushEmpty(object, object)
0x6f8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6f9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6fa: Call2 0x104b

0x6fb: Pop(2)
0x6fc: PushEmpty(string)
0x6fd: Stack[-1] = "Grin"
0x6fe: Call2 0x744

0x6ff: Pop(1)
0x700: Push((int) 512330)
0x701: @@ SetMessage(Stack[-1])
0x702: Pop(1)
0x703: @@ ClearReplies()
0x704: Pop(0)
0x705: Push((int) 512331)
0x706: Push((int) 13491)
0x707: Push((int) 13490)
0x708: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x709: Pop(3)
0x70a: Push((int) 512336)
0x70b: Push((int) -1)
0x70c: Push((int) 13495)
0x70d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x70e: Pop(3)
0x70f: GOTO 0x726

0x710: PushEmpty(string)
0x711: Stack[-1] = "Neutral"
0x712: Call2 0x744

0x713: Pop(1)
0x714: Push((int) 513781)
0x715: @@ SetMessage(Stack[-1])
0x716: Pop(1)
0x717: @@ ClearReplies()
0x718: Pop(0)
0x719: Push((int) 513782)
0x71a: Push((int) -1)
0x71b: Push((int) 15018)
0x71c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x71d: Pop(3)
0x71e: Push((int) 541839)
0x71f: Push((int) -1)
0x720: Push((int) 44056)
0x721: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x722: Pop(3)
0x723: GOTO 0x726

0x724: Return(); Pop(0)

0x725: GOTO 0x6f0

0x726: PushEmpty(bool)
0x727: Call2 0xfe8

0x728: Pop(0)
0x729: IF (Stack[-1] == 0) GOTO 0x735; Pop(1)

0x72a: @ lshWaitForAnimEnd()
0x72b: Pop(0)
0x72c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x72d: IF (Stack[-1] == 0) GOTO 0x72f; Pop(1)

0x72e: GOTO 0x734

0x72f: PushEmpty(string)
0x730: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x731: Call2 0xf57

0x732: Pop(1)
0x733: GOTO 0x72a

0x734: GOTO 0x743

0x735: Push("all")
0x736: Push("idle")
0x737: @ PlayAnimation(Stack[-2], Stack[-1])
0x738: Pop(2)
0x739: @ WaitForAnimEnd()
0x73a: Pop(0)
0x73b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x73c: IF (Stack[-1] == 0) GOTO 0x73e; Pop(1)

0x73d: GOTO 0x743

0x73e: Push("all")
0x73f: Push("idle")
0x740: @ PlayAnimation(Stack[-2], Stack[-1])
0x741: Pop(2)
0x742: GOTO 0x739

0x743: Return(); Pop(0)

0x744: PushEmpty()
0x745: PushEmpty(bool)
0x746: Call2 0xfe8

0x747: Pop(0)
0x748: Pop(1); Push((bool) Stack[-1] == 0)
0x749: IF (Stack[-1] == 0) GOTO 0x74b; Pop(1)

0x74a: Return(); Pop(0)

0x74b: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x74c: IF (Stack[-1] == 0) GOTO 0x74e; Pop(1)

0x74d: Return(); Pop(0)

0x74e: PushEmpty(string, bool)
0x74f: Stack[-2] = Stack[-3]
0x750: Push("")
0x751: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x752: IF (Stack[-1] == 0) GOTO 0x755; Pop(1)

0x753: Stack[-1] = (bool) 0
0x754: GOTO 0x756

0x755: Stack[-1] = (bool) 1
0x756: Call2 0xf67

0x757: Pop(2)
0x758: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x759: Return(); Pop(0)

0x75a: PushEmpty()
0x75b: Push((int) 1)
0x75c: IF (Stack[-1] == 0) GOTO 0x815; Pop(1)

0x75d: PushEmpty()
0x75e: Call2 0xf85

0x75f: Pop(0)
0x760: Push((int) 13489)
0x761: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x762: IF (Stack[-1] == 0) GOTO 0x795; Pop(1)

0x763: PushEmpty(bool, object)
0x764: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x765: Call2 0x10be

0x766: Pop(1)
0x767: IF (Stack[-1] == 0) GOTO 0x781; Pop(1)

0x768: PushEmpty(object, object)
0x769: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x76a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x76b: Call2 0x104b

0x76c: Pop(2)
0x76d: PushEmpty(string)
0x76e: Stack[-1] = "Grin"
0x76f: Call2 0x744

0x770: Pop(1)
0x771: Push((int) 512330)
0x772: @@ SetMessage(Stack[-1])
0x773: Pop(1)
0x774: @@ ClearReplies()
0x775: Pop(0)
0x776: Push((int) 512331)
0x777: Push((int) 13491)
0x778: Push((int) 13490)
0x779: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x77a: Pop(3)
0x77b: Push((int) 512336)
0x77c: Push((int) -1)
0x77d: Push((int) 13495)
0x77e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x77f: Pop(3)
0x780: Return(); Pop(0)

0x781: PushEmpty(string)
0x782: Stack[-1] = "Neutral"
0x783: Call2 0x744

0x784: Pop(1)
0x785: Push((int) 513781)
0x786: @@ SetMessage(Stack[-1])
0x787: Pop(1)
0x788: @@ ClearReplies()
0x789: Pop(0)
0x78a: Push((int) 513782)
0x78b: Push((int) -1)
0x78c: Push((int) 15018)
0x78d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x78e: Pop(3)
0x78f: Push((int) 541839)
0x790: Push((int) -1)
0x791: Push((int) 44056)
0x792: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x793: Pop(3)
0x794: Return(); Pop(0)

0x795: Push((int) 13491)
0x796: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x797: IF (Stack[-1] == 0) GOTO 0x7a7; Pop(1)

0x798: PushEmpty(string)
0x799: Stack[-1] = "Grin"
0x79a: Call2 0x744

0x79b: Pop(1)
0x79c: Push((int) 512332)
0x79d: @@ SetMessage(Stack[-1])
0x79e: Pop(1)
0x79f: @@ ClearReplies()
0x7a0: Pop(0)
0x7a1: Push((int) 512333)
0x7a2: Push((int) 13493)
0x7a3: Push((int) 13492)
0x7a4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7a5: Pop(3)
0x7a6: Return(); Pop(0)

0x7a7: Push((int) 13497)
0x7a8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7a9: IF (Stack[-1] == 0) GOTO 0x7aa; Pop(1)

0x7aa: Push((int) 13499)
0x7ab: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7ac: IF (Stack[-1] == 0) GOTO 0x7c1; Pop(1)

0x7ad: PushEmpty(string)
0x7ae: Stack[-1] = "Neutral"
0x7af: Call2 0x744

0x7b0: Pop(1)
0x7b1: Push((int) 512340)
0x7b2: @@ SetMessage(Stack[-1])
0x7b3: Pop(1)
0x7b4: @@ ClearReplies()
0x7b5: Pop(0)
0x7b6: Push((int) 512341)
0x7b7: Push((int) -1)
0x7b8: Push((int) 13500)
0x7b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ba: Pop(3)
0x7bb: Push((int) 512342)
0x7bc: Push((int) 13502)
0x7bd: Push((int) 13501)
0x7be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7bf: Pop(3)
0x7c0: Return(); Pop(0)

0x7c1: Push((int) 13502)
0x7c2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7c3: IF (Stack[-1] == 0) GOTO 0x7d3; Pop(1)

0x7c4: PushEmpty(string)
0x7c5: Stack[-1] = "Neutral"
0x7c6: Call2 0x744

0x7c7: Pop(1)
0x7c8: Push((int) 512343)
0x7c9: @@ SetMessage(Stack[-1])
0x7ca: Pop(1)
0x7cb: @@ ClearReplies()
0x7cc: Pop(0)
0x7cd: Push((int) 512344)
0x7ce: Push((int) -1)
0x7cf: Push((int) 13503)
0x7d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d1: Pop(3)
0x7d2: Return(); Pop(0)

0x7d3: Push((int) 13493)
0x7d4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7d5: IF (Stack[-1] == 0) GOTO 0x7e5; Pop(1)

0x7d6: PushEmpty(string)
0x7d7: Stack[-1] = "Grin"
0x7d8: Call2 0x744

0x7d9: Pop(1)
0x7da: Push((int) 512334)
0x7db: @@ SetMessage(Stack[-1])
0x7dc: Pop(1)
0x7dd: @@ ClearReplies()
0x7de: Pop(0)
0x7df: Push((int) 512335)
0x7e0: Push((int) 13504)
0x7e1: Push((int) 13494)
0x7e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7e3: Pop(3)
0x7e4: Return(); Pop(0)

0x7e5: Push((int) 13504)
0x7e6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7e7: IF (Stack[-1] == 0) GOTO 0x7f7; Pop(1)

0x7e8: PushEmpty(string)
0x7e9: Stack[-1] = "Grin"
0x7ea: Call2 0x744

0x7eb: Pop(1)
0x7ec: Push((int) 512345)
0x7ed: @@ SetMessage(Stack[-1])
0x7ee: Pop(1)
0x7ef: @@ ClearReplies()
0x7f0: Pop(0)
0x7f1: Push((int) 512346)
0x7f2: Push((int) 13506)
0x7f3: Push((int) 13505)
0x7f4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7f5: Pop(3)
0x7f6: Return(); Pop(0)

0x7f7: Push((int) 13506)
0x7f8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7f9: IF (Stack[-1] == 0) GOTO 0x809; Pop(1)

0x7fa: PushEmpty(string)
0x7fb: Stack[-1] = "Grin"
0x7fc: Call2 0x744

0x7fd: Pop(1)
0x7fe: Push((int) 512347)
0x7ff: @@ SetMessage(Stack[-1])
0x800: Pop(1)
0x801: @@ ClearReplies()
0x802: Pop(0)
0x803: Push((int) 512348)
0x804: Push((int) -1)
0x805: Push((int) 13507)
0x806: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x807: Pop(3)
0x808: Return(); Pop(0)

0x809: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x80a: PushEmpty(bool)
0x80b: Call2 0xfe8

0x80c: Pop(0)
0x80d: IF (Stack[-1] == 0) GOTO 0x811; Pop(1)

0x80e: @ lshStopAnimation()
0x80f: Pop(0)
0x810: GOTO 0x813

0x811: @ StopAnimation()
0x812: Pop(0)
0x813: Return(); Pop(0)

0x814: GOTO 0x75b

0x815: Return(); Pop(0)

0x816: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x817: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x818: PushEmpty(bool, object, float)
0x819: Stack[-2] = Stack[-12]
0x81a: Stack[-1] = (float) 70.0
0x81b: Call2 0xe78

0x81c: Pop(2)
0x81d: Pop(1); Push((bool) Stack[-1] == 0)
0x81e: IF (Stack[-1] == 0) GOTO 0x821; Pop(1)

0x81f: Stack[-10] = (int) -2
0x820: Return(); Pop(8)

0x821: @ CreateDialog(Stack[-4])
0x822: Pop(0)
0x823: PushEmpty(int)
0x824: Call2 0xfe2

0x825: Pop(0)
0x826: @@ SetNPCName(Stack[-1])
0x827: Pop(1)
0x828: PushEmpty(int)
0x829: Call2 0xfe0

0x82a: Pop(0)
0x82b: @@ SetNPCDescription(Stack[-1])
0x82c: Pop(1)
0x82d: PushEmpty(string)
0x82e: Call2 0xfe4

0x82f: Pop(0)
0x830: @@ SetPhoto(Stack[-1])
0x831: Pop(1)
0x832: PushEmpty(string)
0x833: Call2 0xfe6

0x834: Pop(0)
0x835: @@ SetPhoto2(Stack[-1])
0x836: Pop(1)
0x837: PushEmpty(int)
0x838: Call2 0x11ae

0x839: Pop(0)
0x83a: @@ SetPlayerName(Stack[-1])
0x83b: Pop(1)
0x83c: Stack[-2] = (int) -1
0x83d: @ IsOverrideActive(Stack[-3])
0x83e: Pop(0)
0x83f: Push(Stack[-3])
0x840: IF (Stack[-1] == 0) GOTO 0x843; Pop(1)

0x841: Stack[-10] = (int) -2
0x842: Return(); Pop(8)

0x843: @ DoDialog(Stack[-4])
0x844: Pop(0)
0x845: PushEmpty(bool, object)
0x846: PushEmpty(object)
0x847: Call2 0xf8c

0x848: Stack[-2] = Stack[-1]
0x849: Pop(1)
0x84a: Call2 0xecd

0x84b: Pop(2)
0x84c: PushEmpty(object, object)
0x84d: Stack[-2] = Stack[-11]
0x84e: Stack[-1] = Stack[-6]
0x84f: Push(-2, 4); TaskCall(11)
0x850: Call2 0x867

0x851: Pop(-2, 4); TaskReturn
0x852: Pop(2)
0x853: @@ IsDialogEnd(Stack[-1])
0x854: Pop(0)
0x855: Pop(0); Push((bool) Stack[-1] == 0)
0x856: IF (Stack[-1] == 0) GOTO 0x85c; Pop(1)

0x857: @ sync()
0x858: Pop(0)
0x859: @@ IsDialogEnd(Stack[-1])
0x85a: Pop(0)
0x85b: GOTO 0x855

0x85c: PushEmpty(object)
0x85d: Stack[-1] = Stack[-10]
0x85e: Call2 0xebc

0x85f: Pop(1)
0x860: @ StopDialog(Stack[-4])
0x861: Pop(0)
0x862: @@ GetReturnValue(Stack[-2])
0x863: Pop(0)
0x864: Stack[-10] = Stack[-2]
0x865: Return(); Pop(8)

0x866: Stack[-4] = 0
0x867: PushEmpty()
0x868: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x869: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x86a: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x86b: Push((int) 1)
0x86c: IF (Stack[-1] == 0) GOTO 0x8d9; Pop(1)

0x86d: PushEmpty(bool)
0x86e: Stack[-1] = (bool) 0
0x86f: PushEmpty(bool, object)
0x870: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x871: Call2 0x10ca

0x872: Pop(1)
0x873: IF (Stack[-1] == 0) GOTO 0x87a; Pop(1)

0x874: PushEmpty(bool, object)
0x875: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x876: Call2 0x10d6

0x877: Pop(1)
0x878: IF (Stack[-1] == 0) GOTO 0x87a; Pop(1)

0x879: Stack[-1] = (bool) 1
0x87a: IF (Stack[-1] == 0) GOTO 0x88f; Pop(1)

0x87b: PushEmpty(object, object)
0x87c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x87d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x87e: Call2 0x1051

0x87f: Pop(2)
0x880: PushEmpty(string)
0x881: Stack[-1] = "Neutral"
0x882: Call2 0x8f7

0x883: Pop(1)
0x884: Push((int) 514041)
0x885: @@ SetMessage(Stack[-1])
0x886: Pop(1)
0x887: @@ ClearReplies()
0x888: Pop(0)
0x889: Push((int) 514042)
0x88a: Push((int) 15278)
0x88b: Push((int) 15277)
0x88c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x88d: Pop(3)
0x88e: GOTO 0x8d9

0x88f: PushEmpty(string)
0x890: Stack[-1] = "Suspicion"
0x891: Call2 0x8f7

0x892: Pop(1)
0x893: Push((int) 514063)
0x894: @@ SetMessage(Stack[-1])
0x895: Pop(1)
0x896: @@ ClearReplies()
0x897: Pop(0)
0x898: PushEmpty(bool)
0x899: Stack[-1] = (bool) 0
0x89a: PushEmpty(bool, object)
0x89b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x89c: Call2 0x10ee

0x89d: Pop(1)
0x89e: IF (Stack[-1] == 0) GOTO 0x8a5; Pop(1)

0x89f: PushEmpty(bool, object)
0x8a0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8a1: Call2 0x10e2

0x8a2: Pop(1)
0x8a3: IF (Stack[-1] == 0) GOTO 0x8a5; Pop(1)

0x8a4: Stack[-1] = (bool) 1
0x8a5: IF (Stack[-1] == 0) GOTO 0x8ab; Pop(1)

0x8a6: Push((int) 514068)
0x8a7: Push((int) 40760)
0x8a8: Push((int) 15305)
0x8a9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8aa: Pop(3)
0x8ab: PushEmpty(bool)
0x8ac: Stack[-1] = (bool) 0
0x8ad: PushEmpty(bool, object)
0x8ae: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8af: Call2 0x10f8

0x8b0: Pop(1)
0x8b1: IF (Stack[-1] == 0) GOTO 0x8b8; Pop(1)

0x8b2: PushEmpty(bool, object)
0x8b3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8b4: Call2 0x10e2

0x8b5: Pop(1)
0x8b6: IF (Stack[-1] == 0) GOTO 0x8b8; Pop(1)

0x8b7: Stack[-1] = (bool) 1
0x8b8: IF (Stack[-1] == 0) GOTO 0x8be; Pop(1)

0x8b9: Push((int) 514069)
0x8ba: Push((int) 15307)
0x8bb: Push((int) 15306)
0x8bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8bd: Pop(3)
0x8be: PushEmpty(bool)
0x8bf: Stack[-1] = (bool) 0
0x8c0: PushEmpty(bool, object)
0x8c1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8c2: Call2 0x1095

0x8c3: Pop(1)
0x8c4: IF (Stack[-1] == 0) GOTO 0x8cb; Pop(1)

0x8c5: PushEmpty(bool, object)
0x8c6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8c7: Call2 0x10a1

0x8c8: Pop(1)
0x8c9: IF (Stack[-1] == 0) GOTO 0x8cb; Pop(1)

0x8ca: Stack[-1] = (bool) 1
0x8cb: IF (Stack[-1] == 0) GOTO 0x8d1; Pop(1)

0x8cc: Push((int) 538835)
0x8cd: Push((int) 40765)
0x8ce: Push((int) 40764)
0x8cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d0: Pop(3)
0x8d1: Push((int) 514064)
0x8d2: Push((int) -1)
0x8d3: Push((int) 15300)
0x8d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d5: Pop(3)
0x8d6: GOTO 0x8d9

0x8d7: Return(); Pop(0)

0x8d8: GOTO 0x86b

0x8d9: PushEmpty(bool)
0x8da: Call2 0xfe8

0x8db: Pop(0)
0x8dc: IF (Stack[-1] == 0) GOTO 0x8e8; Pop(1)

0x8dd: @ lshWaitForAnimEnd()
0x8de: Pop(0)
0x8df: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8e0: IF (Stack[-1] == 0) GOTO 0x8e2; Pop(1)

0x8e1: GOTO 0x8e7

0x8e2: PushEmpty(string)
0x8e3: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8e4: Call2 0xf57

0x8e5: Pop(1)
0x8e6: GOTO 0x8dd

0x8e7: GOTO 0x8f6

0x8e8: Push("all")
0x8e9: Push("idle")
0x8ea: @ PlayAnimation(Stack[-2], Stack[-1])
0x8eb: Pop(2)
0x8ec: @ WaitForAnimEnd()
0x8ed: Pop(0)
0x8ee: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8ef: IF (Stack[-1] == 0) GOTO 0x8f1; Pop(1)

0x8f0: GOTO 0x8f6

0x8f1: Push("all")
0x8f2: Push("idle")
0x8f3: @ PlayAnimation(Stack[-2], Stack[-1])
0x8f4: Pop(2)
0x8f5: GOTO 0x8ec

0x8f6: Return(); Pop(0)

0x8f7: PushEmpty()
0x8f8: PushEmpty(bool)
0x8f9: Call2 0xfe8

0x8fa: Pop(0)
0x8fb: Pop(1); Push((bool) Stack[-1] == 0)
0x8fc: IF (Stack[-1] == 0) GOTO 0x8fe; Pop(1)

0x8fd: Return(); Pop(0)

0x8fe: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x8ff: IF (Stack[-1] == 0) GOTO 0x901; Pop(1)

0x900: Return(); Pop(0)

0x901: PushEmpty(string, bool)
0x902: Stack[-2] = Stack[-3]
0x903: Push("")
0x904: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x905: IF (Stack[-1] == 0) GOTO 0x908; Pop(1)

0x906: Stack[-1] = (bool) 0
0x907: GOTO 0x909

0x908: Stack[-1] = (bool) 1
0x909: Call2 0xf67

0x90a: Pop(2)
0x90b: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x90c: Return(); Pop(0)

0x90d: PushEmpty()
0x90e: Push((int) 1)
0x90f: IF (Stack[-1] == 0) GOTO 0xb81; Pop(1)

0x910: PushEmpty()
0x911: Call2 0xf85

0x912: Pop(0)
0x913: Push((int) 15289)
0x914: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x915: IF (Stack[-1] == 0) GOTO 0x91b; Pop(1)

0x916: PushEmpty(object, object)
0x917: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x918: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x919: Call2 0x1057

0x91a: Pop(2)
0x91b: Push((int) 15310)
0x91c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x91d: IF (Stack[-1] == 0) GOTO 0x932; Pop(1)

0x91e: PushEmpty(object, object)
0x91f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x920: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x921: Call2 0x102c

0x922: Pop(2)
0x923: PushEmpty(object, object)
0x924: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x925: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x926: Call2 0x1060

0x927: Pop(2)
0x928: PushEmpty(object, object)
0x929: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x92a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x92b: Call2 0xffe

0x92c: Pop(2)
0x92d: PushEmpty(object, object)
0x92e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x92f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x930: Call2 0x1068

0x931: Pop(2)
0x932: Push((int) 40764)
0x933: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x934: IF (Stack[-1] == 0) GOTO 0x93a; Pop(1)

0x935: PushEmpty(object, object)
0x936: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x937: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x938: Call2 0x1026

0x939: Pop(2)
0x93a: Push((int) 40789)
0x93b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x93c: IF (Stack[-1] == 0) GOTO 0x947; Pop(1)

0x93d: PushEmpty(object, object)
0x93e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x93f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x940: Call2 0x1005

0x941: Pop(2)
0x942: PushEmpty(object, object)
0x943: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x944: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x945: Call2 0x1016

0x946: Pop(2)
0x947: Push((int) 40790)
0x948: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x949: IF (Stack[-1] == 0) GOTO 0x954; Pop(1)

0x94a: PushEmpty(object, object)
0x94b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x94c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x94d: Call2 0x1005

0x94e: Pop(2)
0x94f: PushEmpty(object, object)
0x950: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x951: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x952: Call2 0x1016

0x953: Pop(2)
0x954: Push((int) 40787)
0x955: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x956: IF (Stack[-1] == 0) GOTO 0x961; Pop(1)

0x957: PushEmpty(object, object)
0x958: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x959: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x95a: Call2 0x1005

0x95b: Pop(2)
0x95c: PushEmpty(object, object)
0x95d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x95e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x95f: Call2 0x1016

0x960: Pop(2)
0x961: Push((int) 15276)
0x962: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x963: IF (Stack[-1] == 0) GOTO 0x9ce; Pop(1)

0x964: PushEmpty(bool)
0x965: Stack[-1] = (bool) 0
0x966: PushEmpty(bool, object)
0x967: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x968: Call2 0x10ca

0x969: Pop(1)
0x96a: IF (Stack[-1] == 0) GOTO 0x971; Pop(1)

0x96b: PushEmpty(bool, object)
0x96c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x96d: Call2 0x10d6

0x96e: Pop(1)
0x96f: IF (Stack[-1] == 0) GOTO 0x971; Pop(1)

0x970: Stack[-1] = (bool) 1
0x971: IF (Stack[-1] == 0) GOTO 0x986; Pop(1)

0x972: PushEmpty(object, object)
0x973: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x974: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x975: Call2 0x1051

0x976: Pop(2)
0x977: PushEmpty(string)
0x978: Stack[-1] = "Neutral"
0x979: Call2 0x8f7

0x97a: Pop(1)
0x97b: Push((int) 514041)
0x97c: @@ SetMessage(Stack[-1])
0x97d: Pop(1)
0x97e: @@ ClearReplies()
0x97f: Pop(0)
0x980: Push((int) 514042)
0x981: Push((int) 15278)
0x982: Push((int) 15277)
0x983: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x984: Pop(3)
0x985: Return(); Pop(0)

0x986: PushEmpty(string)
0x987: Stack[-1] = "Suspicion"
0x988: Call2 0x8f7

0x989: Pop(1)
0x98a: Push((int) 514063)
0x98b: @@ SetMessage(Stack[-1])
0x98c: Pop(1)
0x98d: @@ ClearReplies()
0x98e: Pop(0)
0x98f: PushEmpty(bool)
0x990: Stack[-1] = (bool) 0
0x991: PushEmpty(bool, object)
0x992: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x993: Call2 0x10ee

0x994: Pop(1)
0x995: IF (Stack[-1] == 0) GOTO 0x99c; Pop(1)

0x996: PushEmpty(bool, object)
0x997: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x998: Call2 0x10e2

0x999: Pop(1)
0x99a: IF (Stack[-1] == 0) GOTO 0x99c; Pop(1)

0x99b: Stack[-1] = (bool) 1
0x99c: IF (Stack[-1] == 0) GOTO 0x9a2; Pop(1)

0x99d: Push((int) 514068)
0x99e: Push((int) 40760)
0x99f: Push((int) 15305)
0x9a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9a1: Pop(3)
0x9a2: PushEmpty(bool)
0x9a3: Stack[-1] = (bool) 0
0x9a4: PushEmpty(bool, object)
0x9a5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9a6: Call2 0x10f8

0x9a7: Pop(1)
0x9a8: IF (Stack[-1] == 0) GOTO 0x9af; Pop(1)

0x9a9: PushEmpty(bool, object)
0x9aa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9ab: Call2 0x10e2

0x9ac: Pop(1)
0x9ad: IF (Stack[-1] == 0) GOTO 0x9af; Pop(1)

0x9ae: Stack[-1] = (bool) 1
0x9af: IF (Stack[-1] == 0) GOTO 0x9b5; Pop(1)

0x9b0: Push((int) 514069)
0x9b1: Push((int) 15307)
0x9b2: Push((int) 15306)
0x9b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9b4: Pop(3)
0x9b5: PushEmpty(bool)
0x9b6: Stack[-1] = (bool) 0
0x9b7: PushEmpty(bool, object)
0x9b8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9b9: Call2 0x1095

0x9ba: Pop(1)
0x9bb: IF (Stack[-1] == 0) GOTO 0x9c2; Pop(1)

0x9bc: PushEmpty(bool, object)
0x9bd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9be: Call2 0x10a1

0x9bf: Pop(1)
0x9c0: IF (Stack[-1] == 0) GOTO 0x9c2; Pop(1)

0x9c1: Stack[-1] = (bool) 1
0x9c2: IF (Stack[-1] == 0) GOTO 0x9c8; Pop(1)

0x9c3: Push((int) 538835)
0x9c4: Push((int) 40765)
0x9c5: Push((int) 40764)
0x9c6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9c7: Pop(3)
0x9c8: Push((int) 514064)
0x9c9: Push((int) -1)
0x9ca: Push((int) 15300)
0x9cb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9cc: Pop(3)
0x9cd: Return(); Pop(0)

0x9ce: Push((int) 40765)
0x9cf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9d0: IF (Stack[-1] == 0) GOTO 0x9ea; Pop(1)

0x9d1: PushEmpty(string)
0x9d2: Stack[-1] = "Neutral"
0x9d3: Call2 0x8f7

0x9d4: Pop(1)
0x9d5: Push((int) 538836)
0x9d6: @@ SetMessage(Stack[-1])
0x9d7: Pop(1)
0x9d8: @@ ClearReplies()
0x9d9: Pop(0)
0x9da: Push((int) 538837)
0x9db: Push((int) 40775)
0x9dc: Push((int) 40766)
0x9dd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9de: Pop(3)
0x9df: Push((int) 538838)
0x9e0: Push((int) 40774)
0x9e1: Push((int) 40767)
0x9e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9e3: Pop(3)
0x9e4: Push((int) 538839)
0x9e5: Push((int) 40769)
0x9e6: Push((int) 40768)
0x9e7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9e8: Pop(3)
0x9e9: Return(); Pop(0)

0x9ea: Push((int) 40769)
0x9eb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9ec: IF (Stack[-1] == 0) GOTO 0x9fc; Pop(1)

0x9ed: PushEmpty(string)
0x9ee: Stack[-1] = "Neutral"
0x9ef: Call2 0x8f7

0x9f0: Pop(1)
0x9f1: Push((int) 538840)
0x9f2: @@ SetMessage(Stack[-1])
0x9f3: Pop(1)
0x9f4: @@ ClearReplies()
0x9f5: Pop(0)
0x9f6: Push((int) 538841)
0x9f7: Push((int) 40773)
0x9f8: Push((int) 40772)
0x9f9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9fa: Pop(3)
0x9fb: Return(); Pop(0)

0x9fc: Push((int) 40773)
0x9fd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9fe: IF (Stack[-1] == 0) GOTO 0xa0e; Pop(1)

0x9ff: PushEmpty(string)
0xa00: Stack[-1] = "Neutral"
0xa01: Call2 0x8f7

0xa02: Pop(1)
0xa03: Push((int) 538842)
0xa04: @@ SetMessage(Stack[-1])
0xa05: Pop(1)
0xa06: @@ ClearReplies()
0xa07: Pop(0)
0xa08: Push((int) 538847)
0xa09: Push((int) 40780)
0xa0a: Push((int) 40779)
0xa0b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa0c: Pop(3)
0xa0d: Return(); Pop(0)

0xa0e: Push((int) 40774)
0xa0f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa10: IF (Stack[-1] == 0) GOTO 0xa25; Pop(1)

0xa11: PushEmpty(string)
0xa12: Stack[-1] = "Neutral"
0xa13: Call2 0x8f7

0xa14: Pop(1)
0xa15: Push((int) 538843)
0xa16: @@ SetMessage(Stack[-1])
0xa17: Pop(1)
0xa18: @@ ClearReplies()
0xa19: Pop(0)
0xa1a: Push((int) 538846)
0xa1b: Push((int) 40769)
0xa1c: Push((int) 40777)
0xa1d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa1e: Pop(3)
0xa1f: Push((int) 538849)
0xa20: Push((int) 40780)
0xa21: Push((int) 40781)
0xa22: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa23: Pop(3)
0xa24: Return(); Pop(0)

0xa25: Push((int) 40775)
0xa26: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa27: IF (Stack[-1] == 0) GOTO 0xa37; Pop(1)

0xa28: PushEmpty(string)
0xa29: Stack[-1] = "Neutral"
0xa2a: Call2 0x8f7

0xa2b: Pop(1)
0xa2c: Push((int) 538844)
0xa2d: @@ SetMessage(Stack[-1])
0xa2e: Pop(1)
0xa2f: @@ ClearReplies()
0xa30: Pop(0)
0xa31: Push((int) 538845)
0xa32: Push((int) 40780)
0xa33: Push((int) 40776)
0xa34: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa35: Pop(3)
0xa36: Return(); Pop(0)

0xa37: Push((int) 40780)
0xa38: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa39: IF (Stack[-1] == 0) GOTO 0xa49; Pop(1)

0xa3a: PushEmpty(string)
0xa3b: Stack[-1] = "Questioning"
0xa3c: Call2 0x8f7

0xa3d: Pop(1)
0xa3e: Push((int) 538848)
0xa3f: @@ SetMessage(Stack[-1])
0xa40: Pop(1)
0xa41: @@ ClearReplies()
0xa42: Pop(0)
0xa43: Push((int) 538850)
0xa44: Push((int) 40783)
0xa45: Push((int) 40782)
0xa46: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa47: Pop(3)
0xa48: Return(); Pop(0)

0xa49: Push((int) 40783)
0xa4a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa4b: IF (Stack[-1] == 0) GOTO 0xa60; Pop(1)

0xa4c: PushEmpty(string)
0xa4d: Stack[-1] = "Neutral"
0xa4e: Call2 0x8f7

0xa4f: Pop(1)
0xa50: Push((int) 538851)
0xa51: @@ SetMessage(Stack[-1])
0xa52: Pop(1)
0xa53: @@ ClearReplies()
0xa54: Pop(0)
0xa55: Push((int) 538852)
0xa56: Push((int) 40788)
0xa57: Push((int) 40786)
0xa58: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa59: Pop(3)
0xa5a: Push((int) 538853)
0xa5b: Push((int) -1)
0xa5c: Push((int) 40787)
0xa5d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa5e: Pop(3)
0xa5f: Return(); Pop(0)

0xa60: Push((int) 40788)
0xa61: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa62: IF (Stack[-1] == 0) GOTO 0xa77; Pop(1)

0xa63: PushEmpty(string)
0xa64: Stack[-1] = "Neutral"
0xa65: Call2 0x8f7

0xa66: Pop(1)
0xa67: Push((int) 538854)
0xa68: @@ SetMessage(Stack[-1])
0xa69: Pop(1)
0xa6a: @@ ClearReplies()
0xa6b: Pop(0)
0xa6c: Push((int) 538855)
0xa6d: Push((int) -1)
0xa6e: Push((int) 40789)
0xa6f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa70: Pop(3)
0xa71: Push((int) 538856)
0xa72: Push((int) -1)
0xa73: Push((int) 40790)
0xa74: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa75: Pop(3)
0xa76: Return(); Pop(0)

0xa77: Push((int) 15307)
0xa78: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa79: IF (Stack[-1] == 0) GOTO 0xa89; Pop(1)

0xa7a: PushEmpty(string)
0xa7b: Stack[-1] = "Suspicion"
0xa7c: Call2 0x8f7

0xa7d: Pop(1)
0xa7e: Push((int) 514070)
0xa7f: @@ SetMessage(Stack[-1])
0xa80: Pop(1)
0xa81: @@ ClearReplies()
0xa82: Pop(0)
0xa83: Push((int) 514071)
0xa84: Push((int) -1)
0xa85: Push((int) 15308)
0xa86: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa87: Pop(3)
0xa88: Return(); Pop(0)

0xa89: Push((int) 40760)
0xa8a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa8b: IF (Stack[-1] == 0) GOTO 0xa9b; Pop(1)

0xa8c: PushEmpty(string)
0xa8d: Stack[-1] = "Suspicion"
0xa8e: Call2 0x8f7

0xa8f: Pop(1)
0xa90: Push((int) 538831)
0xa91: @@ SetMessage(Stack[-1])
0xa92: Pop(1)
0xa93: @@ ClearReplies()
0xa94: Pop(0)
0xa95: Push((int) 538832)
0xa96: Push((int) 40762)
0xa97: Push((int) 40761)
0xa98: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa99: Pop(3)
0xa9a: Return(); Pop(0)

0xa9b: Push((int) 40762)
0xa9c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa9d: IF (Stack[-1] == 0) GOTO 0xaad; Pop(1)

0xa9e: PushEmpty(string)
0xa9f: Stack[-1] = "Grin"
0xaa0: Call2 0x8f7

0xaa1: Pop(1)
0xaa2: Push((int) 538833)
0xaa3: @@ SetMessage(Stack[-1])
0xaa4: Pop(1)
0xaa5: @@ ClearReplies()
0xaa6: Pop(0)
0xaa7: Push((int) 538834)
0xaa8: Push((int) 15309)
0xaa9: Push((int) 40763)
0xaaa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaab: Pop(3)
0xaac: Return(); Pop(0)

0xaad: Push((int) 15309)
0xaae: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaaf: IF (Stack[-1] == 0) GOTO 0xabf; Pop(1)

0xab0: PushEmpty(string)
0xab1: Stack[-1] = "Neutral"
0xab2: Call2 0x8f7

0xab3: Pop(1)
0xab4: Push((int) 514072)
0xab5: @@ SetMessage(Stack[-1])
0xab6: Pop(1)
0xab7: @@ ClearReplies()
0xab8: Pop(0)
0xab9: Push((int) 514073)
0xaba: Push((int) -1)
0xabb: Push((int) 15310)
0xabc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xabd: Pop(3)
0xabe: Return(); Pop(0)

0xabf: Push((int) 15278)
0xac0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xac1: IF (Stack[-1] == 0) GOTO 0xad6; Pop(1)

0xac2: PushEmpty(string)
0xac3: Stack[-1] = "Neutral"
0xac4: Call2 0x8f7

0xac5: Pop(1)
0xac6: Push((int) 514043)
0xac7: @@ SetMessage(Stack[-1])
0xac8: Pop(1)
0xac9: @@ ClearReplies()
0xaca: Pop(0)
0xacb: Push((int) 514044)
0xacc: Push((int) 15280)
0xacd: Push((int) 15279)
0xace: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xacf: Pop(3)
0xad0: Push((int) 538829)
0xad1: Push((int) 15280)
0xad2: Push((int) 40756)
0xad3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xad4: Pop(3)
0xad5: Return(); Pop(0)

0xad6: Push((int) 15280)
0xad7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xad8: IF (Stack[-1] == 0) GOTO 0xae8; Pop(1)

0xad9: PushEmpty(string)
0xada: Stack[-1] = "Neutral"
0xadb: Call2 0x8f7

0xadc: Pop(1)
0xadd: Push((int) 514045)
0xade: @@ SetMessage(Stack[-1])
0xadf: Pop(1)
0xae0: @@ ClearReplies()
0xae1: Pop(0)
0xae2: Push((int) 514046)
0xae3: Push((int) 15282)
0xae4: Push((int) 15281)
0xae5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xae6: Pop(3)
0xae7: Return(); Pop(0)

0xae8: Push((int) 15282)
0xae9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaea: IF (Stack[-1] == 0) GOTO 0xaff; Pop(1)

0xaeb: PushEmpty(string)
0xaec: Stack[-1] = "Neutral"
0xaed: Call2 0x8f7

0xaee: Pop(1)
0xaef: Push((int) 514047)
0xaf0: @@ SetMessage(Stack[-1])
0xaf1: Pop(1)
0xaf2: @@ ClearReplies()
0xaf3: Pop(0)
0xaf4: Push((int) 514048)
0xaf5: Push((int) 15284)
0xaf6: Push((int) 15283)
0xaf7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaf8: Pop(3)
0xaf9: Push((int) 514060)
0xafa: Push((int) 15297)
0xafb: Push((int) 15296)
0xafc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xafd: Pop(3)
0xafe: Return(); Pop(0)

0xaff: Push((int) 15297)
0xb00: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb01: IF (Stack[-1] == 0) GOTO 0xb16; Pop(1)

0xb02: PushEmpty(string)
0xb03: Stack[-1] = "Neutral"
0xb04: Call2 0x8f7

0xb05: Pop(1)
0xb06: Push((int) 514061)
0xb07: @@ SetMessage(Stack[-1])
0xb08: Pop(1)
0xb09: @@ ClearReplies()
0xb0a: Pop(0)
0xb0b: Push((int) 514062)
0xb0c: Push((int) 15286)
0xb0d: Push((int) 15298)
0xb0e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb0f: Pop(3)
0xb10: Push((int) 538830)
0xb11: Push((int) 15286)
0xb12: Push((int) 40758)
0xb13: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb14: Pop(3)
0xb15: Return(); Pop(0)

0xb16: Push((int) 15284)
0xb17: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb18: IF (Stack[-1] == 0) GOTO 0xb2d; Pop(1)

0xb19: PushEmpty(string)
0xb1a: Stack[-1] = "Questioning"
0xb1b: Call2 0x8f7

0xb1c: Pop(1)
0xb1d: Push((int) 514049)
0xb1e: @@ SetMessage(Stack[-1])
0xb1f: Pop(1)
0xb20: @@ ClearReplies()
0xb21: Pop(0)
0xb22: Push((int) 514050)
0xb23: Push((int) 15286)
0xb24: Push((int) 15285)
0xb25: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb26: Pop(3)
0xb27: Push((int) 514055)
0xb28: Push((int) 15291)
0xb29: Push((int) 15290)
0xb2a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb2b: Pop(3)
0xb2c: Return(); Pop(0)

0xb2d: Push((int) 15291)
0xb2e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb2f: IF (Stack[-1] == 0) GOTO 0xb3f; Pop(1)

0xb30: PushEmpty(string)
0xb31: Stack[-1] = "Questioning"
0xb32: Call2 0x8f7

0xb33: Pop(1)
0xb34: Push((int) 514056)
0xb35: @@ SetMessage(Stack[-1])
0xb36: Pop(1)
0xb37: @@ ClearReplies()
0xb38: Pop(0)
0xb39: Push((int) 514057)
0xb3a: Push((int) 15293)
0xb3b: Push((int) 15292)
0xb3c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb3d: Pop(3)
0xb3e: Return(); Pop(0)

0xb3f: Push((int) 15293)
0xb40: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb41: IF (Stack[-1] == 0) GOTO 0xb51; Pop(1)

0xb42: PushEmpty(string)
0xb43: Stack[-1] = "Questioning"
0xb44: Call2 0x8f7

0xb45: Pop(1)
0xb46: Push((int) 514058)
0xb47: @@ SetMessage(Stack[-1])
0xb48: Pop(1)
0xb49: @@ ClearReplies()
0xb4a: Pop(0)
0xb4b: Push((int) 514059)
0xb4c: Push((int) 15286)
0xb4d: Push((int) 15294)
0xb4e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb4f: Pop(3)
0xb50: Return(); Pop(0)

0xb51: Push((int) 15286)
0xb52: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb53: IF (Stack[-1] == 0) GOTO 0xb63; Pop(1)

0xb54: PushEmpty(string)
0xb55: Stack[-1] = "Questioning"
0xb56: Call2 0x8f7

0xb57: Pop(1)
0xb58: Push((int) 514051)
0xb59: @@ SetMessage(Stack[-1])
0xb5a: Pop(1)
0xb5b: @@ ClearReplies()
0xb5c: Pop(0)
0xb5d: Push((int) 514052)
0xb5e: Push((int) 15288)
0xb5f: Push((int) 15287)
0xb60: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb61: Pop(3)
0xb62: Return(); Pop(0)

0xb63: Push((int) 15288)
0xb64: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb65: IF (Stack[-1] == 0) GOTO 0xb75; Pop(1)

0xb66: PushEmpty(string)
0xb67: Stack[-1] = "Grin"
0xb68: Call2 0x8f7

0xb69: Pop(1)
0xb6a: Push((int) 514053)
0xb6b: @@ SetMessage(Stack[-1])
0xb6c: Pop(1)
0xb6d: @@ ClearReplies()
0xb6e: Pop(0)
0xb6f: Push((int) 514054)
0xb70: Push((int) -1)
0xb71: Push((int) 15289)
0xb72: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb73: Pop(3)
0xb74: Return(); Pop(0)

0xb75: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xb76: PushEmpty(bool)
0xb77: Call2 0xfe8

0xb78: Pop(0)
0xb79: IF (Stack[-1] == 0) GOTO 0xb7d; Pop(1)

0xb7a: @ lshStopAnimation()
0xb7b: Pop(0)
0xb7c: GOTO 0xb7f

0xb7d: @ StopAnimation()
0xb7e: Pop(0)
0xb7f: Return(); Pop(0)

0xb80: GOTO 0x90e

0xb81: Return(); Pop(0)

0xb82: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xb83: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xb84: PushEmpty(bool, object, float)
0xb85: Stack[-2] = Stack[-12]
0xb86: Stack[-1] = (float) 70.0
0xb87: Call2 0xe78

0xb88: Pop(2)
0xb89: Pop(1); Push((bool) Stack[-1] == 0)
0xb8a: IF (Stack[-1] == 0) GOTO 0xb8d; Pop(1)

0xb8b: Stack[-10] = (int) -2
0xb8c: Return(); Pop(8)

0xb8d: @ CreateDialog(Stack[-4])
0xb8e: Pop(0)
0xb8f: PushEmpty(int)
0xb90: Call2 0xfe2

0xb91: Pop(0)
0xb92: @@ SetNPCName(Stack[-1])
0xb93: Pop(1)
0xb94: PushEmpty(int)
0xb95: Call2 0xfe0

0xb96: Pop(0)
0xb97: @@ SetNPCDescription(Stack[-1])
0xb98: Pop(1)
0xb99: PushEmpty(string)
0xb9a: Call2 0xfe4

0xb9b: Pop(0)
0xb9c: @@ SetPhoto(Stack[-1])
0xb9d: Pop(1)
0xb9e: PushEmpty(string)
0xb9f: Call2 0xfe6

0xba0: Pop(0)
0xba1: @@ SetPhoto2(Stack[-1])
0xba2: Pop(1)
0xba3: PushEmpty(int)
0xba4: Call2 0x11ae

0xba5: Pop(0)
0xba6: @@ SetPlayerName(Stack[-1])
0xba7: Pop(1)
0xba8: Stack[-2] = (int) -1
0xba9: @ IsOverrideActive(Stack[-3])
0xbaa: Pop(0)
0xbab: Push(Stack[-3])
0xbac: IF (Stack[-1] == 0) GOTO 0xbaf; Pop(1)

0xbad: Stack[-10] = (int) -2
0xbae: Return(); Pop(8)

0xbaf: @ DoDialog(Stack[-4])
0xbb0: Pop(0)
0xbb1: PushEmpty(bool, object)
0xbb2: PushEmpty(object)
0xbb3: Call2 0xf8c

0xbb4: Stack[-2] = Stack[-1]
0xbb5: Pop(1)
0xbb6: Call2 0xecd

0xbb7: Pop(2)
0xbb8: PushEmpty(object, object)
0xbb9: Stack[-2] = Stack[-11]
0xbba: Stack[-1] = Stack[-6]
0xbbb: Push(-2, 4); TaskCall(13)
0xbbc: Call2 0xbd3

0xbbd: Pop(-2, 4); TaskReturn
0xbbe: Pop(2)
0xbbf: @@ IsDialogEnd(Stack[-1])
0xbc0: Pop(0)
0xbc1: Pop(0); Push((bool) Stack[-1] == 0)
0xbc2: IF (Stack[-1] == 0) GOTO 0xbc8; Pop(1)

0xbc3: @ sync()
0xbc4: Pop(0)
0xbc5: @@ IsDialogEnd(Stack[-1])
0xbc6: Pop(0)
0xbc7: GOTO 0xbc1

0xbc8: PushEmpty(object)
0xbc9: Stack[-1] = Stack[-10]
0xbca: Call2 0xebc

0xbcb: Pop(1)
0xbcc: @ StopDialog(Stack[-4])
0xbcd: Pop(0)
0xbce: @@ GetReturnValue(Stack[-2])
0xbcf: Pop(0)
0xbd0: Stack[-10] = Stack[-2]
0xbd1: Return(); Pop(8)

0xbd2: Stack[-4] = 0
0xbd3: PushEmpty()
0xbd4: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xbd5: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xbd6: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xbd7: Push((int) 1)
0xbd8: IF (Stack[-1] == 0) GOTO 0xbef; Pop(1)

0xbd9: PushEmpty(string)
0xbda: Stack[-1] = "Neutral"
0xbdb: Call2 0xc0d

0xbdc: Pop(1)
0xbdd: Push((int) 518006)
0xbde: @@ SetMessage(Stack[-1])
0xbdf: Pop(1)
0xbe0: @@ ClearReplies()
0xbe1: Pop(0)
0xbe2: Push((int) 518007)
0xbe3: Push((int) 36191)
0xbe4: Push((int) 19140)
0xbe5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbe6: Pop(3)
0xbe7: Push((int) 534556)
0xbe8: Push((int) 36189)
0xbe9: Push((int) 36188)
0xbea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbeb: Pop(3)
0xbec: GOTO 0xbef

0xbed: Return(); Pop(0)

0xbee: GOTO 0xbd7

0xbef: PushEmpty(bool)
0xbf0: Call2 0xfe8

0xbf1: Pop(0)
0xbf2: IF (Stack[-1] == 0) GOTO 0xbfe; Pop(1)

0xbf3: @ lshWaitForAnimEnd()
0xbf4: Pop(0)
0xbf5: Push( Stack[3 + Tasks[-1].StackPointer] )
0xbf6: IF (Stack[-1] == 0) GOTO 0xbf8; Pop(1)

0xbf7: GOTO 0xbfd

0xbf8: PushEmpty(string)
0xbf9: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xbfa: Call2 0xf57

0xbfb: Pop(1)
0xbfc: GOTO 0xbf3

0xbfd: GOTO 0xc0c

0xbfe: Push("all")
0xbff: Push("idle")
0xc00: @ PlayAnimation(Stack[-2], Stack[-1])
0xc01: Pop(2)
0xc02: @ WaitForAnimEnd()
0xc03: Pop(0)
0xc04: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc05: IF (Stack[-1] == 0) GOTO 0xc07; Pop(1)

0xc06: GOTO 0xc0c

0xc07: Push("all")
0xc08: Push("idle")
0xc09: @ PlayAnimation(Stack[-2], Stack[-1])
0xc0a: Pop(2)
0xc0b: GOTO 0xc02

0xc0c: Return(); Pop(0)

0xc0d: PushEmpty()
0xc0e: PushEmpty(bool)
0xc0f: Call2 0xfe8

0xc10: Pop(0)
0xc11: Pop(1); Push((bool) Stack[-1] == 0)
0xc12: IF (Stack[-1] == 0) GOTO 0xc14; Pop(1)

0xc13: Return(); Pop(0)

0xc14: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xc15: IF (Stack[-1] == 0) GOTO 0xc17; Pop(1)

0xc16: Return(); Pop(0)

0xc17: PushEmpty(string, bool)
0xc18: Stack[-2] = Stack[-3]
0xc19: Push("")
0xc1a: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xc1b: IF (Stack[-1] == 0) GOTO 0xc1e; Pop(1)

0xc1c: Stack[-1] = (bool) 0
0xc1d: GOTO 0xc1f

0xc1e: Stack[-1] = (bool) 1
0xc1f: Call2 0xf67

0xc20: Pop(2)
0xc21: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xc22: Return(); Pop(0)

0xc23: PushEmpty()
0xc24: Push((int) 1)
0xc25: IF (Stack[-1] == 0) GOTO 0xc8c; Pop(1)

0xc26: PushEmpty()
0xc27: Call2 0xf85

0xc28: Pop(0)
0xc29: Push((int) 19139)
0xc2a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc2b: IF (Stack[-1] == 0) GOTO 0xc40; Pop(1)

0xc2c: PushEmpty(string)
0xc2d: Stack[-1] = "Neutral"
0xc2e: Call2 0xc0d

0xc2f: Pop(1)
0xc30: Push((int) 518006)
0xc31: @@ SetMessage(Stack[-1])
0xc32: Pop(1)
0xc33: @@ ClearReplies()
0xc34: Pop(0)
0xc35: Push((int) 518007)
0xc36: Push((int) 36191)
0xc37: Push((int) 19140)
0xc38: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc39: Pop(3)
0xc3a: Push((int) 534556)
0xc3b: Push((int) 36189)
0xc3c: Push((int) 36188)
0xc3d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc3e: Pop(3)
0xc3f: Return(); Pop(0)

0xc40: Push((int) 36189)
0xc41: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc42: IF (Stack[-1] == 0) GOTO 0xc52; Pop(1)

0xc43: PushEmpty(string)
0xc44: Stack[-1] = "Neutral"
0xc45: Call2 0xc0d

0xc46: Pop(1)
0xc47: Push((int) 534557)
0xc48: @@ SetMessage(Stack[-1])
0xc49: Pop(1)
0xc4a: @@ ClearReplies()
0xc4b: Pop(0)
0xc4c: Push((int) 534558)
0xc4d: Push((int) 36195)
0xc4e: Push((int) 36190)
0xc4f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc50: Pop(3)
0xc51: Return(); Pop(0)

0xc52: Push((int) 36195)
0xc53: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc54: IF (Stack[-1] == 0) GOTO 0xc6e; Pop(1)

0xc55: PushEmpty(string)
0xc56: Stack[-1] = "Neutral"
0xc57: Call2 0xc0d

0xc58: Pop(1)
0xc59: Push((int) 534562)
0xc5a: @@ SetMessage(Stack[-1])
0xc5b: Pop(1)
0xc5c: @@ ClearReplies()
0xc5d: Pop(0)
0xc5e: Push((int) 534563)
0xc5f: Push((int) -1)
0xc60: Push((int) 36196)
0xc61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc62: Pop(3)
0xc63: Push((int) 534565)
0xc64: Push((int) -1)
0xc65: Push((int) 36198)
0xc66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc67: Pop(3)
0xc68: Push((int) 534564)
0xc69: Push((int) -1)
0xc6a: Push((int) 36197)
0xc6b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc6c: Pop(3)
0xc6d: Return(); Pop(0)

0xc6e: Push((int) 36191)
0xc6f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc70: IF (Stack[-1] == 0) GOTO 0xc80; Pop(1)

0xc71: PushEmpty(string)
0xc72: Stack[-1] = "Neutral"
0xc73: Call2 0xc0d

0xc74: Pop(1)
0xc75: Push((int) 534559)
0xc76: @@ SetMessage(Stack[-1])
0xc77: Pop(1)
0xc78: @@ ClearReplies()
0xc79: Pop(0)
0xc7a: Push((int) 534560)
0xc7b: Push((int) 36189)
0xc7c: Push((int) 36192)
0xc7d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc7e: Pop(3)
0xc7f: Return(); Pop(0)

0xc80: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xc81: PushEmpty(bool)
0xc82: Call2 0xfe8

0xc83: Pop(0)
0xc84: IF (Stack[-1] == 0) GOTO 0xc88; Pop(1)

0xc85: @ lshStopAnimation()
0xc86: Pop(0)
0xc87: GOTO 0xc8a

0xc88: @ StopAnimation()
0xc89: Pop(0)
0xc8a: Return(); Pop(0)

0xc8b: GOTO 0xc24

0xc8c: Return(); Pop(0)

0xc8d: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xc8e: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xc8f: PushEmpty(bool, object, float)
0xc90: Stack[-2] = Stack[-12]
0xc91: Stack[-1] = (float) 70.0
0xc92: Call2 0xe78

0xc93: Pop(2)
0xc94: Pop(1); Push((bool) Stack[-1] == 0)
0xc95: IF (Stack[-1] == 0) GOTO 0xc98; Pop(1)

0xc96: Stack[-10] = (int) -2
0xc97: Return(); Pop(8)

0xc98: @ CreateDialog(Stack[-4])
0xc99: Pop(0)
0xc9a: PushEmpty(int)
0xc9b: Call2 0xfe2

0xc9c: Pop(0)
0xc9d: @@ SetNPCName(Stack[-1])
0xc9e: Pop(1)
0xc9f: PushEmpty(int)
0xca0: Call2 0xfe0

0xca1: Pop(0)
0xca2: @@ SetNPCDescription(Stack[-1])
0xca3: Pop(1)
0xca4: PushEmpty(string)
0xca5: Call2 0xfe4

0xca6: Pop(0)
0xca7: @@ SetPhoto(Stack[-1])
0xca8: Pop(1)
0xca9: PushEmpty(string)
0xcaa: Call2 0xfe6

0xcab: Pop(0)
0xcac: @@ SetPhoto2(Stack[-1])
0xcad: Pop(1)
0xcae: PushEmpty(int)
0xcaf: Call2 0x11ae

0xcb0: Pop(0)
0xcb1: @@ SetPlayerName(Stack[-1])
0xcb2: Pop(1)
0xcb3: Stack[-2] = (int) -1
0xcb4: @ IsOverrideActive(Stack[-3])
0xcb5: Pop(0)
0xcb6: Push(Stack[-3])
0xcb7: IF (Stack[-1] == 0) GOTO 0xcba; Pop(1)

0xcb8: Stack[-10] = (int) -2
0xcb9: Return(); Pop(8)

0xcba: @ DoDialog(Stack[-4])
0xcbb: Pop(0)
0xcbc: PushEmpty(bool, object)
0xcbd: PushEmpty(object)
0xcbe: Call2 0xf8c

0xcbf: Stack[-2] = Stack[-1]
0xcc0: Pop(1)
0xcc1: Call2 0xecd

0xcc2: Pop(2)
0xcc3: PushEmpty(object, object)
0xcc4: Stack[-2] = Stack[-11]
0xcc5: Stack[-1] = Stack[-6]
0xcc6: Push(-2, 4); TaskCall(15)
0xcc7: Call2 0xcde

0xcc8: Pop(-2, 4); TaskReturn
0xcc9: Pop(2)
0xcca: @@ IsDialogEnd(Stack[-1])
0xccb: Pop(0)
0xccc: Pop(0); Push((bool) Stack[-1] == 0)
0xccd: IF (Stack[-1] == 0) GOTO 0xcd3; Pop(1)

0xcce: @ sync()
0xccf: Pop(0)
0xcd0: @@ IsDialogEnd(Stack[-1])
0xcd1: Pop(0)
0xcd2: GOTO 0xccc

0xcd3: PushEmpty(object)
0xcd4: Stack[-1] = Stack[-10]
0xcd5: Call2 0xebc

0xcd6: Pop(1)
0xcd7: @ StopDialog(Stack[-4])
0xcd8: Pop(0)
0xcd9: @@ GetReturnValue(Stack[-2])
0xcda: Pop(0)
0xcdb: Stack[-10] = Stack[-2]
0xcdc: Return(); Pop(8)

0xcdd: Stack[-4] = 0
0xcde: PushEmpty()
0xcdf: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xce0: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xce1: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xce2: Push((int) 1)
0xce3: IF (Stack[-1] == 0) GOTO 0xcfa; Pop(1)

0xce4: PushEmpty(string)
0xce5: Stack[-1] = "Neutral"
0xce6: Call2 0xd18

0xce7: Pop(1)
0xce8: Push((int) 540542)
0xce9: @@ SetMessage(Stack[-1])
0xcea: Pop(1)
0xceb: @@ ClearReplies()
0xcec: Pop(0)
0xced: Push((int) 540543)
0xcee: Push((int) -1)
0xcef: Push((int) 42552)
0xcf0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcf1: Pop(3)
0xcf2: Push((int) 540796)
0xcf3: Push((int) -1)
0xcf4: Push((int) 42845)
0xcf5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcf6: Pop(3)
0xcf7: GOTO 0xcfa

0xcf8: Return(); Pop(0)

0xcf9: GOTO 0xce2

0xcfa: PushEmpty(bool)
0xcfb: Call2 0xfe8

0xcfc: Pop(0)
0xcfd: IF (Stack[-1] == 0) GOTO 0xd09; Pop(1)

0xcfe: @ lshWaitForAnimEnd()
0xcff: Pop(0)
0xd00: Push( Stack[3 + Tasks[-1].StackPointer] )
0xd01: IF (Stack[-1] == 0) GOTO 0xd03; Pop(1)

0xd02: GOTO 0xd08

0xd03: PushEmpty(string)
0xd04: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xd05: Call2 0xf57

0xd06: Pop(1)
0xd07: GOTO 0xcfe

0xd08: GOTO 0xd17

0xd09: Push("all")
0xd0a: Push("idle")
0xd0b: @ PlayAnimation(Stack[-2], Stack[-1])
0xd0c: Pop(2)
0xd0d: @ WaitForAnimEnd()
0xd0e: Pop(0)
0xd0f: Push( Stack[3 + Tasks[-1].StackPointer] )
0xd10: IF (Stack[-1] == 0) GOTO 0xd12; Pop(1)

0xd11: GOTO 0xd17

0xd12: Push("all")
0xd13: Push("idle")
0xd14: @ PlayAnimation(Stack[-2], Stack[-1])
0xd15: Pop(2)
0xd16: GOTO 0xd0d

0xd17: Return(); Pop(0)

0xd18: PushEmpty()
0xd19: PushEmpty(bool)
0xd1a: Call2 0xfe8

0xd1b: Pop(0)
0xd1c: Pop(1); Push((bool) Stack[-1] == 0)
0xd1d: IF (Stack[-1] == 0) GOTO 0xd1f; Pop(1)

0xd1e: Return(); Pop(0)

0xd1f: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xd20: IF (Stack[-1] == 0) GOTO 0xd22; Pop(1)

0xd21: Return(); Pop(0)

0xd22: PushEmpty(string, bool)
0xd23: Stack[-2] = Stack[-3]
0xd24: Push("")
0xd25: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xd26: IF (Stack[-1] == 0) GOTO 0xd29; Pop(1)

0xd27: Stack[-1] = (bool) 0
0xd28: GOTO 0xd2a

0xd29: Stack[-1] = (bool) 1
0xd2a: Call2 0xf67

0xd2b: Pop(2)
0xd2c: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xd2d: Return(); Pop(0)

0xd2e: PushEmpty()
0xd2f: Push((int) 1)
0xd30: IF (Stack[-1] == 0) GOTO 0xd57; Pop(1)

0xd31: PushEmpty()
0xd32: Call2 0xf85

0xd33: Pop(0)
0xd34: Push((int) 42551)
0xd35: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd36: IF (Stack[-1] == 0) GOTO 0xd4b; Pop(1)

0xd37: PushEmpty(string)
0xd38: Stack[-1] = "Neutral"
0xd39: Call2 0xd18

0xd3a: Pop(1)
0xd3b: Push((int) 540542)
0xd3c: @@ SetMessage(Stack[-1])
0xd3d: Pop(1)
0xd3e: @@ ClearReplies()
0xd3f: Pop(0)
0xd40: Push((int) 540543)
0xd41: Push((int) -1)
0xd42: Push((int) 42552)
0xd43: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd44: Pop(3)
0xd45: Push((int) 540796)
0xd46: Push((int) -1)
0xd47: Push((int) 42845)
0xd48: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd49: Pop(3)
0xd4a: Return(); Pop(0)

0xd4b: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xd4c: PushEmpty(bool)
0xd4d: Call2 0xfe8

0xd4e: Pop(0)
0xd4f: IF (Stack[-1] == 0) GOTO 0xd53; Pop(1)

0xd50: @ lshStopAnimation()
0xd51: Pop(0)
0xd52: GOTO 0xd55

0xd53: @ StopAnimation()
0xd54: Pop(0)
0xd55: Return(); Pop(0)

0xd56: GOTO 0xd2f

0xd57: Return(); Pop(0)

0xd58: PushEmpty()
0xd59: Call2 0xd5c

0xd5a: Pop(0)
0xd5b: Return(); Pop(0)

0xd5c: PushEmpty(bool)
0xd5d: Call2 0xe73

0xd5e: Pop(0)
0xd5f: Pop(1); Push((bool) Stack[-1] == 0)
0xd60: IF (Stack[-1] == 0) GOTO 0xd63; Pop(1)

0xd61: @ Hold()
0xd62: Pop(0)
0xd63: @ GetDirection(Stack[-0])
0xd64: Pop(0)
0xd65: PushEmpty()
0xd66: Call2 0xe0c

0xd67: Pop(0)
0xd68: GOTO 0xd65

0xd69: Return(); Pop(0)

0xd6a: PushEmpty(object, object)
0xd6b: Push("player")
0xd6c: @ FindActor(Stack[-2], Stack[-1])
0xd6d: Pop(1)
0xd6e: Pop(0); Push((bool) Stack[-1] == 0)
0xd6f: IF (Stack[-1] == 0) GOTO 0xd72; Pop(1)

0xd70: Stack[-3] = (bool) 0
0xd71: Return(); Pop(2)

0xd72: PushEmpty(bool, object)
0xd73: Stack[-1] = Stack[-3]
0xd74: Call2 0xe6a

0xd75: Stack[-5] = Stack[-2]
0xd76: Pop(2)
0xd77: Return(); Pop(2)

0xd78: Stack[-1] = 0
0xd79: Push(CvectorIndex(Stack[-0], 0))
0xd7a: Push(CvectorIndex(Stack[-0], 2))
0xd7b: @ RotateAsync(Stack[-2], Stack[-1])
0xd7c: Pop(2)
0xd7d: Return(); Pop(0)

0xd7e: PushEmpty(object, bool, object, bool)
0xd7f: Push("player")
0xd80: @ FindActor(Stack[-3], Stack[-1])
0xd81: Pop(1)
0xd82: Pop(0); Push((bool) Stack[-2] == 0)
0xd83: IF (Stack[-1] == 0) GOTO 0xd86; Pop(1)

0xd84: Stack[-5] = (bool) 0
0xd85: Return(); Pop(4)

0xd86: PushEmpty(float, object)
0xd87: Stack[-1] = Stack[-4]
0xd88: Call2 0xe58

0xd89: Pop(1)
0xd8a: Push((float)90000.0)
0xd8b: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0xd8c: IF (Stack[-1] == 0) GOTO 0xd8f; Pop(1)

0xd8d: Stack[-5] = (bool) 0
0xd8e: Return(); Pop(4)

0xd8f: @ CanSee(Stack[-1], Stack[-2])
0xd90: Pop(0)
0xd91: Stack[-5] = Stack[-1]
0xd92: Return(); Pop(4)

0xd93: Stack[-2] = 0
0xd94: PushEmpty(float, float)
0xd95: Push((int) 8)
0xd96: Push((int) 16)
0xd97: @ rand(Stack[-3], Stack[-2], Stack[-1])
0xd98: Pop(2)
0xd99: Push((int) 10)
0xd9a: @ SetTimer(Stack[-1], Stack[-2])
0xd9b: Pop(1)
0xd9c: Return(); Pop(2)

0xd9d: Push((int) 10)
0xd9e: @ KillTimer(Stack[-1])
0xd9f: Pop(1)
0xda0: Return(); Pop(0)

0xda1: PushEmpty()
0xda2: Push((int) 10)
0xda3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xda4: IF (Stack[-1] == 0) GOTO 0xdc6; Pop(1)

0xda5: PushEmpty()
0xda6: Call2 0xd9d

0xda7: Pop(0)
0xda8: PushEmpty(bool)
0xda9: Stack[-1] = (bool) 0
0xdaa: PushEmpty(bool)
0xdab: Call2 0xe73

0xdac: Pop(0)
0xdad: IF (Stack[-1] == 0) GOTO 0xdb3; Pop(1)

0xdae: PushEmpty(bool)
0xdaf: Call2 0xd7e

0xdb0: Pop(0)
0xdb1: IF (Stack[-1] == 0) GOTO 0xdb3; Pop(1)

0xdb2: Stack[-1] = (bool) 1
0xdb3: IF (Stack[-1] == 0) GOTO 0xdc0; Pop(1)

0xdb4: PushEmpty(bool)
0xdb5: Call2 0xd6a

0xdb6: Pop(0)
0xdb7: IF (Stack[-1] == 0) GOTO 0xdbf; Pop(1)

0xdb8: PushEmpty(bool, object)
0xdb9: PushEmpty(object)
0xdba: Call2 0xf8c

0xdbb: Stack[-2] = Stack[-1]
0xdbc: Pop(1)
0xdbd: Call2 0xf07

0xdbe: Pop(2)
0xdbf: GOTO 0xdc6

0xdc0: PushEmpty()
0xdc1: Call2 0xd79

0xdc2: Pop(0)
0xdc3: PushEmpty()
0xdc4: Call2 0xd94

0xdc5: Pop(0)
0xdc6: Return(); Pop(0)

0xdc7: PushEmpty()
0xdc8: Call2 0xe53

0xdc9: Pop(0)
0xdca: PushEmpty()
0xdcb: Call2 0xd9d

0xdcc: Pop(0)
0xdcd: @ lshStopSpeech()
0xdce: Pop(0)
0xdcf: @ lshStopAnimation()
0xdd0: Pop(0)
0xdd1: @ StopAsync()
0xdd2: Pop(0)
0xdd3: @ Hold()
0xdd4: Pop(0)
0xdd5: Return(); Pop(0)

0xdd6: @ StopGroup0()
0xdd7: Pop(0)
0xdd8: PushEmpty()
0xdd9: Call2 0xd9d

0xdda: Pop(0)
0xddb: PushEmpty(string)
0xddc: Stack[-1] = "Neutral"
0xddd: Call2 0xf57

0xdde: Pop(1)
0xddf: PushEmpty()
0xde0: Call2 0xd94

0xde1: Pop(0)
0xde2: Return(); Pop(0)

0xde3: PushEmpty()
0xde4: Push(Stack[-1])
0xde5: IF (Stack[-1] == 0) GOTO 0xdea; Pop(1)

0xde6: PushEmpty()
0xde7: Call2 0xd94

0xde8: Pop(0)
0xde9: GOTO 0xdee

0xdea: PushEmpty(string)
0xdeb: Stack[-1] = "Neutral"
0xdec: Call2 0xf57

0xded: Pop(1)
0xdee: Return(); Pop(0)

0xdef: PushEmpty(bool, bool)
0xdf0: @ IsOverrideActive(Stack[-1])
0xdf1: Pop(0)
0xdf2: Pop(0); Push((bool) Stack[-1] == 0)
0xdf3: IF (Stack[-1] == 0) GOTO 0xe0b; Pop(1)

0xdf4: EventDisable(0)
0xdf5: PushEmpty()
0xdf6: Call2 0xe53

0xdf7: Pop(0)
0xdf8: PushEmpty(bool, object)
0xdf9: Stack[-1] = Stack[-5]
0xdfa: Call2 0xe6a

0xdfb: Pop(2)
0xdfc: EventEnable(0)
0xdfd: PushEmpty(object)
0xdfe: Stack[-1] = Stack[-4]
0xdff: Call2 0x11bf

0xe00: Pop(1)
0xe01: PushEmpty(string)
0xe02: Stack[-1] = "Neutral"
0xe03: Call2 0xf57

0xe04: Pop(1)
0xe05: PushEmpty()
0xe06: Call2 0xd9d

0xe07: Pop(0)
0xe08: PushEmpty()
0xe09: Call2 0xd94

0xe0a: Pop(0)
0xe0b: Return(); Pop(2)

0xe0c: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0xe0d: @ WaitForAnimEnd()
0xe0e: Pop(0)
0xe0f: PushEmpty(bool)
0xe10: Call2 0xe73

0xe11: Pop(0)
0xe12: Pop(1); Push((bool) Stack[-1] == 0)
0xe13: IF (Stack[-1] == 0) GOTO 0xe15; Pop(1)

0xe14: Return(); Pop(12)

0xe15: PushEmpty(int)
0xe16: Call2 0xfcf

0xe17: Stack[-7] = Stack[-1]
0xe18: Pop(1)
0xe19: Stack[-5] = (int) 0
0xe1a: PushEmpty(bool)
0xe1b: Stack[-1] = (bool) 0
0xe1c: Push((int) 5)
0xe1d: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0xe1e: IF (Stack[-1] == 0) GOTO 0xe24; Pop(1)

0xe1f: PushEmpty(bool)
0xe20: Call2 0xe73

0xe21: Pop(0)
0xe22: IF (Stack[-1] == 0) GOTO 0xe24; Pop(1)

0xe23: Stack[-1] = (bool) 1
0xe24: IF (Stack[-1] == 0) GOTO 0xe4e; Pop(1)

0xe25: Pop(0); Push((bool) Stack[-6] == 0)
0xe26: IF (Stack[-1] == 0) GOTO 0xe2e; Pop(1)

0xe27: Push((int) 3)
0xe28: @ Sleep(Stack[-1], Stack[-5])
0xe29: Pop(1)
0xe2a: Pop(0); Push((bool) Stack[-4] == 0)
0xe2b: IF (Stack[-1] == 0) GOTO 0xe2d; Pop(1)

0xe2c: GOTO 0xe4e

0xe2d: GOTO 0xe43

0xe2e: @ irand(Stack[-3], Stack[-6])
0xe2f: Pop(0)
0xe30: Push((int) 5)
0xe31: @ irand(Stack[-3], Stack[-1])
0xe32: Pop(1)
0xe33: Push((int) 0)
0xe34: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0xe35: IF (Stack[-1] == 0) GOTO 0xe37; Pop(1)

0xe36: Stack[-3] = (int) 0
0xe37: Push("all")
0xe38: PushEmpty(string, int)
0xe39: Stack[-1] = Stack[-6]
0xe3a: Call2 0xfc8

0xe3b: Pop(1)
0xe3c: @ PlayAnimation(Stack[-2], Stack[-1])
0xe3d: Pop(2)
0xe3e: @ WaitForAnimEnd(Stack[-1])
0xe3f: Pop(0)
0xe40: Pop(0); Push((bool) Stack[-1] == 0)
0xe41: IF (Stack[-1] == 0) GOTO 0xe43; Pop(1)

0xe42: GOTO 0xe4e

0xe43: PushEmpty(bool)
0xe44: Call2 0xe51

0xe45: Pop(0)
0xe46: Pop(1); Push((bool) Stack[-1] == 0)
0xe47: IF (Stack[-1] == 0) GOTO 0xe49; Pop(1)

0xe48: GOTO 0xe4e

0xe49: @ ResetAAS()
0xe4a: Pop(0)
0xe4b: Push((int) 1)
0xe4c: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0xe4d: GOTO 0xe1a

0xe4e: @ ResetAAS()
0xe4f: Pop(0)
0xe50: Return(); Pop(12)

0xe51: Stack[-1] = (bool) 1
0xe52: Return(); Pop(0)

0xe53: @ StopAnimation()
0xe54: Pop(0)
0xe55: @ StopGroup0()
0xe56: Pop(0)
0xe57: Return(); Pop(0)

0xe58: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xe59: @ GetPosition(Stack[-3])
0xe5a: Pop(0)
0xe5b: @@ GetPosition(Stack[-2])
0xe5c: Pop(0)
0xe5d: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0xe5e: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0xe5f: Return(); Pop(6)

0xe60: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0xe61: @ GetPosition(Stack[-3])
0xe62: Pop(0)
0xe63: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0xe64: Push(CvectorIndex(Stack[-2], 0))
0xe65: Push(CvectorIndex(Stack[-3], 2))
0xe66: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0xe67: Pop(2)
0xe68: Stack[-8] = Stack[-1]
0xe69: Return(); Pop(6)

0xe6a: PushEmpty(cvector, cvector)
0xe6b: @@ GetPosition(Stack[-1])
0xe6c: Pop(0)
0xe6d: PushEmpty(bool, cvector)
0xe6e: Stack[-1] = Stack[-3]
0xe6f: Call2 0xe60

0xe70: Stack[-6] = Stack[-2]
0xe71: Pop(2)
0xe72: Return(); Pop(2)

0xe73: PushEmpty(bool, bool)
0xe74: @ IsLoaded(Stack[-1])
0xe75: Pop(0)
0xe76: Stack[-3] = Stack[-1]
0xe77: Return(); Pop(2)

0xe78: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0xe79: @@ GetPosition(Stack[-8])
0xe7a: Pop(0)
0xe7b: @@ GetEyesHeight(Stack[-9])
0xe7c: Pop(0)
0xe7d: Push(CvectorIndex(Stack[-8], 1))
0xe7e: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xe7f: CvectorIndex(Stack[-9], 1) = Stack[-1];
0xe80: @ GetPosition(Stack[-7])
0xe81: Pop(0)
0xe82: @ GetEyesHeight(Stack[-9])
0xe83: Pop(0)
0xe84: Push(CvectorIndex(Stack[-7], 1))
0xe85: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xe86: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xe87: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xe88: Push(CvectorIndex(Stack[-6], 1))
0xe89: Stack[-1] = (int) 0
0xe8a: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xe8b: Pop(0); Push(Stack[-6] | Stack[-6]);
0xe8c: Pop(1); Push(Sqrt(Stack[-1]))
0xe8d: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0xe8e: Stack[-5] = -Stack[-6]; Pop(0);
0xe8f: Pop(0); Push(Stack[-6] * Stack[-19]);
0xe90: PushEmpty(cvector, cvector)
0xe91: Push(CVector(0.0, 1.0, 0.0))
0xe92: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0xe93: Call2 0xf92

0xe94: Pop(1)
0xe95: Push((int) 25)
0xe96: Pop(2); Push(Stack[-2] * Stack[-1]);
0xe97: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe98: Push(CVector(0.0, 10.0, 0.0))
0xe99: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xe9a: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0xe9b: @ IsOverrideActive(Stack[-2])
0xe9c: Pop(0)
0xe9d: Push(Stack[-2])
0xe9e: IF (Stack[-1] == 0) GOTO 0xea1; Pop(1)

0xe9f: Stack[-21] = (bool) 0
0xea0: Return(); Pop(18)

0xea1: @ StopWorld()
0xea2: Pop(0)
0xea3: @ CameraTransit(Stack[-3], Stack[-5])
0xea4: Pop(0)
0xea5: Push(CvectorIndex(Stack[-4], 0))
0xea6: Push(CvectorIndex(Stack[-5], 2))
0xea7: @ Rotate(Stack[-2], Stack[-1])
0xea8: Pop(2)
0xea9: PushEmpty(bool)
0xeaa: Call2 0xfe8

0xeab: Pop(0)
0xeac: IF (Stack[-1] == 0) GOTO 0xeae; Pop(1)

0xead: GOTO 0xeb6

0xeae: Push("head")
0xeaf: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xeb0: Pop(1)
0xeb1: Push(Stack[-1])
0xeb2: IF (Stack[-1] == 0) GOTO 0xeb6; Pop(1)

0xeb3: Push("head")
0xeb4: @ LookAsyncCamera(Stack[-1])
0xeb5: Pop(1)
0xeb6: @ CameraWaitForPlayFinish()
0xeb7: Pop(0)
0xeb8: @ ResumeWorld()
0xeb9: Pop(0)
0xeba: Stack[-21] = (bool) 1
0xebb: Return(); Pop(18)

0xebc: PushEmpty(bool, bool)
0xebd: @ CameraSwitchToNormal()
0xebe: Pop(0)
0xebf: PushEmpty(bool)
0xec0: Call2 0xfe8

0xec1: Pop(0)
0xec2: IF (Stack[-1] == 0) GOTO 0xec4; Pop(1)

0xec3: GOTO 0xecc

0xec4: Push("head")
0xec5: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xec6: Pop(1)
0xec7: Push(Stack[-1])
0xec8: IF (Stack[-1] == 0) GOTO 0xecc; Pop(1)

0xec9: Push("head")
0xeca: @ UnlookAsync(Stack[-1])
0xecb: Pop(1)
0xecc: Return(); Pop(2)

0xecd: PushEmpty(int, int, int, int)
0xece: Push("voice_common")
0xecf: @ GetVariable(Stack[-1], Stack[-3])
0xed0: Pop(1)
0xed1: Push(Stack[-2])
0xed2: IF (Stack[-1] == 0) GOTO 0xef3; Pop(1)

0xed3: PushEmpty(bool, object)
0xed4: Stack[-1] = Stack[-7]
0xed5: Call2 0xf07

0xed6: Pop(1)
0xed7: Pop(1); Push((bool) Stack[-1] == 0)
0xed8: IF (Stack[-1] == 0) GOTO 0xee1; Pop(1)

0xed9: PushEmpty(bool, object)
0xeda: Stack[-1] = Stack[-7]
0xedb: Call2 0xf2c

0xedc: Pop(1)
0xedd: Pop(1); Push((bool) Stack[-1] == 0)
0xede: IF (Stack[-1] == 0) GOTO 0xee1; Pop(1)

0xedf: Stack[-6] = (bool) 0
0xee0: Return(); Pop(4)

0xee1: Push((int) 2)
0xee2: @ irand(Stack[-2], Stack[-1])
0xee3: Pop(1)
0xee4: Push(Stack[-1])
0xee5: IF (Stack[-1] == 0) GOTO 0xeee; Pop(1)

0xee6: Push("voice_common")
0xee7: Push((int) 1)
0xee8: Pop(1); Push(Stack[-4] + Stack[-1]);
0xee9: Push((int) 3)
0xeea: Pop(2); Push(Stack[-2] % Stack[-1]);
0xeeb: @ SetVariable(Stack[-2], Stack[-1])
0xeec: Pop(2)
0xeed: GOTO 0xef2

0xeee: Push("voice_common")
0xeef: Push((int) 0)
0xef0: @ SetVariable(Stack[-2], Stack[-1])
0xef1: Pop(2)
0xef2: GOTO 0xf05

0xef3: PushEmpty(bool, object)
0xef4: Stack[-1] = Stack[-7]
0xef5: Call2 0xf2c

0xef6: Pop(1)
0xef7: Pop(1); Push((bool) Stack[-1] == 0)
0xef8: IF (Stack[-1] == 0) GOTO 0xf01; Pop(1)

0xef9: PushEmpty(bool, object)
0xefa: Stack[-1] = Stack[-7]
0xefb: Call2 0xf07

0xefc: Pop(1)
0xefd: Pop(1); Push((bool) Stack[-1] == 0)
0xefe: IF (Stack[-1] == 0) GOTO 0xf01; Pop(1)

0xeff: Stack[-6] = (bool) 0
0xf00: Return(); Pop(4)

0xf01: Push("voice_common")
0xf02: Push((int) 1)
0xf03: @ SetVariable(Stack[-2], Stack[-1])
0xf04: Pop(2)
0xf05: Stack[-6] = (bool) 1
0xf06: Return(); Pop(4)

0xf07: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xf08: Stack[-5] = "c"
0xf09: Stack[-4] = (int) 0
0xf0a: Push((int) 1)
0xf0b: IF (Stack[-1] == 0) GOTO 0xf17; Pop(1)

0xf0c: Push((int) 1)
0xf0d: Pop(1); Push(Stack[-5] + Stack[-1]);
0xf0e: Pop(1); Push(Stack[-6] + Stack[-1]);
0xf0f: @@ HasProperty(Stack[-1], Stack[-4])
0xf10: Pop(1)
0xf11: Pop(0); Push((bool) Stack[-3] == 0)
0xf12: IF (Stack[-1] == 0) GOTO 0xf14; Pop(1)

0xf13: GOTO 0xf17

0xf14: Push((int) 1)
0xf15: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xf16: GOTO 0xf0a

0xf17: Pop(0); Push((bool) Stack[-4] == 0)
0xf18: IF (Stack[-1] == 0) GOTO 0xf1b; Pop(1)

0xf19: Stack[-12] = (bool) 0
0xf1a: Return(); Pop(10)

0xf1b: Stack[-2] = (int) 0
0xf1c: Push((int) 1)
0xf1d: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xf1e: IF (Stack[-1] == 0) GOTO 0xf21; Pop(1)

0xf1f: @ irand(Stack[-2], Stack[-4])
0xf20: Pop(0)
0xf21: Push((int) 1)
0xf22: Pop(1); Push(Stack[-3] + Stack[-1]);
0xf23: Pop(1); Push(Stack[-6] + Stack[-1]);
0xf24: @@ GetProperty(Stack[-1], Stack[-2])
0xf25: Pop(1)
0xf26: PushEmpty(bool, string)
0xf27: Stack[-1] = Stack[-3]
0xf28: Call2 0xf76

0xf29: Stack[-14] = Stack[-2]
0xf2a: Pop(2)
0xf2b: Return(); Pop(10)

0xf2c: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xf2d: Push("d")
0xf2e: PushEmpty(int)
0xf2f: Call2 0xfb9

0xf30: Pop(0)
0xf31: Pop(2); Push(Stack[-2] + Stack[-1]);
0xf32: Push("m")
0xf33: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0xf34: Stack[-4] = (int) 0
0xf35: Push((int) 1)
0xf36: IF (Stack[-1] == 0) GOTO 0xf42; Pop(1)

0xf37: Push((int) 1)
0xf38: Pop(1); Push(Stack[-5] + Stack[-1]);
0xf39: Pop(1); Push(Stack[-6] + Stack[-1]);
0xf3a: @@ HasProperty(Stack[-1], Stack[-4])
0xf3b: Pop(1)
0xf3c: Pop(0); Push((bool) Stack[-3] == 0)
0xf3d: IF (Stack[-1] == 0) GOTO 0xf3f; Pop(1)

0xf3e: GOTO 0xf42

0xf3f: Push((int) 1)
0xf40: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xf41: GOTO 0xf35

0xf42: Pop(0); Push((bool) Stack[-4] == 0)
0xf43: IF (Stack[-1] == 0) GOTO 0xf46; Pop(1)

0xf44: Stack[-12] = (bool) 0
0xf45: Return(); Pop(10)

0xf46: Stack[-2] = (int) 0
0xf47: Push((int) 1)
0xf48: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xf49: IF (Stack[-1] == 0) GOTO 0xf4c; Pop(1)

0xf4a: @ irand(Stack[-2], Stack[-4])
0xf4b: Pop(0)
0xf4c: Push((int) 1)
0xf4d: Pop(1); Push(Stack[-3] + Stack[-1]);
0xf4e: Pop(1); Push(Stack[-6] + Stack[-1]);
0xf4f: @@ GetProperty(Stack[-1], Stack[-2])
0xf50: Pop(1)
0xf51: PushEmpty(bool, string)
0xf52: Stack[-1] = Stack[-3]
0xf53: Call2 0xf76

0xf54: Stack[-14] = Stack[-2]
0xf55: Pop(2)
0xf56: Return(); Pop(10)

0xf57: PushEmpty(bool, float, float, bool, float, float)
0xf58: @ lshHasAnimation(Stack[-3], Stack[-7])
0xf59: Pop(0)
0xf5a: Push(Stack[-3])
0xf5b: IF (Stack[-1] == 0) GOTO 0xf62; Pop(1)

0xf5c: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0xf5d: Pop(0)
0xf5e: Push((bool) 0)
0xf5f: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xf60: Pop(1)
0xf61: GOTO 0xf66

0xf62: Push("Can't find lsh animation : ")
0xf63: Pop(1); Push(Stack[-1] + Stack[-8]);
0xf64: @ Trace(Stack[-1])
0xf65: Pop(1)
0xf66: Return(); Pop(6)

0xf67: PushEmpty(bool, float, float, bool, float, float)
0xf68: @ lshHasAnimation(Stack[-3], Stack[-8])
0xf69: Pop(0)
0xf6a: Push(Stack[-3])
0xf6b: IF (Stack[-1] == 0) GOTO 0xf71; Pop(1)

0xf6c: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0xf6d: Pop(0)
0xf6e: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0xf6f: Pop(0)
0xf70: GOTO 0xf75

0xf71: Push("Can't find lsh animation : ")
0xf72: Pop(1); Push(Stack[-1] + Stack[-9]);
0xf73: @ Trace(Stack[-1])
0xf74: Pop(1)
0xf75: Return(); Pop(6)

0xf76: PushEmpty(bool, bool)
0xf77: PushEmpty(bool)
0xf78: Call2 0xfe8

0xf79: Pop(0)
0xf7a: IF (Stack[-1] == 0) GOTO 0xf83; Pop(1)

0xf7b: @ lshHasSpeech(Stack[-1], Stack[-3])
0xf7c: Pop(0)
0xf7d: Push(Stack[-1])
0xf7e: IF (Stack[-1] == 0) GOTO 0xf83; Pop(1)

0xf7f: @ lshPlaySpeech(Stack[-3])
0xf80: Pop(0)
0xf81: Stack[-4] = (bool) 1
0xf82: Return(); Pop(2)

0xf83: Stack[-4] = (bool) 0
0xf84: Return(); Pop(2)

0xf85: PushEmpty(bool)
0xf86: Call2 0xfe8

0xf87: Pop(0)
0xf88: IF (Stack[-1] == 0) GOTO 0xf8b; Pop(1)

0xf89: @ lshStopSpeech()
0xf8a: Pop(0)
0xf8b: Return(); Pop(0)

0xf8c: PushEmpty(object, object)
0xf8d: @ self(Stack[-1])
0xf8e: Pop(0)
0xf8f: Stack[-3] = Stack[-1]
0xf90: Return(); Pop(2)

0xf91: Stack[-1] = 0
0xf92: PushEmpty(float, float)
0xf93: Pop(0); Push(Stack[-3] | Stack[-3]);
0xf94: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xf95: Push((float)0.0)
0xf96: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xf97: IF (Stack[-1] == 0) GOTO 0xf9a; Pop(1)

0xf98: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xf99: Return(); Pop(2)

0xf9a: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xf9b: Return(); Pop(2)

0xf9c: PushEmpty(int, int)
0xf9d: @ GetVariable(Stack[-3], Stack[-1])
0xf9e: Pop(0)
0xf9f: Stack[-4] = Stack[-1]
0xfa0: Return(); Pop(2)

0xfa1: PushEmpty(int, bool, int, bool)
0xfa2: @ GetInvItemByName(Stack[-2], Stack[-5])
0xfa3: Pop(0)
0xfa4: @@ HasItem(Stack[-2], Stack[-1])
0xfa5: Pop(0)
0xfa6: Stack[-7] = Stack[-1]
0xfa7: Return(); Pop(4)

0xfa8: PushEmpty(object, object)
0xfa9: @ FindActor(Stack[-1], Stack[-4])
0xfaa: Pop(0)
0xfab: Pop(0); Push((bool) Stack[-1] == 0)
0xfac: IF (Stack[-1] == 0) GOTO 0xfaf; Pop(1)

0xfad: Stack[-5] = (bool) 0
0xfae: Return(); Pop(2)

0xfaf: @ Trigger(Stack[-1], Stack[-3])
0xfb0: Pop(0)
0xfb1: Stack[-5] = (bool) 1
0xfb2: Return(); Pop(2)

0xfb3: Stack[-1] = 0
0xfb4: PushEmpty(float, float)
0xfb5: @ GetGameTime(Stack[-1])
0xfb6: Pop(0)
0xfb7: Stack[-3] = Stack[-1]
0xfb8: Return(); Pop(2)

0xfb9: PushEmpty(float, float)
0xfba: @ GetGameTime(Stack[-1])
0xfbb: Pop(0)
0xfbc: Push((int) 1)
0xfbd: PushEmpty(int)
0xfbe: Push((int) 24)
0xfbf: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xfc0: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xfc1: Return(); Pop(2)

0xfc2: PushEmpty()
0xfc3: PushEmpty(int)
0xfc4: Call2 0xfb9

0xfc5: Pop(0)
0xfc6: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0xfc7: Return(); Pop(0)

0xfc8: PushEmpty(string, string)
0xfc9: Stack[-1] = "idle"
0xfca: Push(Stack[-3])
0xfcb: IF (Stack[-1] == 0) GOTO 0xfcd; Pop(1)

0xfcc: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xfcd: Stack[-4] = Stack[-1]
0xfce: Return(); Pop(2)

0xfcf: PushEmpty(int, bool, int, bool)
0xfd0: Stack[-2] = (int) 0
0xfd1: Push("all")
0xfd2: PushEmpty(string, int)
0xfd3: Stack[-1] = Stack[-5]
0xfd4: Call2 0xfc8

0xfd5: Pop(1)
0xfd6: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xfd7: Pop(2)
0xfd8: Pop(0); Push((bool) Stack[-1] == 0)
0xfd9: IF (Stack[-1] == 0) GOTO 0xfdb; Pop(1)

0xfda: GOTO 0xfde

0xfdb: Push((int) 1)
0xfdc: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xfdd: GOTO 0xfd1

0xfde: Stack[-5] = Stack[-2]
0xfdf: Return(); Pop(4)

0xfe0: Stack[-1] = (int) 515536
0xfe1: Return(); Pop(0)

0xfe2: Stack[-1] = (int) 502861
0xfe3: Return(); Pop(0)

0xfe4: Stack[-1] = "ui/NPC_Han.png"
0xfe5: Return(); Pop(0)

0xfe6: Stack[-1] = "ui/NPC_Han_b.png"
0xfe7: Return(); Pop(0)

0xfe8: Stack[-1] = (bool) 1
0xfe9: Return(); Pop(0)

0xfea: PushEmpty()
0xfeb: Push("ood7Han1")
0xfec: Push((int) 1)
0xfed: @ SetVariable(Stack[-2], Stack[-1])
0xfee: Pop(2)
0xfef: Return(); Pop(0)

0xff0: PushEmpty()
0xff1: Push("d11q05")
0xff2: Push((int) 2)
0xff3: @ SetVariable(Stack[-2], Stack[-1])
0xff4: Pop(2)
0xff5: PushEmpty()
0xff6: Call2 0x111f

0xff7: Pop(0)
0xff8: PushEmpty(bool, string, string)
0xff9: Stack[-2] = "quest_d11_05"
0xffa: Stack[-1] = "place_enemy_before"
0xffb: Call2 0xfa8

0xffc: Pop(3)
0xffd: Return(); Pop(0)

0xffe: PushEmpty()
0xfff: PushEmpty(bool, string, string)
0x1000: Stack[-2] = "quest_d9_01"
0x1001: Stack[-1] = "teleport_to_mnogogrannik"
0x1002: Call2 0xfa8

0x1003: Pop(3)
0x1004: Return(); Pop(0)

0x1005: PushEmpty()
0x1006: PushEmpty(int, string)
0x1007: Stack[-1] = "map_chertez_state"
0x1008: Call2 0xf9c

0x1009: Pop(1)
0x100a: Push((int) 3)
0x100b: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x100c: IF (Stack[-1] == 0) GOTO 0x1015; Pop(1)

0x100d: Push("map_chertez_state")
0x100e: Push((int) 3)
0x100f: @ SetVariable(Stack[-2], Stack[-1])
0x1010: Pop(2)
0x1011: Push("map_chertez_force")
0x1012: Push((int) 1)
0x1013: @ SetVariable(Stack[-2], Stack[-1])
0x1014: Pop(2)
0x1015: Return(); Pop(0)

0x1016: PushEmpty()
0x1017: PushEmpty(object, string, float)
0x1018: PushEmpty(object)
0x1019: Call2 0x117c

0x101a: Stack[-4] = Stack[-1]
0x101b: Pop(1)
0x101c: Stack[-2] = "pt_map_aglaja"
0x101d: Stack[-1] = (int) -1
0x101e: Call2 0x118d

0x101f: Pop(3)
0x1020: PushEmpty(object)
0x1021: Call2 0x117c

0x1022: Pop(0)
0x1023: @@ ShowMap(Stack[-1])
0x1024: Pop(1)
0x1025: Return(); Pop(0)

0x1026: PushEmpty()
0x1027: Push("ood9Xan3")
0x1028: Push((int) 1)
0x1029: @ SetVariable(Stack[-2], Stack[-1])
0x102a: Pop(2)
0x102b: Return(); Pop(0)

0x102c: PushEmpty()
0x102d: Push("playsound")
0x102e: Push("giveitem")
0x102f: @ TriggerWorld(Stack[-2], Stack[-1])
0x1030: Pop(2)
0x1031: Return(); Pop(0)

0x1032: PushEmpty()
0x1033: Return(); Pop(0)

0x1034: PushEmpty(object, object)
0x1035: Push("d3q02")
0x1036: Push((int) 4)
0x1037: @ SetVariable(Stack[-2], Stack[-1])
0x1038: Pop(2)
0x1039: PushEmpty(object)
0x103a: Call2 0x117c

0x103b: Stack[-2] = Stack[-1]
0x103c: Pop(1)
0x103d: Push("d3q02HanGotoMladVlad")
0x103e: Push("pt_map_mladvlad")
0x103f: Push((int) 0)
0x1040: Push((int) 511386)
0x1041: PushEmpty(float)
0x1042: Call2 0xfb4

0x1043: Pop(0)
0x1044: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1045: Pop(5)
0x1046: PushEmpty()
0x1047: Call2 0x112c

0x1048: Pop(0)
0x1049: Return(); Pop(2)

0x104a: Stack[-1] = 0
0x104b: PushEmpty()
0x104c: Push("ood8Han1")
0x104d: Push((int) 1)
0x104e: @ SetVariable(Stack[-2], Stack[-1])
0x104f: Pop(2)
0x1050: Return(); Pop(0)

0x1051: PushEmpty()
0x1052: Push("ood9Xan1")
0x1053: Push((int) 1)
0x1054: @ SetVariable(Stack[-2], Stack[-1])
0x1055: Pop(2)
0x1056: Return(); Pop(0)

0x1057: PushEmpty()
0x1058: Push("d9q01")
0x1059: Push((int) 2)
0x105a: @ SetVariable(Stack[-2], Stack[-1])
0x105b: Pop(2)
0x105c: PushEmpty()
0x105d: Call2 0x1146

0x105e: Pop(0)
0x105f: Return(); Pop(0)

0x1060: PushEmpty(int, int)
0x1061: Push("Rifle")
0x1062: Push((int) 5)
0x1063: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0x1064: Pop(2)
0x1065: @@ SelectWeapon()
0x1066: Pop(0)
0x1067: Return(); Pop(2)

0x1068: PushEmpty()
0x1069: PushEmpty()
0x106a: Call2 0x1139

0x106b: Pop(0)
0x106c: PushEmpty(bool, string, string)
0x106d: Stack[-2] = "quest_d9_01"
0x106e: Stack[-1] = "completed"
0x106f: Call2 0xfa8

0x1070: Pop(3)
0x1071: Return(); Pop(0)

0x1072: PushEmpty()
0x1073: PushEmpty(int, string)
0x1074: Stack[-1] = "ood7Han1"
0x1075: Call2 0xf9c

0x1076: Pop(1)
0x1077: Push((int) 0)
0x1078: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1079: IF (Stack[-1] == 0) GOTO 0x107c; Pop(1)

0x107a: Stack[-2] = (bool) 1
0x107b: Return(); Pop(0)

0x107c: Stack[-2] = (bool) 0
0x107d: Return(); Pop(0)

0x107e: PushEmpty()
0x107f: PushEmpty(int, string)
0x1080: Stack[-1] = "d11q05"
0x1081: Call2 0xf9c

0x1082: Pop(1)
0x1083: Push((int) 1)
0x1084: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1085: IF (Stack[-1] == 0) GOTO 0x1088; Pop(1)

0x1086: Stack[-2] = (bool) 1
0x1087: Return(); Pop(0)

0x1088: Stack[-2] = (bool) 0
0x1089: Return(); Pop(0)

0x108a: PushEmpty()
0x108b: PushEmpty(bool, object, string)
0x108c: Stack[-2] = Stack[-4]
0x108d: Stack[-1] = "burah_serum"
0x108e: Call2 0xfa1

0x108f: Pop(2)
0x1090: IF (Stack[-1] == 0) GOTO 0x1093; Pop(1)

0x1091: Stack[-2] = (bool) 1
0x1092: Return(); Pop(0)

0x1093: Stack[-2] = (bool) 0
0x1094: Return(); Pop(0)

0x1095: PushEmpty()
0x1096: PushEmpty(int, string)
0x1097: Stack[-1] = "d9q01"
0x1098: Call2 0xf9c

0x1099: Pop(1)
0x109a: Push((int) 1000)
0x109b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x109c: IF (Stack[-1] == 0) GOTO 0x109f; Pop(1)

0x109d: Stack[-2] = (bool) 1
0x109e: Return(); Pop(0)

0x109f: Stack[-2] = (bool) 0
0x10a0: Return(); Pop(0)

0x10a1: PushEmpty()
0x10a2: PushEmpty(int, string)
0x10a3: Stack[-1] = "ood9Xan3"
0x10a4: Call2 0xf9c

0x10a5: Pop(1)
0x10a6: Push((int) 0)
0x10a7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x10a8: IF (Stack[-1] == 0) GOTO 0x10ab; Pop(1)

0x10a9: Stack[-2] = (bool) 1
0x10aa: Return(); Pop(0)

0x10ab: Stack[-2] = (bool) 0
0x10ac: Return(); Pop(0)

0x10ad: PushEmpty()
0x10ae: Stack[-2] = (bool) 1
0x10af: Return(); Pop(0)

0x10b0: Stack[-2] = (bool) 0
0x10b1: Return(); Pop(0)

0x10b2: PushEmpty()
0x10b3: PushEmpty(int, string)
0x10b4: Stack[-1] = "d3q02"
0x10b5: Call2 0xf9c

0x10b6: Pop(1)
0x10b7: Push((int) 3)
0x10b8: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x10b9: IF (Stack[-1] == 0) GOTO 0x10bc; Pop(1)

0x10ba: Stack[-2] = (bool) 1
0x10bb: Return(); Pop(0)

0x10bc: Stack[-2] = (bool) 0
0x10bd: Return(); Pop(0)

0x10be: PushEmpty()
0x10bf: PushEmpty(int, string)
0x10c0: Stack[-1] = "ood8Han1"
0x10c1: Call2 0xf9c

0x10c2: Pop(1)
0x10c3: Push((int) 0)
0x10c4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x10c5: IF (Stack[-1] == 0) GOTO 0x10c8; Pop(1)

0x10c6: Stack[-2] = (bool) 1
0x10c7: Return(); Pop(0)

0x10c8: Stack[-2] = (bool) 0
0x10c9: Return(); Pop(0)

0x10ca: PushEmpty()
0x10cb: PushEmpty(int, string)
0x10cc: Stack[-1] = "d9q01"
0x10cd: Call2 0xf9c

0x10ce: Pop(1)
0x10cf: Push((int) 1)
0x10d0: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x10d1: IF (Stack[-1] == 0) GOTO 0x10d4; Pop(1)

0x10d2: Stack[-2] = (bool) 1
0x10d3: Return(); Pop(0)

0x10d4: Stack[-2] = (bool) 0
0x10d5: Return(); Pop(0)

0x10d6: PushEmpty()
0x10d7: PushEmpty(int, string)
0x10d8: Stack[-1] = "ood9Xan1"
0x10d9: Call2 0xf9c

0x10da: Pop(1)
0x10db: Push((int) 0)
0x10dc: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x10dd: IF (Stack[-1] == 0) GOTO 0x10e0; Pop(1)

0x10de: Stack[-2] = (bool) 1
0x10df: Return(); Pop(0)

0x10e0: Stack[-2] = (bool) 0
0x10e1: Return(); Pop(0)

0x10e2: PushEmpty()
0x10e3: PushEmpty(int, string)
0x10e4: Stack[-1] = "d9q01"
0x10e5: Call2 0xf9c

0x10e6: Pop(1)
0x10e7: Push((int) 2)
0x10e8: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x10e9: IF (Stack[-1] == 0) GOTO 0x10ec; Pop(1)

0x10ea: Stack[-2] = (bool) 1
0x10eb: Return(); Pop(0)

0x10ec: Stack[-2] = (bool) 0
0x10ed: Return(); Pop(0)

0x10ee: PushEmpty()
0x10ef: PushEmpty(bool, object)
0x10f0: Stack[-1] = Stack[-3]
0x10f1: Call2 0x1102

0x10f2: Pop(1)
0x10f3: IF (Stack[-1] == 0) GOTO 0x10f6; Pop(1)

0x10f4: Stack[-2] = (bool) 1
0x10f5: Return(); Pop(0)

0x10f6: Stack[-2] = (bool) 0
0x10f7: Return(); Pop(0)

0x10f8: PushEmpty()
0x10f9: PushEmpty(bool, object)
0x10fa: Stack[-1] = Stack[-3]
0x10fb: Call2 0x110d

0x10fc: Pop(1)
0x10fd: IF (Stack[-1] == 0) GOTO 0x1100; Pop(1)

0x10fe: Stack[-2] = (bool) 1
0x10ff: Return(); Pop(0)

0x1100: Stack[-2] = (bool) 0
0x1101: Return(); Pop(0)

0x1102: PushEmpty(int, int)
0x1103: Push("Rifle")
0x1104: @@ GetItemCountOfType(Stack[-2], Stack[-1])
0x1105: Pop(1)
0x1106: Push((int) 5)
0x1107: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x1108: IF (Stack[-1] == 0) GOTO 0x110b; Pop(1)

0x1109: Stack[-4] = (bool) 1
0x110a: Return(); Pop(2)

0x110b: Stack[-4] = (bool) 0
0x110c: Return(); Pop(2)

0x110d: PushEmpty(int, int)
0x110e: Push("Rifle")
0x110f: @@ GetItemCountOfType(Stack[-2], Stack[-1])
0x1110: Pop(1)
0x1111: PushEmpty(bool)
0x1112: Stack[-1] = (bool) 0
0x1113: Push((int) 0)
0x1114: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x1115: IF (Stack[-1] == 0) GOTO 0x111a; Pop(1)

0x1116: Push((int) 5)
0x1117: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x1118: IF (Stack[-1] == 0) GOTO 0x111a; Pop(1)

0x1119: Stack[-1] = (bool) 1
0x111a: IF (Stack[-1] == 0) GOTO 0x111d; Pop(1)

0x111b: Stack[-4] = (bool) 1
0x111c: Return(); Pop(2)

0x111d: Stack[-4] = (bool) 0
0x111e: Return(); Pop(2)

0x111f: PushEmpty(object, object)
0x1120: Push((int) 684)
0x1121: Push((int) 2)
0x1122: Push((int) 534499)
0x1123: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1124: Pop(3)
0x1125: PushEmpty(bool, object, int)
0x1126: Stack[-2] = Stack[-4]
0x1127: Stack[-1] = (int) 682
0x1128: Call2 0x1160

0x1129: Pop(3)
0x112a: Return(); Pop(2)

0x112b: Stack[-1] = 0
0x112c: PushEmpty(object, object)
0x112d: Push((int) 679)
0x112e: Push((int) 2)
0x112f: Push((int) 534420)
0x1130: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1131: Pop(3)
0x1132: PushEmpty(bool, object, int)
0x1133: Stack[-2] = Stack[-4]
0x1134: Stack[-1] = (int) 26
0x1135: Call2 0x1160

0x1136: Pop(3)
0x1137: Return(); Pop(2)

0x1138: Stack[-1] = 0
0x1139: PushEmpty(object, object)
0x113a: Push((int) 185)
0x113b: Push((int) 1)
0x113c: Push((int) 515448)
0x113d: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x113e: Pop(3)
0x113f: PushEmpty(bool, object, int)
0x1140: Stack[-2] = Stack[-4]
0x1141: Stack[-1] = (int) 182
0x1142: Call2 0x1160

0x1143: Pop(3)
0x1144: Return(); Pop(2)

0x1145: Stack[-1] = 0
0x1146: PushEmpty(object, object)
0x1147: Push((int) 184)
0x1148: Push((int) 1)
0x1149: Push((int) 515447)
0x114a: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x114b: Pop(3)
0x114c: PushEmpty(bool, object, int)
0x114d: Stack[-2] = Stack[-4]
0x114e: Stack[-1] = (int) 182
0x114f: Call2 0x1160

0x1150: Pop(3)
0x1151: Return(); Pop(2)

0x1152: Stack[-1] = 0
0x1153: PushEmpty(object, object)
0x1154: @ GetDiaryRoot(Stack[-1])
0x1155: Pop(0)
0x1156: Pop(0); Push((bool) Stack[-1] == 0)
0x1157: IF (Stack[-1] == 0) GOTO 0x115d; Pop(1)

0x1158: Push("Can't retrieve diary root")
0x1159: @ Trace(Stack[-1])
0x115a: Pop(1)
0x115b: Stack[-3] = (bool) 0
0x115c: Return(); Pop(2)

0x115d: Stack[-3] = Stack[-1]
0x115e: Return(); Pop(2)

0x115f: Stack[-1] = 0
0x1160: PushEmpty(object, object, int, object, object, int)
0x1161: PushEmpty(object)
0x1162: Call2 0x1153

0x1163: Stack[-4] = Stack[-1]
0x1164: Pop(1)
0x1165: @@ Find(Stack[-7], Stack[-2])
0x1166: Pop(0)
0x1167: Pop(0); Push((bool) Stack[-2] == 0)
0x1168: IF (Stack[-1] == 0) GOTO 0x116f; Pop(1)

0x1169: Push("Can't find diary parent with id: ")
0x116a: Pop(1); Push(Stack[-1] + Stack[-8]);
0x116b: @ Trace(Stack[-1])
0x116c: Pop(1)
0x116d: Stack[-9] = (bool) 0
0x116e: Return(); Pop(6)

0x116f: @@ AddChild(Stack[-8])
0x1170: Pop(0)
0x1171: Push((int) 7)
0x1172: @ SendWorldWndMessage(Stack[-1])
0x1173: Pop(1)
0x1174: @@ GetCategory(Stack[-1])
0x1175: Pop(0)
0x1176: @ SetDiarySection(Stack[-1])
0x1177: Pop(0)
0x1178: Stack[-9] = (bool) 0
0x1179: Return(); Pop(6)

0x117a: Stack[-2] = 0
0x117b: Stack[-3] = 0
0x117c: PushEmpty(object, object, object, object)
0x117d: @ GetMainOutdoorScene(Stack[-2])
0x117e: Pop(0)
0x117f: Pop(0); Push((bool) Stack[-2] == 0)
0x1180: IF (Stack[-1] == 0) GOTO 0x1187; Pop(1)

0x1181: Push("Can't find main outdoor scene")
0x1182: @ Trace(Stack[-1])
0x1183: Pop(1)
0x1184: Stack[-1] = 0
0x1185: Stack[-5] = Stack[-1]
0x1186: Return(); Pop(4)

0x1187: @@ GetMap(Stack[-1])
0x1188: Pop(0)
0x1189: Stack[-5] = Stack[-1]
0x118a: Return(); Pop(4)

0x118b: Stack[-1] = 0
0x118c: Stack[-2] = 0
0x118d: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x118e: @ GetMainOutdoorScene(Stack[-2])
0x118f: Pop(0)
0x1190: Pop(0); Push((bool) Stack[-2] == 0)
0x1191: IF (Stack[-1] == 0) GOTO 0x1196; Pop(1)

0x1192: Push("Can't find main outdoor scene")
0x1193: @ Trace(Stack[-1])
0x1194: Pop(1)
0x1195: Return(); Pop(8)

0x1196: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x1197: Pop(0)
0x1198: Pop(0); Push((bool) Stack[-1] == 0)
0x1199: IF (Stack[-1] == 0) GOTO 0x11a0; Pop(1)

0x119a: Push("Warning: outdoor scene locator ")
0x119b: Pop(1); Push(Stack[-1] + Stack[-11]);
0x119c: Push(" doesnt exist")
0x119d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x119e: @ Trace(Stack[-1])
0x119f: Pop(1)
0x11a0: @@ GetMap(Stack[-11])
0x11a1: Pop(0)
0x11a2: Pop(0); Push((bool) Stack[-11] == 0)
0x11a3: IF (Stack[-1] == 0) GOTO 0x11a8; Pop(1)

0x11a4: Push("Can't find map")
0x11a5: @ Trace(Stack[-1])
0x11a6: Pop(1)
0x11a7: Return(); Pop(8)

0x11a8: Push(CvectorIndex(Stack[-4], 0))
0x11a9: Push(CvectorIndex(Stack[-5], 2))
0x11aa: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x11ab: Pop(2)
0x11ac: Return(); Pop(8)

0x11ad: Stack[-2] = 0
0x11ae: PushEmpty(int, int)
0x11af: Push("branch")
0x11b0: @ GetVariable(Stack[-1], Stack[-2])
0x11b1: Pop(1)
0x11b2: Push((int) 0)
0x11b3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x11b4: IF (Stack[-1] == 0) GOTO 0x11b8; Pop(1)

0x11b5: Stack[-3] = (int) 1
0x11b6: Return(); Pop(2)

0x11b7: GOTO 0x11bd

0x11b8: Push((int) 1)
0x11b9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x11ba: IF (Stack[-1] == 0) GOTO 0x11bd; Pop(1)

0x11bb: Stack[-3] = (int) 2
0x11bc: Return(); Pop(2)

0x11bd: Stack[-3] = (int) 3
0x11be: Return(); Pop(2)

0x11bf: PushEmpty(int, int)
0x11c0: Push("mt_han")
0x11c1: @ GetVariable(Stack[-1], Stack[-2])
0x11c2: Pop(1)
0x11c3: Pop(0); Push((bool) Stack[-1] == 0)
0x11c4: IF (Stack[-1] == 0) GOTO 0x11cf; Pop(1)

0x11c5: PushEmpty(int, object)
0x11c6: Stack[-1] = Stack[-5]
0x11c7: Push(-2, 1); TaskCall(12)
0x11c8: Call2 0xb82

0x11c9: Pop(-2, 1); TaskReturn
0x11ca: Pop(2)
0x11cb: Push("mt_han")
0x11cc: Push((int) 1)
0x11cd: @ SetVariable(Stack[-2], Stack[-1])
0x11ce: Pop(2)
0x11cf: PushEmpty(bool, int)
0x11d0: Stack[-1] = (int) 1
0x11d1: Call2 0xfc2

0x11d2: Pop(1)
0x11d3: IF (Stack[-1] == 0) GOTO 0x11d5; Pop(1)

0x11d4: Return(); Pop(2)

0x11d5: PushEmpty(bool, int)
0x11d6: Stack[-1] = (int) 3
0x11d7: Call2 0xfc2

0x11d8: Pop(1)
0x11d9: IF (Stack[-1] == 0) GOTO 0x11e1; Pop(1)

0x11da: PushEmpty(int, object)
0x11db: Stack[-1] = Stack[-5]
0x11dc: Push(-2, 1); TaskCall(4)
0x11dd: Call2 0x335

0x11de: Pop(-2, 1); TaskReturn
0x11df: Pop(2)
0x11e0: Return(); Pop(2)

0x11e1: PushEmpty(bool, int)
0x11e2: Stack[-1] = (int) 7
0x11e3: Call2 0xfc2

0x11e4: Pop(1)
0x11e5: IF (Stack[-1] == 0) GOTO 0x11ed; Pop(1)

0x11e6: PushEmpty(int, object)
0x11e7: Stack[-1] = Stack[-5]
0x11e8: Push(-2, 1); TaskCall(6)
0x11e9: Call2 0x562

0x11ea: Pop(-2, 1); TaskReturn
0x11eb: Pop(2)
0x11ec: Return(); Pop(2)

0x11ed: PushEmpty(bool, int)
0x11ee: Stack[-1] = (int) 8
0x11ef: Call2 0xfc2

0x11f0: Pop(1)
0x11f1: IF (Stack[-1] == 0) GOTO 0x11f9; Pop(1)

0x11f2: PushEmpty(int, object)
0x11f3: Stack[-1] = Stack[-5]
0x11f4: Push(-2, 1); TaskCall(8)
0x11f5: Call2 0x69b

0x11f6: Pop(-2, 1); TaskReturn
0x11f7: Pop(2)
0x11f8: Return(); Pop(2)

0x11f9: PushEmpty(bool, int)
0x11fa: Stack[-1] = (int) 9
0x11fb: Call2 0xfc2

0x11fc: Pop(1)
0x11fd: IF (Stack[-1] == 0) GOTO 0x1205; Pop(1)

0x11fe: PushEmpty(int, object)
0x11ff: Stack[-1] = Stack[-5]
0x1200: Push(-2, 1); TaskCall(10)
0x1201: Call2 0x816

0x1202: Pop(-2, 1); TaskReturn
0x1203: Pop(2)
0x1204: Return(); Pop(2)

0x1205: PushEmpty(bool, int)
0x1206: Stack[-1] = (int) 11
0x1207: Call2 0xfc2

0x1208: Pop(1)
0x1209: IF (Stack[-1] == 0) GOTO 0x1211; Pop(1)

0x120a: PushEmpty(int, object)
0x120b: Stack[-1] = Stack[-5]
0x120c: Push(-2, 1); TaskCall(0)
0x120d: Call2 0x0

0x120e: Pop(-2, 1); TaskReturn
0x120f: Pop(2)
0x1210: Return(); Pop(2)

0x1211: PushEmpty(bool, int)
0x1212: Stack[-1] = (int) 12
0x1213: Call2 0xfc2

0x1214: Pop(1)
0x1215: IF (Stack[-1] == 0) GOTO 0x121d; Pop(1)

0x1216: PushEmpty(int, object)
0x1217: Stack[-1] = Stack[-5]
0x1218: Push(-2, 1); TaskCall(2)
0x1219: Call2 0x232

0x121a: Pop(-2, 1); TaskReturn
0x121b: Pop(2)
0x121c: Return(); Pop(2)

0x121d: PushEmpty(int, object)
0x121e: Stack[-1] = Stack[-5]
0x121f: Push(-2, 1); TaskCall(14)
0x1220: Call2 0xc8d

0x1221: Pop(-2, 1); TaskReturn
0x1222: Pop(2)
0x1223: Return(); Pop(2)

