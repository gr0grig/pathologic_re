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
	ood1Eva5
	ood1Eva6
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
	ood3Eva1
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

RunOp = 0x1033
RunTask = 12

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xc8 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x317 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x94d Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xc5c Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xde8 Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1009 Vars = (int, int)
	GTASK_12 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x107c Vars = (int)
		EVENT_6 Op = 0x10a2 Vars = ()
		EVENT_5 Op = 0x10b1 Vars = ()
		EVENT_45 Op = 0x10be Vars = (bool)
		EVENT_0 Op = 0x10ca Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x1153

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x12f4

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x12f2

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x12f6

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x12f8

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x167f

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
0x31: Call2 0x1269

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x11aa

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
0x48: Call2 0x1198

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
0x5b: Call2 0x15b4

0x5c: Pop(1)
0x5d: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x5e: PushEmpty(bool, object)
0x5f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x60: Call2 0x15c0

0x61: Pop(1)
0x62: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x63: Stack[-1] = (bool) 1
0x64: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x65: PushEmpty(object, object)
0x66: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x67: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x68: Call2 0x1422

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
0x95: Call2 0x12fa

0x96: Pop(0)
0x97: IF (Stack[-1] == 0) GOTO 0xa3; Pop(1)

0x98: @ lshWaitForAnimEnd()
0x99: Pop(0)
0x9a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9b: IF (Stack[-1] == 0) GOTO 0x9d; Pop(1)

0x9c: GOTO 0xa2

0x9d: PushEmpty(string)
0x9e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x9f: Call2 0x1234

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
0xb4: Call2 0x12fa

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
0xc4: Call2 0x1244

0xc5: Pop(2)
0xc6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xc7: Return(); Pop(0)

0xc8: PushEmpty()
0xc9: Push((int) 1)
0xca: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0xcb: PushEmpty()
0xcc: Call2 0x1262

0xcd: Pop(0)
0xce: Push((int) 4274)
0xcf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd0: IF (Stack[-1] == 0) GOTO 0x10c; Pop(1)

0xd1: PushEmpty(bool)
0xd2: Stack[-1] = (bool) 0
0xd3: PushEmpty(bool, object)
0xd4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd5: Call2 0x15b4

0xd6: Pop(1)
0xd7: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xd8: PushEmpty(bool, object)
0xd9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xda: Call2 0x15c0

0xdb: Pop(1)
0xdc: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xdd: Stack[-1] = (bool) 1
0xde: IF (Stack[-1] == 0) GOTO 0xf8; Pop(1)

0xdf: PushEmpty(object, object)
0xe0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe2: Call2 0x1422

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
0x18b: Call2 0x12fa

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
0x19b: Call2 0x1153

0x19c: Pop(2)
0x19d: Pop(1); Push((bool) Stack[-1] == 0)
0x19e: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x19f: Stack[-10] = (int) -2
0x1a0: Return(); Pop(8)

0x1a1: @ CreateDialog(Stack[-4])
0x1a2: Pop(0)
0x1a3: PushEmpty(int)
0x1a4: Call2 0x12f4

0x1a5: Pop(0)
0x1a6: @@ SetNPCName(Stack[-1])
0x1a7: Pop(1)
0x1a8: PushEmpty(int)
0x1a9: Call2 0x12f2

0x1aa: Pop(0)
0x1ab: @@ SetNPCDescription(Stack[-1])
0x1ac: Pop(1)
0x1ad: PushEmpty(string)
0x1ae: Call2 0x12f6

0x1af: Pop(0)
0x1b0: @@ SetPhoto(Stack[-1])
0x1b1: Pop(1)
0x1b2: PushEmpty(string)
0x1b3: Call2 0x12f8

0x1b4: Pop(0)
0x1b5: @@ SetPhoto2(Stack[-1])
0x1b6: Pop(1)
0x1b7: PushEmpty(int)
0x1b8: Call2 0x167f

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
0x1c7: Call2 0x1269

0x1c8: Stack[-2] = Stack[-1]
0x1c9: Pop(1)
0x1ca: Call2 0x11aa

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
0x1de: Call2 0x1198

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
0x1ec: IF (Stack[-1] == 0) GOTO 0x2e3; Pop(1)

0x1ed: PushEmpty(bool)
0x1ee: Stack[-1] = (bool) 0
0x1ef: PushEmpty(bool, object)
0x1f0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1f1: Call2 0x1464

0x1f2: Pop(1)
0x1f3: IF (Stack[-1] == 0) GOTO 0x1fa; Pop(1)

0x1f4: PushEmpty(bool, object)
0x1f5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1f6: Call2 0x147c

0x1f7: Pop(1)
0x1f8: IF (Stack[-1] == 0) GOTO 0x1fa; Pop(1)

0x1f9: Stack[-1] = (bool) 1
0x1fa: IF (Stack[-1] == 0) GOTO 0x214; Pop(1)

0x1fb: PushEmpty(object, object)
0x1fc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1fd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1fe: Call2 0x1416

0x1ff: Pop(2)
0x200: PushEmpty(string)
0x201: Stack[-1] = "Fear"
0x202: Call2 0x301

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
0x213: GOTO 0x2e3

0x214: PushEmpty(bool)
0x215: Stack[-1] = (bool) 1
0x216: PushEmpty(bool)
0x217: Stack[-1] = (bool) 0
0x218: PushEmpty(bool)
0x219: Stack[-1] = (bool) 0
0x21a: PushEmpty(bool, object)
0x21b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x21c: Call2 0x15e4

0x21d: Pop(1)
0x21e: IF (Stack[-1] == 0) GOTO 0x225; Pop(1)

0x21f: PushEmpty(bool, object)
0x220: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x221: Call2 0x14d0

0x222: Pop(1)
0x223: IF (Stack[-1] == 0) GOTO 0x225; Pop(1)

0x224: Stack[-1] = (bool) 1
0x225: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x226: PushEmpty(bool, object)
0x227: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x228: Call2 0x147c

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
0x233: Call2 0x15e4

0x234: Pop(1)
0x235: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x236: PushEmpty(bool, object)
0x237: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x238: Call2 0x14ac

0x239: Pop(1)
0x23a: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x23b: Stack[-1] = (bool) 1
0x23c: IF (Stack[-1] == 0) GOTO 0x243; Pop(1)

0x23d: PushEmpty(bool, object)
0x23e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x23f: Call2 0x147c

0x240: Pop(1)
0x241: IF (Stack[-1] == 0) GOTO 0x243; Pop(1)

0x242: Stack[-1] = (bool) 1
0x243: IF (Stack[-1] == 0) GOTO 0x245; Pop(1)

0x244: Stack[-1] = (bool) 0
0x245: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x246: PushEmpty(object, object)
0x247: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x248: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x249: Call2 0x12fc

0x24a: Pop(2)
0x24b: PushEmpty(string)
0x24c: Stack[-1] = "Neutral"
0x24d: Call2 0x301

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
0x25e: GOTO 0x2e3

0x25f: PushEmpty(string)
0x260: Stack[-1] = "Neutral"
0x261: Call2 0x301

0x262: Pop(1)
0x263: Push((int) 521052)
0x264: @@ SetMessage(Stack[-1])
0x265: Pop(1)
0x266: @@ ClearReplies()
0x267: Pop(0)
0x268: PushEmpty(bool)
0x269: Stack[-1] = (bool) 0
0x26a: PushEmpty(bool, object)
0x26b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x26c: Call2 0x156c

0x26d: Pop(1)
0x26e: IF (Stack[-1] == 0) GOTO 0x275; Pop(1)

0x26f: PushEmpty(bool, object)
0x270: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x271: Call2 0x14e8

0x272: Pop(1)
0x273: IF (Stack[-1] == 0) GOTO 0x275; Pop(1)

0x274: Stack[-1] = (bool) 1
0x275: IF (Stack[-1] == 0) GOTO 0x27b; Pop(1)

0x276: Push((int) 535143)
0x277: Push((int) 36805)
0x278: Push((int) 36804)
0x279: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x27a: Pop(3)
0x27b: PushEmpty(bool, object)
0x27c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x27d: Call2 0x14dc

0x27e: Pop(1)
0x27f: IF (Stack[-1] == 0) GOTO 0x285; Pop(1)

0x280: Push((int) 535107)
0x281: Push((int) 36764)
0x282: Push((int) 36763)
0x283: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x284: Pop(3)
0x285: PushEmpty(bool)
0x286: Stack[-1] = (bool) 0
0x287: PushEmpty(bool)
0x288: Stack[-1] = (bool) 0
0x289: PushEmpty(bool, object)
0x28a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x28b: Call2 0x14b8

0x28c: Pop(1)
0x28d: IF (Stack[-1] == 0) GOTO 0x294; Pop(1)

0x28e: PushEmpty(bool, object)
0x28f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x290: Call2 0x150c

0x291: Pop(1)
0x292: IF (Stack[-1] == 0) GOTO 0x294; Pop(1)

0x293: Stack[-1] = (bool) 1
0x294: IF (Stack[-1] == 0) GOTO 0x29b; Pop(1)

0x295: PushEmpty(bool, object)
0x296: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x297: Call2 0x1488

0x298: Pop(1)
0x299: IF (Stack[-1] == 0) GOTO 0x29b; Pop(1)

0x29a: Stack[-1] = (bool) 1
0x29b: IF (Stack[-1] == 0) GOTO 0x2a1; Pop(1)

0x29c: Push((int) 531940)
0x29d: Push((int) 33345)
0x29e: Push((int) 33344)
0x29f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a0: Pop(3)
0x2a1: PushEmpty(bool)
0x2a2: Stack[-1] = (bool) 0
0x2a3: PushEmpty(bool)
0x2a4: Stack[-1] = (bool) 0
0x2a5: PushEmpty(bool, object)
0x2a6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2a7: Call2 0x1494

0x2a8: Pop(1)
0x2a9: IF (Stack[-1] == 0) GOTO 0x2b0; Pop(1)

0x2aa: PushEmpty(bool, object)
0x2ab: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2ac: Call2 0x14c4

0x2ad: Pop(1)
0x2ae: IF (Stack[-1] == 0) GOTO 0x2b0; Pop(1)

0x2af: Stack[-1] = (bool) 1
0x2b0: IF (Stack[-1] == 0) GOTO 0x2b7; Pop(1)

0x2b1: PushEmpty(bool, object)
0x2b2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2b3: Call2 0x1488

0x2b4: Pop(1)
0x2b5: IF (Stack[-1] == 0) GOTO 0x2b7; Pop(1)

0x2b6: Stack[-1] = (bool) 1
0x2b7: IF (Stack[-1] == 0) GOTO 0x2bd; Pop(1)

0x2b8: Push((int) 532458)
0x2b9: Push((int) 33900)
0x2ba: Push((int) 33899)
0x2bb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2bc: Pop(3)
0x2bd: PushEmpty(bool)
0x2be: Stack[-1] = (bool) 0
0x2bf: PushEmpty(bool, object)
0x2c0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2c1: Call2 0x14f4

0x2c2: Pop(1)
0x2c3: IF (Stack[-1] == 0) GOTO 0x2ca; Pop(1)

0x2c4: PushEmpty(bool, object)
0x2c5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2c6: Call2 0x14a0

0x2c7: Pop(1)
0x2c8: IF (Stack[-1] == 0) GOTO 0x2ca; Pop(1)

0x2c9: Stack[-1] = (bool) 1
0x2ca: IF (Stack[-1] == 0) GOTO 0x2d0; Pop(1)

0x2cb: Push((int) 533614)
0x2cc: Push((int) 35137)
0x2cd: Push((int) 35136)
0x2ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2cf: Pop(3)
0x2d0: PushEmpty(bool, object)
0x2d1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2d2: Call2 0x1470

0x2d3: Pop(1)
0x2d4: Pop(1); Push((bool) Stack[-1] == 0)
0x2d5: IF (Stack[-1] == 0) GOTO 0x2db; Pop(1)

0x2d6: Push((int) 521053)
0x2d7: Push((int) -1)
0x2d8: Push((int) 22244)
0x2d9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2da: Pop(3)
0x2db: Push((int) 521054)
0x2dc: Push((int) -1)
0x2dd: Push((int) 22245)
0x2de: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2df: Pop(3)
0x2e0: GOTO 0x2e3

0x2e1: Return(); Pop(0)

0x2e2: GOTO 0x1eb

0x2e3: PushEmpty(bool)
0x2e4: Call2 0x12fa

0x2e5: Pop(0)
0x2e6: IF (Stack[-1] == 0) GOTO 0x2f2; Pop(1)

0x2e7: @ lshWaitForAnimEnd()
0x2e8: Pop(0)
0x2e9: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2ea: IF (Stack[-1] == 0) GOTO 0x2ec; Pop(1)

0x2eb: GOTO 0x2f1

0x2ec: PushEmpty(string)
0x2ed: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x2ee: Call2 0x1234

0x2ef: Pop(1)
0x2f0: GOTO 0x2e7

0x2f1: GOTO 0x300

0x2f2: Push("all")
0x2f3: Push("idle")
0x2f4: @ PlayAnimation(Stack[-2], Stack[-1])
0x2f5: Pop(2)
0x2f6: @ WaitForAnimEnd()
0x2f7: Pop(0)
0x2f8: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2f9: IF (Stack[-1] == 0) GOTO 0x2fb; Pop(1)

0x2fa: GOTO 0x300

0x2fb: Push("all")
0x2fc: Push("idle")
0x2fd: @ PlayAnimation(Stack[-2], Stack[-1])
0x2fe: Pop(2)
0x2ff: GOTO 0x2f6

0x300: Return(); Pop(0)

0x301: PushEmpty()
0x302: PushEmpty(bool)
0x303: Call2 0x12fa

0x304: Pop(0)
0x305: Pop(1); Push((bool) Stack[-1] == 0)
0x306: IF (Stack[-1] == 0) GOTO 0x308; Pop(1)

0x307: Return(); Pop(0)

0x308: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x309: IF (Stack[-1] == 0) GOTO 0x30b; Pop(1)

0x30a: Return(); Pop(0)

0x30b: PushEmpty(string, bool)
0x30c: Stack[-2] = Stack[-3]
0x30d: Push("")
0x30e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x30f: IF (Stack[-1] == 0) GOTO 0x312; Pop(1)

0x310: Stack[-1] = (bool) 0
0x311: GOTO 0x313

0x312: Stack[-1] = (bool) 1
0x313: Call2 0x1244

0x314: Pop(2)
0x315: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x316: Return(); Pop(0)

0x317: PushEmpty()
0x318: Push((int) 1)
0x319: IF (Stack[-1] == 0) GOTO 0x84a; Pop(1)

0x31a: PushEmpty()
0x31b: Call2 0x1262

0x31c: Pop(0)
0x31d: Push((int) 4900)
0x31e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x31f: IF (Stack[-1] == 0) GOTO 0x32f; Pop(1)

0x320: PushEmpty(object, object)
0x321: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x322: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x323: Call2 0x13d7

0x324: Pop(2)
0x325: PushEmpty(object, object)
0x326: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x327: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x328: Call2 0x13de

0x329: Pop(2)
0x32a: PushEmpty(object, object)
0x32b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x32c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x32d: Call2 0x1373

0x32e: Pop(2)
0x32f: Push((int) 4915)
0x330: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x331: IF (Stack[-1] == 0) GOTO 0x341; Pop(1)

0x332: PushEmpty(object, object)
0x333: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x334: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x335: Call2 0x13d7

0x336: Pop(2)
0x337: PushEmpty(object, object)
0x338: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x339: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x33a: Call2 0x13de

0x33b: Pop(2)
0x33c: PushEmpty(object, object)
0x33d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x33e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x33f: Call2 0x1373

0x340: Pop(2)
0x341: Push((int) 33775)
0x342: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x343: IF (Stack[-1] == 0) GOTO 0x34e; Pop(1)

0x344: PushEmpty(object, object)
0x345: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x346: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x347: Call2 0x1302

0x348: Pop(2)
0x349: PushEmpty(object, object)
0x34a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x34b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x34c: Call2 0x1406

0x34d: Pop(2)
0x34e: Push((int) 33778)
0x34f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x350: IF (Stack[-1] == 0) GOTO 0x35b; Pop(1)

0x351: PushEmpty(object, object)
0x352: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x353: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x354: Call2 0x1302

0x355: Pop(2)
0x356: PushEmpty(object, object)
0x357: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x358: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x359: Call2 0x1406

0x35a: Pop(2)
0x35b: Push((int) 36804)
0x35c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x35d: IF (Stack[-1] == 0) GOTO 0x363; Pop(1)

0x35e: PushEmpty(object, object)
0x35f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x360: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x361: Call2 0x1389

0x362: Pop(2)
0x363: Push((int) 36763)
0x364: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x365: IF (Stack[-1] == 0) GOTO 0x36b; Pop(1)

0x366: PushEmpty(object, object)
0x367: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x368: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x369: Call2 0x1383

0x36a: Pop(2)
0x36b: Push((int) 33344)
0x36c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x36d: IF (Stack[-1] == 0) GOTO 0x373; Pop(1)

0x36e: PushEmpty(object, object)
0x36f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x370: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x371: Call2 0x141c

0x372: Pop(2)
0x373: Push((int) 33346)
0x374: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x375: IF (Stack[-1] == 0) GOTO 0x380; Pop(1)

0x376: PushEmpty(object, object)
0x377: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x378: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x379: Call2 0x1331

0x37a: Pop(2)
0x37b: PushEmpty(object, object)
0x37c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x37d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x37e: Call2 0x1341

0x37f: Pop(2)
0x380: Push((int) 33899)
0x381: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x382: IF (Stack[-1] == 0) GOTO 0x388; Pop(1)

0x383: PushEmpty(object, object)
0x384: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x385: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x386: Call2 0x1351

0x387: Pop(2)
0x388: Push((int) 33901)
0x389: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x38a: IF (Stack[-1] == 0) GOTO 0x39f; Pop(1)

0x38b: PushEmpty(object, object)
0x38c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x38d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x38e: Call2 0x1357

0x38f: Pop(2)
0x390: PushEmpty(object, object)
0x391: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x392: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x393: Call2 0x1326

0x394: Pop(2)
0x395: PushEmpty(object, object)
0x396: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x397: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x398: Call2 0x1362

0x399: Pop(2)
0x39a: PushEmpty(object, object)
0x39b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x39c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x39d: Call2 0x1320

0x39e: Pop(2)
0x39f: Push((int) 35136)
0x3a0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3a1: IF (Stack[-1] == 0) GOTO 0x3a7; Pop(1)

0x3a2: PushEmpty(object, object)
0x3a3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3a4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3a5: Call2 0x138f

0x3a6: Pop(2)
0x3a7: Push((int) 4899)
0x3a8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3a9: IF (Stack[-1] == 0) GOTO 0x49e; Pop(1)

0x3aa: PushEmpty(bool)
0x3ab: Stack[-1] = (bool) 0
0x3ac: PushEmpty(bool, object)
0x3ad: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3ae: Call2 0x1464

0x3af: Pop(1)
0x3b0: IF (Stack[-1] == 0) GOTO 0x3b7; Pop(1)

0x3b1: PushEmpty(bool, object)
0x3b2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3b3: Call2 0x147c

0x3b4: Pop(1)
0x3b5: IF (Stack[-1] == 0) GOTO 0x3b7; Pop(1)

0x3b6: Stack[-1] = (bool) 1
0x3b7: IF (Stack[-1] == 0) GOTO 0x3d1; Pop(1)

0x3b8: PushEmpty(object, object)
0x3b9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3ba: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3bb: Call2 0x1416

0x3bc: Pop(2)
0x3bd: PushEmpty(string)
0x3be: Stack[-1] = "Fear"
0x3bf: Call2 0x301

0x3c0: Pop(1)
0x3c1: Push((int) 504496)
0x3c2: @@ SetMessage(Stack[-1])
0x3c3: Pop(1)
0x3c4: @@ ClearReplies()
0x3c5: Pop(0)
0x3c6: Push((int) 504521)
0x3c7: Push((int) 22246)
0x3c8: Push((int) 4928)
0x3c9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ca: Pop(3)
0x3cb: Push((int) 521059)
0x3cc: Push((int) 22246)
0x3cd: Push((int) 22250)
0x3ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3cf: Pop(3)
0x3d0: Return(); Pop(0)

0x3d1: PushEmpty(bool)
0x3d2: Stack[-1] = (bool) 1
0x3d3: PushEmpty(bool)
0x3d4: Stack[-1] = (bool) 0
0x3d5: PushEmpty(bool)
0x3d6: Stack[-1] = (bool) 0
0x3d7: PushEmpty(bool, object)
0x3d8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3d9: Call2 0x15e4

0x3da: Pop(1)
0x3db: IF (Stack[-1] == 0) GOTO 0x3e2; Pop(1)

0x3dc: PushEmpty(bool, object)
0x3dd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3de: Call2 0x14d0

0x3df: Pop(1)
0x3e0: IF (Stack[-1] == 0) GOTO 0x3e2; Pop(1)

0x3e1: Stack[-1] = (bool) 1
0x3e2: IF (Stack[-1] == 0) GOTO 0x3e9; Pop(1)

0x3e3: PushEmpty(bool, object)
0x3e4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3e5: Call2 0x147c

0x3e6: Pop(1)
0x3e7: IF (Stack[-1] == 0) GOTO 0x3e9; Pop(1)

0x3e8: Stack[-1] = (bool) 1
0x3e9: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x3ea: PushEmpty(bool)
0x3eb: Stack[-1] = (bool) 0
0x3ec: PushEmpty(bool)
0x3ed: Stack[-1] = (bool) 0
0x3ee: PushEmpty(bool, object)
0x3ef: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3f0: Call2 0x15e4

0x3f1: Pop(1)
0x3f2: IF (Stack[-1] == 0) GOTO 0x3f9; Pop(1)

0x3f3: PushEmpty(bool, object)
0x3f4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3f5: Call2 0x14ac

0x3f6: Pop(1)
0x3f7: IF (Stack[-1] == 0) GOTO 0x3f9; Pop(1)

0x3f8: Stack[-1] = (bool) 1
0x3f9: IF (Stack[-1] == 0) GOTO 0x400; Pop(1)

0x3fa: PushEmpty(bool, object)
0x3fb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3fc: Call2 0x147c

0x3fd: Pop(1)
0x3fe: IF (Stack[-1] == 0) GOTO 0x400; Pop(1)

0x3ff: Stack[-1] = (bool) 1
0x400: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x401: Stack[-1] = (bool) 0
0x402: IF (Stack[-1] == 0) GOTO 0x41c; Pop(1)

0x403: PushEmpty(object, object)
0x404: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x405: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x406: Call2 0x12fc

0x407: Pop(2)
0x408: PushEmpty(string)
0x409: Stack[-1] = "Neutral"
0x40a: Call2 0x301

0x40b: Pop(1)
0x40c: Push((int) 532343)
0x40d: @@ SetMessage(Stack[-1])
0x40e: Pop(1)
0x40f: @@ ClearReplies()
0x410: Pop(0)
0x411: Push((int) 533604)
0x412: Push((int) 35125)
0x413: Push((int) 35124)
0x414: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x415: Pop(3)
0x416: Push((int) 533608)
0x417: Push((int) 35129)
0x418: Push((int) 35128)
0x419: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x41a: Pop(3)
0x41b: Return(); Pop(0)

0x41c: PushEmpty(string)
0x41d: Stack[-1] = "Neutral"
0x41e: Call2 0x301

0x41f: Pop(1)
0x420: Push((int) 521052)
0x421: @@ SetMessage(Stack[-1])
0x422: Pop(1)
0x423: @@ ClearReplies()
0x424: Pop(0)
0x425: PushEmpty(bool)
0x426: Stack[-1] = (bool) 0
0x427: PushEmpty(bool, object)
0x428: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x429: Call2 0x156c

0x42a: Pop(1)
0x42b: IF (Stack[-1] == 0) GOTO 0x432; Pop(1)

0x42c: PushEmpty(bool, object)
0x42d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x42e: Call2 0x14e8

0x42f: Pop(1)
0x430: IF (Stack[-1] == 0) GOTO 0x432; Pop(1)

0x431: Stack[-1] = (bool) 1
0x432: IF (Stack[-1] == 0) GOTO 0x438; Pop(1)

0x433: Push((int) 535143)
0x434: Push((int) 36805)
0x435: Push((int) 36804)
0x436: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x437: Pop(3)
0x438: PushEmpty(bool, object)
0x439: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x43a: Call2 0x14dc

0x43b: Pop(1)
0x43c: IF (Stack[-1] == 0) GOTO 0x442; Pop(1)

0x43d: Push((int) 535107)
0x43e: Push((int) 36764)
0x43f: Push((int) 36763)
0x440: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x441: Pop(3)
0x442: PushEmpty(bool)
0x443: Stack[-1] = (bool) 0
0x444: PushEmpty(bool)
0x445: Stack[-1] = (bool) 0
0x446: PushEmpty(bool, object)
0x447: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x448: Call2 0x14b8

0x449: Pop(1)
0x44a: IF (Stack[-1] == 0) GOTO 0x451; Pop(1)

0x44b: PushEmpty(bool, object)
0x44c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x44d: Call2 0x150c

0x44e: Pop(1)
0x44f: IF (Stack[-1] == 0) GOTO 0x451; Pop(1)

0x450: Stack[-1] = (bool) 1
0x451: IF (Stack[-1] == 0) GOTO 0x458; Pop(1)

0x452: PushEmpty(bool, object)
0x453: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x454: Call2 0x1488

0x455: Pop(1)
0x456: IF (Stack[-1] == 0) GOTO 0x458; Pop(1)

0x457: Stack[-1] = (bool) 1
0x458: IF (Stack[-1] == 0) GOTO 0x45e; Pop(1)

0x459: Push((int) 531940)
0x45a: Push((int) 33345)
0x45b: Push((int) 33344)
0x45c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x45d: Pop(3)
0x45e: PushEmpty(bool)
0x45f: Stack[-1] = (bool) 0
0x460: PushEmpty(bool)
0x461: Stack[-1] = (bool) 0
0x462: PushEmpty(bool, object)
0x463: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x464: Call2 0x1494

0x465: Pop(1)
0x466: IF (Stack[-1] == 0) GOTO 0x46d; Pop(1)

0x467: PushEmpty(bool, object)
0x468: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x469: Call2 0x14c4

0x46a: Pop(1)
0x46b: IF (Stack[-1] == 0) GOTO 0x46d; Pop(1)

