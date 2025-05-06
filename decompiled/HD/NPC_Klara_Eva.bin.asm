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
	all
	idle
	Love
	Modesty
	Fear
	player
	GetPosition
	GetProperty
	SetProperty
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	m
	Can't find lsh animation : 
	add
	money
	Money
	ui/NPC_Eva.png
	ui/NPC_Eva_b.png
	k3q03EvaGotoSklad
	pt_region01_center01
	AddMark
	k3q02
	ook3Eva1
	ook6Eva1
	ook6Eva2
	SelectWeapon
	quest_k6_01
	unlock_eva
	ook11Eva1
	money1000 is given
	playsound
	givemoney
	ShowMap
	giveitem
	k3q03
	k6q01
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
	mt_eva

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
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	TriggerWorld (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x919
RunTask = 12

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa1 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1a0 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x4f0 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x6bb Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x7f1 Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x8ef Vars = (int, int)
	GTASK_12 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x962 Vars = (int)
		EVENT_6 Op = 0x988 Vars = ()
		EVENT_5 Op = 0x997 Vars = ()
		EVENT_45 Op = 0x9a4 Vars = (bool)
		EVENT_0 Op = 0x9b0 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0xa40

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0xbc4

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0xbc2

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0xbc6

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0xbc8

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0xd4c

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
0x31: Call2 0xb56

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0xa97

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
0x48: Call2 0xa85

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
0x56: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x57: PushEmpty(string)
0x58: Stack[-1] = "Neutral"
0x59: Call2 0x8b

0x5a: Pop(1)
0x5b: Push((int) 525477)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: Push((int) 529299)
0x61: Push((int) 30754)
0x62: Push((int) 30753)
0x63: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64: Pop(3)
0x65: Push((int) 525478)
0x66: Push((int) -1)
0x67: Push((int) 26834)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: GOTO 0x6d

0x6b: Return(); Pop(0)

0x6c: GOTO 0x55

0x6d: PushEmpty(bool)
0x6e: Call2 0xbca

0x6f: Pop(0)
0x70: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x71: @ lshWaitForAnimEnd()
0x72: Pop(0)
0x73: Push( Stack[3 + Tasks[-1].StackPointer] )
0x74: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x75: GOTO 0x7b

0x76: PushEmpty(string)
0x77: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x78: Call2 0xb21

0x79: Pop(1)
0x7a: GOTO 0x71

0x7b: GOTO 0x8a

0x7c: Push("all")
0x7d: Push("idle")
0x7e: @ PlayAnimation(Stack[-2], Stack[-1])
0x7f: Pop(2)
0x80: @ WaitForAnimEnd()
0x81: Pop(0)
0x82: Push( Stack[3 + Tasks[-1].StackPointer] )
0x83: IF (Stack[-1] == 0) GOTO 0x85; Pop(1)

0x84: GOTO 0x8a

0x85: Push("all")
0x86: Push("idle")
0x87: @ PlayAnimation(Stack[-2], Stack[-1])
0x88: Pop(2)
0x89: GOTO 0x80

0x8a: Return(); Pop(0)

0x8b: PushEmpty()
0x8c: PushEmpty(bool)
0x8d: Call2 0xbca

0x8e: Pop(0)
0x8f: Pop(1); Push((bool) Stack[-1] == 0)
0x90: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x91: Return(); Pop(0)

0x92: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x93: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x94: Return(); Pop(0)

0x95: PushEmpty(string, bool)
0x96: Stack[-2] = Stack[-3]
0x97: Push("")
0x98: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x99: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x9a: Stack[-1] = (bool) 0
0x9b: GOTO 0x9d

0x9c: Stack[-1] = (bool) 1
0x9d: Call2 0xb31

0x9e: Pop(2)
0x9f: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa0: Return(); Pop(0)

0xa1: PushEmpty()
0xa2: Push((int) 1)
0xa3: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xa4: PushEmpty()
0xa5: Call2 0xb4f

0xa6: Pop(0)
0xa7: Push((int) 26833)
0xa8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa9: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xaa: PushEmpty(string)
0xab: Stack[-1] = "Neutral"
0xac: Call2 0x8b

0xad: Pop(1)
0xae: Push((int) 525477)
0xaf: @@ SetMessage(Stack[-1])
0xb0: Pop(1)
0xb1: @@ ClearReplies()
0xb2: Pop(0)
0xb3: Push((int) 529299)
0xb4: Push((int) 30754)
0xb5: Push((int) 30753)
0xb6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb7: Pop(3)
0xb8: Push((int) 525478)
0xb9: Push((int) -1)
0xba: Push((int) 26834)
0xbb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc: Pop(3)
0xbd: Return(); Pop(0)

0xbe: Push((int) 30754)
0xbf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc0: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xc1: PushEmpty(string)
0xc2: Stack[-1] = "Neutral"
0xc3: Call2 0x8b

0xc4: Pop(1)
0xc5: Push((int) 529300)
0xc6: @@ SetMessage(Stack[-1])
0xc7: Pop(1)
0xc8: @@ ClearReplies()
0xc9: Pop(0)
0xca: Push((int) 529301)
0xcb: Push((int) -1)
0xcc: Push((int) 30755)
0xcd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xce: Pop(3)
0xcf: Push((int) 529302)
0xd0: Push((int) -1)
0xd1: Push((int) 30756)
0xd2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd3: Pop(3)
0xd4: Return(); Pop(0)

0xd5: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xd6: PushEmpty(bool)
0xd7: Call2 0xbca

0xd8: Pop(0)
0xd9: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xda: @ lshStopAnimation()
0xdb: Pop(0)
0xdc: GOTO 0xdf

0xdd: @ StopAnimation()
0xde: Pop(0)
0xdf: Return(); Pop(0)

0xe0: GOTO 0xa2

0xe1: Return(); Pop(0)

0xe2: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xe3: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xe4: PushEmpty(bool, object, float)
0xe5: Stack[-2] = Stack[-12]
0xe6: Stack[-1] = (float) 70.0
0xe7: Call2 0xa40

0xe8: Pop(2)
0xe9: Pop(1); Push((bool) Stack[-1] == 0)
0xea: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xeb: Stack[-10] = (int) -2
0xec: Return(); Pop(8)

0xed: @ CreateDialog(Stack[-4])
0xee: Pop(0)
0xef: PushEmpty(int)
0xf0: Call2 0xbc4

0xf1: Pop(0)
0xf2: @@ SetNPCName(Stack[-1])
0xf3: Pop(1)
0xf4: PushEmpty(int)
0xf5: Call2 0xbc2

0xf6: Pop(0)
0xf7: @@ SetNPCDescription(Stack[-1])
0xf8: Pop(1)
0xf9: PushEmpty(string)
0xfa: Call2 0xbc6

0xfb: Pop(0)
0xfc: @@ SetPhoto(Stack[-1])
0xfd: Pop(1)
0xfe: PushEmpty(string)
0xff: Call2 0xbc8

0x100: Pop(0)
0x101: @@ SetPhoto2(Stack[-1])
0x102: Pop(1)
0x103: PushEmpty(int)
0x104: Call2 0xd4c

0x105: Pop(0)
0x106: @@ SetPlayerName(Stack[-1])
0x107: Pop(1)
0x108: Stack[-2] = (int) -1
0x109: @ IsOverrideActive(Stack[-3])
0x10a: Pop(0)
0x10b: Push(Stack[-3])
0x10c: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0x10d: Stack[-10] = (int) -2
0x10e: Return(); Pop(8)

0x10f: @ DoDialog(Stack[-4])
0x110: Pop(0)
0x111: PushEmpty(bool, object)
0x112: PushEmpty(object)
0x113: Call2 0xb56

0x114: Stack[-2] = Stack[-1]
0x115: Pop(1)
0x116: Call2 0xa97

0x117: Pop(2)
0x118: PushEmpty(object, object)
0x119: Stack[-2] = Stack[-11]
0x11a: Stack[-1] = Stack[-6]
0x11b: Push(-2, 4); TaskCall(3)
0x11c: Call2 0x133

0x11d: Pop(-2, 4); TaskReturn
0x11e: Pop(2)
0x11f: @@ IsDialogEnd(Stack[-1])
0x120: Pop(0)
0x121: Pop(0); Push((bool) Stack[-1] == 0)
0x122: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x123: @ sync()
0x124: Pop(0)
0x125: @@ IsDialogEnd(Stack[-1])
0x126: Pop(0)
0x127: GOTO 0x121

0x128: PushEmpty(object)
0x129: Stack[-1] = Stack[-10]
0x12a: Call2 0xa85

0x12b: Pop(1)
0x12c: @ StopDialog(Stack[-4])
0x12d: Pop(0)
0x12e: @@ GetReturnValue(Stack[-2])
0x12f: Pop(0)
0x130: Stack[-10] = Stack[-2]
0x131: Return(); Pop(8)

0x132: Stack[-4] = 0
0x133: PushEmpty()
0x134: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x135: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x136: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x137: Push((int) 1)
0x138: IF (Stack[-1] == 0) GOTO 0x16c; Pop(1)

0x139: PushEmpty(string)
0x13a: Stack[-1] = "Neutral"
0x13b: Call2 0x18a

0x13c: Pop(1)
0x13d: Push((int) 525548)
0x13e: @@ SetMessage(Stack[-1])
0x13f: Pop(1)
0x140: @@ ClearReplies()
0x141: Pop(0)
0x142: PushEmpty(bool, object)
0x143: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x144: Call2 0xc44

0x145: Pop(1)
0x146: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x147: Push((int) 525549)
0x148: Push((int) 42898)
0x149: Push((int) 26905)
0x14a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14b: Pop(3)
0x14c: PushEmpty(bool)
0x14d: Stack[-1] = (bool) 0
0x14e: PushEmpty(bool, object)
0x14f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x150: Call2 0xc50

0x151: Pop(1)
0x152: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x153: PushEmpty(bool, object)
0x154: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x155: Call2 0xc5c

0x156: Pop(1)
0x157: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x158: Stack[-1] = (bool) 1
0x159: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x15a: Push((int) 525578)
0x15b: Push((int) 41036)
0x15c: Push((int) 26925)
0x15d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15e: Pop(3)
0x15f: Push((int) 539127)
0x160: Push((int) -1)
0x161: Push((int) 41057)
0x162: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x163: Pop(3)
0x164: Push((int) 525558)
0x165: Push((int) -1)
0x166: Push((int) 26914)
0x167: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x168: Pop(3)
0x169: GOTO 0x16c

0x16a: Return(); Pop(0)

0x16b: GOTO 0x137

0x16c: PushEmpty(bool)
0x16d: Call2 0xbca

0x16e: Pop(0)
0x16f: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x170: @ lshWaitForAnimEnd()
0x171: Pop(0)
0x172: Push( Stack[3 + Tasks[-1].StackPointer] )
0x173: IF (Stack[-1] == 0) GOTO 0x175; Pop(1)

0x174: GOTO 0x17a

0x175: PushEmpty(string)
0x176: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x177: Call2 0xb21

0x178: Pop(1)
0x179: GOTO 0x170

0x17a: GOTO 0x189

0x17b: Push("all")
0x17c: Push("idle")
0x17d: @ PlayAnimation(Stack[-2], Stack[-1])
0x17e: Pop(2)
0x17f: @ WaitForAnimEnd()
0x180: Pop(0)
0x181: Push( Stack[3 + Tasks[-1].StackPointer] )
0x182: IF (Stack[-1] == 0) GOTO 0x184; Pop(1)

0x183: GOTO 0x189

0x184: Push("all")
0x185: Push("idle")
0x186: @ PlayAnimation(Stack[-2], Stack[-1])
0x187: Pop(2)
0x188: GOTO 0x17f

0x189: Return(); Pop(0)

0x18a: PushEmpty()
0x18b: PushEmpty(bool)
0x18c: Call2 0xbca

0x18d: Pop(0)
0x18e: Pop(1); Push((bool) Stack[-1] == 0)
0x18f: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x190: Return(); Pop(0)

0x191: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x192: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x193: Return(); Pop(0)

0x194: PushEmpty(string, bool)
0x195: Stack[-2] = Stack[-3]
0x196: Push("")
0x197: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x198: IF (Stack[-1] == 0) GOTO 0x19b; Pop(1)

0x199: Stack[-1] = (bool) 0
0x19a: GOTO 0x19c

0x19b: Stack[-1] = (bool) 1
0x19c: Call2 0xb31

0x19d: Pop(2)
0x19e: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x19f: Return(); Pop(0)

0x1a0: PushEmpty()
0x1a1: Push((int) 1)
0x1a2: IF (Stack[-1] == 0) GOTO 0x428; Pop(1)

0x1a3: PushEmpty()
0x1a4: Call2 0xb4f

0x1a5: Pop(0)
0x1a6: Push((int) 26913)
0x1a7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1a8: IF (Stack[-1] == 0) GOTO 0x1ae; Pop(1)

0x1a9: PushEmpty(object, object)
0x1aa: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1ab: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ac: Call2 0xbdc

0x1ad: Pop(2)
0x1ae: Push((int) 41094)
0x1af: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1b0: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1b1: PushEmpty(object, object)
0x1b2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1b3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1b4: Call2 0xbdc

0x1b5: Pop(2)
0x1b6: Push((int) 41086)
0x1b7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1b8: IF (Stack[-1] == 0) GOTO 0x1be; Pop(1)

0x1b9: PushEmpty(object, object)
0x1ba: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1bb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1bc: Call2 0xbdc

0x1bd: Pop(2)
0x1be: Push((int) 41082)
0x1bf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1c0: IF (Stack[-1] == 0) GOTO 0x1c6; Pop(1)

0x1c1: PushEmpty(object, object)
0x1c2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1c3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1c4: Call2 0xbdc

0x1c5: Pop(2)
0x1c6: Push((int) 42902)
0x1c7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1c8: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1c9: PushEmpty(object, object)
0x1ca: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1cb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1cc: Call2 0xc35

0x1cd: Pop(2)
0x1ce: Push((int) 26925)
0x1cf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d0: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1d1: PushEmpty(object, object)
0x1d2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1d3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1d4: Call2 0xbe5

0x1d5: Pop(2)
0x1d6: Push((int) 26929)
0x1d7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d8: IF (Stack[-1] == 0) GOTO 0x1de; Pop(1)

0x1d9: PushEmpty(object, object)
0x1da: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1db: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1dc: Call2 0xbeb

0x1dd: Pop(2)
0x1de: Push((int) 41060)
0x1df: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1e0: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1e1: PushEmpty(object, object)
0x1e2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1e3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1e4: Call2 0xbeb

0x1e5: Pop(2)
0x1e6: Push((int) 41059)
0x1e7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1e8: IF (Stack[-1] == 0) GOTO 0x1f3; Pop(1)

0x1e9: PushEmpty(object, object)
0x1ea: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1eb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ec: Call2 0xbcc

0x1ed: Pop(2)
0x1ee: PushEmpty(object, object)
0x1ef: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1f0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1f1: Call2 0xc25

0x1f2: Pop(2)
0x1f3: Push((int) 26904)
0x1f4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f5: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x1f6: PushEmpty(string)
0x1f7: Stack[-1] = "Neutral"
0x1f8: Call2 0x18a

0x1f9: Pop(1)
0x1fa: Push((int) 525548)
0x1fb: @@ SetMessage(Stack[-1])
0x1fc: Pop(1)
0x1fd: @@ ClearReplies()
0x1fe: Pop(0)
0x1ff: PushEmpty(bool, object)
0x200: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x201: Call2 0xc44

0x202: Pop(1)
0x203: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x204: Push((int) 525549)
0x205: Push((int) 42898)
0x206: Push((int) 26905)
0x207: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x208: Pop(3)
0x209: PushEmpty(bool)
0x20a: Stack[-1] = (bool) 0
0x20b: PushEmpty(bool, object)
0x20c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x20d: Call2 0xc50

0x20e: Pop(1)
0x20f: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x210: PushEmpty(bool, object)
0x211: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x212: Call2 0xc5c

0x213: Pop(1)
0x214: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x215: Stack[-1] = (bool) 1
0x216: IF (Stack[-1] == 0) GOTO 0x21c; Pop(1)

0x217: Push((int) 525578)
0x218: Push((int) 41036)
0x219: Push((int) 26925)
0x21a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21b: Pop(3)
0x21c: Push((int) 539127)
0x21d: Push((int) -1)
0x21e: Push((int) 41057)
0x21f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x220: Pop(3)
0x221: Push((int) 525558)
0x222: Push((int) -1)
0x223: Push((int) 26914)
0x224: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x225: Pop(3)
0x226: Return(); Pop(0)

0x227: Push((int) 41036)
0x228: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x229: IF (Stack[-1] == 0) GOTO 0x23e; Pop(1)

0x22a: PushEmpty(string)
0x22b: Stack[-1] = "Love"
0x22c: Call2 0x18a

0x22d: Pop(1)
0x22e: Push((int) 539108)
0x22f: @@ SetMessage(Stack[-1])
0x230: Pop(1)
0x231: @@ ClearReplies()
0x232: Pop(0)
0x233: Push((int) 539110)
0x234: Push((int) 41039)
0x235: Push((int) 41038)
0x236: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x237: Pop(3)
0x238: Push((int) 539112)
0x239: Push((int) 41041)
0x23a: Push((int) 41040)
0x23b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x23c: Pop(3)
0x23d: Return(); Pop(0)

0x23e: Push((int) 41041)
0x23f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x240: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x241: PushEmpty(string)
0x242: Stack[-1] = "Neutral"
0x243: Call2 0x18a

0x244: Pop(1)
0x245: Push((int) 539113)
0x246: @@ SetMessage(Stack[-1])
0x247: Pop(1)
0x248: @@ ClearReplies()
0x249: Pop(0)
0x24a: Push((int) 525580)
0x24b: Push((int) 41046)
0x24c: Push((int) 26927)
0x24d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24e: Pop(3)
0x24f: Push((int) 539114)
0x250: Push((int) 26926)
0x251: Push((int) 41042)
0x252: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x253: Pop(3)
0x254: Return(); Pop(0)

0x255: Push((int) 41046)
0x256: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x257: IF (Stack[-1] == 0) GOTO 0x26c; Pop(1)

0x258: PushEmpty(string)
0x259: Stack[-1] = "Neutral"
0x25a: Call2 0x18a

0x25b: Pop(1)
0x25c: Push((int) 539117)
0x25d: @@ SetMessage(Stack[-1])
0x25e: Pop(1)
0x25f: @@ ClearReplies()
0x260: Pop(0)
0x261: Push((int) 539118)
0x262: Push((int) 41048)
0x263: Push((int) 41047)
0x264: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x265: Pop(3)
0x266: Push((int) 539120)
0x267: Push((int) 41052)
0x268: Push((int) 41049)
0x269: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x26a: Pop(3)
0x26b: Return(); Pop(0)

0x26c: Push((int) 41052)
0x26d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x26e: IF (Stack[-1] == 0) GOTO 0x288; Pop(1)

0x26f: PushEmpty(object, object)
0x270: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x271: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x272: Call2 0xc15

0x273: Pop(2)
0x274: PushEmpty(object, object)
0x275: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x276: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x277: Call2 0xc1f

0x278: Pop(2)
0x279: PushEmpty(string)
0x27a: Stack[-1] = "Modesty"
0x27b: Call2 0x18a

0x27c: Pop(1)
0x27d: Push((int) 539123)
0x27e: @@ SetMessage(Stack[-1])
0x27f: Pop(1)
0x280: @@ ClearReplies()
0x281: Pop(0)
0x282: Push((int) 539124)
0x283: Push((int) 26926)
0x284: Push((int) 41053)
0x285: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x286: Pop(3)
0x287: Return(); Pop(0)

0x288: Push((int) 41048)
0x289: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x28a: IF (Stack[-1] == 0) GOTO 0x29f; Pop(1)

0x28b: PushEmpty(string)
0x28c: Stack[-1] = "Neutral"
0x28d: Call2 0x18a

0x28e: Pop(1)
0x28f: Push((int) 539119)
0x290: @@ SetMessage(Stack[-1])
0x291: Pop(1)
0x292: @@ ClearReplies()
0x293: Pop(0)
0x294: Push((int) 539121)
0x295: Push((int) 41055)
0x296: Push((int) 41050)
0x297: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x298: Pop(3)
0x299: Push((int) 539122)
0x29a: Push((int) -1)
0x29b: Push((int) 41051)
0x29c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x29d: Pop(3)
0x29e: Return(); Pop(0)

0x29f: Push((int) 41055)
0x2a0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2a1: IF (Stack[-1] == 0) GOTO 0x2b1; Pop(1)

0x2a2: PushEmpty(string)
0x2a3: Stack[-1] = "Neutral"
0x2a4: Call2 0x18a

0x2a5: Pop(1)
0x2a6: Push((int) 539125)
0x2a7: @@ SetMessage(Stack[-1])
0x2a8: Pop(1)
0x2a9: @@ ClearReplies()
0x2aa: Pop(0)
0x2ab: Push((int) 539126)
0x2ac: Push((int) -1)
0x2ad: Push((int) 41056)
0x2ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2af: Pop(3)
0x2b0: Return(); Pop(0)

0x2b1: Push((int) 41039)
0x2b2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2b3: IF (Stack[-1] == 0) GOTO 0x2c8; Pop(1)

0x2b4: PushEmpty(string)
0x2b5: Stack[-1] = "Modesty"
0x2b6: Call2 0x18a

0x2b7: Pop(1)
0x2b8: Push((int) 539111)
0x2b9: @@ SetMessage(Stack[-1])
0x2ba: Pop(1)
0x2bb: @@ ClearReplies()
0x2bc: Pop(0)
0x2bd: Push((int) 539109)
0x2be: Push((int) 26926)
0x2bf: Push((int) 41037)
0x2c0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c1: Pop(3)
0x2c2: Push((int) 539115)
0x2c3: Push((int) 41048)
0x2c4: Push((int) 41044)
0x2c5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c6: Pop(3)
0x2c7: Return(); Pop(0)

0x2c8: Push((int) 26926)
0x2c9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ca: IF (Stack[-1] == 0) GOTO 0x2df; Pop(1)

0x2cb: PushEmpty(string)
0x2cc: Stack[-1] = "Modesty"
0x2cd: Call2 0x18a

0x2ce: Pop(1)
0x2cf: Push((int) 525579)
0x2d0: @@ SetMessage(Stack[-1])
0x2d1: Pop(1)
0x2d2: @@ ClearReplies()
0x2d3: Pop(0)
0x2d4: Push((int) 539116)
0x2d5: Push((int) 26928)
0x2d6: Push((int) 41045)
0x2d7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d8: Pop(3)
0x2d9: Push((int) 539128)
0x2da: Push((int) -1)
0x2db: Push((int) 41059)
0x2dc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2dd: Pop(3)
0x2de: Return(); Pop(0)

0x2df: Push((int) 26928)
0x2e0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2e1: IF (Stack[-1] == 0) GOTO 0x2f6; Pop(1)

0x2e2: PushEmpty(string)
0x2e3: Stack[-1] = "Neutral"
0x2e4: Call2 0x18a

0x2e5: Pop(1)
0x2e6: Push((int) 525581)
0x2e7: @@ SetMessage(Stack[-1])
0x2e8: Pop(1)
0x2e9: @@ ClearReplies()
0x2ea: Pop(0)
0x2eb: Push((int) 525582)
0x2ec: Push((int) -1)
0x2ed: Push((int) 26929)
0x2ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ef: Pop(3)
0x2f0: Push((int) 539129)
0x2f1: Push((int) -1)
0x2f2: Push((int) 41060)
0x2f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f4: Pop(3)
0x2f5: Return(); Pop(0)

0x2f6: Push((int) 42898)
0x2f7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2f8: IF (Stack[-1] == 0) GOTO 0x30d; Pop(1)

0x2f9: PushEmpty(string)
0x2fa: Stack[-1] = "Neutral"
0x2fb: Call2 0x18a

0x2fc: Pop(1)
0x2fd: Push((int) 540840)
0x2fe: @@ SetMessage(Stack[-1])
0x2ff: Pop(1)
0x300: @@ ClearReplies()
0x301: Pop(0)
0x302: Push((int) 540841)
0x303: Push((int) 41064)
0x304: Push((int) 42899)
0x305: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x306: Pop(3)
0x307: Push((int) 540842)
0x308: Push((int) 42901)
0x309: Push((int) 42900)
0x30a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x30b: Pop(3)
0x30c: Return(); Pop(0)

0x30d: Push((int) 42901)
0x30e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x30f: IF (Stack[-1] == 0) GOTO 0x31f; Pop(1)

0x310: PushEmpty(string)
0x311: Stack[-1] = "Fear"
0x312: Call2 0x18a

0x313: Pop(1)
0x314: Push((int) 540843)
0x315: @@ SetMessage(Stack[-1])
0x316: Pop(1)
0x317: @@ ClearReplies()
0x318: Pop(0)
0x319: Push((int) 540844)
0x31a: Push((int) -1)
0x31b: Push((int) 42902)
0x31c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x31d: Pop(3)
0x31e: Return(); Pop(0)

0x31f: Push((int) 41064)
0x320: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x321: IF (Stack[-1] == 0) GOTO 0x336; Pop(1)

0x322: PushEmpty(string)
0x323: Stack[-1] = "Modesty"
0x324: Call2 0x18a

0x325: Pop(1)
0x326: Push((int) 539133)
0x327: @@ SetMessage(Stack[-1])
0x328: Pop(1)
0x329: @@ ClearReplies()
0x32a: Pop(0)
0x32b: Push((int) 539134)
0x32c: Push((int) 41061)
0x32d: Push((int) 41065)
0x32e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x32f: Pop(3)
0x330: Push((int) 539142)
0x331: Push((int) 41061)
0x332: Push((int) 41073)
0x333: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x334: Pop(3)
0x335: Return(); Pop(0)

0x336: Push((int) 41061)
0x337: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x338: IF (Stack[-1] == 0) GOTO 0x34d; Pop(1)

0x339: PushEmpty(string)
0x33a: Stack[-1] = "Modesty"
0x33b: Call2 0x18a

0x33c: Pop(1)
0x33d: Push((int) 539130)
0x33e: @@ SetMessage(Stack[-1])
0x33f: Pop(1)
0x340: @@ ClearReplies()
0x341: Pop(0)
0x342: Push((int) 539132)
0x343: Push((int) 41071)
0x344: Push((int) 41063)
0x345: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x346: Pop(3)
0x347: Push((int) 539131)
0x348: Push((int) 41067)
0x349: Push((int) 41062)
0x34a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x34b: Pop(3)
0x34c: Return(); Pop(0)

0x34d: Push((int) 41067)
0x34e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x34f: IF (Stack[-1] == 0) GOTO 0x364; Pop(1)

0x350: PushEmpty(string)
0x351: Stack[-1] = "Neutral"
0x352: Call2 0x18a

0x353: Pop(1)
0x354: Push((int) 539136)
0x355: @@ SetMessage(Stack[-1])
0x356: Pop(1)
0x357: @@ ClearReplies()
0x358: Pop(0)
0x359: Push((int) 539137)
0x35a: Push((int) 41069)
0x35b: Push((int) 41068)
0x35c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x35d: Pop(3)
0x35e: Push((int) 539158)
0x35f: Push((int) 41069)
0x360: Push((int) 41096)
0x361: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x362: Pop(3)
0x363: Return(); Pop(0)

0x364: Push((int) 41071)
0x365: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x366: IF (Stack[-1] == 0) GOTO 0x37b; Pop(1)

0x367: PushEmpty(string)
0x368: Stack[-1] = "Modesty"
0x369: Call2 0x18a

0x36a: Pop(1)
0x36b: Push((int) 539140)
0x36c: @@ SetMessage(Stack[-1])
0x36d: Pop(1)
0x36e: @@ ClearReplies()
0x36f: Pop(0)
0x370: Push((int) 539141)
0x371: Push((int) 41069)
0x372: Push((int) 41072)
0x373: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x374: Pop(3)
0x375: Push((int) 539143)
0x376: Push((int) 41076)
0x377: Push((int) 41075)
0x378: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x379: Pop(3)
0x37a: Return(); Pop(0)

0x37b: Push((int) 41076)
0x37c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x37d: IF (Stack[-1] == 0) GOTO 0x392; Pop(1)

0x37e: PushEmpty(string)
0x37f: Stack[-1] = "Fear"
0x380: Call2 0x18a

0x381: Pop(1)
0x382: Push((int) 539144)
0x383: @@ SetMessage(Stack[-1])
0x384: Pop(1)
0x385: @@ ClearReplies()
0x386: Pop(0)
0x387: Push((int) 539145)
0x388: Push((int) 41069)
0x389: Push((int) 41077)
0x38a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x38b: Pop(3)
0x38c: Push((int) 539146)
0x38d: Push((int) 41079)
0x38e: Push((int) 41078)
0x38f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x390: Pop(3)
0x391: Return(); Pop(0)

0x392: Push((int) 41079)
0x393: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x394: IF (Stack[-1] == 0) GOTO 0x3a9; Pop(1)

0x395: PushEmpty(string)
0x396: Stack[-1] = "Neutral"
0x397: Call2 0x18a

0x398: Pop(1)
0x399: Push((int) 539147)
0x39a: @@ SetMessage(Stack[-1])
0x39b: Pop(1)
0x39c: @@ ClearReplies()
0x39d: Pop(0)
0x39e: Push((int) 539148)
0x39f: Push((int) 41069)
0x3a0: Push((int) 41081)
0x3a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a2: Pop(3)
0x3a3: Push((int) 539149)
0x3a4: Push((int) -1)
0x3a5: Push((int) 41082)
0x3a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a7: Pop(3)
0x3a8: Return(); Pop(0)

0x3a9: Push((int) 41069)
0x3aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ab: IF (Stack[-1] == 0) GOTO 0x3c0; Pop(1)

0x3ac: PushEmpty(string)
0x3ad: Stack[-1] = "Love"
0x3ae: Call2 0x18a

0x3af: Pop(1)
0x3b0: Push((int) 539138)
0x3b1: @@ SetMessage(Stack[-1])
0x3b2: Pop(1)
0x3b3: @@ ClearReplies()
0x3b4: Pop(0)
0x3b5: Push((int) 539150)
0x3b6: Push((int) 41085)
0x3b7: Push((int) 41084)
0x3b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b9: Pop(3)
0x3ba: Push((int) 539152)
0x3bb: Push((int) -1)
0x3bc: Push((int) 41086)
0x3bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3be: Pop(3)
0x3bf: Return(); Pop(0)

0x3c0: Push((int) 41085)
0x3c1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3c2: IF (Stack[-1] == 0) GOTO 0x3d7; Pop(1)

0x3c3: PushEmpty(string)
0x3c4: Stack[-1] = "Neutral"
0x3c5: Call2 0x18a

0x3c6: Pop(1)
0x3c7: Push((int) 539151)
0x3c8: @@ SetMessage(Stack[-1])
0x3c9: Pop(1)
0x3ca: @@ ClearReplies()
0x3cb: Pop(0)
0x3cc: Push((int) 539139)
0x3cd: Push((int) 26906)
0x3ce: Push((int) 41070)
0x3cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d0: Pop(3)
0x3d1: Push((int) 539153)
0x3d2: Push((int) 26906)
0x3d3: Push((int) 41087)
0x3d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d5: Pop(3)
0x3d6: Return(); Pop(0)

0x3d7: Push((int) 26906)
0x3d8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3d9: IF (Stack[-1] == 0) GOTO 0x3ee; Pop(1)

0x3da: PushEmpty(string)
0x3db: Stack[-1] = "Neutral"
0x3dc: Call2 0x18a

0x3dd: Pop(1)
0x3de: Push((int) 525550)
0x3df: @@ SetMessage(Stack[-1])
0x3e0: Pop(1)
0x3e1: @@ ClearReplies()
0x3e2: Pop(0)
0x3e3: Push((int) 525551)
0x3e4: Push((int) 26908)
0x3e5: Push((int) 26907)
0x3e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e7: Pop(3)
0x3e8: Push((int) 539154)
0x3e9: Push((int) 26908)
0x3ea: Push((int) 41089)
0x3eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ec: Pop(3)
0x3ed: Return(); Pop(0)

0x3ee: Push((int) 26908)
0x3ef: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3f0: IF (Stack[-1] == 0) GOTO 0x405; Pop(1)

0x3f1: PushEmpty(string)
0x3f2: Stack[-1] = "Modesty"
0x3f3: Call2 0x18a

0x3f4: Pop(1)
0x3f5: Push((int) 525552)
0x3f6: @@ SetMessage(Stack[-1])
0x3f7: Pop(1)
0x3f8: @@ ClearReplies()
0x3f9: Pop(0)
0x3fa: Push((int) 525553)
0x3fb: Push((int) 41092)
0x3fc: Push((int) 26909)
0x3fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3fe: Pop(3)
0x3ff: Push((int) 539155)
0x400: Push((int) 41092)
0x401: Push((int) 41091)
0x402: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x403: Pop(3)
0x404: Return(); Pop(0)

0x405: Push((int) 41092)
0x406: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x407: IF (Stack[-1] == 0) GOTO 0x41c; Pop(1)

0x408: PushEmpty(string)
0x409: Stack[-1] = "Modesty"
0x40a: Call2 0x18a

0x40b: Pop(1)
0x40c: Push((int) 539156)
0x40d: @@ SetMessage(Stack[-1])
0x40e: Pop(1)
0x40f: @@ ClearReplies()
0x410: Pop(0)
0x411: Push((int) 525557)
0x412: Push((int) -1)
0x413: Push((int) 26913)
0x414: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x415: Pop(3)
0x416: Push((int) 539157)
0x417: Push((int) -1)
0x418: Push((int) 41094)
0x419: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x41a: Pop(3)
0x41b: Return(); Pop(0)

0x41c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x41d: PushEmpty(bool)
0x41e: Call2 0xbca

0x41f: Pop(0)
0x420: IF (Stack[-1] == 0) GOTO 0x424; Pop(1)

0x421: @ lshStopAnimation()
0x422: Pop(0)
0x423: GOTO 0x426

0x424: @ StopAnimation()
0x425: Pop(0)
0x426: Return(); Pop(0)

0x427: GOTO 0x1a1

0x428: Return(); Pop(0)

0x429: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x42a: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x42b: PushEmpty(bool, object, float)
0x42c: Stack[-2] = Stack[-12]
0x42d: Stack[-1] = (float) 70.0
0x42e: Call2 0xa40

0x42f: Pop(2)
0x430: Pop(1); Push((bool) Stack[-1] == 0)
0x431: IF (Stack[-1] == 0) GOTO 0x434; Pop(1)

0x432: Stack[-10] = (int) -2
0x433: Return(); Pop(8)

0x434: @ CreateDialog(Stack[-4])
0x435: Pop(0)
0x436: PushEmpty(int)
0x437: Call2 0xbc4

0x438: Pop(0)
0x439: @@ SetNPCName(Stack[-1])
0x43a: Pop(1)
0x43b: PushEmpty(int)
0x43c: Call2 0xbc2

0x43d: Pop(0)
0x43e: @@ SetNPCDescription(Stack[-1])
0x43f: Pop(1)
0x440: PushEmpty(string)
0x441: Call2 0xbc6

0x442: Pop(0)
0x443: @@ SetPhoto(Stack[-1])
0x444: Pop(1)
0x445: PushEmpty(string)
0x446: Call2 0xbc8

0x447: Pop(0)
0x448: @@ SetPhoto2(Stack[-1])
0x449: Pop(1)
0x44a: PushEmpty(int)
0x44b: Call2 0xd4c

0x44c: Pop(0)
0x44d: @@ SetPlayerName(Stack[-1])
0x44e: Pop(1)
0x44f: Stack[-2] = (int) -1
0x450: @ IsOverrideActive(Stack[-3])
0x451: Pop(0)
0x452: Push(Stack[-3])
0x453: IF (Stack[-1] == 0) GOTO 0x456; Pop(1)

0x454: Stack[-10] = (int) -2
0x455: Return(); Pop(8)

0x456: @ DoDialog(Stack[-4])
0x457: Pop(0)
0x458: PushEmpty(bool, object)
0x459: PushEmpty(object)
0x45a: Call2 0xb56

0x45b: Stack[-2] = Stack[-1]
0x45c: Pop(1)
0x45d: Call2 0xa97

0x45e: Pop(2)
0x45f: PushEmpty(object, object)
0x460: Stack[-2] = Stack[-11]
0x461: Stack[-1] = Stack[-6]
0x462: Push(-2, 4); TaskCall(5)
0x463: Call2 0x47a

0x464: Pop(-2, 4); TaskReturn
0x465: Pop(2)
0x466: @@ IsDialogEnd(Stack[-1])
0x467: Pop(0)
0x468: Pop(0); Push((bool) Stack[-1] == 0)
0x469: IF (Stack[-1] == 0) GOTO 0x46f; Pop(1)

0x46a: @ sync()
0x46b: Pop(0)
0x46c: @@ IsDialogEnd(Stack[-1])
0x46d: Pop(0)
0x46e: GOTO 0x468

0x46f: PushEmpty(object)
0x470: Stack[-1] = Stack[-10]
0x471: Call2 0xa85

0x472: Pop(1)
0x473: @ StopDialog(Stack[-4])
0x474: Pop(0)
0x475: @@ GetReturnValue(Stack[-2])
0x476: Pop(0)
0x477: Stack[-10] = Stack[-2]
0x478: Return(); Pop(8)

0x479: Stack[-4] = 0
0x47a: PushEmpty()
0x47b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x47c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x47d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x47e: Push((int) 1)
0x47f: IF (Stack[-1] == 0) GOTO 0x4bc; Pop(1)

0x480: PushEmpty(string)
0x481: Stack[-1] = "Fear"
0x482: Call2 0x4da

0x483: Pop(1)
0x484: Push((int) 526037)
0x485: @@ SetMessage(Stack[-1])
0x486: Pop(1)
0x487: @@ ClearReplies()
0x488: Pop(0)
0x489: PushEmpty(bool)
0x48a: Stack[-1] = (bool) 0
0x48b: PushEmpty(bool, object)
0x48c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x48d: Call2 0xc68

0x48e: Pop(1)
0x48f: IF (Stack[-1] == 0) GOTO 0x496; Pop(1)

0x490: PushEmpty(bool, object)
0x491: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x492: Call2 0xc74

0x493: Pop(1)
0x494: IF (Stack[-1] == 0) GOTO 0x496; Pop(1)

0x495: Stack[-1] = (bool) 1
0x496: IF (Stack[-1] == 0) GOTO 0x49c; Pop(1)

0x497: Push((int) 526038)
0x498: Push((int) 30287)
0x499: Push((int) 27323)
0x49a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x49b: Pop(3)
0x49c: PushEmpty(bool)
0x49d: Stack[-1] = (bool) 0
0x49e: PushEmpty(bool, object)
0x49f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4a0: Call2 0xc80

0x4a1: Pop(1)
0x4a2: IF (Stack[-1] == 0) GOTO 0x4a9; Pop(1)

0x4a3: PushEmpty(bool, object)
0x4a4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4a5: Call2 0xc8c

0x4a6: Pop(1)
0x4a7: IF (Stack[-1] == 0) GOTO 0x4a9; Pop(1)

0x4a8: Stack[-1] = (bool) 1
0x4a9: IF (Stack[-1] == 0) GOTO 0x4af; Pop(1)

0x4aa: Push((int) 526068)
0x4ab: Push((int) 27354)
0x4ac: Push((int) 27353)
0x4ad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ae: Pop(3)
0x4af: Push((int) 526043)
0x4b0: Push((int) -1)
0x4b1: Push((int) 27328)
0x4b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b3: Pop(3)
0x4b4: Push((int) 528864)
0x4b5: Push((int) -1)
0x4b6: Push((int) 30286)
0x4b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b8: Pop(3)
0x4b9: GOTO 0x4bc

0x4ba: Return(); Pop(0)

0x4bb: GOTO 0x47e

0x4bc: PushEmpty(bool)
0x4bd: Call2 0xbca

0x4be: Pop(0)
0x4bf: IF (Stack[-1] == 0) GOTO 0x4cb; Pop(1)

0x4c0: @ lshWaitForAnimEnd()
0x4c1: Pop(0)
0x4c2: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4c3: IF (Stack[-1] == 0) GOTO 0x4c5; Pop(1)

0x4c4: GOTO 0x4ca

0x4c5: PushEmpty(string)
0x4c6: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x4c7: Call2 0xb21

0x4c8: Pop(1)
0x4c9: GOTO 0x4c0

0x4ca: GOTO 0x4d9

0x4cb: Push("all")
0x4cc: Push("idle")
0x4cd: @ PlayAnimation(Stack[-2], Stack[-1])
0x4ce: Pop(2)
0x4cf: @ WaitForAnimEnd()
0x4d0: Pop(0)
0x4d1: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4d2: IF (Stack[-1] == 0) GOTO 0x4d4; Pop(1)

0x4d3: GOTO 0x4d9

0x4d4: Push("all")
0x4d5: Push("idle")
0x4d6: @ PlayAnimation(Stack[-2], Stack[-1])
0x4d7: Pop(2)
0x4d8: GOTO 0x4cf

0x4d9: Return(); Pop(0)

0x4da: PushEmpty()
0x4db: PushEmpty(bool)
0x4dc: Call2 0xbca

0x4dd: Pop(0)
0x4de: Pop(1); Push((bool) Stack[-1] == 0)
0x4df: IF (Stack[-1] == 0) GOTO 0x4e1; Pop(1)

0x4e0: Return(); Pop(0)

0x4e1: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x4e2: IF (Stack[-1] == 0) GOTO 0x4e4; Pop(1)

0x4e3: Return(); Pop(0)

0x4e4: PushEmpty(string, bool)
0x4e5: Stack[-2] = Stack[-3]
0x4e6: Push("")
0x4e7: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x4e8: IF (Stack[-1] == 0) GOTO 0x4eb; Pop(1)

0x4e9: Stack[-1] = (bool) 0
0x4ea: GOTO 0x4ec

0x4eb: Stack[-1] = (bool) 1
0x4ec: Call2 0xb31

0x4ed: Pop(2)
0x4ee: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x4ef: Return(); Pop(0)

0x4f0: PushEmpty()
0x4f1: Push((int) 1)
0x4f2: IF (Stack[-1] == 0) GOTO 0x60b; Pop(1)

0x4f3: PushEmpty()
0x4f4: Call2 0xb4f

0x4f5: Pop(0)
0x4f6: Push((int) 27323)
0x4f7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4f8: IF (Stack[-1] == 0) GOTO 0x4fe; Pop(1)

0x4f9: PushEmpty(object, object)
0x4fa: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4fb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4fc: Call2 0xbf0

0x4fd: Pop(2)
0x4fe: Push((int) 27327)
0x4ff: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x500: IF (Stack[-1] == 0) GOTO 0x506; Pop(1)

0x501: PushEmpty(object, object)
0x502: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x503: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x504: Call2 0xc05

0x505: Pop(2)
0x506: Push((int) 43232)
0x507: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x508: IF (Stack[-1] == 0) GOTO 0x50e; Pop(1)

0x509: PushEmpty(object, object)
0x50a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x50b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x50c: Call2 0xc05

0x50d: Pop(2)
0x50e: Push((int) 27353)
0x50f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x510: IF (Stack[-1] == 0) GOTO 0x516; Pop(1)

0x511: PushEmpty(object, object)
0x512: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x513: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x514: Call2 0xbf6

0x515: Pop(2)
0x516: Push((int) 27362)
0x517: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x518: IF (Stack[-1] == 0) GOTO 0x523; Pop(1)

0x519: PushEmpty(object, object)
0x51a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x51b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x51c: Call2 0xbfc

0x51d: Pop(2)
0x51e: PushEmpty(object, object)
0x51f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x520: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x521: Call2 0xc3e

0x522: Pop(2)
0x523: Push((int) 27322)
0x524: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x525: IF (Stack[-1] == 0) GOTO 0x560; Pop(1)

0x526: PushEmpty(string)
0x527: Stack[-1] = "Fear"
0x528: Call2 0x4da

0x529: Pop(1)
0x52a: Push((int) 526037)
0x52b: @@ SetMessage(Stack[-1])
0x52c: Pop(1)
0x52d: @@ ClearReplies()
0x52e: Pop(0)
0x52f: PushEmpty(bool)
0x530: Stack[-1] = (bool) 0
0x531: PushEmpty(bool, object)
0x532: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x533: Call2 0xc68

0x534: Pop(1)
0x535: IF (Stack[-1] == 0) GOTO 0x53c; Pop(1)

0x536: PushEmpty(bool, object)
0x537: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x538: Call2 0xc74

0x539: Pop(1)
0x53a: IF (Stack[-1] == 0) GOTO 0x53c; Pop(1)

0x53b: Stack[-1] = (bool) 1
0x53c: IF (Stack[-1] == 0) GOTO 0x542; Pop(1)

0x53d: Push((int) 526038)
0x53e: Push((int) 30287)
0x53f: Push((int) 27323)
0x540: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x541: Pop(3)
0x542: PushEmpty(bool)
0x543: Stack[-1] = (bool) 0
0x544: PushEmpty(bool, object)
0x545: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x546: Call2 0xc80

0x547: Pop(1)
0x548: IF (Stack[-1] == 0) GOTO 0x54f; Pop(1)

0x549: PushEmpty(bool, object)
0x54a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x54b: Call2 0xc8c

0x54c: Pop(1)
0x54d: IF (Stack[-1] == 0) GOTO 0x54f; Pop(1)

0x54e: Stack[-1] = (bool) 1
0x54f: IF (Stack[-1] == 0) GOTO 0x555; Pop(1)

0x550: Push((int) 526068)
0x551: Push((int) 27354)
0x552: Push((int) 27353)
0x553: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x554: Pop(3)
0x555: Push((int) 526043)
0x556: Push((int) -1)
0x557: Push((int) 27328)
0x558: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x559: Pop(3)
0x55a: Push((int) 528864)
0x55b: Push((int) -1)
0x55c: Push((int) 30286)
0x55d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x55e: Pop(3)
0x55f: Return(); Pop(0)

0x560: Push((int) 27354)
0x561: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x562: IF (Stack[-1] == 0) GOTO 0x572; Pop(1)

0x563: PushEmpty(string)
0x564: Stack[-1] = "Neutral"
0x565: Call2 0x4da

0x566: Pop(1)
0x567: Push((int) 526069)
0x568: @@ SetMessage(Stack[-1])
0x569: Pop(1)
0x56a: @@ ClearReplies()
0x56b: Pop(0)
0x56c: Push((int) 526070)
0x56d: Push((int) 27356)
0x56e: Push((int) 27355)
0x56f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x570: Pop(3)
0x571: Return(); Pop(0)

0x572: Push((int) 27356)
0x573: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x574: IF (Stack[-1] == 0) GOTO 0x589; Pop(1)

0x575: PushEmpty(string)
0x576: Stack[-1] = "Neutral"
0x577: Call2 0x4da

0x578: Pop(1)
0x579: Push((int) 526071)
0x57a: @@ SetMessage(Stack[-1])
0x57b: Pop(1)
0x57c: @@ ClearReplies()
0x57d: Pop(0)
0x57e: Push((int) 526072)
0x57f: Push((int) 27359)
0x580: Push((int) 27357)
0x581: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x582: Pop(3)
0x583: Push((int) 526073)
0x584: Push((int) 27359)
0x585: Push((int) 27358)
0x586: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x587: Pop(3)
0x588: Return(); Pop(0)

0x589: Push((int) 27359)
0x58a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x58b: IF (Stack[-1] == 0) GOTO 0x59b; Pop(1)

0x58c: PushEmpty(string)
0x58d: Stack[-1] = "Modesty"
0x58e: Call2 0x4da

0x58f: Pop(1)
0x590: Push((int) 526074)
0x591: @@ SetMessage(Stack[-1])
0x592: Pop(1)
0x593: @@ ClearReplies()
0x594: Pop(0)
0x595: Push((int) 526075)
0x596: Push((int) 27361)
0x597: Push((int) 27360)
0x598: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x599: Pop(3)
0x59a: Return(); Pop(0)

0x59b: Push((int) 27361)
0x59c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x59d: IF (Stack[-1] == 0) GOTO 0x5ad; Pop(1)

0x59e: PushEmpty(string)
0x59f: Stack[-1] = "Modesty"
0x5a0: Call2 0x4da

0x5a1: Pop(1)
0x5a2: Push((int) 526076)
0x5a3: @@ SetMessage(Stack[-1])
0x5a4: Pop(1)
0x5a5: @@ ClearReplies()
0x5a6: Pop(0)
0x5a7: Push((int) 526077)
0x5a8: Push((int) -1)
0x5a9: Push((int) 27362)
0x5aa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ab: Pop(3)
0x5ac: Return(); Pop(0)

0x5ad: Push((int) 30287)
0x5ae: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5af: IF (Stack[-1] == 0) GOTO 0x5c4; Pop(1)

0x5b0: PushEmpty(string)
0x5b1: Stack[-1] = "Fear"
0x5b2: Call2 0x4da

0x5b3: Pop(1)
0x5b4: Push((int) 528865)
0x5b5: @@ SetMessage(Stack[-1])
0x5b6: Pop(1)
0x5b7: @@ ClearReplies()
0x5b8: Pop(0)
0x5b9: Push((int) 528866)
0x5ba: Push((int) 27324)
0x5bb: Push((int) 30288)
0x5bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5bd: Pop(3)
0x5be: Push((int) 528867)
0x5bf: Push((int) 27324)
0x5c0: Push((int) 30289)
0x5c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c2: Pop(3)
0x5c3: Return(); Pop(0)

0x5c4: Push((int) 27324)
0x5c5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5c6: IF (Stack[-1] == 0) GOTO 0x5db; Pop(1)

0x5c7: PushEmpty(string)
0x5c8: Stack[-1] = "Neutral"
0x5c9: Call2 0x4da

0x5ca: Pop(1)
0x5cb: Push((int) 526039)
0x5cc: @@ SetMessage(Stack[-1])
0x5cd: Pop(1)
0x5ce: @@ ClearReplies()
0x5cf: Pop(0)
0x5d0: Push((int) 526040)
0x5d1: Push((int) 27326)
0x5d2: Push((int) 27325)
0x5d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d4: Pop(3)
0x5d5: Push((int) 541116)
0x5d6: Push((int) -1)
0x5d7: Push((int) 43232)
0x5d8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d9: Pop(3)
0x5da: Return(); Pop(0)

0x5db: Push((int) 27326)
0x5dc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5dd: IF (Stack[-1] == 0) GOTO 0x5ed; Pop(1)

0x5de: PushEmpty(string)
0x5df: Stack[-1] = "Neutral"
0x5e0: Call2 0x4da

0x5e1: Pop(1)
0x5e2: Push((int) 526041)
0x5e3: @@ SetMessage(Stack[-1])
0x5e4: Pop(1)
0x5e5: @@ ClearReplies()
0x5e6: Pop(0)
0x5e7: Push((int) 528868)
0x5e8: Push((int) 30292)
0x5e9: Push((int) 30291)
0x5ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5eb: Pop(3)
0x5ec: Return(); Pop(0)

0x5ed: Push((int) 30292)
0x5ee: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5ef: IF (Stack[-1] == 0) GOTO 0x5ff; Pop(1)

0x5f0: PushEmpty(string)
0x5f1: Stack[-1] = "Modesty"
0x5f2: Call2 0x4da

0x5f3: Pop(1)
0x5f4: Push((int) 528869)
0x5f5: @@ SetMessage(Stack[-1])
0x5f6: Pop(1)
0x5f7: @@ ClearReplies()
0x5f8: Pop(0)
0x5f9: Push((int) 526042)
0x5fa: Push((int) -1)
0x5fb: Push((int) 27327)
0x5fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5fd: Pop(3)
0x5fe: Return(); Pop(0)

0x5ff: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x600: PushEmpty(bool)
0x601: Call2 0xbca

0x602: Pop(0)
0x603: IF (Stack[-1] == 0) GOTO 0x607; Pop(1)

0x604: @ lshStopAnimation()
0x605: Pop(0)
0x606: GOTO 0x609

0x607: @ StopAnimation()
0x608: Pop(0)
0x609: Return(); Pop(0)

0x60a: GOTO 0x4f1

0x60b: Return(); Pop(0)

0x60c: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x60d: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x60e: PushEmpty(bool, object, float)
0x60f: Stack[-2] = Stack[-12]
0x610: Stack[-1] = (float) 70.0
0x611: Call2 0xa40

0x612: Pop(2)
0x613: Pop(1); Push((bool) Stack[-1] == 0)
0x614: IF (Stack[-1] == 0) GOTO 0x617; Pop(1)

0x615: Stack[-10] = (int) -2
0x616: Return(); Pop(8)

0x617: @ CreateDialog(Stack[-4])
0x618: Pop(0)
0x619: PushEmpty(int)
0x61a: Call2 0xbc4

0x61b: Pop(0)
0x61c: @@ SetNPCName(Stack[-1])
0x61d: Pop(1)
0x61e: PushEmpty(int)
0x61f: Call2 0xbc2

0x620: Pop(0)
0x621: @@ SetNPCDescription(Stack[-1])
0x622: Pop(1)
0x623: PushEmpty(string)
0x624: Call2 0xbc6

0x625: Pop(0)
0x626: @@ SetPhoto(Stack[-1])
0x627: Pop(1)
0x628: PushEmpty(string)
0x629: Call2 0xbc8

0x62a: Pop(0)
0x62b: @@ SetPhoto2(Stack[-1])
0x62c: Pop(1)
0x62d: PushEmpty(int)
0x62e: Call2 0xd4c

0x62f: Pop(0)
0x630: @@ SetPlayerName(Stack[-1])
0x631: Pop(1)
0x632: Stack[-2] = (int) -1
0x633: @ IsOverrideActive(Stack[-3])
0x634: Pop(0)
0x635: Push(Stack[-3])
0x636: IF (Stack[-1] == 0) GOTO 0x639; Pop(1)

0x637: Stack[-10] = (int) -2
0x638: Return(); Pop(8)

0x639: @ DoDialog(Stack[-4])
0x63a: Pop(0)
0x63b: PushEmpty(bool, object)
0x63c: PushEmpty(object)
0x63d: Call2 0xb56

0x63e: Stack[-2] = Stack[-1]
0x63f: Pop(1)
0x640: Call2 0xa97

0x641: Pop(2)
0x642: PushEmpty(object, object)
0x643: Stack[-2] = Stack[-11]
0x644: Stack[-1] = Stack[-6]
0x645: Push(-2, 4); TaskCall(7)
0x646: Call2 0x65d

0x647: Pop(-2, 4); TaskReturn
0x648: Pop(2)
0x649: @@ IsDialogEnd(Stack[-1])
0x64a: Pop(0)
0x64b: Pop(0); Push((bool) Stack[-1] == 0)
0x64c: IF (Stack[-1] == 0) GOTO 0x652; Pop(1)

0x64d: @ sync()
0x64e: Pop(0)
0x64f: @@ IsDialogEnd(Stack[-1])
0x650: Pop(0)
0x651: GOTO 0x64b

0x652: PushEmpty(object)
0x653: Stack[-1] = Stack[-10]
0x654: Call2 0xa85

0x655: Pop(1)
0x656: @ StopDialog(Stack[-4])
0x657: Pop(0)
0x658: @@ GetReturnValue(Stack[-2])
0x659: Pop(0)
0x65a: Stack[-10] = Stack[-2]
0x65b: Return(); Pop(8)

0x65c: Stack[-4] = 0
0x65d: PushEmpty()
0x65e: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x65f: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x660: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x661: Push((int) 1)
0x662: IF (Stack[-1] == 0) GOTO 0x687; Pop(1)

0x663: PushEmpty(string)
0x664: Stack[-1] = "Neutral"
0x665: Call2 0x6a5

0x666: Pop(1)
0x667: Push((int) 527184)
0x668: @@ SetMessage(Stack[-1])
0x669: Pop(1)
0x66a: @@ ClearReplies()
0x66b: Pop(0)
0x66c: PushEmpty(bool)
0x66d: Stack[-1] = (bool) 0
0x66e: PushEmpty(bool, object)
0x66f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x670: Call2 0xc98

0x671: Pop(1)
0x672: IF (Stack[-1] == 0) GOTO 0x679; Pop(1)

0x673: PushEmpty(bool, object)
0x674: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x675: Call2 0xca4

0x676: Pop(1)
0x677: IF (Stack[-1] == 0) GOTO 0x679; Pop(1)

0x678: Stack[-1] = (bool) 1
0x679: IF (Stack[-1] == 0) GOTO 0x67f; Pop(1)

0x67a: Push((int) 527185)
0x67b: Push((int) 28494)
0x67c: Push((int) 28493)
0x67d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67e: Pop(3)
0x67f: Push((int) 527188)
0x680: Push((int) -1)
0x681: Push((int) 28496)
0x682: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x683: Pop(3)
0x684: GOTO 0x687

0x685: Return(); Pop(0)

0x686: GOTO 0x661

0x687: PushEmpty(bool)
0x688: Call2 0xbca

0x689: Pop(0)
0x68a: IF (Stack[-1] == 0) GOTO 0x696; Pop(1)

0x68b: @ lshWaitForAnimEnd()
0x68c: Pop(0)
0x68d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x68e: IF (Stack[-1] == 0) GOTO 0x690; Pop(1)

0x68f: GOTO 0x695

0x690: PushEmpty(string)
0x691: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x692: Call2 0xb21

0x693: Pop(1)
0x694: GOTO 0x68b

0x695: GOTO 0x6a4

0x696: Push("all")
0x697: Push("idle")
0x698: @ PlayAnimation(Stack[-2], Stack[-1])
0x699: Pop(2)
0x69a: @ WaitForAnimEnd()
0x69b: Pop(0)
0x69c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x69d: IF (Stack[-1] == 0) GOTO 0x69f; Pop(1)

0x69e: GOTO 0x6a4

0x69f: Push("all")
0x6a0: Push("idle")
0x6a1: @ PlayAnimation(Stack[-2], Stack[-1])
0x6a2: Pop(2)
0x6a3: GOTO 0x69a

0x6a4: Return(); Pop(0)

0x6a5: PushEmpty()
0x6a6: PushEmpty(bool)
0x6a7: Call2 0xbca

0x6a8: Pop(0)
0x6a9: Pop(1); Push((bool) Stack[-1] == 0)
0x6aa: IF (Stack[-1] == 0) GOTO 0x6ac; Pop(1)

0x6ab: Return(); Pop(0)

0x6ac: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x6ad: IF (Stack[-1] == 0) GOTO 0x6af; Pop(1)

0x6ae: Return(); Pop(0)

0x6af: PushEmpty(string, bool)
0x6b0: Stack[-2] = Stack[-3]
0x6b1: Push("")
0x6b2: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x6b3: IF (Stack[-1] == 0) GOTO 0x6b6; Pop(1)

0x6b4: Stack[-1] = (bool) 0
0x6b5: GOTO 0x6b7

0x6b6: Stack[-1] = (bool) 1
0x6b7: Call2 0xb31

0x6b8: Pop(2)
0x6b9: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x6ba: Return(); Pop(0)

0x6bb: PushEmpty()
0x6bc: Push((int) 1)
0x6bd: IF (Stack[-1] == 0) GOTO 0x74a; Pop(1)

0x6be: PushEmpty()
0x6bf: Call2 0xb4f

0x6c0: Pop(0)
0x6c1: Push((int) 28493)
0x6c2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6c3: IF (Stack[-1] == 0) GOTO 0x6c9; Pop(1)

0x6c4: PushEmpty(object, object)
0x6c5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6c6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6c7: Call2 0xc0a

0x6c8: Pop(2)
0x6c9: Push((int) 28602)
0x6ca: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6cb: IF (Stack[-1] == 0) GOTO 0x6d1; Pop(1)

0x6cc: PushEmpty(object, object)
0x6cd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6ce: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6cf: Call2 0xc10

0x6d0: Pop(2)
0x6d1: Push((int) 28603)
0x6d2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6d3: IF (Stack[-1] == 0) GOTO 0x6d9; Pop(1)

0x6d4: PushEmpty(object, object)
0x6d5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6d6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6d7: Call2 0xc10

0x6d8: Pop(2)
0x6d9: Push((int) 28492)
0x6da: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6db: IF (Stack[-1] == 0) GOTO 0x6fe; Pop(1)

0x6dc: PushEmpty(string)
0x6dd: Stack[-1] = "Neutral"
0x6de: Call2 0x6a5

0x6df: Pop(1)
0x6e0: Push((int) 527184)
0x6e1: @@ SetMessage(Stack[-1])
0x6e2: Pop(1)
0x6e3: @@ ClearReplies()
0x6e4: Pop(0)
0x6e5: PushEmpty(bool)
0x6e6: Stack[-1] = (bool) 0
0x6e7: PushEmpty(bool, object)
0x6e8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6e9: Call2 0xc98

0x6ea: Pop(1)
0x6eb: IF (Stack[-1] == 0) GOTO 0x6f2; Pop(1)

0x6ec: PushEmpty(bool, object)
0x6ed: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6ee: Call2 0xca4

0x6ef: Pop(1)
0x6f0: IF (Stack[-1] == 0) GOTO 0x6f2; Pop(1)

0x6f1: Stack[-1] = (bool) 1
0x6f2: IF (Stack[-1] == 0) GOTO 0x6f8; Pop(1)

0x6f3: Push((int) 527185)
0x6f4: Push((int) 28494)
0x6f5: Push((int) 28493)
0x6f6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f7: Pop(3)
0x6f8: Push((int) 527188)
0x6f9: Push((int) -1)
0x6fa: Push((int) 28496)
0x6fb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6fc: Pop(3)
0x6fd: Return(); Pop(0)

0x6fe: Push((int) 28494)
0x6ff: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x700: IF (Stack[-1] == 0) GOTO 0x710; Pop(1)

0x701: PushEmpty(string)
0x702: Stack[-1] = "Neutral"
0x703: Call2 0x6a5

0x704: Pop(1)
0x705: Push((int) 527186)
0x706: @@ SetMessage(Stack[-1])
0x707: Pop(1)
0x708: @@ ClearReplies()
0x709: Pop(0)
0x70a: Push((int) 527187)
0x70b: Push((int) 28597)
0x70c: Push((int) 28495)
0x70d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x70e: Pop(3)
0x70f: Return(); Pop(0)

0x710: Push((int) 28597)
0x711: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x712: IF (Stack[-1] == 0) GOTO 0x727; Pop(1)

0x713: PushEmpty(string)
0x714: Stack[-1] = "Neutral"
0x715: Call2 0x6a5

0x716: Pop(1)
0x717: Push((int) 527284)
0x718: @@ SetMessage(Stack[-1])
0x719: Pop(1)
0x71a: @@ ClearReplies()
0x71b: Pop(0)
0x71c: Push((int) 527285)
0x71d: Push((int) 28600)
0x71e: Push((int) 28598)
0x71f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x720: Pop(3)
0x721: Push((int) 527286)
0x722: Push((int) 28600)
0x723: Push((int) 28599)
0x724: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x725: Pop(3)
0x726: Return(); Pop(0)

0x727: Push((int) 28600)
0x728: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x729: IF (Stack[-1] == 0) GOTO 0x73e; Pop(1)

0x72a: PushEmpty(string)
0x72b: Stack[-1] = "Neutral"
0x72c: Call2 0x6a5

0x72d: Pop(1)
0x72e: Push((int) 527287)
0x72f: @@ SetMessage(Stack[-1])
0x730: Pop(1)
0x731: @@ ClearReplies()
0x732: Pop(0)
0x733: Push((int) 527288)
0x734: Push((int) -1)
0x735: Push((int) 28602)
0x736: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x737: Pop(3)
0x738: Push((int) 527289)
0x739: Push((int) -1)
0x73a: Push((int) 28603)
0x73b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73c: Pop(3)
0x73d: Return(); Pop(0)

0x73e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x73f: PushEmpty(bool)
0x740: Call2 0xbca

0x741: Pop(0)
0x742: IF (Stack[-1] == 0) GOTO 0x746; Pop(1)

0x743: @ lshStopAnimation()
0x744: Pop(0)
0x745: GOTO 0x748

0x746: @ StopAnimation()
0x747: Pop(0)
0x748: Return(); Pop(0)

0x749: GOTO 0x6bc

0x74a: Return(); Pop(0)

0x74b: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x74c: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x74d: PushEmpty(bool, object, float)
0x74e: Stack[-2] = Stack[-12]
0x74f: Stack[-1] = (float) 70.0
0x750: Call2 0xa40

0x751: Pop(2)
0x752: Pop(1); Push((bool) Stack[-1] == 0)
0x753: IF (Stack[-1] == 0) GOTO 0x756; Pop(1)

0x754: Stack[-10] = (int) -2
0x755: Return(); Pop(8)

0x756: @ CreateDialog(Stack[-4])
0x757: Pop(0)
0x758: PushEmpty(int)
0x759: Call2 0xbc4

0x75a: Pop(0)
0x75b: @@ SetNPCName(Stack[-1])
0x75c: Pop(1)
0x75d: PushEmpty(int)
0x75e: Call2 0xbc2

0x75f: Pop(0)
0x760: @@ SetNPCDescription(Stack[-1])
0x761: Pop(1)
0x762: PushEmpty(string)
0x763: Call2 0xbc6

0x764: Pop(0)
0x765: @@ SetPhoto(Stack[-1])
0x766: Pop(1)
0x767: PushEmpty(string)
0x768: Call2 0xbc8

0x769: Pop(0)
0x76a: @@ SetPhoto2(Stack[-1])
0x76b: Pop(1)
0x76c: PushEmpty(int)
0x76d: Call2 0xd4c

0x76e: Pop(0)
0x76f: @@ SetPlayerName(Stack[-1])
0x770: Pop(1)
0x771: Stack[-2] = (int) -1
0x772: @ IsOverrideActive(Stack[-3])
0x773: Pop(0)
0x774: Push(Stack[-3])
0x775: IF (Stack[-1] == 0) GOTO 0x778; Pop(1)

0x776: Stack[-10] = (int) -2
0x777: Return(); Pop(8)

0x778: @ DoDialog(Stack[-4])
0x779: Pop(0)
0x77a: PushEmpty(bool, object)
0x77b: PushEmpty(object)
0x77c: Call2 0xb56

0x77d: Stack[-2] = Stack[-1]
0x77e: Pop(1)
0x77f: Call2 0xa97

0x780: Pop(2)
0x781: PushEmpty(object, object)
0x782: Stack[-2] = Stack[-11]
0x783: Stack[-1] = Stack[-6]
0x784: Push(-2, 4); TaskCall(9)
0x785: Call2 0x79c

0x786: Pop(-2, 4); TaskReturn
0x787: Pop(2)
0x788: @@ IsDialogEnd(Stack[-1])
0x789: Pop(0)
0x78a: Pop(0); Push((bool) Stack[-1] == 0)
0x78b: IF (Stack[-1] == 0) GOTO 0x791; Pop(1)

0x78c: @ sync()
0x78d: Pop(0)
0x78e: @@ IsDialogEnd(Stack[-1])
0x78f: Pop(0)
0x790: GOTO 0x78a

0x791: PushEmpty(object)
0x792: Stack[-1] = Stack[-10]
0x793: Call2 0xa85

0x794: Pop(1)
0x795: @ StopDialog(Stack[-4])
0x796: Pop(0)
0x797: @@ GetReturnValue(Stack[-2])
0x798: Pop(0)
0x799: Stack[-10] = Stack[-2]
0x79a: Return(); Pop(8)

0x79b: Stack[-4] = 0
0x79c: PushEmpty()
0x79d: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x79e: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x79f: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x7a0: Push((int) 1)
0x7a1: IF (Stack[-1] == 0) GOTO 0x7bd; Pop(1)

0x7a2: PushEmpty(string)
0x7a3: Stack[-1] = "Neutral"
0x7a4: Call2 0x7db

0x7a5: Pop(1)
0x7a6: Push((int) 535231)
0x7a7: @@ SetMessage(Stack[-1])
0x7a8: Pop(1)
0x7a9: @@ ClearReplies()
0x7aa: Pop(0)
0x7ab: Push((int) 535232)
0x7ac: Push((int) 36953)
0x7ad: Push((int) 36907)
0x7ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7af: Pop(3)
0x7b0: Push((int) 535233)
0x7b1: Push((int) -1)
0x7b2: Push((int) 36908)
0x7b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b4: Pop(3)
0x7b5: Push((int) 535280)
0x7b6: Push((int) -1)
0x7b7: Push((int) 36956)
0x7b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b9: Pop(3)
0x7ba: GOTO 0x7bd

0x7bb: Return(); Pop(0)

0x7bc: GOTO 0x7a0

0x7bd: PushEmpty(bool)
0x7be: Call2 0xbca

0x7bf: Pop(0)
0x7c0: IF (Stack[-1] == 0) GOTO 0x7cc; Pop(1)

0x7c1: @ lshWaitForAnimEnd()
0x7c2: Pop(0)
0x7c3: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7c4: IF (Stack[-1] == 0) GOTO 0x7c6; Pop(1)

0x7c5: GOTO 0x7cb

0x7c6: PushEmpty(string)
0x7c7: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7c8: Call2 0xb21

0x7c9: Pop(1)
0x7ca: GOTO 0x7c1

0x7cb: GOTO 0x7da

0x7cc: Push("all")
0x7cd: Push("idle")
0x7ce: @ PlayAnimation(Stack[-2], Stack[-1])
0x7cf: Pop(2)
0x7d0: @ WaitForAnimEnd()
0x7d1: Pop(0)
0x7d2: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7d3: IF (Stack[-1] == 0) GOTO 0x7d5; Pop(1)

0x7d4: GOTO 0x7da

0x7d5: Push("all")
0x7d6: Push("idle")
0x7d7: @ PlayAnimation(Stack[-2], Stack[-1])
0x7d8: Pop(2)
0x7d9: GOTO 0x7d0

0x7da: Return(); Pop(0)

0x7db: PushEmpty()
0x7dc: PushEmpty(bool)
0x7dd: Call2 0xbca

0x7de: Pop(0)
0x7df: Pop(1); Push((bool) Stack[-1] == 0)
0x7e0: IF (Stack[-1] == 0) GOTO 0x7e2; Pop(1)

0x7e1: Return(); Pop(0)

0x7e2: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x7e3: IF (Stack[-1] == 0) GOTO 0x7e5; Pop(1)

0x7e4: Return(); Pop(0)

0x7e5: PushEmpty(string, bool)
0x7e6: Stack[-2] = Stack[-3]
0x7e7: Push("")
0x7e8: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x7e9: IF (Stack[-1] == 0) GOTO 0x7ec; Pop(1)

0x7ea: Stack[-1] = (bool) 0
0x7eb: GOTO 0x7ed

0x7ec: Stack[-1] = (bool) 1
0x7ed: Call2 0xb31

0x7ee: Pop(2)
0x7ef: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x7f0: Return(); Pop(0)

0x7f1: PushEmpty()
0x7f2: Push((int) 1)
0x7f3: IF (Stack[-1] == 0) GOTO 0x84d; Pop(1)

0x7f4: PushEmpty()
0x7f5: Call2 0xb4f

0x7f6: Pop(0)
0x7f7: Push((int) 36906)
0x7f8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7f9: IF (Stack[-1] == 0) GOTO 0x813; Pop(1)

0x7fa: PushEmpty(string)
0x7fb: Stack[-1] = "Neutral"
0x7fc: Call2 0x7db

0x7fd: Pop(1)
0x7fe: Push((int) 535231)
0x7ff: @@ SetMessage(Stack[-1])
0x800: Pop(1)
0x801: @@ ClearReplies()
0x802: Pop(0)
0x803: Push((int) 535232)
0x804: Push((int) 36953)
0x805: Push((int) 36907)
0x806: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x807: Pop(3)
0x808: Push((int) 535233)
0x809: Push((int) -1)
0x80a: Push((int) 36908)
0x80b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x80c: Pop(3)
0x80d: Push((int) 535280)
0x80e: Push((int) -1)
0x80f: Push((int) 36956)
0x810: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x811: Pop(3)
0x812: Return(); Pop(0)

0x813: Push((int) 36953)
0x814: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x815: IF (Stack[-1] == 0) GOTO 0x82a; Pop(1)

0x816: PushEmpty(string)
0x817: Stack[-1] = "Neutral"
0x818: Call2 0x7db

0x819: Pop(1)
0x81a: Push((int) 535277)
0x81b: @@ SetMessage(Stack[-1])
0x81c: Pop(1)
0x81d: @@ ClearReplies()
0x81e: Pop(0)
0x81f: Push((int) 535278)
0x820: Push((int) 36957)
0x821: Push((int) 36954)
0x822: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x823: Pop(3)
0x824: Push((int) 535279)
0x825: Push((int) 36957)
0x826: Push((int) 36955)
0x827: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x828: Pop(3)
0x829: Return(); Pop(0)

0x82a: Push((int) 36957)
0x82b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x82c: IF (Stack[-1] == 0) GOTO 0x841; Pop(1)

0x82d: PushEmpty(string)
0x82e: Stack[-1] = "Neutral"
0x82f: Call2 0x7db

0x830: Pop(1)
0x831: Push((int) 535281)
0x832: @@ SetMessage(Stack[-1])
0x833: Pop(1)
0x834: @@ ClearReplies()
0x835: Pop(0)
0x836: Push((int) 535282)
0x837: Push((int) -1)
0x838: Push((int) 36958)
0x839: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x83a: Pop(3)
0x83b: Push((int) 535283)
0x83c: Push((int) -1)
0x83d: Push((int) 36959)
0x83e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x83f: Pop(3)
0x840: Return(); Pop(0)

0x841: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x842: PushEmpty(bool)
0x843: Call2 0xbca

0x844: Pop(0)
0x845: IF (Stack[-1] == 0) GOTO 0x849; Pop(1)

0x846: @ lshStopAnimation()
0x847: Pop(0)
0x848: GOTO 0x84b

0x849: @ StopAnimation()
0x84a: Pop(0)
0x84b: Return(); Pop(0)

0x84c: GOTO 0x7f2

0x84d: Return(); Pop(0)

0x84e: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x84f: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x850: PushEmpty(bool, object, float)
0x851: Stack[-2] = Stack[-12]
0x852: Stack[-1] = (float) 70.0
0x853: Call2 0xa40

0x854: Pop(2)
0x855: Pop(1); Push((bool) Stack[-1] == 0)
0x856: IF (Stack[-1] == 0) GOTO 0x859; Pop(1)

0x857: Stack[-10] = (int) -2
0x858: Return(); Pop(8)

0x859: @ CreateDialog(Stack[-4])
0x85a: Pop(0)
0x85b: PushEmpty(int)
0x85c: Call2 0xbc4

0x85d: Pop(0)
0x85e: @@ SetNPCName(Stack[-1])
0x85f: Pop(1)
0x860: PushEmpty(int)
0x861: Call2 0xbc2

0x862: Pop(0)
0x863: @@ SetNPCDescription(Stack[-1])
0x864: Pop(1)
0x865: PushEmpty(string)
0x866: Call2 0xbc6

0x867: Pop(0)
0x868: @@ SetPhoto(Stack[-1])
0x869: Pop(1)
0x86a: PushEmpty(string)
0x86b: Call2 0xbc8

0x86c: Pop(0)
0x86d: @@ SetPhoto2(Stack[-1])
0x86e: Pop(1)
0x86f: PushEmpty(int)
0x870: Call2 0xd4c

0x871: Pop(0)
0x872: @@ SetPlayerName(Stack[-1])
0x873: Pop(1)
0x874: Stack[-2] = (int) -1
0x875: @ IsOverrideActive(Stack[-3])
0x876: Pop(0)
0x877: Push(Stack[-3])
0x878: IF (Stack[-1] == 0) GOTO 0x87b; Pop(1)

0x879: Stack[-10] = (int) -2
0x87a: Return(); Pop(8)

0x87b: @ DoDialog(Stack[-4])
0x87c: Pop(0)
0x87d: PushEmpty(bool, object)
0x87e: PushEmpty(object)
0x87f: Call2 0xb56

0x880: Stack[-2] = Stack[-1]
0x881: Pop(1)
0x882: Call2 0xa97

0x883: Pop(2)
0x884: PushEmpty(object, object)
0x885: Stack[-2] = Stack[-11]
0x886: Stack[-1] = Stack[-6]
0x887: Push(-2, 4); TaskCall(11)
0x888: Call2 0x89f

0x889: Pop(-2, 4); TaskReturn
0x88a: Pop(2)
0x88b: @@ IsDialogEnd(Stack[-1])
0x88c: Pop(0)
0x88d: Pop(0); Push((bool) Stack[-1] == 0)
0x88e: IF (Stack[-1] == 0) GOTO 0x894; Pop(1)

0x88f: @ sync()
0x890: Pop(0)
0x891: @@ IsDialogEnd(Stack[-1])
0x892: Pop(0)
0x893: GOTO 0x88d

0x894: PushEmpty(object)
0x895: Stack[-1] = Stack[-10]
0x896: Call2 0xa85

0x897: Pop(1)
0x898: @ StopDialog(Stack[-4])
0x899: Pop(0)
0x89a: @@ GetReturnValue(Stack[-2])
0x89b: Pop(0)
0x89c: Stack[-10] = Stack[-2]
0x89d: Return(); Pop(8)

0x89e: Stack[-4] = 0
0x89f: PushEmpty()
0x8a0: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x8a1: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x8a2: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x8a3: Push((int) 1)
0x8a4: IF (Stack[-1] == 0) GOTO 0x8bb; Pop(1)

0x8a5: PushEmpty(string)
0x8a6: Stack[-1] = "Neutral"
0x8a7: Call2 0x8d9

0x8a8: Pop(1)
0x8a9: Push((int) 540539)
0x8aa: @@ SetMessage(Stack[-1])
0x8ab: Pop(1)
0x8ac: @@ ClearReplies()
0x8ad: Pop(0)
0x8ae: Push((int) 540540)
0x8af: Push((int) -1)
0x8b0: Push((int) 42549)
0x8b1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8b2: Pop(3)
0x8b3: Push((int) 540799)
0x8b4: Push((int) -1)
0x8b5: Push((int) 42848)
0x8b6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8b7: Pop(3)
0x8b8: GOTO 0x8bb

0x8b9: Return(); Pop(0)

0x8ba: GOTO 0x8a3

0x8bb: PushEmpty(bool)
0x8bc: Call2 0xbca

0x8bd: Pop(0)
0x8be: IF (Stack[-1] == 0) GOTO 0x8ca; Pop(1)

0x8bf: @ lshWaitForAnimEnd()
0x8c0: Pop(0)
0x8c1: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8c2: IF (Stack[-1] == 0) GOTO 0x8c4; Pop(1)

0x8c3: GOTO 0x8c9

0x8c4: PushEmpty(string)
0x8c5: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8c6: Call2 0xb21

0x8c7: Pop(1)
0x8c8: GOTO 0x8bf

0x8c9: GOTO 0x8d8

0x8ca: Push("all")
0x8cb: Push("idle")
0x8cc: @ PlayAnimation(Stack[-2], Stack[-1])
0x8cd: Pop(2)
0x8ce: @ WaitForAnimEnd()
0x8cf: Pop(0)
0x8d0: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8d1: IF (Stack[-1] == 0) GOTO 0x8d3; Pop(1)

0x8d2: GOTO 0x8d8

0x8d3: Push("all")
0x8d4: Push("idle")
0x8d5: @ PlayAnimation(Stack[-2], Stack[-1])
0x8d6: Pop(2)
0x8d7: GOTO 0x8ce

0x8d8: Return(); Pop(0)

0x8d9: PushEmpty()
0x8da: PushEmpty(bool)
0x8db: Call2 0xbca

0x8dc: Pop(0)
0x8dd: Pop(1); Push((bool) Stack[-1] == 0)
0x8de: IF (Stack[-1] == 0) GOTO 0x8e0; Pop(1)

0x8df: Return(); Pop(0)

0x8e0: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x8e1: IF (Stack[-1] == 0) GOTO 0x8e3; Pop(1)

0x8e2: Return(); Pop(0)

0x8e3: PushEmpty(string, bool)
0x8e4: Stack[-2] = Stack[-3]
0x8e5: Push("")
0x8e6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x8e7: IF (Stack[-1] == 0) GOTO 0x8ea; Pop(1)

0x8e8: Stack[-1] = (bool) 0
0x8e9: GOTO 0x8eb

0x8ea: Stack[-1] = (bool) 1
0x8eb: Call2 0xb31

0x8ec: Pop(2)
0x8ed: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x8ee: Return(); Pop(0)

0x8ef: PushEmpty()
0x8f0: Push((int) 1)
0x8f1: IF (Stack[-1] == 0) GOTO 0x918; Pop(1)

0x8f2: PushEmpty()
0x8f3: Call2 0xb4f

0x8f4: Pop(0)
0x8f5: Push((int) 42548)
0x8f6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8f7: IF (Stack[-1] == 0) GOTO 0x90c; Pop(1)

0x8f8: PushEmpty(string)
0x8f9: Stack[-1] = "Neutral"
0x8fa: Call2 0x8d9

0x8fb: Pop(1)
0x8fc: Push((int) 540539)
0x8fd: @@ SetMessage(Stack[-1])
0x8fe: Pop(1)
0x8ff: @@ ClearReplies()
0x900: Pop(0)
0x901: Push((int) 540540)
0x902: Push((int) -1)
0x903: Push((int) 42549)
0x904: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x905: Pop(3)
0x906: Push((int) 540799)
0x907: Push((int) -1)
0x908: Push((int) 42848)
0x909: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x90a: Pop(3)
0x90b: Return(); Pop(0)

0x90c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x90d: PushEmpty(bool)
0x90e: Call2 0xbca

0x90f: Pop(0)
0x910: IF (Stack[-1] == 0) GOTO 0x914; Pop(1)

0x911: @ lshStopAnimation()
0x912: Pop(0)
0x913: GOTO 0x916

0x914: @ StopAnimation()
0x915: Pop(0)
0x916: Return(); Pop(0)

0x917: GOTO 0x8f0

0x918: Return(); Pop(0)

0x919: PushEmpty()
0x91a: Call2 0x91d

0x91b: Pop(0)
0x91c: Return(); Pop(0)

0x91d: PushEmpty(bool)
0x91e: Call2 0xa3b

0x91f: Pop(0)
0x920: Pop(1); Push((bool) Stack[-1] == 0)
0x921: IF (Stack[-1] == 0) GOTO 0x924; Pop(1)

0x922: @ Hold()
0x923: Pop(0)
0x924: @ GetDirection(Stack[-0])
0x925: Pop(0)
0x926: PushEmpty()
0x927: Call2 0x9cd

0x928: Pop(0)
0x929: GOTO 0x926

0x92a: Return(); Pop(0)

0x92b: PushEmpty(object, object)
0x92c: Push("player")
0x92d: @ FindActor(Stack[-2], Stack[-1])
0x92e: Pop(1)
0x92f: Pop(0); Push((bool) Stack[-1] == 0)
0x930: IF (Stack[-1] == 0) GOTO 0x933; Pop(1)

0x931: Stack[-3] = (bool) 0
0x932: Return(); Pop(2)

0x933: PushEmpty(bool, object)
0x934: Stack[-1] = Stack[-3]
0x935: Call2 0xa32

0x936: Stack[-5] = Stack[-2]
0x937: Pop(2)
0x938: Return(); Pop(2)

0x939: Stack[-1] = 0
0x93a: Push(CvectorIndex(Stack[-0], 0))
0x93b: Push(CvectorIndex(Stack[-0], 2))
0x93c: @ RotateAsync(Stack[-2], Stack[-1])
0x93d: Pop(2)
0x93e: Return(); Pop(0)

0x93f: PushEmpty(object, bool, object, bool)
0x940: Push("player")
0x941: @ FindActor(Stack[-3], Stack[-1])
0x942: Pop(1)
0x943: Pop(0); Push((bool) Stack[-2] == 0)
0x944: IF (Stack[-1] == 0) GOTO 0x947; Pop(1)

0x945: Stack[-5] = (bool) 0
0x946: Return(); Pop(4)

0x947: PushEmpty(float, object)
0x948: Stack[-1] = Stack[-4]
0x949: Call2 0xa19

0x94a: Pop(1)
0x94b: Push((float)90000.0)
0x94c: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x94d: IF (Stack[-1] == 0) GOTO 0x950; Pop(1)

0x94e: Stack[-5] = (bool) 0
0x94f: Return(); Pop(4)

0x950: @ CanSee(Stack[-1], Stack[-2])
0x951: Pop(0)
0x952: Stack[-5] = Stack[-1]
0x953: Return(); Pop(4)

0x954: Stack[-2] = 0
0x955: PushEmpty(float, float)
0x956: Push((int) 8)
0x957: Push((int) 16)
0x958: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x959: Pop(2)
0x95a: Push((int) 10)
0x95b: @ SetTimer(Stack[-1], Stack[-2])
0x95c: Pop(1)
0x95d: Return(); Pop(2)

0x95e: Push((int) 10)
0x95f: @ KillTimer(Stack[-1])
0x960: Pop(1)
0x961: Return(); Pop(0)

0x962: PushEmpty()
0x963: Push((int) 10)
0x964: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x965: IF (Stack[-1] == 0) GOTO 0x987; Pop(1)

0x966: PushEmpty()
0x967: Call2 0x95e

0x968: Pop(0)
0x969: PushEmpty(bool)
0x96a: Stack[-1] = (bool) 0
0x96b: PushEmpty(bool)
0x96c: Call2 0xa3b

0x96d: Pop(0)
0x96e: IF (Stack[-1] == 0) GOTO 0x974; Pop(1)

0x96f: PushEmpty(bool)
0x970: Call2 0x93f

0x971: Pop(0)
0x972: IF (Stack[-1] == 0) GOTO 0x974; Pop(1)

0x973: Stack[-1] = (bool) 1
0x974: IF (Stack[-1] == 0) GOTO 0x981; Pop(1)

0x975: PushEmpty(bool)
0x976: Call2 0x92b

0x977: Pop(0)
0x978: IF (Stack[-1] == 0) GOTO 0x980; Pop(1)

0x979: PushEmpty(bool, object)
0x97a: PushEmpty(object)
0x97b: Call2 0xb56

0x97c: Stack[-2] = Stack[-1]
0x97d: Pop(1)
0x97e: Call2 0xad1

0x97f: Pop(2)
0x980: GOTO 0x987

0x981: PushEmpty()
0x982: Call2 0x93a

0x983: Pop(0)
0x984: PushEmpty()
0x985: Call2 0x955

0x986: Pop(0)
0x987: Return(); Pop(0)

0x988: PushEmpty()
0x989: Call2 0xa14

0x98a: Pop(0)
0x98b: PushEmpty()
0x98c: Call2 0x95e

0x98d: Pop(0)
0x98e: @ lshStopSpeech()
0x98f: Pop(0)
0x990: @ lshStopAnimation()
0x991: Pop(0)
0x992: @ StopAsync()
0x993: Pop(0)
0x994: @ Hold()
0x995: Pop(0)
0x996: Return(); Pop(0)

0x997: @ StopGroup0()
0x998: Pop(0)
0x999: PushEmpty()
0x99a: Call2 0x95e

0x99b: Pop(0)
0x99c: PushEmpty(string)
0x99d: Stack[-1] = "Neutral"
0x99e: Call2 0xb21

0x99f: Pop(1)
0x9a0: PushEmpty()
0x9a1: Call2 0x955

0x9a2: Pop(0)
0x9a3: Return(); Pop(0)

0x9a4: PushEmpty()
0x9a5: Push(Stack[-1])
0x9a6: IF (Stack[-1] == 0) GOTO 0x9ab; Pop(1)

0x9a7: PushEmpty()
0x9a8: Call2 0x955

0x9a9: Pop(0)
0x9aa: GOTO 0x9af

0x9ab: PushEmpty(string)
0x9ac: Stack[-1] = "Neutral"
0x9ad: Call2 0xb21

0x9ae: Pop(1)
0x9af: Return(); Pop(0)

0x9b0: PushEmpty(bool, bool)
0x9b1: @ IsOverrideActive(Stack[-1])
0x9b2: Pop(0)
0x9b3: Pop(0); Push((bool) Stack[-1] == 0)
0x9b4: IF (Stack[-1] == 0) GOTO 0x9cc; Pop(1)

0x9b5: EventDisable(0)
0x9b6: PushEmpty()
0x9b7: Call2 0xa14

0x9b8: Pop(0)
0x9b9: PushEmpty(bool, object)
0x9ba: Stack[-1] = Stack[-5]
0x9bb: Call2 0xa32

0x9bc: Pop(2)
0x9bd: EventEnable(0)
0x9be: PushEmpty(object)
0x9bf: Stack[-1] = Stack[-4]
0x9c0: Call2 0xd5d

0x9c1: Pop(1)
0x9c2: PushEmpty(string)
0x9c3: Stack[-1] = "Neutral"
0x9c4: Call2 0xb21

0x9c5: Pop(1)
0x9c6: PushEmpty()
0x9c7: Call2 0x95e

0x9c8: Pop(0)
0x9c9: PushEmpty()
0x9ca: Call2 0x955

0x9cb: Pop(0)
0x9cc: Return(); Pop(2)

0x9cd: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x9ce: @ WaitForAnimEnd()
0x9cf: Pop(0)
0x9d0: PushEmpty(bool)
0x9d1: Call2 0xa3b

0x9d2: Pop(0)
0x9d3: Pop(1); Push((bool) Stack[-1] == 0)
0x9d4: IF (Stack[-1] == 0) GOTO 0x9d6; Pop(1)

0x9d5: Return(); Pop(12)

0x9d6: PushEmpty(int)
0x9d7: Call2 0xbb1

0x9d8: Stack[-7] = Stack[-1]
0x9d9: Pop(1)
0x9da: Stack[-5] = (int) 0
0x9db: PushEmpty(bool)
0x9dc: Stack[-1] = (bool) 0
0x9dd: Push((int) 5)
0x9de: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x9df: IF (Stack[-1] == 0) GOTO 0x9e5; Pop(1)

0x9e0: PushEmpty(bool)
0x9e1: Call2 0xa3b

0x9e2: Pop(0)
0x9e3: IF (Stack[-1] == 0) GOTO 0x9e5; Pop(1)

0x9e4: Stack[-1] = (bool) 1
0x9e5: IF (Stack[-1] == 0) GOTO 0xa0f; Pop(1)

0x9e6: Pop(0); Push((bool) Stack[-6] == 0)
0x9e7: IF (Stack[-1] == 0) GOTO 0x9ef; Pop(1)

0x9e8: Push((int) 3)
0x9e9: @ Sleep(Stack[-1], Stack[-5])
0x9ea: Pop(1)
0x9eb: Pop(0); Push((bool) Stack[-4] == 0)
0x9ec: IF (Stack[-1] == 0) GOTO 0x9ee; Pop(1)

0x9ed: GOTO 0xa0f

0x9ee: GOTO 0xa04

0x9ef: @ irand(Stack[-3], Stack[-6])
0x9f0: Pop(0)
0x9f1: Push((int) 5)
0x9f2: @ irand(Stack[-3], Stack[-1])
0x9f3: Pop(1)
0x9f4: Push((int) 0)
0x9f5: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x9f6: IF (Stack[-1] == 0) GOTO 0x9f8; Pop(1)

0x9f7: Stack[-3] = (int) 0
0x9f8: Push("all")
0x9f9: PushEmpty(string, int)
0x9fa: Stack[-1] = Stack[-6]
0x9fb: Call2 0xbaa

0x9fc: Pop(1)
0x9fd: @ PlayAnimation(Stack[-2], Stack[-1])
0x9fe: Pop(2)
0x9ff: @ WaitForAnimEnd(Stack[-1])
0xa00: Pop(0)
0xa01: Pop(0); Push((bool) Stack[-1] == 0)
0xa02: IF (Stack[-1] == 0) GOTO 0xa04; Pop(1)

0xa03: GOTO 0xa0f

0xa04: PushEmpty(bool)
0xa05: Call2 0xa12

0xa06: Pop(0)
0xa07: Pop(1); Push((bool) Stack[-1] == 0)
0xa08: IF (Stack[-1] == 0) GOTO 0xa0a; Pop(1)

0xa09: GOTO 0xa0f

0xa0a: @ ResetAAS()
0xa0b: Pop(0)
0xa0c: Push((int) 1)
0xa0d: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0xa0e: GOTO 0x9db

0xa0f: @ ResetAAS()
0xa10: Pop(0)
0xa11: Return(); Pop(12)

0xa12: Stack[-1] = (bool) 1
0xa13: Return(); Pop(0)

0xa14: @ StopAnimation()
0xa15: Pop(0)
0xa16: @ StopGroup0()
0xa17: Pop(0)
0xa18: Return(); Pop(0)

0xa19: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xa1a: @ GetPosition(Stack[-3])
0xa1b: Pop(0)
0xa1c: @@ GetPosition(Stack[-2])
0xa1d: Pop(0)
0xa1e: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0xa1f: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0xa20: Return(); Pop(6)

0xa21: PushEmpty(int, int)
0xa22: @@ GetProperty(Stack[-4], Stack[-1])
0xa23: Pop(0)
0xa24: Pop(0); Push(Stack[-1] + Stack[-3]);
0xa25: @@ SetProperty(Stack[-5], Stack[-1])
0xa26: Pop(1)
0xa27: Return(); Pop(2)

0xa28: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0xa29: @ GetPosition(Stack[-3])
0xa2a: Pop(0)
0xa2b: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0xa2c: Push(CvectorIndex(Stack[-2], 0))
0xa2d: Push(CvectorIndex(Stack[-3], 2))
0xa2e: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0xa2f: Pop(2)
0xa30: Stack[-8] = Stack[-1]
0xa31: Return(); Pop(6)

0xa32: PushEmpty(cvector, cvector)
0xa33: @@ GetPosition(Stack[-1])
0xa34: Pop(0)
0xa35: PushEmpty(bool, cvector)
0xa36: Stack[-1] = Stack[-3]
0xa37: Call2 0xa28

0xa38: Stack[-6] = Stack[-2]
0xa39: Pop(2)
0xa3a: Return(); Pop(2)

0xa3b: PushEmpty(bool, bool)
0xa3c: @ IsLoaded(Stack[-1])
0xa3d: Pop(0)
0xa3e: Stack[-3] = Stack[-1]
0xa3f: Return(); Pop(2)

0xa40: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0xa41: @@ GetPosition(Stack[-8])
0xa42: Pop(0)
0xa43: @@ GetEyesHeight(Stack[-9])
0xa44: Pop(0)
0xa45: Push(CvectorIndex(Stack[-8], 1))
0xa46: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xa47: CvectorIndex(Stack[-9], 1) = Stack[-1];
0xa48: @ GetPosition(Stack[-7])
0xa49: Pop(0)
0xa4a: @ GetEyesHeight(Stack[-9])
0xa4b: Pop(0)
0xa4c: Push(CvectorIndex(Stack[-7], 1))
0xa4d: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xa4e: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xa4f: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xa50: Push(CvectorIndex(Stack[-6], 1))
0xa51: Stack[-1] = (int) 0
0xa52: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xa53: Pop(0); Push(Stack[-6] | Stack[-6]);
0xa54: Pop(1); Push(Sqrt(Stack[-1]))
0xa55: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0xa56: Stack[-5] = -Stack[-6]; Pop(0);
0xa57: Pop(0); Push(Stack[-6] * Stack[-19]);
0xa58: PushEmpty(cvector, cvector)
0xa59: Push(CVector(0.0, 1.0, 0.0))
0xa5a: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0xa5b: Call2 0xb5c

0xa5c: Pop(1)
0xa5d: Push((int) 25)
0xa5e: Pop(2); Push(Stack[-2] * Stack[-1]);
0xa5f: Pop(2); Push(Stack[-2] + Stack[-1]);
0xa60: Push(CVector(0.0, 10.0, 0.0))
0xa61: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xa62: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0xa63: @ IsOverrideActive(Stack[-2])
0xa64: Pop(0)
0xa65: Push(Stack[-2])
0xa66: IF (Stack[-1] == 0) GOTO 0xa69; Pop(1)

0xa67: Stack[-21] = (bool) 0
0xa68: Return(); Pop(18)

0xa69: @ StopWorld()
0xa6a: Pop(0)
0xa6b: Push((bool) 1)
0xa6c: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0xa6d: Pop(1)
0xa6e: Push(CvectorIndex(Stack[-4], 0))
0xa6f: Push(CvectorIndex(Stack[-5], 2))
0xa70: @ Rotate(Stack[-2], Stack[-1])
0xa71: Pop(2)
0xa72: PushEmpty(bool)
0xa73: Call2 0xbca

0xa74: Pop(0)
0xa75: IF (Stack[-1] == 0) GOTO 0xa77; Pop(1)

0xa76: GOTO 0xa7f

0xa77: Push("head")
0xa78: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xa79: Pop(1)
0xa7a: Push(Stack[-1])
0xa7b: IF (Stack[-1] == 0) GOTO 0xa7f; Pop(1)

0xa7c: Push("head")
0xa7d: @ LookAsyncCamera(Stack[-1])
0xa7e: Pop(1)
0xa7f: @ CameraWaitForPlayFinish()
0xa80: Pop(0)
0xa81: @ ResumeWorld()
0xa82: Pop(0)
0xa83: Stack[-21] = (bool) 1
0xa84: Return(); Pop(18)

0xa85: PushEmpty(bool, bool)
0xa86: Push((bool) 1)
0xa87: @ CameraSwitchToNormal(Stack[-1])
0xa88: Pop(1)
0xa89: PushEmpty(bool)
0xa8a: Call2 0xbca

0xa8b: Pop(0)
0xa8c: IF (Stack[-1] == 0) GOTO 0xa8e; Pop(1)

0xa8d: GOTO 0xa96

0xa8e: Push("head")
0xa8f: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xa90: Pop(1)
0xa91: Push(Stack[-1])
0xa92: IF (Stack[-1] == 0) GOTO 0xa96; Pop(1)

0xa93: Push("head")
0xa94: @ UnlookAsync(Stack[-1])
0xa95: Pop(1)
0xa96: Return(); Pop(2)

0xa97: PushEmpty(int, int, int, int)
0xa98: Push("voice_common")
0xa99: @ GetVariable(Stack[-1], Stack[-3])
0xa9a: Pop(1)
0xa9b: Push(Stack[-2])
0xa9c: IF (Stack[-1] == 0) GOTO 0xabd; Pop(1)

0xa9d: PushEmpty(bool, object)
0xa9e: Stack[-1] = Stack[-7]
0xa9f: Call2 0xad1

0xaa0: Pop(1)
0xaa1: Pop(1); Push((bool) Stack[-1] == 0)
0xaa2: IF (Stack[-1] == 0) GOTO 0xaab; Pop(1)

0xaa3: PushEmpty(bool, object)
0xaa4: Stack[-1] = Stack[-7]
0xaa5: Call2 0xaf6

0xaa6: Pop(1)
0xaa7: Pop(1); Push((bool) Stack[-1] == 0)
0xaa8: IF (Stack[-1] == 0) GOTO 0xaab; Pop(1)

0xaa9: Stack[-6] = (bool) 0
0xaaa: Return(); Pop(4)

0xaab: Push((int) 2)
0xaac: @ irand(Stack[-2], Stack[-1])
0xaad: Pop(1)
0xaae: Push(Stack[-1])
0xaaf: IF (Stack[-1] == 0) GOTO 0xab8; Pop(1)

0xab0: Push("voice_common")
0xab1: Push((int) 1)
0xab2: Pop(1); Push(Stack[-4] + Stack[-1]);
0xab3: Push((int) 3)
0xab4: Pop(2); Push(Stack[-2] % Stack[-1]);
0xab5: @ SetVariable(Stack[-2], Stack[-1])
0xab6: Pop(2)
0xab7: GOTO 0xabc

0xab8: Push("voice_common")
0xab9: Push((int) 0)
0xaba: @ SetVariable(Stack[-2], Stack[-1])
0xabb: Pop(2)
0xabc: GOTO 0xacf

0xabd: PushEmpty(bool, object)
0xabe: Stack[-1] = Stack[-7]
0xabf: Call2 0xaf6

0xac0: Pop(1)
0xac1: Pop(1); Push((bool) Stack[-1] == 0)
0xac2: IF (Stack[-1] == 0) GOTO 0xacb; Pop(1)

0xac3: PushEmpty(bool, object)
0xac4: Stack[-1] = Stack[-7]
0xac5: Call2 0xad1

0xac6: Pop(1)
0xac7: Pop(1); Push((bool) Stack[-1] == 0)
0xac8: IF (Stack[-1] == 0) GOTO 0xacb; Pop(1)

0xac9: Stack[-6] = (bool) 0
0xaca: Return(); Pop(4)

0xacb: Push("voice_common")
0xacc: Push((int) 1)
0xacd: @ SetVariable(Stack[-2], Stack[-1])
0xace: Pop(2)
0xacf: Stack[-6] = (bool) 1
0xad0: Return(); Pop(4)

0xad1: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xad2: Stack[-5] = "c"
0xad3: Stack[-4] = (int) 0
0xad4: Push((int) 1)
0xad5: IF (Stack[-1] == 0) GOTO 0xae1; Pop(1)

0xad6: Push((int) 1)
0xad7: Pop(1); Push(Stack[-5] + Stack[-1]);
0xad8: Pop(1); Push(Stack[-6] + Stack[-1]);
0xad9: @@ HasProperty(Stack[-1], Stack[-4])
0xada: Pop(1)
0xadb: Pop(0); Push((bool) Stack[-3] == 0)
0xadc: IF (Stack[-1] == 0) GOTO 0xade; Pop(1)

0xadd: GOTO 0xae1

0xade: Push((int) 1)
0xadf: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xae0: GOTO 0xad4

0xae1: Pop(0); Push((bool) Stack[-4] == 0)
0xae2: IF (Stack[-1] == 0) GOTO 0xae5; Pop(1)

0xae3: Stack[-12] = (bool) 0
0xae4: Return(); Pop(10)

0xae5: Stack[-2] = (int) 0
0xae6: Push((int) 1)
0xae7: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xae8: IF (Stack[-1] == 0) GOTO 0xaeb; Pop(1)

0xae9: @ irand(Stack[-2], Stack[-4])
0xaea: Pop(0)
0xaeb: Push((int) 1)
0xaec: Pop(1); Push(Stack[-3] + Stack[-1]);
0xaed: Pop(1); Push(Stack[-6] + Stack[-1]);
0xaee: @@ GetProperty(Stack[-1], Stack[-2])
0xaef: Pop(1)
0xaf0: PushEmpty(bool, string)
0xaf1: Stack[-1] = Stack[-3]
0xaf2: Call2 0xb40

0xaf3: Stack[-14] = Stack[-2]
0xaf4: Pop(2)
0xaf5: Return(); Pop(10)

0xaf6: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xaf7: Push("d")
0xaf8: PushEmpty(int)
0xaf9: Call2 0xb9b

0xafa: Pop(0)
0xafb: Pop(2); Push(Stack[-2] + Stack[-1]);
0xafc: Push("m")
0xafd: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0xafe: Stack[-4] = (int) 0
0xaff: Push((int) 1)
0xb00: IF (Stack[-1] == 0) GOTO 0xb0c; Pop(1)

0xb01: Push((int) 1)
0xb02: Pop(1); Push(Stack[-5] + Stack[-1]);
0xb03: Pop(1); Push(Stack[-6] + Stack[-1]);
0xb04: @@ HasProperty(Stack[-1], Stack[-4])
0xb05: Pop(1)
0xb06: Pop(0); Push((bool) Stack[-3] == 0)
0xb07: IF (Stack[-1] == 0) GOTO 0xb09; Pop(1)

0xb08: GOTO 0xb0c

0xb09: Push((int) 1)
0xb0a: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xb0b: GOTO 0xaff

0xb0c: Pop(0); Push((bool) Stack[-4] == 0)
0xb0d: IF (Stack[-1] == 0) GOTO 0xb10; Pop(1)

0xb0e: Stack[-12] = (bool) 0
0xb0f: Return(); Pop(10)

0xb10: Stack[-2] = (int) 0
0xb11: Push((int) 1)
0xb12: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xb13: IF (Stack[-1] == 0) GOTO 0xb16; Pop(1)

0xb14: @ irand(Stack[-2], Stack[-4])
0xb15: Pop(0)
0xb16: Push((int) 1)
0xb17: Pop(1); Push(Stack[-3] + Stack[-1]);
0xb18: Pop(1); Push(Stack[-6] + Stack[-1]);
0xb19: @@ GetProperty(Stack[-1], Stack[-2])
0xb1a: Pop(1)
0xb1b: PushEmpty(bool, string)
0xb1c: Stack[-1] = Stack[-3]
0xb1d: Call2 0xb40

0xb1e: Stack[-14] = Stack[-2]
0xb1f: Pop(2)
0xb20: Return(); Pop(10)

0xb21: PushEmpty(bool, float, float, bool, float, float)
0xb22: @ lshHasAnimation(Stack[-3], Stack[-7])
0xb23: Pop(0)
0xb24: Push(Stack[-3])
0xb25: IF (Stack[-1] == 0) GOTO 0xb2c; Pop(1)

0xb26: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0xb27: Pop(0)
0xb28: Push((bool) 0)
0xb29: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xb2a: Pop(1)
0xb2b: GOTO 0xb30

0xb2c: Push("Can't find lsh animation : ")
0xb2d: Pop(1); Push(Stack[-1] + Stack[-8]);
0xb2e: @ Trace(Stack[-1])
0xb2f: Pop(1)
0xb30: Return(); Pop(6)

0xb31: PushEmpty(bool, float, float, bool, float, float)
0xb32: @ lshHasAnimation(Stack[-3], Stack[-8])
0xb33: Pop(0)
0xb34: Push(Stack[-3])
0xb35: IF (Stack[-1] == 0) GOTO 0xb3b; Pop(1)

0xb36: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0xb37: Pop(0)
0xb38: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0xb39: Pop(0)
0xb3a: GOTO 0xb3f

0xb3b: Push("Can't find lsh animation : ")
0xb3c: Pop(1); Push(Stack[-1] + Stack[-9]);
0xb3d: @ Trace(Stack[-1])
0xb3e: Pop(1)
0xb3f: Return(); Pop(6)

0xb40: PushEmpty(bool, bool)
0xb41: PushEmpty(bool)
0xb42: Call2 0xbca

0xb43: Pop(0)
0xb44: IF (Stack[-1] == 0) GOTO 0xb4d; Pop(1)

0xb45: @ lshHasSpeech(Stack[-1], Stack[-3])
0xb46: Pop(0)
0xb47: Push(Stack[-1])
0xb48: IF (Stack[-1] == 0) GOTO 0xb4d; Pop(1)

0xb49: @ lshPlaySpeech(Stack[-3])
0xb4a: Pop(0)
0xb4b: Stack[-4] = (bool) 1
0xb4c: Return(); Pop(2)

0xb4d: Stack[-4] = (bool) 0
0xb4e: Return(); Pop(2)

0xb4f: PushEmpty(bool)
0xb50: Call2 0xbca

0xb51: Pop(0)
0xb52: IF (Stack[-1] == 0) GOTO 0xb55; Pop(1)

0xb53: @ lshStopSpeech()
0xb54: Pop(0)
0xb55: Return(); Pop(0)

0xb56: PushEmpty(object, object)
0xb57: @ self(Stack[-1])
0xb58: Pop(0)
0xb59: Stack[-3] = Stack[-1]
0xb5a: Return(); Pop(2)

0xb5b: Stack[-1] = 0
0xb5c: PushEmpty(float, float)
0xb5d: Pop(0); Push(Stack[-3] | Stack[-3]);
0xb5e: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xb5f: Push((float)0.0)
0xb60: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xb61: IF (Stack[-1] == 0) GOTO 0xb64; Pop(1)

0xb62: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xb63: Return(); Pop(2)

0xb64: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xb65: Return(); Pop(2)

0xb66: PushEmpty(int, int)
0xb67: @ GetVariable(Stack[-3], Stack[-1])
0xb68: Pop(0)
0xb69: Stack[-4] = Stack[-1]
0xb6a: Return(); Pop(2)

0xb6b: PushEmpty(object, object)
0xb6c: @ CreateIntVector(Stack[-1])
0xb6d: Pop(0)
0xb6e: @@ add(Stack[-4])
0xb6f: Pop(0)
0xb70: @@ add(Stack[-3])
0xb71: Pop(0)
0xb72: Push((int) 3)
0xb73: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xb74: Pop(1)
0xb75: Return(); Pop(2)

0xb76: Stack[-1] = 0
0xb77: PushEmpty(int, int)
0xb78: PushEmpty(object, string, int)
0xb79: Stack[-3] = Stack[-7]
0xb7a: Stack[-2] = "money"
0xb7b: Stack[-1] = Stack[-6]
0xb7c: Call2 0xa21

0xb7d: Pop(3)
0xb7e: Push((int) 0)
0xb7f: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0xb80: IF (Stack[-1] == 0) GOTO 0xb89; Pop(1)

0xb81: Push("Money")
0xb82: @ GetInvItemByName(Stack[-2], Stack[-1])
0xb83: Pop(1)
0xb84: PushEmpty(int, int)
0xb85: Stack[-2] = Stack[-3]
0xb86: Stack[-1] = Stack[-5]
0xb87: Call2 0xb6b

0xb88: Pop(2)
0xb89: Return(); Pop(2)

0xb8a: PushEmpty(object, object)
0xb8b: @ FindActor(Stack[-1], Stack[-4])
0xb8c: Pop(0)
0xb8d: Pop(0); Push((bool) Stack[-1] == 0)
0xb8e: IF (Stack[-1] == 0) GOTO 0xb91; Pop(1)

0xb8f: Stack[-5] = (bool) 0
0xb90: Return(); Pop(2)

0xb91: @ Trigger(Stack[-1], Stack[-3])
0xb92: Pop(0)
0xb93: Stack[-5] = (bool) 1
0xb94: Return(); Pop(2)

0xb95: Stack[-1] = 0
0xb96: PushEmpty(float, float)
0xb97: @ GetGameTime(Stack[-1])
0xb98: Pop(0)
0xb99: Stack[-3] = Stack[-1]
0xb9a: Return(); Pop(2)

0xb9b: PushEmpty(float, float)
0xb9c: @ GetGameTime(Stack[-1])
0xb9d: Pop(0)
0xb9e: Push((int) 1)
0xb9f: PushEmpty(int)
0xba0: Push((int) 24)
0xba1: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xba2: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xba3: Return(); Pop(2)

0xba4: PushEmpty()
0xba5: PushEmpty(int)
0xba6: Call2 0xb9b

0xba7: Pop(0)
0xba8: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0xba9: Return(); Pop(0)

0xbaa: PushEmpty(string, string)
0xbab: Stack[-1] = "idle"
0xbac: Push(Stack[-3])
0xbad: IF (Stack[-1] == 0) GOTO 0xbaf; Pop(1)

0xbae: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xbaf: Stack[-4] = Stack[-1]
0xbb0: Return(); Pop(2)

0xbb1: PushEmpty(int, bool, int, bool)
0xbb2: Stack[-2] = (int) 0
0xbb3: Push("all")
0xbb4: PushEmpty(string, int)
0xbb5: Stack[-1] = Stack[-5]
0xbb6: Call2 0xbaa

0xbb7: Pop(1)
0xbb8: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xbb9: Pop(2)
0xbba: Pop(0); Push((bool) Stack[-1] == 0)
0xbbb: IF (Stack[-1] == 0) GOTO 0xbbd; Pop(1)

0xbbc: GOTO 0xbc0

0xbbd: Push((int) 1)
0xbbe: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xbbf: GOTO 0xbb3

0xbc0: Stack[-5] = Stack[-2]
0xbc1: Return(); Pop(4)

0xbc2: Stack[-1] = (int) 515533
0xbc3: Return(); Pop(0)

0xbc4: Stack[-1] = (int) 502858
0xbc5: Return(); Pop(0)

0xbc6: Stack[-1] = "ui/NPC_Eva.png"
0xbc7: Return(); Pop(0)

0xbc8: Stack[-1] = "ui/NPC_Eva_b.png"
0xbc9: Return(); Pop(0)

0xbca: Stack[-1] = (bool) 1
0xbcb: Return(); Pop(0)

0xbcc: PushEmpty(object, object)
0xbcd: PushEmpty(object)
0xbce: Call2 0xd1a

0xbcf: Stack[-2] = Stack[-1]
0xbd0: Pop(1)
0xbd1: Push("k3q03EvaGotoSklad")
0xbd2: Push("pt_region01_center01")
0xbd3: Push((int) 0)
0xbd4: Push((int) 525574)
0xbd5: PushEmpty(float)
0xbd6: Call2 0xb96

0xbd7: Pop(0)
0xbd8: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xbd9: Pop(5)
0xbda: Return(); Pop(2)

0xbdb: Stack[-1] = 0
0xbdc: PushEmpty()
0xbdd: Push("k3q02")
0xbde: Push((int) 3)
0xbdf: @ SetVariable(Stack[-2], Stack[-1])
0xbe0: Pop(2)
0xbe1: PushEmpty()
0xbe2: Call2 0xcca

0xbe3: Pop(0)
0xbe4: Return(); Pop(0)

0xbe5: PushEmpty()
0xbe6: Push("ook3Eva1")
0xbe7: Push((int) 1)
0xbe8: @ SetVariable(Stack[-2], Stack[-1])
0xbe9: Pop(2)
0xbea: Return(); Pop(0)

0xbeb: PushEmpty()
0xbec: PushEmpty()
0xbed: Call2 0xcd7

0xbee: Pop(0)
0xbef: Return(); Pop(0)

0xbf0: PushEmpty()
0xbf1: Push("ook6Eva1")
0xbf2: Push((int) 1)
0xbf3: @ SetVariable(Stack[-2], Stack[-1])
0xbf4: Pop(2)
0xbf5: Return(); Pop(0)

0xbf6: PushEmpty()
0xbf7: Push("ook6Eva2")
0xbf8: Push((int) 1)
0xbf9: @ SetVariable(Stack[-2], Stack[-1])
0xbfa: Pop(2)
0xbfb: Return(); Pop(0)

0xbfc: PushEmpty()
0xbfd: @@ SelectWeapon()
0xbfe: Pop(0)
0xbff: PushEmpty(bool, string, string)
0xc00: Stack[-2] = "quest_k6_01"
0xc01: Stack[-1] = "unlock_eva"
0xc02: Call2 0xb8a

0xc03: Pop(3)
0xc04: Return(); Pop(0)

0xc05: PushEmpty()
0xc06: PushEmpty()
0xc07: Call2 0xce4

0xc08: Pop(0)
0xc09: Return(); Pop(0)

0xc0a: PushEmpty()
0xc0b: Push("ook11Eva1")
0xc0c: Push((int) 1)
0xc0d: @ SetVariable(Stack[-2], Stack[-1])
0xc0e: Pop(2)
0xc0f: Return(); Pop(0)

0xc10: PushEmpty()
0xc11: PushEmpty()
0xc12: Call2 0xcb0

0xc13: Pop(0)
0xc14: Return(); Pop(0)

0xc15: PushEmpty()
0xc16: Push("money1000 is given")
0xc17: @ Trace(Stack[-1])
0xc18: Pop(1)
0xc19: PushEmpty(object, int)
0xc1a: Stack[-2] = Stack[-4]
0xc1b: Stack[-1] = (int) 1000
0xc1c: Call2 0xb77

0xc1d: Pop(2)
0xc1e: Return(); Pop(0)

0xc1f: PushEmpty()
0xc20: Push("playsound")
0xc21: Push("givemoney")
0xc22: @ TriggerWorld(Stack[-2], Stack[-1])
0xc23: Pop(2)
0xc24: Return(); Pop(0)

0xc25: PushEmpty()
0xc26: PushEmpty(object, string, float)
0xc27: PushEmpty(object)
0xc28: Call2 0xd1a

0xc29: Stack[-4] = Stack[-1]
0xc2a: Pop(1)
0xc2b: Stack[-2] = "pt_region01_center01"
0xc2c: Stack[-1] = (int) 2
0xc2d: Call2 0xd2b

0xc2e: Pop(3)
0xc2f: PushEmpty(object)
0xc30: Call2 0xd1a

0xc31: Pop(0)
0xc32: @@ ShowMap(Stack[-1])
0xc33: Pop(1)
0xc34: Return(); Pop(0)

0xc35: PushEmpty()
0xc36: Push("k3q02")
0xc37: Push((int) -1)
0xc38: @ SetVariable(Stack[-2], Stack[-1])
0xc39: Pop(2)
0xc3a: PushEmpty()
0xc3b: Call2 0xcbd

0xc3c: Pop(0)
0xc3d: Return(); Pop(0)

0xc3e: PushEmpty()
0xc3f: Push("playsound")
0xc40: Push("giveitem")
0xc41: @ TriggerWorld(Stack[-2], Stack[-1])
0xc42: Pop(2)
0xc43: Return(); Pop(0)

0xc44: PushEmpty()
0xc45: PushEmpty(int, string)
0xc46: Stack[-1] = "k3q02"
0xc47: Call2 0xb66

0xc48: Pop(1)
0xc49: Push((int) 2)
0xc4a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc4b: IF (Stack[-1] == 0) GOTO 0xc4e; Pop(1)

0xc4c: Stack[-2] = (bool) 1
0xc4d: Return(); Pop(0)

0xc4e: Stack[-2] = (bool) 0
0xc4f: Return(); Pop(0)

0xc50: PushEmpty()
0xc51: PushEmpty(int, string)
0xc52: Stack[-1] = "k3q03"
0xc53: Call2 0xb66

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
0xc5e: Stack[-1] = "ook3Eva1"
0xc5f: Call2 0xb66

0xc60: Pop(1)
0xc61: Push((int) 0)
0xc62: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc63: IF (Stack[-1] == 0) GOTO 0xc66; Pop(1)

0xc64: Stack[-2] = (bool) 1
0xc65: Return(); Pop(0)

0xc66: Stack[-2] = (bool) 0
0xc67: Return(); Pop(0)

0xc68: PushEmpty()
0xc69: PushEmpty(int, string)
0xc6a: Stack[-1] = "k6q01"
0xc6b: Call2 0xb66

0xc6c: Pop(1)
0xc6d: Push((int) 1)
0xc6e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc6f: IF (Stack[-1] == 0) GOTO 0xc72; Pop(1)

0xc70: Stack[-2] = (bool) 1
0xc71: Return(); Pop(0)

0xc72: Stack[-2] = (bool) 0
0xc73: Return(); Pop(0)

0xc74: PushEmpty()
0xc75: PushEmpty(int, string)
0xc76: Stack[-1] = "ook6Eva1"
0xc77: Call2 0xb66

0xc78: Pop(1)
0xc79: Push((int) 0)
0xc7a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc7b: IF (Stack[-1] == 0) GOTO 0xc7e; Pop(1)

0xc7c: Stack[-2] = (bool) 1
0xc7d: Return(); Pop(0)

0xc7e: Stack[-2] = (bool) 0
0xc7f: Return(); Pop(0)

0xc80: PushEmpty()
0xc81: PushEmpty(int, string)
0xc82: Stack[-1] = "k6q01"
0xc83: Call2 0xb66

0xc84: Pop(1)
0xc85: Push((int) 2)
0xc86: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc87: IF (Stack[-1] == 0) GOTO 0xc8a; Pop(1)

0xc88: Stack[-2] = (bool) 1
0xc89: Return(); Pop(0)

0xc8a: Stack[-2] = (bool) 0
0xc8b: Return(); Pop(0)

0xc8c: PushEmpty()
0xc8d: PushEmpty(int, string)
0xc8e: Stack[-1] = "ook6Eva2"
0xc8f: Call2 0xb66

0xc90: Pop(1)
0xc91: Push((int) 0)
0xc92: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc93: IF (Stack[-1] == 0) GOTO 0xc96; Pop(1)

0xc94: Stack[-2] = (bool) 1
0xc95: Return(); Pop(0)

0xc96: Stack[-2] = (bool) 0
0xc97: Return(); Pop(0)

0xc98: PushEmpty()
0xc99: PushEmpty(int, string)
0xc9a: Stack[-1] = "k11q01"
0xc9b: Call2 0xb66

0xc9c: Pop(1)
0xc9d: Push((int) 1)
0xc9e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc9f: IF (Stack[-1] == 0) GOTO 0xca2; Pop(1)

0xca0: Stack[-2] = (bool) 1
0xca1: Return(); Pop(0)

0xca2: Stack[-2] = (bool) 0
0xca3: Return(); Pop(0)

0xca4: PushEmpty()
0xca5: PushEmpty(int, string)
0xca6: Stack[-1] = "ook11Eva1"
0xca7: Call2 0xb66

0xca8: Pop(1)
0xca9: Push((int) 0)
0xcaa: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xcab: IF (Stack[-1] == 0) GOTO 0xcae; Pop(1)

0xcac: Stack[-2] = (bool) 1
0xcad: Return(); Pop(0)

0xcae: Stack[-2] = (bool) 0
0xcaf: Return(); Pop(0)

0xcb0: PushEmpty(object, object)
0xcb1: Push((int) 482)
0xcb2: Push((int) 1)
0xcb3: Push((int) 528049)
0xcb4: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xcb5: Pop(3)
0xcb6: PushEmpty(bool, object, int)
0xcb7: Stack[-2] = Stack[-4]
0xcb8: Stack[-1] = (int) 480
0xcb9: Call2 0xcfe

0xcba: Pop(3)
0xcbb: Return(); Pop(2)

0xcbc: Stack[-1] = 0
0xcbd: PushEmpty(object, object)
0xcbe: Push((int) 787)
0xcbf: Push((int) 2)
0xcc0: Push((int) 542506)
0xcc1: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xcc2: Pop(3)
0xcc3: PushEmpty(bool, object, int)
0xcc4: Stack[-2] = Stack[-4]
0xcc5: Stack[-1] = (int) 344
0xcc6: Call2 0xcfe

0xcc7: Pop(3)
0xcc8: Return(); Pop(2)

0xcc9: Stack[-1] = 0
0xcca: PushEmpty(object, object)
0xccb: Push((int) 347)
0xccc: Push((int) 2)
0xccd: Push((int) 525569)
0xcce: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xccf: Pop(3)
0xcd0: PushEmpty(bool, object, int)
0xcd1: Stack[-2] = Stack[-4]
0xcd2: Stack[-1] = (int) 344
0xcd3: Call2 0xcfe

0xcd4: Pop(3)
0xcd5: Return(); Pop(2)

0xcd6: Stack[-1] = 0
0xcd7: PushEmpty(object, object)
0xcd8: Push((int) 352)
0xcd9: Push((int) 2)
0xcda: Push((int) 525618)
0xcdb: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xcdc: Pop(3)
0xcdd: PushEmpty(bool, object, int)
0xcde: Stack[-2] = Stack[-4]
0xcdf: Stack[-1] = (int) 350
0xce0: Call2 0xcfe

0xce1: Pop(3)
0xce2: Return(); Pop(2)

0xce3: Stack[-1] = 0
0xce4: PushEmpty(object, object)
0xce5: Push((int) 410)
0xce6: Push((int) 1)
0xce7: Push((int) 526111)
0xce8: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xce9: Pop(3)
0xcea: PushEmpty(bool, object, int)
0xceb: Stack[-2] = Stack[-4]
0xcec: Stack[-1] = (int) 408
0xced: Call2 0xcfe

0xcee: Pop(3)
0xcef: Return(); Pop(2)

0xcf0: Stack[-1] = 0
0xcf1: PushEmpty(object, object)
0xcf2: @ GetDiaryRoot(Stack[-1])
0xcf3: Pop(0)
0xcf4: Pop(0); Push((bool) Stack[-1] == 0)
0xcf5: IF (Stack[-1] == 0) GOTO 0xcfb; Pop(1)

0xcf6: Push("Can't retrieve diary root")
0xcf7: @ Trace(Stack[-1])
0xcf8: Pop(1)
0xcf9: Stack[-3] = (bool) 0
0xcfa: Return(); Pop(2)

0xcfb: Stack[-3] = Stack[-1]
0xcfc: Return(); Pop(2)

0xcfd: Stack[-1] = 0
0xcfe: PushEmpty(object, object, int, object, object, int)
0xcff: PushEmpty(object)
0xd00: Call2 0xcf1

0xd01: Stack[-4] = Stack[-1]
0xd02: Pop(1)
0xd03: @@ Find(Stack[-7], Stack[-2])
0xd04: Pop(0)
0xd05: Pop(0); Push((bool) Stack[-2] == 0)
0xd06: IF (Stack[-1] == 0) GOTO 0xd0d; Pop(1)

0xd07: Push("Can't find diary parent with id: ")
0xd08: Pop(1); Push(Stack[-1] + Stack[-8]);
0xd09: @ Trace(Stack[-1])
0xd0a: Pop(1)
0xd0b: Stack[-9] = (bool) 0
0xd0c: Return(); Pop(6)

0xd0d: @@ AddChild(Stack[-8])
0xd0e: Pop(0)
0xd0f: Push((int) 7)
0xd10: @ SendWorldWndMessage(Stack[-1])
0xd11: Pop(1)
0xd12: @@ GetCategory(Stack[-1])
0xd13: Pop(0)
0xd14: @ SetDiarySection(Stack[-1])
0xd15: Pop(0)
0xd16: Stack[-9] = (bool) 0
0xd17: Return(); Pop(6)

0xd18: Stack[-2] = 0
0xd19: Stack[-3] = 0
0xd1a: PushEmpty(object, object, object, object)
0xd1b: @ GetMainOutdoorScene(Stack[-2])
0xd1c: Pop(0)
0xd1d: Pop(0); Push((bool) Stack[-2] == 0)
0xd1e: IF (Stack[-1] == 0) GOTO 0xd25; Pop(1)

0xd1f: Push("Can't find main outdoor scene")
0xd20: @ Trace(Stack[-1])
0xd21: Pop(1)
0xd22: Stack[-1] = 0
0xd23: Stack[-5] = Stack[-1]
0xd24: Return(); Pop(4)

0xd25: @@ GetMap(Stack[-1])
0xd26: Pop(0)
0xd27: Stack[-5] = Stack[-1]
0xd28: Return(); Pop(4)

0xd29: Stack[-1] = 0
0xd2a: Stack[-2] = 0
0xd2b: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0xd2c: @ GetMainOutdoorScene(Stack[-2])
0xd2d: Pop(0)
0xd2e: Pop(0); Push((bool) Stack[-2] == 0)
0xd2f: IF (Stack[-1] == 0) GOTO 0xd34; Pop(1)

0xd30: Push("Can't find main outdoor scene")
0xd31: @ Trace(Stack[-1])
0xd32: Pop(1)
0xd33: Return(); Pop(8)

0xd34: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0xd35: Pop(0)
0xd36: Pop(0); Push((bool) Stack[-1] == 0)
0xd37: IF (Stack[-1] == 0) GOTO 0xd3e; Pop(1)

0xd38: Push("Warning: outdoor scene locator ")
0xd39: Pop(1); Push(Stack[-1] + Stack[-11]);
0xd3a: Push(" doesnt exist")
0xd3b: Pop(2); Push(Stack[-2] + Stack[-1]);
0xd3c: @ Trace(Stack[-1])
0xd3d: Pop(1)
0xd3e: @@ GetMap(Stack[-11])
0xd3f: Pop(0)
0xd40: Pop(0); Push((bool) Stack[-11] == 0)
0xd41: IF (Stack[-1] == 0) GOTO 0xd46; Pop(1)

0xd42: Push("Can't find map")
0xd43: @ Trace(Stack[-1])
0xd44: Pop(1)
0xd45: Return(); Pop(8)

0xd46: Push(CvectorIndex(Stack[-4], 0))
0xd47: Push(CvectorIndex(Stack[-5], 2))
0xd48: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0xd49: Pop(2)
0xd4a: Return(); Pop(8)

0xd4b: Stack[-2] = 0
0xd4c: PushEmpty(int, int)
0xd4d: Push("branch")
0xd4e: @ GetVariable(Stack[-1], Stack[-2])
0xd4f: Pop(1)
0xd50: Push((int) 0)
0xd51: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd52: IF (Stack[-1] == 0) GOTO 0xd56; Pop(1)

0xd53: Stack[-3] = (int) 1
0xd54: Return(); Pop(2)

0xd55: GOTO 0xd5b

0xd56: Push((int) 1)
0xd57: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd58: IF (Stack[-1] == 0) GOTO 0xd5b; Pop(1)

0xd59: Stack[-3] = (int) 2
0xd5a: Return(); Pop(2)

0xd5b: Stack[-3] = (int) 3
0xd5c: Return(); Pop(2)

0xd5d: PushEmpty(int, int)
0xd5e: Push("mt_eva")
0xd5f: @ GetVariable(Stack[-1], Stack[-2])
0xd60: Pop(1)
0xd61: Pop(0); Push((bool) Stack[-1] == 0)
0xd62: IF (Stack[-1] == 0) GOTO 0xd6d; Pop(1)

0xd63: PushEmpty(int, object)
0xd64: Stack[-1] = Stack[-5]
0xd65: Push(-2, 1); TaskCall(0)
0xd66: Call2 0x0

0xd67: Pop(-2, 1); TaskReturn
0xd68: Pop(2)
0xd69: Push("mt_eva")
0xd6a: Push((int) 1)
0xd6b: @ SetVariable(Stack[-2], Stack[-1])
0xd6c: Pop(2)
0xd6d: PushEmpty(bool, int)
0xd6e: Stack[-1] = (int) 3
0xd6f: Call2 0xba4

0xd70: Pop(1)
0xd71: IF (Stack[-1] == 0) GOTO 0xd79; Pop(1)

0xd72: PushEmpty(int, object)
0xd73: Stack[-1] = Stack[-5]
0xd74: Push(-2, 1); TaskCall(2)
0xd75: Call2 0xe2

0xd76: Pop(-2, 1); TaskReturn
0xd77: Pop(2)
0xd78: Return(); Pop(2)

0xd79: PushEmpty(bool, int)
0xd7a: Stack[-1] = (int) 6
0xd7b: Call2 0xba4

0xd7c: Pop(1)
0xd7d: IF (Stack[-1] == 0) GOTO 0xd85; Pop(1)

0xd7e: PushEmpty(int, object)
0xd7f: Stack[-1] = Stack[-5]
0xd80: Push(-2, 1); TaskCall(4)
0xd81: Call2 0x429

0xd82: Pop(-2, 1); TaskReturn
0xd83: Pop(2)
0xd84: Return(); Pop(2)

0xd85: PushEmpty(bool, int)
0xd86: Stack[-1] = (int) 11
0xd87: Call2 0xba4

0xd88: Pop(1)
0xd89: IF (Stack[-1] == 0) GOTO 0xd91; Pop(1)

0xd8a: PushEmpty(int, object)
0xd8b: Stack[-1] = Stack[-5]
0xd8c: Push(-2, 1); TaskCall(6)
0xd8d: Call2 0x60c

0xd8e: Pop(-2, 1); TaskReturn
0xd8f: Pop(2)
0xd90: Return(); Pop(2)

0xd91: PushEmpty(bool, int)
0xd92: Stack[-1] = (int) 12
0xd93: Call2 0xba4

0xd94: Pop(1)
0xd95: IF (Stack[-1] == 0) GOTO 0xd9d; Pop(1)

0xd96: PushEmpty(int, object)
0xd97: Stack[-1] = Stack[-5]
0xd98: Push(-2, 1); TaskCall(8)
0xd99: Call2 0x74b

0xd9a: Pop(-2, 1); TaskReturn
0xd9b: Pop(2)
0xd9c: Return(); Pop(2)

0xd9d: PushEmpty(int, object)
0xd9e: Stack[-1] = Stack[-5]
0xd9f: Push(-2, 1); TaskCall(10)
0xda0: Call2 0x84e

0xda1: Pop(-2, 1); TaskReturn
0xda2: Pop(2)
0xda3: Return(); Pop(2)

