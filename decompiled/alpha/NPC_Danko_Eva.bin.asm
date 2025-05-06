GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	Neutral
	SetNPCName
	SetPhoto
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	GetPosition
	GetEyesHeight
	playing 
	start: 
	end: 
	.bin
	Door 
	 not found
	locked
	SetProperty
	No
	ui/NPC_Eva.png
	ood1Eva3
	KnowKaterina
	KnowKapella
	KnowTheater
	KnowSquareMost
	ood1Eva5
	ood1Eva6
	pt_map_georg
	ShowMap
	KnowUzly
	ood2Eva1
	ood2Eva2
	ood2Eva3
	ood2Eva4
	KnowRebro
	d2q02
	d2q02EvaGotoAndrei
	pt_map_andrei
	AddMark
	d2q02EvaGotoAndreiSelf
	pt_map_eva
	quest_d2_02
	icot_eva@door1
	KnowDubilschikov
	d1q01EvaGotoSimon
	d1EvaGotoMaria
	pt_map_maria
	d1EvaInfo
	KnowGorny
	KnowSobor
	pt_map_theater
	d1q01EvaAboutMark
	d1EvaAboutKapella
	pt_map_kapella
	d1EvaAboutKaterina
	pt_map_katerina
	KnowStation
	playsound
	mapmark
	ood1EvaIntro1
	KnowJulia
	KnowNevod
	KnowViktor
	ood1Eva4
	ood1EvaIntro2
	ood1Eva1
	ood1Eva2
	KnowEva
	KnowGeorg
	ood6Eva1
	KnowMaria
	KnowMark
	d2q02EvaGotoMaria
	ood3Eva1
	ood4Eva1
	KnowStamatins
	KnowMnogogrannik
	d1q01FirstGeorgVisit
	d6q01
	d4q02
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	player_diary
	GetCategory
	Can't find main outdoor scene
	GetMap
	GetLocator
	Warning: outdoor scene locator 
	 doesnt exist
	Can't find map
	SetMapParams
	player
	Adding diary entry
	d1q01

