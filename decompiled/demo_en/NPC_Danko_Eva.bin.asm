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
	Sexy
	all
	idle
	Love
	Modesty
	Fear
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
	.bin
	Door 
	 not found
	locked
	SetProperty
	add
	GetItemID
	Category
	AddItem
	DropItems
	SetItemName
	ui/NPC_Eva.png
	ui/NPC_Eva_b.png
	ood1EvaIntro3
	d1q03IsKapella
	d1q03KapellaGotoOspina
	pt_map_ospina
	AddMark
	quest_d1_03
	playsound
	giveitem
	gold_ring is given
	gold_ring
	d1q01EvaMapMarkMladVlad
	pt_map_mladvlad
	pt_map_station
	ShowMap
	ood1Eva4
	bracelet is given
	bracelet
	ear_ring is given
	ear_ring
	d2EvaVisit
	pt_map_georg
	ood1Eva7
	ood4Eva2
	KnowUzly
	ood2Eva1
	ood2Eva2
	ood2Eva3
	ood2Eva4
	d2q02
	d2q02EvaGotoAndrei
	pt_map_andrei
	quest_d2_02
	icot_eva@door1
	d1q01EvaGotoSimon
	d1EvaGotoMaria
	pt_map_maria
	d1EvaInfo
	pt_map_eva
	KnowStation
	ood1EvaIntro1
	ood1EvaIntro2
	ood6Eva1
	d2q02EvaGotoMaria
	ood4Eva1
	d1q01FirstGeorgVisit
	d1q03
	d1q04
	d1q01
	d4q01
	d4q02
	d4q02LaraGivesMedcine
	d4q02JuliaGivesMedcine
	d6q01
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
	GetMainOutdoorScene (1 args)
	AddBlankActor (4 args)
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemProperty (3 args)
	CreateInvItem (1 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	TriggerWorld (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0xf8c
RunTask = 12

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xc8 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x2fa Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x8db Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xbe0 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xd41 Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xf62 Vars = (int, int)
	GTASK_12 Vars = (cvector) Params = 0
		EVENT_7 Op = 0xfd5 Vars = (int)
		EVENT_6 Op = 0xffb Vars = ()
		EVENT_5 Op = 0x100a Vars = ()
		EVENT_45 Op = 0x1017 Vars = (bool)
		EVENT_0 Op = 0x1023 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x10ac

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x124b

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x1249

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x124d

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x124f

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x1594

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
0x31: Call2 0x11c0

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x1101

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
0x48: Call2 0x10f0

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
0x5b: Call2 0x14d5

0x5c: Pop(1)
0x5d: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x5e: PushEmpty(bool, object)
0x5f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x60: Call2 0x14e1

0x61: Pop(1)
0x62: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x63: Stack[-1] = (bool) 1
0x64: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x65: PushEmpty(object, object)
0x66: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x67: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x68: Call2 0x136d

0x69: Pop(2)
0x6a: PushEmpty(string)
0x6b: Stack[-1] = "Neutral"
0x6c: Call2 0xb2

0x6d: Pop(1)
0x6e: Push((int) 503926)
0x6f: @@ SetMessage(Stack[-1])
0x70: Pop(1)
0x71: @@ ClearReplies()
0x72: Pop(0)
0x73: Push((int) 503927)
0x74: Push((int) 4276)
0x75: Push((int) 4275)
0x76: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x77: Pop(3)
0x78: Push((int) 503929)
0x79: Push((int) 4278)
0x7a: Push((int) 4277)
0x7b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c: Pop(3)
0x7d: GOTO 0x94

0x7e: PushEmpty(string)
0x7f: Stack[-1] = "Sexy"
0x80: Call2 0xb2

0x81: Pop(1)
0x82: Push((int) 513718)
0x83: @@ SetMessage(Stack[-1])
0x84: Pop(1)
0x85: @@ ClearReplies()
0x86: Pop(0)
0x87: Push((int) 513719)
0x88: Push((int) -1)
0x89: Push((int) 14985)
0x8a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8b: Pop(3)
0x8c: Push((int) 536133)
0x8d: Push((int) -1)
0x8e: Push((int) 37892)
0x8f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x90: Pop(3)
0x91: GOTO 0x94

0x92: Return(); Pop(0)

0x93: GOTO 0x55

0x94: PushEmpty(bool)
0x95: Call2 0x1251

0x96: Pop(0)
0x97: IF (Stack[-1] == 0) GOTO 0xa3; Pop(1)

0x98: @ lshWaitForAnimEnd()
0x99: Pop(0)
0x9a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9b: IF (Stack[-1] == 0) GOTO 0x9d; Pop(1)

0x9c: GOTO 0xa2

0x9d: PushEmpty(string)
0x9e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x9f: Call2 0x118b

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
0xb4: Call2 0x1251

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
0xc4: Call2 0x119b

0xc5: Pop(2)
0xc6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xc7: Return(); Pop(0)

0xc8: PushEmpty()
0xc9: Push((int) 1)
0xca: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0xcb: PushEmpty()
0xcc: Call2 0x11b9

0xcd: Pop(0)
0xce: Push((int) 4274)
0xcf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd0: IF (Stack[-1] == 0) GOTO 0x10c; Pop(1)

0xd1: PushEmpty(bool)
0xd2: Stack[-1] = (bool) 0
0xd3: PushEmpty(bool, object)
0xd4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd5: Call2 0x14d5

0xd6: Pop(1)
0xd7: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xd8: PushEmpty(bool, object)
0xd9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xda: Call2 0x14e1

0xdb: Pop(1)
0xdc: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xdd: Stack[-1] = (bool) 1
0xde: IF (Stack[-1] == 0) GOTO 0xf8; Pop(1)

0xdf: PushEmpty(object, object)
0xe0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe2: Call2 0x136d

0xe3: Pop(2)
0xe4: PushEmpty(string)
0xe5: Stack[-1] = "Neutral"
0xe6: Call2 0xb2

0xe7: Pop(1)
0xe8: Push((int) 503926)
0xe9: @@ SetMessage(Stack[-1])
0xea: Pop(1)
0xeb: @@ ClearReplies()
0xec: Pop(0)
0xed: Push((int) 503927)
0xee: Push((int) 4276)
0xef: Push((int) 4275)
0xf0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf1: Pop(3)
0xf2: Push((int) 503929)
0xf3: Push((int) 4278)
0xf4: Push((int) 4277)
0xf5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf6: Pop(3)
0xf7: Return(); Pop(0)

0xf8: PushEmpty(string)
0xf9: Stack[-1] = "Sexy"
0xfa: Call2 0xb2

0xfb: Pop(1)
0xfc: Push((int) 513718)
0xfd: @@ SetMessage(Stack[-1])
0xfe: Pop(1)
0xff: @@ ClearReplies()
0x100: Pop(0)
0x101: Push((int) 513719)
0x102: Push((int) -1)
0x103: Push((int) 14985)
0x104: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x105: Pop(3)
0x106: Push((int) 536133)
0x107: Push((int) -1)
0x108: Push((int) 37892)
0x109: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10a: Pop(3)
0x10b: Return(); Pop(0)

0x10c: Push((int) 4278)
0x10d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10e: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x10f: PushEmpty(string)
0x110: Stack[-1] = "Love"
0x111: Call2 0xb2

0x112: Pop(1)
0x113: Push((int) 503930)
0x114: @@ SetMessage(Stack[-1])
0x115: Pop(1)
0x116: @@ ClearReplies()
0x117: Pop(0)
0x118: Push((int) 503931)
0x119: Push((int) 4276)
0x11a: Push((int) 4279)
0x11b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11c: Pop(3)
0x11d: Push((int) 503932)
0x11e: Push((int) 4288)
0x11f: Push((int) 4280)
0x120: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x121: Pop(3)
0x122: Push((int) 503933)
0x123: Push((int) -1)
0x124: Push((int) 4281)
0x125: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x126: Pop(3)
0x127: Return(); Pop(0)

0x128: Push((int) 4276)
0x129: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12a: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x12b: PushEmpty(string)
0x12c: Stack[-1] = "Modesty"
0x12d: Call2 0xb2

0x12e: Pop(1)
0x12f: Push((int) 503928)
0x130: @@ SetMessage(Stack[-1])
0x131: Pop(1)
0x132: @@ ClearReplies()
0x133: Pop(0)
0x134: Push((int) 503937)
0x135: Push((int) 4288)
0x136: Push((int) 4286)
0x137: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x138: Pop(3)
0x139: Push((int) 503938)
0x13a: Push((int) 4288)
0x13b: Push((int) 4287)
0x13c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13d: Pop(3)
0x13e: Return(); Pop(0)

0x13f: Push((int) 4288)
0x140: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x141: IF (Stack[-1] == 0) GOTO 0x15b; Pop(1)

0x142: PushEmpty(string)
0x143: Stack[-1] = "Modesty"
0x144: Call2 0xb2

0x145: Pop(1)
0x146: Push((int) 503939)
0x147: @@ SetMessage(Stack[-1])
0x148: Pop(1)
0x149: @@ ClearReplies()
0x14a: Pop(0)
0x14b: Push((int) 503940)
0x14c: Push((int) 4297)
0x14d: Push((int) 4291)
0x14e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14f: Pop(3)
0x150: Push((int) 503941)
0x151: Push((int) 4294)
0x152: Push((int) 4292)
0x153: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x154: Pop(3)
0x155: Push((int) 503942)
0x156: Push((int) -1)
0x157: Push((int) 4293)
0x158: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x159: Pop(3)
0x15a: Return(); Pop(0)

0x15b: Push((int) 4294)
0x15c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15d: IF (Stack[-1] == 0) GOTO 0x172; Pop(1)

0x15e: PushEmpty(string)
0x15f: Stack[-1] = "Love"
0x160: Call2 0xb2

0x161: Pop(1)
0x162: Push((int) 503943)
0x163: @@ SetMessage(Stack[-1])
0x164: Pop(1)
0x165: @@ ClearReplies()
0x166: Pop(0)
0x167: Push((int) 503944)
0x168: Push((int) -1)
0x169: Push((int) 4295)
0x16a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16b: Pop(3)
0x16c: Push((int) 503945)
0x16d: Push((int) -1)
0x16e: Push((int) 4296)
0x16f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x170: Pop(3)
0x171: Return(); Pop(0)

0x172: Push((int) 4297)
0x173: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x174: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x175: PushEmpty(string)
0x176: Stack[-1] = "Modesty"
0x177: Call2 0xb2

0x178: Pop(1)
0x179: Push((int) 503946)
0x17a: @@ SetMessage(Stack[-1])
0x17b: Pop(1)
0x17c: @@ ClearReplies()
0x17d: Pop(0)
0x17e: Push((int) 503947)
0x17f: Push((int) -1)
0x180: Push((int) 4298)
0x181: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x182: Pop(3)
0x183: Push((int) 503948)
0x184: Push((int) -1)
0x185: Push((int) 4299)
0x186: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x187: Pop(3)
0x188: Return(); Pop(0)

0x189: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x18a: PushEmpty(bool)
0x18b: Call2 0x1251

0x18c: Pop(0)
0x18d: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x18e: @ lshStopAnimation()
0x18f: Pop(0)
0x190: GOTO 0x193

0x191: @ StopAnimation()
0x192: Pop(0)
0x193: Return(); Pop(0)

0x194: GOTO 0xc9

0x195: Return(); Pop(0)

0x196: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x197: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x198: PushEmpty(bool, object, float)
0x199: Stack[-2] = Stack[-12]
0x19a: Stack[-1] = (float) 70.0
0x19b: Call2 0x10ac

0x19c: Pop(2)
0x19d: Pop(1); Push((bool) Stack[-1] == 0)
0x19e: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x19f: Stack[-10] = (int) -2
0x1a0: Return(); Pop(8)

0x1a1: @ CreateDialog(Stack[-4])
0x1a2: Pop(0)
0x1a3: PushEmpty(int)
0x1a4: Call2 0x124b

0x1a5: Pop(0)
0x1a6: @@ SetNPCName(Stack[-1])
0x1a7: Pop(1)
0x1a8: PushEmpty(int)
0x1a9: Call2 0x1249

0x1aa: Pop(0)
0x1ab: @@ SetNPCDescription(Stack[-1])
0x1ac: Pop(1)
0x1ad: PushEmpty(string)
0x1ae: Call2 0x124d

0x1af: Pop(0)
0x1b0: @@ SetPhoto(Stack[-1])
0x1b1: Pop(1)
0x1b2: PushEmpty(string)
0x1b3: Call2 0x124f

0x1b4: Pop(0)
0x1b5: @@ SetPhoto2(Stack[-1])
0x1b6: Pop(1)
0x1b7: PushEmpty(int)
0x1b8: Call2 0x1594

0x1b9: Pop(0)
0x1ba: @@ SetPlayerName(Stack[-1])
0x1bb: Pop(1)
0x1bc: Stack[-2] = (int) -1
0x1bd: @ IsOverrideActive(Stack[-3])
0x1be: Pop(0)
0x1bf: Push(Stack[-3])
0x1c0: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x1c1: Stack[-10] = (int) -2
0x1c2: Return(); Pop(8)

0x1c3: @ DoDialog(Stack[-4])
0x1c4: Pop(0)
0x1c5: PushEmpty(bool, object)
0x1c6: PushEmpty(object)
0x1c7: Call2 0x11c0

0x1c8: Stack[-2] = Stack[-1]
0x1c9: Pop(1)
0x1ca: Call2 0x1101

0x1cb: Pop(2)
0x1cc: PushEmpty(object, object)
0x1cd: Stack[-2] = Stack[-11]
0x1ce: Stack[-1] = Stack[-6]
0x1cf: Push(-2, 4); TaskCall(3)
0x1d0: Call2 0x1e7

0x1d1: Pop(-2, 4); TaskReturn
0x1d2: Pop(2)
0x1d3: @@ IsDialogEnd(Stack[-1])
0x1d4: Pop(0)
0x1d5: Pop(0); Push((bool) Stack[-1] == 0)
0x1d6: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1d7: @ sync()
0x1d8: Pop(0)
0x1d9: @@ IsDialogEnd(Stack[-1])
0x1da: Pop(0)
0x1db: GOTO 0x1d5

0x1dc: PushEmpty(object)
0x1dd: Stack[-1] = Stack[-10]
0x1de: Call2 0x10f0

0x1df: Pop(1)
0x1e0: @ StopDialog(Stack[-4])
0x1e1: Pop(0)
0x1e2: @@ GetReturnValue(Stack[-2])
0x1e3: Pop(0)
0x1e4: Stack[-10] = Stack[-2]
0x1e5: Return(); Pop(8)

0x1e6: Stack[-4] = 0
0x1e7: PushEmpty()
0x1e8: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x1e9: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x1ea: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1eb: Push((int) 1)
0x1ec: IF (Stack[-1] == 0) GOTO 0x2c6; Pop(1)

0x1ed: PushEmpty(bool)
0x1ee: Stack[-1] = (bool) 0
0x1ef: PushEmpty(bool, object)
0x1f0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1f1: Call2 0x13a9

0x1f2: Pop(1)
0x1f3: IF (Stack[-1] == 0) GOTO 0x1fa; Pop(1)

0x1f4: PushEmpty(bool, object)
0x1f5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1f6: Call2 0x13c1

0x1f7: Pop(1)
0x1f8: IF (Stack[-1] == 0) GOTO 0x1fa; Pop(1)

0x1f9: Stack[-1] = (bool) 1
0x1fa: IF (Stack[-1] == 0) GOTO 0x214; Pop(1)

0x1fb: PushEmpty(object, object)
0x1fc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1fd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1fe: Call2 0x1361

0x1ff: Pop(2)
0x200: PushEmpty(string)
0x201: Stack[-1] = "Fear"
0x202: Call2 0x2e4

0x203: Pop(1)
0x204: Push((int) 504496)
0x205: @@ SetMessage(Stack[-1])
0x206: Pop(1)
0x207: @@ ClearReplies()
0x208: Pop(0)
0x209: Push((int) 504521)
0x20a: Push((int) 22246)
0x20b: Push((int) 4928)
0x20c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20d: Pop(3)
0x20e: Push((int) 521059)
0x20f: Push((int) 22246)
0x210: Push((int) 22250)
0x211: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x212: Pop(3)
0x213: GOTO 0x2c6

0x214: PushEmpty(bool)
0x215: Stack[-1] = (bool) 1
0x216: PushEmpty(bool)
0x217: Stack[-1] = (bool) 0
0x218: PushEmpty(bool)
0x219: Stack[-1] = (bool) 0
0x21a: PushEmpty(bool, object)
0x21b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x21c: Call2 0x14f9

0x21d: Pop(1)
0x21e: IF (Stack[-1] == 0) GOTO 0x225; Pop(1)

0x21f: PushEmpty(bool, object)
0x220: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x221: Call2 0x1415

0x222: Pop(1)
0x223: IF (Stack[-1] == 0) GOTO 0x225; Pop(1)

0x224: Stack[-1] = (bool) 1
0x225: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x226: PushEmpty(bool, object)
0x227: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x228: Call2 0x13c1

0x229: Pop(1)
0x22a: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x22b: Stack[-1] = (bool) 1
0x22c: IF (Stack[-1] == 0) GOTO 0x245; Pop(1)

0x22d: PushEmpty(bool)
0x22e: Stack[-1] = (bool) 0
0x22f: PushEmpty(bool)
0x230: Stack[-1] = (bool) 0
0x231: PushEmpty(bool, object)
0x232: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x233: Call2 0x14f9

0x234: Pop(1)
0x235: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x236: PushEmpty(bool, object)
0x237: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x238: Call2 0x13f1

0x239: Pop(1)
0x23a: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x23b: Stack[-1] = (bool) 1
0x23c: IF (Stack[-1] == 0) GOTO 0x243; Pop(1)

0x23d: PushEmpty(bool, object)
0x23e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x23f: Call2 0x13c1

0x240: Pop(1)
0x241: IF (Stack[-1] == 0) GOTO 0x243; Pop(1)

0x242: Stack[-1] = (bool) 1
0x243: IF (Stack[-1] == 0) GOTO 0x245; Pop(1)

0x244: Stack[-1] = (bool) 0
0x245: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x246: PushEmpty(object, object)
0x247: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x248: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x249: Call2 0x1253

0x24a: Pop(2)
0x24b: PushEmpty(string)
0x24c: Stack[-1] = "Neutral"
0x24d: Call2 0x2e4

0x24e: Pop(1)
0x24f: Push((int) 532343)
0x250: @@ SetMessage(Stack[-1])
0x251: Pop(1)
0x252: @@ ClearReplies()
0x253: Pop(0)
0x254: Push((int) 533604)
0x255: Push((int) 35125)
0x256: Push((int) 35124)
0x257: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x258: Pop(3)
0x259: Push((int) 533608)
0x25a: Push((int) 35129)
0x25b: Push((int) 35128)
0x25c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x25d: Pop(3)
0x25e: GOTO 0x2c6

0x25f: PushEmpty(string)
0x260: Stack[-1] = "Neutral"
0x261: Call2 0x2e4

0x262: Pop(1)
0x263: Push((int) 521052)
0x264: @@ SetMessage(Stack[-1])
0x265: Pop(1)
0x266: @@ ClearReplies()
0x267: Pop(0)
0x268: PushEmpty(bool)
0x269: Stack[-1] = (bool) 0
0x26a: PushEmpty(bool)
0x26b: Stack[-1] = (bool) 0
0x26c: PushEmpty(bool, object)
0x26d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x26e: Call2 0x13fd

0x26f: Pop(1)
0x270: IF (Stack[-1] == 0) GOTO 0x277; Pop(1)

0x271: PushEmpty(bool, object)
0x272: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x273: Call2 0x1439

0x274: Pop(1)
0x275: IF (Stack[-1] == 0) GOTO 0x277; Pop(1)

0x276: Stack[-1] = (bool) 1
0x277: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x278: PushEmpty(bool, object)
0x279: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x27a: Call2 0x13cd

0x27b: Pop(1)
0x27c: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x27d: Stack[-1] = (bool) 1
0x27e: IF (Stack[-1] == 0) GOTO 0x284; Pop(1)

0x27f: Push((int) 531940)
0x280: Push((int) 33345)
0x281: Push((int) 33344)
0x282: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x283: Pop(3)
0x284: PushEmpty(bool)
0x285: Stack[-1] = (bool) 0
0x286: PushEmpty(bool)
0x287: Stack[-1] = (bool) 0
0x288: PushEmpty(bool, object)
0x289: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x28a: Call2 0x13d9

0x28b: Pop(1)
0x28c: IF (Stack[-1] == 0) GOTO 0x293; Pop(1)

0x28d: PushEmpty(bool, object)
0x28e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x28f: Call2 0x1409

0x290: Pop(1)
0x291: IF (Stack[-1] == 0) GOTO 0x293; Pop(1)

0x292: Stack[-1] = (bool) 1
0x293: IF (Stack[-1] == 0) GOTO 0x29a; Pop(1)

0x294: PushEmpty(bool, object)
0x295: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x296: Call2 0x13cd

0x297: Pop(1)
0x298: IF (Stack[-1] == 0) GOTO 0x29a; Pop(1)

0x299: Stack[-1] = (bool) 1
0x29a: IF (Stack[-1] == 0) GOTO 0x2a0; Pop(1)

0x29b: Push((int) 532458)
0x29c: Push((int) 33900)
0x29d: Push((int) 33899)
0x29e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x29f: Pop(3)
0x2a0: PushEmpty(bool)
0x2a1: Stack[-1] = (bool) 0
0x2a2: PushEmpty(bool, object)
0x2a3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2a4: Call2 0x1421

0x2a5: Pop(1)
0x2a6: IF (Stack[-1] == 0) GOTO 0x2ad; Pop(1)

0x2a7: PushEmpty(bool, object)
0x2a8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2a9: Call2 0x13e5

0x2aa: Pop(1)
0x2ab: IF (Stack[-1] == 0) GOTO 0x2ad; Pop(1)

0x2ac: Stack[-1] = (bool) 1
0x2ad: IF (Stack[-1] == 0) GOTO 0x2b3; Pop(1)

0x2ae: Push((int) 533614)
0x2af: Push((int) 35137)
0x2b0: Push((int) 35136)
0x2b1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b2: Pop(3)
0x2b3: PushEmpty(bool, object)
0x2b4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2b5: Call2 0x13b5

0x2b6: Pop(1)
0x2b7: Pop(1); Push((bool) Stack[-1] == 0)
0x2b8: IF (Stack[-1] == 0) GOTO 0x2be; Pop(1)

0x2b9: Push((int) 521053)
0x2ba: Push((int) -1)
0x2bb: Push((int) 22244)
0x2bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2bd: Pop(3)
0x2be: Push((int) 521054)
0x2bf: Push((int) -1)
0x2c0: Push((int) 22245)
0x2c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c2: Pop(3)
0x2c3: GOTO 0x2c6

0x2c4: Return(); Pop(0)

0x2c5: GOTO 0x1eb

0x2c6: PushEmpty(bool)
0x2c7: Call2 0x1251

0x2c8: Pop(0)
0x2c9: IF (Stack[-1] == 0) GOTO 0x2d5; Pop(1)

0x2ca: @ lshWaitForAnimEnd()
0x2cb: Pop(0)
0x2cc: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2cd: IF (Stack[-1] == 0) GOTO 0x2cf; Pop(1)

0x2ce: GOTO 0x2d4

0x2cf: PushEmpty(string)
0x2d0: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x2d1: Call2 0x118b

0x2d2: Pop(1)
0x2d3: GOTO 0x2ca

0x2d4: GOTO 0x2e3

0x2d5: Push("all")
0x2d6: Push("idle")
0x2d7: @ PlayAnimation(Stack[-2], Stack[-1])
0x2d8: Pop(2)
0x2d9: @ WaitForAnimEnd()
0x2da: Pop(0)
0x2db: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2dc: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x2dd: GOTO 0x2e3

0x2de: Push("all")
0x2df: Push("idle")
0x2e0: @ PlayAnimation(Stack[-2], Stack[-1])
0x2e1: Pop(2)
0x2e2: GOTO 0x2d9

0x2e3: Return(); Pop(0)

0x2e4: PushEmpty()
0x2e5: PushEmpty(bool)
0x2e6: Call2 0x1251

0x2e7: Pop(0)
0x2e8: Pop(1); Push((bool) Stack[-1] == 0)
0x2e9: IF (Stack[-1] == 0) GOTO 0x2eb; Pop(1)

0x2ea: Return(); Pop(0)

0x2eb: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x2ec: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x2ed: Return(); Pop(0)

0x2ee: PushEmpty(string, bool)
0x2ef: Stack[-2] = Stack[-3]
0x2f0: Push("")
0x2f1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2f2: IF (Stack[-1] == 0) GOTO 0x2f5; Pop(1)

0x2f3: Stack[-1] = (bool) 0
0x2f4: GOTO 0x2f6

0x2f5: Stack[-1] = (bool) 1
0x2f6: Call2 0x119b

0x2f7: Pop(2)
0x2f8: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x2f9: Return(); Pop(0)

0x2fa: PushEmpty()
0x2fb: Push((int) 1)
0x2fc: IF (Stack[-1] == 0) GOTO 0x7d8; Pop(1)

0x2fd: PushEmpty()
0x2fe: Call2 0x11b9

0x2ff: Pop(0)
0x300: Push((int) 4900)
0x301: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x302: IF (Stack[-1] == 0) GOTO 0x312; Pop(1)

0x303: PushEmpty(object, object)
0x304: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x305: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x306: Call2 0x1322

0x307: Pop(2)
0x308: PushEmpty(object, object)
0x309: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x30a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x30b: Call2 0x1329

0x30c: Pop(2)
0x30d: PushEmpty(object, object)
0x30e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x30f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x310: Call2 0x12ca

0x311: Pop(2)
0x312: Push((int) 4915)
0x313: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x314: IF (Stack[-1] == 0) GOTO 0x324; Pop(1)

0x315: PushEmpty(object, object)
0x316: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x317: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x318: Call2 0x1322

0x319: Pop(2)
0x31a: PushEmpty(object, object)
0x31b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x31c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x31d: Call2 0x1329

0x31e: Pop(2)
0x31f: PushEmpty(object, object)
0x320: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x321: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x322: Call2 0x12ca

0x323: Pop(2)
0x324: Push((int) 33775)
0x325: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x326: IF (Stack[-1] == 0) GOTO 0x331; Pop(1)

0x327: PushEmpty(object, object)
0x328: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x329: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x32a: Call2 0x1259

0x32b: Pop(2)
0x32c: PushEmpty(object, object)
0x32d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x32e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x32f: Call2 0x1351

0x330: Pop(2)
0x331: Push((int) 33778)
0x332: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x333: IF (Stack[-1] == 0) GOTO 0x33e; Pop(1)

0x334: PushEmpty(object, object)
0x335: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x336: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x337: Call2 0x1259

0x338: Pop(2)
0x339: PushEmpty(object, object)
0x33a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x33b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x33c: Call2 0x1351

0x33d: Pop(2)
0x33e: Push((int) 33344)
0x33f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x340: IF (Stack[-1] == 0) GOTO 0x346; Pop(1)

0x341: PushEmpty(object, object)
0x342: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x343: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x344: Call2 0x1367

0x345: Pop(2)
0x346: Push((int) 33346)
0x347: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x348: IF (Stack[-1] == 0) GOTO 0x353; Pop(1)

0x349: PushEmpty(object, object)
0x34a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x34b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x34c: Call2 0x1288

0x34d: Pop(2)
0x34e: PushEmpty(object, object)
0x34f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x350: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x351: Call2 0x1298

0x352: Pop(2)
0x353: Push((int) 33899)
0x354: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x355: IF (Stack[-1] == 0) GOTO 0x35b; Pop(1)

0x356: PushEmpty(object, object)
0x357: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x358: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x359: Call2 0x12a8

0x35a: Pop(2)
0x35b: Push((int) 33901)
0x35c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x35d: IF (Stack[-1] == 0) GOTO 0x372; Pop(1)

0x35e: PushEmpty(object, object)
0x35f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x360: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x361: Call2 0x12ae

0x362: Pop(2)
0x363: PushEmpty(object, object)
0x364: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x365: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x366: Call2 0x127d

0x367: Pop(2)
0x368: PushEmpty(object, object)
0x369: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x36a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x36b: Call2 0x12b9

0x36c: Pop(2)
0x36d: PushEmpty(object, object)
0x36e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x36f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x370: Call2 0x1277

0x371: Pop(2)
0x372: Push((int) 35136)
0x373: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x374: IF (Stack[-1] == 0) GOTO 0x37a; Pop(1)

0x375: PushEmpty(object, object)
0x376: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x377: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x378: Call2 0x12da

0x379: Pop(2)
0x37a: Push((int) 4899)
0x37b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x37c: IF (Stack[-1] == 0) GOTO 0x454; Pop(1)

0x37d: PushEmpty(bool)
0x37e: Stack[-1] = (bool) 0
0x37f: PushEmpty(bool, object)
0x380: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x381: Call2 0x13a9

0x382: Pop(1)
0x383: IF (Stack[-1] == 0) GOTO 0x38a; Pop(1)

0x384: PushEmpty(bool, object)
0x385: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x386: Call2 0x13c1

0x387: Pop(1)
0x388: IF (Stack[-1] == 0) GOTO 0x38a; Pop(1)

0x389: Stack[-1] = (bool) 1
0x38a: IF (Stack[-1] == 0) GOTO 0x3a4; Pop(1)

0x38b: PushEmpty(object, object)
0x38c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x38d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x38e: Call2 0x1361

0x38f: Pop(2)
0x390: PushEmpty(string)
0x391: Stack[-1] = "Fear"
0x392: Call2 0x2e4

0x393: Pop(1)
0x394: Push((int) 504496)
0x395: @@ SetMessage(Stack[-1])
0x396: Pop(1)
0x397: @@ ClearReplies()
0x398: Pop(0)
0x399: Push((int) 504521)
0x39a: Push((int) 22246)
0x39b: Push((int) 4928)
0x39c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x39d: Pop(3)
0x39e: Push((int) 521059)
0x39f: Push((int) 22246)
0x3a0: Push((int) 22250)
0x3a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a2: Pop(3)
0x3a3: Return(); Pop(0)

0x3a4: PushEmpty(bool)
0x3a5: Stack[-1] = (bool) 1
0x3a6: PushEmpty(bool)
0x3a7: Stack[-1] = (bool) 0
0x3a8: PushEmpty(bool)
0x3a9: Stack[-1] = (bool) 0
0x3aa: PushEmpty(bool, object)
0x3ab: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3ac: Call2 0x14f9

0x3ad: Pop(1)
0x3ae: IF (Stack[-1] == 0) GOTO 0x3b5; Pop(1)

0x3af: PushEmpty(bool, object)
0x3b0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3b1: Call2 0x1415

0x3b2: Pop(1)
0x3b3: IF (Stack[-1] == 0) GOTO 0x3b5; Pop(1)

0x3b4: Stack[-1] = (bool) 1
0x3b5: IF (Stack[-1] == 0) GOTO 0x3bc; Pop(1)

0x3b6: PushEmpty(bool, object)
0x3b7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3b8: Call2 0x13c1

0x3b9: Pop(1)
0x3ba: IF (Stack[-1] == 0) GOTO 0x3bc; Pop(1)

0x3bb: Stack[-1] = (bool) 1
0x3bc: IF (Stack[-1] == 0) GOTO 0x3d5; Pop(1)

0x3bd: PushEmpty(bool)
0x3be: Stack[-1] = (bool) 0
0x3bf: PushEmpty(bool)
0x3c0: Stack[-1] = (bool) 0
0x3c1: PushEmpty(bool, object)
0x3c2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3c3: Call2 0x14f9

0x3c4: Pop(1)
0x3c5: IF (Stack[-1] == 0) GOTO 0x3cc; Pop(1)

0x3c6: PushEmpty(bool, object)
0x3c7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3c8: Call2 0x13f1

0x3c9: Pop(1)
0x3ca: IF (Stack[-1] == 0) GOTO 0x3cc; Pop(1)

0x3cb: Stack[-1] = (bool) 1
0x3cc: IF (Stack[-1] == 0) GOTO 0x3d3; Pop(1)

0x3cd: PushEmpty(bool, object)
0x3ce: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3cf: Call2 0x13c1

0x3d0: Pop(1)
0x3d1: IF (Stack[-1] == 0) GOTO 0x3d3; Pop(1)

0x3d2: Stack[-1] = (bool) 1
0x3d3: IF (Stack[-1] == 0) GOTO 0x3d5; Pop(1)

0x3d4: Stack[-1] = (bool) 0
0x3d5: IF (Stack[-1] == 0) GOTO 0x3ef; Pop(1)

0x3d6: PushEmpty(object, object)
0x3d7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3d8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3d9: Call2 0x1253

0x3da: Pop(2)
0x3db: PushEmpty(string)
0x3dc: Stack[-1] = "Neutral"
0x3dd: Call2 0x2e4

0x3de: Pop(1)
0x3df: Push((int) 532343)
0x3e0: @@ SetMessage(Stack[-1])
0x3e1: Pop(1)
0x3e2: @@ ClearReplies()
0x3e3: Pop(0)
0x3e4: Push((int) 533604)
0x3e5: Push((int) 35125)
0x3e6: Push((int) 35124)
0x3e7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e8: Pop(3)
0x3e9: Push((int) 533608)
0x3ea: Push((int) 35129)
0x3eb: Push((int) 35128)
0x3ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ed: Pop(3)
0x3ee: Return(); Pop(0)

0x3ef: PushEmpty(string)
0x3f0: Stack[-1] = "Neutral"
0x3f1: Call2 0x2e4

0x3f2: Pop(1)
0x3f3: Push((int) 521052)
0x3f4: @@ SetMessage(Stack[-1])
0x3f5: Pop(1)
0x3f6: @@ ClearReplies()
0x3f7: Pop(0)
0x3f8: PushEmpty(bool)
0x3f9: Stack[-1] = (bool) 0
0x3fa: PushEmpty(bool)
0x3fb: Stack[-1] = (bool) 0
0x3fc: PushEmpty(bool, object)
0x3fd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3fe: Call2 0x13fd

0x3ff: Pop(1)
0x400: IF (Stack[-1] == 0) GOTO 0x407; Pop(1)

0x401: PushEmpty(bool, object)
0x402: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x403: Call2 0x1439

0x404: Pop(1)
0x405: IF (Stack[-1] == 0) GOTO 0x407; Pop(1)

0x406: Stack[-1] = (bool) 1
0x407: IF (Stack[-1] == 0) GOTO 0x40e; Pop(1)

0x408: PushEmpty(bool, object)
0x409: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x40a: Call2 0x13cd

0x40b: Pop(1)
0x40c: IF (Stack[-1] == 0) GOTO 0x40e; Pop(1)

0x40d: Stack[-1] = (bool) 1
0x40e: IF (Stack[-1] == 0) GOTO 0x414; Pop(1)

0x40f: Push((int) 531940)
0x410: Push((int) 33345)
0x411: Push((int) 33344)
0x412: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x413: Pop(3)
0x414: PushEmpty(bool)
0x415: Stack[-1] = (bool) 0
0x416: PushEmpty(bool)
0x417: Stack[-1] = (bool) 0
0x418: PushEmpty(bool, object)
0x419: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x41a: Call2 0x13d9

0x41b: Pop(1)
0x41c: IF (Stack[-1] == 0) GOTO 0x423; Pop(1)

0x41d: PushEmpty(bool, object)
0x41e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x41f: Call2 0x1409

0x420: Pop(1)
0x421: IF (Stack[-1] == 0) GOTO 0x423; Pop(1)

0x422: Stack[-1] = (bool) 1
0x423: IF (Stack[-1] == 0) GOTO 0x42a; Pop(1)

0x424: PushEmpty(bool, object)
0x425: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x426: Call2 0x13cd

0x427: Pop(1)
0x428: IF (Stack[-1] == 0) GOTO 0x42a; Pop(1)

0x429: Stack[-1] = (bool) 1
0x42a: IF (Stack[-1] == 0) GOTO 0x430; Pop(1)

0x42b: Push((int) 532458)
0x42c: Push((int) 33900)
0x42d: Push((int) 33899)
0x42e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x42f: Pop(3)
0x430: PushEmpty(bool)
0x431: Stack[-1] = (bool) 0
0x432: PushEmpty(bool, object)
0x433: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x434: Call2 0x1421

0x435: Pop(1)
0x436: IF (Stack[-1] == 0) GOTO 0x43d; Pop(1)

0x437: PushEmpty(bool, object)
0x438: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x439: Call2 0x13e5

0x43a: Pop(1)
0x43b: IF (Stack[-1] == 0) GOTO 0x43d; Pop(1)

0x43c: Stack[-1] = (bool) 1
0x43d: IF (Stack[-1] == 0) GOTO 0x443; Pop(1)

0x43e: Push((int) 533614)
0x43f: Push((int) 35137)
0x440: Push((int) 35136)
0x441: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x442: Pop(3)
0x443: PushEmpty(bool, object)
0x444: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x445: Call2 0x13b5

0x446: Pop(1)
0x447: Pop(1); Push((bool) Stack[-1] == 0)
0x448: IF (Stack[-1] == 0) GOTO 0x44e; Pop(1)

0x449: Push((int) 521053)
0x44a: Push((int) -1)
0x44b: Push((int) 22244)
0x44c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x44d: Pop(3)
0x44e: Push((int) 521054)
0x44f: Push((int) -1)
0x450: Push((int) 22245)
0x451: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x452: Pop(3)
0x453: Return(); Pop(0)

0x454: Push((int) 35137)
0x455: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x456: IF (Stack[-1] == 0) GOTO 0x46b; Pop(1)

0x457: PushEmpty(string)
0x458: Stack[-1] = "Modesty"
0x459: Call2 0x2e4

0x45a: Pop(1)
0x45b: Push((int) 533615)
0x45c: @@ SetMessage(Stack[-1])
0x45d: Pop(1)
0x45e: @@ ClearReplies()
0x45f: Pop(0)
0x460: Push((int) 533616)
0x461: Push((int) 35140)
0x462: Push((int) 35138)
0x463: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x464: Pop(3)
0x465: Push((int) 533617)
0x466: Push((int) -1)
0x467: Push((int) 35139)
0x468: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x469: Pop(3)
0x46a: Return(); Pop(0)

0x46b: Push((int) 35140)
0x46c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x46d: IF (Stack[-1] == 0) GOTO 0x47d; Pop(1)

0x46e: PushEmpty(string)
0x46f: Stack[-1] = "Modesty"
0x470: Call2 0x2e4

0x471: Pop(1)
0x472: Push((int) 533618)
0x473: @@ SetMessage(Stack[-1])
0x474: Pop(1)
0x475: @@ ClearReplies()
0x476: Pop(0)
0x477: Push((int) 533619)
0x478: Push((int) 35142)
0x479: Push((int) 35141)
0x47a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x47b: Pop(3)
0x47c: Return(); Pop(0)

0x47d: Push((int) 35142)
0x47e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x47f: IF (Stack[-1] == 0) GOTO 0x494; Pop(1)

0x480: PushEmpty(string)
0x481: Stack[-1] = "Modesty"
0x482: Call2 0x2e4

0x483: Pop(1)
0x484: Push((int) 533620)
0x485: @@ SetMessage(Stack[-1])
0x486: Pop(1)
0x487: @@ ClearReplies()
0x488: Pop(0)
0x489: Push((int) 533621)
0x48a: Push((int) 35144)
0x48b: Push((int) 35143)
0x48c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x48d: Pop(3)
0x48e: Push((int) 533624)
0x48f: Push((int) 35147)
0x490: Push((int) 35146)
0x491: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x492: Pop(3)
0x493: Return(); Pop(0)

0x494: Push((int) 35147)
0x495: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x496: IF (Stack[-1] == 0) GOTO 0x4ab; Pop(1)

0x497: PushEmpty(string)
0x498: Stack[-1] = "Love"
0x499: Call2 0x2e4

0x49a: Pop(1)
0x49b: Push((int) 533625)
0x49c: @@ SetMessage(Stack[-1])
0x49d: Pop(1)
0x49e: @@ ClearReplies()
0x49f: Pop(0)
0x4a0: Push((int) 533626)
0x4a1: Push((int) 35150)
0x4a2: Push((int) 35148)
0x4a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4a4: Pop(3)
0x4a5: Push((int) 533627)
0x4a6: Push((int) -1)
0x4a7: Push((int) 35149)
0x4a8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4a9: Pop(3)
0x4aa: Return(); Pop(0)

0x4ab: Push((int) 35144)
0x4ac: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4ad: IF (Stack[-1] == 0) GOTO 0x4c2; Pop(1)

0x4ae: PushEmpty(string)
0x4af: Stack[-1] = "Love"
0x4b0: Call2 0x2e4

0x4b1: Pop(1)
0x4b2: Push((int) 533622)
0x4b3: @@ SetMessage(Stack[-1])
0x4b4: Pop(1)
0x4b5: @@ ClearReplies()
0x4b6: Pop(0)
0x4b7: Push((int) 533623)
0x4b8: Push((int) 35150)
0x4b9: Push((int) 35145)
0x4ba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4bb: Pop(3)
0x4bc: Push((int) 533637)
0x4bd: Push((int) -1)
0x4be: Push((int) 35161)
0x4bf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4c0: Pop(3)
0x4c1: Return(); Pop(0)

0x4c2: Push((int) 35150)
0x4c3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4c4: IF (Stack[-1] == 0) GOTO 0x4d9; Pop(1)

0x4c5: PushEmpty(string)
0x4c6: Stack[-1] = "Love"
0x4c7: Call2 0x2e4

0x4c8: Pop(1)
0x4c9: Push((int) 533628)
0x4ca: @@ SetMessage(Stack[-1])
0x4cb: Pop(1)
0x4cc: @@ ClearReplies()
0x4cd: Pop(0)
0x4ce: Push((int) 533629)
0x4cf: Push((int) 35154)
0x4d0: Push((int) 35152)
0x4d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4d2: Pop(3)
0x4d3: Push((int) 533630)
0x4d4: Push((int) 35157)
0x4d5: Push((int) 35153)
0x4d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4d7: Pop(3)
0x4d8: Return(); Pop(0)

0x4d9: Push((int) 35154)
0x4da: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4db: IF (Stack[-1] == 0) GOTO 0x4f0; Pop(1)

0x4dc: PushEmpty(string)
0x4dd: Stack[-1] = "Love"
0x4de: Call2 0x2e4

0x4df: Pop(1)
0x4e0: Push((int) 533631)
0x4e1: @@ SetMessage(Stack[-1])
0x4e2: Pop(1)
0x4e3: @@ ClearReplies()
0x4e4: Pop(0)
0x4e5: Push((int) 533632)
0x4e6: Push((int) 35157)
0x4e7: Push((int) 35155)
0x4e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4e9: Pop(3)
0x4ea: Push((int) 533633)
0x4eb: Push((int) -1)
0x4ec: Push((int) 35156)
0x4ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ee: Pop(3)
0x4ef: Return(); Pop(0)

0x4f0: Push((int) 35157)
0x4f1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4f2: IF (Stack[-1] == 0) GOTO 0x507; Pop(1)

0x4f3: PushEmpty(string)
0x4f4: Stack[-1] = "Neutral"
0x4f5: Call2 0x2e4

0x4f6: Pop(1)
0x4f7: Push((int) 533634)
0x4f8: @@ SetMessage(Stack[-1])
0x4f9: Pop(1)
0x4fa: @@ ClearReplies()
0x4fb: Pop(0)
0x4fc: Push((int) 533635)
0x4fd: Push((int) -1)
0x4fe: Push((int) 35158)
0x4ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x500: Pop(3)
0x501: Push((int) 533636)
0x502: Push((int) -1)
0x503: Push((int) 35159)
0x504: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x505: Pop(3)
0x506: Return(); Pop(0)

0x507: Push((int) 33900)
0x508: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x509: IF (Stack[-1] == 0) GOTO 0x519; Pop(1)

0x50a: PushEmpty(string)
0x50b: Stack[-1] = "Neutral"
0x50c: Call2 0x2e4

0x50d: Pop(1)
0x50e: Push((int) 532459)
0x50f: @@ SetMessage(Stack[-1])
0x510: Pop(1)
0x511: @@ ClearReplies()
0x512: Pop(0)
0x513: Push((int) 532460)
0x514: Push((int) -1)
0x515: Push((int) 33901)
0x516: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x517: Pop(3)
0x518: Return(); Pop(0)

0x519: Push((int) 33345)
0x51a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x51b: IF (Stack[-1] == 0) GOTO 0x52b; Pop(1)

0x51c: PushEmpty(string)
0x51d: Stack[-1] = "Modesty"
0x51e: Call2 0x2e4

0x51f: Pop(1)
0x520: Push((int) 531941)
0x521: @@ SetMessage(Stack[-1])
0x522: Pop(1)
0x523: @@ ClearReplies()
0x524: Pop(0)
0x525: Push((int) 531942)
0x526: Push((int) -1)
0x527: Push((int) 33346)
0x528: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x529: Pop(3)
0x52a: Return(); Pop(0)

0x52b: Push((int) 36764)
0x52c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x52d: IF (Stack[-1] == 0) GOTO 0x52e; Pop(1)

0x52e: Push((int) 36766)
0x52f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x530: IF (Stack[-1] == 0) GOTO 0x545; Pop(1)

0x531: PushEmpty(string)
0x532: Stack[-1] = "Love"
0x533: Call2 0x2e4

0x534: Pop(1)
0x535: Push((int) 535110)
0x536: @@ SetMessage(Stack[-1])
0x537: Pop(1)
0x538: @@ ClearReplies()
0x539: Pop(0)
0x53a: Push((int) 535111)
0x53b: Push((int) 36768)
0x53c: Push((int) 36767)
0x53d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x53e: Pop(3)
0x53f: Push((int) 535122)
0x540: Push((int) 36774)
0x541: Push((int) 36778)
0x542: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x543: Pop(3)
0x544: Return(); Pop(0)

0x545: Push((int) 36774)
0x546: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x547: IF (Stack[-1] == 0) GOTO 0x55c; Pop(1)

0x548: PushEmpty(string)
0x549: Stack[-1] = "Love"
0x54a: Call2 0x2e4

0x54b: Pop(1)
0x54c: Push((int) 535118)
0x54d: @@ SetMessage(Stack[-1])
0x54e: Pop(1)
0x54f: @@ ClearReplies()
0x550: Pop(0)
0x551: Push((int) 535119)
0x552: Push((int) 36768)
0x553: Push((int) 36775)
0x554: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x555: Pop(3)
0x556: Push((int) 535123)
0x557: Push((int) -1)
0x558: Push((int) 36780)
0x559: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x55a: Pop(3)
0x55b: Return(); Pop(0)

0x55c: Push((int) 36768)
0x55d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x55e: IF (Stack[-1] == 0) GOTO 0x56e; Pop(1)

0x55f: PushEmpty(string)
0x560: Stack[-1] = "Love"
0x561: Call2 0x2e4

0x562: Pop(1)
0x563: Push((int) 535112)
0x564: @@ SetMessage(Stack[-1])
0x565: Pop(1)
0x566: @@ ClearReplies()
0x567: Pop(0)
0x568: Push((int) 535113)
0x569: Push((int) 36770)
0x56a: Push((int) 36769)
0x56b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x56c: Pop(3)
0x56d: Return(); Pop(0)

0x56e: Push((int) 36770)
0x56f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x570: IF (Stack[-1] == 0) GOTO 0x580; Pop(1)

0x571: PushEmpty(string)
0x572: Stack[-1] = "Modesty"
0x573: Call2 0x2e4

0x574: Pop(1)
0x575: Push((int) 535114)
0x576: @@ SetMessage(Stack[-1])
0x577: Pop(1)
0x578: @@ ClearReplies()
0x579: Pop(0)
0x57a: Push((int) 535115)
0x57b: Push((int) 36772)
0x57c: Push((int) 36771)
0x57d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x57e: Pop(3)
0x57f: Return(); Pop(0)

0x580: Push((int) 36772)
0x581: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x582: IF (Stack[-1] == 0) GOTO 0x597; Pop(1)

0x583: PushEmpty(string)
0x584: Stack[-1] = "Modesty"
0x585: Call2 0x2e4

0x586: Pop(1)
0x587: Push((int) 535116)
0x588: @@ SetMessage(Stack[-1])
0x589: Pop(1)
0x58a: @@ ClearReplies()
0x58b: Pop(0)
0x58c: Push((int) 535117)
0x58d: Push((int) -1)
0x58e: Push((int) 36773)
0x58f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x590: Pop(3)
0x591: Push((int) 535121)
0x592: Push((int) -1)
0x593: Push((int) 36777)
0x594: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x595: Pop(3)
0x596: Return(); Pop(0)

0x597: Push((int) 36805)
0x598: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x599: IF (Stack[-1] == 0) GOTO 0x59a; Pop(1)

0x59a: Push((int) 36807)
0x59b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x59c: IF (Stack[-1] == 0) GOTO 0x5b1; Pop(1)

0x59d: PushEmpty(string)
0x59e: Stack[-1] = "Love"
0x59f: Call2 0x2e4

0x5a0: Pop(1)
0x5a1: Push((int) 535146)
0x5a2: @@ SetMessage(Stack[-1])
0x5a3: Pop(1)
0x5a4: @@ ClearReplies()
0x5a5: Pop(0)
0x5a6: Push((int) 535147)
0x5a7: Push((int) 36809)
0x5a8: Push((int) 36808)
0x5a9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5aa: Pop(3)
0x5ab: Push((int) 535152)
0x5ac: Push((int) 36814)
0x5ad: Push((int) 36813)
0x5ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5af: Pop(3)
0x5b0: Return(); Pop(0)

0x5b1: Push((int) 36814)
0x5b2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5b3: IF (Stack[-1] == 0) GOTO 0x5c8; Pop(1)

0x5b4: PushEmpty(string)
0x5b5: Stack[-1] = "Sexy"
0x5b6: Call2 0x2e4

0x5b7: Pop(1)
0x5b8: Push((int) 535153)
0x5b9: @@ SetMessage(Stack[-1])
0x5ba: Pop(1)
0x5bb: @@ ClearReplies()
0x5bc: Pop(0)
0x5bd: Push((int) 535154)
0x5be: Push((int) 36816)
0x5bf: Push((int) 36815)
0x5c0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c1: Pop(3)
0x5c2: Push((int) 535156)
0x5c3: Push((int) 36816)
0x5c4: Push((int) 36817)
0x5c5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c6: Pop(3)
0x5c7: Return(); Pop(0)

0x5c8: Push((int) 36816)
0x5c9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5ca: IF (Stack[-1] == 0) GOTO 0x5da; Pop(1)

0x5cb: PushEmpty(string)
0x5cc: Stack[-1] = "Sexy"
0x5cd: Call2 0x2e4

0x5ce: Pop(1)
0x5cf: Push((int) 535155)
0x5d0: @@ SetMessage(Stack[-1])
0x5d1: Pop(1)
0x5d2: @@ ClearReplies()
0x5d3: Pop(0)
0x5d4: Push((int) 535157)
0x5d5: Push((int) 36811)
0x5d6: Push((int) 36819)
0x5d7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d8: Pop(3)
0x5d9: Return(); Pop(0)

0x5da: Push((int) 36809)
0x5db: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5dc: IF (Stack[-1] == 0) GOTO 0x5ec; Pop(1)

0x5dd: PushEmpty(string)
0x5de: Stack[-1] = "Neutral"
0x5df: Call2 0x2e4

0x5e0: Pop(1)
0x5e1: Push((int) 535148)
0x5e2: @@ SetMessage(Stack[-1])
0x5e3: Pop(1)
0x5e4: @@ ClearReplies()
0x5e5: Pop(0)
0x5e6: Push((int) 535149)
0x5e7: Push((int) 36811)
0x5e8: Push((int) 36810)
0x5e9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ea: Pop(3)
0x5eb: Return(); Pop(0)

0x5ec: Push((int) 36811)
0x5ed: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5ee: IF (Stack[-1] == 0) GOTO 0x603; Pop(1)

0x5ef: PushEmpty(string)
0x5f0: Stack[-1] = "Neutral"
0x5f1: Call2 0x2e4

0x5f2: Pop(1)
0x5f3: Push((int) 535150)
0x5f4: @@ SetMessage(Stack[-1])
0x5f5: Pop(1)
0x5f6: @@ ClearReplies()
0x5f7: Pop(0)
0x5f8: Push((int) 535151)
0x5f9: Push((int) 36821)
0x5fa: Push((int) 36812)
0x5fb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5fc: Pop(3)
0x5fd: Push((int) 535166)
0x5fe: Push((int) 36831)
0x5ff: Push((int) 36830)
0x600: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x601: Pop(3)
0x602: Return(); Pop(0)

0x603: Push((int) 36831)
0x604: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x605: IF (Stack[-1] == 0) GOTO 0x611; Pop(1)

0x606: Push((int) 535167)
0x607: @@ SetMessage(Stack[-1])
0x608: Pop(1)
0x609: @@ ClearReplies()
0x60a: Pop(0)
0x60b: Push((int) 535168)
0x60c: Push((int) 36823)
0x60d: Push((int) 36832)
0x60e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x60f: Pop(3)
0x610: Return(); Pop(0)

0x611: Push((int) 36821)
0x612: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x613: IF (Stack[-1] == 0) GOTO 0x628; Pop(1)

0x614: PushEmpty(string)
0x615: Stack[-1] = "Modesty"
0x616: Call2 0x2e4

0x617: Pop(1)
0x618: Push((int) 535158)
0x619: @@ SetMessage(Stack[-1])
0x61a: Pop(1)
0x61b: @@ ClearReplies()
0x61c: Pop(0)
0x61d: Push((int) 535159)
0x61e: Push((int) 36823)
0x61f: Push((int) 36822)
0x620: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x621: Pop(3)
0x622: Push((int) 535165)
0x623: Push((int) -1)
0x624: Push((int) 36828)
0x625: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x626: Pop(3)
0x627: Return(); Pop(0)

0x628: Push((int) 36823)
0x629: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x62a: IF (Stack[-1] == 0) GOTO 0x63a; Pop(1)

0x62b: PushEmpty(string)
0x62c: Stack[-1] = "Modesty"
0x62d: Call2 0x2e4

0x62e: Pop(1)
0x62f: Push((int) 535160)
0x630: @@ SetMessage(Stack[-1])
0x631: Pop(1)
0x632: @@ ClearReplies()
0x633: Pop(0)
0x634: Push((int) 535161)
0x635: Push((int) 36825)
0x636: Push((int) 36824)
0x637: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x638: Pop(3)
0x639: Return(); Pop(0)

0x63a: Push((int) 36825)
0x63b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x63c: IF (Stack[-1] == 0) GOTO 0x651; Pop(1)

0x63d: PushEmpty(string)
0x63e: Stack[-1] = "Modesty"
0x63f: Call2 0x2e4

0x640: Pop(1)
0x641: Push((int) 535162)
0x642: @@ SetMessage(Stack[-1])
0x643: Pop(1)
0x644: @@ ClearReplies()
0x645: Pop(0)
0x646: Push((int) 535163)
0x647: Push((int) -1)
0x648: Push((int) 36826)
0x649: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64a: Pop(3)
0x64b: Push((int) 535164)
0x64c: Push((int) -1)
0x64d: Push((int) 36827)
0x64e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64f: Pop(3)
0x650: Return(); Pop(0)

0x651: Push((int) 35129)
0x652: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x653: IF (Stack[-1] == 0) GOTO 0x663; Pop(1)

0x654: PushEmpty(string)
0x655: Stack[-1] = "Neutral"
0x656: Call2 0x2e4

0x657: Pop(1)
0x658: Push((int) 533609)
0x659: @@ SetMessage(Stack[-1])
0x65a: Pop(1)
0x65b: @@ ClearReplies()
0x65c: Pop(0)
0x65d: Push((int) 533610)
0x65e: Push((int) 35125)
0x65f: Push((int) 35130)
0x660: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x661: Pop(3)
0x662: Return(); Pop(0)

0x663: Push((int) 35125)
0x664: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x665: IF (Stack[-1] == 0) GOTO 0x67a; Pop(1)

0x666: PushEmpty(string)
0x667: Stack[-1] = "Neutral"
0x668: Call2 0x2e4

0x669: Pop(1)
0x66a: Push((int) 533605)
0x66b: @@ SetMessage(Stack[-1])
0x66c: Pop(1)
0x66d: @@ ClearReplies()
0x66e: Pop(0)
0x66f: Push((int) 533606)
0x670: Push((int) 35127)
0x671: Push((int) 35126)
0x672: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x673: Pop(3)
0x674: Push((int) 533611)
0x675: Push((int) 35133)
0x676: Push((int) 35132)
0x677: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x678: Pop(3)
0x679: Return(); Pop(0)

0x67a: Push((int) 35133)
0x67b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x67c: IF (Stack[-1] == 0) GOTO 0x68c; Pop(1)

0x67d: PushEmpty(string)
0x67e: Stack[-1] = "Modesty"
0x67f: Call2 0x2e4

0x680: Pop(1)
0x681: Push((int) 533612)
0x682: @@ SetMessage(Stack[-1])
0x683: Pop(1)
0x684: @@ ClearReplies()
0x685: Pop(0)
0x686: Push((int) 533613)
0x687: Push((int) 35127)
0x688: Push((int) 35134)
0x689: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x68a: Pop(3)
0x68b: Return(); Pop(0)

0x68c: Push((int) 35127)
0x68d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x68e: IF (Stack[-1] == 0) GOTO 0x69e; Pop(1)

0x68f: PushEmpty(string)
0x690: Stack[-1] = "Modesty"
0x691: Call2 0x2e4

0x692: Pop(1)
0x693: Push((int) 533607)
0x694: @@ SetMessage(Stack[-1])
0x695: Pop(1)
0x696: @@ ClearReplies()
0x697: Pop(0)
0x698: Push((int) 532344)
0x699: Push((int) 33774)
0x69a: Push((int) 33773)
0x69b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69c: Pop(3)
0x69d: Return(); Pop(0)

0x69e: Push((int) 33774)
0x69f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6a0: IF (Stack[-1] == 0) GOTO 0x6b5; Pop(1)

0x6a1: PushEmpty(string)
0x6a2: Stack[-1] = "Modesty"
0x6a3: Call2 0x2e4

0x6a4: Pop(1)
0x6a5: Push((int) 532345)
0x6a6: @@ SetMessage(Stack[-1])
0x6a7: Pop(1)
0x6a8: @@ ClearReplies()
0x6a9: Pop(0)
0x6aa: Push((int) 532346)
0x6ab: Push((int) -1)
0x6ac: Push((int) 33775)
0x6ad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ae: Pop(3)
0x6af: Push((int) 532347)
0x6b0: Push((int) 33777)
0x6b1: Push((int) 33776)
0x6b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b3: Pop(3)
0x6b4: Return(); Pop(0)

0x6b5: Push((int) 33777)
0x6b6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6b7: IF (Stack[-1] == 0) GOTO 0x6cc; Pop(1)

0x6b8: PushEmpty(string)
0x6b9: Stack[-1] = "Fear"
0x6ba: Call2 0x2e4

0x6bb: Pop(1)
0x6bc: Push((int) 532348)
0x6bd: @@ SetMessage(Stack[-1])
0x6be: Pop(1)
0x6bf: @@ ClearReplies()
0x6c0: Pop(0)
0x6c1: Push((int) 532349)
0x6c2: Push((int) -1)
0x6c3: Push((int) 33778)
0x6c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c5: Pop(3)
0x6c6: Push((int) 532350)
0x6c7: Push((int) -1)
0x6c8: Push((int) 33779)
0x6c9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ca: Pop(3)
0x6cb: Return(); Pop(0)

0x6cc: Push((int) 22246)
0x6cd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6ce: IF (Stack[-1] == 0) GOTO 0x6e3; Pop(1)

0x6cf: PushEmpty(string)
0x6d0: Stack[-1] = "Fear"
0x6d1: Call2 0x2e4

0x6d2: Pop(1)
0x6d3: Push((int) 521055)
0x6d4: @@ SetMessage(Stack[-1])
0x6d5: Pop(1)
0x6d6: @@ ClearReplies()
0x6d7: Pop(0)
0x6d8: Push((int) 521056)
0x6d9: Push((int) 22248)
0x6da: Push((int) 22247)
0x6db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6dc: Pop(3)
0x6dd: Push((int) 521060)
0x6de: Push((int) 22253)
0x6df: Push((int) 22251)
0x6e0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e1: Pop(3)
0x6e2: Return(); Pop(0)

0x6e3: Push((int) 22253)
0x6e4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6e5: IF (Stack[-1] == 0) GOTO 0x6f5; Pop(1)

0x6e6: PushEmpty(string)
0x6e7: Stack[-1] = "Love"
0x6e8: Call2 0x2e4

0x6e9: Pop(1)
0x6ea: Push((int) 521061)
0x6eb: @@ SetMessage(Stack[-1])
0x6ec: Pop(1)
0x6ed: @@ ClearReplies()
0x6ee: Pop(0)
0x6ef: Push((int) 521062)
0x6f0: Push((int) 4905)
0x6f1: Push((int) 22254)
0x6f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f3: Pop(3)
0x6f4: Return(); Pop(0)

0x6f5: Push((int) 22248)
0x6f6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6f7: IF (Stack[-1] == 0) GOTO 0x70c; Pop(1)

0x6f8: PushEmpty(string)
0x6f9: Stack[-1] = "Love"
0x6fa: Call2 0x2e4

0x6fb: Pop(1)
0x6fc: Push((int) 521057)
0x6fd: @@ SetMessage(Stack[-1])
0x6fe: Pop(1)
0x6ff: @@ ClearReplies()
0x700: Pop(0)
0x701: Push((int) 521058)
0x702: Push((int) 4905)
0x703: Push((int) 22249)
0x704: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x705: Pop(3)
0x706: Push((int) 504517)
0x707: Push((int) 4923)
0x708: Push((int) 4922)
0x709: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x70a: Pop(3)
0x70b: Return(); Pop(0)

0x70c: Push((int) 4905)
0x70d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x70e: IF (Stack[-1] == 0) GOTO 0x723; Pop(1)

0x70f: PushEmpty(string)
0x710: Stack[-1] = "Sexy"
0x711: Call2 0x2e4

0x712: Pop(1)
0x713: Push((int) 504502)
0x714: @@ SetMessage(Stack[-1])
0x715: Pop(1)
0x716: @@ ClearReplies()
0x717: Pop(0)
0x718: Push((int) 504516)
0x719: Push((int) 4907)
0x71a: Push((int) 4920)
0x71b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x71c: Pop(3)
0x71d: Push((int) 504515)
0x71e: Push((int) 4923)
0x71f: Push((int) 4918)
0x720: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x721: Pop(3)
0x722: Return(); Pop(0)

0x723: Push((int) 4923)
0x724: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x725: IF (Stack[-1] == 0) GOTO 0x73a; Pop(1)

0x726: PushEmpty(string)
0x727: Stack[-1] = "Sexy"
0x728: Call2 0x2e4

0x729: Pop(1)
0x72a: Push((int) 504518)
0x72b: @@ SetMessage(Stack[-1])
0x72c: Pop(1)
0x72d: @@ ClearReplies()
0x72e: Pop(0)
0x72f: Push((int) 504519)
0x730: Push((int) 4909)
0x731: Push((int) 4924)
0x732: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x733: Pop(3)
0x734: Push((int) 533368)
0x735: Push((int) 4907)
0x736: Push((int) 34866)
0x737: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x738: Pop(3)
0x739: Return(); Pop(0)

0x73a: Push((int) 4907)
0x73b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x73c: IF (Stack[-1] == 0) GOTO 0x74c; Pop(1)

0x73d: PushEmpty(string)
0x73e: Stack[-1] = "Sexy"
0x73f: Call2 0x2e4

0x740: Pop(1)
0x741: Push((int) 504504)
0x742: @@ SetMessage(Stack[-1])
0x743: Pop(1)
0x744: @@ ClearReplies()
0x745: Pop(0)
0x746: Push((int) 504505)
0x747: Push((int) 4909)
0x748: Push((int) 4908)
0x749: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x74a: Pop(3)
0x74b: Return(); Pop(0)

0x74c: Push((int) 4909)
0x74d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x74e: IF (Stack[-1] == 0) GOTO 0x763; Pop(1)

0x74f: PushEmpty(string)
0x750: Stack[-1] = "Modesty"
0x751: Call2 0x2e4

0x752: Pop(1)
0x753: Push((int) 504506)
0x754: @@ SetMessage(Stack[-1])
0x755: Pop(1)
0x756: @@ ClearReplies()
0x757: Pop(0)
0x758: Push((int) 504507)
0x759: Push((int) 4911)
0x75a: Push((int) 4910)
0x75b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x75c: Pop(3)
0x75d: Push((int) 504514)
0x75e: Push((int) 4911)
0x75f: Push((int) 4917)
0x760: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x761: Pop(3)
0x762: Return(); Pop(0)

0x763: Push((int) 4911)
0x764: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x765: IF (Stack[-1] == 0) GOTO 0x77a; Pop(1)

0x766: PushEmpty(string)
0x767: Stack[-1] = "Modesty"
0x768: Call2 0x2e4

0x769: Pop(1)
0x76a: Push((int) 504508)
0x76b: @@ SetMessage(Stack[-1])
0x76c: Pop(1)
0x76d: @@ ClearReplies()
0x76e: Pop(0)
0x76f: Push((int) 504509)
0x770: Push((int) 22257)
0x771: Push((int) 4912)
0x772: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x773: Pop(3)
0x774: Push((int) 504513)
0x775: Push((int) 22257)
0x776: Push((int) 4916)
0x777: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x778: Pop(3)
0x779: Return(); Pop(0)

0x77a: Push((int) 22257)
0x77b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x77c: IF (Stack[-1] == 0) GOTO 0x791; Pop(1)

0x77d: PushEmpty(string)
0x77e: Stack[-1] = "Sexy"
0x77f: Call2 0x2e4

0x780: Pop(1)
0x781: Push((int) 521063)
0x782: @@ SetMessage(Stack[-1])
0x783: Pop(1)
0x784: @@ ClearReplies()
0x785: Pop(0)
0x786: Push((int) 521064)
0x787: Push((int) 22259)
0x788: Push((int) 22258)
0x789: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x78a: Pop(3)
0x78b: Push((int) 521069)
0x78c: Push((int) 4913)
0x78d: Push((int) 22264)
0x78e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x78f: Pop(3)
0x790: Return(); Pop(0)

0x791: Push((int) 22259)
0x792: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x793: IF (Stack[-1] == 0) GOTO 0x7a3; Pop(1)

0x794: PushEmpty(string)
0x795: Stack[-1] = "Sexy"
0x796: Call2 0x2e4

0x797: Pop(1)
0x798: Push((int) 521065)
0x799: @@ SetMessage(Stack[-1])
0x79a: Pop(1)
0x79b: @@ ClearReplies()
0x79c: Pop(0)
0x79d: Push((int) 521066)
0x79e: Push((int) 22262)
0x79f: Push((int) 22260)
0x7a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7a1: Pop(3)
0x7a2: Return(); Pop(0)

0x7a3: Push((int) 22262)
0x7a4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7a5: IF (Stack[-1] == 0) GOTO 0x7b5; Pop(1)

0x7a6: PushEmpty(string)
0x7a7: Stack[-1] = "Sexy"
0x7a8: Call2 0x2e4

0x7a9: Pop(1)
0x7aa: Push((int) 521067)
0x7ab: @@ SetMessage(Stack[-1])
0x7ac: Pop(1)
0x7ad: @@ ClearReplies()
0x7ae: Pop(0)
0x7af: Push((int) 521068)
0x7b0: Push((int) 4913)
0x7b1: Push((int) 22263)
0x7b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b3: Pop(3)
0x7b4: Return(); Pop(0)

0x7b5: Push((int) 4913)
0x7b6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7b7: IF (Stack[-1] == 0) GOTO 0x7cc; Pop(1)

0x7b8: PushEmpty(string)
0x7b9: Stack[-1] = "Sexy"
0x7ba: Call2 0x2e4

0x7bb: Pop(1)
0x7bc: Push((int) 504510)
0x7bd: @@ SetMessage(Stack[-1])
0x7be: Pop(1)
0x7bf: @@ ClearReplies()
0x7c0: Pop(0)
0x7c1: Push((int) 504497)
0x7c2: Push((int) -1)
0x7c3: Push((int) 4900)
0x7c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c5: Pop(3)
0x7c6: Push((int) 504512)
0x7c7: Push((int) -1)
0x7c8: Push((int) 4915)
0x7c9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ca: Pop(3)
0x7cb: Return(); Pop(0)

0x7cc: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x7cd: PushEmpty(bool)
0x7ce: Call2 0x1251

0x7cf: Pop(0)
0x7d0: IF (Stack[-1] == 0) GOTO 0x7d4; Pop(1)

0x7d1: @ lshStopAnimation()
0x7d2: Pop(0)
0x7d3: GOTO 0x7d6

0x7d4: @ StopAnimation()
0x7d5: Pop(0)
0x7d6: Return(); Pop(0)

0x7d7: GOTO 0x2fb

0x7d8: Return(); Pop(0)

0x7d9: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x7da: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x7db: PushEmpty(bool, object, float)
0x7dc: Stack[-2] = Stack[-12]
0x7dd: Stack[-1] = (float) 70.0
0x7de: Call2 0x10ac

0x7df: Pop(2)
0x7e0: Pop(1); Push((bool) Stack[-1] == 0)
0x7e1: IF (Stack[-1] == 0) GOTO 0x7e4; Pop(1)

0x7e2: Stack[-10] = (int) -2
0x7e3: Return(); Pop(8)

0x7e4: @ CreateDialog(Stack[-4])
0x7e5: Pop(0)
0x7e6: PushEmpty(int)
0x7e7: Call2 0x124b

0x7e8: Pop(0)
0x7e9: @@ SetNPCName(Stack[-1])
0x7ea: Pop(1)
0x7eb: PushEmpty(int)
0x7ec: Call2 0x1249

0x7ed: Pop(0)
0x7ee: @@ SetNPCDescription(Stack[-1])
0x7ef: Pop(1)
0x7f0: PushEmpty(string)
0x7f1: Call2 0x124d

0x7f2: Pop(0)
0x7f3: @@ SetPhoto(Stack[-1])
0x7f4: Pop(1)
0x7f5: PushEmpty(string)
0x7f6: Call2 0x124f

0x7f7: Pop(0)
0x7f8: @@ SetPhoto2(Stack[-1])
0x7f9: Pop(1)
0x7fa: PushEmpty(int)
0x7fb: Call2 0x1594

0x7fc: Pop(0)
0x7fd: @@ SetPlayerName(Stack[-1])
0x7fe: Pop(1)
0x7ff: Stack[-2] = (int) -1
0x800: @ IsOverrideActive(Stack[-3])
0x801: Pop(0)
0x802: Push(Stack[-3])
0x803: IF (Stack[-1] == 0) GOTO 0x806; Pop(1)

0x804: Stack[-10] = (int) -2
0x805: Return(); Pop(8)

0x806: @ DoDialog(Stack[-4])
0x807: Pop(0)
0x808: PushEmpty(bool, object)
0x809: PushEmpty(object)
0x80a: Call2 0x11c0

0x80b: Stack[-2] = Stack[-1]
0x80c: Pop(1)
0x80d: Call2 0x1101

0x80e: Pop(2)
0x80f: PushEmpty(object, object)
0x810: Stack[-2] = Stack[-11]
0x811: Stack[-1] = Stack[-6]
0x812: Push(-2, 4); TaskCall(5)
0x813: Call2 0x82a

0x814: Pop(-2, 4); TaskReturn
0x815: Pop(2)
0x816: @@ IsDialogEnd(Stack[-1])
0x817: Pop(0)
0x818: Pop(0); Push((bool) Stack[-1] == 0)
0x819: IF (Stack[-1] == 0) GOTO 0x81f; Pop(1)

0x81a: @ sync()
0x81b: Pop(0)
0x81c: @@ IsDialogEnd(Stack[-1])
0x81d: Pop(0)
0x81e: GOTO 0x818

0x81f: PushEmpty(object)
0x820: Stack[-1] = Stack[-10]
0x821: Call2 0x10f0

0x822: Pop(1)
0x823: @ StopDialog(Stack[-4])
0x824: Pop(0)
0x825: @@ GetReturnValue(Stack[-2])
0x826: Pop(0)
0x827: Stack[-10] = Stack[-2]
0x828: Return(); Pop(8)

0x829: Stack[-4] = 0
0x82a: PushEmpty()
0x82b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x82c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x82d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x82e: Push((int) 1)
0x82f: IF (Stack[-1] == 0) GOTO 0x8a7; Pop(1)

0x830: PushEmpty(bool, object)
0x831: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x832: Call2 0x1445

0x833: Pop(1)
0x834: IF (Stack[-1] == 0) GOTO 0x853; Pop(1)

0x835: PushEmpty(object, object)
0x836: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x837: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x838: Call2 0x12ec

0x839: Pop(2)
0x83a: PushEmpty(object, object)
0x83b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x83c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x83d: Call2 0x12c4

0x83e: Pop(2)
0x83f: PushEmpty(string)
0x840: Stack[-1] = "Fear"
0x841: Call2 0x8c5

0x842: Pop(1)
0x843: Push((int) 506853)
0x844: @@ SetMessage(Stack[-1])
0x845: Pop(1)
0x846: @@ ClearReplies()
0x847: Pop(0)
0x848: Push((int) 506854)
0x849: Push((int) 7890)
0x84a: Push((int) 7560)
0x84b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x84c: Pop(3)
0x84d: Push((int) 507262)
0x84e: Push((int) 7890)
0x84f: Push((int) 8004)
0x850: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x851: Pop(3)
0x852: GOTO 0x8a7

0x853: PushEmpty(string)
0x854: Stack[-1] = "Neutral"
0x855: Call2 0x8c5

0x856: Pop(1)
0x857: Push((int) 506855)
0x858: @@ SetMessage(Stack[-1])
0x859: Pop(1)
0x85a: @@ ClearReplies()
0x85b: Pop(0)
0x85c: PushEmpty(bool)
0x85d: Stack[-1] = (bool) 0
0x85e: PushEmpty(bool, object)
0x85f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x860: Call2 0x1451

0x861: Pop(1)
0x862: IF (Stack[-1] == 0) GOTO 0x869; Pop(1)

0x863: PushEmpty(bool, object)
0x864: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x865: Call2 0x1481

0x866: Pop(1)
0x867: IF (Stack[-1] == 0) GOTO 0x869; Pop(1)

0x868: Stack[-1] = (bool) 1
0x869: IF (Stack[-1] == 0) GOTO 0x86f; Pop(1)

0x86a: Push((int) 506856)
0x86b: Push((int) 7563)
0x86c: Push((int) 7562)
0x86d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x86e: Pop(3)
0x86f: PushEmpty(bool)
0x870: Stack[-1] = (bool) 0
0x871: PushEmpty(bool, object)
0x872: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x873: Call2 0x145d

0x874: Pop(1)
0x875: IF (Stack[-1] == 0) GOTO 0x87c; Pop(1)

0x876: PushEmpty(bool, object)
0x877: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x878: Call2 0x148d

0x879: Pop(1)
0x87a: IF (Stack[-1] == 0) GOTO 0x87c; Pop(1)

0x87b: Stack[-1] = (bool) 1
0x87c: IF (Stack[-1] == 0) GOTO 0x882; Pop(1)

0x87d: Push((int) 506859)
0x87e: Push((int) 7566)
0x87f: Push((int) 7565)
0x880: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x881: Pop(3)
0x882: PushEmpty(bool)
0x883: Stack[-1] = (bool) 0
0x884: PushEmpty(bool, object)
0x885: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x886: Call2 0x1469

0x887: Pop(1)
0x888: IF (Stack[-1] == 0) GOTO 0x88f; Pop(1)

0x889: PushEmpty(bool, object)
0x88a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x88b: Call2 0x1475

0x88c: Pop(1)
0x88d: IF (Stack[-1] == 0) GOTO 0x88f; Pop(1)

0x88e: Stack[-1] = (bool) 1
0x88f: IF (Stack[-1] == 0) GOTO 0x895; Pop(1)

0x890: Push((int) 506861)
0x891: Push((int) 7568)
0x892: Push((int) 7567)
0x893: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x894: Pop(3)
0x895: PushEmpty(bool, object)
0x896: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x897: Call2 0x1499

0x898: Pop(1)
0x899: IF (Stack[-1] == 0) GOTO 0x89f; Pop(1)

0x89a: Push((int) 511392)
0x89b: Push((int) 12590)
0x89c: Push((int) 12589)
0x89d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x89e: Pop(3)
0x89f: Push((int) 507528)
0x8a0: Push((int) -1)
0x8a1: Push((int) 8310)
0x8a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8a3: Pop(3)
0x8a4: GOTO 0x8a7

0x8a5: Return(); Pop(0)

0x8a6: GOTO 0x82e

0x8a7: PushEmpty(bool)
0x8a8: Call2 0x1251

0x8a9: Pop(0)
0x8aa: IF (Stack[-1] == 0) GOTO 0x8b6; Pop(1)

0x8ab: @ lshWaitForAnimEnd()
0x8ac: Pop(0)
0x8ad: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8ae: IF (Stack[-1] == 0) GOTO 0x8b0; Pop(1)

0x8af: GOTO 0x8b5

0x8b0: PushEmpty(string)
0x8b1: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8b2: Call2 0x118b

0x8b3: Pop(1)
0x8b4: GOTO 0x8ab

0x8b5: GOTO 0x8c4

0x8b6: Push("all")
0x8b7: Push("idle")
0x8b8: @ PlayAnimation(Stack[-2], Stack[-1])
0x8b9: Pop(2)
0x8ba: @ WaitForAnimEnd()
0x8bb: Pop(0)
0x8bc: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8bd: IF (Stack[-1] == 0) GOTO 0x8bf; Pop(1)

0x8be: GOTO 0x8c4

0x8bf: Push("all")
0x8c0: Push("idle")
0x8c1: @ PlayAnimation(Stack[-2], Stack[-1])
0x8c2: Pop(2)
0x8c3: GOTO 0x8ba

0x8c4: Return(); Pop(0)

0x8c5: PushEmpty()
0x8c6: PushEmpty(bool)
0x8c7: Call2 0x1251

0x8c8: Pop(0)
0x8c9: Pop(1); Push((bool) Stack[-1] == 0)
0x8ca: IF (Stack[-1] == 0) GOTO 0x8cc; Pop(1)

0x8cb: Return(); Pop(0)

0x8cc: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x8cd: IF (Stack[-1] == 0) GOTO 0x8cf; Pop(1)

0x8ce: Return(); Pop(0)

0x8cf: PushEmpty(string, bool)
0x8d0: Stack[-2] = Stack[-3]
0x8d1: Push("")
0x8d2: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x8d3: IF (Stack[-1] == 0) GOTO 0x8d6; Pop(1)

0x8d4: Stack[-1] = (bool) 0
0x8d5: GOTO 0x8d7

0x8d6: Stack[-1] = (bool) 1
0x8d7: Call2 0x119b

0x8d8: Pop(2)
0x8d9: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x8da: Return(); Pop(0)

0x8db: PushEmpty()
0x8dc: Push((int) 1)
0x8dd: IF (Stack[-1] == 0) GOTO 0xb43; Pop(1)

0x8de: PushEmpty()
0x8df: Call2 0x11b9

0x8e0: Pop(0)
0x8e1: Push((int) 8026)
0x8e2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8e3: IF (Stack[-1] == 0) GOTO 0x8ee; Pop(1)

0x8e4: PushEmpty(object, object)
0x8e5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8e6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8e7: Call2 0x1304

0x8e8: Pop(2)
0x8e9: PushEmpty(object, object)
0x8ea: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8eb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8ec: Call2 0x1373

0x8ed: Pop(2)
0x8ee: Push((int) 8027)
0x8ef: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8f0: IF (Stack[-1] == 0) GOTO 0x8fb; Pop(1)

0x8f1: PushEmpty(object, object)
0x8f2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8f3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8f4: Call2 0x1304

0x8f5: Pop(2)
0x8f6: PushEmpty(object, object)
0x8f7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8f8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8f9: Call2 0x1373

0x8fa: Pop(2)
0x8fb: Push((int) 8037)
0x8fc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8fd: IF (Stack[-1] == 0) GOTO 0x90d; Pop(1)

0x8fe: PushEmpty(object, object)
0x8ff: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x900: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x901: Call2 0x12f2

0x902: Pop(2)
0x903: PushEmpty(object, object)
0x904: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x905: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x906: Call2 0x1383

0x907: Pop(2)
0x908: PushEmpty(object, object)
0x909: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x90a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x90b: Call2 0x1393

0x90c: Pop(2)
0x90d: Push((int) 8033)
0x90e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x90f: IF (Stack[-1] == 0) GOTO 0x915; Pop(1)

0x910: PushEmpty(object, object)
0x911: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x912: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x913: Call2 0x12f2

0x914: Pop(2)
0x915: Push((int) 8042)
0x916: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x917: IF (Stack[-1] == 0) GOTO 0x91d; Pop(1)

0x918: PushEmpty(object, object)
0x919: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x91a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x91b: Call2 0x12f8

0x91c: Pop(2)
0x91d: Push((int) 8045)
0x91e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x91f: IF (Stack[-1] == 0) GOTO 0x925; Pop(1)

0x920: PushEmpty(object, object)
0x921: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x922: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x923: Call2 0x12fe

0x924: Pop(2)
0x925: Push((int) 8046)
0x926: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x927: IF (Stack[-1] == 0) GOTO 0x92d; Pop(1)

0x928: PushEmpty(object, object)
0x929: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x92a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x92b: Call2 0x12fe

0x92c: Pop(2)
0x92d: Push((int) 12591)
0x92e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x92f: IF (Stack[-1] == 0) GOTO 0x93a; Pop(1)

0x930: PushEmpty(object, object)
0x931: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x932: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x933: Call2 0x1304

0x934: Pop(2)
0x935: PushEmpty(object, object)
0x936: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x937: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x938: Call2 0x1373

0x939: Pop(2)
0x93a: Push((int) 7559)
0x93b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x93c: IF (Stack[-1] == 0) GOTO 0x9b2; Pop(1)

0x93d: PushEmpty(bool, object)
0x93e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x93f: Call2 0x1445

0x940: Pop(1)
0x941: IF (Stack[-1] == 0) GOTO 0x960; Pop(1)

0x942: PushEmpty(object, object)
0x943: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x944: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x945: Call2 0x12ec

0x946: Pop(2)
0x947: PushEmpty(object, object)
0x948: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x949: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x94a: Call2 0x12c4

0x94b: Pop(2)
0x94c: PushEmpty(string)
0x94d: Stack[-1] = "Fear"
0x94e: Call2 0x8c5

0x94f: Pop(1)
0x950: Push((int) 506853)
0x951: @@ SetMessage(Stack[-1])
0x952: Pop(1)
0x953: @@ ClearReplies()
0x954: Pop(0)
0x955: Push((int) 506854)
0x956: Push((int) 7890)
0x957: Push((int) 7560)
0x958: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x959: Pop(3)
0x95a: Push((int) 507262)
0x95b: Push((int) 7890)
0x95c: Push((int) 8004)
0x95d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x95e: Pop(3)
0x95f: Return(); Pop(0)

0x960: PushEmpty(string)
0x961: Stack[-1] = "Neutral"
0x962: Call2 0x8c5

0x963: Pop(1)
0x964: Push((int) 506855)
0x965: @@ SetMessage(Stack[-1])
0x966: Pop(1)
0x967: @@ ClearReplies()
0x968: Pop(0)
0x969: PushEmpty(bool)
0x96a: Stack[-1] = (bool) 0
0x96b: PushEmpty(bool, object)
0x96c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x96d: Call2 0x1451

0x96e: Pop(1)
0x96f: IF (Stack[-1] == 0) GOTO 0x976; Pop(1)

0x970: PushEmpty(bool, object)
0x971: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x972: Call2 0x1481

0x973: Pop(1)
0x974: IF (Stack[-1] == 0) GOTO 0x976; Pop(1)

0x975: Stack[-1] = (bool) 1
0x976: IF (Stack[-1] == 0) GOTO 0x97c; Pop(1)

0x977: Push((int) 506856)
0x978: Push((int) 7563)
0x979: Push((int) 7562)
0x97a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x97b: Pop(3)
0x97c: PushEmpty(bool)
0x97d: Stack[-1] = (bool) 0
0x97e: PushEmpty(bool, object)
0x97f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x980: Call2 0x145d

0x981: Pop(1)
0x982: IF (Stack[-1] == 0) GOTO 0x989; Pop(1)

0x983: PushEmpty(bool, object)
0x984: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x985: Call2 0x148d

0x986: Pop(1)
0x987: IF (Stack[-1] == 0) GOTO 0x989; Pop(1)

0x988: Stack[-1] = (bool) 1
0x989: IF (Stack[-1] == 0) GOTO 0x98f; Pop(1)

0x98a: Push((int) 506859)
0x98b: Push((int) 7566)
0x98c: Push((int) 7565)
0x98d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x98e: Pop(3)
0x98f: PushEmpty(bool)
0x990: Stack[-1] = (bool) 0
0x991: PushEmpty(bool, object)
0x992: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x993: Call2 0x1469

0x994: Pop(1)
0x995: IF (Stack[-1] == 0) GOTO 0x99c; Pop(1)

0x996: PushEmpty(bool, object)
0x997: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x998: Call2 0x1475

0x999: Pop(1)
0x99a: IF (Stack[-1] == 0) GOTO 0x99c; Pop(1)

0x99b: Stack[-1] = (bool) 1
0x99c: IF (Stack[-1] == 0) GOTO 0x9a2; Pop(1)

0x99d: Push((int) 506861)
0x99e: Push((int) 7568)
0x99f: Push((int) 7567)
0x9a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9a1: Pop(3)
0x9a2: PushEmpty(bool, object)
0x9a3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9a4: Call2 0x1499

0x9a5: Pop(1)
0x9a6: IF (Stack[-1] == 0) GOTO 0x9ac; Pop(1)

0x9a7: Push((int) 511392)
0x9a8: Push((int) 12590)
0x9a9: Push((int) 12589)
0x9aa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9ab: Pop(3)
0x9ac: Push((int) 507528)
0x9ad: Push((int) -1)
0x9ae: Push((int) 8310)
0x9af: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9b0: Pop(3)
0x9b1: Return(); Pop(0)

0x9b2: Push((int) 12590)
0x9b3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9b4: IF (Stack[-1] == 0) GOTO 0x9c4; Pop(1)

0x9b5: PushEmpty(string)
0x9b6: Stack[-1] = "Neutral"
0x9b7: Call2 0x8c5

0x9b8: Pop(1)
0x9b9: Push((int) 511393)
0x9ba: @@ SetMessage(Stack[-1])
0x9bb: Pop(1)
0x9bc: @@ ClearReplies()
0x9bd: Pop(0)
0x9be: Push((int) 511394)
0x9bf: Push((int) -1)
0x9c0: Push((int) 12591)
0x9c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9c2: Pop(3)
0x9c3: Return(); Pop(0)

0x9c4: Push((int) 7568)
0x9c5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9c6: IF (Stack[-1] == 0) GOTO 0x9d6; Pop(1)

0x9c7: PushEmpty(string)
0x9c8: Stack[-1] = "Neutral"
0x9c9: Call2 0x8c5

0x9ca: Pop(1)
0x9cb: Push((int) 506862)
0x9cc: @@ SetMessage(Stack[-1])
0x9cd: Pop(1)
0x9ce: @@ ClearReplies()
0x9cf: Pop(0)
0x9d0: Push((int) 507296)
0x9d1: Push((int) 8044)
0x9d2: Push((int) 8043)
0x9d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9d4: Pop(3)
0x9d5: Return(); Pop(0)

0x9d6: Push((int) 8044)
0x9d7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9d8: IF (Stack[-1] == 0) GOTO 0x9ed; Pop(1)

0x9d9: PushEmpty(string)
0x9da: Stack[-1] = "Neutral"
0x9db: Call2 0x8c5

0x9dc: Pop(1)
0x9dd: Push((int) 507297)
0x9de: @@ SetMessage(Stack[-1])
0x9df: Pop(1)
0x9e0: @@ ClearReplies()
0x9e1: Pop(0)
0x9e2: Push((int) 507298)
0x9e3: Push((int) -1)
0x9e4: Push((int) 8045)
0x9e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9e6: Pop(3)
0x9e7: Push((int) 507299)
0x9e8: Push((int) -1)
0x9e9: Push((int) 8046)
0x9ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9eb: Pop(3)
0x9ec: Return(); Pop(0)

0x9ed: Push((int) 7566)
0x9ee: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9ef: IF (Stack[-1] == 0) GOTO 0xa04; Pop(1)

0x9f0: PushEmpty(object, object)
0x9f1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9f2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9f3: Call2 0x12e6

0x9f4: Pop(2)
0x9f5: PushEmpty(string)
0x9f6: Stack[-1] = "Neutral"
0x9f7: Call2 0x8c5

0x9f8: Pop(1)
0x9f9: Push((int) 506860)
0x9fa: @@ SetMessage(Stack[-1])
0x9fb: Pop(1)
0x9fc: @@ ClearReplies()
0x9fd: Pop(0)
0x9fe: Push((int) 507295)
0x9ff: Push((int) -1)
0xa00: Push((int) 8042)
0xa01: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa02: Pop(3)
0xa03: Return(); Pop(0)

0xa04: Push((int) 7563)
0xa05: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa06: IF (Stack[-1] == 0) GOTO 0xa1b; Pop(1)

0xa07: PushEmpty(string)
0xa08: Stack[-1] = "Modesty"
0xa09: Call2 0x8c5

0xa0a: Pop(1)
0xa0b: Push((int) 506857)
0xa0c: @@ SetMessage(Stack[-1])
0xa0d: Pop(1)
0xa0e: @@ ClearReplies()
0xa0f: Pop(0)
0xa10: Push((int) 506858)
0xa11: Push((int) 8034)
0xa12: Push((int) 7564)
0xa13: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa14: Pop(3)
0xa15: Push((int) 507287)
0xa16: Push((int) -1)
0xa17: Push((int) 8033)
0xa18: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa19: Pop(3)
0xa1a: Return(); Pop(0)

0xa1b: Push((int) 8034)
0xa1c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa1d: IF (Stack[-1] == 0) GOTO 0xa32; Pop(1)

0xa1e: PushEmpty(string)
0xa1f: Stack[-1] = "Modesty"
0xa20: Call2 0x8c5

0xa21: Pop(1)
0xa22: Push((int) 507288)
0xa23: @@ SetMessage(Stack[-1])
0xa24: Pop(1)
0xa25: @@ ClearReplies()
0xa26: Pop(0)
0xa27: Push((int) 507289)
0xa28: Push((int) 8036)
0xa29: Push((int) 8035)
0xa2a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa2b: Pop(3)
0xa2c: Push((int) 507292)
0xa2d: Push((int) 8039)
0xa2e: Push((int) 8038)
0xa2f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa30: Pop(3)
0xa31: Return(); Pop(0)

0xa32: Push((int) 8039)
0xa33: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa34: IF (Stack[-1] == 0) GOTO 0xa44; Pop(1)

0xa35: PushEmpty(string)
0xa36: Stack[-1] = "Modesty"
0xa37: Call2 0x8c5

0xa38: Pop(1)
0xa39: Push((int) 507293)
0xa3a: @@ SetMessage(Stack[-1])
0xa3b: Pop(1)
0xa3c: @@ ClearReplies()
0xa3d: Pop(0)
0xa3e: Push((int) 507294)
0xa3f: Push((int) 8036)
0xa40: Push((int) 8040)
0xa41: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa42: Pop(3)
0xa43: Return(); Pop(0)

0xa44: Push((int) 8036)
0xa45: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa46: IF (Stack[-1] == 0) GOTO 0xa56; Pop(1)

0xa47: PushEmpty(string)
0xa48: Stack[-1] = "Modesty"
0xa49: Call2 0x8c5

0xa4a: Pop(1)
0xa4b: Push((int) 507290)
0xa4c: @@ SetMessage(Stack[-1])
0xa4d: Pop(1)
0xa4e: @@ ClearReplies()
0xa4f: Pop(0)
0xa50: Push((int) 507291)
0xa51: Push((int) -1)
0xa52: Push((int) 8037)
0xa53: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa54: Pop(3)
0xa55: Return(); Pop(0)

0xa56: Push((int) 7890)
0xa57: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa58: IF (Stack[-1] == 0) GOTO 0xa72; Pop(1)

0xa59: PushEmpty(string)
0xa5a: Stack[-1] = "Fear"
0xa5b: Call2 0x8c5

0xa5c: Pop(1)
0xa5d: Push((int) 507162)
0xa5e: @@ SetMessage(Stack[-1])
0xa5f: Pop(1)
0xa60: @@ ClearReplies()
0xa61: Pop(0)
0xa62: Push((int) 507264)
0xa63: Push((int) 8010)
0xa64: Push((int) 8007)
0xa65: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa66: Pop(3)
0xa67: Push((int) 507265)
0xa68: Push((int) 8010)
0xa69: Push((int) 8008)
0xa6a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa6b: Pop(3)
0xa6c: Push((int) 507266)
0xa6d: Push((int) -1)
0xa6e: Push((int) 8009)
0xa6f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa70: Pop(3)
0xa71: Return(); Pop(0)

0xa72: Push((int) 8010)
0xa73: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa74: IF (Stack[-1] == 0) GOTO 0xa89; Pop(1)

0xa75: PushEmpty(string)
0xa76: Stack[-1] = "Fear"
0xa77: Call2 0x8c5

0xa78: Pop(1)
0xa79: Push((int) 507267)
0xa7a: @@ SetMessage(Stack[-1])
0xa7b: Pop(1)
0xa7c: @@ ClearReplies()
0xa7d: Pop(0)
0xa7e: Push((int) 507268)
0xa7f: Push((int) 8015)
0xa80: Push((int) 8012)
0xa81: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa82: Pop(3)
0xa83: Push((int) 507269)
0xa84: Push((int) 8014)
0xa85: Push((int) 8013)
0xa86: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa87: Pop(3)
0xa88: Return(); Pop(0)

0xa89: Push((int) 8014)
0xa8a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa8b: IF (Stack[-1] == 0) GOTO 0xaa5; Pop(1)

0xa8c: PushEmpty(string)
0xa8d: Stack[-1] = "Love"
0xa8e: Call2 0x8c5

0xa8f: Pop(1)
0xa90: Push((int) 507270)
0xa91: @@ SetMessage(Stack[-1])
0xa92: Pop(1)
0xa93: @@ ClearReplies()
0xa94: Pop(0)
0xa95: Push((int) 507272)
0xa96: Push((int) 8019)
0xa97: Push((int) 8016)
0xa98: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa99: Pop(3)
0xa9a: Push((int) 507273)
0xa9b: Push((int) 8015)
0xa9c: Push((int) 8017)
0xa9d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa9e: Pop(3)
0xa9f: Push((int) 507274)
0xaa0: Push((int) -1)
0xaa1: Push((int) 8018)
0xaa2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaa3: Pop(3)
0xaa4: Return(); Pop(0)

0xaa5: Push((int) 8019)
0xaa6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaa7: IF (Stack[-1] == 0) GOTO 0xab7; Pop(1)

0xaa8: PushEmpty(string)
0xaa9: Stack[-1] = "Sexy"
0xaaa: Call2 0x8c5

0xaab: Pop(1)
0xaac: Push((int) 507275)
0xaad: @@ SetMessage(Stack[-1])
0xaae: Pop(1)
0xaaf: @@ ClearReplies()
0xab0: Pop(0)
0xab1: Push((int) 507276)
0xab2: Push((int) 8015)
0xab3: Push((int) 8020)
0xab4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xab5: Pop(3)
0xab6: Return(); Pop(0)

0xab7: Push((int) 8015)
0xab8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xab9: IF (Stack[-1] == 0) GOTO 0xace; Pop(1)

0xaba: PushEmpty(object, object)
0xabb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xabc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xabd: Call2 0x134b

0xabe: Pop(2)
0xabf: PushEmpty(string)
0xac0: Stack[-1] = "Neutral"
0xac1: Call2 0x8c5

0xac2: Pop(1)
0xac3: Push((int) 507271)
0xac4: @@ SetMessage(Stack[-1])
0xac5: Pop(1)
0xac6: @@ ClearReplies()
0xac7: Pop(0)
0xac8: Push((int) 533818)
0xac9: Push((int) 35366)
0xaca: Push((int) 35365)
0xacb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xacc: Pop(3)
0xacd: Return(); Pop(0)

0xace: Push((int) 35366)
0xacf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xad0: IF (Stack[-1] == 0) GOTO 0xae5; Pop(1)

0xad1: PushEmpty(string)
0xad2: Stack[-1] = "Neutral"
0xad3: Call2 0x8c5

0xad4: Pop(1)
0xad5: Push((int) 533819)
0xad6: @@ SetMessage(Stack[-1])
0xad7: Pop(1)
0xad8: @@ ClearReplies()
0xad9: Pop(0)
0xada: Push((int) 507277)
0xadb: Push((int) 8023)
0xadc: Push((int) 8022)
0xadd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xade: Pop(3)
0xadf: Push((int) 507284)
0xae0: Push((int) 8030)
0xae1: Push((int) 8029)
0xae2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xae3: Pop(3)
0xae4: Return(); Pop(0)

0xae5: Push((int) 8030)
0xae6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xae7: IF (Stack[-1] == 0) GOTO 0xaf7; Pop(1)

0xae8: PushEmpty(string)
0xae9: Stack[-1] = "Love"
0xaea: Call2 0x8c5

0xaeb: Pop(1)
0xaec: Push((int) 507285)
0xaed: @@ SetMessage(Stack[-1])
0xaee: Pop(1)
0xaef: @@ ClearReplies()
0xaf0: Pop(0)
0xaf1: Push((int) 507286)
0xaf2: Push((int) 8025)
0xaf3: Push((int) 8031)
0xaf4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaf5: Pop(3)
0xaf6: Return(); Pop(0)

0xaf7: Push((int) 8023)
0xaf8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaf9: IF (Stack[-1] == 0) GOTO 0xb09; Pop(1)

0xafa: PushEmpty(string)
0xafb: Stack[-1] = "Love"
0xafc: Call2 0x8c5

0xafd: Pop(1)
0xafe: Push((int) 507278)
0xaff: @@ SetMessage(Stack[-1])
0xb00: Pop(1)
0xb01: @@ ClearReplies()
0xb02: Pop(0)
0xb03: Push((int) 507279)
0xb04: Push((int) 8025)
0xb05: Push((int) 8024)
0xb06: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb07: Pop(3)
0xb08: Return(); Pop(0)

0xb09: Push((int) 8025)
0xb0a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb0b: IF (Stack[-1] == 0) GOTO 0xb1b; Pop(1)

0xb0c: PushEmpty(string)
0xb0d: Stack[-1] = "Love"
0xb0e: Call2 0x8c5

0xb0f: Pop(1)
0xb10: Push((int) 507280)
0xb11: @@ SetMessage(Stack[-1])
0xb12: Pop(1)
0xb13: @@ ClearReplies()
0xb14: Pop(0)
0xb15: Push((int) 533820)
0xb16: Push((int) 35368)
0xb17: Push((int) 35367)
0xb18: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb19: Pop(3)
0xb1a: Return(); Pop(0)

0xb1b: Push((int) 35368)
0xb1c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb1d: IF (Stack[-1] == 0) GOTO 0xb37; Pop(1)

0xb1e: PushEmpty(string)
0xb1f: Stack[-1] = "Love"
0xb20: Call2 0x8c5

0xb21: Pop(1)
0xb22: Push((int) 533821)
0xb23: @@ SetMessage(Stack[-1])
0xb24: Pop(1)
0xb25: @@ ClearReplies()
0xb26: Pop(0)
0xb27: Push((int) 507281)
0xb28: Push((int) -1)
0xb29: Push((int) 8026)
0xb2a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb2b: Pop(3)
0xb2c: Push((int) 507282)
0xb2d: Push((int) -1)
0xb2e: Push((int) 8027)
0xb2f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb30: Pop(3)
0xb31: Push((int) 507283)
0xb32: Push((int) -1)
0xb33: Push((int) 8028)
0xb34: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb35: Pop(3)
0xb36: Return(); Pop(0)

0xb37: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xb38: PushEmpty(bool)
0xb39: Call2 0x1251

0xb3a: Pop(0)
0xb3b: IF (Stack[-1] == 0) GOTO 0xb3f; Pop(1)

0xb3c: @ lshStopAnimation()
0xb3d: Pop(0)
0xb3e: GOTO 0xb41

0xb3f: @ StopAnimation()
0xb40: Pop(0)
0xb41: Return(); Pop(0)

0xb42: GOTO 0x8dc

0xb43: Return(); Pop(0)

0xb44: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xb45: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xb46: PushEmpty(bool, object, float)
0xb47: Stack[-2] = Stack[-12]
0xb48: Stack[-1] = (float) 70.0
0xb49: Call2 0x10ac

0xb4a: Pop(2)
0xb4b: Pop(1); Push((bool) Stack[-1] == 0)
0xb4c: IF (Stack[-1] == 0) GOTO 0xb4f; Pop(1)

0xb4d: Stack[-10] = (int) -2
0xb4e: Return(); Pop(8)

0xb4f: @ CreateDialog(Stack[-4])
0xb50: Pop(0)
0xb51: PushEmpty(int)
0xb52: Call2 0x124b

0xb53: Pop(0)
0xb54: @@ SetNPCName(Stack[-1])
0xb55: Pop(1)
0xb56: PushEmpty(int)
0xb57: Call2 0x1249

0xb58: Pop(0)
0xb59: @@ SetNPCDescription(Stack[-1])
0xb5a: Pop(1)
0xb5b: PushEmpty(string)
0xb5c: Call2 0x124d

0xb5d: Pop(0)
0xb5e: @@ SetPhoto(Stack[-1])
0xb5f: Pop(1)
0xb60: PushEmpty(string)
0xb61: Call2 0x124f

0xb62: Pop(0)
0xb63: @@ SetPhoto2(Stack[-1])
0xb64: Pop(1)
0xb65: PushEmpty(int)
0xb66: Call2 0x1594

0xb67: Pop(0)
0xb68: @@ SetPlayerName(Stack[-1])
0xb69: Pop(1)
0xb6a: Stack[-2] = (int) -1
0xb6b: @ IsOverrideActive(Stack[-3])
0xb6c: Pop(0)
0xb6d: Push(Stack[-3])
0xb6e: IF (Stack[-1] == 0) GOTO 0xb71; Pop(1)

0xb6f: Stack[-10] = (int) -2
0xb70: Return(); Pop(8)

0xb71: @ DoDialog(Stack[-4])
0xb72: Pop(0)
0xb73: PushEmpty(bool, object)
0xb74: PushEmpty(object)
0xb75: Call2 0x11c0

0xb76: Stack[-2] = Stack[-1]
0xb77: Pop(1)
0xb78: Call2 0x1101

0xb79: Pop(2)
0xb7a: PushEmpty(object, object)
0xb7b: Stack[-2] = Stack[-11]
0xb7c: Stack[-1] = Stack[-6]
0xb7d: Push(-2, 4); TaskCall(7)
0xb7e: Call2 0xb95

0xb7f: Pop(-2, 4); TaskReturn
0xb80: Pop(2)
0xb81: @@ IsDialogEnd(Stack[-1])
0xb82: Pop(0)
0xb83: Pop(0); Push((bool) Stack[-1] == 0)
0xb84: IF (Stack[-1] == 0) GOTO 0xb8a; Pop(1)

0xb85: @ sync()
0xb86: Pop(0)
0xb87: @@ IsDialogEnd(Stack[-1])
0xb88: Pop(0)
0xb89: GOTO 0xb83

0xb8a: PushEmpty(object)
0xb8b: Stack[-1] = Stack[-10]
0xb8c: Call2 0x10f0

0xb8d: Pop(1)
0xb8e: @ StopDialog(Stack[-4])
0xb8f: Pop(0)
0xb90: @@ GetReturnValue(Stack[-2])
0xb91: Pop(0)
0xb92: Stack[-10] = Stack[-2]
0xb93: Return(); Pop(8)

0xb94: Stack[-4] = 0
0xb95: PushEmpty()
0xb96: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xb97: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xb98: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xb99: Push((int) 1)
0xb9a: IF (Stack[-1] == 0) GOTO 0xbac; Pop(1)

0xb9b: PushEmpty(string)
0xb9c: Stack[-1] = "Neutral"
0xb9d: Call2 0xbca

0xb9e: Pop(1)
0xb9f: Push((int) 509840)
0xba0: @@ SetMessage(Stack[-1])
0xba1: Pop(1)
0xba2: @@ ClearReplies()
0xba3: Pop(0)
0xba4: Push((int) 511259)
0xba5: Push((int) -1)
0xba6: Push((int) 12449)
0xba7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xba8: Pop(3)
0xba9: GOTO 0xbac

0xbaa: Return(); Pop(0)

0xbab: GOTO 0xb99

0xbac: PushEmpty(bool)
0xbad: Call2 0x1251

0xbae: Pop(0)
0xbaf: IF (Stack[-1] == 0) GOTO 0xbbb; Pop(1)

0xbb0: @ lshWaitForAnimEnd()
0xbb1: Pop(0)
0xbb2: Push( Stack[3 + Tasks[-1].StackPointer] )
0xbb3: IF (Stack[-1] == 0) GOTO 0xbb5; Pop(1)

0xbb4: GOTO 0xbba

0xbb5: PushEmpty(string)
0xbb6: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xbb7: Call2 0x118b

0xbb8: Pop(1)
0xbb9: GOTO 0xbb0

0xbba: GOTO 0xbc9

0xbbb: Push("all")
0xbbc: Push("idle")
0xbbd: @ PlayAnimation(Stack[-2], Stack[-1])
0xbbe: Pop(2)
0xbbf: @ WaitForAnimEnd()
0xbc0: Pop(0)
0xbc1: Push( Stack[3 + Tasks[-1].StackPointer] )
0xbc2: IF (Stack[-1] == 0) GOTO 0xbc4; Pop(1)

0xbc3: GOTO 0xbc9

0xbc4: Push("all")
0xbc5: Push("idle")
0xbc6: @ PlayAnimation(Stack[-2], Stack[-1])
0xbc7: Pop(2)
0xbc8: GOTO 0xbbf

0xbc9: Return(); Pop(0)

0xbca: PushEmpty()
0xbcb: PushEmpty(bool)
0xbcc: Call2 0x1251

0xbcd: Pop(0)
0xbce: Pop(1); Push((bool) Stack[-1] == 0)
0xbcf: IF (Stack[-1] == 0) GOTO 0xbd1; Pop(1)

0xbd0: Return(); Pop(0)

0xbd1: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xbd2: IF (Stack[-1] == 0) GOTO 0xbd4; Pop(1)

0xbd3: Return(); Pop(0)

0xbd4: PushEmpty(string, bool)
0xbd5: Stack[-2] = Stack[-3]
0xbd6: Push("")
0xbd7: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xbd8: IF (Stack[-1] == 0) GOTO 0xbdb; Pop(1)

0xbd9: Stack[-1] = (bool) 0
0xbda: GOTO 0xbdc

0xbdb: Stack[-1] = (bool) 1
0xbdc: Call2 0x119b

0xbdd: Pop(2)
0xbde: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xbdf: Return(); Pop(0)

0xbe0: PushEmpty()
0xbe1: Push((int) 1)
0xbe2: IF (Stack[-1] == 0) GOTO 0xc63; Pop(1)

0xbe3: PushEmpty()
0xbe4: Call2 0x11b9

0xbe5: Pop(0)
0xbe6: Push((int) 10839)
0xbe7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbe8: IF (Stack[-1] == 0) GOTO 0xbf8; Pop(1)

0xbe9: PushEmpty(string)
0xbea: Stack[-1] = "Neutral"
0xbeb: Call2 0xbca

0xbec: Pop(1)
0xbed: Push((int) 509840)
0xbee: @@ SetMessage(Stack[-1])
0xbef: Pop(1)
0xbf0: @@ ClearReplies()
0xbf1: Pop(0)
0xbf2: Push((int) 511259)
0xbf3: Push((int) -1)
0xbf4: Push((int) 12449)
0xbf5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbf6: Pop(3)
0xbf7: Return(); Pop(0)

0xbf8: Push((int) 10821)
0xbf9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbfa: IF (Stack[-1] == 0) GOTO 0xbfb; Pop(1)

0xbfb: Push((int) 10835)
0xbfc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbfd: IF (Stack[-1] == 0) GOTO 0xc12; Pop(1)

0xbfe: PushEmpty(string)
0xbff: Stack[-1] = "Sexy"
0xc00: Call2 0xbca

0xc01: Pop(1)
0xc02: Push((int) 509837)
0xc03: @@ SetMessage(Stack[-1])
0xc04: Pop(1)
0xc05: @@ ClearReplies()
0xc06: Pop(0)
0xc07: Push((int) 509839)
0xc08: Push((int) 10828)
0xc09: Push((int) 10837)
0xc0a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc0b: Pop(3)
0xc0c: Push((int) 509838)
0xc0d: Push((int) -1)
0xc0e: Push((int) 10836)
0xc0f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc10: Pop(3)
0xc11: Return(); Pop(0)

0xc12: Push((int) 10828)
0xc13: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc14: IF (Stack[-1] == 0) GOTO 0xc29; Pop(1)

0xc15: PushEmpty(string)
0xc16: Stack[-1] = "Sexy"
0xc17: Call2 0xbca

0xc18: Pop(1)
0xc19: Push((int) 509830)
0xc1a: @@ SetMessage(Stack[-1])
0xc1b: Pop(1)
0xc1c: @@ ClearReplies()
0xc1d: Pop(0)
0xc1e: Push((int) 509831)
0xc1f: Push((int) -1)
0xc20: Push((int) 10829)
0xc21: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc22: Pop(3)
0xc23: Push((int) 509832)
0xc24: Push((int) 10831)
0xc25: Push((int) 10830)
0xc26: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc27: Pop(3)
0xc28: Return(); Pop(0)

0xc29: Push((int) 10831)
0xc2a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc2b: IF (Stack[-1] == 0) GOTO 0xc40; Pop(1)

0xc2c: PushEmpty(string)
0xc2d: Stack[-1] = "Sexy"
0xc2e: Call2 0xbca

0xc2f: Pop(1)
0xc30: Push((int) 509833)
0xc31: @@ SetMessage(Stack[-1])
0xc32: Pop(1)
0xc33: @@ ClearReplies()
0xc34: Pop(0)
0xc35: Push((int) 509834)
0xc36: Push((int) -1)
0xc37: Push((int) 10832)
0xc38: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc39: Pop(3)
0xc3a: Push((int) 509835)
0xc3b: Push((int) -1)
0xc3c: Push((int) 10833)
0xc3d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc3e: Pop(3)
0xc3f: Return(); Pop(0)

0xc40: Push((int) 10823)
0xc41: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc42: IF (Stack[-1] == 0) GOTO 0xc57; Pop(1)

0xc43: PushEmpty(string)
0xc44: Stack[-1] = "Sexy"
0xc45: Call2 0xbca

0xc46: Pop(1)
0xc47: Push((int) 509826)
0xc48: @@ SetMessage(Stack[-1])
0xc49: Pop(1)
0xc4a: @@ ClearReplies()
0xc4b: Pop(0)
0xc4c: Push((int) 509827)
0xc4d: Push((int) 10828)
0xc4e: Push((int) 10824)
0xc4f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc50: Pop(3)
0xc51: Push((int) 509828)
0xc52: Push((int) -1)
0xc53: Push((int) 10826)
0xc54: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc55: Pop(3)
0xc56: Return(); Pop(0)

0xc57: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xc58: PushEmpty(bool)
0xc59: Call2 0x1251

0xc5a: Pop(0)
0xc5b: IF (Stack[-1] == 0) GOTO 0xc5f; Pop(1)

0xc5c: @ lshStopAnimation()
0xc5d: Pop(0)
0xc5e: GOTO 0xc61

0xc5f: @ StopAnimation()
0xc60: Pop(0)
0xc61: Return(); Pop(0)

0xc62: GOTO 0xbe1

0xc63: Return(); Pop(0)

0xc64: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xc65: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xc66: PushEmpty(bool, object, float)
0xc67: Stack[-2] = Stack[-12]
0xc68: Stack[-1] = (float) 70.0
0xc69: Call2 0x10ac

0xc6a: Pop(2)
0xc6b: Pop(1); Push((bool) Stack[-1] == 0)
0xc6c: IF (Stack[-1] == 0) GOTO 0xc6f; Pop(1)

0xc6d: Stack[-10] = (int) -2
0xc6e: Return(); Pop(8)

0xc6f: @ CreateDialog(Stack[-4])
0xc70: Pop(0)
0xc71: PushEmpty(int)
0xc72: Call2 0x124b

0xc73: Pop(0)
0xc74: @@ SetNPCName(Stack[-1])
0xc75: Pop(1)
0xc76: PushEmpty(int)
0xc77: Call2 0x1249

0xc78: Pop(0)
0xc79: @@ SetNPCDescription(Stack[-1])
0xc7a: Pop(1)
0xc7b: PushEmpty(string)
0xc7c: Call2 0x124d

0xc7d: Pop(0)
0xc7e: @@ SetPhoto(Stack[-1])
0xc7f: Pop(1)
0xc80: PushEmpty(string)
0xc81: Call2 0x124f

0xc82: Pop(0)
0xc83: @@ SetPhoto2(Stack[-1])
0xc84: Pop(1)
0xc85: PushEmpty(int)
0xc86: Call2 0x1594

0xc87: Pop(0)
0xc88: @@ SetPlayerName(Stack[-1])
0xc89: Pop(1)
0xc8a: Stack[-2] = (int) -1
0xc8b: @ IsOverrideActive(Stack[-3])
0xc8c: Pop(0)
0xc8d: Push(Stack[-3])
0xc8e: IF (Stack[-1] == 0) GOTO 0xc91; Pop(1)

0xc8f: Stack[-10] = (int) -2
0xc90: Return(); Pop(8)

0xc91: @ DoDialog(Stack[-4])
0xc92: Pop(0)
0xc93: PushEmpty(bool, object)
0xc94: PushEmpty(object)
0xc95: Call2 0x11c0

0xc96: Stack[-2] = Stack[-1]
0xc97: Pop(1)
0xc98: Call2 0x1101

0xc99: Pop(2)
0xc9a: PushEmpty(object, object)
0xc9b: Stack[-2] = Stack[-11]
0xc9c: Stack[-1] = Stack[-6]
0xc9d: Push(-2, 4); TaskCall(9)
0xc9e: Call2 0xcb5

0xc9f: Pop(-2, 4); TaskReturn
0xca0: Pop(2)
0xca1: @@ IsDialogEnd(Stack[-1])
0xca2: Pop(0)
0xca3: Pop(0); Push((bool) Stack[-1] == 0)
0xca4: IF (Stack[-1] == 0) GOTO 0xcaa; Pop(1)

0xca5: @ sync()
0xca6: Pop(0)
0xca7: @@ IsDialogEnd(Stack[-1])
0xca8: Pop(0)
0xca9: GOTO 0xca3

0xcaa: PushEmpty(object)
0xcab: Stack[-1] = Stack[-10]
0xcac: Call2 0x10f0

0xcad: Pop(1)
0xcae: @ StopDialog(Stack[-4])
0xcaf: Pop(0)
0xcb0: @@ GetReturnValue(Stack[-2])
0xcb1: Pop(0)
0xcb2: Stack[-10] = Stack[-2]
0xcb3: Return(); Pop(8)

0xcb4: Stack[-4] = 0
0xcb5: PushEmpty()
0xcb6: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xcb7: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xcb8: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xcb9: Push((int) 1)
0xcba: IF (Stack[-1] == 0) GOTO 0xd0d; Pop(1)

0xcbb: PushEmpty(string)
0xcbc: Stack[-1] = "Neutral"
0xcbd: Call2 0xd2b

0xcbe: Pop(1)
0xcbf: Push((int) 511255)
0xcc0: @@ SetMessage(Stack[-1])
0xcc1: Pop(1)
0xcc2: @@ ClearReplies()
0xcc3: Pop(0)
0xcc4: PushEmpty(bool)
0xcc5: Stack[-1] = (bool) 1
0xcc6: PushEmpty(bool)
0xcc7: Stack[-1] = (bool) 1
0xcc8: PushEmpty(bool)
0xcc9: Stack[-1] = (bool) 0
0xcca: PushEmpty(bool, object)
0xccb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xccc: Call2 0x14ed

0xccd: Pop(1)
0xcce: IF (Stack[-1] == 0) GOTO 0xcd5; Pop(1)

0xccf: PushEmpty(bool, object)
0xcd0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcd1: Call2 0x14b1

0xcd2: Pop(1)
0xcd3: IF (Stack[-1] == 0) GOTO 0xcd5; Pop(1)

0xcd4: Stack[-1] = (bool) 1
0xcd5: IF (Stack[-1] == 0) GOTO 0xce5; Pop(1)

0xcd6: PushEmpty(bool)
0xcd7: Stack[-1] = (bool) 0
0xcd8: PushEmpty(bool, object)
0xcd9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcda: Call2 0x14c9

0xcdb: Pop(1)
0xcdc: IF (Stack[-1] == 0) GOTO 0xce3; Pop(1)

0xcdd: PushEmpty(bool, object)
0xcde: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcdf: Call2 0x14ed

0xce0: Pop(1)
0xce1: IF (Stack[-1] == 0) GOTO 0xce3; Pop(1)

0xce2: Stack[-1] = (bool) 1
0xce3: IF (Stack[-1] == 0) GOTO 0xce5; Pop(1)

0xce4: Stack[-1] = (bool) 0
0xce5: IF (Stack[-1] == 0) GOTO 0xcf5; Pop(1)

0xce6: PushEmpty(bool)
0xce7: Stack[-1] = (bool) 0
0xce8: PushEmpty(bool, object)
0xce9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcea: Call2 0x14bd

0xceb: Pop(1)
0xcec: IF (Stack[-1] == 0) GOTO 0xcf3; Pop(1)

0xced: PushEmpty(bool, object)
0xcee: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcef: Call2 0x14ed

0xcf0: Pop(1)
0xcf1: IF (Stack[-1] == 0) GOTO 0xcf3; Pop(1)

0xcf2: Stack[-1] = (bool) 1
0xcf3: IF (Stack[-1] == 0) GOTO 0xcf5; Pop(1)

0xcf4: Stack[-1] = (bool) 0
0xcf5: IF (Stack[-1] == 0) GOTO 0xcfb; Pop(1)

0xcf6: Push((int) 511257)
0xcf7: Push((int) 12448)
0xcf8: Push((int) 12447)
0xcf9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcfa: Pop(3)
0xcfb: PushEmpty(bool, object)
0xcfc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcfd: Call2 0x142d

0xcfe: Pop(1)
0xcff: IF (Stack[-1] == 0) GOTO 0xd05; Pop(1)

0xd00: Push((int) 535125)
0xd01: Push((int) 36785)
0xd02: Push((int) 36784)
0xd03: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd04: Pop(3)
0xd05: Push((int) 511256)
0xd06: Push((int) -1)
0xd07: Push((int) 12446)
0xd08: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd09: Pop(3)
0xd0a: GOTO 0xd0d

0xd0b: Return(); Pop(0)

0xd0c: GOTO 0xcb9

0xd0d: PushEmpty(bool)
0xd0e: Call2 0x1251

0xd0f: Pop(0)
0xd10: IF (Stack[-1] == 0) GOTO 0xd1c; Pop(1)

0xd11: @ lshWaitForAnimEnd()
0xd12: Pop(0)
0xd13: Push( Stack[3 + Tasks[-1].StackPointer] )
0xd14: IF (Stack[-1] == 0) GOTO 0xd16; Pop(1)

0xd15: GOTO 0xd1b

0xd16: PushEmpty(string)
0xd17: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xd18: Call2 0x118b

0xd19: Pop(1)
0xd1a: GOTO 0xd11

0xd1b: GOTO 0xd2a

0xd1c: Push("all")
0xd1d: Push("idle")
0xd1e: @ PlayAnimation(Stack[-2], Stack[-1])
0xd1f: Pop(2)
0xd20: @ WaitForAnimEnd()
0xd21: Pop(0)
0xd22: Push( Stack[3 + Tasks[-1].StackPointer] )
0xd23: IF (Stack[-1] == 0) GOTO 0xd25; Pop(1)

0xd24: GOTO 0xd2a

0xd25: Push("all")
0xd26: Push("idle")
0xd27: @ PlayAnimation(Stack[-2], Stack[-1])
0xd28: Pop(2)
0xd29: GOTO 0xd20

0xd2a: Return(); Pop(0)

0xd2b: PushEmpty()
0xd2c: PushEmpty(bool)
0xd2d: Call2 0x1251

0xd2e: Pop(0)
0xd2f: Pop(1); Push((bool) Stack[-1] == 0)
0xd30: IF (Stack[-1] == 0) GOTO 0xd32; Pop(1)

0xd31: Return(); Pop(0)

0xd32: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xd33: IF (Stack[-1] == 0) GOTO 0xd35; Pop(1)

0xd34: Return(); Pop(0)

0xd35: PushEmpty(string, bool)
0xd36: Stack[-2] = Stack[-3]
0xd37: Push("")
0xd38: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xd39: IF (Stack[-1] == 0) GOTO 0xd3c; Pop(1)

0xd3a: Stack[-1] = (bool) 0
0xd3b: GOTO 0xd3d

0xd3c: Stack[-1] = (bool) 1
0xd3d: Call2 0x119b

0xd3e: Pop(2)
0xd3f: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xd40: Return(); Pop(0)

0xd41: PushEmpty()
0xd42: Push((int) 1)
0xd43: IF (Stack[-1] == 0) GOTO 0xec0; Pop(1)

0xd44: PushEmpty()
0xd45: Call2 0x11b9

0xd46: Pop(0)
0xd47: Push((int) 12447)
0xd48: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd49: IF (Stack[-1] == 0) GOTO 0xd4f; Pop(1)

0xd4a: PushEmpty(object, object)
0xd4b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd4c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd4d: Call2 0x13a3

0xd4e: Pop(2)
0xd4f: Push((int) 36784)
0xd50: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd51: IF (Stack[-1] == 0) GOTO 0xd57; Pop(1)

0xd52: PushEmpty(object, object)
0xd53: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd54: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd55: Call2 0x12e0

0xd56: Pop(2)
0xd57: Push((int) 12445)
0xd58: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd59: IF (Stack[-1] == 0) GOTO 0xdaa; Pop(1)

0xd5a: PushEmpty(string)
0xd5b: Stack[-1] = "Neutral"
0xd5c: Call2 0xd2b

0xd5d: Pop(1)
0xd5e: Push((int) 511255)
0xd5f: @@ SetMessage(Stack[-1])
0xd60: Pop(1)
0xd61: @@ ClearReplies()
0xd62: Pop(0)
0xd63: PushEmpty(bool)
0xd64: Stack[-1] = (bool) 1
0xd65: PushEmpty(bool)
0xd66: Stack[-1] = (bool) 1
0xd67: PushEmpty(bool)
0xd68: Stack[-1] = (bool) 0
0xd69: PushEmpty(bool, object)
0xd6a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd6b: Call2 0x14ed

0xd6c: Pop(1)
0xd6d: IF (Stack[-1] == 0) GOTO 0xd74; Pop(1)

0xd6e: PushEmpty(bool, object)
0xd6f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd70: Call2 0x14b1

0xd71: Pop(1)
0xd72: IF (Stack[-1] == 0) GOTO 0xd74; Pop(1)

0xd73: Stack[-1] = (bool) 1
0xd74: IF (Stack[-1] == 0) GOTO 0xd84; Pop(1)

0xd75: PushEmpty(bool)
0xd76: Stack[-1] = (bool) 0
0xd77: PushEmpty(bool, object)
0xd78: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd79: Call2 0x14c9

0xd7a: Pop(1)
0xd7b: IF (Stack[-1] == 0) GOTO 0xd82; Pop(1)

0xd7c: PushEmpty(bool, object)
0xd7d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd7e: Call2 0x14ed

0xd7f: Pop(1)
0xd80: IF (Stack[-1] == 0) GOTO 0xd82; Pop(1)

0xd81: Stack[-1] = (bool) 1
0xd82: IF (Stack[-1] == 0) GOTO 0xd84; Pop(1)

0xd83: Stack[-1] = (bool) 0
0xd84: IF (Stack[-1] == 0) GOTO 0xd94; Pop(1)

0xd85: PushEmpty(bool)
0xd86: Stack[-1] = (bool) 0
0xd87: PushEmpty(bool, object)
0xd88: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd89: Call2 0x14bd

0xd8a: Pop(1)
0xd8b: IF (Stack[-1] == 0) GOTO 0xd92; Pop(1)

0xd8c: PushEmpty(bool, object)
0xd8d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd8e: Call2 0x14ed

0xd8f: Pop(1)
0xd90: IF (Stack[-1] == 0) GOTO 0xd92; Pop(1)

0xd91: Stack[-1] = (bool) 1
0xd92: IF (Stack[-1] == 0) GOTO 0xd94; Pop(1)

0xd93: Stack[-1] = (bool) 0
0xd94: IF (Stack[-1] == 0) GOTO 0xd9a; Pop(1)

0xd95: Push((int) 511257)
0xd96: Push((int) 12448)
0xd97: Push((int) 12447)
0xd98: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd99: Pop(3)
0xd9a: PushEmpty(bool, object)
0xd9b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd9c: Call2 0x142d

0xd9d: Pop(1)
0xd9e: IF (Stack[-1] == 0) GOTO 0xda4; Pop(1)

0xd9f: Push((int) 535125)
0xda0: Push((int) 36785)
0xda1: Push((int) 36784)
0xda2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xda3: Pop(3)
0xda4: Push((int) 511256)
0xda5: Push((int) -1)
0xda6: Push((int) 12446)
0xda7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xda8: Pop(3)
0xda9: Return(); Pop(0)

0xdaa: Push((int) 36785)
0xdab: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdac: IF (Stack[-1] == 0) GOTO 0xdc1; Pop(1)

0xdad: PushEmpty(string)
0xdae: Stack[-1] = "Modesty"
0xdaf: Call2 0xd2b

0xdb0: Pop(1)
0xdb1: Push((int) 535126)
0xdb2: @@ SetMessage(Stack[-1])
0xdb3: Pop(1)
0xdb4: @@ ClearReplies()
0xdb5: Pop(0)
0xdb6: Push((int) 535127)
0xdb7: Push((int) 36787)
0xdb8: Push((int) 36786)
0xdb9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdba: Pop(3)
0xdbb: Push((int) 535134)
0xdbc: Push((int) 36787)
0xdbd: Push((int) 36793)
0xdbe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdbf: Pop(3)
0xdc0: Return(); Pop(0)

0xdc1: Push((int) 36787)
0xdc2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdc3: IF (Stack[-1] == 0) GOTO 0xdd8; Pop(1)

0xdc4: PushEmpty(string)
0xdc5: Stack[-1] = "Modesty"
0xdc6: Call2 0xd2b

0xdc7: Pop(1)
0xdc8: Push((int) 535128)
0xdc9: @@ SetMessage(Stack[-1])
0xdca: Pop(1)
0xdcb: @@ ClearReplies()
0xdcc: Pop(0)
0xdcd: Push((int) 535129)
0xdce: Push((int) 36789)
0xdcf: Push((int) 36788)
0xdd0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdd1: Pop(3)
0xdd2: Push((int) 535137)
0xdd3: Push((int) 36798)
0xdd4: Push((int) 36797)
0xdd5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdd6: Pop(3)
0xdd7: Return(); Pop(0)

0xdd8: Push((int) 36798)
0xdd9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdda: IF (Stack[-1] == 0) GOTO 0xdef; Pop(1)

0xddb: PushEmpty(string)
0xddc: Stack[-1] = "Modesty"
0xddd: Call2 0xd2b

0xdde: Pop(1)
0xddf: Push((int) 535138)
0xde0: @@ SetMessage(Stack[-1])
0xde1: Pop(1)
0xde2: @@ ClearReplies()
0xde3: Pop(0)
0xde4: Push((int) 535139)
0xde5: Push((int) -1)
0xde6: Push((int) 36799)
0xde7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xde8: Pop(3)
0xde9: Push((int) 535140)
0xdea: Push((int) 36789)
0xdeb: Push((int) 36800)
0xdec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xded: Pop(3)
0xdee: Return(); Pop(0)

0xdef: Push((int) 36789)
0xdf0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdf1: IF (Stack[-1] == 0) GOTO 0xe0b; Pop(1)

0xdf2: PushEmpty(string)
0xdf3: Stack[-1] = "Modesty"
0xdf4: Call2 0xd2b

0xdf5: Pop(1)
0xdf6: Push((int) 535130)
0xdf7: @@ SetMessage(Stack[-1])
0xdf8: Pop(1)
0xdf9: @@ ClearReplies()
0xdfa: Pop(0)
0xdfb: Push((int) 535131)
0xdfc: Push((int) 36791)
0xdfd: Push((int) 36790)
0xdfe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdff: Pop(3)
0xe00: PushEmpty(bool, object)
0xe01: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe02: Call2 0x14a5

0xe03: Pop(1)
0xe04: IF (Stack[-1] == 0) GOTO 0xe0a; Pop(1)

0xe05: Push((int) 535135)
0xe06: Push((int) -1)
0xe07: Push((int) 36795)
0xe08: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe09: Pop(3)
0xe0a: Return(); Pop(0)

0xe0b: Push((int) 36791)
0xe0c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe0d: IF (Stack[-1] == 0) GOTO 0xe22; Pop(1)

0xe0e: PushEmpty(string)
0xe0f: Stack[-1] = "Modesty"
0xe10: Call2 0xd2b

0xe11: Pop(1)
0xe12: Push((int) 535132)
0xe13: @@ SetMessage(Stack[-1])
0xe14: Pop(1)
0xe15: @@ ClearReplies()
0xe16: Pop(0)
0xe17: Push((int) 535133)
0xe18: Push((int) -1)
0xe19: Push((int) 36792)
0xe1a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe1b: Pop(3)
0xe1c: Push((int) 535136)
0xe1d: Push((int) -1)
0xe1e: Push((int) 36796)
0xe1f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe20: Pop(3)
0xe21: Return(); Pop(0)

0xe22: Push((int) 12448)
0xe23: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe24: IF (Stack[-1] == 0) GOTO 0xe39; Pop(1)

0xe25: PushEmpty(string)
0xe26: Stack[-1] = "Neutral"
0xe27: Call2 0xd2b

0xe28: Pop(1)
0xe29: Push((int) 511258)
0xe2a: @@ SetMessage(Stack[-1])
0xe2b: Pop(1)
0xe2c: @@ ClearReplies()
0xe2d: Pop(0)
0xe2e: Push((int) 511267)
0xe2f: Push((int) 12458)
0xe30: Push((int) 12457)
0xe31: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe32: Pop(3)
0xe33: Push((int) 511260)
0xe34: Push((int) 12451)
0xe35: Push((int) 12450)
0xe36: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe37: Pop(3)
0xe38: Return(); Pop(0)

0xe39: Push((int) 12451)
0xe3a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe3b: IF (Stack[-1] == 0) GOTO 0xe4b; Pop(1)

0xe3c: PushEmpty(string)
0xe3d: Stack[-1] = "Love"
0xe3e: Call2 0xd2b

0xe3f: Pop(1)
0xe40: Push((int) 511261)
0xe41: @@ SetMessage(Stack[-1])
0xe42: Pop(1)
0xe43: @@ ClearReplies()
0xe44: Pop(0)
0xe45: Push((int) 511262)
0xe46: Push((int) 12453)
0xe47: Push((int) 12452)
0xe48: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe49: Pop(3)
0xe4a: Return(); Pop(0)

0xe4b: Push((int) 12453)
0xe4c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe4d: IF (Stack[-1] == 0) GOTO 0xe5d; Pop(1)

0xe4e: PushEmpty(string)
0xe4f: Stack[-1] = "Love"
0xe50: Call2 0xd2b

0xe51: Pop(1)
0xe52: Push((int) 511263)
0xe53: @@ SetMessage(Stack[-1])
0xe54: Pop(1)
0xe55: @@ ClearReplies()
0xe56: Pop(0)
0xe57: Push((int) 511264)
0xe58: Push((int) 12455)
0xe59: Push((int) 12454)
0xe5a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe5b: Pop(3)
0xe5c: Return(); Pop(0)

0xe5d: Push((int) 12455)
0xe5e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe5f: IF (Stack[-1] == 0) GOTO 0xe6f; Pop(1)

0xe60: PushEmpty(string)
0xe61: Stack[-1] = "Love"
0xe62: Call2 0xd2b

0xe63: Pop(1)
0xe64: Push((int) 511265)
0xe65: @@ SetMessage(Stack[-1])
0xe66: Pop(1)
0xe67: @@ ClearReplies()
0xe68: Pop(0)
0xe69: Push((int) 511266)
0xe6a: Push((int) 12458)
0xe6b: Push((int) 12456)
0xe6c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe6d: Pop(3)
0xe6e: Return(); Pop(0)

0xe6f: Push((int) 12458)
0xe70: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe71: IF (Stack[-1] == 0) GOTO 0xe86; Pop(1)

0xe72: PushEmpty(string)
0xe73: Stack[-1] = "Neutral"
0xe74: Call2 0xd2b

0xe75: Pop(1)
0xe76: Push((int) 511268)
0xe77: @@ SetMessage(Stack[-1])
0xe78: Pop(1)
0xe79: @@ ClearReplies()
0xe7a: Pop(0)
0xe7b: Push((int) 511269)
0xe7c: Push((int) 12463)
0xe7d: Push((int) 12459)
0xe7e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe7f: Pop(3)
0xe80: Push((int) 511270)
0xe81: Push((int) 12461)
0xe82: Push((int) 12460)
0xe83: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe84: Pop(3)
0xe85: Return(); Pop(0)

0xe86: Push((int) 12461)
0xe87: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe88: IF (Stack[-1] == 0) GOTO 0xe9d; Pop(1)

0xe89: PushEmpty(string)
0xe8a: Stack[-1] = "Love"
0xe8b: Call2 0xd2b

0xe8c: Pop(1)
0xe8d: Push((int) 511271)
0xe8e: @@ SetMessage(Stack[-1])
0xe8f: Pop(1)
0xe90: @@ ClearReplies()
0xe91: Pop(0)
0xe92: Push((int) 511273)
0xe93: Push((int) 12463)
0xe94: Push((int) 12464)
0xe95: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe96: Pop(3)
0xe97: Push((int) 511274)
0xe98: Push((int) -1)
0xe99: Push((int) 12465)
0xe9a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe9b: Pop(3)
0xe9c: Return(); Pop(0)

0xe9d: Push((int) 12463)
0xe9e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe9f: IF (Stack[-1] == 0) GOTO 0xeb4; Pop(1)

0xea0: PushEmpty(string)
0xea1: Stack[-1] = "Love"
0xea2: Call2 0xd2b

0xea3: Pop(1)
0xea4: Push((int) 511272)
0xea5: @@ SetMessage(Stack[-1])
0xea6: Pop(1)
0xea7: @@ ClearReplies()
0xea8: Pop(0)
0xea9: Push((int) 511275)
0xeaa: Push((int) -1)
0xeab: Push((int) 12467)
0xeac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xead: Pop(3)
0xeae: Push((int) 511276)
0xeaf: Push((int) -1)
0xeb0: Push((int) 12468)
0xeb1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeb2: Pop(3)
0xeb3: Return(); Pop(0)

0xeb4: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xeb5: PushEmpty(bool)
0xeb6: Call2 0x1251

0xeb7: Pop(0)
0xeb8: IF (Stack[-1] == 0) GOTO 0xebc; Pop(1)

0xeb9: @ lshStopAnimation()
0xeba: Pop(0)
0xebb: GOTO 0xebe

0xebc: @ StopAnimation()
0xebd: Pop(0)
0xebe: Return(); Pop(0)

0xebf: GOTO 0xd42

0xec0: Return(); Pop(0)

0xec1: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xec2: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xec3: PushEmpty(bool, object, float)
0xec4: Stack[-2] = Stack[-12]
0xec5: Stack[-1] = (float) 70.0
0xec6: Call2 0x10ac

0xec7: Pop(2)
0xec8: Pop(1); Push((bool) Stack[-1] == 0)
0xec9: IF (Stack[-1] == 0) GOTO 0xecc; Pop(1)

0xeca: Stack[-10] = (int) -2
0xecb: Return(); Pop(8)

0xecc: @ CreateDialog(Stack[-4])
0xecd: Pop(0)
0xece: PushEmpty(int)
0xecf: Call2 0x124b

0xed0: Pop(0)
0xed1: @@ SetNPCName(Stack[-1])
0xed2: Pop(1)
0xed3: PushEmpty(int)
0xed4: Call2 0x1249

0xed5: Pop(0)
0xed6: @@ SetNPCDescription(Stack[-1])
0xed7: Pop(1)
0xed8: PushEmpty(string)
0xed9: Call2 0x124d

0xeda: Pop(0)
0xedb: @@ SetPhoto(Stack[-1])
0xedc: Pop(1)
0xedd: PushEmpty(string)
0xede: Call2 0x124f

0xedf: Pop(0)
0xee0: @@ SetPhoto2(Stack[-1])
0xee1: Pop(1)
0xee2: PushEmpty(int)
0xee3: Call2 0x1594

0xee4: Pop(0)
0xee5: @@ SetPlayerName(Stack[-1])
0xee6: Pop(1)
0xee7: Stack[-2] = (int) -1
0xee8: @ IsOverrideActive(Stack[-3])
0xee9: Pop(0)
0xeea: Push(Stack[-3])
0xeeb: IF (Stack[-1] == 0) GOTO 0xeee; Pop(1)

0xeec: Stack[-10] = (int) -2
0xeed: Return(); Pop(8)

0xeee: @ DoDialog(Stack[-4])
0xeef: Pop(0)
0xef0: PushEmpty(bool, object)
0xef1: PushEmpty(object)
0xef2: Call2 0x11c0

0xef3: Stack[-2] = Stack[-1]
0xef4: Pop(1)
0xef5: Call2 0x1101

0xef6: Pop(2)
0xef7: PushEmpty(object, object)
0xef8: Stack[-2] = Stack[-11]
0xef9: Stack[-1] = Stack[-6]
0xefa: Push(-2, 4); TaskCall(11)
0xefb: Call2 0xf12

0xefc: Pop(-2, 4); TaskReturn
0xefd: Pop(2)
0xefe: @@ IsDialogEnd(Stack[-1])
0xeff: Pop(0)
0xf00: Pop(0); Push((bool) Stack[-1] == 0)
0xf01: IF (Stack[-1] == 0) GOTO 0xf07; Pop(1)

0xf02: @ sync()
0xf03: Pop(0)
0xf04: @@ IsDialogEnd(Stack[-1])
0xf05: Pop(0)
0xf06: GOTO 0xf00

0xf07: PushEmpty(object)
0xf08: Stack[-1] = Stack[-10]
0xf09: Call2 0x10f0

0xf0a: Pop(1)
0xf0b: @ StopDialog(Stack[-4])
0xf0c: Pop(0)
0xf0d: @@ GetReturnValue(Stack[-2])
0xf0e: Pop(0)
0xf0f: Stack[-10] = Stack[-2]
0xf10: Return(); Pop(8)

0xf11: Stack[-4] = 0
0xf12: PushEmpty()
0xf13: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xf14: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xf15: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xf16: Push((int) 1)
0xf17: IF (Stack[-1] == 0) GOTO 0xf2e; Pop(1)

0xf18: PushEmpty(string)
0xf19: Stack[-1] = "Neutral"
0xf1a: Call2 0xf4c

0xf1b: Pop(1)
0xf1c: Push((int) 540548)
0xf1d: @@ SetMessage(Stack[-1])
0xf1e: Pop(1)
0xf1f: @@ ClearReplies()
0xf20: Pop(0)
0xf21: Push((int) 540549)
0xf22: Push((int) -1)
0xf23: Push((int) 42558)
0xf24: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf25: Pop(3)
0xf26: Push((int) 540797)
0xf27: Push((int) -1)
0xf28: Push((int) 42846)
0xf29: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf2a: Pop(3)
0xf2b: GOTO 0xf2e

0xf2c: Return(); Pop(0)

0xf2d: GOTO 0xf16

0xf2e: PushEmpty(bool)
0xf2f: Call2 0x1251

0xf30: Pop(0)
0xf31: IF (Stack[-1] == 0) GOTO 0xf3d; Pop(1)

0xf32: @ lshWaitForAnimEnd()
0xf33: Pop(0)
0xf34: Push( Stack[3 + Tasks[-1].StackPointer] )
0xf35: IF (Stack[-1] == 0) GOTO 0xf37; Pop(1)

0xf36: GOTO 0xf3c

0xf37: PushEmpty(string)
0xf38: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xf39: Call2 0x118b

0xf3a: Pop(1)
0xf3b: GOTO 0xf32

0xf3c: GOTO 0xf4b

0xf3d: Push("all")
0xf3e: Push("idle")
0xf3f: @ PlayAnimation(Stack[-2], Stack[-1])
0xf40: Pop(2)
0xf41: @ WaitForAnimEnd()
0xf42: Pop(0)
0xf43: Push( Stack[3 + Tasks[-1].StackPointer] )
0xf44: IF (Stack[-1] == 0) GOTO 0xf46; Pop(1)

0xf45: GOTO 0xf4b

0xf46: Push("all")
0xf47: Push("idle")
0xf48: @ PlayAnimation(Stack[-2], Stack[-1])
0xf49: Pop(2)
0xf4a: GOTO 0xf41

0xf4b: Return(); Pop(0)

0xf4c: PushEmpty()
0xf4d: PushEmpty(bool)
0xf4e: Call2 0x1251

0xf4f: Pop(0)
0xf50: Pop(1); Push((bool) Stack[-1] == 0)
0xf51: IF (Stack[-1] == 0) GOTO 0xf53; Pop(1)

0xf52: Return(); Pop(0)

0xf53: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xf54: IF (Stack[-1] == 0) GOTO 0xf56; Pop(1)

0xf55: Return(); Pop(0)

0xf56: PushEmpty(string, bool)
0xf57: Stack[-2] = Stack[-3]
0xf58: Push("")
0xf59: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xf5a: IF (Stack[-1] == 0) GOTO 0xf5d; Pop(1)

0xf5b: Stack[-1] = (bool) 0
0xf5c: GOTO 0xf5e

0xf5d: Stack[-1] = (bool) 1
0xf5e: Call2 0x119b

0xf5f: Pop(2)
0xf60: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xf61: Return(); Pop(0)

0xf62: PushEmpty()
0xf63: Push((int) 1)
0xf64: IF (Stack[-1] == 0) GOTO 0xf8b; Pop(1)

0xf65: PushEmpty()
0xf66: Call2 0x11b9

0xf67: Pop(0)
0xf68: Push((int) 42557)
0xf69: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf6a: IF (Stack[-1] == 0) GOTO 0xf7f; Pop(1)

0xf6b: PushEmpty(string)
0xf6c: Stack[-1] = "Neutral"
0xf6d: Call2 0xf4c

0xf6e: Pop(1)
0xf6f: Push((int) 540548)
0xf70: @@ SetMessage(Stack[-1])
0xf71: Pop(1)
0xf72: @@ ClearReplies()
0xf73: Pop(0)
0xf74: Push((int) 540549)
0xf75: Push((int) -1)
0xf76: Push((int) 42558)
0xf77: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf78: Pop(3)
0xf79: Push((int) 540797)
0xf7a: Push((int) -1)
0xf7b: Push((int) 42846)
0xf7c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf7d: Pop(3)
0xf7e: Return(); Pop(0)

0xf7f: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xf80: PushEmpty(bool)
0xf81: Call2 0x1251

0xf82: Pop(0)
0xf83: IF (Stack[-1] == 0) GOTO 0xf87; Pop(1)

0xf84: @ lshStopAnimation()
0xf85: Pop(0)
0xf86: GOTO 0xf89

0xf87: @ StopAnimation()
0xf88: Pop(0)
0xf89: Return(); Pop(0)

0xf8a: GOTO 0xf63

0xf8b: Return(); Pop(0)

0xf8c: PushEmpty()
0xf8d: Call2 0xf90

0xf8e: Pop(0)
0xf8f: Return(); Pop(0)

0xf90: PushEmpty(bool)
0xf91: Call2 0x10a7

0xf92: Pop(0)
0xf93: Pop(1); Push((bool) Stack[-1] == 0)
0xf94: IF (Stack[-1] == 0) GOTO 0xf97; Pop(1)

0xf95: @ Hold()
0xf96: Pop(0)
0xf97: @ GetDirection(Stack[-0])
0xf98: Pop(0)
0xf99: PushEmpty()
0xf9a: Call2 0x1040

0xf9b: Pop(0)
0xf9c: GOTO 0xf99

0xf9d: Return(); Pop(0)

0xf9e: PushEmpty(object, object)
0xf9f: Push("player")
0xfa0: @ FindActor(Stack[-2], Stack[-1])
0xfa1: Pop(1)
0xfa2: Pop(0); Push((bool) Stack[-1] == 0)
0xfa3: IF (Stack[-1] == 0) GOTO 0xfa6; Pop(1)

0xfa4: Stack[-3] = (bool) 0
0xfa5: Return(); Pop(2)

0xfa6: PushEmpty(bool, object)
0xfa7: Stack[-1] = Stack[-3]
0xfa8: Call2 0x109e

0xfa9: Stack[-5] = Stack[-2]
0xfaa: Pop(2)
0xfab: Return(); Pop(2)

0xfac: Stack[-1] = 0
0xfad: Push(CvectorIndex(Stack[-0], 0))
0xfae: Push(CvectorIndex(Stack[-0], 2))
0xfaf: @ RotateAsync(Stack[-2], Stack[-1])
0xfb0: Pop(2)
0xfb1: Return(); Pop(0)

0xfb2: PushEmpty(object, bool, object, bool)
0xfb3: Push("player")
0xfb4: @ FindActor(Stack[-3], Stack[-1])
0xfb5: Pop(1)
0xfb6: Pop(0); Push((bool) Stack[-2] == 0)
0xfb7: IF (Stack[-1] == 0) GOTO 0xfba; Pop(1)

0xfb8: Stack[-5] = (bool) 0
0xfb9: Return(); Pop(4)

0xfba: PushEmpty(float, object)
0xfbb: Stack[-1] = Stack[-4]
0xfbc: Call2 0x108c

0xfbd: Pop(1)
0xfbe: Push((float)90000.0)
0xfbf: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0xfc0: IF (Stack[-1] == 0) GOTO 0xfc3; Pop(1)

0xfc1: Stack[-5] = (bool) 0
0xfc2: Return(); Pop(4)

0xfc3: @ CanSee(Stack[-1], Stack[-2])
0xfc4: Pop(0)
0xfc5: Stack[-5] = Stack[-1]
0xfc6: Return(); Pop(4)

0xfc7: Stack[-2] = 0
0xfc8: PushEmpty(float, float)
0xfc9: Push((int) 8)
0xfca: Push((int) 16)
0xfcb: @ rand(Stack[-3], Stack[-2], Stack[-1])
0xfcc: Pop(2)
0xfcd: Push((int) 10)
0xfce: @ SetTimer(Stack[-1], Stack[-2])
0xfcf: Pop(1)
0xfd0: Return(); Pop(2)

0xfd1: Push((int) 10)
0xfd2: @ KillTimer(Stack[-1])
0xfd3: Pop(1)
0xfd4: Return(); Pop(0)

0xfd5: PushEmpty()
0xfd6: Push((int) 10)
0xfd7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xfd8: IF (Stack[-1] == 0) GOTO 0xffa; Pop(1)

0xfd9: PushEmpty()
0xfda: Call2 0xfd1

0xfdb: Pop(0)
0xfdc: PushEmpty(bool)
0xfdd: Stack[-1] = (bool) 0
0xfde: PushEmpty(bool)
0xfdf: Call2 0x10a7

0xfe0: Pop(0)
0xfe1: IF (Stack[-1] == 0) GOTO 0xfe7; Pop(1)

0xfe2: PushEmpty(bool)
0xfe3: Call2 0xfb2

0xfe4: Pop(0)
0xfe5: IF (Stack[-1] == 0) GOTO 0xfe7; Pop(1)

0xfe6: Stack[-1] = (bool) 1
0xfe7: IF (Stack[-1] == 0) GOTO 0xff4; Pop(1)

0xfe8: PushEmpty(bool)
0xfe9: Call2 0xf9e

0xfea: Pop(0)
0xfeb: IF (Stack[-1] == 0) GOTO 0xff3; Pop(1)

0xfec: PushEmpty(bool, object)
0xfed: PushEmpty(object)
0xfee: Call2 0x11c0

0xfef: Stack[-2] = Stack[-1]
0xff0: Pop(1)
0xff1: Call2 0x113b

0xff2: Pop(2)
0xff3: GOTO 0xffa

0xff4: PushEmpty()
0xff5: Call2 0xfad

0xff6: Pop(0)
0xff7: PushEmpty()
0xff8: Call2 0xfc8

0xff9: Pop(0)
0xffa: Return(); Pop(0)

0xffb: PushEmpty()
0xffc: Call2 0x1087

0xffd: Pop(0)
0xffe: PushEmpty()
0xfff: Call2 0xfd1

0x1000: Pop(0)
0x1001: @ lshStopSpeech()
0x1002: Pop(0)
0x1003: @ lshStopAnimation()
0x1004: Pop(0)
0x1005: @ StopAsync()
0x1006: Pop(0)
0x1007: @ Hold()
0x1008: Pop(0)
0x1009: Return(); Pop(0)

0x100a: @ StopGroup0()
0x100b: Pop(0)
0x100c: PushEmpty()
0x100d: Call2 0xfd1

0x100e: Pop(0)
0x100f: PushEmpty(string)
0x1010: Stack[-1] = "Neutral"
0x1011: Call2 0x118b

0x1012: Pop(1)
0x1013: PushEmpty()
0x1014: Call2 0xfc8

0x1015: Pop(0)
0x1016: Return(); Pop(0)

0x1017: PushEmpty()
0x1018: Push(Stack[-1])
0x1019: IF (Stack[-1] == 0) GOTO 0x101e; Pop(1)

0x101a: PushEmpty()
0x101b: Call2 0xfc8

0x101c: Pop(0)
0x101d: GOTO 0x1022

0x101e: PushEmpty(string)
0x101f: Stack[-1] = "Neutral"
0x1020: Call2 0x118b

0x1021: Pop(1)
0x1022: Return(); Pop(0)

0x1023: PushEmpty(bool, bool)
0x1024: @ IsOverrideActive(Stack[-1])
0x1025: Pop(0)
0x1026: Pop(0); Push((bool) Stack[-1] == 0)
0x1027: IF (Stack[-1] == 0) GOTO 0x103f; Pop(1)

0x1028: EventDisable(0)
0x1029: PushEmpty()
0x102a: Call2 0x1087

0x102b: Pop(0)
0x102c: PushEmpty(bool, object)
0x102d: Stack[-1] = Stack[-5]
0x102e: Call2 0x109e

0x102f: Pop(2)
0x1030: EventEnable(0)
0x1031: PushEmpty(object)
0x1032: Stack[-1] = Stack[-4]
0x1033: Call2 0x15a5

0x1034: Pop(1)
0x1035: PushEmpty(string)
0x1036: Stack[-1] = "Neutral"
0x1037: Call2 0x118b

0x1038: Pop(1)
0x1039: PushEmpty()
0x103a: Call2 0xfd1

0x103b: Pop(0)
0x103c: PushEmpty()
0x103d: Call2 0xfc8

0x103e: Pop(0)
0x103f: Return(); Pop(2)

0x1040: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x1041: @ WaitForAnimEnd()
0x1042: Pop(0)
0x1043: PushEmpty(bool)
0x1044: Call2 0x10a7

0x1045: Pop(0)
0x1046: Pop(1); Push((bool) Stack[-1] == 0)
0x1047: IF (Stack[-1] == 0) GOTO 0x1049; Pop(1)

0x1048: Return(); Pop(12)

0x1049: PushEmpty(int)
0x104a: Call2 0x1238

0x104b: Stack[-7] = Stack[-1]
0x104c: Pop(1)
0x104d: Stack[-5] = (int) 0
0x104e: PushEmpty(bool)
0x104f: Stack[-1] = (bool) 0
0x1050: Push((int) 5)
0x1051: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x1052: IF (Stack[-1] == 0) GOTO 0x1058; Pop(1)

0x1053: PushEmpty(bool)
0x1054: Call2 0x10a7

0x1055: Pop(0)
0x1056: IF (Stack[-1] == 0) GOTO 0x1058; Pop(1)

0x1057: Stack[-1] = (bool) 1
0x1058: IF (Stack[-1] == 0) GOTO 0x1082; Pop(1)

0x1059: Pop(0); Push((bool) Stack[-6] == 0)
0x105a: IF (Stack[-1] == 0) GOTO 0x1062; Pop(1)

0x105b: Push((int) 3)
0x105c: @ Sleep(Stack[-1], Stack[-5])
0x105d: Pop(1)
0x105e: Pop(0); Push((bool) Stack[-4] == 0)
0x105f: IF (Stack[-1] == 0) GOTO 0x1061; Pop(1)

0x1060: GOTO 0x1082

0x1061: GOTO 0x1077

0x1062: @ irand(Stack[-3], Stack[-6])
0x1063: Pop(0)
0x1064: Push((int) 5)
0x1065: @ irand(Stack[-3], Stack[-1])
0x1066: Pop(1)
0x1067: Push((int) 0)
0x1068: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x1069: IF (Stack[-1] == 0) GOTO 0x106b; Pop(1)

0x106a: Stack[-3] = (int) 0
0x106b: Push("all")
0x106c: PushEmpty(string, int)
0x106d: Stack[-1] = Stack[-6]
0x106e: Call2 0x1231

0x106f: Pop(1)
0x1070: @ PlayAnimation(Stack[-2], Stack[-1])
0x1071: Pop(2)
0x1072: @ WaitForAnimEnd(Stack[-1])
0x1073: Pop(0)
0x1074: Pop(0); Push((bool) Stack[-1] == 0)
0x1075: IF (Stack[-1] == 0) GOTO 0x1077; Pop(1)

0x1076: GOTO 0x1082

0x1077: PushEmpty(bool)
0x1078: Call2 0x1085

0x1079: Pop(0)
0x107a: Pop(1); Push((bool) Stack[-1] == 0)
0x107b: IF (Stack[-1] == 0) GOTO 0x107d; Pop(1)

0x107c: GOTO 0x1082

0x107d: @ ResetAAS()
0x107e: Pop(0)
0x107f: Push((int) 1)
0x1080: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x1081: GOTO 0x104e

0x1082: @ ResetAAS()
0x1083: Pop(0)
0x1084: Return(); Pop(12)

0x1085: Stack[-1] = (bool) 1
0x1086: Return(); Pop(0)

0x1087: @ StopAnimation()
0x1088: Pop(0)
0x1089: @ StopGroup0()
0x108a: Pop(0)
0x108b: Return(); Pop(0)

0x108c: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x108d: @ GetPosition(Stack[-3])
0x108e: Pop(0)
0x108f: @@ GetPosition(Stack[-2])
0x1090: Pop(0)
0x1091: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x1092: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x1093: Return(); Pop(6)

0x1094: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x1095: @ GetPosition(Stack[-3])
0x1096: Pop(0)
0x1097: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x1098: Push(CvectorIndex(Stack[-2], 0))
0x1099: Push(CvectorIndex(Stack[-3], 2))
0x109a: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x109b: Pop(2)
0x109c: Stack[-8] = Stack[-1]
0x109d: Return(); Pop(6)

0x109e: PushEmpty(cvector, cvector)
0x109f: @@ GetPosition(Stack[-1])
0x10a0: Pop(0)
0x10a1: PushEmpty(bool, cvector)
0x10a2: Stack[-1] = Stack[-3]
0x10a3: Call2 0x1094

0x10a4: Stack[-6] = Stack[-2]
0x10a5: Pop(2)
0x10a6: Return(); Pop(2)

0x10a7: PushEmpty(bool, bool)
0x10a8: @ IsLoaded(Stack[-1])
0x10a9: Pop(0)
0x10aa: Stack[-3] = Stack[-1]
0x10ab: Return(); Pop(2)

0x10ac: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x10ad: @@ GetPosition(Stack[-8])
0x10ae: Pop(0)
0x10af: @@ GetEyesHeight(Stack[-9])
0x10b0: Pop(0)
0x10b1: Push(CvectorIndex(Stack[-8], 1))
0x10b2: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x10b3: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x10b4: @ GetPosition(Stack[-7])
0x10b5: Pop(0)
0x10b6: @ GetEyesHeight(Stack[-9])
0x10b7: Pop(0)
0x10b8: Push(CvectorIndex(Stack[-7], 1))
0x10b9: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x10ba: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x10bb: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x10bc: Push(CvectorIndex(Stack[-6], 1))
0x10bd: Stack[-1] = (int) 0
0x10be: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x10bf: Pop(0); Push(Stack[-6] | Stack[-6]);
0x10c0: Pop(1); Push(Sqrt(Stack[-1]))
0x10c1: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x10c2: Stack[-5] = -Stack[-6]; Pop(0);
0x10c3: Pop(0); Push(Stack[-6] * Stack[-19]);
0x10c4: PushEmpty(cvector, cvector)
0x10c5: Push(CVector(0.0, 1.0, 0.0))
0x10c6: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x10c7: Call2 0x11c6

0x10c8: Pop(1)
0x10c9: Push((int) 25)
0x10ca: Pop(2); Push(Stack[-2] * Stack[-1]);
0x10cb: Pop(2); Push(Stack[-2] + Stack[-1]);
0x10cc: Push(CVector(0.0, 10.0, 0.0))
0x10cd: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x10ce: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x10cf: @ IsOverrideActive(Stack[-2])
0x10d0: Pop(0)
0x10d1: Push(Stack[-2])
0x10d2: IF (Stack[-1] == 0) GOTO 0x10d5; Pop(1)

0x10d3: Stack[-21] = (bool) 0
0x10d4: Return(); Pop(18)

0x10d5: @ StopWorld()
0x10d6: Pop(0)
0x10d7: @ CameraTransit(Stack[-3], Stack[-5])
0x10d8: Pop(0)
0x10d9: Push(CvectorIndex(Stack[-4], 0))
0x10da: Push(CvectorIndex(Stack[-5], 2))
0x10db: @ Rotate(Stack[-2], Stack[-1])
0x10dc: Pop(2)
0x10dd: PushEmpty(bool)
0x10de: Call2 0x1251

0x10df: Pop(0)
0x10e0: IF (Stack[-1] == 0) GOTO 0x10e2; Pop(1)

0x10e1: GOTO 0x10ea

0x10e2: Push("head")
0x10e3: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x10e4: Pop(1)
0x10e5: Push(Stack[-1])
0x10e6: IF (Stack[-1] == 0) GOTO 0x10ea; Pop(1)

0x10e7: Push("head")
0x10e8: @ LookAsyncCamera(Stack[-1])
0x10e9: Pop(1)
0x10ea: @ CameraWaitForPlayFinish()
0x10eb: Pop(0)
0x10ec: @ ResumeWorld()
0x10ed: Pop(0)
0x10ee: Stack[-21] = (bool) 1
0x10ef: Return(); Pop(18)

0x10f0: PushEmpty(bool, bool)
0x10f1: @ CameraSwitchToNormal()
0x10f2: Pop(0)
0x10f3: PushEmpty(bool)
0x10f4: Call2 0x1251

0x10f5: Pop(0)
0x10f6: IF (Stack[-1] == 0) GOTO 0x10f8; Pop(1)

0x10f7: GOTO 0x1100

0x10f8: Push("head")
0x10f9: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x10fa: Pop(1)
0x10fb: Push(Stack[-1])
0x10fc: IF (Stack[-1] == 0) GOTO 0x1100; Pop(1)

0x10fd: Push("head")
0x10fe: @ UnlookAsync(Stack[-1])
0x10ff: Pop(1)
0x1100: Return(); Pop(2)

0x1101: PushEmpty(int, int, int, int)
0x1102: Push("voice_common")
0x1103: @ GetVariable(Stack[-1], Stack[-3])
0x1104: Pop(1)
0x1105: Push(Stack[-2])
0x1106: IF (Stack[-1] == 0) GOTO 0x1127; Pop(1)

0x1107: PushEmpty(bool, object)
0x1108: Stack[-1] = Stack[-7]
0x1109: Call2 0x113b

0x110a: Pop(1)
0x110b: Pop(1); Push((bool) Stack[-1] == 0)
0x110c: IF (Stack[-1] == 0) GOTO 0x1115; Pop(1)

0x110d: PushEmpty(bool, object)
0x110e: Stack[-1] = Stack[-7]
0x110f: Call2 0x1160

0x1110: Pop(1)
0x1111: Pop(1); Push((bool) Stack[-1] == 0)
0x1112: IF (Stack[-1] == 0) GOTO 0x1115; Pop(1)

0x1113: Stack[-6] = (bool) 0
0x1114: Return(); Pop(4)

0x1115: Push((int) 2)
0x1116: @ irand(Stack[-2], Stack[-1])
0x1117: Pop(1)
0x1118: Push(Stack[-1])
0x1119: IF (Stack[-1] == 0) GOTO 0x1122; Pop(1)

0x111a: Push("voice_common")
0x111b: Push((int) 1)
0x111c: Pop(1); Push(Stack[-4] + Stack[-1]);
0x111d: Push((int) 3)
0x111e: Pop(2); Push(Stack[-2] % Stack[-1]);
0x111f: @ SetVariable(Stack[-2], Stack[-1])
0x1120: Pop(2)
0x1121: GOTO 0x1126

0x1122: Push("voice_common")
0x1123: Push((int) 0)
0x1124: @ SetVariable(Stack[-2], Stack[-1])
0x1125: Pop(2)
0x1126: GOTO 0x1139

0x1127: PushEmpty(bool, object)
0x1128: Stack[-1] = Stack[-7]
0x1129: Call2 0x1160

0x112a: Pop(1)
0x112b: Pop(1); Push((bool) Stack[-1] == 0)
0x112c: IF (Stack[-1] == 0) GOTO 0x1135; Pop(1)

0x112d: PushEmpty(bool, object)
0x112e: Stack[-1] = Stack[-7]
0x112f: Call2 0x113b

0x1130: Pop(1)
0x1131: Pop(1); Push((bool) Stack[-1] == 0)
0x1132: IF (Stack[-1] == 0) GOTO 0x1135; Pop(1)

0x1133: Stack[-6] = (bool) 0
0x1134: Return(); Pop(4)

0x1135: Push("voice_common")
0x1136: Push((int) 1)
0x1137: @ SetVariable(Stack[-2], Stack[-1])
0x1138: Pop(2)
0x1139: Stack[-6] = (bool) 1
0x113a: Return(); Pop(4)

0x113b: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x113c: Stack[-5] = "c"
0x113d: Stack[-4] = (int) 0
0x113e: Push((int) 1)
0x113f: IF (Stack[-1] == 0) GOTO 0x114b; Pop(1)

0x1140: Push((int) 1)
0x1141: Pop(1); Push(Stack[-5] + Stack[-1]);
0x1142: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1143: @@ HasProperty(Stack[-1], Stack[-4])
0x1144: Pop(1)
0x1145: Pop(0); Push((bool) Stack[-3] == 0)
0x1146: IF (Stack[-1] == 0) GOTO 0x1148; Pop(1)

0x1147: GOTO 0x114b

0x1148: Push((int) 1)
0x1149: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x114a: GOTO 0x113e

0x114b: Pop(0); Push((bool) Stack[-4] == 0)
0x114c: IF (Stack[-1] == 0) GOTO 0x114f; Pop(1)

0x114d: Stack[-12] = (bool) 0
0x114e: Return(); Pop(10)

0x114f: Stack[-2] = (int) 0
0x1150: Push((int) 1)
0x1151: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x1152: IF (Stack[-1] == 0) GOTO 0x1155; Pop(1)

0x1153: @ irand(Stack[-2], Stack[-4])
0x1154: Pop(0)
0x1155: Push((int) 1)
0x1156: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1157: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1158: @@ GetProperty(Stack[-1], Stack[-2])
0x1159: Pop(1)
0x115a: PushEmpty(bool, string)
0x115b: Stack[-1] = Stack[-3]
0x115c: Call2 0x11aa

0x115d: Stack[-14] = Stack[-2]
0x115e: Pop(2)
0x115f: Return(); Pop(10)

0x1160: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x1161: Push("d")
0x1162: PushEmpty(int)
0x1163: Call2 0x1222

0x1164: Pop(0)
0x1165: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1166: Push("m")
0x1167: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x1168: Stack[-4] = (int) 0
0x1169: Push((int) 1)
0x116a: IF (Stack[-1] == 0) GOTO 0x1176; Pop(1)

0x116b: Push((int) 1)
0x116c: Pop(1); Push(Stack[-5] + Stack[-1]);
0x116d: Pop(1); Push(Stack[-6] + Stack[-1]);
0x116e: @@ HasProperty(Stack[-1], Stack[-4])
0x116f: Pop(1)
0x1170: Pop(0); Push((bool) Stack[-3] == 0)
0x1171: IF (Stack[-1] == 0) GOTO 0x1173; Pop(1)

0x1172: GOTO 0x1176

0x1173: Push((int) 1)
0x1174: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x1175: GOTO 0x1169

0x1176: Pop(0); Push((bool) Stack[-4] == 0)
0x1177: IF (Stack[-1] == 0) GOTO 0x117a; Pop(1)

0x1178: Stack[-12] = (bool) 0
0x1179: Return(); Pop(10)

0x117a: Stack[-2] = (int) 0
0x117b: Push((int) 1)
0x117c: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x117d: IF (Stack[-1] == 0) GOTO 0x1180; Pop(1)

0x117e: @ irand(Stack[-2], Stack[-4])
0x117f: Pop(0)
0x1180: Push((int) 1)
0x1181: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1182: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1183: @@ GetProperty(Stack[-1], Stack[-2])
0x1184: Pop(1)
0x1185: PushEmpty(bool, string)
0x1186: Stack[-1] = Stack[-3]
0x1187: Call2 0x11aa

0x1188: Stack[-14] = Stack[-2]
0x1189: Pop(2)
0x118a: Return(); Pop(10)

0x118b: PushEmpty(bool, float, float, bool, float, float)
0x118c: @ lshHasAnimation(Stack[-3], Stack[-7])
0x118d: Pop(0)
0x118e: Push(Stack[-3])
0x118f: IF (Stack[-1] == 0) GOTO 0x1196; Pop(1)

0x1190: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x1191: Pop(0)
0x1192: Push((bool) 0)
0x1193: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x1194: Pop(1)
0x1195: GOTO 0x119a

0x1196: Push("Can't find lsh animation : ")
0x1197: Pop(1); Push(Stack[-1] + Stack[-8]);
0x1198: @ Trace(Stack[-1])
0x1199: Pop(1)
0x119a: Return(); Pop(6)

0x119b: PushEmpty(bool, float, float, bool, float, float)
0x119c: @ lshHasAnimation(Stack[-3], Stack[-8])
0x119d: Pop(0)
0x119e: Push(Stack[-3])
0x119f: IF (Stack[-1] == 0) GOTO 0x11a5; Pop(1)

0x11a0: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x11a1: Pop(0)
0x11a2: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x11a3: Pop(0)
0x11a4: GOTO 0x11a9

0x11a5: Push("Can't find lsh animation : ")
0x11a6: Pop(1); Push(Stack[-1] + Stack[-9]);
0x11a7: @ Trace(Stack[-1])
0x11a8: Pop(1)
0x11a9: Return(); Pop(6)

0x11aa: PushEmpty(bool, bool)
0x11ab: PushEmpty(bool)
0x11ac: Call2 0x1251

0x11ad: Pop(0)
0x11ae: IF (Stack[-1] == 0) GOTO 0x11b7; Pop(1)

0x11af: @ lshHasSpeech(Stack[-1], Stack[-3])
0x11b0: Pop(0)
0x11b1: Push(Stack[-1])
0x11b2: IF (Stack[-1] == 0) GOTO 0x11b7; Pop(1)

0x11b3: @ lshPlaySpeech(Stack[-3])
0x11b4: Pop(0)
0x11b5: Stack[-4] = (bool) 1
0x11b6: Return(); Pop(2)

0x11b7: Stack[-4] = (bool) 0
0x11b8: Return(); Pop(2)

0x11b9: PushEmpty(bool)
0x11ba: Call2 0x1251

0x11bb: Pop(0)
0x11bc: IF (Stack[-1] == 0) GOTO 0x11bf; Pop(1)

0x11bd: @ lshStopSpeech()
0x11be: Pop(0)
0x11bf: Return(); Pop(0)

0x11c0: PushEmpty(object, object)
0x11c1: @ self(Stack[-1])
0x11c2: Pop(0)
0x11c3: Stack[-3] = Stack[-1]
0x11c4: Return(); Pop(2)

0x11c5: Stack[-1] = 0
0x11c6: PushEmpty(float, float)
0x11c7: Pop(0); Push(Stack[-3] | Stack[-3]);
0x11c8: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x11c9: Push((float)0.0)
0x11ca: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x11cb: IF (Stack[-1] == 0) GOTO 0x11ce; Pop(1)

0x11cc: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x11cd: Return(); Pop(2)

0x11ce: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x11cf: Return(); Pop(2)

0x11d0: PushEmpty(int, int)
0x11d1: @ GetVariable(Stack[-3], Stack[-1])
0x11d2: Pop(0)
0x11d3: Stack[-4] = Stack[-1]
0x11d4: Return(); Pop(2)

0x11d5: PushEmpty(object, object, object, object)
0x11d6: @ GetMainOutdoorScene(Stack[-2])
0x11d7: Pop(0)
0x11d8: Push(".bin")
0x11d9: Pop(1); Push(Stack[-6] + Stack[-1]);
0x11da: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0x11db: Pop(1)
0x11dc: Stack[-6] = Stack[-1]
0x11dd: Return(); Pop(4)

0x11de: Stack[-1] = 0
0x11df: Stack[-2] = 0
0x11e0: PushEmpty(object, object)
0x11e1: @ FindActor(Stack[-1], Stack[-4])
0x11e2: Pop(0)
0x11e3: Pop(0); Push((bool) Stack[-1] == 0)
0x11e4: IF (Stack[-1] == 0) GOTO 0x11ec; Pop(1)

0x11e5: Push("Door ")
0x11e6: Pop(1); Push(Stack[-1] + Stack[-5]);
0x11e7: Push(" not found")
0x11e8: Pop(2); Push(Stack[-2] + Stack[-1]);
0x11e9: @ Trace(Stack[-1])
0x11ea: Pop(1)
0x11eb: GOTO 0x11ef

0x11ec: Push("locked")
0x11ed: @@ SetProperty(Stack[-1], Stack[-4])
0x11ee: Pop(1)
0x11ef: Return(); Pop(2)

0x11f0: Stack[-1] = 0
0x11f1: PushEmpty(object, object)
0x11f2: @ CreateIntVector(Stack[-1])
0x11f3: Pop(0)
0x11f4: @@ add(Stack[-4])
0x11f5: Pop(0)
0x11f6: @@ add(Stack[-3])
0x11f7: Pop(0)
0x11f8: Push((int) 3)
0x11f9: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x11fa: Pop(1)
0x11fb: Return(); Pop(2)

0x11fc: Stack[-1] = 0
0x11fd: PushEmpty(int, int, bool, int, int, bool)
0x11fe: @@ GetItemID(Stack[-3])
0x11ff: Pop(0)
0x1200: Push("Category")
0x1201: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x1202: Pop(1)
0x1203: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x1204: Pop(0)
0x1205: Pop(0); Push((bool) Stack[-1] == 0)
0x1206: IF (Stack[-1] == 0) GOTO 0x120a; Pop(1)

0x1207: @@ DropItems(Stack[-8], Stack[-7])
0x1208: Pop(0)
0x1209: GOTO 0x120f

0x120a: PushEmpty(int, int)
0x120b: Stack[-2] = Stack[-5]
0x120c: Stack[-1] = Stack[-9]
0x120d: Call2 0x11f1

0x120e: Pop(2)
0x120f: Return(); Pop(6)

0x1210: PushEmpty(object, object)
0x1211: @ CreateInvItem(Stack[-1])
0x1212: Pop(0)
0x1213: @@ SetItemName(Stack[-4])
0x1214: Pop(0)
0x1215: PushEmpty(object, object, int)
0x1216: Stack[-3] = Stack[-8]
0x1217: Stack[-2] = Stack[-4]
0x1218: Stack[-1] = Stack[-6]
0x1219: Call2 0x11fd

0x121a: Pop(3)
0x121b: Return(); Pop(2)

0x121c: Stack[-1] = 0
0x121d: PushEmpty(float, float)
0x121e: @ GetGameTime(Stack[-1])
0x121f: Pop(0)
0x1220: Stack[-3] = Stack[-1]
0x1221: Return(); Pop(2)

0x1222: PushEmpty(float, float)
0x1223: @ GetGameTime(Stack[-1])
0x1224: Pop(0)
0x1225: Push((int) 1)
0x1226: PushEmpty(int)
0x1227: Push((int) 24)
0x1228: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x1229: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x122a: Return(); Pop(2)

0x122b: PushEmpty()
0x122c: PushEmpty(int)
0x122d: Call2 0x1222

0x122e: Pop(0)
0x122f: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x1230: Return(); Pop(0)

0x1231: PushEmpty(string, string)
0x1232: Stack[-1] = "idle"
0x1233: Push(Stack[-3])
0x1234: IF (Stack[-1] == 0) GOTO 0x1236; Pop(1)

0x1235: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x1236: Stack[-4] = Stack[-1]
0x1237: Return(); Pop(2)

0x1238: PushEmpty(int, bool, int, bool)
0x1239: Stack[-2] = (int) 0
0x123a: Push("all")
0x123b: PushEmpty(string, int)
0x123c: Stack[-1] = Stack[-5]
0x123d: Call2 0x1231

0x123e: Pop(1)
0x123f: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x1240: Pop(2)
0x1241: Pop(0); Push((bool) Stack[-1] == 0)
0x1242: IF (Stack[-1] == 0) GOTO 0x1244; Pop(1)

0x1243: GOTO 0x1247

0x1244: Push((int) 1)
0x1245: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x1246: GOTO 0x123a

0x1247: Stack[-5] = Stack[-2]
0x1248: Return(); Pop(4)

0x1249: Stack[-1] = (int) 515533
0x124a: Return(); Pop(0)

0x124b: Stack[-1] = (int) 502858
0x124c: Return(); Pop(0)

0x124d: Stack[-1] = "ui/NPC_Eva.png"
0x124e: Return(); Pop(0)

0x124f: Stack[-1] = "ui/NPC_Eva_b.png"
0x1250: Return(); Pop(0)

0x1251: Stack[-1] = (bool) 1
0x1252: Return(); Pop(0)

0x1253: PushEmpty()
0x1254: Push("ood1EvaIntro3")
0x1255: Push((int) 1)
0x1256: @ SetVariable(Stack[-2], Stack[-1])
0x1257: Pop(2)
0x1258: Return(); Pop(0)

0x1259: PushEmpty(object, object)
0x125a: Push("d1q03IsKapella")
0x125b: Push((int) 1)
0x125c: @ SetVariable(Stack[-2], Stack[-1])
0x125d: Pop(2)
0x125e: PushEmpty(object)
0x125f: Call2 0x1562

0x1260: Stack[-2] = Stack[-1]
0x1261: Pop(1)
0x1262: Push("d1q03KapellaGotoOspina")
0x1263: Push("pt_map_ospina")
0x1264: Push((int) 0)
0x1265: Push((int) 508641)
0x1266: PushEmpty(float)
0x1267: Call2 0x121d

0x1268: Pop(0)
0x1269: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x126a: Pop(5)
0x126b: PushEmpty()
0x126c: Call2 0x1505

0x126d: Pop(0)
0x126e: PushEmpty()
0x126f: Call2 0x1512

0x1270: Pop(0)
0x1271: PushEmpty(object, string)
0x1272: Stack[-1] = "quest_d1_03"
0x1273: Call2 0x11d5

0x1274: Pop(2)
0x1275: Return(); Pop(2)

0x1276: Stack[-1] = 0
0x1277: PushEmpty()
0x1278: Push("playsound")
0x1279: Push("giveitem")
0x127a: @ TriggerWorld(Stack[-2], Stack[-1])
0x127b: Pop(2)
0x127c: Return(); Pop(0)

0x127d: PushEmpty()
0x127e: Push("gold_ring is given")
0x127f: @ Trace(Stack[-1])
0x1280: Pop(1)
0x1281: PushEmpty(object, string, int)
0x1282: Stack[-3] = Stack[-5]
0x1283: Stack[-2] = "gold_ring"
0x1284: Stack[-1] = (int) 1
0x1285: Call2 0x1210

0x1286: Pop(3)
0x1287: Return(); Pop(0)

0x1288: PushEmpty(object, object)
0x1289: PushEmpty(object)
0x128a: Call2 0x1562

0x128b: Stack[-2] = Stack[-1]
0x128c: Pop(1)
0x128d: Push("d1q01EvaMapMarkMladVlad")
0x128e: Push("pt_map_mladvlad")
0x128f: Push((int) 3)
0x1290: Push((int) 518108)
0x1291: PushEmpty(float)
0x1292: Call2 0x121d

0x1293: Pop(0)
0x1294: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1295: Pop(5)
0x1296: Return(); Pop(2)

0x1297: Stack[-1] = 0
0x1298: PushEmpty()
0x1299: PushEmpty(object, string, float)
0x129a: PushEmpty(object)
0x129b: Call2 0x1562

0x129c: Stack[-4] = Stack[-1]
0x129d: Pop(1)
0x129e: Stack[-2] = "pt_map_station"
0x129f: Stack[-1] = (int) 2
0x12a0: Call2 0x1573

0x12a1: Pop(3)
0x12a2: PushEmpty(object)
0x12a3: Call2 0x1562

0x12a4: Pop(0)
0x12a5: @@ ShowMap(Stack[-1])
0x12a6: Pop(1)
0x12a7: Return(); Pop(0)

0x12a8: PushEmpty()
0x12a9: Push("ood1Eva4")
0x12aa: Push((int) 1)
0x12ab: @ SetVariable(Stack[-2], Stack[-1])
0x12ac: Pop(2)
0x12ad: Return(); Pop(0)

0x12ae: PushEmpty()
0x12af: Push("bracelet is given")
0x12b0: @ Trace(Stack[-1])
0x12b1: Pop(1)
0x12b2: PushEmpty(object, string, int)
0x12b3: Stack[-3] = Stack[-5]
0x12b4: Stack[-2] = "bracelet"
0x12b5: Stack[-1] = (int) 1
0x12b6: Call2 0x1210

0x12b7: Pop(3)
0x12b8: Return(); Pop(0)

0x12b9: PushEmpty()
0x12ba: Push("ear_ring is given")
0x12bb: @ Trace(Stack[-1])
0x12bc: Pop(1)
0x12bd: PushEmpty(object, string, int)
0x12be: Stack[-3] = Stack[-5]
0x12bf: Stack[-2] = "ear_ring"
0x12c0: Stack[-1] = (int) 1
0x12c1: Call2 0x1210

0x12c2: Pop(3)
0x12c3: Return(); Pop(0)

0x12c4: PushEmpty()
0x12c5: Push("d2EvaVisit")
0x12c6: Push((int) 1)
0x12c7: @ SetVariable(Stack[-2], Stack[-1])
0x12c8: Pop(2)
0x12c9: Return(); Pop(0)

0x12ca: PushEmpty()
0x12cb: PushEmpty(object, string, float)
0x12cc: PushEmpty(object)
0x12cd: Call2 0x1562

0x12ce: Stack[-4] = Stack[-1]
0x12cf: Pop(1)
0x12d0: Stack[-2] = "pt_map_georg"
0x12d1: Stack[-1] = (int) 2
0x12d2: Call2 0x1573

0x12d3: Pop(3)
0x12d4: PushEmpty(object)
0x12d5: Call2 0x1562

0x12d6: Pop(0)
0x12d7: @@ ShowMap(Stack[-1])
0x12d8: Pop(1)
0x12d9: Return(); Pop(0)

0x12da: PushEmpty()
0x12db: Push("ood1Eva7")
0x12dc: Push((int) 1)
0x12dd: @ SetVariable(Stack[-2], Stack[-1])
0x12de: Pop(2)
0x12df: Return(); Pop(0)

0x12e0: PushEmpty()
0x12e1: Push("ood4Eva2")
0x12e2: Push((int) 1)
0x12e3: @ SetVariable(Stack[-2], Stack[-1])
0x12e4: Pop(2)
0x12e5: Return(); Pop(0)

0x12e6: PushEmpty()
0x12e7: Push("KnowUzly")
0x12e8: Push((int) 1)
0x12e9: @ SetVariable(Stack[-2], Stack[-1])
0x12ea: Pop(2)
0x12eb: Return(); Pop(0)

0x12ec: PushEmpty()
0x12ed: Push("ood2Eva1")
0x12ee: Push((int) 1)
0x12ef: @ SetVariable(Stack[-2], Stack[-1])
0x12f0: Pop(2)
0x12f1: Return(); Pop(0)

0x12f2: PushEmpty()
0x12f3: Push("ood2Eva2")
0x12f4: Push((int) 1)
0x12f5: @ SetVariable(Stack[-2], Stack[-1])
0x12f6: Pop(2)
0x12f7: Return(); Pop(0)

0x12f8: PushEmpty()
0x12f9: Push("ood2Eva3")
0x12fa: Push((int) 1)
0x12fb: @ SetVariable(Stack[-2], Stack[-1])
0x12fc: Pop(2)
0x12fd: Return(); Pop(0)

0x12fe: PushEmpty()
0x12ff: Push("ood2Eva4")
0x1300: Push((int) 1)
0x1301: @ SetVariable(Stack[-2], Stack[-1])
0x1302: Pop(2)
0x1303: Return(); Pop(0)

0x1304: PushEmpty(object, object)
0x1305: Push("d2q02")
0x1306: Push((int) 1)
0x1307: @ SetVariable(Stack[-2], Stack[-1])
0x1308: Pop(2)
0x1309: PushEmpty(object)
0x130a: Call2 0x1562

0x130b: Stack[-2] = Stack[-1]
0x130c: Pop(1)
0x130d: Push("d2q02EvaGotoAndrei")
0x130e: Push("pt_map_andrei")
0x130f: Push((int) 0)
0x1310: Push((int) 515272)
0x1311: PushEmpty(float)
0x1312: Call2 0x121d

0x1313: Pop(0)
0x1314: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1315: Pop(5)
0x1316: PushEmpty()
0x1317: Call2 0x151f

0x1318: Pop(0)
0x1319: PushEmpty()
0x131a: Call2 0x152c

0x131b: Pop(0)
0x131c: PushEmpty(object, string)
0x131d: Stack[-1] = "quest_d2_02"
0x131e: Call2 0x11d5

0x131f: Pop(2)
0x1320: Return(); Pop(2)

0x1321: Stack[-1] = 0
0x1322: PushEmpty()
0x1323: PushEmpty(string, bool)
0x1324: Stack[-2] = "icot_eva@door1"
0x1325: Stack[-1] = (bool) 0
0x1326: Call2 0x11e0

0x1327: Pop(2)
0x1328: Return(); Pop(0)

0x1329: PushEmpty(object, object)
0x132a: PushEmpty(object)
0x132b: Call2 0x1562

0x132c: Stack[-2] = Stack[-1]
0x132d: Pop(1)
0x132e: Push("d1q01EvaGotoSimon")
0x132f: Push("pt_map_georg")
0x1330: Push((int) 1)
0x1331: Push((int) 507778)
0x1332: PushEmpty(float)
0x1333: Call2 0x121d

0x1334: Pop(0)
0x1335: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1336: Pop(5)
0x1337: Push("d1EvaGotoMaria")
0x1338: Push("pt_map_maria")
0x1339: Push((int) 3)
0x133a: Push((int) 508628)
0x133b: PushEmpty(float)
0x133c: Call2 0x121d

0x133d: Pop(0)
0x133e: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x133f: Pop(5)
0x1340: Push("d1EvaInfo")
0x1341: Push("pt_map_eva")
0x1342: Push((int) 3)
0x1343: Push((int) 508630)
0x1344: PushEmpty(float)
0x1345: Call2 0x121d

0x1346: Pop(0)
0x1347: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1348: Pop(5)
0x1349: Return(); Pop(2)

0x134a: Stack[-1] = 0
0x134b: PushEmpty()
0x134c: Push("KnowStation")
0x134d: Push((int) 1)
0x134e: @ SetVariable(Stack[-2], Stack[-1])
0x134f: Pop(2)
0x1350: Return(); Pop(0)

0x1351: PushEmpty()
0x1352: PushEmpty(object, string, float)
0x1353: PushEmpty(object)
0x1354: Call2 0x1562

0x1355: Stack[-4] = Stack[-1]
0x1356: Pop(1)
0x1357: Stack[-2] = "pt_map_ospina"
0x1358: Stack[-1] = (int) 2
0x1359: Call2 0x1573

0x135a: Pop(3)
0x135b: PushEmpty(object)
0x135c: Call2 0x1562

0x135d: Pop(0)
0x135e: @@ ShowMap(Stack[-1])
0x135f: Pop(1)
0x1360: Return(); Pop(0)

0x1361: PushEmpty()
0x1362: Push("ood1EvaIntro1")
0x1363: Push((int) 1)
0x1364: @ SetVariable(Stack[-2], Stack[-1])
0x1365: Pop(2)
0x1366: Return(); Pop(0)

0x1367: PushEmpty()
0x1368: Push("ood1EvaIntro2")
0x1369: Push((int) 1)
0x136a: @ SetVariable(Stack[-2], Stack[-1])
0x136b: Pop(2)
0x136c: Return(); Pop(0)

0x136d: PushEmpty()
0x136e: Push("ood6Eva1")
0x136f: Push((int) 1)
0x1370: @ SetVariable(Stack[-2], Stack[-1])
0x1371: Pop(2)
0x1372: Return(); Pop(0)

0x1373: PushEmpty()
0x1374: PushEmpty(object, string, float)
0x1375: PushEmpty(object)
0x1376: Call2 0x1562

0x1377: Stack[-4] = Stack[-1]
0x1378: Pop(1)
0x1379: Stack[-2] = "pt_map_andrei"
0x137a: Stack[-1] = (int) 2
0x137b: Call2 0x1573

0x137c: Pop(3)
0x137d: PushEmpty(object)
0x137e: Call2 0x1562

0x137f: Pop(0)
0x1380: @@ ShowMap(Stack[-1])
0x1381: Pop(1)
0x1382: Return(); Pop(0)

0x1383: PushEmpty(object, object)
0x1384: PushEmpty(object)
0x1385: Call2 0x1562

0x1386: Stack[-2] = Stack[-1]
0x1387: Pop(1)
0x1388: Push("d2q02EvaGotoMaria")
0x1389: Push("pt_map_maria")
0x138a: Push((int) 0)
0x138b: Push((int) 515274)
0x138c: PushEmpty(float)
0x138d: Call2 0x121d

0x138e: Pop(0)
0x138f: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1390: Pop(5)
0x1391: Return(); Pop(2)

0x1392: Stack[-1] = 0
0x1393: PushEmpty()
0x1394: PushEmpty(object, string, float)
0x1395: PushEmpty(object)
0x1396: Call2 0x1562

0x1397: Stack[-4] = Stack[-1]
0x1398: Pop(1)
0x1399: Stack[-2] = "pt_map_maria"
0x139a: Stack[-1] = (int) 2
0x139b: Call2 0x1573

0x139c: Pop(3)
0x139d: PushEmpty(object)
0x139e: Call2 0x1562

0x139f: Pop(0)
0x13a0: @@ ShowMap(Stack[-1])
0x13a1: Pop(1)
0x13a2: Return(); Pop(0)

0x13a3: PushEmpty()
0x13a4: Push("ood4Eva1")
0x13a5: Push((int) 1)
0x13a6: @ SetVariable(Stack[-2], Stack[-1])
0x13a7: Pop(2)
0x13a8: Return(); Pop(0)

0x13a9: PushEmpty()
0x13aa: PushEmpty(int, string)
0x13ab: Stack[-1] = "ood1EvaIntro1"
0x13ac: Call2 0x11d0

0x13ad: Pop(1)
0x13ae: Push((int) 0)
0x13af: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x13b0: IF (Stack[-1] == 0) GOTO 0x13b3; Pop(1)

0x13b1: Stack[-2] = (bool) 1
0x13b2: Return(); Pop(0)

0x13b3: Stack[-2] = (bool) 0
0x13b4: Return(); Pop(0)

0x13b5: PushEmpty()
0x13b6: PushEmpty(int, string)
0x13b7: Stack[-1] = "d1q01FirstGeorgVisit"
0x13b8: Call2 0x11d0

0x13b9: Pop(1)
0x13ba: Push((int) 1)
0x13bb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x13bc: IF (Stack[-1] == 0) GOTO 0x13bf; Pop(1)

0x13bd: Stack[-2] = (bool) 1
0x13be: Return(); Pop(0)

0x13bf: Stack[-2] = (bool) 0
0x13c0: Return(); Pop(0)

0x13c1: PushEmpty()
0x13c2: PushEmpty(int, string)
0x13c3: Stack[-1] = "d1q03"
0x13c4: Call2 0x11d0

0x13c5: Pop(1)
0x13c6: Push((int) 0)
0x13c7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x13c8: IF (Stack[-1] == 0) GOTO 0x13cb; Pop(1)

0x13c9: Stack[-2] = (bool) 1
0x13ca: Return(); Pop(0)

0x13cb: Stack[-2] = (bool) 0
0x13cc: Return(); Pop(0)

0x13cd: PushEmpty()
0x13ce: PushEmpty(int, string)
0x13cf: Stack[-1] = "d1q03"
0x13d0: Call2 0x11d0

0x13d1: Pop(1)
0x13d2: Push((int) 1000)
0x13d3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x13d4: IF (Stack[-1] == 0) GOTO 0x13d7; Pop(1)

0x13d5: Stack[-2] = (bool) 1
0x13d6: Return(); Pop(0)

0x13d7: Stack[-2] = (bool) 0
0x13d8: Return(); Pop(0)

0x13d9: PushEmpty()
0x13da: PushEmpty(int, string)
0x13db: Stack[-1] = "d1q03IsKapella"
0x13dc: Call2 0x11d0

0x13dd: Pop(1)
0x13de: Push((int) 1)
0x13df: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x13e0: IF (Stack[-1] == 0) GOTO 0x13e3; Pop(1)

0x13e1: Stack[-2] = (bool) 1
0x13e2: Return(); Pop(0)

0x13e3: Stack[-2] = (bool) 0
0x13e4: Return(); Pop(0)

0x13e5: PushEmpty()
0x13e6: PushEmpty(int, string)
0x13e7: Stack[-1] = "d1q04"
0x13e8: Call2 0x11d0

0x13e9: Pop(1)
0x13ea: Push((int) 1)
0x13eb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x13ec: IF (Stack[-1] == 0) GOTO 0x13ef; Pop(1)

0x13ed: Stack[-2] = (bool) 1
0x13ee: Return(); Pop(0)

0x13ef: Stack[-2] = (bool) 0
0x13f0: Return(); Pop(0)

0x13f1: PushEmpty()
0x13f2: PushEmpty(int, string)
0x13f3: Stack[-1] = "d1q01"
0x13f4: Call2 0x11d0

0x13f5: Pop(1)
0x13f6: Push((int) 5)
0x13f7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x13f8: IF (Stack[-1] == 0) GOTO 0x13fb; Pop(1)

0x13f9: Stack[-2] = (bool) 1
0x13fa: Return(); Pop(0)

0x13fb: Stack[-2] = (bool) 0
0x13fc: Return(); Pop(0)

0x13fd: PushEmpty()
0x13fe: PushEmpty(int, string)
0x13ff: Stack[-1] = "d1q01"
0x1400: Call2 0x11d0

0x1401: Pop(1)
0x1402: Push((int) 6)
0x1403: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1404: IF (Stack[-1] == 0) GOTO 0x1407; Pop(1)

0x1405: Stack[-2] = (bool) 1
0x1406: Return(); Pop(0)

0x1407: Stack[-2] = (bool) 0
0x1408: Return(); Pop(0)

0x1409: PushEmpty()
0x140a: PushEmpty(int, string)
0x140b: Stack[-1] = "ood1Eva4"
0x140c: Call2 0x11d0

0x140d: Pop(1)
0x140e: Push((int) 0)
0x140f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1410: IF (Stack[-1] == 0) GOTO 0x1413; Pop(1)

0x1411: Stack[-2] = (bool) 1
0x1412: Return(); Pop(0)

0x1413: Stack[-2] = (bool) 0
0x1414: Return(); Pop(0)

0x1415: PushEmpty()
0x1416: PushEmpty(int, string)
0x1417: Stack[-1] = "d1q01"
0x1418: Call2 0x11d0

0x1419: Pop(1)
0x141a: Push((int) 6)
0x141b: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x141c: IF (Stack[-1] == 0) GOTO 0x141f; Pop(1)

0x141d: Stack[-2] = (bool) 1
0x141e: Return(); Pop(0)

0x141f: Stack[-2] = (bool) 0
0x1420: Return(); Pop(0)

0x1421: PushEmpty()
0x1422: PushEmpty(int, string)
0x1423: Stack[-1] = "ood1Eva7"
0x1424: Call2 0x11d0

0x1425: Pop(1)
0x1426: Push((int) 0)
0x1427: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1428: IF (Stack[-1] == 0) GOTO 0x142b; Pop(1)

0x1429: Stack[-2] = (bool) 1
0x142a: Return(); Pop(0)

0x142b: Stack[-2] = (bool) 0
0x142c: Return(); Pop(0)

0x142d: PushEmpty()
0x142e: PushEmpty(int, string)
0x142f: Stack[-1] = "ood4Eva2"
0x1430: Call2 0x11d0

0x1431: Pop(1)
0x1432: Push((int) 0)
0x1433: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1434: IF (Stack[-1] == 0) GOTO 0x1437; Pop(1)

0x1435: Stack[-2] = (bool) 1
0x1436: Return(); Pop(0)

0x1437: Stack[-2] = (bool) 0
0x1438: Return(); Pop(0)

0x1439: PushEmpty()
0x143a: PushEmpty(int, string)
0x143b: Stack[-1] = "ood1EvaIntro2"
0x143c: Call2 0x11d0

0x143d: Pop(1)
0x143e: Push((int) 0)
0x143f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1440: IF (Stack[-1] == 0) GOTO 0x1443; Pop(1)

0x1441: Stack[-2] = (bool) 1
0x1442: Return(); Pop(0)

0x1443: Stack[-2] = (bool) 0
0x1444: Return(); Pop(0)

0x1445: PushEmpty()
0x1446: PushEmpty(int, string)
0x1447: Stack[-1] = "ood2Eva1"
0x1448: Call2 0x11d0

0x1449: Pop(1)
0x144a: Push((int) 0)
0x144b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x144c: IF (Stack[-1] == 0) GOTO 0x144f; Pop(1)

0x144d: Stack[-2] = (bool) 1
0x144e: Return(); Pop(0)

0x144f: Stack[-2] = (bool) 0
0x1450: Return(); Pop(0)

0x1451: PushEmpty()
0x1452: PushEmpty(int, string)
0x1453: Stack[-1] = "ood2Eva2"
0x1454: Call2 0x11d0

0x1455: Pop(1)
0x1456: Push((int) 0)
0x1457: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1458: IF (Stack[-1] == 0) GOTO 0x145b; Pop(1)

0x1459: Stack[-2] = (bool) 1
0x145a: Return(); Pop(0)

0x145b: Stack[-2] = (bool) 0
0x145c: Return(); Pop(0)

0x145d: PushEmpty()
0x145e: PushEmpty(int, string)
0x145f: Stack[-1] = "ood2Eva3"
0x1460: Call2 0x11d0

0x1461: Pop(1)
0x1462: Push((int) 0)
0x1463: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1464: IF (Stack[-1] == 0) GOTO 0x1467; Pop(1)

0x1465: Stack[-2] = (bool) 1
0x1466: Return(); Pop(0)

0x1467: Stack[-2] = (bool) 0
0x1468: Return(); Pop(0)

0x1469: PushEmpty()
0x146a: PushEmpty(int, string)
0x146b: Stack[-1] = "ood2Eva4"
0x146c: Call2 0x11d0

0x146d: Pop(1)
0x146e: Push((int) 0)
0x146f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1470: IF (Stack[-1] == 0) GOTO 0x1473; Pop(1)

0x1471: Stack[-2] = (bool) 1
0x1472: Return(); Pop(0)

0x1473: Stack[-2] = (bool) 0
0x1474: Return(); Pop(0)

0x1475: PushEmpty()
0x1476: PushEmpty(int, string)
0x1477: Stack[-1] = "d2q02"
0x1478: Call2 0x11d0

0x1479: Pop(1)
0x147a: Push((int) 1000)
0x147b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x147c: IF (Stack[-1] == 0) GOTO 0x147f; Pop(1)

0x147d: Stack[-2] = (bool) 1
0x147e: Return(); Pop(0)

0x147f: Stack[-2] = (bool) 0
0x1480: Return(); Pop(0)

0x1481: PushEmpty()
0x1482: PushEmpty(int, string)
0x1483: Stack[-1] = "d2q02"
0x1484: Call2 0x11d0

0x1485: Pop(1)
0x1486: Push((int) 3)
0x1487: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1488: IF (Stack[-1] == 0) GOTO 0x148b; Pop(1)

0x1489: Stack[-2] = (bool) 1
0x148a: Return(); Pop(0)

0x148b: Stack[-2] = (bool) 0
0x148c: Return(); Pop(0)

0x148d: PushEmpty()
0x148e: PushEmpty(int, string)
0x148f: Stack[-1] = "d2q02"
0x1490: Call2 0x11d0

0x1491: Pop(1)
0x1492: Push((int) 5)
0x1493: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1494: IF (Stack[-1] == 0) GOTO 0x1497; Pop(1)

0x1495: Stack[-2] = (bool) 1
0x1496: Return(); Pop(0)

0x1497: Stack[-2] = (bool) 0
0x1498: Return(); Pop(0)

0x1499: PushEmpty()
0x149a: PushEmpty(int, string)
0x149b: Stack[-1] = "d2q02"
0x149c: Call2 0x11d0

0x149d: Pop(1)
0x149e: Push((int) 0)
0x149f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14a0: IF (Stack[-1] == 0) GOTO 0x14a3; Pop(1)

0x14a1: Stack[-2] = (bool) 1
0x14a2: Return(); Pop(0)

0x14a3: Stack[-2] = (bool) 0
0x14a4: Return(); Pop(0)

0x14a5: PushEmpty()
0x14a6: PushEmpty(int, string)
0x14a7: Stack[-1] = "d4q01"
0x14a8: Call2 0x11d0

0x14a9: Pop(1)
0x14aa: Push((int) 1)
0x14ab: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14ac: IF (Stack[-1] == 0) GOTO 0x14af; Pop(1)

0x14ad: Stack[-2] = (bool) 1
0x14ae: Return(); Pop(0)

0x14af: Stack[-2] = (bool) 0
0x14b0: Return(); Pop(0)

0x14b1: PushEmpty()
0x14b2: PushEmpty(int, string)
0x14b3: Stack[-1] = "d4q02"
0x14b4: Call2 0x11d0

0x14b5: Pop(1)
0x14b6: Push((int) 1)
0x14b7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14b8: IF (Stack[-1] == 0) GOTO 0x14bb; Pop(1)

0x14b9: Stack[-2] = (bool) 1
0x14ba: Return(); Pop(0)

0x14bb: Stack[-2] = (bool) 0
0x14bc: Return(); Pop(0)

0x14bd: PushEmpty()
0x14be: PushEmpty(int, string)
0x14bf: Stack[-1] = "d4q02LaraGivesMedcine"
0x14c0: Call2 0x11d0

0x14c1: Pop(1)
0x14c2: Push((int) 1)
0x14c3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14c4: IF (Stack[-1] == 0) GOTO 0x14c7; Pop(1)

0x14c5: Stack[-2] = (bool) 1
0x14c6: Return(); Pop(0)

0x14c7: Stack[-2] = (bool) 0
0x14c8: Return(); Pop(0)

0x14c9: PushEmpty()
0x14ca: PushEmpty(int, string)
0x14cb: Stack[-1] = "d4q02JuliaGivesMedcine"
0x14cc: Call2 0x11d0

0x14cd: Pop(1)
0x14ce: Push((int) 1)
0x14cf: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14d0: IF (Stack[-1] == 0) GOTO 0x14d3; Pop(1)

0x14d1: Stack[-2] = (bool) 1
0x14d2: Return(); Pop(0)

0x14d3: Stack[-2] = (bool) 0
0x14d4: Return(); Pop(0)

0x14d5: PushEmpty()
0x14d6: PushEmpty(int, string)
0x14d7: Stack[-1] = "d6q01"
0x14d8: Call2 0x11d0

0x14d9: Pop(1)
0x14da: Push((int) 1)
0x14db: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14dc: IF (Stack[-1] == 0) GOTO 0x14df; Pop(1)

0x14dd: Stack[-2] = (bool) 1
0x14de: Return(); Pop(0)

0x14df: Stack[-2] = (bool) 0
0x14e0: Return(); Pop(0)

0x14e1: PushEmpty()
0x14e2: PushEmpty(int, string)
0x14e3: Stack[-1] = "ood6Eva1"
0x14e4: Call2 0x11d0

0x14e5: Pop(1)
0x14e6: Push((int) 0)
0x14e7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14e8: IF (Stack[-1] == 0) GOTO 0x14eb; Pop(1)

0x14e9: Stack[-2] = (bool) 1
0x14ea: Return(); Pop(0)

0x14eb: Stack[-2] = (bool) 0
0x14ec: Return(); Pop(0)

0x14ed: PushEmpty()
0x14ee: PushEmpty(int, string)
0x14ef: Stack[-1] = "ood4Eva1"
0x14f0: Call2 0x11d0

0x14f1: Pop(1)
0x14f2: Push((int) 0)
0x14f3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14f4: IF (Stack[-1] == 0) GOTO 0x14f7; Pop(1)

0x14f5: Stack[-2] = (bool) 1
0x14f6: Return(); Pop(0)

0x14f7: Stack[-2] = (bool) 0
0x14f8: Return(); Pop(0)

0x14f9: PushEmpty()
0x14fa: PushEmpty(int, string)
0x14fb: Stack[-1] = "ood1EvaIntro3"
0x14fc: Call2 0x11d0

0x14fd: Pop(1)
0x14fe: Push((int) 0)
0x14ff: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1500: IF (Stack[-1] == 0) GOTO 0x1503; Pop(1)

0x1501: Stack[-2] = (bool) 1
0x1502: Return(); Pop(0)

0x1503: Stack[-2] = (bool) 0
0x1504: Return(); Pop(0)

0x1505: PushEmpty(object, object)
0x1506: Push((int) 37)
0x1507: Push((int) 2)
0x1508: Push((int) 512119)
0x1509: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x150a: Pop(3)
0x150b: PushEmpty(bool, object, int)
0x150c: Stack[-2] = Stack[-4]
0x150d: Stack[-1] = (int) -1
0x150e: Call2 0x1546

0x150f: Pop(3)
0x1510: Return(); Pop(2)

0x1511: Stack[-1] = 0
0x1512: PushEmpty(object, object)
0x1513: Push((int) 680)
0x1514: Push((int) 2)
0x1515: Push((int) 534422)
0x1516: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1517: Pop(3)
0x1518: PushEmpty(bool, object, int)
0x1519: Stack[-2] = Stack[-4]
0x151a: Stack[-1] = (int) 37
0x151b: Call2 0x1546

0x151c: Pop(3)
0x151d: Return(); Pop(2)

0x151e: Stack[-1] = 0
0x151f: PushEmpty(object, object)
0x1520: Push((int) 11)
0x1521: Push((int) 2)
0x1522: Push((int) 503095)
0x1523: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1524: Pop(3)
0x1525: PushEmpty(bool, object, int)
0x1526: Stack[-2] = Stack[-4]
0x1527: Stack[-1] = (int) -1
0x1528: Call2 0x1546

0x1529: Pop(3)
0x152a: Return(); Pop(2)

0x152b: Stack[-1] = 0
0x152c: PushEmpty(object, object)
0x152d: Push((int) 57)
0x152e: Push((int) 2)
0x152f: Push((int) 512139)
0x1530: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1531: Pop(3)
0x1532: PushEmpty(bool, object, int)
0x1533: Stack[-2] = Stack[-4]
0x1534: Stack[-1] = (int) 11
0x1535: Call2 0x1546

0x1536: Pop(3)
0x1537: Return(); Pop(2)

0x1538: Stack[-1] = 0
0x1539: PushEmpty(object, object)
0x153a: @ GetDiaryRoot(Stack[-1])
0x153b: Pop(0)
0x153c: Pop(0); Push((bool) Stack[-1] == 0)
0x153d: IF (Stack[-1] == 0) GOTO 0x1543; Pop(1)

0x153e: Push("Can't retrieve diary root")
0x153f: @ Trace(Stack[-1])
0x1540: Pop(1)
0x1541: Stack[-3] = (bool) 0
0x1542: Return(); Pop(2)

0x1543: Stack[-3] = Stack[-1]
0x1544: Return(); Pop(2)

0x1545: Stack[-1] = 0
0x1546: PushEmpty(object, object, int, object, object, int)
0x1547: PushEmpty(object)
0x1548: Call2 0x1539

0x1549: Stack[-4] = Stack[-1]
0x154a: Pop(1)
0x154b: @@ Find(Stack[-7], Stack[-2])
0x154c: Pop(0)
0x154d: Pop(0); Push((bool) Stack[-2] == 0)
0x154e: IF (Stack[-1] == 0) GOTO 0x1555; Pop(1)

0x154f: Push("Can't find diary parent with id: ")
0x1550: Pop(1); Push(Stack[-1] + Stack[-8]);
0x1551: @ Trace(Stack[-1])
0x1552: Pop(1)
0x1553: Stack[-9] = (bool) 0
0x1554: Return(); Pop(6)

0x1555: @@ AddChild(Stack[-8])
0x1556: Pop(0)
0x1557: Push((int) 7)
0x1558: @ SendWorldWndMessage(Stack[-1])
0x1559: Pop(1)
0x155a: @@ GetCategory(Stack[-1])
0x155b: Pop(0)
0x155c: @ SetDiarySection(Stack[-1])
0x155d: Pop(0)
0x155e: Stack[-9] = (bool) 0
0x155f: Return(); Pop(6)

0x1560: Stack[-2] = 0
0x1561: Stack[-3] = 0
0x1562: PushEmpty(object, object, object, object)
0x1563: @ GetMainOutdoorScene(Stack[-2])
0x1564: Pop(0)
0x1565: Pop(0); Push((bool) Stack[-2] == 0)
0x1566: IF (Stack[-1] == 0) GOTO 0x156d; Pop(1)

0x1567: Push("Can't find main outdoor scene")
0x1568: @ Trace(Stack[-1])
0x1569: Pop(1)
0x156a: Stack[-1] = 0
0x156b: Stack[-5] = Stack[-1]
0x156c: Return(); Pop(4)

0x156d: @@ GetMap(Stack[-1])
0x156e: Pop(0)
0x156f: Stack[-5] = Stack[-1]
0x1570: Return(); Pop(4)

0x1571: Stack[-1] = 0
0x1572: Stack[-2] = 0
0x1573: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x1574: @ GetMainOutdoorScene(Stack[-2])
0x1575: Pop(0)
0x1576: Pop(0); Push((bool) Stack[-2] == 0)
0x1577: IF (Stack[-1] == 0) GOTO 0x157c; Pop(1)

0x1578: Push("Can't find main outdoor scene")
0x1579: @ Trace(Stack[-1])
0x157a: Pop(1)
0x157b: Return(); Pop(8)

0x157c: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x157d: Pop(0)
0x157e: Pop(0); Push((bool) Stack[-1] == 0)
0x157f: IF (Stack[-1] == 0) GOTO 0x1586; Pop(1)

0x1580: Push("Warning: outdoor scene locator ")
0x1581: Pop(1); Push(Stack[-1] + Stack[-11]);
0x1582: Push(" doesnt exist")
0x1583: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1584: @ Trace(Stack[-1])
0x1585: Pop(1)
0x1586: @@ GetMap(Stack[-11])
0x1587: Pop(0)
0x1588: Pop(0); Push((bool) Stack[-11] == 0)
0x1589: IF (Stack[-1] == 0) GOTO 0x158e; Pop(1)

0x158a: Push("Can't find map")
0x158b: @ Trace(Stack[-1])
0x158c: Pop(1)
0x158d: Return(); Pop(8)

0x158e: Push(CvectorIndex(Stack[-4], 0))
0x158f: Push(CvectorIndex(Stack[-5], 2))
0x1590: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x1591: Pop(2)
0x1592: Return(); Pop(8)

0x1593: Stack[-2] = 0
0x1594: PushEmpty(int, int)
0x1595: Push("branch")
0x1596: @ GetVariable(Stack[-1], Stack[-2])
0x1597: Pop(1)
0x1598: Push((int) 0)
0x1599: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x159a: IF (Stack[-1] == 0) GOTO 0x159e; Pop(1)

0x159b: Stack[-3] = (int) 1
0x159c: Return(); Pop(2)

0x159d: GOTO 0x15a3

0x159e: Push((int) 1)
0x159f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x15a0: IF (Stack[-1] == 0) GOTO 0x15a3; Pop(1)

0x15a1: Stack[-3] = (int) 2
0x15a2: Return(); Pop(2)

0x15a3: Stack[-3] = (int) 3
0x15a4: Return(); Pop(2)

0x15a5: PushEmpty()
0x15a6: PushEmpty(bool, int)
0x15a7: Stack[-1] = (int) 1
0x15a8: Call2 0x122b

0x15a9: Pop(1)
0x15aa: IF (Stack[-1] == 0) GOTO 0x15b2; Pop(1)

0x15ab: PushEmpty(int, object)
0x15ac: Stack[-1] = Stack[-3]
0x15ad: Push(-2, 1); TaskCall(2)
0x15ae: Call2 0x196

0x15af: Pop(-2, 1); TaskReturn
0x15b0: Pop(2)
0x15b1: Return(); Pop(0)

0x15b2: PushEmpty(bool, int)
0x15b3: Stack[-1] = (int) 2
0x15b4: Call2 0x122b

0x15b5: Pop(1)
0x15b6: IF (Stack[-1] == 0) GOTO 0x15be; Pop(1)

0x15b7: PushEmpty(int, object)
0x15b8: Stack[-1] = Stack[-3]
0x15b9: Push(-2, 1); TaskCall(4)
0x15ba: Call2 0x7d9

0x15bb: Pop(-2, 1); TaskReturn
0x15bc: Pop(2)
0x15bd: Return(); Pop(0)

0x15be: PushEmpty(bool, int)
0x15bf: Stack[-1] = (int) 3
0x15c0: Call2 0x122b

0x15c1: Pop(1)
0x15c2: IF (Stack[-1] == 0) GOTO 0x15ca; Pop(1)

0x15c3: PushEmpty(int, object)
0x15c4: Stack[-1] = Stack[-3]
0x15c5: Push(-2, 1); TaskCall(6)
0x15c6: Call2 0xb44

0x15c7: Pop(-2, 1); TaskReturn
0x15c8: Pop(2)
0x15c9: Return(); Pop(0)

0x15ca: PushEmpty(bool, int)
0x15cb: Stack[-1] = (int) 4
0x15cc: Call2 0x122b

0x15cd: Pop(1)
0x15ce: IF (Stack[-1] == 0) GOTO 0x15d6; Pop(1)

0x15cf: PushEmpty(int, object)
0x15d0: Stack[-1] = Stack[-3]
0x15d1: Push(-2, 1); TaskCall(8)
0x15d2: Call2 0xc64

0x15d3: Pop(-2, 1); TaskReturn
0x15d4: Pop(2)
0x15d5: Return(); Pop(0)

0x15d6: PushEmpty(bool, int)
0x15d7: Stack[-1] = (int) 6
0x15d8: Call2 0x122b

0x15d9: Pop(1)
0x15da: IF (Stack[-1] == 0) GOTO 0x15e2; Pop(1)

0x15db: PushEmpty(int, object)
0x15dc: Stack[-1] = Stack[-3]
0x15dd: Push(-2, 1); TaskCall(0)
0x15de: Call2 0x0

0x15df: Pop(-2, 1); TaskReturn
0x15e0: Pop(2)
0x15e1: Return(); Pop(0)

0x15e2: PushEmpty(int, object)
0x15e3: Stack[-1] = Stack[-3]
0x15e4: Push(-2, 1); TaskCall(10)
0x15e5: Call2 0xec1

0x15e6: Pop(-2, 1); TaskReturn
0x15e7: Pop(2)
0x15e8: Return(); Pop(0)