0x46c: Stack[-1] = (bool) 1
0x46d: IF (Stack[-1] == 0) GOTO 0x474; Pop(1)

0x46e: PushEmpty(bool, object)
0x46f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x470: Call2 0x1488

0x471: Pop(1)
0x472: IF (Stack[-1] == 0) GOTO 0x474; Pop(1)

0x473: Stack[-1] = (bool) 1
0x474: IF (Stack[-1] == 0) GOTO 0x47a; Pop(1)

0x475: Push((int) 532458)
0x476: Push((int) 33900)
0x477: Push((int) 33899)
0x478: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x479: Pop(3)
0x47a: PushEmpty(bool)
0x47b: Stack[-1] = (bool) 0
0x47c: PushEmpty(bool, object)
0x47d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x47e: Call2 0x14f4

0x47f: Pop(1)
0x480: IF (Stack[-1] == 0) GOTO 0x487; Pop(1)

0x481: PushEmpty(bool, object)
0x482: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x483: Call2 0x14a0

0x484: Pop(1)
0x485: IF (Stack[-1] == 0) GOTO 0x487; Pop(1)

0x486: Stack[-1] = (bool) 1
0x487: IF (Stack[-1] == 0) GOTO 0x48d; Pop(1)

0x488: Push((int) 533614)
0x489: Push((int) 35137)
0x48a: Push((int) 35136)
0x48b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x48c: Pop(3)
0x48d: PushEmpty(bool, object)
0x48e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x48f: Call2 0x1470

0x490: Pop(1)
0x491: Pop(1); Push((bool) Stack[-1] == 0)
0x492: IF (Stack[-1] == 0) GOTO 0x498; Pop(1)

0x493: Push((int) 521053)
0x494: Push((int) -1)
0x495: Push((int) 22244)
0x496: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x497: Pop(3)
0x498: Push((int) 521054)
0x499: Push((int) -1)
0x49a: Push((int) 22245)
0x49b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x49c: Pop(3)
0x49d: Return(); Pop(0)

0x49e: Push((int) 35137)
0x49f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4a0: IF (Stack[-1] == 0) GOTO 0x4b5; Pop(1)

0x4a1: PushEmpty(string)
0x4a2: Stack[-1] = "Modesty"
0x4a3: Call2 0x301

0x4a4: Pop(1)
0x4a5: Push((int) 533615)
0x4a6: @@ SetMessage(Stack[-1])
0x4a7: Pop(1)
0x4a8: @@ ClearReplies()
0x4a9: Pop(0)
0x4aa: Push((int) 533616)
0x4ab: Push((int) 35140)
0x4ac: Push((int) 35138)
0x4ad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ae: Pop(3)
0x4af: Push((int) 533617)
0x4b0: Push((int) -1)
0x4b1: Push((int) 35139)
0x4b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b3: Pop(3)
0x4b4: Return(); Pop(0)

0x4b5: Push((int) 35140)
0x4b6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4b7: IF (Stack[-1] == 0) GOTO 0x4c7; Pop(1)

0x4b8: PushEmpty(string)
0x4b9: Stack[-1] = "Modesty"
0x4ba: Call2 0x301

0x4bb: Pop(1)
0x4bc: Push((int) 533618)
0x4bd: @@ SetMessage(Stack[-1])
0x4be: Pop(1)
0x4bf: @@ ClearReplies()
0x4c0: Pop(0)
0x4c1: Push((int) 533619)
0x4c2: Push((int) 35142)
0x4c3: Push((int) 35141)
0x4c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4c5: Pop(3)
0x4c6: Return(); Pop(0)

0x4c7: Push((int) 35142)
0x4c8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4c9: IF (Stack[-1] == 0) GOTO 0x4de; Pop(1)

0x4ca: PushEmpty(string)
0x4cb: Stack[-1] = "Modesty"
0x4cc: Call2 0x301

0x4cd: Pop(1)
0x4ce: Push((int) 533620)
0x4cf: @@ SetMessage(Stack[-1])
0x4d0: Pop(1)
0x4d1: @@ ClearReplies()
0x4d2: Pop(0)
0x4d3: Push((int) 533621)
0x4d4: Push((int) 35144)
0x4d5: Push((int) 35143)
0x4d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4d7: Pop(3)
0x4d8: Push((int) 533624)
0x4d9: Push((int) 35147)
0x4da: Push((int) 35146)
0x4db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4dc: Pop(3)
0x4dd: Return(); Pop(0)

0x4de: Push((int) 35147)
0x4df: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4e0: IF (Stack[-1] == 0) GOTO 0x4f5; Pop(1)

0x4e1: PushEmpty(string)
0x4e2: Stack[-1] = "Love"
0x4e3: Call2 0x301

0x4e4: Pop(1)
0x4e5: Push((int) 533625)
0x4e6: @@ SetMessage(Stack[-1])
0x4e7: Pop(1)
0x4e8: @@ ClearReplies()
0x4e9: Pop(0)
0x4ea: Push((int) 533626)
0x4eb: Push((int) 35150)
0x4ec: Push((int) 35148)
0x4ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ee: Pop(3)
0x4ef: Push((int) 533627)
0x4f0: Push((int) -1)
0x4f1: Push((int) 35149)
0x4f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4f3: Pop(3)
0x4f4: Return(); Pop(0)

0x4f5: Push((int) 35144)
0x4f6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4f7: IF (Stack[-1] == 0) GOTO 0x50c; Pop(1)

0x4f8: PushEmpty(string)
0x4f9: Stack[-1] = "Love"
0x4fa: Call2 0x301

0x4fb: Pop(1)
0x4fc: Push((int) 533622)
0x4fd: @@ SetMessage(Stack[-1])
0x4fe: Pop(1)
0x4ff: @@ ClearReplies()
0x500: Pop(0)
0x501: Push((int) 533623)
0x502: Push((int) 35150)
0x503: Push((int) 35145)
0x504: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x505: Pop(3)
0x506: Push((int) 533637)
0x507: Push((int) -1)
0x508: Push((int) 35161)
0x509: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x50a: Pop(3)
0x50b: Return(); Pop(0)

0x50c: Push((int) 35150)
0x50d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x50e: IF (Stack[-1] == 0) GOTO 0x523; Pop(1)

0x50f: PushEmpty(string)
0x510: Stack[-1] = "Love"
0x511: Call2 0x301

0x512: Pop(1)
0x513: Push((int) 533628)
0x514: @@ SetMessage(Stack[-1])
0x515: Pop(1)
0x516: @@ ClearReplies()
0x517: Pop(0)
0x518: Push((int) 533629)
0x519: Push((int) 35154)
0x51a: Push((int) 35152)
0x51b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x51c: Pop(3)
0x51d: Push((int) 533630)
0x51e: Push((int) 35157)
0x51f: Push((int) 35153)
0x520: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x521: Pop(3)
0x522: Return(); Pop(0)

0x523: Push((int) 35154)
0x524: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x525: IF (Stack[-1] == 0) GOTO 0x53a; Pop(1)

0x526: PushEmpty(string)
0x527: Stack[-1] = "Love"
0x528: Call2 0x301

0x529: Pop(1)
0x52a: Push((int) 533631)
0x52b: @@ SetMessage(Stack[-1])
0x52c: Pop(1)
0x52d: @@ ClearReplies()
0x52e: Pop(0)
0x52f: Push((int) 533632)
0x530: Push((int) 35157)
0x531: Push((int) 35155)
0x532: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x533: Pop(3)
0x534: Push((int) 533633)
0x535: Push((int) -1)
0x536: Push((int) 35156)
0x537: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x538: Pop(3)
0x539: Return(); Pop(0)

0x53a: Push((int) 35157)
0x53b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x53c: IF (Stack[-1] == 0) GOTO 0x551; Pop(1)

0x53d: PushEmpty(string)
0x53e: Stack[-1] = "Neutral"
0x53f: Call2 0x301

0x540: Pop(1)
0x541: Push((int) 533634)
0x542: @@ SetMessage(Stack[-1])
0x543: Pop(1)
0x544: @@ ClearReplies()
0x545: Pop(0)
0x546: Push((int) 533635)
0x547: Push((int) -1)
0x548: Push((int) 35158)
0x549: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x54a: Pop(3)
0x54b: Push((int) 533636)
0x54c: Push((int) -1)
0x54d: Push((int) 35159)
0x54e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x54f: Pop(3)
0x550: Return(); Pop(0)

0x551: Push((int) 33900)
0x552: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x553: IF (Stack[-1] == 0) GOTO 0x563; Pop(1)

0x554: PushEmpty(string)
0x555: Stack[-1] = "Neutral"
0x556: Call2 0x301

0x557: Pop(1)
0x558: Push((int) 532459)
0x559: @@ SetMessage(Stack[-1])
0x55a: Pop(1)
0x55b: @@ ClearReplies()
0x55c: Pop(0)
0x55d: Push((int) 532460)
0x55e: Push((int) -1)
0x55f: Push((int) 33901)
0x560: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x561: Pop(3)
0x562: Return(); Pop(0)

0x563: Push((int) 33345)
0x564: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x565: IF (Stack[-1] == 0) GOTO 0x575; Pop(1)

0x566: PushEmpty(string)
0x567: Stack[-1] = "Modesty"
0x568: Call2 0x301

0x569: Pop(1)
0x56a: Push((int) 531941)
0x56b: @@ SetMessage(Stack[-1])
0x56c: Pop(1)
0x56d: @@ ClearReplies()
0x56e: Pop(0)
0x56f: Push((int) 531942)
0x570: Push((int) -1)
0x571: Push((int) 33346)
0x572: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x573: Pop(3)
0x574: Return(); Pop(0)

0x575: Push((int) 36764)
0x576: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x577: IF (Stack[-1] == 0) GOTO 0x591; Pop(1)

0x578: PushEmpty(string)
0x579: Stack[-1] = "Love"
0x57a: Call2 0x301

0x57b: Pop(1)
0x57c: Push((int) 535108)
0x57d: @@ SetMessage(Stack[-1])
0x57e: Pop(1)
0x57f: @@ ClearReplies()
0x580: Pop(0)
0x581: Push((int) 535109)
0x582: Push((int) 36766)
0x583: Push((int) 36765)
0x584: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x585: Pop(3)
0x586: Push((int) 535120)
0x587: Push((int) 36766)
0x588: Push((int) 36776)
0x589: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x58a: Pop(3)
0x58b: Push((int) 535124)
0x58c: Push((int) 36768)
0x58d: Push((int) 36782)
0x58e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x58f: Pop(3)
0x590: Return(); Pop(0)

0x591: Push((int) 36766)
0x592: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x593: IF (Stack[-1] == 0) GOTO 0x5a8; Pop(1)

0x594: PushEmpty(string)
0x595: Stack[-1] = "Love"
0x596: Call2 0x301

0x597: Pop(1)
0x598: Push((int) 535110)
0x599: @@ SetMessage(Stack[-1])
0x59a: Pop(1)
0x59b: @@ ClearReplies()
0x59c: Pop(0)
0x59d: Push((int) 535111)
0x59e: Push((int) 36768)
0x59f: Push((int) 36767)
0x5a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a1: Pop(3)
0x5a2: Push((int) 535122)
0x5a3: Push((int) 36774)
0x5a4: Push((int) 36778)
0x5a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a6: Pop(3)
0x5a7: Return(); Pop(0)

0x5a8: Push((int) 36774)
0x5a9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5aa: IF (Stack[-1] == 0) GOTO 0x5bf; Pop(1)

0x5ab: PushEmpty(string)
0x5ac: Stack[-1] = "Love"
0x5ad: Call2 0x301

0x5ae: Pop(1)
0x5af: Push((int) 535118)
0x5b0: @@ SetMessage(Stack[-1])
0x5b1: Pop(1)
0x5b2: @@ ClearReplies()
0x5b3: Pop(0)
0x5b4: Push((int) 535119)
0x5b5: Push((int) 36768)
0x5b6: Push((int) 36775)
0x5b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5b8: Pop(3)
0x5b9: Push((int) 535123)
0x5ba: Push((int) -1)
0x5bb: Push((int) 36780)
0x5bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5bd: Pop(3)
0x5be: Return(); Pop(0)

0x5bf: Push((int) 36768)
0x5c0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5c1: IF (Stack[-1] == 0) GOTO 0x5d1; Pop(1)

0x5c2: PushEmpty(string)
0x5c3: Stack[-1] = "Love"
0x5c4: Call2 0x301

0x5c5: Pop(1)
0x5c6: Push((int) 535112)
0x5c7: @@ SetMessage(Stack[-1])
0x5c8: Pop(1)
0x5c9: @@ ClearReplies()
0x5ca: Pop(0)
0x5cb: Push((int) 535113)
0x5cc: Push((int) 36770)
0x5cd: Push((int) 36769)
0x5ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5cf: Pop(3)
0x5d0: Return(); Pop(0)

0x5d1: Push((int) 36770)
0x5d2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5d3: IF (Stack[-1] == 0) GOTO 0x5e3; Pop(1)

0x5d4: PushEmpty(string)
0x5d5: Stack[-1] = "Modesty"
0x5d6: Call2 0x301

0x5d7: Pop(1)
0x5d8: Push((int) 535114)
0x5d9: @@ SetMessage(Stack[-1])
0x5da: Pop(1)
0x5db: @@ ClearReplies()
0x5dc: Pop(0)
0x5dd: Push((int) 535115)
0x5de: Push((int) 36772)
0x5df: Push((int) 36771)
0x5e0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5e1: Pop(3)
0x5e2: Return(); Pop(0)

0x5e3: Push((int) 36772)
0x5e4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5e5: IF (Stack[-1] == 0) GOTO 0x5fa; Pop(1)

0x5e6: PushEmpty(string)
0x5e7: Stack[-1] = "Modesty"
0x5e8: Call2 0x301

0x5e9: Pop(1)
0x5ea: Push((int) 535116)
0x5eb: @@ SetMessage(Stack[-1])
0x5ec: Pop(1)
0x5ed: @@ ClearReplies()
0x5ee: Pop(0)
0x5ef: Push((int) 535117)
0x5f0: Push((int) -1)
0x5f1: Push((int) 36773)
0x5f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5f3: Pop(3)
0x5f4: Push((int) 535121)
0x5f5: Push((int) -1)
0x5f6: Push((int) 36777)
0x5f7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5f8: Pop(3)
0x5f9: Return(); Pop(0)

0x5fa: Push((int) 36805)
0x5fb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5fc: IF (Stack[-1] == 0) GOTO 0x60c; Pop(1)

0x5fd: PushEmpty(string)
0x5fe: Stack[-1] = "Love"
0x5ff: Call2 0x301

0x600: Pop(1)
0x601: Push((int) 535144)
0x602: @@ SetMessage(Stack[-1])
0x603: Pop(1)
0x604: @@ ClearReplies()
0x605: Pop(0)
0x606: Push((int) 535145)
0x607: Push((int) 36807)
0x608: Push((int) 36806)
0x609: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x60a: Pop(3)
0x60b: Return(); Pop(0)

0x60c: Push((int) 36807)
0x60d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x60e: IF (Stack[-1] == 0) GOTO 0x623; Pop(1)

0x60f: PushEmpty(string)
0x610: Stack[-1] = "Love"
0x611: Call2 0x301

0x612: Pop(1)
0x613: Push((int) 535146)
0x614: @@ SetMessage(Stack[-1])
0x615: Pop(1)
0x616: @@ ClearReplies()
0x617: Pop(0)
0x618: Push((int) 535147)
0x619: Push((int) 36809)
0x61a: Push((int) 36808)
0x61b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x61c: Pop(3)
0x61d: Push((int) 535152)
0x61e: Push((int) 36814)
0x61f: Push((int) 36813)
0x620: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x621: Pop(3)
0x622: Return(); Pop(0)

0x623: Push((int) 36814)
0x624: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x625: IF (Stack[-1] == 0) GOTO 0x63a; Pop(1)

0x626: PushEmpty(string)
0x627: Stack[-1] = "Sexy"
0x628: Call2 0x301

0x629: Pop(1)
0x62a: Push((int) 535153)
0x62b: @@ SetMessage(Stack[-1])
0x62c: Pop(1)
0x62d: @@ ClearReplies()
0x62e: Pop(0)
0x62f: Push((int) 535154)
0x630: Push((int) 36816)
0x631: Push((int) 36815)
0x632: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x633: Pop(3)
0x634: Push((int) 535156)
0x635: Push((int) 36816)
0x636: Push((int) 36817)
0x637: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x638: Pop(3)
0x639: Return(); Pop(0)

0x63a: Push((int) 36816)
0x63b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x63c: IF (Stack[-1] == 0) GOTO 0x64c; Pop(1)

0x63d: PushEmpty(string)
0x63e: Stack[-1] = "Sexy"
0x63f: Call2 0x301

0x640: Pop(1)
0x641: Push((int) 535155)
0x642: @@ SetMessage(Stack[-1])
0x643: Pop(1)
0x644: @@ ClearReplies()
0x645: Pop(0)
0x646: Push((int) 535157)
0x647: Push((int) 36811)
0x648: Push((int) 36819)
0x649: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64a: Pop(3)
0x64b: Return(); Pop(0)

0x64c: Push((int) 36809)
0x64d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x64e: IF (Stack[-1] == 0) GOTO 0x65e; Pop(1)

0x64f: PushEmpty(string)
0x650: Stack[-1] = "Neutral"
0x651: Call2 0x301

0x652: Pop(1)
0x653: Push((int) 535148)
0x654: @@ SetMessage(Stack[-1])
0x655: Pop(1)
0x656: @@ ClearReplies()
0x657: Pop(0)
0x658: Push((int) 535149)
0x659: Push((int) 36811)
0x65a: Push((int) 36810)
0x65b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x65c: Pop(3)
0x65d: Return(); Pop(0)

0x65e: Push((int) 36811)
0x65f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x660: IF (Stack[-1] == 0) GOTO 0x675; Pop(1)

0x661: PushEmpty(string)
0x662: Stack[-1] = "Neutral"
0x663: Call2 0x301

0x664: Pop(1)
0x665: Push((int) 535150)
0x666: @@ SetMessage(Stack[-1])
0x667: Pop(1)
0x668: @@ ClearReplies()
0x669: Pop(0)
0x66a: Push((int) 535151)
0x66b: Push((int) 36821)
0x66c: Push((int) 36812)
0x66d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x66e: Pop(3)
0x66f: Push((int) 535166)
0x670: Push((int) 36831)
0x671: Push((int) 36830)
0x672: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x673: Pop(3)
0x674: Return(); Pop(0)

0x675: Push((int) 36831)
0x676: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x677: IF (Stack[-1] == 0) GOTO 0x683; Pop(1)

0x678: Push((int) 535167)
0x679: @@ SetMessage(Stack[-1])
0x67a: Pop(1)
0x67b: @@ ClearReplies()
0x67c: Pop(0)
0x67d: Push((int) 535168)
0x67e: Push((int) 36823)
0x67f: Push((int) 36832)
0x680: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x681: Pop(3)
0x682: Return(); Pop(0)

0x683: Push((int) 36821)
0x684: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x685: IF (Stack[-1] == 0) GOTO 0x69a; Pop(1)

0x686: PushEmpty(string)
0x687: Stack[-1] = "Modesty"
0x688: Call2 0x301

0x689: Pop(1)
0x68a: Push((int) 535158)
0x68b: @@ SetMessage(Stack[-1])
0x68c: Pop(1)
0x68d: @@ ClearReplies()
0x68e: Pop(0)
0x68f: Push((int) 535159)
0x690: Push((int) 36823)
0x691: Push((int) 36822)
0x692: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x693: Pop(3)
0x694: Push((int) 535165)
0x695: Push((int) -1)
0x696: Push((int) 36828)
0x697: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x698: Pop(3)
0x699: Return(); Pop(0)

0x69a: Push((int) 36823)
0x69b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x69c: IF (Stack[-1] == 0) GOTO 0x6ac; Pop(1)

0x69d: PushEmpty(string)
0x69e: Stack[-1] = "Modesty"
0x69f: Call2 0x301

0x6a0: Pop(1)
0x6a1: Push((int) 535160)
0x6a2: @@ SetMessage(Stack[-1])
0x6a3: Pop(1)
0x6a4: @@ ClearReplies()
0x6a5: Pop(0)
0x6a6: Push((int) 535161)
0x6a7: Push((int) 36825)
0x6a8: Push((int) 36824)
0x6a9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6aa: Pop(3)
0x6ab: Return(); Pop(0)

0x6ac: Push((int) 36825)
0x6ad: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6ae: IF (Stack[-1] == 0) GOTO 0x6c3; Pop(1)

0x6af: PushEmpty(string)
0x6b0: Stack[-1] = "Modesty"
0x6b1: Call2 0x301

0x6b2: Pop(1)
0x6b3: Push((int) 535162)
0x6b4: @@ SetMessage(Stack[-1])
0x6b5: Pop(1)
0x6b6: @@ ClearReplies()
0x6b7: Pop(0)
0x6b8: Push((int) 535163)
0x6b9: Push((int) -1)
0x6ba: Push((int) 36826)
0x6bb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6bc: Pop(3)
0x6bd: Push((int) 535164)
0x6be: Push((int) -1)
0x6bf: Push((int) 36827)
0x6c0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c1: Pop(3)
0x6c2: Return(); Pop(0)

0x6c3: Push((int) 35129)
0x6c4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6c5: IF (Stack[-1] == 0) GOTO 0x6d5; Pop(1)

0x6c6: PushEmpty(string)
0x6c7: Stack[-1] = "Neutral"
0x6c8: Call2 0x301

0x6c9: Pop(1)
0x6ca: Push((int) 533609)
0x6cb: @@ SetMessage(Stack[-1])
0x6cc: Pop(1)
0x6cd: @@ ClearReplies()
0x6ce: Pop(0)
0x6cf: Push((int) 533610)
0x6d0: Push((int) 35125)
0x6d1: Push((int) 35130)
0x6d2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6d3: Pop(3)
0x6d4: Return(); Pop(0)

0x6d5: Push((int) 35125)
0x6d6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6d7: IF (Stack[-1] == 0) GOTO 0x6ec; Pop(1)

0x6d8: PushEmpty(string)
0x6d9: Stack[-1] = "Neutral"
0x6da: Call2 0x301

0x6db: Pop(1)
0x6dc: Push((int) 533605)
0x6dd: @@ SetMessage(Stack[-1])
0x6de: Pop(1)
0x6df: @@ ClearReplies()
0x6e0: Pop(0)
0x6e1: Push((int) 533606)
0x6e2: Push((int) 35127)
0x6e3: Push((int) 35126)
0x6e4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e5: Pop(3)
0x6e6: Push((int) 533611)
0x6e7: Push((int) 35133)
0x6e8: Push((int) 35132)
0x6e9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ea: Pop(3)
0x6eb: Return(); Pop(0)

0x6ec: Push((int) 35133)
0x6ed: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6ee: IF (Stack[-1] == 0) GOTO 0x6fe; Pop(1)

0x6ef: PushEmpty(string)
0x6f0: Stack[-1] = "Modesty"
0x6f1: Call2 0x301

0x6f2: Pop(1)
0x6f3: Push((int) 533612)
0x6f4: @@ SetMessage(Stack[-1])
0x6f5: Pop(1)
0x6f6: @@ ClearReplies()
0x6f7: Pop(0)
0x6f8: Push((int) 533613)
0x6f9: Push((int) 35127)
0x6fa: Push((int) 35134)
0x6fb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6fc: Pop(3)
0x6fd: Return(); Pop(0)

0x6fe: Push((int) 35127)
0x6ff: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x700: IF (Stack[-1] == 0) GOTO 0x710; Pop(1)

0x701: PushEmpty(string)
0x702: Stack[-1] = "Modesty"
0x703: Call2 0x301

0x704: Pop(1)
0x705: Push((int) 533607)
0x706: @@ SetMessage(Stack[-1])
0x707: Pop(1)
0x708: @@ ClearReplies()
0x709: Pop(0)
0x70a: Push((int) 532344)
0x70b: Push((int) 33774)
0x70c: Push((int) 33773)
0x70d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x70e: Pop(3)
0x70f: Return(); Pop(0)

0x710: Push((int) 33774)
0x711: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x712: IF (Stack[-1] == 0) GOTO 0x727; Pop(1)

0x713: PushEmpty(string)
0x714: Stack[-1] = "Modesty"
0x715: Call2 0x301

0x716: Pop(1)
0x717: Push((int) 532345)
0x718: @@ SetMessage(Stack[-1])
0x719: Pop(1)
0x71a: @@ ClearReplies()
0x71b: Pop(0)
0x71c: Push((int) 532346)
0x71d: Push((int) -1)
0x71e: Push((int) 33775)
0x71f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x720: Pop(3)
0x721: Push((int) 532347)
0x722: Push((int) 33777)
0x723: Push((int) 33776)
0x724: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x725: Pop(3)
0x726: Return(); Pop(0)

0x727: Push((int) 33777)
0x728: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x729: IF (Stack[-1] == 0) GOTO 0x73e; Pop(1)

0x72a: PushEmpty(string)
0x72b: Stack[-1] = "Fear"
0x72c: Call2 0x301

0x72d: Pop(1)
0x72e: Push((int) 532348)
0x72f: @@ SetMessage(Stack[-1])
0x730: Pop(1)
0x731: @@ ClearReplies()
0x732: Pop(0)
0x733: Push((int) 532349)
0x734: Push((int) -1)
0x735: Push((int) 33778)
0x736: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x737: Pop(3)
0x738: Push((int) 532350)
0x739: Push((int) -1)
0x73a: Push((int) 33779)
0x73b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73c: Pop(3)
0x73d: Return(); Pop(0)

0x73e: Push((int) 22246)
0x73f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x740: IF (Stack[-1] == 0) GOTO 0x755; Pop(1)

0x741: PushEmpty(string)
0x742: Stack[-1] = "Fear"
0x743: Call2 0x301

0x744: Pop(1)
0x745: Push((int) 521055)
0x746: @@ SetMessage(Stack[-1])
0x747: Pop(1)
0x748: @@ ClearReplies()
0x749: Pop(0)
0x74a: Push((int) 521056)
0x74b: Push((int) 22248)
0x74c: Push((int) 22247)
0x74d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x74e: Pop(3)
0x74f: Push((int) 521060)
0x750: Push((int) 22253)
0x751: Push((int) 22251)
0x752: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x753: Pop(3)
0x754: Return(); Pop(0)