Import:
	Hold (0 args)
	StopGroup0 (0 args)
	lshWaitForAnimEnd (0 args)
	WaitForAnimEnd (0 args)
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	sync (0 args)
	StopDialog (1 args)
	PlayAnimation (2 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	GetPosition (1 args)
	Rotate (3 args)
	IsLoaded (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	Rotate (2 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	Trace (1 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (2 args)
	lshStopSpeech (0 args)
	GetVariable (2 args)
	GetMainOutdoorScene (1 args)
	AddBlankActor (4 args)
	FindActor (2 args)
	GetGameTime (1 args)
	lshWaitForAnimEnd (1 args)
	SetVariable (2 args)
	TriggerWorld (2 args)
	GetDiaryRoot (1 args)
	SetDiarySection (1 args)
	CreateDiaryEntry (4 args)

RunOp = 0x6
RunTask = 1

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x3 Vars = ()
	GTASK_1  Params = 0
		EVENT_6 Op = 0x1d Vars = ()
		EVENT_0 Op = 0x23 Vars = (object)
		EVENT_10 Op = 0x29 Vars = (object)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xdc Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x27e Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x5cd Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xaf1 Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xdd7 Vars = (int, int)
	GTASK_12 Vars = (object) Params = 2
	GTASK_13 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xf1d Vars = (int, int)


0x0: @ Hold()
0x1: Pop(0)
0x2: Return(); Pop(0)

0x3: @ StopGroup0()
0x4: Pop(0)
0x5: Return(); Pop(0)

0x6: PushEmpty()
0x7: Call 0x13ea

0x8: Pop(0)
0x9: PushEmpty(bool)
0xa: Call 0xffb

0xb: Pop(0)
0xc: Pop(1); Push((bool) Stack[-1] == 0)
0xd: IF (Stack[-1] == 0) GOTO 0x13; Pop(1)

0xe: PushEmpty()
0xf: Push(-0, 0); TaskCall(0)
0x10: Call 0x0

0x11: Pop(-0, 0); TaskReturn
0x12: Pop(0)
0x13: PushEmpty(string)
0x14: Stack[-1] = "Neutral"
0x15: Call 0x103c

0x16: Pop(1)
0x17: @ lshWaitForAnimEnd()
0x18: Pop(0)
0x19: GOTO 0x13

0x1a: @ Hold()
0x1b: Pop(0)
0x1c: Return(); Pop(0)

0x1d: PushEmpty()
0x1e: Push(-0, 0); TaskCall(0)
0x1f: Call 0x0

0x20: Pop(-0, 0); TaskReturn
0x21: Pop(0)
0x22: Return(); Pop(0)

0x23: PushEmpty()
0x24: PushEmpty(object)
0x25: Stack[-1] = Stack[-2]
0x26: Call 0x13eb

0x27: Pop(1)
0x28: Return(); Pop(0)

0x29: PushEmpty()
0x2a: PushEmpty(bool, object)
0x2b: Stack[-1] = Stack[-3]
0x2c: Call 0xfef

0x2d: Pop(2)
0x2e: @ WaitForAnimEnd()
0x2f: Pop(0)
0x30: Return(); Pop(0)

0x31: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x32: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x33: PushEmpty(bool, object)
0x34: Stack[-1] = Stack[-11]
0x35: Call 0x1000

0x36: Pop(1)
0x37: Pop(1); Push((bool) Stack[-1] == 0)
0x38: IF (Stack[-1] == 0) GOTO 0x3b; Pop(1)

0x39: Stack[-10] = (int) -2
0x3a: Return(); Pop(8)

0x3b: @ CreateDialog(Stack[-4])
0x3c: Pop(0)
0x3d: PushEmpty(int)
0x3e: Call 0x109c

0x3f: Pop(0)
0x40: @@ SetNPCName(Stack[-1])
0x41: Pop(1)
0x42: PushEmpty(string)
0x43: Call 0x109e

0x44: Pop(0)
0x45: @@ SetPhoto(Stack[-1])
0x46: Pop(1)
0x47: PushEmpty(int)
0x48: Call 0x13b9

0x49: Pop(0)
0x4a: @@ SetPlayerName(Stack[-1])
0x4b: Pop(1)
0x4c: Stack[-2] = (int) -1
0x4d: @ IsOverrideActive(Stack[-3])
0x4e: Pop(0)
0x4f: Push(Stack[-3])
0x50: IF (Stack[-1] == 0) GOTO 0x53; Pop(1)

0x51: Stack[-10] = (int) -2
0x52: Return(); Pop(8)

0x53: @ DoDialog(Stack[-4])
0x54: Pop(0)
0x55: PushEmpty(object, object)
0x56: Stack[-2] = Stack[-11]
0x57: Stack[-1] = Stack[-6]
0x58: Push(-2, 4); TaskCall(3)
0x59: Call 0x70

0x5a: Pop(-2, 4); TaskReturn
0x5b: Pop(2)
0x5c: @@ IsDialogEnd(Stack[-1])
0x5d: Pop(0)
0x5e: Pop(0); Push((bool) Stack[-1] == 0)
0x5f: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x60: @ sync()
0x61: Pop(0)
0x62: @@ IsDialogEnd(Stack[-1])
0x63: Pop(0)
0x64: GOTO 0x5e

0x65: PushEmpty(object)
0x66: Stack[-1] = Stack[-10]
0x67: Call 0x1038

0x68: Pop(1)
0x69: @ StopDialog(Stack[-4])
0x6a: Pop(0)
0x6b: @@ GetReturnValue(Stack[-2])
0x6c: Pop(0)
0x6d: Stack[-10] = Stack[-2]
0x6e: Return(); Pop(8)

0x6f: Stack[-4] = 0
0x70: PushEmpty()
0x71: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x72: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x73: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x74: Push((int) 1)
0x75: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0x76: PushEmpty(bool)
0x77: Stack[-1] = (bool) 0
0x78: PushEmpty(bool, object)
0x79: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7a: Call 0x12fd

0x7b: Pop(1)
0x7c: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x7d: PushEmpty(bool, object)
0x7e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7f: Call 0x1315

0x80: Pop(1)
0x81: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x82: Stack[-1] = (bool) 1
0x83: IF (Stack[-1] == 0) GOTO 0x9d; Pop(1)

0x84: PushEmpty(object, object)
0x85: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x86: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x87: Call 0x11e3

0x88: Pop(2)
0x89: PushEmpty(string)
0x8a: Stack[-1] = "Neutral"
0x8b: Call 0xcc

0x8c: Pop(1)
0x8d: Push((int) 3926)
0x8e: @@ SetMessage(Stack[-1])
0x8f: Pop(1)
0x90: @@ ClearReplies()
0x91: Pop(0)
0x92: Push((int) 3927)
0x93: Push((int) 4276)
0x94: Push((int) 4275)
0x95: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x96: Pop(3)
0x97: Push((int) 3929)
0x98: Push((int) 4278)
0x99: Push((int) 4277)
0x9a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9b: Pop(3)
0x9c: GOTO 0xae

0x9d: PushEmpty(string)
0x9e: Stack[-1] = "Neutral"
0x9f: Call 0xcc

0xa0: Pop(1)
0xa1: Push((int) 13718)
0xa2: @@ SetMessage(Stack[-1])
0xa3: Pop(1)
0xa4: @@ ClearReplies()
0xa5: Pop(0)
0xa6: Push((int) 13719)
0xa7: Push((int) -1)
0xa8: Push((int) 14985)
0xa9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaa: Pop(3)
0xab: GOTO 0xae

0xac: Return(); Pop(0)

0xad: GOTO 0x74

0xae: PushEmpty(bool)
0xaf: Call 0x10a0

0xb0: Pop(0)
0xb1: IF (Stack[-1] == 0) GOTO 0xbd; Pop(1)

0xb2: @ lshWaitForAnimEnd()
0xb3: Pop(0)
0xb4: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb5: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xb6: GOTO 0xbc

0xb7: PushEmpty(string)
0xb8: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xb9: Call 0x103c

0xba: Pop(1)
0xbb: GOTO 0xb2

0xbc: GOTO 0xcb

0xbd: Push("all")
0xbe: Push("idle")
0xbf: @ PlayAnimation(Stack[-2], Stack[-1])
0xc0: Pop(2)
0xc1: @ WaitForAnimEnd()
0xc2: Pop(0)
0xc3: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc4: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xc5: GOTO 0xcb

0xc6: Push("all")
0xc7: Push("idle")
0xc8: @ PlayAnimation(Stack[-2], Stack[-1])
0xc9: Pop(2)
0xca: GOTO 0xc1

0xcb: Return(); Pop(0)

0xcc: PushEmpty()
0xcd: PushEmpty(bool)
0xce: Call 0x10a0

0xcf: Pop(0)
0xd0: Pop(1); Push((bool) Stack[-1] == 0)
0xd1: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xd2: Return(); Pop(0)

0xd3: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xd4: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xd5: Return(); Pop(0)

0xd6: PushEmpty(string)
0xd7: Stack[-1] = Stack[-2]
0xd8: Call 0x103c

0xd9: Pop(1)
0xda: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xdb: Return(); Pop(0)

0xdc: PushEmpty()
0xdd: Push((int) 1)
0xde: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0xdf: PushEmpty()
0xe0: Call 0x104e

0xe1: Pop(0)
0xe2: Push((int) 4274)
0xe3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe4: IF (Stack[-1] == 0) GOTO 0x11b; Pop(1)

0xe5: PushEmpty(bool)
0xe6: Stack[-1] = (bool) 0
0xe7: PushEmpty(bool, object)
0xe8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe9: Call 0x12fd

0xea: Pop(1)
0xeb: IF (Stack[-1] == 0) GOTO 0xf2; Pop(1)

0xec: PushEmpty(bool, object)
0xed: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xee: Call 0x1315

0xef: Pop(1)
0xf0: IF (Stack[-1] == 0) GOTO 0xf2; Pop(1)

0xf1: Stack[-1] = (bool) 1
0xf2: IF (Stack[-1] == 0) GOTO 0x10c; Pop(1)

0xf3: PushEmpty(object, object)
0xf4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf6: Call 0x11e3

0xf7: Pop(2)
0xf8: PushEmpty(string)
0xf9: Stack[-1] = "Neutral"
0xfa: Call 0xcc

0xfb: Pop(1)
0xfc: Push((int) 3926)
0xfd: @@ SetMessage(Stack[-1])
0xfe: Pop(1)
0xff: @@ ClearReplies()
0x100: Pop(0)
0x101: Push((int) 3927)
0x102: Push((int) 4276)
0x103: Push((int) 4275)
0x104: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x105: Pop(3)
0x106: Push((int) 3929)
0x107: Push((int) 4278)
0x108: Push((int) 4277)
0x109: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10a: Pop(3)
0x10b: Return(); Pop(0)

0x10c: PushEmpty(string)
0x10d: Stack[-1] = "Neutral"
0x10e: Call 0xcc

0x10f: Pop(1)
0x110: Push((int) 13718)
0x111: @@ SetMessage(Stack[-1])
0x112: Pop(1)
0x113: @@ ClearReplies()
0x114: Pop(0)
0x115: Push((int) 13719)
0x116: Push((int) -1)
0x117: Push((int) 14985)
0x118: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x119: Pop(3)
0x11a: Return(); Pop(0)

0x11b: Push((int) 4278)
0x11c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11d: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x11e: PushEmpty(string)
0x11f: Stack[-1] = "Neutral"
0x120: Call 0xcc

0x121: Pop(1)
0x122: Push((int) 3930)
0x123: @@ SetMessage(Stack[-1])
0x124: Pop(1)
0x125: @@ ClearReplies()
0x126: Pop(0)
0x127: Push((int) 3931)
0x128: Push((int) 4276)
0x129: Push((int) 4279)
0x12a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12b: Pop(3)
0x12c: Push((int) 3932)
0x12d: Push((int) 4288)
0x12e: Push((int) 4280)
0x12f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x130: Pop(3)
0x131: Push((int) 3933)
0x132: Push((int) -1)
0x133: Push((int) 4281)
0x134: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x135: Pop(3)
0x136: Return(); Pop(0)

0x137: Push((int) 4276)
0x138: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x139: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x13a: PushEmpty(string)
0x13b: Stack[-1] = "Neutral"
0x13c: Call 0xcc

0x13d: Pop(1)
0x13e: Push((int) 3928)
0x13f: @@ SetMessage(Stack[-1])
0x140: Pop(1)
0x141: @@ ClearReplies()
0x142: Pop(0)
0x143: Push((int) 3937)
0x144: Push((int) 4288)
0x145: Push((int) 4286)
0x146: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x147: Pop(3)
0x148: Push((int) 3938)
0x149: Push((int) 4288)
0x14a: Push((int) 4287)
0x14b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14c: Pop(3)
0x14d: Return(); Pop(0)

0x14e: Push((int) 4288)
0x14f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x150: IF (Stack[-1] == 0) GOTO 0x16a; Pop(1)

0x151: PushEmpty(string)
0x152: Stack[-1] = "Neutral"
0x153: Call 0xcc

0x154: Pop(1)
0x155: Push((int) 3939)
0x156: @@ SetMessage(Stack[-1])
0x157: Pop(1)
0x158: @@ ClearReplies()
0x159: Pop(0)
0x15a: Push((int) 3940)
0x15b: Push((int) 4297)
0x15c: Push((int) 4291)
0x15d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15e: Pop(3)
0x15f: Push((int) 3941)
0x160: Push((int) 4294)
0x161: Push((int) 4292)
0x162: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x163: Pop(3)
0x164: Push((int) 3942)
0x165: Push((int) -1)
0x166: Push((int) 4293)
0x167: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x168: Pop(3)
0x169: Return(); Pop(0)

0x16a: Push((int) 4294)
0x16b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16c: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x16d: PushEmpty(string)
0x16e: Stack[-1] = "Neutral"
0x16f: Call 0xcc

0x170: Pop(1)
0x171: Push((int) 3943)
0x172: @@ SetMessage(Stack[-1])
0x173: Pop(1)
0x174: @@ ClearReplies()
0x175: Pop(0)
0x176: Push((int) 3944)
0x177: Push((int) -1)
0x178: Push((int) 4295)
0x179: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17a: Pop(3)
0x17b: Push((int) 3945)
0x17c: Push((int) -1)
0x17d: Push((int) 4296)
0x17e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17f: Pop(3)
0x180: Return(); Pop(0)

0x181: Push((int) 4297)
0x182: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x183: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x184: PushEmpty(string)
0x185: Stack[-1] = "Neutral"
0x186: Call 0xcc

0x187: Pop(1)
0x188: Push((int) 3946)
0x189: @@ SetMessage(Stack[-1])
0x18a: Pop(1)
0x18b: @@ ClearReplies()
0x18c: Pop(0)
0x18d: Push((int) 3947)
0x18e: Push((int) -1)
0x18f: Push((int) 4298)
0x190: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x191: Pop(3)
0x192: Push((int) 3948)
0x193: Push((int) -1)
0x194: Push((int) 4299)
0x195: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x196: Pop(3)
0x197: Return(); Pop(0)

0x198: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x199: PushEmpty(bool)
0x19a: Call 0x10a0

0x19b: Pop(0)
0x19c: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x19d: @ lshStopAnimation()
0x19e: Pop(0)
0x19f: GOTO 0x1a2

0x1a0: @ StopAnimation()
0x1a1: Pop(0)
0x1a2: Return(); Pop(0)

0x1a3: GOTO 0xdd

0x1a4: Return(); Pop(0)

0x1a5: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1a6: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x1a7: PushEmpty(bool, object)
0x1a8: Stack[-1] = Stack[-11]
0x1a9: Call 0x1000

0x1aa: Pop(1)
0x1ab: Pop(1); Push((bool) Stack[-1] == 0)
0x1ac: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x1ad: Stack[-10] = (int) -2
0x1ae: Return(); Pop(8)

0x1af: @ CreateDialog(Stack[-4])
0x1b0: Pop(0)
0x1b1: PushEmpty(int)
0x1b2: Call 0x109c

0x1b3: Pop(0)
0x1b4: @@ SetNPCName(Stack[-1])
0x1b5: Pop(1)
0x1b6: PushEmpty(string)
0x1b7: Call 0x109e

0x1b8: Pop(0)
0x1b9: @@ SetPhoto(Stack[-1])
0x1ba: Pop(1)
0x1bb: PushEmpty(int)
0x1bc: Call 0x13b9

0x1bd: Pop(0)
0x1be: @@ SetPlayerName(Stack[-1])
0x1bf: Pop(1)
0x1c0: Stack[-2] = (int) -1
0x1c1: @ IsOverrideActive(Stack[-3])
0x1c2: Pop(0)
0x1c3: Push(Stack[-3])
0x1c4: IF (Stack[-1] == 0) GOTO 0x1c7; Pop(1)

0x1c5: Stack[-10] = (int) -2
0x1c6: Return(); Pop(8)

0x1c7: @ DoDialog(Stack[-4])
0x1c8: Pop(0)
0x1c9: PushEmpty(object, object)
0x1ca: Stack[-2] = Stack[-11]
0x1cb: Stack[-1] = Stack[-6]
0x1cc: Push(-2, 4); TaskCall(5)
0x1cd: Call 0x1e4

0x1ce: Pop(-2, 4); TaskReturn
0x1cf: Pop(2)
0x1d0: @@ IsDialogEnd(Stack[-1])
0x1d1: Pop(0)
0x1d2: Pop(0); Push((bool) Stack[-1] == 0)
0x1d3: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

0x1d4: @ sync()
0x1d5: Pop(0)
0x1d6: @@ IsDialogEnd(Stack[-1])
0x1d7: Pop(0)
0x1d8: GOTO 0x1d2

0x1d9: PushEmpty(object)
0x1da: Stack[-1] = Stack[-10]
0x1db: Call 0x1038

0x1dc: Pop(1)
0x1dd: @ StopDialog(Stack[-4])
0x1de: Pop(0)
0x1df: @@ GetReturnValue(Stack[-2])
0x1e0: Pop(0)
0x1e1: Stack[-10] = Stack[-2]
0x1e2: Return(); Pop(8)

0x1e3: Stack[-4] = 0
0x1e4: PushEmpty()
0x1e5: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x1e6: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x1e7: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1e8: Push((int) 1)
0x1e9: IF (Stack[-1] == 0) GOTO 0x250; Pop(1)

0x1ea: PushEmpty(bool, object)
0x1eb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ec: Call 0x123d

0x1ed: Pop(1)
0x1ee: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0x1ef: PushEmpty(object, object)
0x1f0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1f1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1f2: Call 0x11d7

0x1f3: Pop(2)
0x1f4: PushEmpty(string)
0x1f5: Stack[-1] = "Neutral"
0x1f6: Call 0x26e

0x1f7: Pop(1)
0x1f8: Push((int) 4496)
0x1f9: @@ SetMessage(Stack[-1])
0x1fa: Pop(1)
0x1fb: @@ ClearReplies()
0x1fc: Pop(0)
0x1fd: Push((int) 4501)
0x1fe: Push((int) 4905)
0x1ff: Push((int) 4904)
0x200: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x201: Pop(3)
0x202: Push((int) 4517)
0x203: Push((int) 4923)
0x204: Push((int) 4922)
0x205: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x206: Pop(3)
0x207: Push((int) 4521)
0x208: Push((int) 4923)
0x209: Push((int) 4928)
0x20a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20b: Pop(3)
0x20c: GOTO 0x250

0x20d: PushEmpty(bool, object)
0x20e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x20f: Call 0x126d

0x210: Pop(1)
0x211: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x212: PushEmpty(object, object)
0x213: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x214: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x215: Call 0x11d7

0x216: Pop(2)
0x217: PushEmpty(string)
0x218: Stack[-1] = "Neutral"
0x219: Call 0x26e

0x21a: Pop(1)
0x21b: Push((int) 4590)
0x21c: @@ SetMessage(Stack[-1])
0x21d: Pop(1)
0x21e: @@ ClearReplies()
0x21f: Pop(0)
0x220: Push((int) 4591)
0x221: Push((int) 5013)
0x222: Push((int) 5012)
0x223: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x224: Pop(3)
0x225: Push((int) 4607)
0x226: Push((int) 5015)
0x227: Push((int) 5032)
0x228: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x229: Pop(3)
0x22a: Push((int) 4608)
0x22b: Push((int) 5015)
0x22c: Push((int) 5034)
0x22d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22e: Pop(3)
0x22f: GOTO 0x250

0x230: PushEmpty(object, object)
0x231: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x232: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x233: Call 0x115c

0x234: Pop(2)
0x235: PushEmpty(object, object)
0x236: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x237: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x238: Call 0x11d7

0x239: Pop(2)
0x23a: PushEmpty(string)
0x23b: Stack[-1] = "Neutral"
0x23c: Call 0x26e

0x23d: Pop(1)
0x23e: Push((int) 4568)
0x23f: @@ SetMessage(Stack[-1])
0x240: Pop(1)
0x241: @@ ClearReplies()
0x242: Pop(0)
0x243: Push((int) 4569)
0x244: Push((int) 4989)
0x245: Push((int) 4988)
0x246: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x247: Pop(3)
0x248: Push((int) 4586)
0x249: Push((int) 5007)
0x24a: Push((int) 5006)
0x24b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24c: Pop(3)
0x24d: GOTO 0x250

0x24e: Return(); Pop(0)

0x24f: GOTO 0x1e8

0x250: PushEmpty(bool)
0x251: Call 0x10a0

0x252: Pop(0)
0x253: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x254: @ lshWaitForAnimEnd()
0x255: Pop(0)
0x256: Push( Stack[3 + Tasks[-1].StackPointer] )
0x257: IF (Stack[-1] == 0) GOTO 0x259; Pop(1)

0x258: GOTO 0x25e

0x259: PushEmpty(string)
0x25a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x25b: Call 0x103c

0x25c: Pop(1)
0x25d: GOTO 0x254

0x25e: GOTO 0x26d

0x25f: Push("all")
0x260: Push("idle")
0x261: @ PlayAnimation(Stack[-2], Stack[-1])
0x262: Pop(2)
0x263: @ WaitForAnimEnd()
0x264: Pop(0)
0x265: Push( Stack[3 + Tasks[-1].StackPointer] )
0x266: IF (Stack[-1] == 0) GOTO 0x268; Pop(1)

0x267: GOTO 0x26d

0x268: Push("all")
0x269: Push("idle")
0x26a: @ PlayAnimation(Stack[-2], Stack[-1])
0x26b: Pop(2)
0x26c: GOTO 0x263

0x26d: Return(); Pop(0)

0x26e: PushEmpty()
0x26f: PushEmpty(bool)
0x270: Call 0x10a0

0x271: Pop(0)
0x272: Pop(1); Push((bool) Stack[-1] == 0)
0x273: IF (Stack[-1] == 0) GOTO 0x275; Pop(1)

0x274: Return(); Pop(0)

0x275: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x276: IF (Stack[-1] == 0) GOTO 0x278; Pop(1)

0x277: Return(); Pop(0)

0x278: PushEmpty(string)
0x279: Stack[-1] = Stack[-2]
0x27a: Call 0x103c

0x27b: Pop(1)
0x27c: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x27d: Return(); Pop(0)

0x27e: PushEmpty()
0x27f: Push((int) 1)
0x280: IF (Stack[-1] == 0) GOTO 0x4f1; Pop(1)

0x281: PushEmpty()
0x282: Call 0x104e

0x283: Pop(0)
0x284: Push((int) 4915)
0x285: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x286: IF (Stack[-1] == 0) GOTO 0x29b; Pop(1)

0x287: PushEmpty(object, object)
0x288: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x289: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x28a: Call 0x1127

0x28b: Pop(2)
0x28c: PushEmpty(object, object)
0x28d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x28e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x28f: Call 0x11a7

0x290: Pop(2)
0x291: PushEmpty(object, object)
0x292: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x293: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x294: Call 0x1134

0x295: Pop(2)
0x296: PushEmpty(object, object)
0x297: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x298: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x299: Call 0x10cc

0x29a: Pop(2)
0x29b: Push((int) 4900)
0x29c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x29d: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x29e: PushEmpty(object, object)
0x29f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2a0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2a1: Call 0x1127

0x2a2: Pop(2)
0x2a3: PushEmpty(object, object)
0x2a4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2a5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2a6: Call 0x11a7

0x2a7: Pop(2)
0x2a8: PushEmpty(object, object)
0x2a9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2aa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2ab: Call 0x1134

0x2ac: Pop(2)
0x2ad: PushEmpty(object, object)
0x2ae: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2af: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2b0: Call 0x10cc

0x2b1: Pop(2)
0x2b2: Push((int) 5020)
0x2b3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2b4: IF (Stack[-1] == 0) GOTO 0x2ba; Pop(1)

0x2b5: PushEmpty(object, object)
0x2b6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2b7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2b8: Call 0x11c5

0x2b9: Pop(2)
0x2ba: Push((int) 5021)
0x2bb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2bc: IF (Stack[-1] == 0) GOTO 0x2c2; Pop(1)

0x2bd: PushEmpty(object, object)
0x2be: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2bf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2c0: Call 0x11c5

0x2c1: Pop(2)
0x2c2: Push((int) 4899)
0x2c3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2c4: IF (Stack[-1] == 0) GOTO 0x329; Pop(1)

0x2c5: PushEmpty(bool, object)
0x2c6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2c7: Call 0x123d

0x2c8: Pop(1)
0x2c9: IF (Stack[-1] == 0) GOTO 0x2e8; Pop(1)

0x2ca: PushEmpty(object, object)
0x2cb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2cc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2cd: Call 0x11d7

0x2ce: Pop(2)
0x2cf: PushEmpty(string)
0x2d0: Stack[-1] = "Neutral"
0x2d1: Call 0x26e

0x2d2: Pop(1)
0x2d3: Push((int) 4496)
0x2d4: @@ SetMessage(Stack[-1])
0x2d5: Pop(1)
0x2d6: @@ ClearReplies()
0x2d7: Pop(0)
0x2d8: Push((int) 4501)
0x2d9: Push((int) 4905)
0x2da: Push((int) 4904)
0x2db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2dc: Pop(3)
0x2dd: Push((int) 4517)
0x2de: Push((int) 4923)
0x2df: Push((int) 4922)
0x2e0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e1: Pop(3)
0x2e2: Push((int) 4521)
0x2e3: Push((int) 4923)
0x2e4: Push((int) 4928)
0x2e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e6: Pop(3)
0x2e7: Return(); Pop(0)

0x2e8: PushEmpty(bool, object)
0x2e9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2ea: Call 0x126d

0x2eb: Pop(1)
0x2ec: IF (Stack[-1] == 0) GOTO 0x30b; Pop(1)

0x2ed: PushEmpty(object, object)
0x2ee: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2ef: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2f0: Call 0x11d7

0x2f1: Pop(2)
0x2f2: PushEmpty(string)
0x2f3: Stack[-1] = "Neutral"
0x2f4: Call 0x26e

0x2f5: Pop(1)
0x2f6: Push((int) 4590)
0x2f7: @@ SetMessage(Stack[-1])
0x2f8: Pop(1)
0x2f9: @@ ClearReplies()
0x2fa: Pop(0)
0x2fb: Push((int) 4591)
0x2fc: Push((int) 5013)
0x2fd: Push((int) 5012)
0x2fe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ff: Pop(3)
0x300: Push((int) 4607)
0x301: Push((int) 5015)
0x302: Push((int) 5032)
0x303: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x304: Pop(3)
0x305: Push((int) 4608)
0x306: Push((int) 5015)
0x307: Push((int) 5034)
0x308: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x309: Pop(3)
0x30a: Return(); Pop(0)

0x30b: PushEmpty(object, object)
0x30c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x30d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x30e: Call 0x115c

0x30f: Pop(2)
0x310: PushEmpty(object, object)
0x311: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x312: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x313: Call 0x11d7

0x314: Pop(2)
0x315: PushEmpty(string)
0x316: Stack[-1] = "Neutral"
0x317: Call 0x26e

0x318: Pop(1)
0x319: Push((int) 4568)
0x31a: @@ SetMessage(Stack[-1])
0x31b: Pop(1)
0x31c: @@ ClearReplies()
0x31d: Pop(0)
0x31e: Push((int) 4569)
0x31f: Push((int) 4989)
0x320: Push((int) 4988)
0x321: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x322: Pop(3)
0x323: Push((int) 4586)
0x324: Push((int) 5007)
0x325: Push((int) 5006)
0x326: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x327: Pop(3)
0x328: Return(); Pop(0)

0x329: Push((int) 5007)
0x32a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x32b: IF (Stack[-1] == 0) GOTO 0x340; Pop(1)

0x32c: PushEmpty(string)
0x32d: Stack[-1] = "Neutral"
0x32e: Call 0x26e

0x32f: Pop(1)
0x330: Push((int) 4587)
0x331: @@ SetMessage(Stack[-1])
0x332: Pop(1)
0x333: @@ ClearReplies()
0x334: Pop(0)
0x335: Push((int) 4588)
0x336: Push((int) 4993)
0x337: Push((int) 5008)
0x338: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x339: Pop(3)
0x33a: Push((int) 4589)
0x33b: Push((int) 5001)
0x33c: Push((int) 5009)
0x33d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x33e: Pop(3)
0x33f: Return(); Pop(0)

0x340: Push((int) 4989)
0x341: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x342: IF (Stack[-1] == 0) GOTO 0x357; Pop(1)

0x343: PushEmpty(string)
0x344: Stack[-1] = "Neutral"
0x345: Call 0x26e

0x346: Pop(1)
0x347: Push((int) 4570)
0x348: @@ SetMessage(Stack[-1])
0x349: Pop(1)
0x34a: @@ ClearReplies()
0x34b: Pop(0)
0x34c: Push((int) 4571)
0x34d: Push((int) 4991)
0x34e: Push((int) 4990)
0x34f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x350: Pop(3)
0x351: Push((int) 4580)
0x352: Push((int) 5001)
0x353: Push((int) 5000)
0x354: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x355: Pop(3)
0x356: Return(); Pop(0)

0x357: Push((int) 5001)
0x358: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x359: IF (Stack[-1] == 0) GOTO 0x373; Pop(1)

0x35a: PushEmpty(object, object)
0x35b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x35c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x35d: Call 0x11ad

0x35e: Pop(2)
0x35f: PushEmpty(string)
0x360: Stack[-1] = "Neutral"
0x361: Call 0x26e

0x362: Pop(1)
0x363: Push((int) 4581)
0x364: @@ SetMessage(Stack[-1])
0x365: Pop(1)
0x366: @@ ClearReplies()
0x367: Pop(0)
0x368: Push((int) 4582)
0x369: Push((int) 5003)
0x36a: Push((int) 5002)
0x36b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x36c: Pop(3)
0x36d: Push((int) 4585)
0x36e: Push((int) 4993)
0x36f: Push((int) 5005)
0x370: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x371: Pop(3)
0x372: Return(); Pop(0)

0x373: Push((int) 5003)
0x374: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x375: IF (Stack[-1] == 0) GOTO 0x38f; Pop(1)

0x376: PushEmpty(object, object)
0x377: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x378: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x379: Call 0x10fa

0x37a: Pop(2)
0x37b: PushEmpty(object, object)
0x37c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x37d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x37e: Call 0x11b3

0x37f: Pop(2)
0x380: PushEmpty(string)
0x381: Stack[-1] = "Neutral"
0x382: Call 0x26e

0x383: Pop(1)
0x384: Push((int) 4583)
0x385: @@ SetMessage(Stack[-1])
0x386: Pop(1)
0x387: @@ ClearReplies()
0x388: Pop(0)
0x389: Push((int) 4584)
0x38a: Push((int) 4993)
0x38b: Push((int) 5004)
0x38c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x38d: Pop(3)
0x38e: Return(); Pop(0)

0x38f: Push((int) 4991)
0x390: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x391: IF (Stack[-1] == 0) GOTO 0x3a6; Pop(1)

0x392: PushEmpty(string)
0x393: Stack[-1] = "Neutral"
0x394: Call 0x26e

0x395: Pop(1)
0x396: Push((int) 4572)
0x397: @@ SetMessage(Stack[-1])
0x398: Pop(1)
0x399: @@ ClearReplies()
0x39a: Pop(0)
0x39b: Push((int) 4573)
0x39c: Push((int) 4993)
0x39d: Push((int) 4992)
0x39e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x39f: Pop(3)
0x3a0: Push((int) 4579)
0x3a1: Push((int) 4993)
0x3a2: Push((int) 4998)
0x3a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a4: Pop(3)
0x3a5: Return(); Pop(0)

0x3a6: Push((int) 4993)
0x3a7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3a8: IF (Stack[-1] == 0) GOTO 0x3bd; Pop(1)

0x3a9: PushEmpty(string)
0x3aa: Stack[-1] = "Neutral"
0x3ab: Call 0x26e

0x3ac: Pop(1)
0x3ad: Push((int) 4574)
0x3ae: @@ SetMessage(Stack[-1])
0x3af: Pop(1)
0x3b0: @@ ClearReplies()
0x3b1: Pop(0)
0x3b2: Push((int) 4575)
0x3b3: Push((int) -1)
0x3b4: Push((int) 4994)
0x3b5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b6: Pop(3)
0x3b7: Push((int) 4576)
0x3b8: Push((int) 4996)
0x3b9: Push((int) 4995)
0x3ba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3bb: Pop(3)
0x3bc: Return(); Pop(0)

0x3bd: Push((int) 4996)
0x3be: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3bf: IF (Stack[-1] == 0) GOTO 0x3cf; Pop(1)

0x3c0: PushEmpty(string)
0x3c1: Stack[-1] = "Neutral"
0x3c2: Call 0x26e

0x3c3: Pop(1)
0x3c4: Push((int) 4577)
0x3c5: @@ SetMessage(Stack[-1])
0x3c6: Pop(1)
0x3c7: @@ ClearReplies()
0x3c8: Pop(0)
0x3c9: Push((int) 4578)
0x3ca: Push((int) -1)
0x3cb: Push((int) 4997)
0x3cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3cd: Pop(3)
0x3ce: Return(); Pop(0)

0x3cf: Push((int) 5013)
0x3d0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3d1: IF (Stack[-1] == 0) GOTO 0x3e6; Pop(1)

0x3d2: PushEmpty(string)
0x3d3: Stack[-1] = "Neutral"
0x3d4: Call 0x26e

0x3d5: Pop(1)
0x3d6: Push((int) 4592)
0x3d7: @@ SetMessage(Stack[-1])
0x3d8: Pop(1)
0x3d9: @@ ClearReplies()
0x3da: Pop(0)
0x3db: Push((int) 4593)
0x3dc: Push((int) 5015)
0x3dd: Push((int) 5014)
0x3de: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3df: Pop(3)
0x3e0: Push((int) 4603)
0x3e1: Push((int) 5027)
0x3e2: Push((int) 5026)
0x3e3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e4: Pop(3)
0x3e5: Return(); Pop(0)

0x3e6: Push((int) 5027)
0x3e7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3e8: IF (Stack[-1] == 0) GOTO 0x3fd; Pop(1)

0x3e9: PushEmpty(string)
0x3ea: Stack[-1] = "Neutral"
0x3eb: Call 0x26e

0x3ec: Pop(1)
0x3ed: Push((int) 4604)
0x3ee: @@ SetMessage(Stack[-1])
0x3ef: Pop(1)
0x3f0: @@ ClearReplies()
0x3f1: Pop(0)
0x3f2: Push((int) 4605)
0x3f3: Push((int) 5015)
0x3f4: Push((int) 5028)
0x3f5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f6: Pop(3)
0x3f7: Push((int) 4606)
0x3f8: Push((int) 5015)
0x3f9: Push((int) 5030)
0x3fa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3fb: Pop(3)
0x3fc: Return(); Pop(0)

0x3fd: Push((int) 5015)
0x3fe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ff: IF (Stack[-1] == 0) GOTO 0x414; Pop(1)

0x400: PushEmpty(string)
0x401: Stack[-1] = "Neutral"
0x402: Call 0x26e

0x403: Pop(1)
0x404: Push((int) 4594)
0x405: @@ SetMessage(Stack[-1])
0x406: Pop(1)
0x407: @@ ClearReplies()
0x408: Pop(0)
0x409: Push((int) 4595)
0x40a: Push((int) 5017)
0x40b: Push((int) 5016)
0x40c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x40d: Pop(3)
0x40e: Push((int) 4602)
0x40f: Push((int) 5019)
0x410: Push((int) 5024)
0x411: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x412: Pop(3)
0x413: Return(); Pop(0)

0x414: Push((int) 5017)
0x415: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x416: IF (Stack[-1] == 0) GOTO 0x42b; Pop(1)

0x417: PushEmpty(string)
0x418: Stack[-1] = "Neutral"
0x419: Call 0x26e

0x41a: Pop(1)
0x41b: Push((int) 4596)
0x41c: @@ SetMessage(Stack[-1])
0x41d: Pop(1)
0x41e: @@ ClearReplies()
0x41f: Pop(0)
0x420: Push((int) 4597)
0x421: Push((int) 5019)
0x422: Push((int) 5018)
0x423: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x424: Pop(3)
0x425: Push((int) 4601)
0x426: Push((int) 5019)
0x427: Push((int) 5022)
0x428: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x429: Pop(3)
0x42a: Return(); Pop(0)

0x42b: Push((int) 5019)
0x42c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x42d: IF (Stack[-1] == 0) GOTO 0x442; Pop(1)

0x42e: PushEmpty(string)
0x42f: Stack[-1] = "Neutral"
0x430: Call 0x26e

0x431: Pop(1)
0x432: Push((int) 4598)
0x433: @@ SetMessage(Stack[-1])
0x434: Pop(1)
0x435: @@ ClearReplies()
0x436: Pop(0)
0x437: Push((int) 4599)
0x438: Push((int) -1)
0x439: Push((int) 5020)
0x43a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x43b: Pop(3)
0x43c: Push((int) 4600)
0x43d: Push((int) -1)
0x43e: Push((int) 5021)
0x43f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x440: Pop(3)
0x441: Return(); Pop(0)

0x442: Push((int) 4923)
0x443: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x444: IF (Stack[-1] == 0) GOTO 0x459; Pop(1)

0x445: PushEmpty(string)
0x446: Stack[-1] = "Neutral"
0x447: Call 0x26e

0x448: Pop(1)
0x449: Push((int) 4518)
0x44a: @@ SetMessage(Stack[-1])
0x44b: Pop(1)
0x44c: @@ ClearReplies()
0x44d: Pop(0)
0x44e: Push((int) 4519)
0x44f: Push((int) 4907)
0x450: Push((int) 4924)
0x451: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x452: Pop(3)
0x453: Push((int) 4520)
0x454: Push((int) 4907)
0x455: Push((int) 4926)
0x456: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x457: Pop(3)
0x458: Return(); Pop(0)

0x459: Push((int) 4905)
0x45a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x45b: IF (Stack[-1] == 0) GOTO 0x475; Pop(1)

0x45c: PushEmpty(string)
0x45d: Stack[-1] = "Neutral"
0x45e: Call 0x26e

0x45f: Pop(1)
0x460: Push((int) 4502)
0x461: @@ SetMessage(Stack[-1])
0x462: Pop(1)
0x463: @@ ClearReplies()
0x464: Pop(0)
0x465: Push((int) 4503)
0x466: Push((int) 4907)
0x467: Push((int) 4906)
0x468: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x469: Pop(3)
0x46a: Push((int) 4515)
0x46b: Push((int) 4923)
0x46c: Push((int) 4918)
0x46d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x46e: Pop(3)
0x46f: Push((int) 4516)
0x470: Push((int) 4907)
0x471: Push((int) 4920)
0x472: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x473: Pop(3)
0x474: Return(); Pop(0)

0x475: Push((int) 4907)
0x476: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x477: IF (Stack[-1] == 0) GOTO 0x487; Pop(1)

0x478: PushEmpty(string)
0x479: Stack[-1] = "Neutral"
0x47a: Call 0x26e

0x47b: Pop(1)
0x47c: Push((int) 4504)
0x47d: @@ SetMessage(Stack[-1])
0x47e: Pop(1)
0x47f: @@ ClearReplies()
0x480: Pop(0)
0x481: Push((int) 4505)
0x482: Push((int) 4909)
0x483: Push((int) 4908)
0x484: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x485: Pop(3)
0x486: Return(); Pop(0)

0x487: Push((int) 4909)
0x488: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x489: IF (Stack[-1] == 0) GOTO 0x49e; Pop(1)

0x48a: PushEmpty(string)
0x48b: Stack[-1] = "Neutral"
0x48c: Call 0x26e

0x48d: Pop(1)
0x48e: Push((int) 4506)
0x48f: @@ SetMessage(Stack[-1])
0x490: Pop(1)
0x491: @@ ClearReplies()
0x492: Pop(0)
0x493: Push((int) 4507)
0x494: Push((int) 4911)
0x495: Push((int) 4910)
0x496: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x497: Pop(3)
0x498: Push((int) 4514)
0x499: Push((int) 4911)
0x49a: Push((int) 4917)
0x49b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x49c: Pop(3)
0x49d: Return(); Pop(0)

0x49e: Push((int) 4911)
0x49f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4a0: IF (Stack[-1] == 0) GOTO 0x4b5; Pop(1)

0x4a1: PushEmpty(string)
0x4a2: Stack[-1] = "Neutral"
0x4a3: Call 0x26e

0x4a4: Pop(1)
0x4a5: Push((int) 4508)
0x4a6: @@ SetMessage(Stack[-1])
0x4a7: Pop(1)
0x4a8: @@ ClearReplies()
0x4a9: Pop(0)
0x4aa: Push((int) 4509)
0x4ab: Push((int) 4913)
0x4ac: Push((int) 4912)
0x4ad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ae: Pop(3)
0x4af: Push((int) 4513)
0x4b0: Push((int) 4913)
0x4b1: Push((int) 4916)
0x4b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b3: Pop(3)
0x4b4: Return(); Pop(0)

0x4b5: Push((int) 4913)
0x4b6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4b7: IF (Stack[-1] == 0) GOTO 0x4e5; Pop(1)

0x4b8: PushEmpty(object, object)
0x4b9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4ba: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4bb: Call 0x1156

0x4bc: Pop(2)
0x4bd: PushEmpty(object, object)
0x4be: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4bf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4c0: Call 0x10ba

0x4c1: Pop(2)
0x4c2: PushEmpty(object, object)
0x4c3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4c4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4c5: Call 0x11e9

0x4c6: Pop(2)
0x4c7: PushEmpty(object, object)
0x4c8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4c9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4ca: Call 0x11b9

0x4cb: Pop(2)
0x4cc: PushEmpty(object, object)
0x4cd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4ce: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4cf: Call 0x11dd

0x4d0: Pop(2)
0x4d1: PushEmpty(string)
0x4d2: Stack[-1] = "Neutral"
0x4d3: Call 0x26e

0x4d4: Pop(1)
0x4d5: Push((int) 4510)
0x4d6: @@ SetMessage(Stack[-1])
0x4d7: Pop(1)
0x4d8: @@ ClearReplies()
0x4d9: Pop(0)
0x4da: Push((int) 4512)
0x4db: Push((int) -1)
0x4dc: Push((int) 4915)
0x4dd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4de: Pop(3)
0x4df: Push((int) 4497)
0x4e0: Push((int) -1)
0x4e1: Push((int) 4900)
0x4e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4e3: Pop(3)
0x4e4: Return(); Pop(0)

0x4e5: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x4e6: PushEmpty(bool)
0x4e7: Call 0x10a0

0x4e8: Pop(0)
0x4e9: IF (Stack[-1] == 0) GOTO 0x4ed; Pop(1)

0x4ea: @ lshStopAnimation()
0x4eb: Pop(0)
0x4ec: GOTO 0x4ef

0x4ed: @ StopAnimation()
0x4ee: Pop(0)
0x4ef: Return(); Pop(0)

0x4f0: GOTO 0x27f

0x4f1: Return(); Pop(0)

0x4f2: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x4f3: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x4f4: PushEmpty(bool, object)
0x4f5: Stack[-1] = Stack[-11]
0x4f6: Call 0x1000

0x4f7: Pop(1)
0x4f8: Pop(1); Push((bool) Stack[-1] == 0)
0x4f9: IF (Stack[-1] == 0) GOTO 0x4fc; Pop(1)

0x4fa: Stack[-10] = (int) -2
0x4fb: Return(); Pop(8)

0x4fc: @ CreateDialog(Stack[-4])
0x4fd: Pop(0)
0x4fe: PushEmpty(int)
0x4ff: Call 0x109c

0x500: Pop(0)
0x501: @@ SetNPCName(Stack[-1])
0x502: Pop(1)
0x503: PushEmpty(string)
0x504: Call 0x109e

0x505: Pop(0)
0x506: @@ SetPhoto(Stack[-1])
0x507: Pop(1)
0x508: PushEmpty(int)
0x509: Call 0x13b9

0x50a: Pop(0)
0x50b: @@ SetPlayerName(Stack[-1])
0x50c: Pop(1)
0x50d: Stack[-2] = (int) -1
0x50e: @ IsOverrideActive(Stack[-3])
0x50f: Pop(0)
0x510: Push(Stack[-3])
0x511: IF (Stack[-1] == 0) GOTO 0x514; Pop(1)

0x512: Stack[-10] = (int) -2
0x513: Return(); Pop(8)

0x514: @ DoDialog(Stack[-4])
0x515: Pop(0)
0x516: PushEmpty(object, object)
0x517: Stack[-2] = Stack[-11]
0x518: Stack[-1] = Stack[-6]
0x519: Push(-2, 4); TaskCall(7)
0x51a: Call 0x531

0x51b: Pop(-2, 4); TaskReturn
0x51c: Pop(2)
0x51d: @@ IsDialogEnd(Stack[-1])
0x51e: Pop(0)
0x51f: Pop(0); Push((bool) Stack[-1] == 0)
0x520: IF (Stack[-1] == 0) GOTO 0x526; Pop(1)

0x521: @ sync()
0x522: Pop(0)
0x523: @@ IsDialogEnd(Stack[-1])
0x524: Pop(0)
0x525: GOTO 0x51f

0x526: PushEmpty(object)
0x527: Stack[-1] = Stack[-10]
0x528: Call 0x1038

0x529: Pop(1)
0x52a: @ StopDialog(Stack[-4])
0x52b: Pop(0)
0x52c: @@ GetReturnValue(Stack[-2])
0x52d: Pop(0)
0x52e: Stack[-10] = Stack[-2]
0x52f: Return(); Pop(8)

0x530: Stack[-4] = 0
0x531: PushEmpty()
0x532: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x533: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x534: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x535: Push((int) 1)
0x536: IF (Stack[-1] == 0) GOTO 0x59f; Pop(1)

0x537: PushEmpty(string)
0x538: Stack[-1] = "Neutral"
0x539: Call 0x5bd

0x53a: Pop(1)
0x53b: Push((int) 4610)
0x53c: @@ SetMessage(Stack[-1])
0x53d: Pop(1)
0x53e: @@ ClearReplies()
0x53f: Pop(0)
0x540: PushEmpty(bool, object)
0x541: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x542: Call 0x12e5

0x543: Pop(1)
0x544: IF (Stack[-1] == 0) GOTO 0x54a; Pop(1)

0x545: Push((int) 4612)
0x546: Push((int) 5058)
0x547: Push((int) 5042)
0x548: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x549: Pop(3)
0x54a: PushEmpty(bool, object)
0x54b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x54c: Call 0x12cd

0x54d: Pop(1)
0x54e: IF (Stack[-1] == 0) GOTO 0x554; Pop(1)

0x54f: Push((int) 4611)
0x550: Push((int) 5056)
0x551: Push((int) 5041)
0x552: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x553: Pop(3)
0x554: PushEmpty(bool, object)
0x555: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x556: Call 0x1309

0x557: Pop(1)
0x558: IF (Stack[-1] == 0) GOTO 0x55e; Pop(1)

0x559: Push((int) 4613)
0x55a: Push((int) 5097)
0x55b: Push((int) 5043)
0x55c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x55d: Pop(3)
0x55e: PushEmpty(bool)
0x55f: Stack[-1] = (bool) 0
0x560: PushEmpty(bool, object)
0x561: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x562: Call 0x12d9

0x563: Pop(1)
0x564: IF (Stack[-1] == 0) GOTO 0x56b; Pop(1)

0x565: PushEmpty(bool, object)
0x566: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x567: Call 0x1249

0x568: Pop(1)
0x569: IF (Stack[-1] == 0) GOTO 0x56b; Pop(1)

0x56a: Stack[-1] = (bool) 1
0x56b: IF (Stack[-1] == 0) GOTO 0x571; Pop(1)

0x56c: Push((int) 4846)
0x56d: Push((int) 5319)
0x56e: Push((int) 5318)
0x56f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x570: Pop(3)
0x571: PushEmpty(bool)
0x572: Stack[-1] = (bool) 0
0x573: PushEmpty(bool, object)
0x574: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x575: Call 0x1321

0x576: Pop(1)
0x577: IF (Stack[-1] == 0) GOTO 0x57e; Pop(1)

0x578: PushEmpty(bool, object)
0x579: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x57a: Call 0x1255

0x57b: Pop(1)
0x57c: IF (Stack[-1] == 0) GOTO 0x57e; Pop(1)

0x57d: Stack[-1] = (bool) 1
0x57e: IF (Stack[-1] == 0) GOTO 0x584; Pop(1)

0x57f: Push((int) 6299)
0x580: Push((int) 6952)
0x581: Push((int) 6951)
0x582: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x583: Pop(3)
0x584: PushEmpty(bool)
0x585: Stack[-1] = (bool) 0
0x586: PushEmpty(bool, object)
0x587: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x588: Call 0x1261

0x589: Pop(1)
0x58a: IF (Stack[-1] == 0) GOTO 0x591; Pop(1)

0x58b: PushEmpty(bool, object)
0x58c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x58d: Call 0x1351

0x58e: Pop(1)
0x58f: IF (Stack[-1] == 0) GOTO 0x591; Pop(1)

0x590: Stack[-1] = (bool) 1
0x591: IF (Stack[-1] == 0) GOTO 0x597; Pop(1)

0x592: Push((int) 6314)
0x593: Push((int) 6970)
0x594: Push((int) 6969)
0x595: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x596: Pop(3)
0x597: Push((int) 4614)
0x598: Push((int) -1)
0x599: Push((int) 5044)
0x59a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x59b: Pop(3)
0x59c: GOTO 0x59f

0x59d: Return(); Pop(0)

0x59e: GOTO 0x535

0x59f: PushEmpty(bool)
0x5a0: Call 0x10a0

0x5a1: Pop(0)
0x5a2: IF (Stack[-1] == 0) GOTO 0x5ae; Pop(1)

0x5a3: @ lshWaitForAnimEnd()
0x5a4: Pop(0)
0x5a5: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5a6: IF (Stack[-1] == 0) GOTO 0x5a8; Pop(1)

0x5a7: GOTO 0x5ad

0x5a8: PushEmpty(string)
0x5a9: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x5aa: Call 0x103c

0x5ab: Pop(1)
0x5ac: GOTO 0x5a3

0x5ad: GOTO 0x5bc

0x5ae: Push("all")
0x5af: Push("idle")
0x5b0: @ PlayAnimation(Stack[-2], Stack[-1])
0x5b1: Pop(2)
0x5b2: @ WaitForAnimEnd()
0x5b3: Pop(0)
0x5b4: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5b5: IF (Stack[-1] == 0) GOTO 0x5b7; Pop(1)

0x5b6: GOTO 0x5bc

0x5b7: Push("all")
0x5b8: Push("idle")
0x5b9: @ PlayAnimation(Stack[-2], Stack[-1])
0x5ba: Pop(2)
0x5bb: GOTO 0x5b2

0x5bc: Return(); Pop(0)

0x5bd: PushEmpty()
0x5be: PushEmpty(bool)
0x5bf: Call 0x10a0

0x5c0: Pop(0)
0x5c1: Pop(1); Push((bool) Stack[-1] == 0)
0x5c2: IF (Stack[-1] == 0) GOTO 0x5c4; Pop(1)

0x5c3: Return(); Pop(0)

0x5c4: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x5c5: IF (Stack[-1] == 0) GOTO 0x5c7; Pop(1)

0x5c6: Return(); Pop(0)

0x5c7: PushEmpty(string)
0x5c8: Stack[-1] = Stack[-2]
0x5c9: Call 0x103c

0x5ca: Pop(1)
0x5cb: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x5cc: Return(); Pop(0)

0x5cd: PushEmpty()
0x5ce: Push((int) 1)
0x5cf: IF (Stack[-1] == 0) GOTO 0xa10; Pop(1)

0x5d0: PushEmpty()
0x5d1: Call 0x104e

0x5d2: Pop(0)
0x5d3: Push((int) 5094)
0x5d4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5d5: IF (Stack[-1] == 0) GOTO 0x5e5; Pop(1)

0x5d6: PushEmpty(object, object)
0x5d7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5d8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5d9: Call 0x11d1

0x5da: Pop(2)
0x5db: PushEmpty(object, object)
0x5dc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5dd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5de: Call 0x1172

0x5df: Pop(2)
0x5e0: PushEmpty(object, object)
0x5e1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5e2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5e3: Call 0x1162

0x5e4: Pop(2)
0x5e5: Push((int) 5095)
0x5e6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5e7: IF (Stack[-1] == 0) GOTO 0x5f7; Pop(1)

0x5e8: PushEmpty(object, object)
0x5e9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5ea: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5eb: Call 0x11d1

0x5ec: Pop(2)
0x5ed: PushEmpty(object, object)
0x5ee: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5ef: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5f0: Call 0x1172

0x5f1: Pop(2)
0x5f2: PushEmpty(object, object)
0x5f3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5f4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5f5: Call 0x1162

0x5f6: Pop(2)
0x5f7: Push((int) 5096)
0x5f8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5f9: IF (Stack[-1] == 0) GOTO 0x609; Pop(1)

0x5fa: PushEmpty(object, object)
0x5fb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5fc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5fd: Call 0x11d1

0x5fe: Pop(2)
0x5ff: PushEmpty(object, object)
0x600: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x601: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x602: Call 0x1172

0x603: Pop(2)
0x604: PushEmpty(object, object)
0x605: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x606: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x607: Call 0x1162

0x608: Pop(2)
0x609: Push((int) 5051)
0x60a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x60b: IF (Stack[-1] == 0) GOTO 0x611; Pop(1)

0x60c: PushEmpty(object, object)
0x60d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x60e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x60f: Call 0x11cb

0x610: Pop(2)
0x611: Push((int) 5082)
0x612: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x613: IF (Stack[-1] == 0) GOTO 0x619; Pop(1)

0x614: PushEmpty(object, object)
0x615: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x616: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x617: Call 0x11cb

0x618: Pop(2)
0x619: Push((int) 5079)
0x61a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x61b: IF (Stack[-1] == 0) GOTO 0x621; Pop(1)

0x61c: PushEmpty(object, object)
0x61d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x61e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x61f: Call 0x11cb

0x620: Pop(2)
0x621: Push((int) 5078)
0x622: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x623: IF (Stack[-1] == 0) GOTO 0x629; Pop(1)

0x624: PushEmpty(object, object)
0x625: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x626: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x627: Call 0x11cb

0x628: Pop(2)
0x629: Push((int) 5074)
0x62a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x62b: IF (Stack[-1] == 0) GOTO 0x631; Pop(1)

0x62c: PushEmpty(object, object)
0x62d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x62e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x62f: Call 0x11cb

0x630: Pop(2)
0x631: Push((int) 5075)
0x632: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x633: IF (Stack[-1] == 0) GOTO 0x639; Pop(1)

0x634: PushEmpty(object, object)
0x635: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x636: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x637: Call 0x11cb

0x638: Pop(2)
0x639: Push((int) 5111)
0x63a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x63b: IF (Stack[-1] == 0) GOTO 0x64b; Pop(1)

0x63c: PushEmpty(object, object)
0x63d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x63e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x63f: Call 0x10a2

0x640: Pop(2)
0x641: PushEmpty(object, object)
0x642: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x643: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x644: Call 0x1182

0x645: Pop(2)
0x646: PushEmpty(object, object)
0x647: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x648: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x649: Call 0x11a1

0x64a: Pop(2)
0x64b: Push((int) 5116)
0x64c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x64d: IF (Stack[-1] == 0) GOTO 0x65d; Pop(1)

0x64e: PushEmpty(object, object)
0x64f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x650: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x651: Call 0x10a2

0x652: Pop(2)
0x653: PushEmpty(object, object)
0x654: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x655: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x656: Call 0x1182

0x657: Pop(2)
0x658: PushEmpty(object, object)
0x659: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x65a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x65b: Call 0x11a1

0x65c: Pop(2)
0x65d: Push((int) 5113)
0x65e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x65f: IF (Stack[-1] == 0) GOTO 0x66f; Pop(1)

0x660: PushEmpty(object, object)
0x661: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x662: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x663: Call 0x10a2

0x664: Pop(2)
0x665: PushEmpty(object, object)
0x666: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x667: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x668: Call 0x1182

0x669: Pop(2)
0x66a: PushEmpty(object, object)
0x66b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x66c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x66d: Call 0x11a1

0x66e: Pop(2)
0x66f: Push((int) 5320)
0x670: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x671: IF (Stack[-1] == 0) GOTO 0x677; Pop(1)

0x672: PushEmpty(object, object)
0x673: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x674: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x675: Call 0x11bf

0x676: Pop(2)
0x677: Push((int) 6967)
0x678: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x679: IF (Stack[-1] == 0) GOTO 0x67f; Pop(1)

0x67a: PushEmpty(object, object)
0x67b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x67c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x67d: Call 0x10c0

0x67e: Pop(2)
0x67f: Push((int) 6968)
0x680: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x681: IF (Stack[-1] == 0) GOTO 0x687; Pop(1)

0x682: PushEmpty(object, object)
0x683: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x684: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x685: Call 0x10c0

0x686: Pop(2)
0x687: Push((int) 6977)
0x688: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x689: IF (Stack[-1] == 0) GOTO 0x68f; Pop(1)

0x68a: PushEmpty(object, object)
0x68b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x68c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x68d: Call 0x10c6

0x68e: Pop(2)
0x68f: Push((int) 5040)
0x690: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x691: IF (Stack[-1] == 0) GOTO 0x6f8; Pop(1)

0x692: PushEmpty(string)
0x693: Stack[-1] = "Neutral"
0x694: Call 0x5bd

0x695: Pop(1)
0x696: Push((int) 4610)
0x697: @@ SetMessage(Stack[-1])
0x698: Pop(1)
0x699: @@ ClearReplies()
0x69a: Pop(0)
0x69b: PushEmpty(bool, object)
0x69c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x69d: Call 0x12e5

0x69e: Pop(1)
0x69f: IF (Stack[-1] == 0) GOTO 0x6a5; Pop(1)

0x6a0: Push((int) 4612)
0x6a1: Push((int) 5058)
0x6a2: Push((int) 5042)
0x6a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6a4: Pop(3)
0x6a5: PushEmpty(bool, object)
0x6a6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6a7: Call 0x12cd

0x6a8: Pop(1)
0x6a9: IF (Stack[-1] == 0) GOTO 0x6af; Pop(1)

0x6aa: Push((int) 4611)
0x6ab: Push((int) 5056)
0x6ac: Push((int) 5041)
0x6ad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ae: Pop(3)
0x6af: PushEmpty(bool, object)
0x6b0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6b1: Call 0x1309

0x6b2: Pop(1)
0x6b3: IF (Stack[-1] == 0) GOTO 0x6b9; Pop(1)

0x6b4: Push((int) 4613)
0x6b5: Push((int) 5097)
0x6b6: Push((int) 5043)
0x6b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b8: Pop(3)
0x6b9: PushEmpty(bool)
0x6ba: Stack[-1] = (bool) 0
0x6bb: PushEmpty(bool, object)
0x6bc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6bd: Call 0x12d9

0x6be: Pop(1)
0x6bf: IF (Stack[-1] == 0) GOTO 0x6c6; Pop(1)

0x6c0: PushEmpty(bool, object)
0x6c1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6c2: Call 0x1249

0x6c3: Pop(1)
0x6c4: IF (Stack[-1] == 0) GOTO 0x6c6; Pop(1)

0x6c5: Stack[-1] = (bool) 1
0x6c6: IF (Stack[-1] == 0) GOTO 0x6cc; Pop(1)

0x6c7: Push((int) 4846)
0x6c8: Push((int) 5319)
0x6c9: Push((int) 5318)
0x6ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6cb: Pop(3)
0x6cc: PushEmpty(bool)
0x6cd: Stack[-1] = (bool) 0
0x6ce: PushEmpty(bool, object)
0x6cf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6d0: Call 0x1321

0x6d1: Pop(1)
0x6d2: IF (Stack[-1] == 0) GOTO 0x6d9; Pop(1)

0x6d3: PushEmpty(bool, object)
0x6d4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6d5: Call 0x1255

0x6d6: Pop(1)
0x6d7: IF (Stack[-1] == 0) GOTO 0x6d9; Pop(1)

0x6d8: Stack[-1] = (bool) 1
0x6d9: IF (Stack[-1] == 0) GOTO 0x6df; Pop(1)

0x6da: Push((int) 6299)
0x6db: Push((int) 6952)
0x6dc: Push((int) 6951)
0x6dd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6de: Pop(3)
0x6df: PushEmpty(bool)
0x6e0: Stack[-1] = (bool) 0
0x6e1: PushEmpty(bool, object)
0x6e2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6e3: Call 0x1261

0x6e4: Pop(1)
0x6e5: IF (Stack[-1] == 0) GOTO 0x6ec; Pop(1)

0x6e6: PushEmpty(bool, object)
0x6e7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6e8: Call 0x1351

0x6e9: Pop(1)
0x6ea: IF (Stack[-1] == 0) GOTO 0x6ec; Pop(1)

0x6eb: Stack[-1] = (bool) 1
0x6ec: IF (Stack[-1] == 0) GOTO 0x6f2; Pop(1)

0x6ed: Push((int) 6314)
0x6ee: Push((int) 6970)
0x6ef: Push((int) 6969)
0x6f0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f1: Pop(3)
0x6f2: Push((int) 4614)
0x6f3: Push((int) -1)
0x6f4: Push((int) 5044)
0x6f5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f6: Pop(3)
0x6f7: Return(); Pop(0)

0x6f8: Push((int) 6970)
0x6f9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6fa: IF (Stack[-1] == 0) GOTO 0x70a; Pop(1)

0x6fb: PushEmpty(string)
0x6fc: Stack[-1] = "Neutral"
0x6fd: Call 0x5bd

0x6fe: Pop(1)
0x6ff: Push((int) 6315)
0x700: @@ SetMessage(Stack[-1])
0x701: Pop(1)
0x702: @@ ClearReplies()
0x703: Pop(0)
0x704: Push((int) 6316)
0x705: Push((int) 6972)
0x706: Push((int) 6971)
0x707: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x708: Pop(3)
0x709: Return(); Pop(0)

0x70a: Push((int) 6972)
0x70b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x70c: IF (Stack[-1] == 0) GOTO 0x721; Pop(1)

0x70d: PushEmpty(object, object)
0x70e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x70f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x710: Call 0x1237

0x711: Pop(2)
0x712: PushEmpty(string)
0x713: Stack[-1] = "Neutral"
0x714: Call 0x5bd

0x715: Pop(1)
0x716: Push((int) 6317)
0x717: @@ SetMessage(Stack[-1])
0x718: Pop(1)
0x719: @@ ClearReplies()
0x71a: Pop(0)
0x71b: Push((int) 6318)
0x71c: Push((int) 6974)
0x71d: Push((int) 6973)
0x71e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x71f: Pop(3)
0x720: Return(); Pop(0)

0x721: Push((int) 6974)
0x722: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x723: IF (Stack[-1] == 0) GOTO 0x733; Pop(1)

0x724: PushEmpty(string)
0x725: Stack[-1] = "Neutral"
0x726: Call 0x5bd

0x727: Pop(1)
0x728: Push((int) 6319)
0x729: @@ SetMessage(Stack[-1])
0x72a: Pop(1)
0x72b: @@ ClearReplies()
0x72c: Pop(0)
0x72d: Push((int) 6320)
0x72e: Push((int) 6976)
0x72f: Push((int) 6975)
0x730: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x731: Pop(3)
0x732: Return(); Pop(0)

0x733: Push((int) 6976)
0x734: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x735: IF (Stack[-1] == 0) GOTO 0x745; Pop(1)

0x736: PushEmpty(string)
0x737: Stack[-1] = "Neutral"
0x738: Call 0x5bd

0x739: Pop(1)
0x73a: Push((int) 6321)
0x73b: @@ SetMessage(Stack[-1])
0x73c: Pop(1)
0x73d: @@ ClearReplies()
0x73e: Pop(0)
0x73f: Push((int) 6322)
0x740: Push((int) 5040)
0x741: Push((int) 6977)
0x742: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x743: Pop(3)
0x744: Return(); Pop(0)

0x745: Push((int) 6952)
0x746: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x747: IF (Stack[-1] == 0) GOTO 0x761; Pop(1)

0x748: PushEmpty(string)
0x749: Stack[-1] = "Neutral"
0x74a: Call 0x5bd

0x74b: Pop(1)
0x74c: Push((int) 6300)
0x74d: @@ SetMessage(Stack[-1])
0x74e: Pop(1)
0x74f: @@ ClearReplies()
0x750: Pop(0)
0x751: Push((int) 6301)
0x752: Push((int) 6956)
0x753: Push((int) 6953)
0x754: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x755: Pop(3)
0x756: Push((int) 6302)
0x757: Push((int) 6956)
0x758: Push((int) 6954)
0x759: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x75a: Pop(3)
0x75b: Push((int) 6303)
0x75c: Push((int) 6956)
0x75d: Push((int) 6955)
0x75e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x75f: Pop(3)
0x760: Return(); Pop(0)

0x761: Push((int) 6956)
0x762: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x763: IF (Stack[-1] == 0) GOTO 0x778; Pop(1)

0x764: PushEmpty(string)
0x765: Stack[-1] = "Neutral"
0x766: Call 0x5bd

0x767: Pop(1)
0x768: Push((int) 6304)
0x769: @@ SetMessage(Stack[-1])
0x76a: Pop(1)
0x76b: @@ ClearReplies()
0x76c: Pop(0)
0x76d: Push((int) 6305)
0x76e: Push((int) 6963)
0x76f: Push((int) 6959)
0x770: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x771: Pop(3)
0x772: Push((int) 6306)
0x773: Push((int) 6961)
0x774: Push((int) 6960)
0x775: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x776: Pop(3)
0x777: Return(); Pop(0)

0x778: Push((int) 6961)
0x779: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x77a: IF (Stack[-1] == 0) GOTO 0x78a; Pop(1)

0x77b: PushEmpty(string)
0x77c: Stack[-1] = "Neutral"
0x77d: Call 0x5bd

0x77e: Pop(1)
0x77f: Push((int) 6307)
0x780: @@ SetMessage(Stack[-1])
0x781: Pop(1)
0x782: @@ ClearReplies()
0x783: Pop(0)
0x784: Push((int) 6308)
0x785: Push((int) 6963)
0x786: Push((int) 6962)
0x787: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x788: Pop(3)
0x789: Return(); Pop(0)

0x78a: Push((int) 6963)
0x78b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x78c: IF (Stack[-1] == 0) GOTO 0x79c; Pop(1)

0x78d: PushEmpty(string)
0x78e: Stack[-1] = "Neutral"
0x78f: Call 0x5bd

0x790: Pop(1)
0x791: Push((int) 6309)
0x792: @@ SetMessage(Stack[-1])
0x793: Pop(1)
0x794: @@ ClearReplies()
0x795: Pop(0)
0x796: Push((int) 6310)
0x797: Push((int) 6965)
0x798: Push((int) 6964)
0x799: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x79a: Pop(3)
0x79b: Return(); Pop(0)

0x79c: Push((int) 6965)
0x79d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x79e: IF (Stack[-1] == 0) GOTO 0x7b3; Pop(1)

0x79f: PushEmpty(string)
0x7a0: Stack[-1] = "Neutral"
0x7a1: Call 0x5bd

0x7a2: Pop(1)
0x7a3: Push((int) 6311)
0x7a4: @@ SetMessage(Stack[-1])
0x7a5: Pop(1)
0x7a6: @@ ClearReplies()
0x7a7: Pop(0)
0x7a8: Push((int) 6312)
0x7a9: Push((int) 5040)
0x7aa: Push((int) 6967)
0x7ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ac: Pop(3)
0x7ad: Push((int) 6313)
0x7ae: Push((int) 5040)
0x7af: Push((int) 6968)
0x7b0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b1: Pop(3)
0x7b2: Return(); Pop(0)

0x7b3: Push((int) 5319)
0x7b4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7b5: IF (Stack[-1] == 0) GOTO 0x7c5; Pop(1)

0x7b6: PushEmpty(string)
0x7b7: Stack[-1] = "Neutral"
0x7b8: Call 0x5bd

0x7b9: Pop(1)
0x7ba: Push((int) 4847)
0x7bb: @@ SetMessage(Stack[-1])
0x7bc: Pop(1)
0x7bd: @@ ClearReplies()
0x7be: Pop(0)
0x7bf: Push((int) 6295)
0x7c0: Push((int) 6948)
0x7c1: Push((int) 6947)
0x7c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c3: Pop(3)
0x7c4: Return(); Pop(0)

0x7c5: Push((int) 6948)
0x7c6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7c7: IF (Stack[-1] == 0) GOTO 0x7dc; Pop(1)

0x7c8: PushEmpty(string)
0x7c9: Stack[-1] = "Neutral"
0x7ca: Call 0x5bd

0x7cb: Pop(1)
0x7cc: Push((int) 6296)
0x7cd: @@ SetMessage(Stack[-1])
0x7ce: Pop(1)
0x7cf: @@ ClearReplies()
0x7d0: Pop(0)
0x7d1: Push((int) 6297)
0x7d2: Push((int) 6950)
0x7d3: Push((int) 6949)
0x7d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d5: Pop(3)
0x7d6: Push((int) 6323)
0x7d7: Push((int) 6950)
0x7d8: Push((int) 6978)
0x7d9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7da: Pop(3)
0x7db: Return(); Pop(0)

0x7dc: Push((int) 6950)
0x7dd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7de: IF (Stack[-1] == 0) GOTO 0x7ee; Pop(1)

0x7df: PushEmpty(string)
0x7e0: Stack[-1] = "Neutral"
0x7e1: Call 0x5bd

0x7e2: Pop(1)
0x7e3: Push((int) 6298)
0x7e4: @@ SetMessage(Stack[-1])
0x7e5: Pop(1)
0x7e6: @@ ClearReplies()
0x7e7: Pop(0)
0x7e8: Push((int) 4848)
0x7e9: Push((int) 5040)
0x7ea: Push((int) 5320)
0x7eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ec: Pop(3)
0x7ed: Return(); Pop(0)

0x7ee: Push((int) 5097)
0x7ef: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7f0: IF (Stack[-1] == 0) GOTO 0x805; Pop(1)

0x7f1: PushEmpty(string)
0x7f2: Stack[-1] = "Neutral"
0x7f3: Call 0x5bd

0x7f4: Pop(1)
0x7f5: Push((int) 4661)
0x7f6: @@ SetMessage(Stack[-1])
0x7f7: Pop(1)
0x7f8: @@ ClearReplies()
0x7f9: Pop(0)
0x7fa: Push((int) 4662)
0x7fb: Push((int) 5100)
0x7fc: Push((int) 5098)
0x7fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7fe: Pop(3)
0x7ff: Push((int) 4663)
0x800: Push((int) 5100)
0x801: Push((int) 5099)
0x802: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x803: Pop(3)
0x804: Return(); Pop(0)

0x805: Push((int) 5100)
0x806: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x807: IF (Stack[-1] == 0) GOTO 0x81c; Pop(1)

0x808: PushEmpty(string)
0x809: Stack[-1] = "Neutral"
0x80a: Call 0x5bd

0x80b: Pop(1)
0x80c: Push((int) 4664)
0x80d: @@ SetMessage(Stack[-1])
0x80e: Pop(1)
0x80f: @@ ClearReplies()
0x810: Pop(0)
0x811: Push((int) 4665)
0x812: Push((int) 5103)
0x813: Push((int) 5102)
0x814: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x815: Pop(3)
0x816: Push((int) 4667)
0x817: Push((int) 5105)
0x818: Push((int) 5104)
0x819: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x81a: Pop(3)
0x81b: Return(); Pop(0)

0x81c: Push((int) 5105)
0x81d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x81e: IF (Stack[-1] == 0) GOTO 0x82e; Pop(1)

0x81f: PushEmpty(string)
0x820: Stack[-1] = "Neutral"
0x821: Call 0x5bd

0x822: Pop(1)
0x823: Push((int) 4668)
0x824: @@ SetMessage(Stack[-1])
0x825: Pop(1)
0x826: @@ ClearReplies()
0x827: Pop(0)
0x828: Push((int) 4669)
0x829: Push((int) 5103)
0x82a: Push((int) 5106)
0x82b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82c: Pop(3)
0x82d: Return(); Pop(0)

0x82e: Push((int) 5103)
0x82f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x830: IF (Stack[-1] == 0) GOTO 0x845; Pop(1)

0x831: PushEmpty(string)
0x832: Stack[-1] = "Neutral"
0x833: Call 0x5bd

0x834: Pop(1)
0x835: Push((int) 4666)
0x836: @@ SetMessage(Stack[-1])
0x837: Pop(1)
0x838: @@ ClearReplies()
0x839: Pop(0)
0x83a: Push((int) 4670)
0x83b: Push((int) 5108)
0x83c: Push((int) 5107)
0x83d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x83e: Pop(3)
0x83f: Push((int) 4675)
0x840: Push((int) 5040)
0x841: Push((int) 5113)
0x842: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x843: Pop(3)
0x844: Return(); Pop(0)

0x845: Push((int) 5108)
0x846: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x847: IF (Stack[-1] == 0) GOTO 0x866; Pop(1)

0x848: PushEmpty(object, object)
0x849: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x84a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x84b: Call 0x10a8

0x84c: Pop(2)
0x84d: PushEmpty(object, object)
0x84e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x84f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x850: Call 0x112e

0x851: Pop(2)
0x852: PushEmpty(string)
0x853: Stack[-1] = "Neutral"
0x854: Call 0x5bd

0x855: Pop(1)
0x856: Push((int) 4671)
0x857: @@ SetMessage(Stack[-1])
0x858: Pop(1)
0x859: @@ ClearReplies()
0x85a: Pop(0)
0x85b: Push((int) 4672)
0x85c: Push((int) 5110)
0x85d: Push((int) 5109)
0x85e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x85f: Pop(3)
0x860: Push((int) 4676)
0x861: Push((int) 5110)
0x862: Push((int) 5114)
0x863: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x864: Pop(3)
0x865: Return(); Pop(0)

0x866: Push((int) 5110)
0x867: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x868: IF (Stack[-1] == 0) GOTO 0x882; Pop(1)

0x869: PushEmpty(object, object)
0x86a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x86b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x86c: Call 0x10ae

0x86d: Pop(2)
0x86e: PushEmpty(string)
0x86f: Stack[-1] = "Neutral"
0x870: Call 0x5bd

0x871: Pop(1)
0x872: Push((int) 4673)
0x873: @@ SetMessage(Stack[-1])
0x874: Pop(1)
0x875: @@ ClearReplies()
0x876: Pop(0)
0x877: Push((int) 4674)
0x878: Push((int) 5040)
0x879: Push((int) 5111)
0x87a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x87b: Pop(3)
0x87c: Push((int) 4677)
0x87d: Push((int) 5040)
0x87e: Push((int) 5116)
0x87f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x880: Pop(3)
0x881: Return(); Pop(0)

0x882: Push((int) 5056)
0x883: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x884: IF (Stack[-1] == 0) GOTO 0x894; Pop(1)

0x885: PushEmpty(string)
0x886: Stack[-1] = "Neutral"
0x887: Call 0x5bd

0x888: Pop(1)
0x889: Push((int) 4624)
0x88a: @@ SetMessage(Stack[-1])
0x88b: Pop(1)
0x88c: @@ ClearReplies()
0x88d: Pop(0)
0x88e: Push((int) 7659)
0x88f: Push((int) 8453)
0x890: Push((int) 8452)
0x891: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x892: Pop(3)
0x893: Return(); Pop(0)

0x894: Push((int) 8453)
0x895: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x896: IF (Stack[-1] == 0) GOTO 0x8ab; Pop(1)

0x897: PushEmpty(string)
0x898: Stack[-1] = "Neutral"
0x899: Call 0x5bd

0x89a: Pop(1)
0x89b: Push((int) 7660)
0x89c: @@ SetMessage(Stack[-1])
0x89d: Pop(1)
0x89e: @@ ClearReplies()
0x89f: Pop(0)
0x8a0: Push((int) 7661)
0x8a1: Push((int) 8458)
0x8a2: Push((int) 8454)
0x8a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8a4: Pop(3)
0x8a5: Push((int) 7662)
0x8a6: Push((int) 8458)
0x8a7: Push((int) 8455)
0x8a8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8a9: Pop(3)
0x8aa: Return(); Pop(0)

0x8ab: Push((int) 8458)
0x8ac: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8ad: IF (Stack[-1] == 0) GOTO 0x8bd; Pop(1)

0x8ae: PushEmpty(string)
0x8af: Stack[-1] = "Neutral"
0x8b0: Call 0x5bd

0x8b1: Pop(1)
0x8b2: Push((int) 7664)
0x8b3: @@ SetMessage(Stack[-1])
0x8b4: Pop(1)
0x8b5: @@ ClearReplies()
0x8b6: Pop(0)
0x8b7: Push((int) 7665)
0x8b8: Push((int) 8456)
0x8b9: Push((int) 8459)
0x8ba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8bb: Pop(3)
0x8bc: Return(); Pop(0)

0x8bd: Push((int) 8456)
0x8be: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8bf: IF (Stack[-1] == 0) GOTO 0x8d4; Pop(1)

0x8c0: PushEmpty(string)
0x8c1: Stack[-1] = "Neutral"
0x8c2: Call 0x5bd

0x8c3: Pop(1)
0x8c4: Push((int) 7663)
0x8c5: @@ SetMessage(Stack[-1])
0x8c6: Pop(1)
0x8c7: @@ ClearReplies()
0x8c8: Pop(0)
0x8c9: Push((int) 4625)
0x8ca: Push((int) 5045)
0x8cb: Push((int) 5057)
0x8cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8cd: Pop(3)
0x8ce: Push((int) 4635)
0x8cf: Push((int) 5069)
0x8d0: Push((int) 5068)
0x8d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d2: Pop(3)
0x8d3: Return(); Pop(0)

0x8d4: Push((int) 5069)
0x8d5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8d6: IF (Stack[-1] == 0) GOTO 0x8eb; Pop(1)

0x8d7: PushEmpty(string)
0x8d8: Stack[-1] = "Neutral"
0x8d9: Call 0x5bd

0x8da: Pop(1)
0x8db: Push((int) 4636)
0x8dc: @@ SetMessage(Stack[-1])
0x8dd: Pop(1)
0x8de: @@ ClearReplies()
0x8df: Pop(0)
0x8e0: Push((int) 4637)
0x8e1: Push((int) 5072)
0x8e2: Push((int) 5070)
0x8e3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8e4: Pop(3)
0x8e5: Push((int) 4638)
0x8e6: Push((int) 5072)
0x8e7: Push((int) 5071)
0x8e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8e9: Pop(3)
0x8ea: Return(); Pop(0)

0x8eb: Push((int) 5072)
0x8ec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8ed: IF (Stack[-1] == 0) GOTO 0x907; Pop(1)

0x8ee: PushEmpty(string)
0x8ef: Stack[-1] = "Neutral"
0x8f0: Call 0x5bd

0x8f1: Pop(1)
0x8f2: Push((int) 4639)
0x8f3: @@ SetMessage(Stack[-1])
0x8f4: Pop(1)
0x8f5: @@ ClearReplies()
0x8f6: Pop(0)
0x8f7: Push((int) 4642)
0x8f8: Push((int) 5077)
0x8f9: Push((int) 5076)
0x8fa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8fb: Pop(3)
0x8fc: Push((int) 4640)
0x8fd: Push((int) 5040)
0x8fe: Push((int) 5074)
0x8ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x900: Pop(3)
0x901: Push((int) 4641)
0x902: Push((int) 5040)
0x903: Push((int) 5075)
0x904: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x905: Pop(3)
0x906: Return(); Pop(0)

0x907: Push((int) 5077)
0x908: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x909: IF (Stack[-1] == 0) GOTO 0x928; Pop(1)

0x90a: PushEmpty(object, object)
0x90b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x90c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x90d: Call 0x1231

0x90e: Pop(2)
0x90f: PushEmpty(string)
0x910: Stack[-1] = "Neutral"
0x911: Call 0x5bd

0x912: Pop(1)
0x913: Push((int) 4643)
0x914: @@ SetMessage(Stack[-1])
0x915: Pop(1)
0x916: @@ ClearReplies()
0x917: Pop(0)
0x918: Push((int) 4646)
0x919: Push((int) 5081)
0x91a: Push((int) 5080)
0x91b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x91c: Pop(3)
0x91d: Push((int) 4645)
0x91e: Push((int) 5040)
0x91f: Push((int) 5079)
0x920: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x921: Pop(3)
0x922: Push((int) 4644)
0x923: Push((int) 5040)
0x924: Push((int) 5078)
0x925: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x926: Pop(3)
0x927: Return(); Pop(0)

0x928: Push((int) 5081)
0x929: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x92a: IF (Stack[-1] == 0) GOTO 0x93a; Pop(1)

0x92b: PushEmpty(string)
0x92c: Stack[-1] = "Neutral"
0x92d: Call 0x5bd

0x92e: Pop(1)
0x92f: Push((int) 4647)
0x930: @@ SetMessage(Stack[-1])
0x931: Pop(1)
0x932: @@ ClearReplies()
0x933: Pop(0)
0x934: Push((int) 4648)
0x935: Push((int) 5040)
0x936: Push((int) 5082)
0x937: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x938: Pop(3)
0x939: Return(); Pop(0)

0x93a: Push((int) 5045)
0x93b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x93c: IF (Stack[-1] == 0) GOTO 0x951; Pop(1)

0x93d: PushEmpty(string)
0x93e: Stack[-1] = "Neutral"
0x93f: Call 0x5bd

0x940: Pop(1)
0x941: Push((int) 4615)
0x942: @@ SetMessage(Stack[-1])
0x943: Pop(1)
0x944: @@ ClearReplies()
0x945: Pop(0)
0x946: Push((int) 4616)
0x947: Push((int) 5047)
0x948: Push((int) 5046)
0x949: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x94a: Pop(3)
0x94b: Push((int) 4623)
0x94c: Push((int) 5047)
0x94d: Push((int) 5054)
0x94e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x94f: Pop(3)
0x950: Return(); Pop(0)

0x951: Push((int) 5047)
0x952: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x953: IF (Stack[-1] == 0) GOTO 0x968; Pop(1)

0x954: PushEmpty(string)
0x955: Stack[-1] = "Neutral"
0x956: Call 0x5bd

0x957: Pop(1)
0x958: Push((int) 4617)
0x959: @@ SetMessage(Stack[-1])
0x95a: Pop(1)
0x95b: @@ ClearReplies()
0x95c: Pop(0)
0x95d: Push((int) 4618)
0x95e: Push((int) 5049)
0x95f: Push((int) 5048)
0x960: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x961: Pop(3)
0x962: Push((int) 4622)
0x963: Push((int) 5065)
0x964: Push((int) 5052)
0x965: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x966: Pop(3)
0x967: Return(); Pop(0)

0x968: Push((int) 5065)
0x969: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x96a: IF (Stack[-1] == 0) GOTO 0x97a; Pop(1)

0x96b: PushEmpty(string)
0x96c: Stack[-1] = "Neutral"
0x96d: Call 0x5bd

0x96e: Pop(1)
0x96f: Push((int) 4633)
0x970: @@ SetMessage(Stack[-1])
0x971: Pop(1)
0x972: @@ ClearReplies()
0x973: Pop(0)
0x974: Push((int) 4634)
0x975: Push((int) 5049)
0x976: Push((int) 5066)
0x977: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x978: Pop(3)
0x979: Return(); Pop(0)

0x97a: Push((int) 5049)
0x97b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x97c: IF (Stack[-1] == 0) GOTO 0x98c; Pop(1)

0x97d: PushEmpty(string)
0x97e: Stack[-1] = "Neutral"
0x97f: Call 0x5bd

0x980: Pop(1)
0x981: Push((int) 4619)
0x982: @@ SetMessage(Stack[-1])
0x983: Pop(1)
0x984: @@ ClearReplies()
0x985: Pop(0)
0x986: Push((int) 4621)
0x987: Push((int) 5040)
0x988: Push((int) 5051)
0x989: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x98a: Pop(3)
0x98b: Return(); Pop(0)

0x98c: Push((int) 5058)
0x98d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x98e: IF (Stack[-1] == 0) GOTO 0x9a8; Pop(1)

0x98f: PushEmpty(object, object)
0x990: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x991: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x992: Call 0x11ef

0x993: Pop(2)
0x994: PushEmpty(string)
0x995: Stack[-1] = "Neutral"
0x996: Call 0x5bd

0x997: Pop(1)
0x998: Push((int) 4626)
0x999: @@ SetMessage(Stack[-1])
0x99a: Pop(1)
0x99b: @@ ClearReplies()
0x99c: Pop(0)
0x99d: Push((int) 4627)
0x99e: Push((int) 5086)
0x99f: Push((int) 5059)
0x9a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9a1: Pop(3)
0x9a2: Push((int) 4628)
0x9a3: Push((int) 5061)
0x9a4: Push((int) 5060)
0x9a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9a6: Pop(3)
0x9a7: Return(); Pop(0)

0x9a8: Push((int) 5061)
0x9a9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9aa: IF (Stack[-1] == 0) GOTO 0x9ba; Pop(1)

0x9ab: PushEmpty(string)
0x9ac: Stack[-1] = "Neutral"
0x9ad: Call 0x5bd

0x9ae: Pop(1)
0x9af: Push((int) 4629)
0x9b0: @@ SetMessage(Stack[-1])
0x9b1: Pop(1)
0x9b2: @@ ClearReplies()
0x9b3: Pop(0)
0x9b4: Push((int) 4630)
0x9b5: Push((int) 5086)
0x9b6: Push((int) 5062)
0x9b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9b8: Pop(3)
0x9b9: Return(); Pop(0)

0x9ba: Push((int) 5086)
0x9bb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9bc: IF (Stack[-1] == 0) GOTO 0x9d6; Pop(1)

0x9bd: PushEmpty(object, object)
0x9be: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9bf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9c0: Call 0x10b4

0x9c1: Pop(2)
0x9c2: PushEmpty(string)
0x9c3: Stack[-1] = "Neutral"
0x9c4: Call 0x5bd

0x9c5: Pop(1)
0x9c6: Push((int) 4652)
0x9c7: @@ SetMessage(Stack[-1])
0x9c8: Pop(1)
0x9c9: @@ ClearReplies()
0x9ca: Pop(0)
0x9cb: Push((int) 4653)
0x9cc: Push((int) 5089)
0x9cd: Push((int) 5088)
0x9ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9cf: Pop(3)
0x9d0: Push((int) 4655)
0x9d1: Push((int) 5089)
0x9d2: Push((int) 5090)
0x9d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9d4: Pop(3)
0x9d5: Return(); Pop(0)

0x9d6: Push((int) 5089)
0x9d7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9d8: IF (Stack[-1] == 0) GOTO 0x9ed; Pop(1)

0x9d9: PushEmpty(string)
0x9da: Stack[-1] = "Neutral"
0x9db: Call 0x5bd

0x9dc: Pop(1)
0x9dd: Push((int) 4654)
0x9de: @@ SetMessage(Stack[-1])
0x9df: Pop(1)
0x9e0: @@ ClearReplies()
0x9e1: Pop(0)
0x9e2: Push((int) 4656)
0x9e3: Push((int) 5093)
0x9e4: Push((int) 5092)
0x9e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9e6: Pop(3)
0x9e7: Push((int) 4660)
0x9e8: Push((int) -1)
0x9e9: Push((int) 5096)
0x9ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9eb: Pop(3)
0x9ec: Return(); Pop(0)

0x9ed: Push((int) 5093)
0x9ee: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9ef: IF (Stack[-1] == 0) GOTO 0xa04; Pop(1)

0x9f0: PushEmpty(string)
0x9f1: Stack[-1] = "Neutral"
0x9f2: Call 0x5bd

0x9f3: Pop(1)
0x9f4: Push((int) 4657)
0x9f5: @@ SetMessage(Stack[-1])
0x9f6: Pop(1)
0x9f7: @@ ClearReplies()
0x9f8: Pop(0)
0x9f9: Push((int) 4658)
0x9fa: Push((int) -1)
0x9fb: Push((int) 5094)
0x9fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9fd: Pop(3)
0x9fe: Push((int) 4659)
0x9ff: Push((int) -1)
0xa00: Push((int) 5095)
0xa01: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa02: Pop(3)
0xa03: Return(); Pop(0)

0xa04: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xa05: PushEmpty(bool)
0xa06: Call 0x10a0

0xa07: Pop(0)
0xa08: IF (Stack[-1] == 0) GOTO 0xa0c; Pop(1)

0xa09: @ lshStopAnimation()
0xa0a: Pop(0)
0xa0b: GOTO 0xa0e

0xa0c: @ StopAnimation()
0xa0d: Pop(0)
0xa0e: Return(); Pop(0)

0xa0f: GOTO 0x5ce

0xa10: Return(); Pop(0)

0xa11: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xa12: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xa13: PushEmpty(bool, object)
0xa14: Stack[-1] = Stack[-11]
0xa15: Call 0x1000

0xa16: Pop(1)
0xa17: Pop(1); Push((bool) Stack[-1] == 0)
0xa18: IF (Stack[-1] == 0) GOTO 0xa1b; Pop(1)

0xa19: Stack[-10] = (int) -2
0xa1a: Return(); Pop(8)

0xa1b: @ CreateDialog(Stack[-4])
0xa1c: Pop(0)
0xa1d: PushEmpty(int)
0xa1e: Call 0x109c

0xa1f: Pop(0)
0xa20: @@ SetNPCName(Stack[-1])
0xa21: Pop(1)
0xa22: PushEmpty(string)
0xa23: Call 0x109e

0xa24: Pop(0)
0xa25: @@ SetPhoto(Stack[-1])
0xa26: Pop(1)
0xa27: PushEmpty(int)
0xa28: Call 0x13b9

0xa29: Pop(0)
0xa2a: @@ SetPlayerName(Stack[-1])
0xa2b: Pop(1)
0xa2c: Stack[-2] = (int) -1
0xa2d: @ IsOverrideActive(Stack[-3])
0xa2e: Pop(0)
0xa2f: Push(Stack[-3])
0xa30: IF (Stack[-1] == 0) GOTO 0xa33; Pop(1)

0xa31: Stack[-10] = (int) -2
0xa32: Return(); Pop(8)

0xa33: @ DoDialog(Stack[-4])
0xa34: Pop(0)
0xa35: PushEmpty(object, object)
0xa36: Stack[-2] = Stack[-11]
0xa37: Stack[-1] = Stack[-6]
0xa38: Push(-2, 4); TaskCall(9)
0xa39: Call 0xa50

0xa3a: Pop(-2, 4); TaskReturn
0xa3b: Pop(2)
0xa3c: @@ IsDialogEnd(Stack[-1])
0xa3d: Pop(0)
0xa3e: Pop(0); Push((bool) Stack[-1] == 0)
0xa3f: IF (Stack[-1] == 0) GOTO 0xa45; Pop(1)

0xa40: @ sync()
0xa41: Pop(0)
0xa42: @@ IsDialogEnd(Stack[-1])
0xa43: Pop(0)
0xa44: GOTO 0xa3e

0xa45: PushEmpty(object)
0xa46: Stack[-1] = Stack[-10]
0xa47: Call 0x1038

0xa48: Pop(1)
0xa49: @ StopDialog(Stack[-4])
0xa4a: Pop(0)
0xa4b: @@ GetReturnValue(Stack[-2])
0xa4c: Pop(0)
0xa4d: Stack[-10] = Stack[-2]
0xa4e: Return(); Pop(8)

0xa4f: Stack[-4] = 0
0xa50: PushEmpty()
0xa51: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xa52: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xa53: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xa54: Push((int) 1)
0xa55: IF (Stack[-1] == 0) GOTO 0xac3; Pop(1)

0xa56: PushEmpty(bool, object)
0xa57: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa58: Call 0x1279

0xa59: Pop(1)
0xa5a: IF (Stack[-1] == 0) GOTO 0xa6f; Pop(1)

0xa5b: PushEmpty(string)
0xa5c: Stack[-1] = "Neutral"
0xa5d: Call 0xae1

0xa5e: Pop(1)
0xa5f: Push((int) 6853)
0xa60: @@ SetMessage(Stack[-1])
0xa61: Pop(1)
0xa62: @@ ClearReplies()
0xa63: Pop(0)
0xa64: Push((int) 6854)
0xa65: Push((int) 7890)
0xa66: Push((int) 7560)
0xa67: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa68: Pop(3)
0xa69: Push((int) 7262)
0xa6a: Push((int) 7890)
0xa6b: Push((int) 8004)
0xa6c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa6d: Pop(3)
0xa6e: GOTO 0xac3

0xa6f: PushEmpty(string)
0xa70: Stack[-1] = "Neutral"
0xa71: Call 0xae1

0xa72: Pop(1)
0xa73: Push((int) 6855)
0xa74: @@ SetMessage(Stack[-1])
0xa75: Pop(1)
0xa76: @@ ClearReplies()
0xa77: Pop(0)
0xa78: PushEmpty(bool)
0xa79: Stack[-1] = (bool) 0
0xa7a: PushEmpty(bool, object)
0xa7b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa7c: Call 0x1285

0xa7d: Pop(1)
0xa7e: IF (Stack[-1] == 0) GOTO 0xa85; Pop(1)

0xa7f: PushEmpty(bool, object)
0xa80: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa81: Call 0x12b5

0xa82: Pop(1)
0xa83: IF (Stack[-1] == 0) GOTO 0xa85; Pop(1)

0xa84: Stack[-1] = (bool) 1
0xa85: IF (Stack[-1] == 0) GOTO 0xa8b; Pop(1)

0xa86: Push((int) 6856)
0xa87: Push((int) 7563)
0xa88: Push((int) 7562)
0xa89: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa8a: Pop(3)
0xa8b: PushEmpty(bool)
0xa8c: Stack[-1] = (bool) 0
0xa8d: PushEmpty(bool, object)
0xa8e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa8f: Call 0x1291

0xa90: Pop(1)
0xa91: IF (Stack[-1] == 0) GOTO 0xa98; Pop(1)

0xa92: PushEmpty(bool, object)
0xa93: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa94: Call 0x12c1

0xa95: Pop(1)
0xa96: IF (Stack[-1] == 0) GOTO 0xa98; Pop(1)

0xa97: Stack[-1] = (bool) 1
0xa98: IF (Stack[-1] == 0) GOTO 0xa9e; Pop(1)

0xa99: Push((int) 6859)
0xa9a: Push((int) 7566)
0xa9b: Push((int) 7565)
0xa9c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa9d: Pop(3)
0xa9e: PushEmpty(bool)
0xa9f: Stack[-1] = (bool) 0
0xaa0: PushEmpty(bool, object)
0xaa1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xaa2: Call 0x129d

0xaa3: Pop(1)
0xaa4: IF (Stack[-1] == 0) GOTO 0xaab; Pop(1)

0xaa5: PushEmpty(bool, object)
0xaa6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xaa7: Call 0x12a9

0xaa8: Pop(1)
0xaa9: IF (Stack[-1] == 0) GOTO 0xaab; Pop(1)

0xaaa: Stack[-1] = (bool) 1
0xaab: IF (Stack[-1] == 0) GOTO 0xab1; Pop(1)

0xaac: Push((int) 6861)
0xaad: Push((int) 7568)
0xaae: Push((int) 7567)
0xaaf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xab0: Pop(3)
0xab1: PushEmpty(bool, object)
0xab2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xab3: Call 0x12f1

0xab4: Pop(1)
0xab5: IF (Stack[-1] == 0) GOTO 0xabb; Pop(1)

0xab6: Push((int) 11392)
0xab7: Push((int) 12590)
0xab8: Push((int) 12589)
0xab9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaba: Pop(3)
0xabb: Push((int) 7528)
0xabc: Push((int) -1)
0xabd: Push((int) 8310)
0xabe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xabf: Pop(3)
0xac0: GOTO 0xac3

0xac1: Return(); Pop(0)

0xac2: GOTO 0xa54

0xac3: PushEmpty(bool)
0xac4: Call 0x10a0

0xac5: Pop(0)
0xac6: IF (Stack[-1] == 0) GOTO 0xad2; Pop(1)

0xac7: @ lshWaitForAnimEnd()
0xac8: Pop(0)
0xac9: Push( Stack[3 + Tasks[-1].StackPointer] )
0xaca: IF (Stack[-1] == 0) GOTO 0xacc; Pop(1)

0xacb: GOTO 0xad1

0xacc: PushEmpty(string)
0xacd: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xace: Call 0x103c

0xacf: Pop(1)
0xad0: GOTO 0xac7

0xad1: GOTO 0xae0

0xad2: Push("all")
0xad3: Push("idle")
0xad4: @ PlayAnimation(Stack[-2], Stack[-1])
0xad5: Pop(2)
0xad6: @ WaitForAnimEnd()
0xad7: Pop(0)
0xad8: Push( Stack[3 + Tasks[-1].StackPointer] )
0xad9: IF (Stack[-1] == 0) GOTO 0xadb; Pop(1)

0xada: GOTO 0xae0

0xadb: Push("all")
0xadc: Push("idle")
0xadd: @ PlayAnimation(Stack[-2], Stack[-1])
0xade: Pop(2)
0xadf: GOTO 0xad6

0xae0: Return(); Pop(0)

0xae1: PushEmpty()
0xae2: PushEmpty(bool)
0xae3: Call 0x10a0

0xae4: Pop(0)
0xae5: Pop(1); Push((bool) Stack[-1] == 0)
0xae6: IF (Stack[-1] == 0) GOTO 0xae8; Pop(1)

0xae7: Return(); Pop(0)

0xae8: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xae9: IF (Stack[-1] == 0) GOTO 0xaeb; Pop(1)

0xaea: Return(); Pop(0)

0xaeb: PushEmpty(string)
0xaec: Stack[-1] = Stack[-2]
0xaed: Call 0x103c

0xaee: Pop(1)
0xaef: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xaf0: Return(); Pop(0)

0xaf1: PushEmpty()
0xaf2: Push((int) 1)
0xaf3: IF (Stack[-1] == 0) GOTO 0xd48; Pop(1)

0xaf4: PushEmpty()
0xaf5: Call 0x104e

0xaf6: Pop(0)
0xaf7: Push((int) 8026)
0xaf8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xaf9: IF (Stack[-1] == 0) GOTO 0xb09; Pop(1)

0xafa: PushEmpty(object, object)
0xafb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xafc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xafd: Call 0x10e2

0xafe: Pop(2)
0xaff: PushEmpty(object, object)
0xb00: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb01: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb02: Call 0x1100

0xb03: Pop(2)
0xb04: PushEmpty(object, object)
0xb05: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb06: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb07: Call 0x11f5

0xb08: Pop(2)
0xb09: Push((int) 8027)
0xb0a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb0b: IF (Stack[-1] == 0) GOTO 0xb16; Pop(1)

0xb0c: PushEmpty(object, object)
0xb0d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb0e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb0f: Call 0x10e2

0xb10: Pop(2)
0xb11: PushEmpty(object, object)
0xb12: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb13: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb14: Call 0x1100

0xb15: Pop(2)
0xb16: Push((int) 8028)
0xb17: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb18: IF (Stack[-1] == 0) GOTO 0xb1e; Pop(1)

0xb19: PushEmpty(object, object)
0xb1a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb1b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb1c: Call 0x10e2

0xb1d: Pop(2)
0xb1e: Push((int) 8018)
0xb1f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb20: IF (Stack[-1] == 0) GOTO 0xb26; Pop(1)

0xb21: PushEmpty(object, object)
0xb22: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb23: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb24: Call 0x10e2

0xb25: Pop(2)
0xb26: Push((int) 8009)
0xb27: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb28: IF (Stack[-1] == 0) GOTO 0xb2e; Pop(1)

0xb29: PushEmpty(object, object)
0xb2a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb2b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb2c: Call 0x10e2

0xb2d: Pop(2)
0xb2e: Push((int) 8037)
0xb2f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb30: IF (Stack[-1] == 0) GOTO 0xb40; Pop(1)

0xb31: PushEmpty(object, object)
0xb32: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb33: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb34: Call 0x10e8

0xb35: Pop(2)
0xb36: PushEmpty(object, object)
0xb37: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb38: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb39: Call 0x1205

0xb3a: Pop(2)
0xb3b: PushEmpty(object, object)
0xb3c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb3d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb3e: Call 0x1215

0xb3f: Pop(2)
0xb40: Push((int) 8033)
0xb41: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb42: IF (Stack[-1] == 0) GOTO 0xb48; Pop(1)

0xb43: PushEmpty(object, object)
0xb44: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb45: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb46: Call 0x10e8

0xb47: Pop(2)
0xb48: Push((int) 8042)
0xb49: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb4a: IF (Stack[-1] == 0) GOTO 0xb50; Pop(1)

0xb4b: PushEmpty(object, object)
0xb4c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb4d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb4e: Call 0x10ee

0xb4f: Pop(2)
0xb50: Push((int) 8045)
0xb51: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb52: IF (Stack[-1] == 0) GOTO 0xb58; Pop(1)

0xb53: PushEmpty(object, object)
0xb54: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb55: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb56: Call 0x10f4

0xb57: Pop(2)
0xb58: Push((int) 8046)
0xb59: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb5a: IF (Stack[-1] == 0) GOTO 0xb60; Pop(1)

0xb5b: PushEmpty(object, object)
0xb5c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb5d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb5e: Call 0x10f4

0xb5f: Pop(2)
0xb60: Push((int) 12591)
0xb61: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb62: IF (Stack[-1] == 0) GOTO 0xb6d; Pop(1)

0xb63: PushEmpty(object, object)
0xb64: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb65: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb66: Call 0x1100

0xb67: Pop(2)
0xb68: PushEmpty(object, object)
0xb69: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb6a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb6b: Call 0x11f5

0xb6c: Pop(2)
0xb6d: Push((int) 7559)
0xb6e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb6f: IF (Stack[-1] == 0) GOTO 0xbdb; Pop(1)

0xb70: PushEmpty(bool, object)
0xb71: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb72: Call 0x1279

0xb73: Pop(1)
0xb74: IF (Stack[-1] == 0) GOTO 0xb89; Pop(1)

0xb75: PushEmpty(string)
0xb76: Stack[-1] = "Neutral"
0xb77: Call 0xae1

0xb78: Pop(1)
0xb79: Push((int) 6853)
0xb7a: @@ SetMessage(Stack[-1])
0xb7b: Pop(1)
0xb7c: @@ ClearReplies()
0xb7d: Pop(0)
0xb7e: Push((int) 6854)
0xb7f: Push((int) 7890)
0xb80: Push((int) 7560)
0xb81: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb82: Pop(3)
0xb83: Push((int) 7262)
0xb84: Push((int) 7890)
0xb85: Push((int) 8004)
0xb86: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb87: Pop(3)
0xb88: Return(); Pop(0)

0xb89: PushEmpty(string)
0xb8a: Stack[-1] = "Neutral"
0xb8b: Call 0xae1

0xb8c: Pop(1)
0xb8d: Push((int) 6855)
0xb8e: @@ SetMessage(Stack[-1])
0xb8f: Pop(1)
0xb90: @@ ClearReplies()
0xb91: Pop(0)
0xb92: PushEmpty(bool)
0xb93: Stack[-1] = (bool) 0
0xb94: PushEmpty(bool, object)
0xb95: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb96: Call 0x1285

0xb97: Pop(1)
0xb98: IF (Stack[-1] == 0) GOTO 0xb9f; Pop(1)

0xb99: PushEmpty(bool, object)
0xb9a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb9b: Call 0x12b5

0xb9c: Pop(1)
0xb9d: IF (Stack[-1] == 0) GOTO 0xb9f; Pop(1)

0xb9e: Stack[-1] = (bool) 1
0xb9f: IF (Stack[-1] == 0) GOTO 0xba5; Pop(1)

0xba0: Push((int) 6856)
0xba1: Push((int) 7563)
0xba2: Push((int) 7562)
0xba3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xba4: Pop(3)
0xba5: PushEmpty(bool)
0xba6: Stack[-1] = (bool) 0
0xba7: PushEmpty(bool, object)
0xba8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xba9: Call 0x1291

0xbaa: Pop(1)
0xbab: IF (Stack[-1] == 0) GOTO 0xbb2; Pop(1)

0xbac: PushEmpty(bool, object)
0xbad: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbae: Call 0x12c1

0xbaf: Pop(1)
0xbb0: IF (Stack[-1] == 0) GOTO 0xbb2; Pop(1)

0xbb1: Stack[-1] = (bool) 1
0xbb2: IF (Stack[-1] == 0) GOTO 0xbb8; Pop(1)

0xbb3: Push((int) 6859)
0xbb4: Push((int) 7566)
0xbb5: Push((int) 7565)
0xbb6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbb7: Pop(3)
0xbb8: PushEmpty(bool)
0xbb9: Stack[-1] = (bool) 0
0xbba: PushEmpty(bool, object)
0xbbb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbbc: Call 0x129d

0xbbd: Pop(1)
0xbbe: IF (Stack[-1] == 0) GOTO 0xbc5; Pop(1)

0xbbf: PushEmpty(bool, object)
0xbc0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbc1: Call 0x12a9

0xbc2: Pop(1)
0xbc3: IF (Stack[-1] == 0) GOTO 0xbc5; Pop(1)

0xbc4: Stack[-1] = (bool) 1
0xbc5: IF (Stack[-1] == 0) GOTO 0xbcb; Pop(1)

0xbc6: Push((int) 6861)
0xbc7: Push((int) 7568)
0xbc8: Push((int) 7567)
0xbc9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbca: Pop(3)
0xbcb: PushEmpty(bool, object)
0xbcc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbcd: Call 0x12f1

0xbce: Pop(1)
0xbcf: IF (Stack[-1] == 0) GOTO 0xbd5; Pop(1)

0xbd0: Push((int) 11392)
0xbd1: Push((int) 12590)
0xbd2: Push((int) 12589)
0xbd3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbd4: Pop(3)
0xbd5: Push((int) 7528)
0xbd6: Push((int) -1)
0xbd7: Push((int) 8310)
0xbd8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbd9: Pop(3)
0xbda: Return(); Pop(0)

0xbdb: Push((int) 12590)
0xbdc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbdd: IF (Stack[-1] == 0) GOTO 0xbed; Pop(1)

0xbde: PushEmpty(string)
0xbdf: Stack[-1] = "Neutral"
0xbe0: Call 0xae1

0xbe1: Pop(1)
0xbe2: Push((int) 11393)
0xbe3: @@ SetMessage(Stack[-1])
0xbe4: Pop(1)
0xbe5: @@ ClearReplies()
0xbe6: Pop(0)
0xbe7: Push((int) 11394)
0xbe8: Push((int) -1)
0xbe9: Push((int) 12591)
0xbea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbeb: Pop(3)
0xbec: Return(); Pop(0)

0xbed: Push((int) 7568)
0xbee: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbef: IF (Stack[-1] == 0) GOTO 0xbff; Pop(1)

0xbf0: PushEmpty(string)
0xbf1: Stack[-1] = "Neutral"
0xbf2: Call 0xae1

0xbf3: Pop(1)
0xbf4: Push((int) 6862)
0xbf5: @@ SetMessage(Stack[-1])
0xbf6: Pop(1)
0xbf7: @@ ClearReplies()
0xbf8: Pop(0)
0xbf9: Push((int) 7296)
0xbfa: Push((int) 8044)
0xbfb: Push((int) 8043)
0xbfc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbfd: Pop(3)
0xbfe: Return(); Pop(0)

0xbff: Push((int) 8044)
0xc00: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc01: IF (Stack[-1] == 0) GOTO 0xc16; Pop(1)

0xc02: PushEmpty(string)
0xc03: Stack[-1] = "Neutral"
0xc04: Call 0xae1

0xc05: Pop(1)
0xc06: Push((int) 7297)
0xc07: @@ SetMessage(Stack[-1])
0xc08: Pop(1)
0xc09: @@ ClearReplies()
0xc0a: Pop(0)
0xc0b: Push((int) 7298)
0xc0c: Push((int) -1)
0xc0d: Push((int) 8045)
0xc0e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc0f: Pop(3)
0xc10: Push((int) 7299)
0xc11: Push((int) -1)
0xc12: Push((int) 8046)
0xc13: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc14: Pop(3)
0xc15: Return(); Pop(0)

0xc16: Push((int) 7566)
0xc17: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc18: IF (Stack[-1] == 0) GOTO 0xc2d; Pop(1)

0xc19: PushEmpty(object, object)
0xc1a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc1b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc1c: Call 0x10dc

0xc1d: Pop(2)
0xc1e: PushEmpty(string)
0xc1f: Stack[-1] = "Neutral"
0xc20: Call 0xae1

0xc21: Pop(1)
0xc22: Push((int) 6860)
0xc23: @@ SetMessage(Stack[-1])
0xc24: Pop(1)
0xc25: @@ ClearReplies()
0xc26: Pop(0)
0xc27: Push((int) 7295)
0xc28: Push((int) -1)
0xc29: Push((int) 8042)
0xc2a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc2b: Pop(3)
0xc2c: Return(); Pop(0)

0xc2d: Push((int) 7563)
0xc2e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc2f: IF (Stack[-1] == 0) GOTO 0xc44; Pop(1)

0xc30: PushEmpty(string)
0xc31: Stack[-1] = "Neutral"
0xc32: Call 0xae1

0xc33: Pop(1)
0xc34: Push((int) 6857)
0xc35: @@ SetMessage(Stack[-1])
0xc36: Pop(1)
0xc37: @@ ClearReplies()
0xc38: Pop(0)
0xc39: Push((int) 6858)
0xc3a: Push((int) 8034)
0xc3b: Push((int) 7564)
0xc3c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc3d: Pop(3)
0xc3e: Push((int) 7287)
0xc3f: Push((int) -1)
0xc40: Push((int) 8033)
0xc41: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc42: Pop(3)
0xc43: Return(); Pop(0)

0xc44: Push((int) 8034)
0xc45: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc46: IF (Stack[-1] == 0) GOTO 0xc5b; Pop(1)

0xc47: PushEmpty(string)
0xc48: Stack[-1] = "Neutral"
0xc49: Call 0xae1

0xc4a: Pop(1)
0xc4b: Push((int) 7288)
0xc4c: @@ SetMessage(Stack[-1])
0xc4d: Pop(1)
0xc4e: @@ ClearReplies()
0xc4f: Pop(0)
0xc50: Push((int) 7289)
0xc51: Push((int) 8036)
0xc52: Push((int) 8035)
0xc53: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc54: Pop(3)
0xc55: Push((int) 7292)
0xc56: Push((int) 8039)
0xc57: Push((int) 8038)
0xc58: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc59: Pop(3)
0xc5a: Return(); Pop(0)

0xc5b: Push((int) 8039)
0xc5c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc5d: IF (Stack[-1] == 0) GOTO 0xc6d; Pop(1)

0xc5e: PushEmpty(string)
0xc5f: Stack[-1] = "Neutral"
0xc60: Call 0xae1

0xc61: Pop(1)
0xc62: Push((int) 7293)
0xc63: @@ SetMessage(Stack[-1])
0xc64: Pop(1)
0xc65: @@ ClearReplies()
0xc66: Pop(0)
0xc67: Push((int) 7294)
0xc68: Push((int) 8036)
0xc69: Push((int) 8040)
0xc6a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc6b: Pop(3)
0xc6c: Return(); Pop(0)

0xc6d: Push((int) 8036)
0xc6e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc6f: IF (Stack[-1] == 0) GOTO 0xc7f; Pop(1)

0xc70: PushEmpty(string)
0xc71: Stack[-1] = "Neutral"
0xc72: Call 0xae1

0xc73: Pop(1)
0xc74: Push((int) 7290)
0xc75: @@ SetMessage(Stack[-1])
0xc76: Pop(1)
0xc77: @@ ClearReplies()
0xc78: Pop(0)
0xc79: Push((int) 7291)
0xc7a: Push((int) -1)
0xc7b: Push((int) 8037)
0xc7c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc7d: Pop(3)
0xc7e: Return(); Pop(0)

0xc7f: Push((int) 7890)
0xc80: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc81: IF (Stack[-1] == 0) GOTO 0xc9b; Pop(1)

0xc82: PushEmpty(string)
0xc83: Stack[-1] = "Neutral"
0xc84: Call 0xae1

0xc85: Pop(1)
0xc86: Push((int) 7162)
0xc87: @@ SetMessage(Stack[-1])
0xc88: Pop(1)
0xc89: @@ ClearReplies()
0xc8a: Pop(0)
0xc8b: Push((int) 7264)
0xc8c: Push((int) 8010)
0xc8d: Push((int) 8007)
0xc8e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc8f: Pop(3)
0xc90: Push((int) 7265)
0xc91: Push((int) 8010)
0xc92: Push((int) 8008)
0xc93: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc94: Pop(3)
0xc95: Push((int) 7266)
0xc96: Push((int) -1)
0xc97: Push((int) 8009)
0xc98: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc99: Pop(3)
0xc9a: Return(); Pop(0)

0xc9b: Push((int) 8010)
0xc9c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc9d: IF (Stack[-1] == 0) GOTO 0xcb2; Pop(1)

0xc9e: PushEmpty(string)
0xc9f: Stack[-1] = "Neutral"
0xca0: Call 0xae1

0xca1: Pop(1)
0xca2: Push((int) 7267)
0xca3: @@ SetMessage(Stack[-1])
0xca4: Pop(1)
0xca5: @@ ClearReplies()
0xca6: Pop(0)
0xca7: Push((int) 7268)
0xca8: Push((int) 8015)
0xca9: Push((int) 8012)
0xcaa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcab: Pop(3)
0xcac: Push((int) 7269)
0xcad: Push((int) 8014)
0xcae: Push((int) 8013)
0xcaf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcb0: Pop(3)
0xcb1: Return(); Pop(0)

0xcb2: Push((int) 8014)
0xcb3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcb4: IF (Stack[-1] == 0) GOTO 0xcce; Pop(1)

0xcb5: PushEmpty(string)
0xcb6: Stack[-1] = "Neutral"
0xcb7: Call 0xae1

0xcb8: Pop(1)
0xcb9: Push((int) 7270)
0xcba: @@ SetMessage(Stack[-1])
0xcbb: Pop(1)
0xcbc: @@ ClearReplies()
0xcbd: Pop(0)
0xcbe: Push((int) 7272)
0xcbf: Push((int) 8019)
0xcc0: Push((int) 8016)
0xcc1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcc2: Pop(3)
0xcc3: Push((int) 7273)
0xcc4: Push((int) 8015)
0xcc5: Push((int) 8017)
0xcc6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcc7: Pop(3)
0xcc8: Push((int) 7274)
0xcc9: Push((int) -1)
0xcca: Push((int) 8018)
0xccb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xccc: Pop(3)
0xccd: Return(); Pop(0)

0xcce: Push((int) 8019)
0xccf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcd0: IF (Stack[-1] == 0) GOTO 0xce0; Pop(1)

0xcd1: PushEmpty(string)
0xcd2: Stack[-1] = "Neutral"
0xcd3: Call 0xae1

0xcd4: Pop(1)
0xcd5: Push((int) 7275)
0xcd6: @@ SetMessage(Stack[-1])
0xcd7: Pop(1)
0xcd8: @@ ClearReplies()
0xcd9: Pop(0)
0xcda: Push((int) 7276)
0xcdb: Push((int) 8015)
0xcdc: Push((int) 8020)
0xcdd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcde: Pop(3)
0xcdf: Return(); Pop(0)

0xce0: Push((int) 8015)
0xce1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xce2: IF (Stack[-1] == 0) GOTO 0xcfc; Pop(1)

0xce3: PushEmpty(object, object)
0xce4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xce5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xce6: Call 0x119b

0xce7: Pop(2)
0xce8: PushEmpty(string)
0xce9: Stack[-1] = "Neutral"
0xcea: Call 0xae1

0xceb: Pop(1)
0xcec: Push((int) 7271)
0xced: @@ SetMessage(Stack[-1])
0xcee: Pop(1)
0xcef: @@ ClearReplies()
0xcf0: Pop(0)
0xcf1: Push((int) 7277)
0xcf2: Push((int) 8023)
0xcf3: Push((int) 8022)
0xcf4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcf5: Pop(3)
0xcf6: Push((int) 7284)
0xcf7: Push((int) 8030)
0xcf8: Push((int) 8029)
0xcf9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcfa: Pop(3)
0xcfb: Return(); Pop(0)

0xcfc: Push((int) 8030)
0xcfd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcfe: IF (Stack[-1] == 0) GOTO 0xd0e; Pop(1)

0xcff: PushEmpty(string)
0xd00: Stack[-1] = "Neutral"
0xd01: Call 0xae1

0xd02: Pop(1)
0xd03: Push((int) 7285)
0xd04: @@ SetMessage(Stack[-1])
0xd05: Pop(1)
0xd06: @@ ClearReplies()
0xd07: Pop(0)
0xd08: Push((int) 7286)
0xd09: Push((int) 8025)
0xd0a: Push((int) 8031)
0xd0b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd0c: Pop(3)
0xd0d: Return(); Pop(0)

0xd0e: Push((int) 8023)
0xd0f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd10: IF (Stack[-1] == 0) GOTO 0xd20; Pop(1)

0xd11: PushEmpty(string)
0xd12: Stack[-1] = "Neutral"
0xd13: Call 0xae1

0xd14: Pop(1)
0xd15: Push((int) 7278)
0xd16: @@ SetMessage(Stack[-1])
0xd17: Pop(1)
0xd18: @@ ClearReplies()
0xd19: Pop(0)
0xd1a: Push((int) 7279)
0xd1b: Push((int) 8025)
0xd1c: Push((int) 8024)
0xd1d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd1e: Pop(3)
0xd1f: Return(); Pop(0)

0xd20: Push((int) 8025)
0xd21: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd22: IF (Stack[-1] == 0) GOTO 0xd3c; Pop(1)

0xd23: PushEmpty(string)
0xd24: Stack[-1] = "Neutral"
0xd25: Call 0xae1

0xd26: Pop(1)
0xd27: Push((int) 7280)
0xd28: @@ SetMessage(Stack[-1])
0xd29: Pop(1)
0xd2a: @@ ClearReplies()
0xd2b: Pop(0)
0xd2c: Push((int) 7281)
0xd2d: Push((int) -1)
0xd2e: Push((int) 8026)
0xd2f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd30: Pop(3)
0xd31: Push((int) 7282)
0xd32: Push((int) -1)
0xd33: Push((int) 8027)
0xd34: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd35: Pop(3)
0xd36: Push((int) 7283)
0xd37: Push((int) -1)
0xd38: Push((int) 8028)
0xd39: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd3a: Pop(3)
0xd3b: Return(); Pop(0)

0xd3c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xd3d: PushEmpty(bool)
0xd3e: Call 0x10a0

0xd3f: Pop(0)
0xd40: IF (Stack[-1] == 0) GOTO 0xd44; Pop(1)

0xd41: @ lshStopAnimation()
0xd42: Pop(0)
0xd43: GOTO 0xd46

0xd44: @ StopAnimation()
0xd45: Pop(0)
0xd46: Return(); Pop(0)

0xd47: GOTO 0xaf2

0xd48: Return(); Pop(0)

0xd49: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xd4a: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xd4b: PushEmpty(bool, object)
0xd4c: Stack[-1] = Stack[-11]
0xd4d: Call 0x1000

0xd4e: Pop(1)
0xd4f: Pop(1); Push((bool) Stack[-1] == 0)
0xd50: IF (Stack[-1] == 0) GOTO 0xd53; Pop(1)

0xd51: Stack[-10] = (int) -2
0xd52: Return(); Pop(8)

0xd53: @ CreateDialog(Stack[-4])
0xd54: Pop(0)
0xd55: PushEmpty(int)
0xd56: Call 0x109c

0xd57: Pop(0)
0xd58: @@ SetNPCName(Stack[-1])
0xd59: Pop(1)
0xd5a: PushEmpty(string)
0xd5b: Call 0x109e

0xd5c: Pop(0)
0xd5d: @@ SetPhoto(Stack[-1])
0xd5e: Pop(1)
0xd5f: PushEmpty(int)
0xd60: Call 0x13b9

0xd61: Pop(0)
0xd62: @@ SetPlayerName(Stack[-1])
0xd63: Pop(1)
0xd64: Stack[-2] = (int) -1
0xd65: @ IsOverrideActive(Stack[-3])
0xd66: Pop(0)
0xd67: Push(Stack[-3])
0xd68: IF (Stack[-1] == 0) GOTO 0xd6b; Pop(1)

0xd69: Stack[-10] = (int) -2
0xd6a: Return(); Pop(8)

0xd6b: @ DoDialog(Stack[-4])
0xd6c: Pop(0)
0xd6d: PushEmpty(object, object)
0xd6e: Stack[-2] = Stack[-11]
0xd6f: Stack[-1] = Stack[-6]
0xd70: Push(-2, 4); TaskCall(11)
0xd71: Call 0xd88

0xd72: Pop(-2, 4); TaskReturn
0xd73: Pop(2)
0xd74: @@ IsDialogEnd(Stack[-1])
0xd75: Pop(0)
0xd76: Pop(0); Push((bool) Stack[-1] == 0)
0xd77: IF (Stack[-1] == 0) GOTO 0xd7d; Pop(1)

0xd78: @ sync()
0xd79: Pop(0)
0xd7a: @@ IsDialogEnd(Stack[-1])
0xd7b: Pop(0)
0xd7c: GOTO 0xd76

0xd7d: PushEmpty(object)
0xd7e: Stack[-1] = Stack[-10]
0xd7f: Call 0x1038

0xd80: Pop(1)
0xd81: @ StopDialog(Stack[-4])
0xd82: Pop(0)
0xd83: @@ GetReturnValue(Stack[-2])
0xd84: Pop(0)
0xd85: Stack[-10] = Stack[-2]
0xd86: Return(); Pop(8)

0xd87: Stack[-4] = 0
0xd88: PushEmpty()
0xd89: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xd8a: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xd8b: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xd8c: Push((int) 1)
0xd8d: IF (Stack[-1] == 0) GOTO 0xda9; Pop(1)

0xd8e: PushEmpty(string)
0xd8f: Stack[-1] = "Neutral"
0xd90: Call 0xdc7

0xd91: Pop(1)
0xd92: Push((int) 9840)
0xd93: @@ SetMessage(Stack[-1])
0xd94: Pop(1)
0xd95: @@ ClearReplies()
0xd96: Pop(0)
0xd97: PushEmpty(bool, object)
0xd98: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd99: Call 0x132d

0xd9a: Pop(1)
0xd9b: IF (Stack[-1] == 0) GOTO 0xda1; Pop(1)

0xd9c: Push((int) 9841)
0xd9d: Push((int) 10821)
0xd9e: Push((int) 10840)
0xd9f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xda0: Pop(3)
0xda1: Push((int) 11259)
0xda2: Push((int) -1)
0xda3: Push((int) 12449)
0xda4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xda5: Pop(3)
0xda6: GOTO 0xda9

0xda7: Return(); Pop(0)

0xda8: GOTO 0xd8c

0xda9: PushEmpty(bool)
0xdaa: Call 0x10a0

0xdab: Pop(0)
0xdac: IF (Stack[-1] == 0) GOTO 0xdb8; Pop(1)

0xdad: @ lshWaitForAnimEnd()
0xdae: Pop(0)
0xdaf: Push( Stack[3 + Tasks[-1].StackPointer] )
0xdb0: IF (Stack[-1] == 0) GOTO 0xdb2; Pop(1)

0xdb1: GOTO 0xdb7

0xdb2: PushEmpty(string)
0xdb3: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xdb4: Call 0x103c

0xdb5: Pop(1)
0xdb6: GOTO 0xdad

0xdb7: GOTO 0xdc6

0xdb8: Push("all")
0xdb9: Push("idle")
0xdba: @ PlayAnimation(Stack[-2], Stack[-1])
0xdbb: Pop(2)
0xdbc: @ WaitForAnimEnd()
0xdbd: Pop(0)
0xdbe: Push( Stack[3 + Tasks[-1].StackPointer] )
0xdbf: IF (Stack[-1] == 0) GOTO 0xdc1; Pop(1)

0xdc0: GOTO 0xdc6

0xdc1: Push("all")
0xdc2: Push("idle")
0xdc3: @ PlayAnimation(Stack[-2], Stack[-1])
0xdc4: Pop(2)
0xdc5: GOTO 0xdbc

0xdc6: Return(); Pop(0)

0xdc7: PushEmpty()
0xdc8: PushEmpty(bool)
0xdc9: Call 0x10a0

0xdca: Pop(0)
0xdcb: Pop(1); Push((bool) Stack[-1] == 0)
0xdcc: IF (Stack[-1] == 0) GOTO 0xdce; Pop(1)

0xdcd: Return(); Pop(0)

0xdce: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xdcf: IF (Stack[-1] == 0) GOTO 0xdd1; Pop(1)

0xdd0: Return(); Pop(0)

0xdd1: PushEmpty(string)
0xdd2: Stack[-1] = Stack[-2]
0xdd3: Call 0x103c

0xdd4: Pop(1)
0xdd5: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xdd6: Return(); Pop(0)

0xdd7: PushEmpty()
0xdd8: Push((int) 1)
0xdd9: IF (Stack[-1] == 0) GOTO 0xe85; Pop(1)

0xdda: PushEmpty()
0xddb: Call 0x104e

0xddc: Pop(0)
0xddd: Push((int) 10840)
0xdde: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xddf: IF (Stack[-1] == 0) GOTO 0xde5; Pop(1)

0xde0: PushEmpty(object, object)
0xde1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xde2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xde3: Call 0x1225

0xde4: Pop(2)
0xde5: Push((int) 10839)
0xde6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xde7: IF (Stack[-1] == 0) GOTO 0xe01; Pop(1)

0xde8: PushEmpty(string)
0xde9: Stack[-1] = "Neutral"
0xdea: Call 0xdc7

0xdeb: Pop(1)
0xdec: Push((int) 9840)
0xded: @@ SetMessage(Stack[-1])
0xdee: Pop(1)
0xdef: @@ ClearReplies()
0xdf0: Pop(0)
0xdf1: PushEmpty(bool, object)
0xdf2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xdf3: Call 0x132d

0xdf4: Pop(1)
0xdf5: IF (Stack[-1] == 0) GOTO 0xdfb; Pop(1)

0xdf6: Push((int) 9841)
0xdf7: Push((int) 10821)
0xdf8: Push((int) 10840)
0xdf9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdfa: Pop(3)
0xdfb: Push((int) 11259)
0xdfc: Push((int) -1)
0xdfd: Push((int) 12449)
0xdfe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdff: Pop(3)
0xe00: Return(); Pop(0)

0xe01: Push((int) 10821)
0xe02: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe03: IF (Stack[-1] == 0) GOTO 0xe1d; Pop(1)

0xe04: PushEmpty(string)
0xe05: Stack[-1] = "Neutral"
0xe06: Call 0xdc7

0xe07: Pop(1)
0xe08: Push((int) 9824)
0xe09: @@ SetMessage(Stack[-1])
0xe0a: Pop(1)
0xe0b: @@ ClearReplies()
0xe0c: Pop(0)
0xe0d: Push((int) 9825)
0xe0e: Push((int) 10823)
0xe0f: Push((int) 10822)
0xe10: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe11: Pop(3)
0xe12: Push((int) 9829)
0xe13: Push((int) 10828)
0xe14: Push((int) 10827)
0xe15: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe16: Pop(3)
0xe17: Push((int) 9836)
0xe18: Push((int) 10835)
0xe19: Push((int) 10834)
0xe1a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe1b: Pop(3)
0xe1c: Return(); Pop(0)

0xe1d: Push((int) 10835)
0xe1e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe1f: IF (Stack[-1] == 0) GOTO 0xe34; Pop(1)

0xe20: PushEmpty(string)
0xe21: Stack[-1] = "Neutral"
0xe22: Call 0xdc7

0xe23: Pop(1)
0xe24: Push((int) 9837)
0xe25: @@ SetMessage(Stack[-1])
0xe26: Pop(1)
0xe27: @@ ClearReplies()
0xe28: Pop(0)
0xe29: Push((int) 9839)
0xe2a: Push((int) 10828)
0xe2b: Push((int) 10837)
0xe2c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe2d: Pop(3)
0xe2e: Push((int) 9838)
0xe2f: Push((int) -1)
0xe30: Push((int) 10836)
0xe31: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe32: Pop(3)
0xe33: Return(); Pop(0)

0xe34: Push((int) 10828)
0xe35: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe36: IF (Stack[-1] == 0) GOTO 0xe4b; Pop(1)

0xe37: PushEmpty(string)
0xe38: Stack[-1] = "Neutral"
0xe39: Call 0xdc7

0xe3a: Pop(1)
0xe3b: Push((int) 9830)
0xe3c: @@ SetMessage(Stack[-1])
0xe3d: Pop(1)
0xe3e: @@ ClearReplies()
0xe3f: Pop(0)
0xe40: Push((int) 9831)
0xe41: Push((int) -1)
0xe42: Push((int) 10829)
0xe43: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe44: Pop(3)
0xe45: Push((int) 9832)
0xe46: Push((int) 10831)
0xe47: Push((int) 10830)
0xe48: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe49: Pop(3)
0xe4a: Return(); Pop(0)

0xe4b: Push((int) 10831)
0xe4c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe4d: IF (Stack[-1] == 0) GOTO 0xe62; Pop(1)

0xe4e: PushEmpty(string)
0xe4f: Stack[-1] = "Neutral"
0xe50: Call 0xdc7

0xe51: Pop(1)
0xe52: Push((int) 9833)
0xe53: @@ SetMessage(Stack[-1])
0xe54: Pop(1)
0xe55: @@ ClearReplies()
0xe56: Pop(0)
0xe57: Push((int) 9834)
0xe58: Push((int) -1)
0xe59: Push((int) 10832)
0xe5a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe5b: Pop(3)
0xe5c: Push((int) 9835)
0xe5d: Push((int) -1)
0xe5e: Push((int) 10833)
0xe5f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe60: Pop(3)
0xe61: Return(); Pop(0)

0xe62: Push((int) 10823)
0xe63: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe64: IF (Stack[-1] == 0) GOTO 0xe79; Pop(1)

0xe65: PushEmpty(string)
0xe66: Stack[-1] = "Neutral"
0xe67: Call 0xdc7

0xe68: Pop(1)
0xe69: Push((int) 9826)
0xe6a: @@ SetMessage(Stack[-1])
0xe6b: Pop(1)
0xe6c: @@ ClearReplies()
0xe6d: Pop(0)
0xe6e: Push((int) 9827)
0xe6f: Push((int) 10828)
0xe70: Push((int) 10824)
0xe71: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe72: Pop(3)
0xe73: Push((int) 9828)
0xe74: Push((int) -1)
0xe75: Push((int) 10826)
0xe76: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe77: Pop(3)
0xe78: Return(); Pop(0)

0xe79: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xe7a: PushEmpty(bool)
0xe7b: Call 0x10a0

0xe7c: Pop(0)
0xe7d: IF (Stack[-1] == 0) GOTO 0xe81; Pop(1)

0xe7e: @ lshStopAnimation()
0xe7f: Pop(0)
0xe80: GOTO 0xe83

0xe81: @ StopAnimation()
0xe82: Pop(0)
0xe83: Return(); Pop(0)

0xe84: GOTO 0xdd8

0xe85: Return(); Pop(0)

0xe86: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xe87: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xe88: PushEmpty(bool, object)
0xe89: Stack[-1] = Stack[-11]
0xe8a: Call 0x1000

0xe8b: Pop(1)
0xe8c: Pop(1); Push((bool) Stack[-1] == 0)
0xe8d: IF (Stack[-1] == 0) GOTO 0xe90; Pop(1)

0xe8e: Stack[-10] = (int) -2
0xe8f: Return(); Pop(8)

0xe90: @ CreateDialog(Stack[-4])
0xe91: Pop(0)
0xe92: PushEmpty(int)
0xe93: Call 0x109c

0xe94: Pop(0)
0xe95: @@ SetNPCName(Stack[-1])
0xe96: Pop(1)
0xe97: PushEmpty(string)
0xe98: Call 0x109e

0xe99: Pop(0)
0xe9a: @@ SetPhoto(Stack[-1])
0xe9b: Pop(1)
0xe9c: PushEmpty(int)
0xe9d: Call 0x13b9

0xe9e: Pop(0)
0xe9f: @@ SetPlayerName(Stack[-1])
0xea0: Pop(1)
0xea1: Stack[-2] = (int) -1
0xea2: @ IsOverrideActive(Stack[-3])
0xea3: Pop(0)
0xea4: Push(Stack[-3])
0xea5: IF (Stack[-1] == 0) GOTO 0xea8; Pop(1)

0xea6: Stack[-10] = (int) -2
0xea7: Return(); Pop(8)

0xea8: @ DoDialog(Stack[-4])
0xea9: Pop(0)
0xeaa: PushEmpty(object, object)
0xeab: Stack[-2] = Stack[-11]
0xeac: Stack[-1] = Stack[-6]
0xead: Push(-2, 4); TaskCall(13)
0xeae: Call 0xec5

0xeaf: Pop(-2, 4); TaskReturn
0xeb0: Pop(2)
0xeb1: @@ IsDialogEnd(Stack[-1])
0xeb2: Pop(0)
0xeb3: Pop(0); Push((bool) Stack[-1] == 0)
0xeb4: IF (Stack[-1] == 0) GOTO 0xeba; Pop(1)

0xeb5: @ sync()
0xeb6: Pop(0)
0xeb7: @@ IsDialogEnd(Stack[-1])
0xeb8: Pop(0)
0xeb9: GOTO 0xeb3

0xeba: PushEmpty(object)
0xebb: Stack[-1] = Stack[-10]
0xebc: Call 0x1038

0xebd: Pop(1)
0xebe: @ StopDialog(Stack[-4])
0xebf: Pop(0)
0xec0: @@ GetReturnValue(Stack[-2])
0xec1: Pop(0)
0xec2: Stack[-10] = Stack[-2]
0xec3: Return(); Pop(8)

0xec4: Stack[-4] = 0
0xec5: PushEmpty()
0xec6: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xec7: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xec8: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xec9: Push((int) 1)
0xeca: IF (Stack[-1] == 0) GOTO 0xeef; Pop(1)

0xecb: PushEmpty(string)
0xecc: Stack[-1] = "Neutral"
0xecd: Call 0xf0d

0xece: Pop(1)
0xecf: Push((int) 11255)
0xed0: @@ SetMessage(Stack[-1])
0xed1: Pop(1)
0xed2: @@ ClearReplies()
0xed3: Pop(0)
0xed4: PushEmpty(bool)
0xed5: Stack[-1] = (bool) 0
0xed6: PushEmpty(bool, object)
0xed7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xed8: Call 0x1345

0xed9: Pop(1)
0xeda: IF (Stack[-1] == 0) GOTO 0xee1; Pop(1)

0xedb: PushEmpty(bool, object)
0xedc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xedd: Call 0x1339

0xede: Pop(1)
0xedf: IF (Stack[-1] == 0) GOTO 0xee1; Pop(1)

0xee0: Stack[-1] = (bool) 1
0xee1: IF (Stack[-1] == 0) GOTO 0xee7; Pop(1)

0xee2: Push((int) 11257)
0xee3: Push((int) 12448)
0xee4: Push((int) 12447)
0xee5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xee6: Pop(3)
0xee7: Push((int) 11256)
0xee8: Push((int) -1)
0xee9: Push((int) 12446)
0xeea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeeb: Pop(3)
0xeec: GOTO 0xeef

0xeed: Return(); Pop(0)

0xeee: GOTO 0xec9

0xeef: PushEmpty(bool)
0xef0: Call 0x10a0

0xef1: Pop(0)
0xef2: IF (Stack[-1] == 0) GOTO 0xefe; Pop(1)

0xef3: @ lshWaitForAnimEnd()
0xef4: Pop(0)
0xef5: Push( Stack[3 + Tasks[-1].StackPointer] )
0xef6: IF (Stack[-1] == 0) GOTO 0xef8; Pop(1)

0xef7: GOTO 0xefd

0xef8: PushEmpty(string)
0xef9: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xefa: Call 0x103c

0xefb: Pop(1)
0xefc: GOTO 0xef3

0xefd: GOTO 0xf0c

0xefe: Push("all")
0xeff: Push("idle")
0xf00: @ PlayAnimation(Stack[-2], Stack[-1])
0xf01: Pop(2)
0xf02: @ WaitForAnimEnd()
0xf03: Pop(0)
0xf04: Push( Stack[3 + Tasks[-1].StackPointer] )
0xf05: IF (Stack[-1] == 0) GOTO 0xf07; Pop(1)

0xf06: GOTO 0xf0c

0xf07: Push("all")
0xf08: Push("idle")
0xf09: @ PlayAnimation(Stack[-2], Stack[-1])
0xf0a: Pop(2)
0xf0b: GOTO 0xf02

0xf0c: Return(); Pop(0)

0xf0d: PushEmpty()
0xf0e: PushEmpty(bool)
0xf0f: Call 0x10a0

0xf10: Pop(0)
0xf11: Pop(1); Push((bool) Stack[-1] == 0)
0xf12: IF (Stack[-1] == 0) GOTO 0xf14; Pop(1)

0xf13: Return(); Pop(0)

0xf14: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xf15: IF (Stack[-1] == 0) GOTO 0xf17; Pop(1)

0xf16: Return(); Pop(0)

0xf17: PushEmpty(string)
0xf18: Stack[-1] = Stack[-2]
0xf19: Call 0x103c

0xf1a: Pop(1)
0xf1b: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xf1c: Return(); Pop(0)

0xf1d: PushEmpty()
0xf1e: Push((int) 1)
0xf1f: IF (Stack[-1] == 0) GOTO 0xfee; Pop(1)

0xf20: PushEmpty()
0xf21: Call 0x104e

0xf22: Pop(0)
0xf23: Push((int) 12447)
0xf24: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf25: IF (Stack[-1] == 0) GOTO 0xf2b; Pop(1)

0xf26: PushEmpty(object, object)
0xf27: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf28: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf29: Call 0x122b

0xf2a: Pop(2)
0xf2b: Push((int) 12445)
0xf2c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf2d: IF (Stack[-1] == 0) GOTO 0xf50; Pop(1)

0xf2e: PushEmpty(string)
0xf2f: Stack[-1] = "Neutral"
0xf30: Call 0xf0d

0xf31: Pop(1)
0xf32: Push((int) 11255)
0xf33: @@ SetMessage(Stack[-1])
0xf34: Pop(1)
0xf35: @@ ClearReplies()
0xf36: Pop(0)
0xf37: PushEmpty(bool)
0xf38: Stack[-1] = (bool) 0
0xf39: PushEmpty(bool, object)
0xf3a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf3b: Call 0x1345

0xf3c: Pop(1)
0xf3d: IF (Stack[-1] == 0) GOTO 0xf44; Pop(1)

0xf3e: PushEmpty(bool, object)
0xf3f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf40: Call 0x1339

0xf41: Pop(1)
0xf42: IF (Stack[-1] == 0) GOTO 0xf44; Pop(1)

0xf43: Stack[-1] = (bool) 1
0xf44: IF (Stack[-1] == 0) GOTO 0xf4a; Pop(1)

0xf45: Push((int) 11257)
0xf46: Push((int) 12448)
0xf47: Push((int) 12447)
0xf48: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf49: Pop(3)
0xf4a: Push((int) 11256)
0xf4b: Push((int) -1)
0xf4c: Push((int) 12446)
0xf4d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf4e: Pop(3)
0xf4f: Return(); Pop(0)

0xf50: Push((int) 12448)
0xf51: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf52: IF (Stack[-1] == 0) GOTO 0xf67; Pop(1)

0xf53: PushEmpty(string)
0xf54: Stack[-1] = "Neutral"
0xf55: Call 0xf0d

0xf56: Pop(1)
0xf57: Push((int) 11258)
0xf58: @@ SetMessage(Stack[-1])
0xf59: Pop(1)
0xf5a: @@ ClearReplies()
0xf5b: Pop(0)
0xf5c: Push((int) 11267)
0xf5d: Push((int) 12458)
0xf5e: Push((int) 12457)
0xf5f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf60: Pop(3)
0xf61: Push((int) 11260)
0xf62: Push((int) 12451)
0xf63: Push((int) 12450)
0xf64: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf65: Pop(3)
0xf66: Return(); Pop(0)

0xf67: Push((int) 12451)
0xf68: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf69: IF (Stack[-1] == 0) GOTO 0xf79; Pop(1)

0xf6a: PushEmpty(string)
0xf6b: Stack[-1] = "Neutral"
0xf6c: Call 0xf0d

0xf6d: Pop(1)
0xf6e: Push((int) 11261)
0xf6f: @@ SetMessage(Stack[-1])
0xf70: Pop(1)
0xf71: @@ ClearReplies()
0xf72: Pop(0)
0xf73: Push((int) 11262)
0xf74: Push((int) 12453)
0xf75: Push((int) 12452)
0xf76: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf77: Pop(3)
0xf78: Return(); Pop(0)

0xf79: Push((int) 12453)
0xf7a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf7b: IF (Stack[-1] == 0) GOTO 0xf8b; Pop(1)

0xf7c: PushEmpty(string)
0xf7d: Stack[-1] = "Neutral"
0xf7e: Call 0xf0d

0xf7f: Pop(1)
0xf80: Push((int) 11263)
0xf81: @@ SetMessage(Stack[-1])
0xf82: Pop(1)
0xf83: @@ ClearReplies()
0xf84: Pop(0)
0xf85: Push((int) 11264)
0xf86: Push((int) 12455)
0xf87: Push((int) 12454)
0xf88: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf89: Pop(3)
0xf8a: Return(); Pop(0)

0xf8b: Push((int) 12455)
0xf8c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf8d: IF (Stack[-1] == 0) GOTO 0xf9d; Pop(1)

0xf8e: PushEmpty(string)
0xf8f: Stack[-1] = "Neutral"
0xf90: Call 0xf0d

0xf91: Pop(1)
0xf92: Push((int) 11265)
0xf93: @@ SetMessage(Stack[-1])
0xf94: Pop(1)
0xf95: @@ ClearReplies()
0xf96: Pop(0)
0xf97: Push((int) 11266)
0xf98: Push((int) 12458)
0xf99: Push((int) 12456)
0xf9a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf9b: Pop(3)
0xf9c: Return(); Pop(0)

0xf9d: Push((int) 12458)
0xf9e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf9f: IF (Stack[-1] == 0) GOTO 0xfb4; Pop(1)

0xfa0: PushEmpty(string)
0xfa1: Stack[-1] = "Neutral"
0xfa2: Call 0xf0d

0xfa3: Pop(1)
0xfa4: Push((int) 11268)
0xfa5: @@ SetMessage(Stack[-1])
0xfa6: Pop(1)
0xfa7: @@ ClearReplies()
0xfa8: Pop(0)
0xfa9: Push((int) 11269)
0xfaa: Push((int) 12463)
0xfab: Push((int) 12459)
0xfac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfad: Pop(3)
0xfae: Push((int) 11270)
0xfaf: Push((int) 12461)
0xfb0: Push((int) 12460)
0xfb1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfb2: Pop(3)
0xfb3: Return(); Pop(0)

0xfb4: Push((int) 12461)
0xfb5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfb6: IF (Stack[-1] == 0) GOTO 0xfcb; Pop(1)

0xfb7: PushEmpty(string)
0xfb8: Stack[-1] = "Neutral"
0xfb9: Call 0xf0d

0xfba: Pop(1)
0xfbb: Push((int) 11271)
0xfbc: @@ SetMessage(Stack[-1])
0xfbd: Pop(1)
0xfbe: @@ ClearReplies()
0xfbf: Pop(0)
0xfc0: Push((int) 11273)
0xfc1: Push((int) 12463)
0xfc2: Push((int) 12464)
0xfc3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfc4: Pop(3)
0xfc5: Push((int) 11274)
0xfc6: Push((int) -1)
0xfc7: Push((int) 12465)
0xfc8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfc9: Pop(3)
0xfca: Return(); Pop(0)

0xfcb: Push((int) 12463)
0xfcc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfcd: IF (Stack[-1] == 0) GOTO 0xfe2; Pop(1)

0xfce: PushEmpty(string)
0xfcf: Stack[-1] = "Neutral"
0xfd0: Call 0xf0d

0xfd1: Pop(1)
0xfd2: Push((int) 11272)
0xfd3: @@ SetMessage(Stack[-1])
0xfd4: Pop(1)
0xfd5: @@ ClearReplies()
0xfd6: Pop(0)
0xfd7: Push((int) 11275)
0xfd8: Push((int) -1)
0xfd9: Push((int) 12467)
0xfda: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfdb: Pop(3)
0xfdc: Push((int) 11276)
0xfdd: Push((int) -1)
0xfde: Push((int) 12468)
0xfdf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfe0: Pop(3)
0xfe1: Return(); Pop(0)

0xfe2: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xfe3: PushEmpty(bool)
0xfe4: Call 0x10a0

0xfe5: Pop(0)
0xfe6: IF (Stack[-1] == 0) GOTO 0xfea; Pop(1)

0xfe7: @ lshStopAnimation()
0xfe8: Pop(0)
0xfe9: GOTO 0xfec

0xfea: @ StopAnimation()
0xfeb: Pop(0)
0xfec: Return(); Pop(0)

0xfed: GOTO 0xf1e

0xfee: Return(); Pop(0)

0xfef: PushEmpty(cvector, cvector, cvector, bool, cvector, cvector, cvector, bool)
0xff0: @@ GetPosition(Stack[-4])
0xff1: Pop(0)
0xff2: @ GetPosition(Stack[-3])
0xff3: Pop(0)
0xff4: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0xff5: Push(CvectorIndex(Stack[-2], 0))
0xff6: Push(CvectorIndex(Stack[-3], 2))
0xff7: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0xff8: Pop(2)
0xff9: Stack[-10] = Stack[-1]
0xffa: Return(); Pop(8)

0xffb: PushEmpty(bool, bool)
0xffc: @ IsLoaded(Stack[-1])
0xffd: Pop(0)
0xffe: Stack[-3] = Stack[-1]
0xfff: Return(); Pop(2)

0x1000: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x1001: @@ GetPosition(Stack[-7])
0x1002: Pop(0)
0x1003: @@ GetEyesHeight(Stack[-8])
0x1004: Pop(0)
0x1005: Push(CvectorIndex(Stack[-7], 1))
0x1006: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x1007: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1008: @ GetPosition(Stack[-6])
0x1009: Pop(0)
0x100a: @ GetEyesHeight(Stack[-8])
0x100b: Pop(0)
0x100c: Push(CvectorIndex(Stack[-6], 1))
0x100d: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x100e: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x100f: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x1010: Push(CvectorIndex(Stack[-5], 1))
0x1011: Stack[-1] = (int) 0
0x1012: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x1013: Pop(0); Push(Stack[-5] | Stack[-5]);
0x1014: Pop(1); Push(Sqrt(Stack[-1]))
0x1015: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x1016: Stack[-4] = -Stack[-5]; Pop(0);
0x1017: Push((int) 70)
0x1018: Pop(1); Push(Stack[-6] * Stack[-1]);
0x1019: PushEmpty(cvector, cvector)
0x101a: Push(CVector(0.0, 1.0, 0.0))
0x101b: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x101c: Call 0x1055

0x101d: Pop(1)
0x101e: Push((int) 25)
0x101f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1020: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1021: Push(CVector(0.0, 10.0, 0.0))
0x1022: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x1023: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x1024: @ IsOverrideActive(Stack[-1])
0x1025: Pop(0)
0x1026: Push(Stack[-1])
0x1027: IF (Stack[-1] == 0) GOTO 0x102a; Pop(1)

0x1028: Stack[-18] = (bool) 0
0x1029: Return(); Pop(16)

0x102a: @ StopWorld()
0x102b: Pop(0)
0x102c: @ CameraTransit(Stack[-2], Stack[-4])
0x102d: Pop(0)
0x102e: Push(CvectorIndex(Stack[-3], 0))
0x102f: Push(CvectorIndex(Stack[-4], 2))
0x1030: @ Rotate(Stack[-2], Stack[-1])
0x1031: Pop(2)
0x1032: @ CameraWaitForPlayFinish()
0x1033: Pop(0)
0x1034: @ ResumeWorld()
0x1035: Pop(0)
0x1036: Stack[-18] = (bool) 1
0x1037: Return(); Pop(16)

0x1038: PushEmpty()
0x1039: @ CameraSwitchToNormal()
0x103a: Pop(0)
0x103b: Return(); Pop(0)

0x103c: PushEmpty(float, float, float, float)
0x103d: Push("playing ")
0x103e: Pop(1); Push(Stack[-1] + Stack[-6]);
0x103f: @ Trace(Stack[-1])
0x1040: Pop(1)
0x1041: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x1042: Pop(0)
0x1043: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x1044: Pop(0)
0x1045: Push("start: ")
0x1046: Pop(1); Push(Stack[-1] + Stack[-3]);
0x1047: @ Trace(Stack[-1])
0x1048: Pop(1)
0x1049: Push("end: ")
0x104a: Pop(1); Push(Stack[-1] + Stack[-2]);
0x104b: @ Trace(Stack[-1])
0x104c: Pop(1)
0x104d: Return(); Pop(4)

0x104e: PushEmpty(bool)
0x104f: Call 0x10a0

0x1050: Pop(0)
0x1051: IF (Stack[-1] == 0) GOTO 0x1054; Pop(1)

0x1052: @ lshStopSpeech()
0x1053: Pop(0)
0x1054: Return(); Pop(0)

0x1055: PushEmpty(float, float)
0x1056: Pop(0); Push(Stack[-3] | Stack[-3]);
0x1057: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1058: Push((float)0.0)
0x1059: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x105a: IF (Stack[-1] == 0) GOTO 0x105d; Pop(1)

0x105b: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x105c: Return(); Pop(2)

0x105d: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x105e: Return(); Pop(2)

0x105f: PushEmpty(int, int)
0x1060: @ GetVariable(Stack[-3], Stack[-1])
0x1061: Pop(0)
0x1062: Stack[-4] = Stack[-1]
0x1063: Return(); Pop(2)

0x1064: PushEmpty(object, object, object, object)
0x1065: @ GetMainOutdoorScene(Stack[-2])
0x1066: Pop(0)
0x1067: Push(".bin")
0x1068: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1069: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0x106a: Pop(1)
0x106b: Stack[-6] = Stack[-1]
0x106c: Return(); Pop(4)

0x106d: Stack[-1] = 0
0x106e: Stack[-2] = 0
0x106f: PushEmpty(object, object)
0x1070: @ FindActor(Stack[-1], Stack[-4])
0x1071: Pop(0)
0x1072: Pop(0); Push((bool) Stack[-1] == 0)
0x1073: IF (Stack[-1] == 0) GOTO 0x107a; Pop(1)

0x1074: Push("Door ")
0x1075: Pop(1); Push(Stack[-1] + Stack[-5]);
0x1076: Push(" not found")
0x1077: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1078: @ Trace(Stack[-1])
0x1079: Pop(1)
0x107a: Push("locked")
0x107b: @@ SetProperty(Stack[-1], Stack[-4])
0x107c: Pop(1)
0x107d: Return(); Pop(2)

0x107e: Stack[-1] = 0
0x107f: PushEmpty(float, float)
0x1080: @ GetGameTime(Stack[-1])
0x1081: Pop(0)
0x1082: Stack[-3] = Stack[-1]
0x1083: Return(); Pop(2)

0x1084: PushEmpty(float, float)
0x1085: @ GetGameTime(Stack[-1])
0x1086: Pop(0)
0x1087: Push((int) 1)
0x1088: PushEmpty(int)
0x1089: Push((int) 24)
0x108a: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x108b: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x108c: Return(); Pop(2)

0x108d: PushEmpty()
0x108e: PushEmpty(int)
0x108f: Call 0x1084

0x1090: Pop(0)
0x1091: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x1092: Return(); Pop(0)

0x1093: PushEmpty(bool, bool)
0x1094: PushEmpty(string)
0x1095: Stack[-1] = "No"
0x1096: Call 0x103c

0x1097: Pop(1)
0x1098: @ lshWaitForAnimEnd(Stack[-1])
0x1099: Pop(0)
0x109a: Stack[-3] = Stack[-1]
0x109b: Return(); Pop(2)

0x109c: Stack[-1] = (int) 2858
0x109d: Return(); Pop(0)

0x109e: Stack[-1] = "ui/NPC_Eva.png"
0x109f: Return(); Pop(0)

0x10a0: Stack[-1] = (bool) 1
0x10a1: Return(); Pop(0)

0x10a2: PushEmpty()
0x10a3: Push("ood1Eva3")
0x10a4: Push((int) 1)
0x10a5: @ SetVariable(Stack[-2], Stack[-1])
0x10a6: Pop(2)
0x10a7: Return(); Pop(0)

0x10a8: PushEmpty()
0x10a9: Push("KnowKaterina")
0x10aa: Push((int) 1)
0x10ab: @ SetVariable(Stack[-2], Stack[-1])
0x10ac: Pop(2)
0x10ad: Return(); Pop(0)

0x10ae: PushEmpty()
0x10af: Push("KnowKapella")
0x10b0: Push((int) 1)
0x10b1: @ SetVariable(Stack[-2], Stack[-1])
0x10b2: Pop(2)
0x10b3: Return(); Pop(0)

0x10b4: PushEmpty()
0x10b5: Push("KnowTheater")
0x10b6: Push((int) 1)
0x10b7: @ SetVariable(Stack[-2], Stack[-1])
0x10b8: Pop(2)
0x10b9: Return(); Pop(0)

0x10ba: PushEmpty()
0x10bb: Push("KnowSquareMost")
0x10bc: Push((int) 1)
0x10bd: @ SetVariable(Stack[-2], Stack[-1])
0x10be: Pop(2)
0x10bf: Return(); Pop(0)

0x10c0: PushEmpty()
0x10c1: Push("ood1Eva5")
0x10c2: Push((int) 1)
0x10c3: @ SetVariable(Stack[-2], Stack[-1])
0x10c4: Pop(2)
0x10c5: Return(); Pop(0)

0x10c6: PushEmpty()
0x10c7: Push("ood1Eva6")
0x10c8: Push((int) 1)
0x10c9: @ SetVariable(Stack[-2], Stack[-1])
0x10ca: Pop(2)
0x10cb: Return(); Pop(0)

0x10cc: PushEmpty()
0x10cd: PushEmpty(object, string, float)
0x10ce: PushEmpty(object)
0x10cf: Call 0x1387

0x10d0: Stack[-4] = Stack[-1]
0x10d1: Pop(1)
0x10d2: Stack[-2] = "pt_map_georg"
0x10d3: Stack[-1] = (int) 2
0x10d4: Call 0x1398

0x10d5: Pop(3)
0x10d6: PushEmpty(object)
0x10d7: Call 0x1387

0x10d8: Pop(0)
0x10d9: @@ ShowMap(Stack[-1])
0x10da: Pop(1)
0x10db: Return(); Pop(0)

0x10dc: PushEmpty()
0x10dd: Push("KnowUzly")
0x10de: Push((int) 1)
0x10df: @ SetVariable(Stack[-2], Stack[-1])
0x10e0: Pop(2)
0x10e1: Return(); Pop(0)

0x10e2: PushEmpty()
0x10e3: Push("ood2Eva1")
0x10e4: Push((int) 1)
0x10e5: @ SetVariable(Stack[-2], Stack[-1])
0x10e6: Pop(2)
0x10e7: Return(); Pop(0)

0x10e8: PushEmpty()
0x10e9: Push("ood2Eva2")
0x10ea: Push((int) 1)
0x10eb: @ SetVariable(Stack[-2], Stack[-1])
0x10ec: Pop(2)
0x10ed: Return(); Pop(0)

0x10ee: PushEmpty()
0x10ef: Push("ood2Eva3")
0x10f0: Push((int) 1)
0x10f1: @ SetVariable(Stack[-2], Stack[-1])
0x10f2: Pop(2)
0x10f3: Return(); Pop(0)

0x10f4: PushEmpty()
0x10f5: Push("ood2Eva4")
0x10f6: Push((int) 1)
0x10f7: @ SetVariable(Stack[-2], Stack[-1])
0x10f8: Pop(2)
0x10f9: Return(); Pop(0)

0x10fa: PushEmpty()
0x10fb: Push("KnowRebro")
0x10fc: Push((int) 1)
0x10fd: @ SetVariable(Stack[-2], Stack[-1])
0x10fe: Pop(2)
0x10ff: Return(); Pop(0)

0x1100: PushEmpty(object, object)
0x1101: Push("d2q02")
0x1102: Push((int) 1)
0x1103: @ SetVariable(Stack[-2], Stack[-1])
0x1104: Pop(2)
0x1105: PushEmpty(object)
0x1106: Call 0x1387

0x1107: Stack[-2] = Stack[-1]
0x1108: Pop(1)
0x1109: Push("d2q02EvaGotoAndrei")
0x110a: Push("pt_map_andrei")
0x110b: Push((int) 0)
0x110c: Push((int) 15272)
0x110d: PushEmpty(float)
0x110e: Call 0x107f

0x110f: Pop(0)
0x1110: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1111: Pop(5)
0x1112: Push("d2q02EvaGotoAndreiSelf")
0x1113: Push("pt_map_eva")
0x1114: Push((int) 0)
0x1115: Push((int) 15278)
0x1116: PushEmpty(float)
0x1117: Call 0x107f

0x1118: Pop(0)
0x1119: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x111a: Pop(5)
0x111b: PushEmpty()
0x111c: Call 0x13ca

0x111d: Pop(0)
0x111e: PushEmpty()
0x111f: Call 0x13da

0x1120: Pop(0)
0x1121: PushEmpty(object, string)
0x1122: Stack[-1] = "quest_d2_02"
0x1123: Call 0x1064

0x1124: Pop(2)
0x1125: Return(); Pop(2)

0x1126: Stack[-1] = 0
0x1127: PushEmpty()
0x1128: PushEmpty(string, bool)
0x1129: Stack[-2] = "icot_eva@door1"
0x112a: Stack[-1] = (bool) 0
0x112b: Call 0x106f

0x112c: Pop(2)
0x112d: Return(); Pop(0)

0x112e: PushEmpty()
0x112f: Push("KnowDubilschikov")
0x1130: Push((int) 1)
0x1131: @ SetVariable(Stack[-2], Stack[-1])
0x1132: Pop(2)
0x1133: Return(); Pop(0)

0x1134: PushEmpty(object, object)
0x1135: PushEmpty(object)
0x1136: Call 0x1387

0x1137: Stack[-2] = Stack[-1]
0x1138: Pop(1)
0x1139: Push("d1q01EvaGotoSimon")
0x113a: Push("pt_map_georg")
0x113b: Push((int) 1)
0x113c: Push((int) 7778)
0x113d: PushEmpty(float)
0x113e: Call 0x107f

0x113f: Pop(0)
0x1140: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1141: Pop(5)
0x1142: Push("d1EvaGotoMaria")
0x1143: Push("pt_map_maria")
0x1144: Push((int) 3)
0x1145: Push((int) 8628)
0x1146: PushEmpty(float)
0x1147: Call 0x107f

0x1148: Pop(0)
0x1149: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x114a: Pop(5)
0x114b: Push("d1EvaInfo")
0x114c: Push("pt_map_eva")
0x114d: Push((int) 3)
0x114e: Push((int) 8630)
0x114f: PushEmpty(float)
0x1150: Call 0x107f

0x1151: Pop(0)
0x1152: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1153: Pop(5)
0x1154: Return(); Pop(2)

0x1155: Stack[-1] = 0
0x1156: PushEmpty()
0x1157: Push("KnowGorny")
0x1158: Push((int) 1)
0x1159: @ SetVariable(Stack[-2], Stack[-1])
0x115a: Pop(2)
0x115b: Return(); Pop(0)

0x115c: PushEmpty()
0x115d: Push("KnowSobor")
0x115e: Push((int) 1)
0x115f: @ SetVariable(Stack[-2], Stack[-1])
0x1160: Pop(2)
0x1161: Return(); Pop(0)

0x1162: PushEmpty()
0x1163: PushEmpty(object, string, float)
0x1164: PushEmpty(object)
0x1165: Call 0x1387

0x1166: Stack[-4] = Stack[-1]
0x1167: Pop(1)
0x1168: Stack[-2] = "pt_map_theater"
0x1169: Stack[-1] = (int) 2
0x116a: Call 0x1398

0x116b: Pop(3)
0x116c: PushEmpty(object)
0x116d: Call 0x1387

0x116e: Pop(0)
0x116f: @@ ShowMap(Stack[-1])
0x1170: Pop(1)
0x1171: Return(); Pop(0)

0x1172: PushEmpty(object, object)
0x1173: PushEmpty(object)
0x1174: Call 0x1387

0x1175: Stack[-2] = Stack[-1]
0x1176: Pop(1)
0x1177: Push("d1q01EvaAboutMark")
0x1178: Push("pt_map_theater")
0x1179: Push((int) 1)
0x117a: Push((int) 8636)
0x117b: PushEmpty(float)
0x117c: Call 0x107f

0x117d: Pop(0)
0x117e: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x117f: Pop(5)
0x1180: Return(); Pop(2)

0x1181: Stack[-1] = 0
0x1182: PushEmpty(object, object)
0x1183: PushEmpty(object)
0x1184: Call 0x1387

0x1185: Stack[-2] = Stack[-1]
0x1186: Pop(1)
0x1187: Push("d1EvaAboutKapella")
0x1188: Push("pt_map_kapella")
0x1189: Push((int) 3)
0x118a: Push((int) 8637)
0x118b: PushEmpty(float)
0x118c: Call 0x107f

0x118d: Pop(0)
0x118e: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x118f: Pop(5)
0x1190: Push("d1EvaAboutKaterina")
0x1191: Push("pt_map_katerina")
0x1192: Push((int) 3)
0x1193: Push((int) 8639)
0x1194: PushEmpty(float)
0x1195: Call 0x107f

0x1196: Pop(0)
0x1197: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1198: Pop(5)
0x1199: Return(); Pop(2)

0x119a: Stack[-1] = 0
0x119b: PushEmpty()
0x119c: Push("KnowStation")
0x119d: Push((int) 1)
0x119e: @ SetVariable(Stack[-2], Stack[-1])
0x119f: Pop(2)
0x11a0: Return(); Pop(0)

0x11a1: PushEmpty()
0x11a2: Push("playsound")
0x11a3: Push("mapmark")
0x11a4: @ TriggerWorld(Stack[-2], Stack[-1])
0x11a5: Pop(2)
0x11a6: Return(); Pop(0)

0x11a7: PushEmpty()
0x11a8: Push("ood1EvaIntro1")
0x11a9: Push((int) 1)
0x11aa: @ SetVariable(Stack[-2], Stack[-1])
0x11ab: Pop(2)
0x11ac: Return(); Pop(0)

0x11ad: PushEmpty()
0x11ae: Push("KnowJulia")
0x11af: Push((int) 1)
0x11b0: @ SetVariable(Stack[-2], Stack[-1])
0x11b1: Pop(2)
0x11b2: Return(); Pop(0)

0x11b3: PushEmpty()
0x11b4: Push("KnowNevod")
0x11b5: Push((int) 1)
0x11b6: @ SetVariable(Stack[-2], Stack[-1])
0x11b7: Pop(2)
0x11b8: Return(); Pop(0)

0x11b9: PushEmpty()
0x11ba: Push("KnowViktor")
0x11bb: Push((int) 1)
0x11bc: @ SetVariable(Stack[-2], Stack[-1])
0x11bd: Pop(2)
0x11be: Return(); Pop(0)

0x11bf: PushEmpty()
0x11c0: Push("ood1Eva4")
0x11c1: Push((int) 1)
0x11c2: @ SetVariable(Stack[-2], Stack[-1])
0x11c3: Pop(2)
0x11c4: Return(); Pop(0)

0x11c5: PushEmpty()
0x11c6: Push("ood1EvaIntro2")
0x11c7: Push((int) 1)
0x11c8: @ SetVariable(Stack[-2], Stack[-1])
0x11c9: Pop(2)
0x11ca: Return(); Pop(0)

0x11cb: PushEmpty()
0x11cc: Push("ood1Eva1")
0x11cd: Push((int) 1)
0x11ce: @ SetVariable(Stack[-2], Stack[-1])
0x11cf: Pop(2)
0x11d0: Return(); Pop(0)

0x11d1: PushEmpty()
0x11d2: Push("ood1Eva2")
0x11d3: Push((int) 1)
0x11d4: @ SetVariable(Stack[-2], Stack[-1])
0x11d5: Pop(2)
0x11d6: Return(); Pop(0)

0x11d7: PushEmpty()
0x11d8: Push("KnowEva")
0x11d9: Push((int) 1)
0x11da: @ SetVariable(Stack[-2], Stack[-1])
0x11db: Pop(2)
0x11dc: Return(); Pop(0)

0x11dd: PushEmpty()
0x11de: Push("KnowGeorg")
0x11df: Push((int) 1)
0x11e0: @ SetVariable(Stack[-2], Stack[-1])
0x11e1: Pop(2)
0x11e2: Return(); Pop(0)

0x11e3: PushEmpty()
0x11e4: Push("ood6Eva1")
0x11e5: Push((int) 1)
0x11e6: @ SetVariable(Stack[-2], Stack[-1])
0x11e7: Pop(2)
0x11e8: Return(); Pop(0)

0x11e9: PushEmpty()
0x11ea: Push("KnowMaria")
0x11eb: Push((int) 1)
0x11ec: @ SetVariable(Stack[-2], Stack[-1])
0x11ed: Pop(2)
0x11ee: Return(); Pop(0)

0x11ef: PushEmpty()
0x11f0: Push("KnowMark")
0x11f1: Push((int) 1)
0x11f2: @ SetVariable(Stack[-2], Stack[-1])
0x11f3: Pop(2)
0x11f4: Return(); Pop(0)

0x11f5: PushEmpty()
0x11f6: PushEmpty(object, string, float)
0x11f7: PushEmpty(object)
0x11f8: Call 0x1387

0x11f9: Stack[-4] = Stack[-1]
0x11fa: Pop(1)
0x11fb: Stack[-2] = "pt_map_andrei"
0x11fc: Stack[-1] = (int) 2
0x11fd: Call 0x1398

0x11fe: Pop(3)
0x11ff: PushEmpty(object)
0x1200: Call 0x1387

0x1201: Pop(0)
0x1202: @@ ShowMap(Stack[-1])
0x1203: Pop(1)
0x1204: Return(); Pop(0)

0x1205: PushEmpty(object, object)
0x1206: PushEmpty(object)
0x1207: Call 0x1387

0x1208: Stack[-2] = Stack[-1]
0x1209: Pop(1)
0x120a: Push("d2q02EvaGotoMaria")
0x120b: Push("pt_map_maria")
0x120c: Push((int) 0)
0x120d: Push((int) 15274)
0x120e: PushEmpty(float)
0x120f: Call 0x107f

0x1210: Pop(0)
0x1211: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1212: Pop(5)
0x1213: Return(); Pop(2)

0x1214: Stack[-1] = 0
0x1215: PushEmpty()
0x1216: PushEmpty(object, string, float)
0x1217: PushEmpty(object)
0x1218: Call 0x1387

0x1219: Stack[-4] = Stack[-1]
0x121a: Pop(1)
0x121b: Stack[-2] = "pt_map_maria"
0x121c: Stack[-1] = (int) 2
0x121d: Call 0x1398

0x121e: Pop(3)
0x121f: PushEmpty(object)
0x1220: Call 0x1387

0x1221: Pop(0)
0x1222: @@ ShowMap(Stack[-1])
0x1223: Pop(1)
0x1224: Return(); Pop(0)

0x1225: PushEmpty()
0x1226: Push("ood3Eva1")
0x1227: Push((int) 1)
0x1228: @ SetVariable(Stack[-2], Stack[-1])
0x1229: Pop(2)
0x122a: Return(); Pop(0)

0x122b: PushEmpty()
0x122c: Push("ood4Eva1")
0x122d: Push((int) 1)
0x122e: @ SetVariable(Stack[-2], Stack[-1])
0x122f: Pop(2)
0x1230: Return(); Pop(0)

0x1231: PushEmpty()
0x1232: Push("KnowStamatins")
0x1233: Push((int) 1)
0x1234: @ SetVariable(Stack[-2], Stack[-1])
0x1235: Pop(2)
0x1236: Return(); Pop(0)

0x1237: PushEmpty()
0x1238: Push("KnowMnogogrannik")
0x1239: Push((int) 1)
0x123a: @ SetVariable(Stack[-2], Stack[-1])
0x123b: Pop(2)
0x123c: Return(); Pop(0)

0x123d: PushEmpty()
0x123e: PushEmpty(int, string)
0x123f: Stack[-1] = "ood1EvaIntro1"
0x1240: Call 0x105f

0x1241: Pop(1)
0x1242: Push((int) 0)
0x1243: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1244: IF (Stack[-1] == 0) GOTO 0x1247; Pop(1)

0x1245: Stack[-2] = (bool) 1
0x1246: Return(); Pop(0)

0x1247: Stack[-2] = (bool) 0
0x1248: Return(); Pop(0)

0x1249: PushEmpty()
0x124a: PushEmpty(int, string)
0x124b: Stack[-1] = "d1q01FirstGeorgVisit"
0x124c: Call 0x105f

0x124d: Pop(1)
0x124e: Push((int) 1)
0x124f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1250: IF (Stack[-1] == 0) GOTO 0x1253; Pop(1)

0x1251: Stack[-2] = (bool) 1
0x1252: Return(); Pop(0)

0x1253: Stack[-2] = (bool) 0
0x1254: Return(); Pop(0)

0x1255: PushEmpty()
0x1256: PushEmpty(int, string)
0x1257: Stack[-1] = "ood1Eva5"
0x1258: Call 0x105f

0x1259: Pop(1)
0x125a: Push((int) 0)
0x125b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x125c: IF (Stack[-1] == 0) GOTO 0x125f; Pop(1)

0x125d: Stack[-2] = (bool) 1
0x125e: Return(); Pop(0)

0x125f: Stack[-2] = (bool) 0
0x1260: Return(); Pop(0)

0x1261: PushEmpty()
0x1262: PushEmpty(int, string)
0x1263: Stack[-1] = "ood1Eva6"
0x1264: Call 0x105f

0x1265: Pop(1)
0x1266: Push((int) 0)
0x1267: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1268: IF (Stack[-1] == 0) GOTO 0x126b; Pop(1)

0x1269: Stack[-2] = (bool) 1
0x126a: Return(); Pop(0)

0x126b: Stack[-2] = (bool) 0
0x126c: Return(); Pop(0)

0x126d: PushEmpty()
0x126e: PushEmpty(int, string)
0x126f: Stack[-1] = "ood1EvaIntro2"
0x1270: Call 0x105f

0x1271: Pop(1)
0x1272: Push((int) 0)
0x1273: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1274: IF (Stack[-1] == 0) GOTO 0x1277; Pop(1)

0x1275: Stack[-2] = (bool) 1
0x1276: Return(); Pop(0)

0x1277: Stack[-2] = (bool) 0
0x1278: Return(); Pop(0)

0x1279: PushEmpty()
0x127a: PushEmpty(int, string)
0x127b: Stack[-1] = "ood2Eva1"
0x127c: Call 0x105f

0x127d: Pop(1)
0x127e: Push((int) 0)
0x127f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1280: IF (Stack[-1] == 0) GOTO 0x1283; Pop(1)

0x1281: Stack[-2] = (bool) 1
0x1282: Return(); Pop(0)

0x1283: Stack[-2] = (bool) 0
0x1284: Return(); Pop(0)

0x1285: PushEmpty()
0x1286: PushEmpty(int, string)
0x1287: Stack[-1] = "ood2Eva2"
0x1288: Call 0x105f

0x1289: Pop(1)
0x128a: Push((int) 0)
0x128b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x128c: IF (Stack[-1] == 0) GOTO 0x128f; Pop(1)

0x128d: Stack[-2] = (bool) 1
0x128e: Return(); Pop(0)

0x128f: Stack[-2] = (bool) 0
0x1290: Return(); Pop(0)

0x1291: PushEmpty()
0x1292: PushEmpty(int, string)
0x1293: Stack[-1] = "ood2Eva3"
0x1294: Call 0x105f

0x1295: Pop(1)
0x1296: Push((int) 0)
0x1297: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1298: IF (Stack[-1] == 0) GOTO 0x129b; Pop(1)

0x1299: Stack[-2] = (bool) 1
0x129a: Return(); Pop(0)

0x129b: Stack[-2] = (bool) 0
0x129c: Return(); Pop(0)

0x129d: PushEmpty()
0x129e: PushEmpty(int, string)
0x129f: Stack[-1] = "ood2Eva4"
0x12a0: Call 0x105f

0x12a1: Pop(1)
0x12a2: Push((int) 0)
0x12a3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x12a4: IF (Stack[-1] == 0) GOTO 0x12a7; Pop(1)

0x12a5: Stack[-2] = (bool) 1
0x12a6: Return(); Pop(0)

0x12a7: Stack[-2] = (bool) 0
0x12a8: Return(); Pop(0)

0x12a9: PushEmpty()
0x12aa: PushEmpty(int, string)
0x12ab: Stack[-1] = "d2q02"
0x12ac: Call 0x105f

0x12ad: Pop(1)
0x12ae: Push((int) 1000)
0x12af: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x12b0: IF (Stack[-1] == 0) GOTO 0x12b3; Pop(1)

0x12b1: Stack[-2] = (bool) 1
0x12b2: Return(); Pop(0)

0x12b3: Stack[-2] = (bool) 0
0x12b4: Return(); Pop(0)

0x12b5: PushEmpty()
0x12b6: PushEmpty(int, string)
0x12b7: Stack[-1] = "d2q02"
0x12b8: Call 0x105f

0x12b9: Pop(1)
0x12ba: Push((int) 3)
0x12bb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x12bc: IF (Stack[-1] == 0) GOTO 0x12bf; Pop(1)

0x12bd: Stack[-2] = (bool) 1
0x12be: Return(); Pop(0)

0x12bf: Stack[-2] = (bool) 0
0x12c0: Return(); Pop(0)

0x12c1: PushEmpty()
0x12c2: PushEmpty(int, string)
0x12c3: Stack[-1] = "d2q02"
0x12c4: Call 0x105f

0x12c5: Pop(1)
0x12c6: Push((int) 5)
0x12c7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x12c8: IF (Stack[-1] == 0) GOTO 0x12cb; Pop(1)

0x12c9: Stack[-2] = (bool) 1
0x12ca: Return(); Pop(0)

0x12cb: Stack[-2] = (bool) 0
0x12cc: Return(); Pop(0)

0x12cd: PushEmpty()
0x12ce: PushEmpty(int, string)
0x12cf: Stack[-1] = "ood1Eva1"
0x12d0: Call 0x105f

0x12d1: Pop(1)
0x12d2: Push((int) 0)
0x12d3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x12d4: IF (Stack[-1] == 0) GOTO 0x12d7; Pop(1)

0x12d5: Stack[-2] = (bool) 1
0x12d6: Return(); Pop(0)

0x12d7: Stack[-2] = (bool) 0
0x12d8: Return(); Pop(0)

0x12d9: PushEmpty()
0x12da: PushEmpty(int, string)
0x12db: Stack[-1] = "ood1Eva4"
0x12dc: Call 0x105f

0x12dd: Pop(1)
0x12de: Push((int) 0)
0x12df: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x12e0: IF (Stack[-1] == 0) GOTO 0x12e3; Pop(1)

0x12e1: Stack[-2] = (bool) 1
0x12e2: Return(); Pop(0)

0x12e3: Stack[-2] = (bool) 0
0x12e4: Return(); Pop(0)

0x12e5: PushEmpty()
0x12e6: PushEmpty(int, string)
0x12e7: Stack[-1] = "ood1Eva2"
0x12e8: Call 0x105f

0x12e9: Pop(1)
0x12ea: Push((int) 0)
0x12eb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x12ec: IF (Stack[-1] == 0) GOTO 0x12ef; Pop(1)

0x12ed: Stack[-2] = (bool) 1
0x12ee: Return(); Pop(0)

0x12ef: Stack[-2] = (bool) 0
0x12f0: Return(); Pop(0)

0x12f1: PushEmpty()
0x12f2: PushEmpty(int, string)
0x12f3: Stack[-1] = "d2q02"
0x12f4: Call 0x105f

0x12f5: Pop(1)
0x12f6: Push((int) 0)
0x12f7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x12f8: IF (Stack[-1] == 0) GOTO 0x12fb; Pop(1)

0x12f9: Stack[-2] = (bool) 1
0x12fa: Return(); Pop(0)

0x12fb: Stack[-2] = (bool) 0
0x12fc: Return(); Pop(0)

0x12fd: PushEmpty()
0x12fe: PushEmpty(int, string)
0x12ff: Stack[-1] = "d6q01"
0x1300: Call 0x105f

0x1301: Pop(1)
0x1302: Push((int) 1)
0x1303: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1304: IF (Stack[-1] == 0) GOTO 0x1307; Pop(1)

0x1305: Stack[-2] = (bool) 1
0x1306: Return(); Pop(0)

0x1307: Stack[-2] = (bool) 0
0x1308: Return(); Pop(0)

0x1309: PushEmpty()
0x130a: PushEmpty(int, string)
0x130b: Stack[-1] = "ood1Eva3"
0x130c: Call 0x105f

0x130d: Pop(1)
0x130e: Push((int) 0)
0x130f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1310: IF (Stack[-1] == 0) GOTO 0x1313; Pop(1)

0x1311: Stack[-2] = (bool) 1
0x1312: Return(); Pop(0)

0x1313: Stack[-2] = (bool) 0
0x1314: Return(); Pop(0)

0x1315: PushEmpty()
0x1316: PushEmpty(int, string)
0x1317: Stack[-1] = "ood6Eva1"
0x1318: Call 0x105f

0x1319: Pop(1)
0x131a: Push((int) 0)
0x131b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x131c: IF (Stack[-1] == 0) GOTO 0x131f; Pop(1)

0x131d: Stack[-2] = (bool) 1
0x131e: Return(); Pop(0)

0x131f: Stack[-2] = (bool) 0
0x1320: Return(); Pop(0)

0x1321: PushEmpty()
0x1322: PushEmpty(int, string)
0x1323: Stack[-1] = "KnowJulia"
0x1324: Call 0x105f

0x1325: Pop(1)
0x1326: Push((int) 1)
0x1327: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1328: IF (Stack[-1] == 0) GOTO 0x132b; Pop(1)

0x1329: Stack[-2] = (bool) 1
0x132a: Return(); Pop(0)

0x132b: Stack[-2] = (bool) 0
0x132c: Return(); Pop(0)

0x132d: PushEmpty()
0x132e: PushEmpty(int, string)
0x132f: Stack[-1] = "ood3Eva1"
0x1330: Call 0x105f

0x1331: Pop(1)
0x1332: Push((int) 0)
0x1333: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1334: IF (Stack[-1] == 0) GOTO 0x1337; Pop(1)

0x1335: Stack[-2] = (bool) 1
0x1336: Return(); Pop(0)

0x1337: Stack[-2] = (bool) 0
0x1338: Return(); Pop(0)

0x1339: PushEmpty()
0x133a: PushEmpty(int, string)
0x133b: Stack[-1] = "d4q02"
0x133c: Call 0x105f

0x133d: Pop(1)
0x133e: Push((int) 0)
0x133f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1340: IF (Stack[-1] == 0) GOTO 0x1343; Pop(1)

0x1341: Stack[-2] = (bool) 1
0x1342: Return(); Pop(0)

0x1343: Stack[-2] = (bool) 0
0x1344: Return(); Pop(0)

0x1345: PushEmpty()
0x1346: PushEmpty(int, string)
0x1347: Stack[-1] = "ood4Eva1"
0x1348: Call 0x105f

0x1349: Pop(1)
0x134a: Push((int) 0)
0x134b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x134c: IF (Stack[-1] == 0) GOTO 0x134f; Pop(1)

0x134d: Stack[-2] = (bool) 1
0x134e: Return(); Pop(0)

0x134f: Stack[-2] = (bool) 0
0x1350: Return(); Pop(0)

0x1351: PushEmpty()
0x1352: PushEmpty(int, string)
0x1353: Stack[-1] = "KnowStamatins"
0x1354: Call 0x105f

0x1355: Pop(1)
0x1356: Push((int) 1)
0x1357: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1358: IF (Stack[-1] == 0) GOTO 0x135b; Pop(1)

0x1359: Stack[-2] = (bool) 1
0x135a: Return(); Pop(0)

0x135b: Stack[-2] = (bool) 0
0x135c: Return(); Pop(0)

0x135d: PushEmpty(object, object)
0x135e: @ GetDiaryRoot(Stack[-1])
0x135f: Pop(0)
0x1360: Pop(0); Push((bool) Stack[-1] == 0)
0x1361: IF (Stack[-1] == 0) GOTO 0x1367; Pop(1)

0x1362: Push("Can't retrieve diary root")
0x1363: @ Trace(Stack[-1])
0x1364: Pop(1)
0x1365: Stack[-3] = (bool) 0
0x1366: Return(); Pop(2)

0x1367: Stack[-3] = Stack[-1]
0x1368: Return(); Pop(2)

0x1369: Stack[-1] = 0
0x136a: PushEmpty(object, object, int, object, object, int)
0x136b: PushEmpty(object)
0x136c: Call 0x135d

0x136d: Stack[-4] = Stack[-1]
0x136e: Pop(1)
0x136f: @@ Find(Stack[-7], Stack[-2])
0x1370: Pop(0)
0x1371: Pop(0); Push((bool) Stack[-2] == 0)
0x1372: IF (Stack[-1] == 0) GOTO 0x1379; Pop(1)

0x1373: Push("Can't find diary parent with id: ")
0x1374: Pop(1); Push(Stack[-1] + Stack[-8]);
0x1375: @ Trace(Stack[-1])
0x1376: Pop(1)
0x1377: Stack[-9] = (bool) 0
0x1378: Return(); Pop(6)

0x1379: @@ AddChild(Stack[-8])
0x137a: Pop(0)
0x137b: Push("player_diary")
0x137c: Push((int) 1)
0x137d: @ SetVariable(Stack[-2], Stack[-1])
0x137e: Pop(2)
0x137f: @@ GetCategory(Stack[-1])
0x1380: Pop(0)
0x1381: @ SetDiarySection(Stack[-1])
0x1382: Pop(0)
0x1383: Stack[-9] = (bool) 0
0x1384: Return(); Pop(6)

0x1385: Stack[-2] = 0
0x1386: Stack[-3] = 0
0x1387: PushEmpty(object, object, object, object)
0x1388: @ GetMainOutdoorScene(Stack[-2])
0x1389: Pop(0)
0x138a: Pop(0); Push((bool) Stack[-2] == 0)
0x138b: IF (Stack[-1] == 0) GOTO 0x1392; Pop(1)

0x138c: Push("Can't find main outdoor scene")
0x138d: @ Trace(Stack[-1])
0x138e: Pop(1)
0x138f: Stack[-1] = 0
0x1390: Stack[-5] = Stack[-1]
0x1391: Return(); Pop(4)

0x1392: @@ GetMap(Stack[-1])
0x1393: Pop(0)
0x1394: Stack[-5] = Stack[-1]
0x1395: Return(); Pop(4)

0x1396: Stack[-1] = 0
0x1397: Stack[-2] = 0
0x1398: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x1399: @ GetMainOutdoorScene(Stack[-2])
0x139a: Pop(0)
0x139b: Pop(0); Push((bool) Stack[-2] == 0)
0x139c: IF (Stack[-1] == 0) GOTO 0x13a1; Pop(1)

0x139d: Push("Can't find main outdoor scene")
0x139e: @ Trace(Stack[-1])
0x139f: Pop(1)
0x13a0: Return(); Pop(8)

0x13a1: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x13a2: Pop(0)
0x13a3: Pop(0); Push((bool) Stack[-1] == 0)
0x13a4: IF (Stack[-1] == 0) GOTO 0x13ab; Pop(1)

0x13a5: Push("Warning: outdoor scene locator ")
0x13a6: Pop(1); Push(Stack[-1] + Stack[-11]);
0x13a7: Push(" doesnt exist")
0x13a8: Pop(2); Push(Stack[-2] + Stack[-1]);
0x13a9: @ Trace(Stack[-1])
0x13aa: Pop(1)
0x13ab: @@ GetMap(Stack[-11])
0x13ac: Pop(0)
0x13ad: Pop(0); Push((bool) Stack[-11] == 0)
0x13ae: IF (Stack[-1] == 0) GOTO 0x13b3; Pop(1)

0x13af: Push("Can't find map")
0x13b0: @ Trace(Stack[-1])
0x13b1: Pop(1)
0x13b2: Return(); Pop(8)

0x13b3: Push(CvectorIndex(Stack[-4], 0))
0x13b4: Push(CvectorIndex(Stack[-5], 2))
0x13b5: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x13b6: Pop(2)
0x13b7: Return(); Pop(8)

0x13b8: Stack[-2] = 0
0x13b9: PushEmpty(int, int)
0x13ba: Push("player")
0x13bb: @ GetVariable(Stack[-1], Stack[-2])
0x13bc: Pop(1)
0x13bd: Push((int) 0)
0x13be: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x13bf: IF (Stack[-1] == 0) GOTO 0x13c3; Pop(1)

0x13c0: Stack[-3] = (int) 200001
0x13c1: Return(); Pop(2)

0x13c2: GOTO 0x13c8

0x13c3: Push((int) 1)
0x13c4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x13c5: IF (Stack[-1] == 0) GOTO 0x13c8; Pop(1)

0x13c6: Stack[-3] = (int) 200002
0x13c7: Return(); Pop(2)

0x13c8: Stack[-3] = (int) 200003
0x13c9: Return(); Pop(2)

0x13ca: PushEmpty(object, object)
0x13cb: Push("Adding diary entry")
0x13cc: @ Trace(Stack[-1])
0x13cd: Pop(1)
0x13ce: Push((int) 11)
0x13cf: Push((int) 2)
0x13d0: Push((int) 3095)
0x13d1: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x13d2: Pop(3)
0x13d3: PushEmpty(bool, object, int)
0x13d4: Stack[-2] = Stack[-4]
0x13d5: Stack[-1] = (int) -1
0x13d6: Call 0x136a

0x13d7: Pop(3)
0x13d8: Return(); Pop(2)

0x13d9: Stack[-1] = 0
0x13da: PushEmpty(object, object)
0x13db: Push("Adding diary entry")
0x13dc: @ Trace(Stack[-1])
0x13dd: Pop(1)
0x13de: Push((int) 57)
0x13df: Push((int) 2)
0x13e0: Push((int) 12139)
0x13e1: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x13e2: Pop(3)
0x13e3: PushEmpty(bool, object, int)
0x13e4: Stack[-2] = Stack[-4]
0x13e5: Stack[-1] = (int) 11
0x13e6: Call 0x136a

0x13e7: Pop(3)
0x13e8: Return(); Pop(2)

0x13e9: Stack[-1] = 0
0x13ea: Return(); Pop(0)

0x13eb: PushEmpty()
0x13ec: PushEmpty(bool, int)
0x13ed: Stack[-1] = (int) 1
0x13ee: Call 0x108d

0x13ef: Pop(1)
0x13f0: IF (Stack[-1] == 0) GOTO 0x1406; Pop(1)

0x13f1: PushEmpty(int, string)
0x13f2: Stack[-1] = "d1q01"
0x13f3: Call 0x105f

0x13f4: Pop(1)
0x13f5: Push((int) 0)
0x13f6: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x13f7: IF (Stack[-1] == 0) GOTO 0x13ff; Pop(1)

0x13f8: PushEmpty(int, object)
0x13f9: Stack[-1] = Stack[-3]
0x13fa: Push(-2, 1); TaskCall(4)
0x13fb: Call 0x1a5

0x13fc: Pop(-2, 1); TaskReturn
0x13fd: Pop(2)
0x13fe: Return(); Pop(0)

0x13ff: PushEmpty(int, object)
0x1400: Stack[-1] = Stack[-3]
0x1401: Push(-2, 1); TaskCall(6)
0x1402: Call 0x4f2

0x1403: Pop(-2, 1); TaskReturn
0x1404: Pop(2)
0x1405: Return(); Pop(0)

0x1406: PushEmpty(bool, int)
0x1407: Stack[-1] = (int) 2
0x1408: Call 0x108d

0x1409: Pop(1)
0x140a: IF (Stack[-1] == 0) GOTO 0x1412; Pop(1)

0x140b: PushEmpty(int, object)
0x140c: Stack[-1] = Stack[-3]
0x140d: Push(-2, 1); TaskCall(8)
0x140e: Call 0xa11

0x140f: Pop(-2, 1); TaskReturn
0x1410: Pop(2)
0x1411: Return(); Pop(0)

0x1412: PushEmpty(bool, int)
0x1413: Stack[-1] = (int) 3
0x1414: Call 0x108d

0x1415: Pop(1)
0x1416: IF (Stack[-1] == 0) GOTO 0x141e; Pop(1)

0x1417: PushEmpty(int, object)
0x1418: Stack[-1] = Stack[-3]
0x1419: Push(-2, 1); TaskCall(10)
0x141a: Call 0xd49

0x141b: Pop(-2, 1); TaskReturn
0x141c: Pop(2)
0x141d: Return(); Pop(0)

0x141e: PushEmpty(bool, int)
0x141f: Stack[-1] = (int) 4
0x1420: Call 0x108d

0x1421: Pop(1)
0x1422: IF (Stack[-1] == 0) GOTO 0x142a; Pop(1)

0x1423: PushEmpty(int, object)
0x1424: Stack[-1] = Stack[-3]
0x1425: Push(-2, 1); TaskCall(12)
0x1426: Call 0xe86

0x1427: Pop(-2, 1); TaskReturn
0x1428: Pop(2)
0x1429: Return(); Pop(0)

0x142a: PushEmpty(bool, int)
0x142b: Stack[-1] = (int) 6
0x142c: Call 0x108d

0x142d: Pop(1)
0x142e: IF (Stack[-1] == 0) GOTO 0x1436; Pop(1)

0x142f: PushEmpty(int, object)
0x1430: Stack[-1] = Stack[-3]
0x1431: Push(-2, 1); TaskCall(2)
0x1432: Call 0x31

0x1433: Pop(-2, 1); TaskReturn
0x1434: Pop(2)
0x1435: Return(); Pop(0)

0x1436: PushEmpty(bool)
0x1437: Call 0x1093

0x1438: Pop(1)
0x1439: Return(); Pop(0)