0x755: Push((int) 22253)
0x756: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x757: IF (Stack[-1] == 0) GOTO 0x767; Pop(1)

0x758: PushEmpty(string)
0x759: Stack[-1] = "Love"
0x75a: Call2 0x301

0x75b: Pop(1)
0x75c: Push((int) 521061)
0x75d: @@ SetMessage(Stack[-1])
0x75e: Pop(1)
0x75f: @@ ClearReplies()
0x760: Pop(0)
0x761: Push((int) 521062)
0x762: Push((int) 4905)
0x763: Push((int) 22254)
0x764: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x765: Pop(3)
0x766: Return(); Pop(0)

0x767: Push((int) 22248)
0x768: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x769: IF (Stack[-1] == 0) GOTO 0x77e; Pop(1)

0x76a: PushEmpty(string)
0x76b: Stack[-1] = "Love"
0x76c: Call2 0x301

0x76d: Pop(1)
0x76e: Push((int) 521057)
0x76f: @@ SetMessage(Stack[-1])
0x770: Pop(1)
0x771: @@ ClearReplies()
0x772: Pop(0)
0x773: Push((int) 521058)
0x774: Push((int) 4905)
0x775: Push((int) 22249)
0x776: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x777: Pop(3)
0x778: Push((int) 504517)
0x779: Push((int) 4923)
0x77a: Push((int) 4922)
0x77b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x77c: Pop(3)
0x77d: Return(); Pop(0)

0x77e: Push((int) 4905)
0x77f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x780: IF (Stack[-1] == 0) GOTO 0x795; Pop(1)

0x781: PushEmpty(string)
0x782: Stack[-1] = "Sexy"
0x783: Call2 0x301

0x784: Pop(1)
0x785: Push((int) 504502)
0x786: @@ SetMessage(Stack[-1])
0x787: Pop(1)
0x788: @@ ClearReplies()
0x789: Pop(0)
0x78a: Push((int) 504516)
0x78b: Push((int) 4907)
0x78c: Push((int) 4920)
0x78d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x78e: Pop(3)
0x78f: Push((int) 504515)
0x790: Push((int) 4923)
0x791: Push((int) 4918)
0x792: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x793: Pop(3)
0x794: Return(); Pop(0)

0x795: Push((int) 4923)
0x796: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x797: IF (Stack[-1] == 0) GOTO 0x7ac; Pop(1)

0x798: PushEmpty(string)
0x799: Stack[-1] = "Sexy"
0x79a: Call2 0x301

0x79b: Pop(1)
0x79c: Push((int) 504518)
0x79d: @@ SetMessage(Stack[-1])
0x79e: Pop(1)
0x79f: @@ ClearReplies()
0x7a0: Pop(0)
0x7a1: Push((int) 504519)
0x7a2: Push((int) 4909)
0x7a3: Push((int) 4924)
0x7a4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7a5: Pop(3)
0x7a6: Push((int) 533368)
0x7a7: Push((int) 4907)
0x7a8: Push((int) 34866)
0x7a9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7aa: Pop(3)
0x7ab: Return(); Pop(0)

0x7ac: Push((int) 4907)
0x7ad: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7ae: IF (Stack[-1] == 0) GOTO 0x7be; Pop(1)

0x7af: PushEmpty(string)
0x7b0: Stack[-1] = "Sexy"
0x7b1: Call2 0x301

0x7b2: Pop(1)
0x7b3: Push((int) 504504)
0x7b4: @@ SetMessage(Stack[-1])
0x7b5: Pop(1)
0x7b6: @@ ClearReplies()
0x7b7: Pop(0)
0x7b8: Push((int) 504505)
0x7b9: Push((int) 4909)
0x7ba: Push((int) 4908)
0x7bb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7bc: Pop(3)
0x7bd: Return(); Pop(0)

0x7be: Push((int) 4909)
0x7bf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7c0: IF (Stack[-1] == 0) GOTO 0x7d5; Pop(1)

0x7c1: PushEmpty(string)
0x7c2: Stack[-1] = "Modesty"
0x7c3: Call2 0x301

0x7c4: Pop(1)
0x7c5: Push((int) 504506)
0x7c6: @@ SetMessage(Stack[-1])
0x7c7: Pop(1)
0x7c8: @@ ClearReplies()
0x7c9: Pop(0)
0x7ca: Push((int) 504507)
0x7cb: Push((int) 4911)
0x7cc: Push((int) 4910)
0x7cd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ce: Pop(3)
0x7cf: Push((int) 504514)
0x7d0: Push((int) 4911)
0x7d1: Push((int) 4917)
0x7d2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d3: Pop(3)
0x7d4: Return(); Pop(0)

0x7d5: Push((int) 4911)
0x7d6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7d7: IF (Stack[-1] == 0) GOTO 0x7ec; Pop(1)

0x7d8: PushEmpty(string)
0x7d9: Stack[-1] = "Modesty"
0x7da: Call2 0x301

0x7db: Pop(1)
0x7dc: Push((int) 504508)
0x7dd: @@ SetMessage(Stack[-1])
0x7de: Pop(1)
0x7df: @@ ClearReplies()
0x7e0: Pop(0)
0x7e1: Push((int) 504509)
0x7e2: Push((int) 22257)
0x7e3: Push((int) 4912)
0x7e4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7e5: Pop(3)
0x7e6: Push((int) 504513)
0x7e7: Push((int) 22257)
0x7e8: Push((int) 4916)
0x7e9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ea: Pop(3)
0x7eb: Return(); Pop(0)

0x7ec: Push((int) 22257)
0x7ed: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7ee: IF (Stack[-1] == 0) GOTO 0x803; Pop(1)

0x7ef: PushEmpty(string)
0x7f0: Stack[-1] = "Sexy"
0x7f1: Call2 0x301

0x7f2: Pop(1)
0x7f3: Push((int) 521063)
0x7f4: @@ SetMessage(Stack[-1])
0x7f5: Pop(1)
0x7f6: @@ ClearReplies()
0x7f7: Pop(0)
0x7f8: Push((int) 521064)
0x7f9: Push((int) 22259)
0x7fa: Push((int) 22258)
0x7fb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7fc: Pop(3)
0x7fd: Push((int) 521069)
0x7fe: Push((int) 4913)
0x7ff: Push((int) 22264)
0x800: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x801: Pop(3)
0x802: Return(); Pop(0)

0x803: Push((int) 22259)
0x804: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x805: IF (Stack[-1] == 0) GOTO 0x815; Pop(1)

0x806: PushEmpty(string)
0x807: Stack[-1] = "Sexy"
0x808: Call2 0x301

0x809: Pop(1)
0x80a: Push((int) 521065)
0x80b: @@ SetMessage(Stack[-1])
0x80c: Pop(1)
0x80d: @@ ClearReplies()
0x80e: Pop(0)
0x80f: Push((int) 521066)
0x810: Push((int) 22262)
0x811: Push((int) 22260)
0x812: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x813: Pop(3)
0x814: Return(); Pop(0)

0x815: Push((int) 22262)
0x816: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x817: IF (Stack[-1] == 0) GOTO 0x827; Pop(1)

0x818: PushEmpty(string)
0x819: Stack[-1] = "Sexy"
0x81a: Call2 0x301

0x81b: Pop(1)
0x81c: Push((int) 521067)
0x81d: @@ SetMessage(Stack[-1])
0x81e: Pop(1)
0x81f: @@ ClearReplies()
0x820: Pop(0)
0x821: Push((int) 521068)
0x822: Push((int) 4913)
0x823: Push((int) 22263)
0x824: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x825: Pop(3)
0x826: Return(); Pop(0)

0x827: Push((int) 4913)
0x828: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x829: IF (Stack[-1] == 0) GOTO 0x83e; Pop(1)

0x82a: PushEmpty(string)
0x82b: Stack[-1] = "Sexy"
0x82c: Call2 0x301

0x82d: Pop(1)
0x82e: Push((int) 504510)
0x82f: @@ SetMessage(Stack[-1])
0x830: Pop(1)
0x831: @@ ClearReplies()
0x832: Pop(0)
0x833: Push((int) 504497)
0x834: Push((int) -1)
0x835: Push((int) 4900)
0x836: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x837: Pop(3)
0x838: Push((int) 504512)
0x839: Push((int) -1)
0x83a: Push((int) 4915)
0x83b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x83c: Pop(3)
0x83d: Return(); Pop(0)

0x83e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x83f: PushEmpty(bool)
0x840: Call2 0x12fa

0x841: Pop(0)
0x842: IF (Stack[-1] == 0) GOTO 0x846; Pop(1)

0x843: @ lshStopAnimation()
0x844: Pop(0)
0x845: GOTO 0x848

0x846: @ StopAnimation()
0x847: Pop(0)
0x848: Return(); Pop(0)

0x849: GOTO 0x318

0x84a: Return(); Pop(0)

0x84b: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x84c: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x84d: PushEmpty(bool, object, float)
0x84e: Stack[-2] = Stack[-12]
0x84f: Stack[-1] = (float) 70.0
0x850: Call2 0x1153

0x851: Pop(2)
0x852: Pop(1); Push((bool) Stack[-1] == 0)
0x853: IF (Stack[-1] == 0) GOTO 0x856; Pop(1)

0x854: Stack[-10] = (int) -2
0x855: Return(); Pop(8)

0x856: @ CreateDialog(Stack[-4])
0x857: Pop(0)
0x858: PushEmpty(int)
0x859: Call2 0x12f4

0x85a: Pop(0)
0x85b: @@ SetNPCName(Stack[-1])
0x85c: Pop(1)
0x85d: PushEmpty(int)
0x85e: Call2 0x12f2

0x85f: Pop(0)
0x860: @@ SetNPCDescription(Stack[-1])
0x861: Pop(1)
0x862: PushEmpty(string)
0x863: Call2 0x12f6

0x864: Pop(0)
0x865: @@ SetPhoto(Stack[-1])
0x866: Pop(1)
0x867: PushEmpty(string)
0x868: Call2 0x12f8

0x869: Pop(0)
0x86a: @@ SetPhoto2(Stack[-1])
0x86b: Pop(1)
0x86c: PushEmpty(int)
0x86d: Call2 0x167f

0x86e: Pop(0)
0x86f: @@ SetPlayerName(Stack[-1])
0x870: Pop(1)
0x871: Stack[-2] = (int) -1
0x872: @ IsOverrideActive(Stack[-3])
0x873: Pop(0)
0x874: Push(Stack[-3])
0x875: IF (Stack[-1] == 0) GOTO 0x878; Pop(1)

0x876: Stack[-10] = (int) -2
0x877: Return(); Pop(8)

0x878: @ DoDialog(Stack[-4])
0x879: Pop(0)
0x87a: PushEmpty(bool, object)
0x87b: PushEmpty(object)
0x87c: Call2 0x1269

0x87d: Stack[-2] = Stack[-1]
0x87e: Pop(1)
0x87f: Call2 0x11aa

0x880: Pop(2)
0x881: PushEmpty(object, object)
0x882: Stack[-2] = Stack[-11]
0x883: Stack[-1] = Stack[-6]
0x884: Push(-2, 4); TaskCall(5)
0x885: Call2 0x89c

0x886: Pop(-2, 4); TaskReturn
0x887: Pop(2)
0x888: @@ IsDialogEnd(Stack[-1])
0x889: Pop(0)
0x88a: Pop(0); Push((bool) Stack[-1] == 0)
0x88b: IF (Stack[-1] == 0) GOTO 0x891; Pop(1)

0x88c: @ sync()
0x88d: Pop(0)
0x88e: @@ IsDialogEnd(Stack[-1])
0x88f: Pop(0)
0x890: GOTO 0x88a

0x891: PushEmpty(object)
0x892: Stack[-1] = Stack[-10]
0x893: Call2 0x1198

0x894: Pop(1)
0x895: @ StopDialog(Stack[-4])
0x896: Pop(0)
0x897: @@ GetReturnValue(Stack[-2])
0x898: Pop(0)
0x899: Stack[-10] = Stack[-2]
0x89a: Return(); Pop(8)

0x89b: Stack[-4] = 0
0x89c: PushEmpty()
0x89d: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x89e: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x89f: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x8a0: Push((int) 1)
0x8a1: IF (Stack[-1] == 0) GOTO 0x919; Pop(1)

0x8a2: PushEmpty(bool, object)
0x8a3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8a4: Call2 0x1518

0x8a5: Pop(1)
0x8a6: IF (Stack[-1] == 0) GOTO 0x8c5; Pop(1)

0x8a7: PushEmpty(object, object)
0x8a8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8a9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8aa: Call2 0x13a1

0x8ab: Pop(2)
0x8ac: PushEmpty(object, object)
0x8ad: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8ae: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8af: Call2 0x136d

0x8b0: Pop(2)
0x8b1: PushEmpty(string)
0x8b2: Stack[-1] = "Fear"
0x8b3: Call2 0x937

0x8b4: Pop(1)
0x8b5: Push((int) 506853)
0x8b6: @@ SetMessage(Stack[-1])
0x8b7: Pop(1)
0x8b8: @@ ClearReplies()
0x8b9: Pop(0)
0x8ba: Push((int) 506854)
0x8bb: Push((int) 7890)
0x8bc: Push((int) 7560)
0x8bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8be: Pop(3)
0x8bf: Push((int) 507262)
0x8c0: Push((int) 7890)
0x8c1: Push((int) 8004)
0x8c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8c3: Pop(3)
0x8c4: GOTO 0x919

0x8c5: PushEmpty(string)
0x8c6: Stack[-1] = "Neutral"
0x8c7: Call2 0x937

0x8c8: Pop(1)
0x8c9: Push((int) 506855)
0x8ca: @@ SetMessage(Stack[-1])
0x8cb: Pop(1)
0x8cc: @@ ClearReplies()
0x8cd: Pop(0)
0x8ce: PushEmpty(bool)
0x8cf: Stack[-1] = (bool) 0
0x8d0: PushEmpty(bool, object)
0x8d1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8d2: Call2 0x1524

0x8d3: Pop(1)
0x8d4: IF (Stack[-1] == 0) GOTO 0x8db; Pop(1)

0x8d5: PushEmpty(bool, object)
0x8d6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8d7: Call2 0x1554

0x8d8: Pop(1)
0x8d9: IF (Stack[-1] == 0) GOTO 0x8db; Pop(1)

0x8da: Stack[-1] = (bool) 1
0x8db: IF (Stack[-1] == 0) GOTO 0x8e1; Pop(1)

0x8dc: Push((int) 506856)
0x8dd: Push((int) 7563)
0x8de: Push((int) 7562)
0x8df: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8e0: Pop(3)
0x8e1: PushEmpty(bool)
0x8e2: Stack[-1] = (bool) 0
0x8e3: PushEmpty(bool, object)
0x8e4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8e5: Call2 0x1530

0x8e6: Pop(1)
0x8e7: IF (Stack[-1] == 0) GOTO 0x8ee; Pop(1)

0x8e8: PushEmpty(bool, object)
0x8e9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8ea: Call2 0x1560

0x8eb: Pop(1)
0x8ec: IF (Stack[-1] == 0) GOTO 0x8ee; Pop(1)

0x8ed: Stack[-1] = (bool) 1
0x8ee: IF (Stack[-1] == 0) GOTO 0x8f4; Pop(1)

0x8ef: Push((int) 506859)
0x8f0: Push((int) 7566)
0x8f1: Push((int) 7565)
0x8f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8f3: Pop(3)
0x8f4: PushEmpty(bool)
0x8f5: Stack[-1] = (bool) 0
0x8f6: PushEmpty(bool, object)
0x8f7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8f8: Call2 0x153c

0x8f9: Pop(1)
0x8fa: IF (Stack[-1] == 0) GOTO 0x901; Pop(1)

0x8fb: PushEmpty(bool, object)
0x8fc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8fd: Call2 0x1548

0x8fe: Pop(1)
0x8ff: IF (Stack[-1] == 0) GOTO 0x901; Pop(1)

0x900: Stack[-1] = (bool) 1
0x901: IF (Stack[-1] == 0) GOTO 0x907; Pop(1)

0x902: Push((int) 506861)
0x903: Push((int) 7568)
0x904: Push((int) 7567)
0x905: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x906: Pop(3)
0x907: PushEmpty(bool, object)
0x908: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x909: Call2 0x1578

0x90a: Pop(1)
0x90b: IF (Stack[-1] == 0) GOTO 0x911; Pop(1)

0x90c: Push((int) 511392)
0x90d: Push((int) 12590)
0x90e: Push((int) 12589)
0x90f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x910: Pop(3)
0x911: Push((int) 507528)
0x912: Push((int) -1)
0x913: Push((int) 8310)
0x914: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x915: Pop(3)
0x916: GOTO 0x919

0x917: Return(); Pop(0)

0x918: GOTO 0x8a0

0x919: PushEmpty(bool)
0x91a: Call2 0x12fa

0x91b: Pop(0)
0x91c: IF (Stack[-1] == 0) GOTO 0x928; Pop(1)

0x91d: @ lshWaitForAnimEnd()
0x91e: Pop(0)
0x91f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x920: IF (Stack[-1] == 0) GOTO 0x922; Pop(1)

0x921: GOTO 0x927

0x922: PushEmpty(string)
0x923: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x924: Call2 0x1234

0x925: Pop(1)
0x926: GOTO 0x91d

0x927: GOTO 0x936

0x928: Push("all")
0x929: Push("idle")
0x92a: @ PlayAnimation(Stack[-2], Stack[-1])
0x92b: Pop(2)
0x92c: @ WaitForAnimEnd()
0x92d: Pop(0)
0x92e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x92f: IF (Stack[-1] == 0) GOTO 0x931; Pop(1)

0x930: GOTO 0x936

0x931: Push("all")
0x932: Push("idle")
0x933: @ PlayAnimation(Stack[-2], Stack[-1])
0x934: Pop(2)
0x935: GOTO 0x92c

0x936: Return(); Pop(0)

0x937: PushEmpty()
0x938: PushEmpty(bool)
0x939: Call2 0x12fa

0x93a: Pop(0)
0x93b: Pop(1); Push((bool) Stack[-1] == 0)
0x93c: IF (Stack[-1] == 0) GOTO 0x93e; Pop(1)

0x93d: Return(); Pop(0)

0x93e: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x93f: IF (Stack[-1] == 0) GOTO 0x941; Pop(1)

0x940: Return(); Pop(0)

0x941: PushEmpty(string, bool)
0x942: Stack[-2] = Stack[-3]
0x943: Push("")
0x944: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x945: IF (Stack[-1] == 0) GOTO 0x948; Pop(1)

0x946: Stack[-1] = (bool) 0
0x947: GOTO 0x949

0x948: Stack[-1] = (bool) 1
0x949: Call2 0x1244

0x94a: Pop(2)
0x94b: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x94c: Return(); Pop(0)

0x94d: PushEmpty()
0x94e: Push((int) 1)
0x94f: IF (Stack[-1] == 0) GOTO 0xbb5; Pop(1)

0x950: PushEmpty()
0x951: Call2 0x1262

0x952: Pop(0)
0x953: Push((int) 8026)
0x954: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x955: IF (Stack[-1] == 0) GOTO 0x960; Pop(1)

0x956: PushEmpty(object, object)
0x957: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x958: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x959: Call2 0x13b9

0x95a: Pop(2)
0x95b: PushEmpty(object, object)
0x95c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x95d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x95e: Call2 0x1428

0x95f: Pop(2)
0x960: Push((int) 8027)
0x961: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x962: IF (Stack[-1] == 0) GOTO 0x96d; Pop(1)

0x963: PushEmpty(object, object)
0x964: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x965: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x966: Call2 0x13b9

0x967: Pop(2)
0x968: PushEmpty(object, object)
0x969: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x96a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x96b: Call2 0x1428

0x96c: Pop(2)
0x96d: Push((int) 8037)
0x96e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x96f: IF (Stack[-1] == 0) GOTO 0x97f; Pop(1)

0x970: PushEmpty(object, object)
0x971: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x972: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x973: Call2 0x13a7

0x974: Pop(2)
0x975: PushEmpty(object, object)
0x976: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x977: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x978: Call2 0x1438

0x979: Pop(2)
0x97a: PushEmpty(object, object)
0x97b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x97c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x97d: Call2 0x1448

0x97e: Pop(2)
0x97f: Push((int) 8033)
0x980: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x981: IF (Stack[-1] == 0) GOTO 0x987; Pop(1)

0x982: PushEmpty(object, object)
0x983: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x984: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x985: Call2 0x13a7

0x986: Pop(2)
0x987: Push((int) 8042)
0x988: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x989: IF (Stack[-1] == 0) GOTO 0x98f; Pop(1)

0x98a: PushEmpty(object, object)
0x98b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x98c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x98d: Call2 0x13ad

0x98e: Pop(2)
0x98f: Push((int) 8045)
0x990: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x991: IF (Stack[-1] == 0) GOTO 0x997; Pop(1)

0x992: PushEmpty(object, object)
0x993: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x994: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x995: Call2 0x13b3

0x996: Pop(2)
0x997: Push((int) 8046)
0x998: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x999: IF (Stack[-1] == 0) GOTO 0x99f; Pop(1)

0x99a: PushEmpty(object, object)
0x99b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x99c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x99d: Call2 0x13b3

0x99e: Pop(2)
0x99f: Push((int) 12591)
0x9a0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9a1: IF (Stack[-1] == 0) GOTO 0x9ac; Pop(1)

0x9a2: PushEmpty(object, object)
0x9a3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9a4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9a5: Call2 0x13b9

0x9a6: Pop(2)
0x9a7: PushEmpty(object, object)
0x9a8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9a9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9aa: Call2 0x1428

0x9ab: Pop(2)
0x9ac: Push((int) 7559)
0x9ad: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9ae: IF (Stack[-1] == 0) GOTO 0xa24; Pop(1)

0x9af: PushEmpty(bool, object)
0x9b0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9b1: Call2 0x1518

0x9b2: Pop(1)
0x9b3: IF (Stack[-1] == 0) GOTO 0x9d2; Pop(1)

0x9b4: PushEmpty(object, object)
0x9b5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9b6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9b7: Call2 0x13a1

0x9b8: Pop(2)
0x9b9: PushEmpty(object, object)
0x9ba: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9bb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9bc: Call2 0x136d

0x9bd: Pop(2)
0x9be: PushEmpty(string)
0x9bf: Stack[-1] = "Fear"
0x9c0: Call2 0x937

0x9c1: Pop(1)
0x9c2: Push((int) 506853)
0x9c3: @@ SetMessage(Stack[-1])
0x9c4: Pop(1)
0x9c5: @@ ClearReplies()
0x9c6: Pop(0)
0x9c7: Push((int) 506854)
0x9c8: Push((int) 7890)
0x9c9: Push((int) 7560)
0x9ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9cb: Pop(3)
0x9cc: Push((int) 507262)
0x9cd: Push((int) 7890)
0x9ce: Push((int) 8004)
0x9cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9d0: Pop(3)
0x9d1: Return(); Pop(0)

0x9d2: PushEmpty(string)
0x9d3: Stack[-1] = "Neutral"
0x9d4: Call2 0x937

0x9d5: Pop(1)
0x9d6: Push((int) 506855)
0x9d7: @@ SetMessage(Stack[-1])
0x9d8: Pop(1)
0x9d9: @@ ClearReplies()
0x9da: Pop(0)
0x9db: PushEmpty(bool)
0x9dc: Stack[-1] = (bool) 0
0x9dd: PushEmpty(bool, object)
0x9de: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9df: Call2 0x1524

0x9e0: Pop(1)
0x9e1: IF (Stack[-1] == 0) GOTO 0x9e8; Pop(1)

0x9e2: PushEmpty(bool, object)
0x9e3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9e4: Call2 0x1554

0x9e5: Pop(1)
0x9e6: IF (Stack[-1] == 0) GOTO 0x9e8; Pop(1)

0x9e7: Stack[-1] = (bool) 1
0x9e8: IF (Stack[-1] == 0) GOTO 0x9ee; Pop(1)

0x9e9: Push((int) 506856)
0x9ea: Push((int) 7563)
0x9eb: Push((int) 7562)
0x9ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9ed: Pop(3)
0x9ee: PushEmpty(bool)
0x9ef: Stack[-1] = (bool) 0
0x9f0: PushEmpty(bool, object)
0x9f1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9f2: Call2 0x1530

0x9f3: Pop(1)
0x9f4: IF (Stack[-1] == 0) GOTO 0x9fb; Pop(1)

0x9f5: PushEmpty(bool, object)
0x9f6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9f7: Call2 0x1560

0x9f8: Pop(1)
0x9f9: IF (Stack[-1] == 0) GOTO 0x9fb; Pop(1)

0x9fa: Stack[-1] = (bool) 1
0x9fb: IF (Stack[-1] == 0) GOTO 0xa01; Pop(1)

0x9fc: Push((int) 506859)
0x9fd: Push((int) 7566)
0x9fe: Push((int) 7565)
0x9ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa00: Pop(3)
0xa01: PushEmpty(bool)
0xa02: Stack[-1] = (bool) 0
0xa03: PushEmpty(bool, object)
0xa04: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa05: Call2 0x153c

0xa06: Pop(1)
0xa07: IF (Stack[-1] == 0) GOTO 0xa0e; Pop(1)

0xa08: PushEmpty(bool, object)
0xa09: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa0a: Call2 0x1548

0xa0b: Pop(1)
0xa0c: IF (Stack[-1] == 0) GOTO 0xa0e; Pop(1)

0xa0d: Stack[-1] = (bool) 1
0xa0e: IF (Stack[-1] == 0) GOTO 0xa14; Pop(1)

0xa0f: Push((int) 506861)
0xa10: Push((int) 7568)
0xa11: Push((int) 7567)
0xa12: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa13: Pop(3)
0xa14: PushEmpty(bool, object)
0xa15: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa16: Call2 0x1578

0xa17: Pop(1)
0xa18: IF (Stack[-1] == 0) GOTO 0xa1e; Pop(1)

0xa19: Push((int) 511392)
0xa1a: Push((int) 12590)
0xa1b: Push((int) 12589)
0xa1c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa1d: Pop(3)
0xa1e: Push((int) 507528)
0xa1f: Push((int) -1)
0xa20: Push((int) 8310)
0xa21: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa22: Pop(3)
0xa23: Return(); Pop(0)

0xa24: Push((int) 12590)
0xa25: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa26: IF (Stack[-1] == 0) GOTO 0xa36; Pop(1)

0xa27: PushEmpty(string)
0xa28: Stack[-1] = "Neutral"
0xa29: Call2 0x937

0xa2a: Pop(1)
0xa2b: Push((int) 511393)
0xa2c: @@ SetMessage(Stack[-1])
0xa2d: Pop(1)
0xa2e: @@ ClearReplies()
0xa2f: Pop(0)
0xa30: Push((int) 511394)
0xa31: Push((int) -1)
0xa32: Push((int) 12591)
0xa33: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa34: Pop(3)
0xa35: Return(); Pop(0)

0xa36: Push((int) 7568)
0xa37: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa38: IF (Stack[-1] == 0) GOTO 0xa48; Pop(1)

0xa39: PushEmpty(string)
0xa3a: Stack[-1] = "Neutral"
0xa3b: Call2 0x937

0xa3c: Pop(1)
0xa3d: Push((int) 506862)
0xa3e: @@ SetMessage(Stack[-1])
0xa3f: Pop(1)
0xa40: @@ ClearReplies()
0xa41: Pop(0)
0xa42: Push((int) 507296)
0xa43: Push((int) 8044)
0xa44: Push((int) 8043)
0xa45: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa46: Pop(3)
0xa47: Return(); Pop(0)

0xa48: Push((int) 8044)
0xa49: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa4a: IF (Stack[-1] == 0) GOTO 0xa5f; Pop(1)

0xa4b: PushEmpty(string)
0xa4c: Stack[-1] = "Neutral"
0xa4d: Call2 0x937

0xa4e: Pop(1)
0xa4f: Push((int) 507297)
0xa50: @@ SetMessage(Stack[-1])
0xa51: Pop(1)
0xa52: @@ ClearReplies()
0xa53: Pop(0)
0xa54: Push((int) 507298)
0xa55: Push((int) -1)
0xa56: Push((int) 8045)
0xa57: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa58: Pop(3)
0xa59: Push((int) 507299)
0xa5a: Push((int) -1)
0xa5b: Push((int) 8046)
0xa5c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa5d: Pop(3)
0xa5e: Return(); Pop(0)

0xa5f: Push((int) 7566)
0xa60: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa61: IF (Stack[-1] == 0) GOTO 0xa76; Pop(1)

0xa62: PushEmpty(object, object)
0xa63: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa64: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa65: Call2 0x139b

0xa66: Pop(2)
0xa67: PushEmpty(string)
0xa68: Stack[-1] = "Neutral"
0xa69: Call2 0x937

0xa6a: Pop(1)
0xa6b: Push((int) 506860)
0xa6c: @@ SetMessage(Stack[-1])
0xa6d: Pop(1)
0xa6e: @@ ClearReplies()
0xa6f: Pop(0)
0xa70: Push((int) 507295)
0xa71: Push((int) -1)
0xa72: Push((int) 8042)
0xa73: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa74: Pop(3)
0xa75: Return(); Pop(0)

0xa76: Push((int) 7563)
0xa77: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa78: IF (Stack[-1] == 0) GOTO 0xa8d; Pop(1)

0xa79: PushEmpty(string)
0xa7a: Stack[-1] = "Modesty"
0xa7b: Call2 0x937

0xa7c: Pop(1)
0xa7d: Push((int) 506857)
0xa7e: @@ SetMessage(Stack[-1])
0xa7f: Pop(1)
0xa80: @@ ClearReplies()
0xa81: Pop(0)
0xa82: Push((int) 506858)
0xa83: Push((int) 8034)
0xa84: Push((int) 7564)
0xa85: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa86: Pop(3)
0xa87: Push((int) 507287)
0xa88: Push((int) -1)
0xa89: Push((int) 8033)
0xa8a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa8b: Pop(3)
0xa8c: Return(); Pop(0)

0xa8d: Push((int) 8034)
0xa8e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa8f: IF (Stack[-1] == 0) GOTO 0xaa4; Pop(1)

0xa90: PushEmpty(string)
0xa91: Stack[-1] = "Modesty"
0xa92: Call2 0x937

0xa93: Pop(1)
0xa94: Push((int) 507288)
0xa95: @@ SetMessage(Stack[-1])
0xa96: Pop(1)
0xa97: @@ ClearReplies()
0xa98: Pop(0)
0xa99: Push((int) 507289)
0xa9a: Push((int) 8036)
0xa9b: Push((int) 8035)
0xa9c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa9d: Pop(3)
0xa9e: Push((int) 507292)
0xa9f: Push((int) 8039)
0xaa0: Push((int) 8038)
0xaa1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaa2: Pop(3)
0xaa3: Return(); Pop(0)

0xaa4: Push((int) 8039)
0xaa5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaa6: IF (Stack[-1] == 0) GOTO 0xab6; Pop(1)

0xaa7: PushEmpty(string)
0xaa8: Stack[-1] = "Modesty"
0xaa9: Call2 0x937

0xaaa: Pop(1)
0xaab: Push((int) 507293)
0xaac: @@ SetMessage(Stack[-1])
0xaad: Pop(1)
0xaae: @@ ClearReplies()
0xaaf: Pop(0)
0xab0: Push((int) 507294)
0xab1: Push((int) 8036)
0xab2: Push((int) 8040)
0xab3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xab4: Pop(3)
0xab5: Return(); Pop(0)

0xab6: Push((int) 8036)
0xab7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xab8: IF (Stack[-1] == 0) GOTO 0xac8; Pop(1)

0xab9: PushEmpty(string)
0xaba: Stack[-1] = "Modesty"
0xabb: Call2 0x937

0xabc: Pop(1)
0xabd: Push((int) 507290)
0xabe: @@ SetMessage(Stack[-1])
0xabf: Pop(1)
0xac0: @@ ClearReplies()
0xac1: Pop(0)
0xac2: Push((int) 507291)
0xac3: Push((int) -1)
0xac4: Push((int) 8037)
0xac5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xac6: Pop(3)
0xac7: Return(); Pop(0)

0xac8: Push((int) 7890)
0xac9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaca: IF (Stack[-1] == 0) GOTO 0xae4; Pop(1)

0xacb: PushEmpty(string)
0xacc: Stack[-1] = "Fear"
0xacd: Call2 0x937

0xace: Pop(1)
0xacf: Push((int) 507162)
0xad0: @@ SetMessage(Stack[-1])
0xad1: Pop(1)
0xad2: @@ ClearReplies()
0xad3: Pop(0)
0xad4: Push((int) 507264)
0xad5: Push((int) 8010)
0xad6: Push((int) 8007)
0xad7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xad8: Pop(3)
0xad9: Push((int) 507265)
0xada: Push((int) 8010)
0xadb: Push((int) 8008)
0xadc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xadd: Pop(3)
0xade: Push((int) 507266)
0xadf: Push((int) -1)
0xae0: Push((int) 8009)
0xae1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xae2: Pop(3)
0xae3: Return(); Pop(0)

0xae4: Push((int) 8010)
0xae5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xae6: IF (Stack[-1] == 0) GOTO 0xafb; Pop(1)

0xae7: PushEmpty(string)
0xae8: Stack[-1] = "Fear"
0xae9: Call2 0x937

0xaea: Pop(1)
0xaeb: Push((int) 507267)
0xaec: @@ SetMessage(Stack[-1])
0xaed: Pop(1)
0xaee: @@ ClearReplies()
0xaef: Pop(0)
0xaf0: Push((int) 507268)
0xaf1: Push((int) 8015)
0xaf2: Push((int) 8012)
0xaf3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaf4: Pop(3)
0xaf5: Push((int) 507269)
0xaf6: Push((int) 8014)
0xaf7: Push((int) 8013)
0xaf8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaf9: Pop(3)
0xafa: Return(); Pop(0)

0xafb: Push((int) 8014)
0xafc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xafd: IF (Stack[-1] == 0) GOTO 0xb17; Pop(1)

0xafe: PushEmpty(string)
0xaff: Stack[-1] = "Love"
0xb00: Call2 0x937

0xb01: Pop(1)
0xb02: Push((int) 507270)
0xb03: @@ SetMessage(Stack[-1])
0xb04: Pop(1)
0xb05: @@ ClearReplies()
0xb06: Pop(0)
0xb07: Push((int) 507272)
0xb08: Push((int) 8019)
0xb09: Push((int) 8016)
0xb0a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb0b: Pop(3)
0xb0c: Push((int) 507273)
0xb0d: Push((int) 8015)
0xb0e: Push((int) 8017)
0xb0f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb10: Pop(3)
0xb11: Push((int) 507274)
0xb12: Push((int) -1)
0xb13: Push((int) 8018)
0xb14: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb15: Pop(3)
0xb16: Return(); Pop(0)

0xb17: Push((int) 8019)
0xb18: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb19: IF (Stack[-1] == 0) GOTO 0xb29; Pop(1)

0xb1a: PushEmpty(string)
0xb1b: Stack[-1] = "Sexy"
0xb1c: Call2 0x937

0xb1d: Pop(1)
0xb1e: Push((int) 507275)
0xb1f: @@ SetMessage(Stack[-1])
0xb20: Pop(1)
0xb21: @@ ClearReplies()
0xb22: Pop(0)
0xb23: Push((int) 507276)
0xb24: Push((int) 8015)
0xb25: Push((int) 8020)
0xb26: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb27: Pop(3)
0xb28: Return(); Pop(0)

0xb29: Push((int) 8015)
0xb2a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb2b: IF (Stack[-1] == 0) GOTO 0xb40; Pop(1)

0xb2c: PushEmpty(object, object)
0xb2d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb2e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb2f: Call2 0x1400

0xb30: Pop(2)
0xb31: PushEmpty(string)
0xb32: Stack[-1] = "Neutral"
0xb33: Call2 0x937

0xb34: Pop(1)
0xb35: Push((int) 507271)
0xb36: @@ SetMessage(Stack[-1])
0xb37: Pop(1)
0xb38: @@ ClearReplies()
0xb39: Pop(0)
0xb3a: Push((int) 533818)
0xb3b: Push((int) 35366)
0xb3c: Push((int) 35365)
0xb3d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb3e: Pop(3)
0xb3f: Return(); Pop(0)

0xb40: Push((int) 35366)
0xb41: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb42: IF (Stack[-1] == 0) GOTO 0xb57; Pop(1)

0xb43: PushEmpty(string)
0xb44: Stack[-1] = "Neutral"
0xb45: Call2 0x937

0xb46: Pop(1)
0xb47: Push((int) 533819)
0xb48: @@ SetMessage(Stack[-1])
0xb49: Pop(1)
0xb4a: @@ ClearReplies()
0xb4b: Pop(0)
0xb4c: Push((int) 507277)
0xb4d: Push((int) 8023)
0xb4e: Push((int) 8022)
0xb4f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb50: Pop(3)
0xb51: Push((int) 507284)
0xb52: Push((int) 8030)
0xb53: Push((int) 8029)
0xb54: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb55: Pop(3)
0xb56: Return(); Pop(0)

0xb57: Push((int) 8030)
0xb58: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb59: IF (Stack[-1] == 0) GOTO 0xb69; Pop(1)

0xb5a: PushEmpty(string)
0xb5b: Stack[-1] = "Love"
0xb5c: Call2 0x937

0xb5d: Pop(1)
0xb5e: Push((int) 507285)
0xb5f: @@ SetMessage(Stack[-1])
0xb60: Pop(1)
0xb61: @@ ClearReplies()
0xb62: Pop(0)
0xb63: Push((int) 507286)
0xb64: Push((int) 8025)
0xb65: Push((int) 8031)
0xb66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb67: Pop(3)
0xb68: Return(); Pop(0)

0xb69: Push((int) 8023)
0xb6a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb6b: IF (Stack[-1] == 0) GOTO 0xb7b; Pop(1)

0xb6c: PushEmpty(string)
0xb6d: Stack[-1] = "Love"
0xb6e: Call2 0x937

0xb6f: Pop(1)
0xb70: Push((int) 507278)
0xb71: @@ SetMessage(Stack[-1])
0xb72: Pop(1)
0xb73: @@ ClearReplies()
0xb74: Pop(0)
0xb75: Push((int) 507279)
0xb76: Push((int) 8025)
0xb77: Push((int) 8024)
0xb78: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb79: Pop(3)
0xb7a: Return(); Pop(0)

0xb7b: Push((int) 8025)
0xb7c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb7d: IF (Stack[-1] == 0) GOTO 0xb8d; Pop(1)

0xb7e: PushEmpty(string)
0xb7f: Stack[-1] = "Love"
0xb80: Call2 0x937

0xb81: Pop(1)
0xb82: Push((int) 507280)
0xb83: @@ SetMessage(Stack[-1])
0xb84: Pop(1)
0xb85: @@ ClearReplies()
0xb86: Pop(0)
0xb87: Push((int) 533820)
0xb88: Push((int) 35368)
0xb89: Push((int) 35367)
0xb8a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb8b: Pop(3)
0xb8c: Return(); Pop(0)

0xb8d: Push((int) 35368)
0xb8e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb8f: IF (Stack[-1] == 0) GOTO 0xba9; Pop(1)

0xb90: PushEmpty(string)
0xb91: Stack[-1] = "Love"
0xb92: Call2 0x937

0xb93: Pop(1)
0xb94: Push((int) 533821)
0xb95: @@ SetMessage(Stack[-1])
0xb96: Pop(1)
0xb97: @@ ClearReplies()
0xb98: Pop(0)
0xb99: Push((int) 507281)
0xb9a: Push((int) -1)
0xb9b: Push((int) 8026)
0xb9c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb9d: Pop(3)
0xb9e: Push((int) 507282)
0xb9f: Push((int) -1)
0xba0: Push((int) 8027)
0xba1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xba2: Pop(3)
0xba3: Push((int) 507283)
0xba4: Push((int) -1)
0xba5: Push((int) 8028)
0xba6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xba7: Pop(3)
0xba8: Return(); Pop(0)

0xba9: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xbaa: PushEmpty(bool)
0xbab: Call2 0x12fa

0xbac: Pop(0)
0xbad: IF (Stack[-1] == 0) GOTO 0xbb1; Pop(1)

0xbae: @ lshStopAnimation()
0xbaf: Pop(0)
0xbb0: GOTO 0xbb3

0xbb1: @ StopAnimation()
0xbb2: Pop(0)
0xbb3: Return(); Pop(0)

0xbb4: GOTO 0x94e

0xbb5: Return(); Pop(0)

0xbb6: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xbb7: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xbb8: PushEmpty(bool, object, float)
0xbb9: Stack[-2] = Stack[-12]
0xbba: Stack[-1] = (float) 70.0
0xbbb: Call2 0x1153

0xbbc: Pop(2)
0xbbd: Pop(1); Push((bool) Stack[-1] == 0)
0xbbe: IF (Stack[-1] == 0) GOTO 0xbc1; Pop(1)

0xbbf: Stack[-10] = (int) -2
0xbc0: Return(); Pop(8)

0xbc1: @ CreateDialog(Stack[-4])
0xbc2: Pop(0)
0xbc3: PushEmpty(int)
0xbc4: Call2 0x12f4

0xbc5: Pop(0)
0xbc6: @@ SetNPCName(Stack[-1])
0xbc7: Pop(1)
0xbc8: PushEmpty(int)
0xbc9: Call2 0x12f2

0xbca: Pop(0)
0xbcb: @@ SetNPCDescription(Stack[-1])
0xbcc: Pop(1)
0xbcd: PushEmpty(string)
0xbce: Call2 0x12f6

0xbcf: Pop(0)
0xbd0: @@ SetPhoto(Stack[-1])
0xbd1: Pop(1)
0xbd2: PushEmpty(string)
0xbd3: Call2 0x12f8

0xbd4: Pop(0)
0xbd5: @@ SetPhoto2(Stack[-1])
0xbd6: Pop(1)
0xbd7: PushEmpty(int)
0xbd8: Call2 0x167f

0xbd9: Pop(0)
0xbda: @@ SetPlayerName(Stack[-1])
0xbdb: Pop(1)
0xbdc: Stack[-2] = (int) -1
0xbdd: @ IsOverrideActive(Stack[-3])
0xbde: Pop(0)
0xbdf: Push(Stack[-3])
0xbe0: IF (Stack[-1] == 0) GOTO 0xbe3; Pop(1)

0xbe1: Stack[-10] = (int) -2
0xbe2: Return(); Pop(8)

0xbe3: @ DoDialog(Stack[-4])
0xbe4: Pop(0)
0xbe5: PushEmpty(bool, object)
0xbe6: PushEmpty(object)
0xbe7: Call2 0x1269

0xbe8: Stack[-2] = Stack[-1]
0xbe9: Pop(1)
0xbea: Call2 0x11aa

0xbeb: Pop(2)
0xbec: PushEmpty(object, object)
0xbed: Stack[-2] = Stack[-11]
0xbee: Stack[-1] = Stack[-6]
0xbef: Push(-2, 4); TaskCall(7)
0xbf0: Call2 0xc07

0xbf1: Pop(-2, 4); TaskReturn
0xbf2: Pop(2)
0xbf3: @@ IsDialogEnd(Stack[-1])
0xbf4: Pop(0)
0xbf5: Pop(0); Push((bool) Stack[-1] == 0)
0xbf6: IF (Stack[-1] == 0) GOTO 0xbfc; Pop(1)

0xbf7: @ sync()
0xbf8: Pop(0)
0xbf9: @@ IsDialogEnd(Stack[-1])
0xbfa: Pop(0)
0xbfb: GOTO 0xbf5

0xbfc: PushEmpty(object)
0xbfd: Stack[-1] = Stack[-10]
0xbfe: Call2 0x1198

0xbff: Pop(1)
0xc00: @ StopDialog(Stack[-4])
0xc01: Pop(0)
0xc02: @@ GetReturnValue(Stack[-2])
0xc03: Pop(0)
0xc04: Stack[-10] = Stack[-2]
0xc05: Return(); Pop(8)

0xc06: Stack[-4] = 0
0xc07: PushEmpty()
0xc08: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xc09: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xc0a: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xc0b: Push((int) 1)
0xc0c: IF (Stack[-1] == 0) GOTO 0xc28; Pop(1)

0xc0d: PushEmpty(string)
0xc0e: Stack[-1] = "Neutral"
0xc0f: Call2 0xc46

0xc10: Pop(1)
0xc11: Push((int) 509840)
0xc12: @@ SetMessage(Stack[-1])
0xc13: Pop(1)
0xc14: @@ ClearReplies()
0xc15: Pop(0)
0xc16: PushEmpty(bool, object)
0xc17: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc18: Call2 0x15cc

0xc19: Pop(1)
0xc1a: IF (Stack[-1] == 0) GOTO 0xc20; Pop(1)

0xc1b: Push((int) 509841)
0xc1c: Push((int) 10821)
0xc1d: Push((int) 10840)
0xc1e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc1f: Pop(3)
0xc20: Push((int) 511259)
0xc21: Push((int) -1)
0xc22: Push((int) 12449)
0xc23: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc24: Pop(3)
0xc25: GOTO 0xc28

0xc26: Return(); Pop(0)

0xc27: GOTO 0xc0b

0xc28: PushEmpty(bool)
0xc29: Call2 0x12fa

0xc2a: Pop(0)
0xc2b: IF (Stack[-1] == 0) GOTO 0xc37; Pop(1)

0xc2c: @ lshWaitForAnimEnd()
0xc2d: Pop(0)
0xc2e: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc2f: IF (Stack[-1] == 0) GOTO 0xc31; Pop(1)

0xc30: GOTO 0xc36

0xc31: PushEmpty(string)
0xc32: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xc33: Call2 0x1234

0xc34: Pop(1)
0xc35: GOTO 0xc2c

0xc36: GOTO 0xc45

0xc37: Push("all")
0xc38: Push("idle")
0xc39: @ PlayAnimation(Stack[-2], Stack[-1])
0xc3a: Pop(2)
0xc3b: @ WaitForAnimEnd()
0xc3c: Pop(0)
0xc3d: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc3e: IF (Stack[-1] == 0) GOTO 0xc40; Pop(1)

0xc3f: GOTO 0xc45

0xc40: Push("all")
0xc41: Push("idle")
0xc42: @ PlayAnimation(Stack[-2], Stack[-1])
0xc43: Pop(2)
0xc44: GOTO 0xc3b

0xc45: Return(); Pop(0)

0xc46: PushEmpty()
0xc47: PushEmpty(bool)
0xc48: Call2 0x12fa

0xc49: Pop(0)
0xc4a: Pop(1); Push((bool) Stack[-1] == 0)
0xc4b: IF (Stack[-1] == 0) GOTO 0xc4d; Pop(1)

0xc4c: Return(); Pop(0)

0xc4d: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xc4e: IF (Stack[-1] == 0) GOTO 0xc50; Pop(1)

0xc4f: Return(); Pop(0)

0xc50: PushEmpty(string, bool)
0xc51: Stack[-2] = Stack[-3]
0xc52: Push("")
0xc53: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xc54: IF (Stack[-1] == 0) GOTO 0xc57; Pop(1)

0xc55: Stack[-1] = (bool) 0
0xc56: GOTO 0xc58

0xc57: Stack[-1] = (bool) 1
0xc58: Call2 0x1244

0xc59: Pop(2)
0xc5a: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xc5b: Return(); Pop(0)

0xc5c: PushEmpty()
0xc5d: Push((int) 1)
0xc5e: IF (Stack[-1] == 0) GOTO 0xd0a; Pop(1)

0xc5f: PushEmpty()
0xc60: Call2 0x1262

0xc61: Pop(0)
0xc62: Push((int) 10840)
0xc63: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc64: IF (Stack[-1] == 0) GOTO 0xc6a; Pop(1)

0xc65: PushEmpty(object, object)
0xc66: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc67: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc68: Call2 0x1458

0xc69: Pop(2)
0xc6a: Push((int) 10839)
0xc6b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc6c: IF (Stack[-1] == 0) GOTO 0xc86; Pop(1)

0xc6d: PushEmpty(string)
0xc6e: Stack[-1] = "Neutral"
0xc6f: Call2 0xc46

0xc70: Pop(1)
0xc71: Push((int) 509840)
0xc72: @@ SetMessage(Stack[-1])
0xc73: Pop(1)
0xc74: @@ ClearReplies()
0xc75: Pop(0)
0xc76: PushEmpty(bool, object)
0xc77: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc78: Call2 0x15cc

0xc79: Pop(1)
0xc7a: IF (Stack[-1] == 0) GOTO 0xc80; Pop(1)

0xc7b: Push((int) 509841)
0xc7c: Push((int) 10821)
0xc7d: Push((int) 10840)
0xc7e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc7f: Pop(3)
0xc80: Push((int) 511259)
0xc81: Push((int) -1)
0xc82: Push((int) 12449)
0xc83: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc84: Pop(3)
0xc85: Return(); Pop(0)

0xc86: Push((int) 10821)
0xc87: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc88: IF (Stack[-1] == 0) GOTO 0xca2; Pop(1)

0xc89: PushEmpty(string)
0xc8a: Stack[-1] = "Sexy"
0xc8b: Call2 0xc46

0xc8c: Pop(1)
0xc8d: Push((int) 509824)
0xc8e: @@ SetMessage(Stack[-1])
0xc8f: Pop(1)
0xc90: @@ ClearReplies()
0xc91: Pop(0)
0xc92: Push((int) 509825)
0xc93: Push((int) 10823)
0xc94: Push((int) 10822)
0xc95: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc96: Pop(3)
0xc97: Push((int) 509829)
0xc98: Push((int) 10828)
0xc99: Push((int) 10827)
0xc9a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc9b: Pop(3)
0xc9c: Push((int) 509836)
0xc9d: Push((int) 10835)
0xc9e: Push((int) 10834)
0xc9f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xca0: Pop(3)
0xca1: Return(); Pop(0)

0xca2: Push((int) 10835)
0xca3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xca4: IF (Stack[-1] == 0) GOTO 0xcb9; Pop(1)

0xca5: PushEmpty(string)
0xca6: Stack[-1] = "Sexy"
0xca7: Call2 0xc46

0xca8: Pop(1)
0xca9: Push((int) 509837)
0xcaa: @@ SetMessage(Stack[-1])
0xcab: Pop(1)
0xcac: @@ ClearReplies()
0xcad: Pop(0)
0xcae: Push((int) 509839)
0xcaf: Push((int) 10828)
0xcb0: Push((int) 10837)
0xcb1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcb2: Pop(3)
0xcb3: Push((int) 509838)
0xcb4: Push((int) -1)
0xcb5: Push((int) 10836)
0xcb6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcb7: Pop(3)
0xcb8: Return(); Pop(0)

0xcb9: Push((int) 10828)
0xcba: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcbb: IF (Stack[-1] == 0) GOTO 0xcd0; Pop(1)

0xcbc: PushEmpty(string)
0xcbd: Stack[-1] = "Sexy"
0xcbe: Call2 0xc46

0xcbf: Pop(1)
0xcc0: Push((int) 509830)
0xcc1: @@ SetMessage(Stack[-1])
0xcc2: Pop(1)
0xcc3: @@ ClearReplies()
0xcc4: Pop(0)
0xcc5: Push((int) 509831)
0xcc6: Push((int) -1)
0xcc7: Push((int) 10829)
0xcc8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcc9: Pop(3)
0xcca: Push((int) 509832)
0xccb: Push((int) 10831)
0xccc: Push((int) 10830)
0xccd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcce: Pop(3)
0xccf: Return(); Pop(0)

0xcd0: Push((int) 10831)
0xcd1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcd2: IF (Stack[-1] == 0) GOTO 0xce7; Pop(1)

0xcd3: PushEmpty(string)
0xcd4: Stack[-1] = "Sexy"
0xcd5: Call2 0xc46

0xcd6: Pop(1)
0xcd7: Push((int) 509833)
0xcd8: @@ SetMessage(Stack[-1])
0xcd9: Pop(1)
0xcda: @@ ClearReplies()
0xcdb: Pop(0)
0xcdc: Push((int) 509834)
0xcdd: Push((int) -1)
0xcde: Push((int) 10832)
0xcdf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xce0: Pop(3)
0xce1: Push((int) 509835)
0xce2: Push((int) -1)
0xce3: Push((int) 10833)
0xce4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xce5: Pop(3)
0xce6: Return(); Pop(0)

0xce7: Push((int) 10823)
0xce8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xce9: IF (Stack[-1] == 0) GOTO 0xcfe; Pop(1)

0xcea: PushEmpty(string)
0xceb: Stack[-1] = "Sexy"
0xcec: Call2 0xc46

0xced: Pop(1)
0xcee: Push((int) 509826)
0xcef: @@ SetMessage(Stack[-1])
0xcf0: Pop(1)
0xcf1: @@ ClearReplies()
0xcf2: Pop(0)
0xcf3: Push((int) 509827)
0xcf4: Push((int) 10828)
0xcf5: Push((int) 10824)
0xcf6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcf7: Pop(3)
0xcf8: Push((int) 509828)
0xcf9: Push((int) -1)
0xcfa: Push((int) 10826)
0xcfb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcfc: Pop(3)
0xcfd: Return(); Pop(0)

0xcfe: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xcff: PushEmpty(bool)
0xd00: Call2 0x12fa

0xd01: Pop(0)
0xd02: IF (Stack[-1] == 0) GOTO 0xd06; Pop(1)

0xd03: @ lshStopAnimation()
0xd04: Pop(0)
0xd05: GOTO 0xd08

0xd06: @ StopAnimation()
0xd07: Pop(0)
0xd08: Return(); Pop(0)

0xd09: GOTO 0xc5d

0xd0a: Return(); Pop(0)

0xd0b: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xd0c: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xd0d: PushEmpty(bool, object, float)
0xd0e: Stack[-2] = Stack[-12]
0xd0f: Stack[-1] = (float) 70.0
0xd10: Call2 0x1153

0xd11: Pop(2)
0xd12: Pop(1); Push((bool) Stack[-1] == 0)
0xd13: IF (Stack[-1] == 0) GOTO 0xd16; Pop(1)

0xd14: Stack[-10] = (int) -2
0xd15: Return(); Pop(8)

0xd16: @ CreateDialog(Stack[-4])
0xd17: Pop(0)
0xd18: PushEmpty(int)
0xd19: Call2 0x12f4

0xd1a: Pop(0)
0xd1b: @@ SetNPCName(Stack[-1])
0xd1c: Pop(1)
0xd1d: PushEmpty(int)
0xd1e: Call2 0x12f2

0xd1f: Pop(0)
0xd20: @@ SetNPCDescription(Stack[-1])
0xd21: Pop(1)
0xd22: PushEmpty(string)
0xd23: Call2 0x12f6

0xd24: Pop(0)
0xd25: @@ SetPhoto(Stack[-1])
0xd26: Pop(1)
0xd27: PushEmpty(string)
0xd28: Call2 0x12f8

0xd29: Pop(0)
0xd2a: @@ SetPhoto2(Stack[-1])
0xd2b: Pop(1)
0xd2c: PushEmpty(int)
0xd2d: Call2 0x167f

0xd2e: Pop(0)
0xd2f: @@ SetPlayerName(Stack[-1])
0xd30: Pop(1)
0xd31: Stack[-2] = (int) -1
0xd32: @ IsOverrideActive(Stack[-3])
0xd33: Pop(0)
0xd34: Push(Stack[-3])
0xd35: IF (Stack[-1] == 0) GOTO 0xd38; Pop(1)

0xd36: Stack[-10] = (int) -2
0xd37: Return(); Pop(8)

0xd38: @ DoDialog(Stack[-4])
0xd39: Pop(0)
0xd3a: PushEmpty(bool, object)
0xd3b: PushEmpty(object)
0xd3c: Call2 0x1269

0xd3d: Stack[-2] = Stack[-1]
0xd3e: Pop(1)
0xd3f: Call2 0x11aa

0xd40: Pop(2)
0xd41: PushEmpty(object, object)
0xd42: Stack[-2] = Stack[-11]
0xd43: Stack[-1] = Stack[-6]
0xd44: Push(-2, 4); TaskCall(9)
0xd45: Call2 0xd5c

0xd46: Pop(-2, 4); TaskReturn
0xd47: Pop(2)
0xd48: @@ IsDialogEnd(Stack[-1])
0xd49: Pop(0)
0xd4a: Pop(0); Push((bool) Stack[-1] == 0)
0xd4b: IF (Stack[-1] == 0) GOTO 0xd51; Pop(1)

0xd4c: @ sync()
0xd4d: Pop(0)
0xd4e: @@ IsDialogEnd(Stack[-1])
0xd4f: Pop(0)
0xd50: GOTO 0xd4a

0xd51: PushEmpty(object)
0xd52: Stack[-1] = Stack[-10]
0xd53: Call2 0x1198

0xd54: Pop(1)
0xd55: @ StopDialog(Stack[-4])
0xd56: Pop(0)
0xd57: @@ GetReturnValue(Stack[-2])
0xd58: Pop(0)
0xd59: Stack[-10] = Stack[-2]
0xd5a: Return(); Pop(8)

0xd5b: Stack[-4] = 0
0xd5c: PushEmpty()
0xd5d: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xd5e: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xd5f: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xd60: Push((int) 1)
0xd61: IF (Stack[-1] == 0) GOTO 0xdb4; Pop(1)

0xd62: PushEmpty(string)
0xd63: Stack[-1] = "Neutral"
0xd64: Call2 0xdd2

0xd65: Pop(1)
0xd66: Push((int) 511255)
0xd67: @@ SetMessage(Stack[-1])
0xd68: Pop(1)
0xd69: @@ ClearReplies()
0xd6a: Pop(0)
0xd6b: PushEmpty(bool)
0xd6c: Stack[-1] = (bool) 1
0xd6d: PushEmpty(bool)
0xd6e: Stack[-1] = (bool) 1
0xd6f: PushEmpty(bool)
0xd70: Stack[-1] = (bool) 0
0xd71: PushEmpty(bool, object)
0xd72: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd73: Call2 0x15d8

0xd74: Pop(1)
0xd75: IF (Stack[-1] == 0) GOTO 0xd7c; Pop(1)

0xd76: PushEmpty(bool, object)
0xd77: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd78: Call2 0x1590

0xd79: Pop(1)
0xd7a: IF (Stack[-1] == 0) GOTO 0xd7c; Pop(1)

0xd7b: Stack[-1] = (bool) 1
0xd7c: IF (Stack[-1] == 0) GOTO 0xd8c; Pop(1)

0xd7d: PushEmpty(bool)
0xd7e: Stack[-1] = (bool) 0
0xd7f: PushEmpty(bool, object)
0xd80: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd81: Call2 0x15a8

0xd82: Pop(1)
0xd83: IF (Stack[-1] == 0) GOTO 0xd8a; Pop(1)

0xd84: PushEmpty(bool, object)
0xd85: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd86: Call2 0x15d8

0xd87: Pop(1)
0xd88: IF (Stack[-1] == 0) GOTO 0xd8a; Pop(1)

0xd89: Stack[-1] = (bool) 1
0xd8a: IF (Stack[-1] == 0) GOTO 0xd8c; Pop(1)

0xd8b: Stack[-1] = (bool) 0
0xd8c: IF (Stack[-1] == 0) GOTO 0xd9c; Pop(1)

0xd8d: PushEmpty(bool)
0xd8e: Stack[-1] = (bool) 0
0xd8f: PushEmpty(bool, object)
0xd90: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd91: Call2 0x159c

0xd92: Pop(1)
0xd93: IF (Stack[-1] == 0) GOTO 0xd9a; Pop(1)

0xd94: PushEmpty(bool, object)
0xd95: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd96: Call2 0x15d8

0xd97: Pop(1)
0xd98: IF (Stack[-1] == 0) GOTO 0xd9a; Pop(1)

0xd99: Stack[-1] = (bool) 1
0xd9a: IF (Stack[-1] == 0) GOTO 0xd9c; Pop(1)

0xd9b: Stack[-1] = (bool) 0
0xd9c: IF (Stack[-1] == 0) GOTO 0xda2; Pop(1)

0xd9d: Push((int) 511257)
0xd9e: Push((int) 12448)
0xd9f: Push((int) 12447)
0xda0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xda1: Pop(3)
0xda2: PushEmpty(bool, object)
0xda3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xda4: Call2 0x1500

0xda5: Pop(1)
0xda6: IF (Stack[-1] == 0) GOTO 0xdac; Pop(1)

0xda7: Push((int) 535125)
0xda8: Push((int) 36785)
0xda9: Push((int) 36784)
0xdaa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdab: Pop(3)
0xdac: Push((int) 511256)
0xdad: Push((int) -1)
0xdae: Push((int) 12446)
0xdaf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdb0: Pop(3)
0xdb1: GOTO 0xdb4

0xdb2: Return(); Pop(0)

0xdb3: GOTO 0xd60

0xdb4: PushEmpty(bool)
0xdb5: Call2 0x12fa

0xdb6: Pop(0)
0xdb7: IF (Stack[-1] == 0) GOTO 0xdc3; Pop(1)

0xdb8: @ lshWaitForAnimEnd()
0xdb9: Pop(0)
0xdba: Push( Stack[3 + Tasks[-1].StackPointer] )
0xdbb: IF (Stack[-1] == 0) GOTO 0xdbd; Pop(1)

0xdbc: GOTO 0xdc2

0xdbd: PushEmpty(string)
0xdbe: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xdbf: Call2 0x1234

0xdc0: Pop(1)
0xdc1: GOTO 0xdb8

0xdc2: GOTO 0xdd1

0xdc3: Push("all")
0xdc4: Push("idle")
0xdc5: @ PlayAnimation(Stack[-2], Stack[-1])
0xdc6: Pop(2)
0xdc7: @ WaitForAnimEnd()
0xdc8: Pop(0)
0xdc9: Push( Stack[3 + Tasks[-1].StackPointer] )
0xdca: IF (Stack[-1] == 0) GOTO 0xdcc; Pop(1)

0xdcb: GOTO 0xdd1

0xdcc: Push("all")
0xdcd: Push("idle")
0xdce: @ PlayAnimation(Stack[-2], Stack[-1])
0xdcf: Pop(2)
0xdd0: GOTO 0xdc7

0xdd1: Return(); Pop(0)

0xdd2: PushEmpty()
0xdd3: PushEmpty(bool)
0xdd4: Call2 0x12fa

0xdd5: Pop(0)
0xdd6: Pop(1); Push((bool) Stack[-1] == 0)
0xdd7: IF (Stack[-1] == 0) GOTO 0xdd9; Pop(1)

0xdd8: Return(); Pop(0)

0xdd9: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xdda: IF (Stack[-1] == 0) GOTO 0xddc; Pop(1)

0xddb: Return(); Pop(0)

0xddc: PushEmpty(string, bool)
0xddd: Stack[-2] = Stack[-3]
0xdde: Push("")
0xddf: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xde0: IF (Stack[-1] == 0) GOTO 0xde3; Pop(1)

0xde1: Stack[-1] = (bool) 0
0xde2: GOTO 0xde4

0xde3: Stack[-1] = (bool) 1
0xde4: Call2 0x1244

0xde5: Pop(2)
0xde6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xde7: Return(); Pop(0)

0xde8: PushEmpty()
0xde9: Push((int) 1)
0xdea: IF (Stack[-1] == 0) GOTO 0xf67; Pop(1)

0xdeb: PushEmpty()
0xdec: Call2 0x1262

0xded: Pop(0)
0xdee: Push((int) 12447)
0xdef: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdf0: IF (Stack[-1] == 0) GOTO 0xdf6; Pop(1)

0xdf1: PushEmpty(object, object)
0xdf2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdf3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdf4: Call2 0x145e

0xdf5: Pop(2)
0xdf6: Push((int) 36784)
0xdf7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdf8: IF (Stack[-1] == 0) GOTO 0xdfe; Pop(1)

0xdf9: PushEmpty(object, object)
0xdfa: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdfb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdfc: Call2 0x1395

0xdfd: Pop(2)
0xdfe: Push((int) 12445)
0xdff: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe00: IF (Stack[-1] == 0) GOTO 0xe51; Pop(1)

0xe01: PushEmpty(string)
0xe02: Stack[-1] = "Neutral"
0xe03: Call2 0xdd2

0xe04: Pop(1)
0xe05: Push((int) 511255)
0xe06: @@ SetMessage(Stack[-1])
0xe07: Pop(1)
0xe08: @@ ClearReplies()
0xe09: Pop(0)
0xe0a: PushEmpty(bool)
0xe0b: Stack[-1] = (bool) 1
0xe0c: PushEmpty(bool)
0xe0d: Stack[-1] = (bool) 1
0xe0e: PushEmpty(bool)
0xe0f: Stack[-1] = (bool) 0
0xe10: PushEmpty(bool, object)
0xe11: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe12: Call2 0x15d8

0xe13: Pop(1)
0xe14: IF (Stack[-1] == 0) GOTO 0xe1b; Pop(1)

0xe15: PushEmpty(bool, object)
0xe16: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe17: Call2 0x1590

0xe18: Pop(1)
0xe19: IF (Stack[-1] == 0) GOTO 0xe1b; Pop(1)

0xe1a: Stack[-1] = (bool) 1
0xe1b: IF (Stack[-1] == 0) GOTO 0xe2b; Pop(1)

0xe1c: PushEmpty(bool)
0xe1d: Stack[-1] = (bool) 0
0xe1e: PushEmpty(bool, object)
0xe1f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe20: Call2 0x15a8

0xe21: Pop(1)
0xe22: IF (Stack[-1] == 0) GOTO 0xe29; Pop(1)

0xe23: PushEmpty(bool, object)
0xe24: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe25: Call2 0x15d8

0xe26: Pop(1)
0xe27: IF (Stack[-1] == 0) GOTO 0xe29; Pop(1)

0xe28: Stack[-1] = (bool) 1
0xe29: IF (Stack[-1] == 0) GOTO 0xe2b; Pop(1)

0xe2a: Stack[-1] = (bool) 0
0xe2b: IF (Stack[-1] == 0) GOTO 0xe3b; Pop(1)

0xe2c: PushEmpty(bool)
0xe2d: Stack[-1] = (bool) 0
0xe2e: PushEmpty(bool, object)
0xe2f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe30: Call2 0x159c

0xe31: Pop(1)
0xe32: IF (Stack[-1] == 0) GOTO 0xe39; Pop(1)

0xe33: PushEmpty(bool, object)
0xe34: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe35: Call2 0x15d8

0xe36: Pop(1)
0xe37: IF (Stack[-1] == 0) GOTO 0xe39; Pop(1)

0xe38: Stack[-1] = (bool) 1
0xe39: IF (Stack[-1] == 0) GOTO 0xe3b; Pop(1)

0xe3a: Stack[-1] = (bool) 0
0xe3b: IF (Stack[-1] == 0) GOTO 0xe41; Pop(1)

0xe3c: Push((int) 511257)
0xe3d: Push((int) 12448)
0xe3e: Push((int) 12447)
0xe3f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe40: Pop(3)
0xe41: PushEmpty(bool, object)
0xe42: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe43: Call2 0x1500

0xe44: Pop(1)
0xe45: IF (Stack[-1] == 0) GOTO 0xe4b; Pop(1)

0xe46: Push((int) 535125)
0xe47: Push((int) 36785)
0xe48: Push((int) 36784)
0xe49: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe4a: Pop(3)
0xe4b: Push((int) 511256)
0xe4c: Push((int) -1)
0xe4d: Push((int) 12446)
0xe4e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe4f: Pop(3)
0xe50: Return(); Pop(0)

0xe51: Push((int) 36785)
0xe52: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe53: IF (Stack[-1] == 0) GOTO 0xe68; Pop(1)

0xe54: PushEmpty(string)
0xe55: Stack[-1] = "Modesty"
0xe56: Call2 0xdd2

0xe57: Pop(1)
0xe58: Push((int) 535126)
0xe59: @@ SetMessage(Stack[-1])
0xe5a: Pop(1)
0xe5b: @@ ClearReplies()
0xe5c: Pop(0)
0xe5d: Push((int) 535127)
0xe5e: Push((int) 36787)
0xe5f: Push((int) 36786)
0xe60: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe61: Pop(3)
0xe62: Push((int) 535134)
0xe63: Push((int) 36787)
0xe64: Push((int) 36793)
0xe65: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe66: Pop(3)
0xe67: Return(); Pop(0)

0xe68: Push((int) 36787)
0xe69: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe6a: IF (Stack[-1] == 0) GOTO 0xe7f; Pop(1)

0xe6b: PushEmpty(string)
0xe6c: Stack[-1] = "Modesty"
0xe6d: Call2 0xdd2

0xe6e: Pop(1)
0xe6f: Push((int) 535128)
0xe70: @@ SetMessage(Stack[-1])
0xe71: Pop(1)
0xe72: @@ ClearReplies()
0xe73: Pop(0)
0xe74: Push((int) 535129)
0xe75: Push((int) 36789)
0xe76: Push((int) 36788)
0xe77: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe78: Pop(3)
0xe79: Push((int) 535137)
0xe7a: Push((int) 36798)
0xe7b: Push((int) 36797)
0xe7c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe7d: Pop(3)
0xe7e: Return(); Pop(0)

0xe7f: Push((int) 36798)
0xe80: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe81: IF (Stack[-1] == 0) GOTO 0xe96; Pop(1)

0xe82: PushEmpty(string)
0xe83: Stack[-1] = "Modesty"
0xe84: Call2 0xdd2

0xe85: Pop(1)
0xe86: Push((int) 535138)
0xe87: @@ SetMessage(Stack[-1])
0xe88: Pop(1)
0xe89: @@ ClearReplies()
0xe8a: Pop(0)
0xe8b: Push((int) 535139)
0xe8c: Push((int) -1)
0xe8d: Push((int) 36799)
0xe8e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe8f: Pop(3)
0xe90: Push((int) 535140)
0xe91: Push((int) 36789)
0xe92: Push((int) 36800)
0xe93: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe94: Pop(3)
0xe95: Return(); Pop(0)

0xe96: Push((int) 36789)
0xe97: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe98: IF (Stack[-1] == 0) GOTO 0xeb2; Pop(1)

0xe99: PushEmpty(string)
0xe9a: Stack[-1] = "Modesty"
0xe9b: Call2 0xdd2

0xe9c: Pop(1)
0xe9d: Push((int) 535130)
0xe9e: @@ SetMessage(Stack[-1])
0xe9f: Pop(1)
0xea0: @@ ClearReplies()
0xea1: Pop(0)
0xea2: Push((int) 535131)
0xea3: Push((int) 36791)
0xea4: Push((int) 36790)
0xea5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xea6: Pop(3)
0xea7: PushEmpty(bool, object)
0xea8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xea9: Call2 0x1584

0xeaa: Pop(1)
0xeab: IF (Stack[-1] == 0) GOTO 0xeb1; Pop(1)

0xeac: Push((int) 535135)
0xead: Push((int) -1)
0xeae: Push((int) 36795)
0xeaf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeb0: Pop(3)
0xeb1: Return(); Pop(0)

0xeb2: Push((int) 36791)
0xeb3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xeb4: IF (Stack[-1] == 0) GOTO 0xec9; Pop(1)

0xeb5: PushEmpty(string)
0xeb6: Stack[-1] = "Modesty"
0xeb7: Call2 0xdd2

0xeb8: Pop(1)
0xeb9: Push((int) 535132)
0xeba: @@ SetMessage(Stack[-1])
0xebb: Pop(1)
0xebc: @@ ClearReplies()
0xebd: Pop(0)
0xebe: Push((int) 535133)
0xebf: Push((int) -1)
0xec0: Push((int) 36792)
0xec1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xec2: Pop(3)
0xec3: Push((int) 535136)
0xec4: Push((int) -1)
0xec5: Push((int) 36796)
0xec6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xec7: Pop(3)
0xec8: Return(); Pop(0)

0xec9: Push((int) 12448)
0xeca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xecb: IF (Stack[-1] == 0) GOTO 0xee0; Pop(1)

0xecc: PushEmpty(string)
0xecd: Stack[-1] = "Neutral"
0xece: Call2 0xdd2

0xecf: Pop(1)
0xed0: Push((int) 511258)
0xed1: @@ SetMessage(Stack[-1])
0xed2: Pop(1)
0xed3: @@ ClearReplies()
0xed4: Pop(0)
0xed5: Push((int) 511267)
0xed6: Push((int) 12458)
0xed7: Push((int) 12457)
0xed8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xed9: Pop(3)
0xeda: Push((int) 511260)
0xedb: Push((int) 12451)
0xedc: Push((int) 12450)
0xedd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xede: Pop(3)
0xedf: Return(); Pop(0)

0xee0: Push((int) 12451)
0xee1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xee2: IF (Stack[-1] == 0) GOTO 0xef2; Pop(1)

0xee3: PushEmpty(string)
0xee4: Stack[-1] = "Love"
0xee5: Call2 0xdd2

0xee6: Pop(1)
0xee7: Push((int) 511261)
0xee8: @@ SetMessage(Stack[-1])
0xee9: Pop(1)
0xeea: @@ ClearReplies()
0xeeb: Pop(0)
0xeec: Push((int) 511262)
0xeed: Push((int) 12453)
0xeee: Push((int) 12452)
0xeef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xef0: Pop(3)
0xef1: Return(); Pop(0)

0xef2: Push((int) 12453)
0xef3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xef4: IF (Stack[-1] == 0) GOTO 0xf04; Pop(1)

0xef5: PushEmpty(string)
0xef6: Stack[-1] = "Love"
0xef7: Call2 0xdd2

0xef8: Pop(1)
0xef9: Push((int) 511263)
0xefa: @@ SetMessage(Stack[-1])
0xefb: Pop(1)
0xefc: @@ ClearReplies()
0xefd: Pop(0)
0xefe: Push((int) 511264)
0xeff: Push((int) 12455)
0xf00: Push((int) 12454)
0xf01: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf02: Pop(3)
0xf03: Return(); Pop(0)

0xf04: Push((int) 12455)
0xf05: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf06: IF (Stack[-1] == 0) GOTO 0xf16; Pop(1)

0xf07: PushEmpty(string)
0xf08: Stack[-1] = "Love"
0xf09: Call2 0xdd2

0xf0a: Pop(1)
0xf0b: Push((int) 511265)
0xf0c: @@ SetMessage(Stack[-1])
0xf0d: Pop(1)
0xf0e: @@ ClearReplies()
0xf0f: Pop(0)
0xf10: Push((int) 511266)
0xf11: Push((int) 12458)
0xf12: Push((int) 12456)
0xf13: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf14: Pop(3)
0xf15: Return(); Pop(0)

0xf16: Push((int) 12458)
0xf17: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf18: IF (Stack[-1] == 0) GOTO 0xf2d; Pop(1)

0xf19: PushEmpty(string)
0xf1a: Stack[-1] = "Neutral"
0xf1b: Call2 0xdd2

0xf1c: Pop(1)
0xf1d: Push((int) 511268)
0xf1e: @@ SetMessage(Stack[-1])
0xf1f: Pop(1)
0xf20: @@ ClearReplies()
0xf21: Pop(0)
0xf22: Push((int) 511269)
0xf23: Push((int) 12463)
0xf24: Push((int) 12459)
0xf25: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf26: Pop(3)
0xf27: Push((int) 511270)
0xf28: Push((int) 12461)
0xf29: Push((int) 12460)
0xf2a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf2b: Pop(3)
0xf2c: Return(); Pop(0)

0xf2d: Push((int) 12461)
0xf2e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf2f: IF (Stack[-1] == 0) GOTO 0xf44; Pop(1)

0xf30: PushEmpty(string)
0xf31: Stack[-1] = "Love"
0xf32: Call2 0xdd2

0xf33: Pop(1)
0xf34: Push((int) 511271)
0xf35: @@ SetMessage(Stack[-1])
0xf36: Pop(1)
0xf37: @@ ClearReplies()
0xf38: Pop(0)
0xf39: Push((int) 511273)
0xf3a: Push((int) 12463)
0xf3b: Push((int) 12464)
0xf3c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf3d: Pop(3)
0xf3e: Push((int) 511274)
0xf3f: Push((int) -1)
0xf40: Push((int) 12465)
0xf41: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf42: Pop(3)
0xf43: Return(); Pop(0)

0xf44: Push((int) 12463)
0xf45: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf46: IF (Stack[-1] == 0) GOTO 0xf5b; Pop(1)

0xf47: PushEmpty(string)
0xf48: Stack[-1] = "Love"
0xf49: Call2 0xdd2

0xf4a: Pop(1)
0xf4b: Push((int) 511272)
0xf4c: @@ SetMessage(Stack[-1])
0xf4d: Pop(1)
0xf4e: @@ ClearReplies()
0xf4f: Pop(0)
0xf50: Push((int) 511275)
0xf51: Push((int) -1)
0xf52: Push((int) 12467)
0xf53: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf54: Pop(3)
0xf55: Push((int) 511276)
0xf56: Push((int) -1)
0xf57: Push((int) 12468)
0xf58: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf59: Pop(3)
0xf5a: Return(); Pop(0)

0xf5b: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xf5c: PushEmpty(bool)
0xf5d: Call2 0x12fa

0xf5e: Pop(0)
0xf5f: IF (Stack[-1] == 0) GOTO 0xf63; Pop(1)

0xf60: @ lshStopAnimation()
0xf61: Pop(0)
0xf62: GOTO 0xf65

0xf63: @ StopAnimation()
0xf64: Pop(0)
0xf65: Return(); Pop(0)

0xf66: GOTO 0xde9

0xf67: Return(); Pop(0)

0xf68: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xf69: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xf6a: PushEmpty(bool, object, float)
0xf6b: Stack[-2] = Stack[-12]
0xf6c: Stack[-1] = (float) 70.0
0xf6d: Call2 0x1153

0xf6e: Pop(2)
0xf6f: Pop(1); Push((bool) Stack[-1] == 0)
0xf70: IF (Stack[-1] == 0) GOTO 0xf73; Pop(1)

0xf71: Stack[-10] = (int) -2
0xf72: Return(); Pop(8)

0xf73: @ CreateDialog(Stack[-4])
0xf74: Pop(0)
0xf75: PushEmpty(int)
0xf76: Call2 0x12f4

0xf77: Pop(0)
0xf78: @@ SetNPCName(Stack[-1])
0xf79: Pop(1)
0xf7a: PushEmpty(int)
0xf7b: Call2 0x12f2

0xf7c: Pop(0)
0xf7d: @@ SetNPCDescription(Stack[-1])
0xf7e: Pop(1)
0xf7f: PushEmpty(string)
0xf80: Call2 0x12f6

0xf81: Pop(0)
0xf82: @@ SetPhoto(Stack[-1])
0xf83: Pop(1)
0xf84: PushEmpty(string)
0xf85: Call2 0x12f8

0xf86: Pop(0)
0xf87: @@ SetPhoto2(Stack[-1])
0xf88: Pop(1)
0xf89: PushEmpty(int)
0xf8a: Call2 0x167f

0xf8b: Pop(0)
0xf8c: @@ SetPlayerName(Stack[-1])
0xf8d: Pop(1)
0xf8e: Stack[-2] = (int) -1
0xf8f: @ IsOverrideActive(Stack[-3])
0xf90: Pop(0)
0xf91: Push(Stack[-3])
0xf92: IF (Stack[-1] == 0) GOTO 0xf95; Pop(1)

0xf93: Stack[-10] = (int) -2
0xf94: Return(); Pop(8)

0xf95: @ DoDialog(Stack[-4])
0xf96: Pop(0)
0xf97: PushEmpty(bool, object)
0xf98: PushEmpty(object)
0xf99: Call2 0x1269

0xf9a: Stack[-2] = Stack[-1]
0xf9b: Pop(1)
0xf9c: Call2 0x11aa

0xf9d: Pop(2)
0xf9e: PushEmpty(object, object)
0xf9f: Stack[-2] = Stack[-11]
0xfa0: Stack[-1] = Stack[-6]
0xfa1: Push(-2, 4); TaskCall(11)
0xfa2: Call2 0xfb9

0xfa3: Pop(-2, 4); TaskReturn
0xfa4: Pop(2)
0xfa5: @@ IsDialogEnd(Stack[-1])
0xfa6: Pop(0)
0xfa7: Pop(0); Push((bool) Stack[-1] == 0)
0xfa8: IF (Stack[-1] == 0) GOTO 0xfae; Pop(1)

0xfa9: @ sync()
0xfaa: Pop(0)
0xfab: @@ IsDialogEnd(Stack[-1])
0xfac: Pop(0)
0xfad: GOTO 0xfa7

0xfae: PushEmpty(object)
0xfaf: Stack[-1] = Stack[-10]
0xfb0: Call2 0x1198

0xfb1: Pop(1)
0xfb2: @ StopDialog(Stack[-4])
0xfb3: Pop(0)
0xfb4: @@ GetReturnValue(Stack[-2])
0xfb5: Pop(0)
0xfb6: Stack[-10] = Stack[-2]
0xfb7: Return(); Pop(8)

0xfb8: Stack[-4] = 0
0xfb9: PushEmpty()
0xfba: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xfbb: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xfbc: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xfbd: Push((int) 1)
0xfbe: IF (Stack[-1] == 0) GOTO 0xfd5; Pop(1)

0xfbf: PushEmpty(string)
0xfc0: Stack[-1] = "Neutral"
0xfc1: Call2 0xff3

0xfc2: Pop(1)
0xfc3: Push((int) 540548)
0xfc4: @@ SetMessage(Stack[-1])
0xfc5: Pop(1)
0xfc6: @@ ClearReplies()
0xfc7: Pop(0)
0xfc8: Push((int) 540549)
0xfc9: Push((int) -1)
0xfca: Push((int) 42558)
0xfcb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfcc: Pop(3)
0xfcd: Push((int) 540797)
0xfce: Push((int) -1)
0xfcf: Push((int) 42846)
0xfd0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfd1: Pop(3)
0xfd2: GOTO 0xfd5

0xfd3: Return(); Pop(0)

0xfd4: GOTO 0xfbd

0xfd5: PushEmpty(bool)
0xfd6: Call2 0x12fa

0xfd7: Pop(0)
0xfd8: IF (Stack[-1] == 0) GOTO 0xfe4; Pop(1)

0xfd9: @ lshWaitForAnimEnd()
0xfda: Pop(0)
0xfdb: Push( Stack[3 + Tasks[-1].StackPointer] )
0xfdc: IF (Stack[-1] == 0) GOTO 0xfde; Pop(1)

0xfdd: GOTO 0xfe3

0xfde: PushEmpty(string)
0xfdf: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xfe0: Call2 0x1234

0xfe1: Pop(1)
0xfe2: GOTO 0xfd9

0xfe3: GOTO 0xff2

0xfe4: Push("all")
0xfe5: Push("idle")
0xfe6: @ PlayAnimation(Stack[-2], Stack[-1])
0xfe7: Pop(2)
0xfe8: @ WaitForAnimEnd()
0xfe9: Pop(0)
0xfea: Push( Stack[3 + Tasks[-1].StackPointer] )
0xfeb: IF (Stack[-1] == 0) GOTO 0xfed; Pop(1)

0xfec: GOTO 0xff2

0xfed: Push("all")
0xfee: Push("idle")
0xfef: @ PlayAnimation(Stack[-2], Stack[-1])
0xff0: Pop(2)
0xff1: GOTO 0xfe8

0xff2: Return(); Pop(0)

0xff3: PushEmpty()
0xff4: PushEmpty(bool)
0xff5: Call2 0x12fa

0xff6: Pop(0)
0xff7: Pop(1); Push((bool) Stack[-1] == 0)
0xff8: IF (Stack[-1] == 0) GOTO 0xffa; Pop(1)

0xff9: Return(); Pop(0)

0xffa: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xffb: IF (Stack[-1] == 0) GOTO 0xffd; Pop(1)

0xffc: Return(); Pop(0)

0xffd: PushEmpty(string, bool)
0xffe: Stack[-2] = Stack[-3]
0xfff: Push("")
0x1000: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1001: IF (Stack[-1] == 0) GOTO 0x1004; Pop(1)

0x1002: Stack[-1] = (bool) 0
0x1003: GOTO 0x1005

0x1004: Stack[-1] = (bool) 1
0x1005: Call2 0x1244

0x1006: Pop(2)
0x1007: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1008: Return(); Pop(0)

0x1009: PushEmpty()
0x100a: Push((int) 1)
0x100b: IF (Stack[-1] == 0) GOTO 0x1032; Pop(1)

0x100c: PushEmpty()
0x100d: Call2 0x1262

0x100e: Pop(0)
0x100f: Push((int) 42557)
0x1010: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1011: IF (Stack[-1] == 0) GOTO 0x1026; Pop(1)

0x1012: PushEmpty(string)
0x1013: Stack[-1] = "Neutral"
0x1014: Call2 0xff3

0x1015: Pop(1)
0x1016: Push((int) 540548)
0x1017: @@ SetMessage(Stack[-1])
0x1018: Pop(1)
0x1019: @@ ClearReplies()
0x101a: Pop(0)
0x101b: Push((int) 540549)
0x101c: Push((int) -1)
0x101d: Push((int) 42558)
0x101e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x101f: Pop(3)
0x1020: Push((int) 540797)
0x1021: Push((int) -1)
0x1022: Push((int) 42846)
0x1023: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1024: Pop(3)
0x1025: Return(); Pop(0)

0x1026: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1027: PushEmpty(bool)
0x1028: Call2 0x12fa

0x1029: Pop(0)
0x102a: IF (Stack[-1] == 0) GOTO 0x102e; Pop(1)

0x102b: @ lshStopAnimation()
0x102c: Pop(0)
0x102d: GOTO 0x1030

0x102e: @ StopAnimation()
0x102f: Pop(0)
0x1030: Return(); Pop(0)

0x1031: GOTO 0x100a

0x1032: Return(); Pop(0)

0x1033: PushEmpty()
0x1034: Call2 0x1037

0x1035: Pop(0)
0x1036: Return(); Pop(0)

0x1037: PushEmpty(bool)
0x1038: Call2 0x114e

0x1039: Pop(0)
0x103a: Pop(1); Push((bool) Stack[-1] == 0)
0x103b: IF (Stack[-1] == 0) GOTO 0x103e; Pop(1)

0x103c: @ Hold()
0x103d: Pop(0)
0x103e: @ GetDirection(Stack[-0])
0x103f: Pop(0)
0x1040: PushEmpty()
0x1041: Call2 0x10e7

0x1042: Pop(0)
0x1043: GOTO 0x1040

0x1044: Return(); Pop(0)

0x1045: PushEmpty(object, object)
0x1046: Push("player")
0x1047: @ FindActor(Stack[-2], Stack[-1])
0x1048: Pop(1)
0x1049: Pop(0); Push((bool) Stack[-1] == 0)
0x104a: IF (Stack[-1] == 0) GOTO 0x104d; Pop(1)

0x104b: Stack[-3] = (bool) 0
0x104c: Return(); Pop(2)

0x104d: PushEmpty(bool, object)
0x104e: Stack[-1] = Stack[-3]
0x104f: Call2 0x1145

0x1050: Stack[-5] = Stack[-2]
0x1051: Pop(2)
0x1052: Return(); Pop(2)

0x1053: Stack[-1] = 0
0x1054: Push(CvectorIndex(Stack[-0], 0))
0x1055: Push(CvectorIndex(Stack[-0], 2))
0x1056: @ RotateAsync(Stack[-2], Stack[-1])
0x1057: Pop(2)
0x1058: Return(); Pop(0)

0x1059: PushEmpty(object, bool, object, bool)
0x105a: Push("player")
0x105b: @ FindActor(Stack[-3], Stack[-1])
0x105c: Pop(1)
0x105d: Pop(0); Push((bool) Stack[-2] == 0)
0x105e: IF (Stack[-1] == 0) GOTO 0x1061; Pop(1)

0x105f: Stack[-5] = (bool) 0
0x1060: Return(); Pop(4)

0x1061: PushEmpty(float, object)
0x1062: Stack[-1] = Stack[-4]
0x1063: Call2 0x1133

0x1064: Pop(1)
0x1065: Push((float)90000.0)
0x1066: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x1067: IF (Stack[-1] == 0) GOTO 0x106a; Pop(1)

0x1068: Stack[-5] = (bool) 0
0x1069: Return(); Pop(4)

0x106a: @ CanSee(Stack[-1], Stack[-2])
0x106b: Pop(0)
0x106c: Stack[-5] = Stack[-1]
0x106d: Return(); Pop(4)

0x106e: Stack[-2] = 0
0x106f: PushEmpty(float, float)
0x1070: Push((int) 8)
0x1071: Push((int) 16)
0x1072: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x1073: Pop(2)
0x1074: Push((int) 10)
0x1075: @ SetTimer(Stack[-1], Stack[-2])
0x1076: Pop(1)
0x1077: Return(); Pop(2)

0x1078: Push((int) 10)
0x1079: @ KillTimer(Stack[-1])
0x107a: Pop(1)
0x107b: Return(); Pop(0)

0x107c: PushEmpty()
0x107d: Push((int) 10)
0x107e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x107f: IF (Stack[-1] == 0) GOTO 0x10a1; Pop(1)

0x1080: PushEmpty()
0x1081: Call2 0x1078

0x1082: Pop(0)
0x1083: PushEmpty(bool)
0x1084: Stack[-1] = (bool) 0
0x1085: PushEmpty(bool)
0x1086: Call2 0x114e

0x1087: Pop(0)
0x1088: IF (Stack[-1] == 0) GOTO 0x108e; Pop(1)

0x1089: PushEmpty(bool)
0x108a: Call2 0x1059

0x108b: Pop(0)
0x108c: IF (Stack[-1] == 0) GOTO 0x108e; Pop(1)

0x108d: Stack[-1] = (bool) 1
0x108e: IF (Stack[-1] == 0) GOTO 0x109b; Pop(1)

0x108f: PushEmpty(bool)
0x1090: Call2 0x1045

0x1091: Pop(0)
0x1092: IF (Stack[-1] == 0) GOTO 0x109a; Pop(1)

0x1093: PushEmpty(bool, object)
0x1094: PushEmpty(object)
0x1095: Call2 0x1269

0x1096: Stack[-2] = Stack[-1]
0x1097: Pop(1)
0x1098: Call2 0x11e4

0x1099: Pop(2)
0x109a: GOTO 0x10a1

0x109b: PushEmpty()
0x109c: Call2 0x1054

0x109d: Pop(0)
0x109e: PushEmpty()
0x109f: Call2 0x106f

0x10a0: Pop(0)
0x10a1: Return(); Pop(0)

0x10a2: PushEmpty()
0x10a3: Call2 0x112e

0x10a4: Pop(0)
0x10a5: PushEmpty()
0x10a6: Call2 0x1078

0x10a7: Pop(0)
0x10a8: @ lshStopSpeech()
0x10a9: Pop(0)
0x10aa: @ lshStopAnimation()
0x10ab: Pop(0)
0x10ac: @ StopAsync()
0x10ad: Pop(0)
0x10ae: @ Hold()
0x10af: Pop(0)
0x10b0: Return(); Pop(0)

0x10b1: @ StopGroup0()
0x10b2: Pop(0)
0x10b3: PushEmpty()
0x10b4: Call2 0x1078

0x10b5: Pop(0)
0x10b6: PushEmpty(string)
0x10b7: Stack[-1] = "Neutral"
0x10b8: Call2 0x1234

0x10b9: Pop(1)
0x10ba: PushEmpty()
0x10bb: Call2 0x106f

0x10bc: Pop(0)
0x10bd: Return(); Pop(0)

0x10be: PushEmpty()
0x10bf: Push(Stack[-1])
0x10c0: IF (Stack[-1] == 0) GOTO 0x10c5; Pop(1)

0x10c1: PushEmpty()
0x10c2: Call2 0x106f

0x10c3: Pop(0)
0x10c4: GOTO 0x10c9

0x10c5: PushEmpty(string)
0x10c6: Stack[-1] = "Neutral"
0x10c7: Call2 0x1234

0x10c8: Pop(1)
0x10c9: Return(); Pop(0)

0x10ca: PushEmpty(bool, bool)
0x10cb: @ IsOverrideActive(Stack[-1])
0x10cc: Pop(0)
0x10cd: Pop(0); Push((bool) Stack[-1] == 0)
0x10ce: IF (Stack[-1] == 0) GOTO 0x10e6; Pop(1)

0x10cf: EventDisable(0)
0x10d0: PushEmpty()
0x10d1: Call2 0x112e

0x10d2: Pop(0)
0x10d3: PushEmpty(bool, object)
0x10d4: Stack[-1] = Stack[-5]
0x10d5: Call2 0x1145

0x10d6: Pop(2)
0x10d7: EventEnable(0)
0x10d8: PushEmpty(object)
0x10d9: Stack[-1] = Stack[-4]
0x10da: Call2 0x1690

0x10db: Pop(1)
0x10dc: PushEmpty(string)
0x10dd: Stack[-1] = "Neutral"
0x10de: Call2 0x1234

0x10df: Pop(1)
0x10e0: PushEmpty()
0x10e1: Call2 0x1078

0x10e2: Pop(0)
0x10e3: PushEmpty()
0x10e4: Call2 0x106f

0x10e5: Pop(0)
0x10e6: Return(); Pop(2)

0x10e7: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x10e8: @ WaitForAnimEnd()
0x10e9: Pop(0)
0x10ea: PushEmpty(bool)
0x10eb: Call2 0x114e

0x10ec: Pop(0)
0x10ed: Pop(1); Push((bool) Stack[-1] == 0)
0x10ee: IF (Stack[-1] == 0) GOTO 0x10f0; Pop(1)

0x10ef: Return(); Pop(12)

0x10f0: PushEmpty(int)
0x10f1: Call2 0x12e1

0x10f2: Stack[-7] = Stack[-1]
0x10f3: Pop(1)
0x10f4: Stack[-5] = (int) 0
0x10f5: PushEmpty(bool)
0x10f6: Stack[-1] = (bool) 0
0x10f7: Push((int) 5)
0x10f8: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x10f9: IF (Stack[-1] == 0) GOTO 0x10ff; Pop(1)

0x10fa: PushEmpty(bool)
0x10fb: Call2 0x114e

0x10fc: Pop(0)
0x10fd: IF (Stack[-1] == 0) GOTO 0x10ff; Pop(1)

0x10fe: Stack[-1] = (bool) 1
0x10ff: IF (Stack[-1] == 0) GOTO 0x1129; Pop(1)

0x1100: Pop(0); Push((bool) Stack[-6] == 0)
0x1101: IF (Stack[-1] == 0) GOTO 0x1109; Pop(1)

0x1102: Push((int) 3)
0x1103: @ Sleep(Stack[-1], Stack[-5])
0x1104: Pop(1)
0x1105: Pop(0); Push((bool) Stack[-4] == 0)
0x1106: IF (Stack[-1] == 0) GOTO 0x1108; Pop(1)

0x1107: GOTO 0x1129

0x1108: GOTO 0x111e

0x1109: @ irand(Stack[-3], Stack[-6])
0x110a: Pop(0)
0x110b: Push((int) 5)
0x110c: @ irand(Stack[-3], Stack[-1])
0x110d: Pop(1)
0x110e: Push((int) 0)
0x110f: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x1110: IF (Stack[-1] == 0) GOTO 0x1112; Pop(1)

0x1111: Stack[-3] = (int) 0
0x1112: Push("all")
0x1113: PushEmpty(string, int)
0x1114: Stack[-1] = Stack[-6]
0x1115: Call2 0x12da

0x1116: Pop(1)
0x1117: @ PlayAnimation(Stack[-2], Stack[-1])
0x1118: Pop(2)
0x1119: @ WaitForAnimEnd(Stack[-1])
0x111a: Pop(0)
0x111b: Pop(0); Push((bool) Stack[-1] == 0)
0x111c: IF (Stack[-1] == 0) GOTO 0x111e; Pop(1)

0x111d: GOTO 0x1129

0x111e: PushEmpty(bool)
0x111f: Call2 0x112c

0x1120: Pop(0)
0x1121: Pop(1); Push((bool) Stack[-1] == 0)
0x1122: IF (Stack[-1] == 0) GOTO 0x1124; Pop(1)

0x1123: GOTO 0x1129

0x1124: @ ResetAAS()
0x1125: Pop(0)
0x1126: Push((int) 1)
0x1127: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x1128: GOTO 0x10f5

0x1129: @ ResetAAS()
0x112a: Pop(0)
0x112b: Return(); Pop(12)

0x112c: Stack[-1] = (bool) 1
0x112d: Return(); Pop(0)

0x112e: @ StopAnimation()
0x112f: Pop(0)
0x1130: @ StopGroup0()
0x1131: Pop(0)
0x1132: Return(); Pop(0)

0x1133: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x1134: @ GetPosition(Stack[-3])
0x1135: Pop(0)
0x1136: @@ GetPosition(Stack[-2])
0x1137: Pop(0)
0x1138: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x1139: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x113a: Return(); Pop(6)

0x113b: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x113c: @ GetPosition(Stack[-3])
0x113d: Pop(0)
0x113e: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x113f: Push(CvectorIndex(Stack[-2], 0))
0x1140: Push(CvectorIndex(Stack[-3], 2))
0x1141: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x1142: Pop(2)
0x1143: Stack[-8] = Stack[-1]
0x1144: Return(); Pop(6)

0x1145: PushEmpty(cvector, cvector)
0x1146: @@ GetPosition(Stack[-1])
0x1147: Pop(0)
0x1148: PushEmpty(bool, cvector)
0x1149: Stack[-1] = Stack[-3]
0x114a: Call2 0x113b

0x114b: Stack[-6] = Stack[-2]
0x114c: Pop(2)
0x114d: Return(); Pop(2)

0x114e: PushEmpty(bool, bool)
0x114f: @ IsLoaded(Stack[-1])
0x1150: Pop(0)
0x1151: Stack[-3] = Stack[-1]
0x1152: Return(); Pop(2)

0x1153: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x1154: @@ GetPosition(Stack[-8])
0x1155: Pop(0)
0x1156: @@ GetEyesHeight(Stack[-9])
0x1157: Pop(0)
0x1158: Push(CvectorIndex(Stack[-8], 1))
0x1159: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x115a: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x115b: @ GetPosition(Stack[-7])
0x115c: Pop(0)
0x115d: @ GetEyesHeight(Stack[-9])
0x115e: Pop(0)
0x115f: Push(CvectorIndex(Stack[-7], 1))
0x1160: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1161: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1162: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x1163: Push(CvectorIndex(Stack[-6], 1))
0x1164: Stack[-1] = (int) 0
0x1165: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1166: Pop(0); Push(Stack[-6] | Stack[-6]);
0x1167: Pop(1); Push(Sqrt(Stack[-1]))
0x1168: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x1169: Stack[-5] = -Stack[-6]; Pop(0);
0x116a: Pop(0); Push(Stack[-6] * Stack[-19]);
0x116b: PushEmpty(cvector, cvector)
0x116c: Push(CVector(0.0, 1.0, 0.0))
0x116d: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x116e: Call2 0x126f

0x116f: Pop(1)
0x1170: Push((int) 25)
0x1171: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1172: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1173: Push(CVector(0.0, 10.0, 0.0))
0x1174: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x1175: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x1176: @ IsOverrideActive(Stack[-2])
0x1177: Pop(0)
0x1178: Push(Stack[-2])
0x1179: IF (Stack[-1] == 0) GOTO 0x117c; Pop(1)

0x117a: Stack[-21] = (bool) 0
0x117b: Return(); Pop(18)

0x117c: @ StopWorld()
0x117d: Pop(0)
0x117e: Push((bool) 1)
0x117f: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x1180: Pop(1)
0x1181: Push(CvectorIndex(Stack[-4], 0))
0x1182: Push(CvectorIndex(Stack[-5], 2))
0x1183: @ Rotate(Stack[-2], Stack[-1])
0x1184: Pop(2)
0x1185: PushEmpty(bool)
0x1186: Call2 0x12fa

0x1187: Pop(0)
0x1188: IF (Stack[-1] == 0) GOTO 0x118a; Pop(1)

0x1189: GOTO 0x1192

0x118a: Push("head")
0x118b: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x118c: Pop(1)
0x118d: Push(Stack[-1])
0x118e: IF (Stack[-1] == 0) GOTO 0x1192; Pop(1)

0x118f: Push("head")
0x1190: @ LookAsyncCamera(Stack[-1])
0x1191: Pop(1)
0x1192: @ CameraWaitForPlayFinish()
0x1193: Pop(0)
0x1194: @ ResumeWorld()
0x1195: Pop(0)
0x1196: Stack[-21] = (bool) 1
0x1197: Return(); Pop(18)

0x1198: PushEmpty(bool, bool)
0x1199: Push((bool) 1)
0x119a: @ CameraSwitchToNormal(Stack[-1])
0x119b: Pop(1)
0x119c: PushEmpty(bool)
0x119d: Call2 0x12fa

0x119e: Pop(0)
0x119f: IF (Stack[-1] == 0) GOTO 0x11a1; Pop(1)

0x11a0: GOTO 0x11a9

0x11a1: Push("head")
0x11a2: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x11a3: Pop(1)
0x11a4: Push(Stack[-1])
0x11a5: IF (Stack[-1] == 0) GOTO 0x11a9; Pop(1)

0x11a6: Push("head")
0x11a7: @ UnlookAsync(Stack[-1])
0x11a8: Pop(1)
0x11a9: Return(); Pop(2)

0x11aa: PushEmpty(int, int, int, int)
0x11ab: Push("voice_common")
0x11ac: @ GetVariable(Stack[-1], Stack[-3])
0x11ad: Pop(1)
0x11ae: Push(Stack[-2])
0x11af: IF (Stack[-1] == 0) GOTO 0x11d0; Pop(1)

0x11b0: PushEmpty(bool, object)
0x11b1: Stack[-1] = Stack[-7]
0x11b2: Call2 0x11e4

0x11b3: Pop(1)
0x11b4: Pop(1); Push((bool) Stack[-1] == 0)
0x11b5: IF (Stack[-1] == 0) GOTO 0x11be; Pop(1)

0x11b6: PushEmpty(bool, object)
0x11b7: Stack[-1] = Stack[-7]
0x11b8: Call2 0x1209

0x11b9: Pop(1)
0x11ba: Pop(1); Push((bool) Stack[-1] == 0)
0x11bb: IF (Stack[-1] == 0) GOTO 0x11be; Pop(1)

0x11bc: Stack[-6] = (bool) 0
0x11bd: Return(); Pop(4)

0x11be: Push((int) 2)
0x11bf: @ irand(Stack[-2], Stack[-1])
0x11c0: Pop(1)
0x11c1: Push(Stack[-1])
0x11c2: IF (Stack[-1] == 0) GOTO 0x11cb; Pop(1)

0x11c3: Push("voice_common")
0x11c4: Push((int) 1)
0x11c5: Pop(1); Push(Stack[-4] + Stack[-1]);
0x11c6: Push((int) 3)
0x11c7: Pop(2); Push(Stack[-2] % Stack[-1]);
0x11c8: @ SetVariable(Stack[-2], Stack[-1])
0x11c9: Pop(2)
0x11ca: GOTO 0x11cf

0x11cb: Push("voice_common")
0x11cc: Push((int) 0)
0x11cd: @ SetVariable(Stack[-2], Stack[-1])
0x11ce: Pop(2)
0x11cf: GOTO 0x11e2

0x11d0: PushEmpty(bool, object)
0x11d1: Stack[-1] = Stack[-7]
0x11d2: Call2 0x1209

0x11d3: Pop(1)
0x11d4: Pop(1); Push((bool) Stack[-1] == 0)
0x11d5: IF (Stack[-1] == 0) GOTO 0x11de; Pop(1)

0x11d6: PushEmpty(bool, object)
0x11d7: Stack[-1] = Stack[-7]
0x11d8: Call2 0x11e4

0x11d9: Pop(1)
0x11da: Pop(1); Push((bool) Stack[-1] == 0)
0x11db: IF (Stack[-1] == 0) GOTO 0x11de; Pop(1)

0x11dc: Stack[-6] = (bool) 0
0x11dd: Return(); Pop(4)

0x11de: Push("voice_common")
0x11df: Push((int) 1)
0x11e0: @ SetVariable(Stack[-2], Stack[-1])
0x11e1: Pop(2)
0x11e2: Stack[-6] = (bool) 1
0x11e3: Return(); Pop(4)

0x11e4: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x11e5: Stack[-5] = "c"
0x11e6: Stack[-4] = (int) 0
0x11e7: Push((int) 1)
0x11e8: IF (Stack[-1] == 0) GOTO 0x11f4; Pop(1)

0x11e9: Push((int) 1)
0x11ea: Pop(1); Push(Stack[-5] + Stack[-1]);
0x11eb: Pop(1); Push(Stack[-6] + Stack[-1]);
0x11ec: @@ HasProperty(Stack[-1], Stack[-4])
0x11ed: Pop(1)
0x11ee: Pop(0); Push((bool) Stack[-3] == 0)
0x11ef: IF (Stack[-1] == 0) GOTO 0x11f1; Pop(1)

0x11f0: GOTO 0x11f4

0x11f1: Push((int) 1)
0x11f2: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x11f3: GOTO 0x11e7

0x11f4: Pop(0); Push((bool) Stack[-4] == 0)
0x11f5: IF (Stack[-1] == 0) GOTO 0x11f8; Pop(1)

0x11f6: Stack[-12] = (bool) 0
0x11f7: Return(); Pop(10)

0x11f8: Stack[-2] = (int) 0
0x11f9: Push((int) 1)
0x11fa: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x11fb: IF (Stack[-1] == 0) GOTO 0x11fe; Pop(1)

0x11fc: @ irand(Stack[-2], Stack[-4])
0x11fd: Pop(0)
0x11fe: Push((int) 1)
0x11ff: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1200: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1201: @@ GetProperty(Stack[-1], Stack[-2])
0x1202: Pop(1)
0x1203: PushEmpty(bool, string)
0x1204: Stack[-1] = Stack[-3]
0x1205: Call2 0x1253

0x1206: Stack[-14] = Stack[-2]
0x1207: Pop(2)
0x1208: Return(); Pop(10)

0x1209: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x120a: Push("d")
0x120b: PushEmpty(int)
0x120c: Call2 0x12cb

0x120d: Pop(0)
0x120e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x120f: Push("m")
0x1210: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x1211: Stack[-4] = (int) 0
0x1212: Push((int) 1)
0x1213: IF (Stack[-1] == 0) GOTO 0x121f; Pop(1)

0x1214: Push((int) 1)
0x1215: Pop(1); Push(Stack[-5] + Stack[-1]);
0x1216: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1217: @@ HasProperty(Stack[-1], Stack[-4])
0x1218: Pop(1)
0x1219: Pop(0); Push((bool) Stack[-3] == 0)
0x121a: IF (Stack[-1] == 0) GOTO 0x121c; Pop(1)

0x121b: GOTO 0x121f

0x121c: Push((int) 1)
0x121d: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x121e: GOTO 0x1212

0x121f: Pop(0); Push((bool) Stack[-4] == 0)
0x1220: IF (Stack[-1] == 0) GOTO 0x1223; Pop(1)

0x1221: Stack[-12] = (bool) 0
0x1222: Return(); Pop(10)

0x1223: Stack[-2] = (int) 0
0x1224: Push((int) 1)
0x1225: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x1226: IF (Stack[-1] == 0) GOTO 0x1229; Pop(1)

0x1227: @ irand(Stack[-2], Stack[-4])
0x1228: Pop(0)
0x1229: Push((int) 1)
0x122a: Pop(1); Push(Stack[-3] + Stack[-1]);
0x122b: Pop(1); Push(Stack[-6] + Stack[-1]);
0x122c: @@ GetProperty(Stack[-1], Stack[-2])
0x122d: Pop(1)
0x122e: PushEmpty(bool, string)
0x122f: Stack[-1] = Stack[-3]
0x1230: Call2 0x1253

0x1231: Stack[-14] = Stack[-2]
0x1232: Pop(2)
0x1233: Return(); Pop(10)

0x1234: PushEmpty(bool, float, float, bool, float, float)
0x1235: @ lshHasAnimation(Stack[-3], Stack[-7])
0x1236: Pop(0)
0x1237: Push(Stack[-3])
0x1238: IF (Stack[-1] == 0) GOTO 0x123f; Pop(1)

0x1239: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x123a: Pop(0)
0x123b: Push((bool) 0)
0x123c: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x123d: Pop(1)
0x123e: GOTO 0x1243

0x123f: Push("Can't find lsh animation : ")
0x1240: Pop(1); Push(Stack[-1] + Stack[-8]);
0x1241: @ Trace(Stack[-1])
0x1242: Pop(1)
0x1243: Return(); Pop(6)

0x1244: PushEmpty(bool, float, float, bool, float, float)
0x1245: @ lshHasAnimation(Stack[-3], Stack[-8])
0x1246: Pop(0)
0x1247: Push(Stack[-3])
0x1248: IF (Stack[-1] == 0) GOTO 0x124e; Pop(1)

0x1249: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x124a: Pop(0)
0x124b: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x124c: Pop(0)
0x124d: GOTO 0x1252

0x124e: Push("Can't find lsh animation : ")
0x124f: Pop(1); Push(Stack[-1] + Stack[-9]);
0x1250: @ Trace(Stack[-1])
0x1251: Pop(1)
0x1252: Return(); Pop(6)

0x1253: PushEmpty(bool, bool)
0x1254: PushEmpty(bool)
0x1255: Call2 0x12fa

0x1256: Pop(0)
0x1257: IF (Stack[-1] == 0) GOTO 0x1260; Pop(1)

0x1258: @ lshHasSpeech(Stack[-1], Stack[-3])
0x1259: Pop(0)
0x125a: Push(Stack[-1])
0x125b: IF (Stack[-1] == 0) GOTO 0x1260; Pop(1)

0x125c: @ lshPlaySpeech(Stack[-3])
0x125d: Pop(0)
0x125e: Stack[-4] = (bool) 1
0x125f: Return(); Pop(2)

0x1260: Stack[-4] = (bool) 0
0x1261: Return(); Pop(2)

0x1262: PushEmpty(bool)
0x1263: Call2 0x12fa

0x1264: Pop(0)
0x1265: IF (Stack[-1] == 0) GOTO 0x1268; Pop(1)

0x1266: @ lshStopSpeech()
0x1267: Pop(0)
0x1268: Return(); Pop(0)

0x1269: PushEmpty(object, object)
0x126a: @ self(Stack[-1])
0x126b: Pop(0)
0x126c: Stack[-3] = Stack[-1]
0x126d: Return(); Pop(2)

0x126e: Stack[-1] = 0
0x126f: PushEmpty(float, float)
0x1270: Pop(0); Push(Stack[-3] | Stack[-3]);
0x1271: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1272: Push((float)0.0)
0x1273: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x1274: IF (Stack[-1] == 0) GOTO 0x1277; Pop(1)

0x1275: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x1276: Return(); Pop(2)

0x1277: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x1278: Return(); Pop(2)

0x1279: PushEmpty(int, int)
0x127a: @ GetVariable(Stack[-3], Stack[-1])
0x127b: Pop(0)
0x127c: Stack[-4] = Stack[-1]
0x127d: Return(); Pop(2)

0x127e: PushEmpty(object, object, object, object)
0x127f: @ GetMainOutdoorScene(Stack[-2])
0x1280: Pop(0)
0x1281: Push(".bin")
0x1282: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1283: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0x1284: Pop(1)
0x1285: Stack[-6] = Stack[-1]
0x1286: Return(); Pop(4)

0x1287: Stack[-1] = 0
0x1288: Stack[-2] = 0
0x1289: PushEmpty(object, object)
0x128a: @ FindActor(Stack[-1], Stack[-4])
0x128b: Pop(0)
0x128c: Pop(0); Push((bool) Stack[-1] == 0)
0x128d: IF (Stack[-1] == 0) GOTO 0x1295; Pop(1)

0x128e: Push("Door ")
0x128f: Pop(1); Push(Stack[-1] + Stack[-5]);
0x1290: Push(" not found")
0x1291: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1292: @ Trace(Stack[-1])
0x1293: Pop(1)
0x1294: GOTO 0x1298

0x1295: Push("locked")
0x1296: @@ SetProperty(Stack[-1], Stack[-4])
0x1297: Pop(1)
0x1298: Return(); Pop(2)

0x1299: Stack[-1] = 0
0x129a: PushEmpty(object, object)
0x129b: @ CreateIntVector(Stack[-1])
0x129c: Pop(0)
0x129d: @@ add(Stack[-4])
0x129e: Pop(0)
0x129f: @@ add(Stack[-3])
0x12a0: Pop(0)
0x12a1: Push((int) 3)
0x12a2: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x12a3: Pop(1)
0x12a4: Return(); Pop(2)

0x12a5: Stack[-1] = 0
0x12a6: PushEmpty(int, int, bool, int, int, bool)
0x12a7: @@ GetItemID(Stack[-3])
0x12a8: Pop(0)
0x12a9: Push("Category")
0x12aa: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x12ab: Pop(1)
0x12ac: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x12ad: Pop(0)
0x12ae: Pop(0); Push((bool) Stack[-1] == 0)
0x12af: IF (Stack[-1] == 0) GOTO 0x12b3; Pop(1)

0x12b0: @@ DropItems(Stack[-8], Stack[-7])
0x12b1: Pop(0)
0x12b2: GOTO 0x12b8

0x12b3: PushEmpty(int, int)
0x12b4: Stack[-2] = Stack[-5]
0x12b5: Stack[-1] = Stack[-9]
0x12b6: Call2 0x129a

0x12b7: Pop(2)
0x12b8: Return(); Pop(6)

0x12b9: PushEmpty(object, object)
0x12ba: @ CreateInvItem(Stack[-1])
0x12bb: Pop(0)
0x12bc: @@ SetItemName(Stack[-4])
0x12bd: Pop(0)
0x12be: PushEmpty(object, object, int)
0x12bf: Stack[-3] = Stack[-8]
0x12c0: Stack[-2] = Stack[-4]
0x12c1: Stack[-1] = Stack[-6]
0x12c2: Call2 0x12a6

0x12c3: Pop(3)
0x12c4: Return(); Pop(2)

0x12c5: Stack[-1] = 0
0x12c6: PushEmpty(float, float)
0x12c7: @ GetGameTime(Stack[-1])
0x12c8: Pop(0)
0x12c9: Stack[-3] = Stack[-1]
0x12ca: Return(); Pop(2)

0x12cb: PushEmpty(float, float)
0x12cc: @ GetGameTime(Stack[-1])
0x12cd: Pop(0)
0x12ce: Push((int) 1)
0x12cf: PushEmpty(int)
0x12d0: Push((int) 24)
0x12d1: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x12d2: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x12d3: Return(); Pop(2)

0x12d4: PushEmpty()
0x12d5: PushEmpty(int)
0x12d6: Call2 0x12cb

0x12d7: Pop(0)
0x12d8: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x12d9: Return(); Pop(0)

0x12da: PushEmpty(string, string)
0x12db: Stack[-1] = "idle"
0x12dc: Push(Stack[-3])
0x12dd: IF (Stack[-1] == 0) GOTO 0x12df; Pop(1)

0x12de: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x12df: Stack[-4] = Stack[-1]
0x12e0: Return(); Pop(2)

0x12e1: PushEmpty(int, bool, int, bool)
0x12e2: Stack[-2] = (int) 0
0x12e3: Push("all")
0x12e4: PushEmpty(string, int)
0x12e5: Stack[-1] = Stack[-5]
0x12e6: Call2 0x12da

0x12e7: Pop(1)
0x12e8: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x12e9: Pop(2)
0x12ea: Pop(0); Push((bool) Stack[-1] == 0)
0x12eb: IF (Stack[-1] == 0) GOTO 0x12ed; Pop(1)

0x12ec: GOTO 0x12f0

0x12ed: Push((int) 1)
0x12ee: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x12ef: GOTO 0x12e3

0x12f0: Stack[-5] = Stack[-2]
0x12f1: Return(); Pop(4)

0x12f2: Stack[-1] = (int) 515533
0x12f3: Return(); Pop(0)

0x12f4: Stack[-1] = (int) 502858
0x12f5: Return(); Pop(0)

0x12f6: Stack[-1] = "ui/NPC_Eva.png"
0x12f7: Return(); Pop(0)

0x12f8: Stack[-1] = "ui/NPC_Eva_b.png"
0x12f9: Return(); Pop(0)

0x12fa: Stack[-1] = (bool) 1
0x12fb: Return(); Pop(0)

0x12fc: PushEmpty()
0x12fd: Push("ood1EvaIntro3")
0x12fe: Push((int) 1)
0x12ff: @ SetVariable(Stack[-2], Stack[-1])
0x1300: Pop(2)
0x1301: Return(); Pop(0)

0x1302: PushEmpty(object, object)
0x1303: Push("d1q03IsKapella")
0x1304: Push((int) 1)
0x1305: @ SetVariable(Stack[-2], Stack[-1])
0x1306: Pop(2)
0x1307: PushEmpty(object)
0x1308: Call2 0x164d

0x1309: Stack[-2] = Stack[-1]
0x130a: Pop(1)
0x130b: Push("d1q03KapellaGotoOspina")
0x130c: Push("pt_map_ospina")
0x130d: Push((int) 0)
0x130e: Push((int) 508641)
0x130f: PushEmpty(float)
0x1310: Call2 0x12c6

0x1311: Pop(0)
0x1312: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1313: Pop(5)
0x1314: PushEmpty()
0x1315: Call2 0x15f0

0x1316: Pop(0)
0x1317: PushEmpty()
0x1318: Call2 0x15fd

0x1319: Pop(0)
0x131a: PushEmpty(object, string)
0x131b: Stack[-1] = "quest_d1_03"
0x131c: Call2 0x127e

0x131d: Pop(2)
0x131e: Return(); Pop(2)

0x131f: Stack[-1] = 0
0x1320: PushEmpty()
0x1321: Push("playsound")
0x1322: Push("giveitem")
0x1323: @ TriggerWorld(Stack[-2], Stack[-1])
0x1324: Pop(2)
0x1325: Return(); Pop(0)

0x1326: PushEmpty()
0x1327: Push("gold_ring is given")
0x1328: @ Trace(Stack[-1])
0x1329: Pop(1)
0x132a: PushEmpty(object, string, int)
0x132b: Stack[-3] = Stack[-5]
0x132c: Stack[-2] = "gold_ring"
0x132d: Stack[-1] = (int) 1
0x132e: Call2 0x12b9

0x132f: Pop(3)
0x1330: Return(); Pop(0)

0x1331: PushEmpty(object, object)
0x1332: PushEmpty(object)
0x1333: Call2 0x164d

0x1334: Stack[-2] = Stack[-1]
0x1335: Pop(1)
0x1336: Push("d1q01EvaMapMarkMladVlad")
0x1337: Push("pt_map_mladvlad")
0x1338: Push((int) 3)
0x1339: Push((int) 518108)
0x133a: PushEmpty(float)
0x133b: Call2 0x12c6

0x133c: Pop(0)
0x133d: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x133e: Pop(5)
0x133f: Return(); Pop(2)

0x1340: Stack[-1] = 0
0x1341: PushEmpty()
0x1342: PushEmpty(object, string, float)
0x1343: PushEmpty(object)
0x1344: Call2 0x164d

0x1345: Stack[-4] = Stack[-1]
0x1346: Pop(1)
0x1347: Stack[-2] = "pt_map_station"
0x1348: Stack[-1] = (int) 2
0x1349: Call2 0x165e

0x134a: Pop(3)
0x134b: PushEmpty(object)
0x134c: Call2 0x164d

0x134d: Pop(0)
0x134e: @@ ShowMap(Stack[-1])
0x134f: Pop(1)
0x1350: Return(); Pop(0)

0x1351: PushEmpty()
0x1352: Push("ood1Eva4")
0x1353: Push((int) 1)
0x1354: @ SetVariable(Stack[-2], Stack[-1])
0x1355: Pop(2)
0x1356: Return(); Pop(0)

0x1357: PushEmpty()
0x1358: Push("bracelet is given")
0x1359: @ Trace(Stack[-1])
0x135a: Pop(1)
0x135b: PushEmpty(object, string, int)
0x135c: Stack[-3] = Stack[-5]
0x135d: Stack[-2] = "bracelet"
0x135e: Stack[-1] = (int) 1
0x135f: Call2 0x12b9

0x1360: Pop(3)
0x1361: Return(); Pop(0)

0x1362: PushEmpty()
0x1363: Push("ear_ring is given")
0x1364: @ Trace(Stack[-1])
0x1365: Pop(1)
0x1366: PushEmpty(object, string, int)
0x1367: Stack[-3] = Stack[-5]
0x1368: Stack[-2] = "ear_ring"
0x1369: Stack[-1] = (int) 1
0x136a: Call2 0x12b9

0x136b: Pop(3)
0x136c: Return(); Pop(0)

0x136d: PushEmpty()
0x136e: Push("d2EvaVisit")
0x136f: Push((int) 1)
0x1370: @ SetVariable(Stack[-2], Stack[-1])
0x1371: Pop(2)
0x1372: Return(); Pop(0)

0x1373: PushEmpty()
0x1374: PushEmpty(object, string, float)
0x1375: PushEmpty(object)
0x1376: Call2 0x164d

0x1377: Stack[-4] = Stack[-1]
0x1378: Pop(1)
0x1379: Stack[-2] = "pt_map_georg"
0x137a: Stack[-1] = (int) 2
0x137b: Call2 0x165e

0x137c: Pop(3)
0x137d: PushEmpty(object)
0x137e: Call2 0x164d

0x137f: Pop(0)
0x1380: @@ ShowMap(Stack[-1])
0x1381: Pop(1)
0x1382: Return(); Pop(0)

0x1383: PushEmpty()
0x1384: Push("ood1Eva5")
0x1385: Push((int) 1)
0x1386: @ SetVariable(Stack[-2], Stack[-1])
0x1387: Pop(2)
0x1388: Return(); Pop(0)

0x1389: PushEmpty()
0x138a: Push("ood1Eva6")
0x138b: Push((int) 1)
0x138c: @ SetVariable(Stack[-2], Stack[-1])
0x138d: Pop(2)
0x138e: Return(); Pop(0)

0x138f: PushEmpty()
0x1390: Push("ood1Eva7")
0x1391: Push((int) 1)
0x1392: @ SetVariable(Stack[-2], Stack[-1])
0x1393: Pop(2)
0x1394: Return(); Pop(0)

0x1395: PushEmpty()
0x1396: Push("ood4Eva2")
0x1397: Push((int) 1)
0x1398: @ SetVariable(Stack[-2], Stack[-1])
0x1399: Pop(2)
0x139a: Return(); Pop(0)

0x139b: PushEmpty()
0x139c: Push("KnowUzly")
0x139d: Push((int) 1)
0x139e: @ SetVariable(Stack[-2], Stack[-1])
0x139f: Pop(2)
0x13a0: Return(); Pop(0)

0x13a1: PushEmpty()
0x13a2: Push("ood2Eva1")
0x13a3: Push((int) 1)
0x13a4: @ SetVariable(Stack[-2], Stack[-1])
0x13a5: Pop(2)
0x13a6: Return(); Pop(0)

0x13a7: PushEmpty()
0x13a8: Push("ood2Eva2")
0x13a9: Push((int) 1)
0x13aa: @ SetVariable(Stack[-2], Stack[-1])
0x13ab: Pop(2)
0x13ac: Return(); Pop(0)

0x13ad: PushEmpty()
0x13ae: Push("ood2Eva3")
0x13af: Push((int) 1)
0x13b0: @ SetVariable(Stack[-2], Stack[-1])
0x13b1: Pop(2)
0x13b2: Return(); Pop(0)

0x13b3: PushEmpty()
0x13b4: Push("ood2Eva4")
0x13b5: Push((int) 1)
0x13b6: @ SetVariable(Stack[-2], Stack[-1])
0x13b7: Pop(2)
0x13b8: Return(); Pop(0)

0x13b9: PushEmpty(object, object)
0x13ba: Push("d2q02")
0x13bb: Push((int) 1)
0x13bc: @ SetVariable(Stack[-2], Stack[-1])
0x13bd: Pop(2)
0x13be: PushEmpty(object)
0x13bf: Call2 0x164d

0x13c0: Stack[-2] = Stack[-1]
0x13c1: Pop(1)
0x13c2: Push("d2q02EvaGotoAndrei")
0x13c3: Push("pt_map_andrei")
0x13c4: Push((int) 0)
0x13c5: Push((int) 515272)
0x13c6: PushEmpty(float)
0x13c7: Call2 0x12c6

0x13c8: Pop(0)
0x13c9: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x13ca: Pop(5)
0x13cb: PushEmpty()
0x13cc: Call2 0x160a

0x13cd: Pop(0)
0x13ce: PushEmpty()
0x13cf: Call2 0x1617

0x13d0: Pop(0)
0x13d1: PushEmpty(object, string)
0x13d2: Stack[-1] = "quest_d2_02"
0x13d3: Call2 0x127e

0x13d4: Pop(2)
0x13d5: Return(); Pop(2)

0x13d6: Stack[-1] = 0
0x13d7: PushEmpty()
0x13d8: PushEmpty(string, bool)
0x13d9: Stack[-2] = "icot_eva@door1"
0x13da: Stack[-1] = (bool) 0
0x13db: Call2 0x1289

0x13dc: Pop(2)
0x13dd: Return(); Pop(0)

0x13de: PushEmpty(object, object)
0x13df: PushEmpty(object)
0x13e0: Call2 0x164d

0x13e1: Stack[-2] = Stack[-1]
0x13e2: Pop(1)
0x13e3: Push("d1q01EvaGotoSimon")
0x13e4: Push("pt_map_georg")
0x13e5: Push((int) 1)
0x13e6: Push((int) 507778)
0x13e7: PushEmpty(float)
0x13e8: Call2 0x12c6

0x13e9: Pop(0)
0x13ea: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x13eb: Pop(5)
0x13ec: Push("d1EvaGotoMaria")
0x13ed: Push("pt_map_maria")
0x13ee: Push((int) 3)
0x13ef: Push((int) 508628)
0x13f0: PushEmpty(float)
0x13f1: Call2 0x12c6

0x13f2: Pop(0)
0x13f3: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x13f4: Pop(5)
0x13f5: Push("d1EvaInfo")
0x13f6: Push("pt_map_eva")
0x13f7: Push((int) 3)
0x13f8: Push((int) 508630)
0x13f9: PushEmpty(float)
0x13fa: Call2 0x12c6

0x13fb: Pop(0)
0x13fc: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x13fd: Pop(5)
0x13fe: Return(); Pop(2)

0x13ff: Stack[-1] = 0
0x1400: PushEmpty()
0x1401: Push("KnowStation")
0x1402: Push((int) 1)
0x1403: @ SetVariable(Stack[-2], Stack[-1])
0x1404: Pop(2)
0x1405: Return(); Pop(0)

0x1406: PushEmpty()
0x1407: PushEmpty(object, string, float)
0x1408: PushEmpty(object)
0x1409: Call2 0x164d

0x140a: Stack[-4] = Stack[-1]
0x140b: Pop(1)
0x140c: Stack[-2] = "pt_map_ospina"
0x140d: Stack[-1] = (int) 2
0x140e: Call2 0x165e

0x140f: Pop(3)
0x1410: PushEmpty(object)
0x1411: Call2 0x164d

0x1412: Pop(0)
0x1413: @@ ShowMap(Stack[-1])
0x1414: Pop(1)
0x1415: Return(); Pop(0)

0x1416: PushEmpty()
0x1417: Push("ood1EvaIntro1")
0x1418: Push((int) 1)
0x1419: @ SetVariable(Stack[-2], Stack[-1])
0x141a: Pop(2)
0x141b: Return(); Pop(0)

0x141c: PushEmpty()
0x141d: Push("ood1EvaIntro2")
0x141e: Push((int) 1)
0x141f: @ SetVariable(Stack[-2], Stack[-1])
0x1420: Pop(2)
0x1421: Return(); Pop(0)

0x1422: PushEmpty()
0x1423: Push("ood6Eva1")
0x1424: Push((int) 1)
0x1425: @ SetVariable(Stack[-2], Stack[-1])
0x1426: Pop(2)
0x1427: Return(); Pop(0)

0x1428: PushEmpty()
0x1429: PushEmpty(object, string, float)
0x142a: PushEmpty(object)
0x142b: Call2 0x164d

0x142c: Stack[-4] = Stack[-1]
0x142d: Pop(1)
0x142e: Stack[-2] = "pt_map_andrei"
0x142f: Stack[-1] = (int) 2
0x1430: Call2 0x165e

0x1431: Pop(3)
0x1432: PushEmpty(object)
0x1433: Call2 0x164d

0x1434: Pop(0)
0x1435: @@ ShowMap(Stack[-1])
0x1436: Pop(1)
0x1437: Return(); Pop(0)

0x1438: PushEmpty(object, object)
0x1439: PushEmpty(object)
0x143a: Call2 0x164d

0x143b: Stack[-2] = Stack[-1]
0x143c: Pop(1)
0x143d: Push("d2q02EvaGotoMaria")
0x143e: Push("pt_map_maria")
0x143f: Push((int) 0)
0x1440: Push((int) 515274)
0x1441: PushEmpty(float)
0x1442: Call2 0x12c6

0x1443: Pop(0)
0x1444: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1445: Pop(5)
0x1446: Return(); Pop(2)

0x1447: Stack[-1] = 0
0x1448: PushEmpty()
0x1449: PushEmpty(object, string, float)
0x144a: PushEmpty(object)
0x144b: Call2 0x164d

0x144c: Stack[-4] = Stack[-1]
0x144d: Pop(1)
0x144e: Stack[-2] = "pt_map_maria"
0x144f: Stack[-1] = (int) 2
0x1450: Call2 0x165e

0x1451: Pop(3)
0x1452: PushEmpty(object)
0x1453: Call2 0x164d

0x1454: Pop(0)
0x1455: @@ ShowMap(Stack[-1])
0x1456: Pop(1)
0x1457: Return(); Pop(0)

0x1458: PushEmpty()
0x1459: Push("ood3Eva1")
0x145a: Push((int) 1)
0x145b: @ SetVariable(Stack[-2], Stack[-1])
0x145c: Pop(2)
0x145d: Return(); Pop(0)

0x145e: PushEmpty()
0x145f: Push("ood4Eva1")
0x1460: Push((int) 1)
0x1461: @ SetVariable(Stack[-2], Stack[-1])
0x1462: Pop(2)
0x1463: Return(); Pop(0)

0x1464: PushEmpty()
0x1465: PushEmpty(int, string)
0x1466: Stack[-1] = "ood1EvaIntro1"
0x1467: Call2 0x1279

0x1468: Pop(1)
0x1469: Push((int) 0)
0x146a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x146b: IF (Stack[-1] == 0) GOTO 0x146e; Pop(1)

0x146c: Stack[-2] = (bool) 1
0x146d: Return(); Pop(0)

0x146e: Stack[-2] = (bool) 0
0x146f: Return(); Pop(0)

0x1470: PushEmpty()
0x1471: PushEmpty(int, string)
0x1472: Stack[-1] = "d1q01FirstGeorgVisit"
0x1473: Call2 0x1279

0x1474: Pop(1)
0x1475: Push((int) 1)
0x1476: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1477: IF (Stack[-1] == 0) GOTO 0x147a; Pop(1)

0x1478: Stack[-2] = (bool) 1
0x1479: Return(); Pop(0)

0x147a: Stack[-2] = (bool) 0
0x147b: Return(); Pop(0)

0x147c: PushEmpty()
0x147d: PushEmpty(int, string)
0x147e: Stack[-1] = "d1q03"
0x147f: Call2 0x1279

0x1480: Pop(1)
0x1481: Push((int) 0)
0x1482: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1483: IF (Stack[-1] == 0) GOTO 0x1486; Pop(1)

0x1484: Stack[-2] = (bool) 1
0x1485: Return(); Pop(0)

0x1486: Stack[-2] = (bool) 0
0x1487: Return(); Pop(0)

0x1488: PushEmpty()
0x1489: PushEmpty(int, string)
0x148a: Stack[-1] = "d1q03"
0x148b: Call2 0x1279

0x148c: Pop(1)
0x148d: Push((int) 1000)
0x148e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x148f: IF (Stack[-1] == 0) GOTO 0x1492; Pop(1)

0x1490: Stack[-2] = (bool) 1
0x1491: Return(); Pop(0)

0x1492: Stack[-2] = (bool) 0
0x1493: Return(); Pop(0)

0x1494: PushEmpty()
0x1495: PushEmpty(int, string)
0x1496: Stack[-1] = "d1q03IsKapella"
0x1497: Call2 0x1279

0x1498: Pop(1)
0x1499: Push((int) 1)
0x149a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x149b: IF (Stack[-1] == 0) GOTO 0x149e; Pop(1)

0x149c: Stack[-2] = (bool) 1
0x149d: Return(); Pop(0)

0x149e: Stack[-2] = (bool) 0
0x149f: Return(); Pop(0)

0x14a0: PushEmpty()
0x14a1: PushEmpty(int, string)
0x14a2: Stack[-1] = "d1q04"
0x14a3: Call2 0x1279

0x14a4: Pop(1)
0x14a5: Push((int) 1)
0x14a6: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14a7: IF (Stack[-1] == 0) GOTO 0x14aa; Pop(1)

0x14a8: Stack[-2] = (bool) 1
0x14a9: Return(); Pop(0)

0x14aa: Stack[-2] = (bool) 0
0x14ab: Return(); Pop(0)

0x14ac: PushEmpty()
0x14ad: PushEmpty(int, string)
0x14ae: Stack[-1] = "d1q01"
0x14af: Call2 0x1279

0x14b0: Pop(1)
0x14b1: Push((int) 5)
0x14b2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14b3: IF (Stack[-1] == 0) GOTO 0x14b6; Pop(1)

0x14b4: Stack[-2] = (bool) 1
0x14b5: Return(); Pop(0)

0x14b6: Stack[-2] = (bool) 0
0x14b7: Return(); Pop(0)

0x14b8: PushEmpty()
0x14b9: PushEmpty(int, string)
0x14ba: Stack[-1] = "d1q01"
0x14bb: Call2 0x1279

0x14bc: Pop(1)
0x14bd: Push((int) 6)
0x14be: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14bf: IF (Stack[-1] == 0) GOTO 0x14c2; Pop(1)

0x14c0: Stack[-2] = (bool) 1
0x14c1: Return(); Pop(0)

0x14c2: Stack[-2] = (bool) 0
0x14c3: Return(); Pop(0)

0x14c4: PushEmpty()
0x14c5: PushEmpty(int, string)
0x14c6: Stack[-1] = "ood1Eva4"
0x14c7: Call2 0x1279

0x14c8: Pop(1)
0x14c9: Push((int) 0)
0x14ca: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14cb: IF (Stack[-1] == 0) GOTO 0x14ce; Pop(1)

0x14cc: Stack[-2] = (bool) 1
0x14cd: Return(); Pop(0)

0x14ce: Stack[-2] = (bool) 0
0x14cf: Return(); Pop(0)

0x14d0: PushEmpty()
0x14d1: PushEmpty(int, string)
0x14d2: Stack[-1] = "d1q01"
0x14d3: Call2 0x1279

0x14d4: Pop(1)
0x14d5: Push((int) 6)
0x14d6: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x14d7: IF (Stack[-1] == 0) GOTO 0x14da; Pop(1)

0x14d8: Stack[-2] = (bool) 1
0x14d9: Return(); Pop(0)

0x14da: Stack[-2] = (bool) 0
0x14db: Return(); Pop(0)

0x14dc: PushEmpty()
0x14dd: PushEmpty(int, string)
0x14de: Stack[-1] = "ood1Eva5"
0x14df: Call2 0x1279

0x14e0: Pop(1)
0x14e1: Push((int) 0)
0x14e2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14e3: IF (Stack[-1] == 0) GOTO 0x14e6; Pop(1)

0x14e4: Stack[-2] = (bool) 1
0x14e5: Return(); Pop(0)

0x14e6: Stack[-2] = (bool) 0
0x14e7: Return(); Pop(0)

0x14e8: PushEmpty()
0x14e9: PushEmpty(int, string)
0x14ea: Stack[-1] = "ood1Eva6"
0x14eb: Call2 0x1279

0x14ec: Pop(1)
0x14ed: Push((int) 0)
0x14ee: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14ef: IF (Stack[-1] == 0) GOTO 0x14f2; Pop(1)

0x14f0: Stack[-2] = (bool) 1
0x14f1: Return(); Pop(0)

0x14f2: Stack[-2] = (bool) 0
0x14f3: Return(); Pop(0)

0x14f4: PushEmpty()
0x14f5: PushEmpty(int, string)
0x14f6: Stack[-1] = "ood1Eva7"
0x14f7: Call2 0x1279

0x14f8: Pop(1)
0x14f9: Push((int) 0)
0x14fa: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14fb: IF (Stack[-1] == 0) GOTO 0x14fe; Pop(1)

0x14fc: Stack[-2] = (bool) 1
0x14fd: Return(); Pop(0)

0x14fe: Stack[-2] = (bool) 0
0x14ff: Return(); Pop(0)

0x1500: PushEmpty()
0x1501: PushEmpty(int, string)
0x1502: Stack[-1] = "ood4Eva2"
0x1503: Call2 0x1279

0x1504: Pop(1)
0x1505: Push((int) 0)
0x1506: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1507: IF (Stack[-1] == 0) GOTO 0x150a; Pop(1)

0x1508: Stack[-2] = (bool) 1
0x1509: Return(); Pop(0)

0x150a: Stack[-2] = (bool) 0
0x150b: Return(); Pop(0)

0x150c: PushEmpty()
0x150d: PushEmpty(int, string)
0x150e: Stack[-1] = "ood1EvaIntro2"
0x150f: Call2 0x1279

0x1510: Pop(1)
0x1511: Push((int) 0)
0x1512: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1513: IF (Stack[-1] == 0) GOTO 0x1516; Pop(1)

0x1514: Stack[-2] = (bool) 1
0x1515: Return(); Pop(0)

0x1516: Stack[-2] = (bool) 0
0x1517: Return(); Pop(0)

0x1518: PushEmpty()
0x1519: PushEmpty(int, string)
0x151a: Stack[-1] = "ood2Eva1"
0x151b: Call2 0x1279

0x151c: Pop(1)
0x151d: Push((int) 0)
0x151e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x151f: IF (Stack[-1] == 0) GOTO 0x1522; Pop(1)

0x1520: Stack[-2] = (bool) 1
0x1521: Return(); Pop(0)

0x1522: Stack[-2] = (bool) 0
0x1523: Return(); Pop(0)

0x1524: PushEmpty()
0x1525: PushEmpty(int, string)
0x1526: Stack[-1] = "ood2Eva2"
0x1527: Call2 0x1279

0x1528: Pop(1)
0x1529: Push((int) 0)
0x152a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x152b: IF (Stack[-1] == 0) GOTO 0x152e; Pop(1)

0x152c: Stack[-2] = (bool) 1
0x152d: Return(); Pop(0)

0x152e: Stack[-2] = (bool) 0
0x152f: Return(); Pop(0)

0x1530: PushEmpty()
0x1531: PushEmpty(int, string)
0x1532: Stack[-1] = "ood2Eva3"
0x1533: Call2 0x1279

0x1534: Pop(1)
0x1535: Push((int) 0)
0x1536: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1537: IF (Stack[-1] == 0) GOTO 0x153a; Pop(1)

0x1538: Stack[-2] = (bool) 1
0x1539: Return(); Pop(0)

0x153a: Stack[-2] = (bool) 0
0x153b: Return(); Pop(0)

0x153c: PushEmpty()
0x153d: PushEmpty(int, string)
0x153e: Stack[-1] = "ood2Eva4"
0x153f: Call2 0x1279

0x1540: Pop(1)
0x1541: Push((int) 0)
0x1542: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1543: IF (Stack[-1] == 0) GOTO 0x1546; Pop(1)

0x1544: Stack[-2] = (bool) 1
0x1545: Return(); Pop(0)

0x1546: Stack[-2] = (bool) 0
0x1547: Return(); Pop(0)

0x1548: PushEmpty()
0x1549: PushEmpty(int, string)
0x154a: Stack[-1] = "d2q02"
0x154b: Call2 0x1279

0x154c: Pop(1)
0x154d: Push((int) 1000)
0x154e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x154f: IF (Stack[-1] == 0) GOTO 0x1552; Pop(1)

0x1550: Stack[-2] = (bool) 1
0x1551: Return(); Pop(0)

0x1552: Stack[-2] = (bool) 0
0x1553: Return(); Pop(0)

0x1554: PushEmpty()
0x1555: PushEmpty(int, string)
0x1556: Stack[-1] = "d2q02"
0x1557: Call2 0x1279

0x1558: Pop(1)
0x1559: Push((int) 3)
0x155a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x155b: IF (Stack[-1] == 0) GOTO 0x155e; Pop(1)

0x155c: Stack[-2] = (bool) 1
0x155d: Return(); Pop(0)

0x155e: Stack[-2] = (bool) 0
0x155f: Return(); Pop(0)

0x1560: PushEmpty()
0x1561: PushEmpty(int, string)
0x1562: Stack[-1] = "d2q02"
0x1563: Call2 0x1279

0x1564: Pop(1)
0x1565: Push((int) 5)
0x1566: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1567: IF (Stack[-1] == 0) GOTO 0x156a; Pop(1)

0x1568: Stack[-2] = (bool) 1
0x1569: Return(); Pop(0)

0x156a: Stack[-2] = (bool) 0
0x156b: Return(); Pop(0)

0x156c: PushEmpty()
0x156d: PushEmpty(int, string)
0x156e: Stack[-1] = "d1q01"
0x156f: Call2 0x1279

0x1570: Pop(1)
0x1571: Push((int) 1)
0x1572: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1573: IF (Stack[-1] == 0) GOTO 0x1576; Pop(1)

0x1574: Stack[-2] = (bool) 1
0x1575: Return(); Pop(0)

0x1576: Stack[-2] = (bool) 0
0x1577: Return(); Pop(0)

0x1578: PushEmpty()
0x1579: PushEmpty(int, string)
0x157a: Stack[-1] = "d2q02"
0x157b: Call2 0x1279

0x157c: Pop(1)
0x157d: Push((int) 0)
0x157e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x157f: IF (Stack[-1] == 0) GOTO 0x1582; Pop(1)

0x1580: Stack[-2] = (bool) 1
0x1581: Return(); Pop(0)

0x1582: Stack[-2] = (bool) 0
0x1583: Return(); Pop(0)

0x1584: PushEmpty()
0x1585: PushEmpty(int, string)
0x1586: Stack[-1] = "d4q01"
0x1587: Call2 0x1279

0x1588: Pop(1)
0x1589: Push((int) 1)
0x158a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x158b: IF (Stack[-1] == 0) GOTO 0x158e; Pop(1)

0x158c: Stack[-2] = (bool) 1
0x158d: Return(); Pop(0)

0x158e: Stack[-2] = (bool) 0
0x158f: Return(); Pop(0)

0x1590: PushEmpty()
0x1591: PushEmpty(int, string)
0x1592: Stack[-1] = "d4q02"
0x1593: Call2 0x1279

0x1594: Pop(1)
0x1595: Push((int) 1)
0x1596: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1597: IF (Stack[-1] == 0) GOTO 0x159a; Pop(1)

0x1598: Stack[-2] = (bool) 1
0x1599: Return(); Pop(0)

0x159a: Stack[-2] = (bool) 0
0x159b: Return(); Pop(0)

0x159c: PushEmpty()
0x159d: PushEmpty(int, string)
0x159e: Stack[-1] = "d4q02LaraGivesMedcine"
0x159f: Call2 0x1279

0x15a0: Pop(1)
0x15a1: Push((int) 1)
0x15a2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x15a3: IF (Stack[-1] == 0) GOTO 0x15a6; Pop(1)

0x15a4: Stack[-2] = (bool) 1
0x15a5: Return(); Pop(0)

0x15a6: Stack[-2] = (bool) 0
0x15a7: Return(); Pop(0)

0x15a8: PushEmpty()
0x15a9: PushEmpty(int, string)
0x15aa: Stack[-1] = "d4q02JuliaGivesMedcine"
0x15ab: Call2 0x1279

0x15ac: Pop(1)
0x15ad: Push((int) 1)
0x15ae: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x15af: IF (Stack[-1] == 0) GOTO 0x15b2; Pop(1)

0x15b0: Stack[-2] = (bool) 1
0x15b1: Return(); Pop(0)

0x15b2: Stack[-2] = (bool) 0
0x15b3: Return(); Pop(0)

0x15b4: PushEmpty()
0x15b5: PushEmpty(int, string)
0x15b6: Stack[-1] = "d6q01"
0x15b7: Call2 0x1279

0x15b8: Pop(1)
0x15b9: Push((int) 1)
0x15ba: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x15bb: IF (Stack[-1] == 0) GOTO 0x15be; Pop(1)

0x15bc: Stack[-2] = (bool) 1
0x15bd: Return(); Pop(0)

0x15be: Stack[-2] = (bool) 0
0x15bf: Return(); Pop(0)

0x15c0: PushEmpty()
0x15c1: PushEmpty(int, string)
0x15c2: Stack[-1] = "ood6Eva1"
0x15c3: Call2 0x1279

0x15c4: Pop(1)
0x15c5: Push((int) 0)
0x15c6: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x15c7: IF (Stack[-1] == 0) GOTO 0x15ca; Pop(1)

0x15c8: Stack[-2] = (bool) 1
0x15c9: Return(); Pop(0)

0x15ca: Stack[-2] = (bool) 0
0x15cb: Return(); Pop(0)

0x15cc: PushEmpty()
0x15cd: PushEmpty(int, string)
0x15ce: Stack[-1] = "ood3Eva1"
0x15cf: Call2 0x1279

0x15d0: Pop(1)
0x15d1: Push((int) 0)
0x15d2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x15d3: IF (Stack[-1] == 0) GOTO 0x15d6; Pop(1)

0x15d4: Stack[-2] = (bool) 1
0x15d5: Return(); Pop(0)

0x15d6: Stack[-2] = (bool) 0
0x15d7: Return(); Pop(0)

0x15d8: PushEmpty()
0x15d9: PushEmpty(int, string)
0x15da: Stack[-1] = "ood4Eva1"
0x15db: Call2 0x1279

0x15dc: Pop(1)
0x15dd: Push((int) 0)
0x15de: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x15df: IF (Stack[-1] == 0) GOTO 0x15e2; Pop(1)

0x15e0: Stack[-2] = (bool) 1
0x15e1: Return(); Pop(0)

0x15e2: Stack[-2] = (bool) 0
0x15e3: Return(); Pop(0)

0x15e4: PushEmpty()
0x15e5: PushEmpty(int, string)
0x15e6: Stack[-1] = "ood1EvaIntro3"
0x15e7: Call2 0x1279

0x15e8: Pop(1)
0x15e9: Push((int) 0)
0x15ea: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x15eb: IF (Stack[-1] == 0) GOTO 0x15ee; Pop(1)

0x15ec: Stack[-2] = (bool) 1
0x15ed: Return(); Pop(0)

0x15ee: Stack[-2] = (bool) 0
0x15ef: Return(); Pop(0)

0x15f0: PushEmpty(object, object)
0x15f1: Push((int) 37)
0x15f2: Push((int) 2)
0x15f3: Push((int) 512119)
0x15f4: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x15f5: Pop(3)
0x15f6: PushEmpty(bool, object, int)
0x15f7: Stack[-2] = Stack[-4]
0x15f8: Stack[-1] = (int) -1
0x15f9: Call2 0x1631

0x15fa: Pop(3)
0x15fb: Return(); Pop(2)

0x15fc: Stack[-1] = 0
0x15fd: PushEmpty(object, object)
0x15fe: Push((int) 680)
0x15ff: Push((int) 2)
0x1600: Push((int) 534422)
0x1601: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1602: Pop(3)
0x1603: PushEmpty(bool, object, int)
0x1604: Stack[-2] = Stack[-4]
0x1605: Stack[-1] = (int) 37
0x1606: Call2 0x1631

0x1607: Pop(3)
0x1608: Return(); Pop(2)

0x1609: Stack[-1] = 0
0x160a: PushEmpty(object, object)
0x160b: Push((int) 11)
0x160c: Push((int) 2)
0x160d: Push((int) 503095)
0x160e: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x160f: Pop(3)
0x1610: PushEmpty(bool, object, int)
0x1611: Stack[-2] = Stack[-4]
0x1612: Stack[-1] = (int) -1
0x1613: Call2 0x1631

0x1614: Pop(3)
0x1615: Return(); Pop(2)

0x1616: Stack[-1] = 0
0x1617: PushEmpty(object, object)
0x1618: Push((int) 57)
0x1619: Push((int) 2)
0x161a: Push((int) 512139)
0x161b: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x161c: Pop(3)
0x161d: PushEmpty(bool, object, int)
0x161e: Stack[-2] = Stack[-4]
0x161f: Stack[-1] = (int) 11
0x1620: Call2 0x1631

0x1621: Pop(3)
0x1622: Return(); Pop(2)

0x1623: Stack[-1] = 0
0x1624: PushEmpty(object, object)
0x1625: @ GetDiaryRoot(Stack[-1])
0x1626: Pop(0)
0x1627: Pop(0); Push((bool) Stack[-1] == 0)
0x1628: IF (Stack[-1] == 0) GOTO 0x162e; Pop(1)

0x1629: Push("Can't retrieve diary root")
0x162a: @ Trace(Stack[-1])
0x162b: Pop(1)
0x162c: Stack[-3] = (bool) 0
0x162d: Return(); Pop(2)

0x162e: Stack[-3] = Stack[-1]
0x162f: Return(); Pop(2)

0x1630: Stack[-1] = 0
0x1631: PushEmpty(object, object, int, object, object, int)
0x1632: PushEmpty(object)
0x1633: Call2 0x1624

0x1634: Stack[-4] = Stack[-1]
0x1635: Pop(1)
0x1636: @@ Find(Stack[-7], Stack[-2])
0x1637: Pop(0)
0x1638: Pop(0); Push((bool) Stack[-2] == 0)
0x1639: IF (Stack[-1] == 0) GOTO 0x1640; Pop(1)

0x163a: Push("Can't find diary parent with id: ")
0x163b: Pop(1); Push(Stack[-1] + Stack[-8]);
0x163c: @ Trace(Stack[-1])
0x163d: Pop(1)
0x163e: Stack[-9] = (bool) 0
0x163f: Return(); Pop(6)

0x1640: @@ AddChild(Stack[-8])
0x1641: Pop(0)
0x1642: Push((int) 7)
0x1643: @ SendWorldWndMessage(Stack[-1])
0x1644: Pop(1)
0x1645: @@ GetCategory(Stack[-1])
0x1646: Pop(0)
0x1647: @ SetDiarySection(Stack[-1])
0x1648: Pop(0)
0x1649: Stack[-9] = (bool) 0
0x164a: Return(); Pop(6)

0x164b: Stack[-2] = 0
0x164c: Stack[-3] = 0
0x164d: PushEmpty(object, object, object, object)
0x164e: @ GetMainOutdoorScene(Stack[-2])
0x164f: Pop(0)
0x1650: Pop(0); Push((bool) Stack[-2] == 0)
0x1651: IF (Stack[-1] == 0) GOTO 0x1658; Pop(1)

0x1652: Push("Can't find main outdoor scene")
0x1653: @ Trace(Stack[-1])
0x1654: Pop(1)
0x1655: Stack[-1] = 0
0x1656: Stack[-5] = Stack[-1]
0x1657: Return(); Pop(4)

0x1658: @@ GetMap(Stack[-1])
0x1659: Pop(0)
0x165a: Stack[-5] = Stack[-1]
0x165b: Return(); Pop(4)

0x165c: Stack[-1] = 0
0x165d: Stack[-2] = 0
0x165e: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x165f: @ GetMainOutdoorScene(Stack[-2])
0x1660: Pop(0)
0x1661: Pop(0); Push((bool) Stack[-2] == 0)
0x1662: IF (Stack[-1] == 0) GOTO 0x1667; Pop(1)

0x1663: Push("Can't find main outdoor scene")
0x1664: @ Trace(Stack[-1])
0x1665: Pop(1)
0x1666: Return(); Pop(8)

0x1667: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x1668: Pop(0)
0x1669: Pop(0); Push((bool) Stack[-1] == 0)
0x166a: IF (Stack[-1] == 0) GOTO 0x1671; Pop(1)

0x166b: Push("Warning: outdoor scene locator ")
0x166c: Pop(1); Push(Stack[-1] + Stack[-11]);
0x166d: Push(" doesnt exist")
0x166e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x166f: @ Trace(Stack[-1])
0x1670: Pop(1)
0x1671: @@ GetMap(Stack[-11])
0x1672: Pop(0)
0x1673: Pop(0); Push((bool) Stack[-11] == 0)
0x1674: IF (Stack[-1] == 0) GOTO 0x1679; Pop(1)

0x1675: Push("Can't find map")
0x1676: @ Trace(Stack[-1])
0x1677: Pop(1)
0x1678: Return(); Pop(8)

0x1679: Push(CvectorIndex(Stack[-4], 0))
0x167a: Push(CvectorIndex(Stack[-5], 2))
0x167b: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x167c: Pop(2)
0x167d: Return(); Pop(8)

0x167e: Stack[-2] = 0
0x167f: PushEmpty(int, int)
0x1680: Push("branch")
0x1681: @ GetVariable(Stack[-1], Stack[-2])
0x1682: Pop(1)
0x1683: Push((int) 0)
0x1684: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1685: IF (Stack[-1] == 0) GOTO 0x1689; Pop(1)

0x1686: Stack[-3] = (int) 1
0x1687: Return(); Pop(2)

0x1688: GOTO 0x168e

0x1689: Push((int) 1)
0x168a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x168b: IF (Stack[-1] == 0) GOTO 0x168e; Pop(1)

0x168c: Stack[-3] = (int) 2
0x168d: Return(); Pop(2)

0x168e: Stack[-3] = (int) 3
0x168f: Return(); Pop(2)

0x1690: PushEmpty()
0x1691: PushEmpty(bool, int)
0x1692: Stack[-1] = (int) 1
0x1693: Call2 0x12d4

0x1694: Pop(1)
0x1695: IF (Stack[-1] == 0) GOTO 0x169d; Pop(1)

0x1696: PushEmpty(int, object)
0x1697: Stack[-1] = Stack[-3]
0x1698: Push(-2, 1); TaskCall(2)
0x1699: Call2 0x196

0x169a: Pop(-2, 1); TaskReturn
0x169b: Pop(2)
0x169c: Return(); Pop(0)

0x169d: PushEmpty(bool, int)
0x169e: Stack[-1] = (int) 2
0x169f: Call2 0x12d4

0x16a0: Pop(1)
0x16a1: IF (Stack[-1] == 0) GOTO 0x16a9; Pop(1)

0x16a2: PushEmpty(int, object)
0x16a3: Stack[-1] = Stack[-3]
0x16a4: Push(-2, 1); TaskCall(4)
0x16a5: Call2 0x84b

0x16a6: Pop(-2, 1); TaskReturn
0x16a7: Pop(2)
0x16a8: Return(); Pop(0)

0x16a9: PushEmpty(bool, int)
0x16aa: Stack[-1] = (int) 3
0x16ab: Call2 0x12d4

0x16ac: Pop(1)
0x16ad: IF (Stack[-1] == 0) GOTO 0x16b5; Pop(1)

0x16ae: PushEmpty(int, object)
0x16af: Stack[-1] = Stack[-3]
0x16b0: Push(-2, 1); TaskCall(6)
0x16b1: Call2 0xbb6

0x16b2: Pop(-2, 1); TaskReturn
0x16b3: Pop(2)
0x16b4: Return(); Pop(0)

0x16b5: PushEmpty(bool, int)
0x16b6: Stack[-1] = (int) 4
0x16b7: Call2 0x12d4

0x16b8: Pop(1)
0x16b9: IF (Stack[-1] == 0) GOTO 0x16c1; Pop(1)

0x16ba: PushEmpty(int, object)
0x16bb: Stack[-1] = Stack[-3]
0x16bc: Push(-2, 1); TaskCall(8)
0x16bd: Call2 0xd0b

0x16be: Pop(-2, 1); TaskReturn
0x16bf: Pop(2)
0x16c0: Return(); Pop(0)

0x16c1: PushEmpty(bool, int)
0x16c2: Stack[-1] = (int) 6
0x16c3: Call2 0x12d4

0x16c4: Pop(1)
0x16c5: IF (Stack[-1] == 0) GOTO 0x16cd; Pop(1)

0x16c6: PushEmpty(int, object)
0x16c7: Stack[-1] = Stack[-3]
0x16c8: Push(-2, 1); TaskCall(0)
0x16c9: Call2 0x0

0x16ca: Pop(-2, 1); TaskReturn
0x16cb: Pop(2)
0x16cc: Return(); Pop(0)

0x16cd: PushEmpty(int, object)
0x16ce: Stack[-1] = Stack[-3]
0x16cf: Push(-2, 1); TaskCall(10)
0x16d0: Call2 0xf68

0x16d1: Pop(-2, 1); TaskReturn
0x16d2: Pop(2)
0x16d3: Return(); Pop(0)

