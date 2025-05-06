GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	Neutral
	all
	idle
	SetNPCName
	SetNPCDescription
	SetPhoto
	SetPhoto2
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	SetMessage
	ClearReplies
	AddReply
	Smile
	What
	Grin
	Untrust
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
	ui/NPC_Andrei.png
	ui/NPC_Andrei_b.png
	oob5Andrei1
	money 4000 is given
	playsound
	givemoney
	oob2Andrei2
	b2q03
	quest_b2_03
	place_maria
	b2q03GoodShop
	pt_b2q03_good_shop
	AddMark
	grass_brown_tvir
	RemoveItemByType
	completed
	b2AndreiVisit
	ShowMap
	b2q03_1
	oob2Andrei3
	SetReturnValue
	b5q01
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
	samopal_ammo
	rifle_ammo
	revolver_ammo
	tvirin
	Samopal
	branch
	tr_andrei
	mt_andrei
	d12_andrei

Import:
	DoTrade (0 args)
	lshWaitForAnimEnd (0 args)
	WaitForAnimEnd (0 args)
	PlayAnimation (2 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	StopTrade (0 args)
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	sync (0 args)
	StopDialog (1 args)
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
	AddItem (3 args)
	AddItem (4 args)
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
	ClearSubContainer (1 args)

RunOp = 0x88f
RunTask = 13

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 1
		EVENT_11 Op = 0x1a Vars = (int)
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xc9 Vars = (int, int)
	GTASK_3 Vars = (object) Params = 2
	GTASK_4 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1a1 Vars = (int, int)
	GTASK_5 Vars = (object) Params = 2
	GTASK_6 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x29a Vars = (int, int)
	GTASK_7 Vars = (object) Params = 2
	GTASK_8 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x428 Vars = (int, int)
	GTASK_9 Vars = (object) Params = 2
	GTASK_10 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x727 Vars = (int, int)
	GTASK_11 Vars = (object) Params = 2
	GTASK_12 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x865 Vars = (int, int)
	GTASK_13 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x8d8 Vars = (int)
		EVENT_6 Op = 0x8fe Vars = ()
		EVENT_5 Op = 0x90d Vars = ()
		EVENT_45 Op = 0x91a Vars = (bool)
		EVENT_0 Op = 0x926 Vars = (object)


0x0: PushEmpty()
0x1: @ DoTrade()
0x2: Pop(0)
0x3: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x4: PushEmpty(bool)
0x5: Call2 0xb98

0x6: Pop(0)
0x7: IF (Stack[-1] == 0) GOTO 0xf; Pop(1)

0x8: PushEmpty(string)
0x9: Stack[-1] = "Neutral"
0xa: Call2 0xad0

0xb: Pop(1)
0xc: @ lshWaitForAnimEnd()
0xd: Pop(0)
0xe: GOTO 0x15

0xf: @ WaitForAnimEnd()
0x10: Pop(0)
0x11: Push("all")
0x12: Push("idle")
0x13: @ PlayAnimation(Stack[-2], Stack[-1])
0x14: Pop(2)
0x15: Push( Stack[0 + Tasks[-1].StackPointer] )
0x16: IF (Stack[-1] == 0) GOTO 0x18; Pop(1)

0x17: Return(); Pop(0)

0x18: GOTO 0x4

0x19: Return(); Pop(0)

0x1a: PushEmpty()
0x1b: PushEmpty(bool)
0x1c: Call2 0xb98

0x1d: Pop(0)
0x1e: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x1f: @ lshStopAnimation()
0x20: Pop(0)
0x21: GOTO 0x24

0x22: @ StopAnimation()
0x23: Pop(0)
0x24: @ StopTrade()
0x25: Pop(0)
0x26: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x27: Return(); Pop(0)

0x28: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x29: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2a: PushEmpty(bool, object, float)
0x2b: Stack[-2] = Stack[-12]
0x2c: Stack[-1] = (float) 70.0
0x2d: Call2 0x9b6

0x2e: Pop(2)
0x2f: Pop(1); Push((bool) Stack[-1] == 0)
0x30: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x31: Stack[-10] = (int) -2
0x32: Return(); Pop(8)

0x33: @ CreateDialog(Stack[-4])
0x34: Pop(0)
0x35: PushEmpty(int)
0x36: Call2 0xb92

0x37: Pop(0)
0x38: @@ SetNPCName(Stack[-1])
0x39: Pop(1)
0x3a: PushEmpty(int)
0x3b: Call2 0xb90

0x3c: Pop(0)
0x3d: @@ SetNPCDescription(Stack[-1])
0x3e: Pop(1)
0x3f: PushEmpty(string)
0x40: Call2 0xb94

0x41: Pop(0)
0x42: @@ SetPhoto(Stack[-1])
0x43: Pop(1)
0x44: PushEmpty(string)
0x45: Call2 0xb96

0x46: Pop(0)
0x47: @@ SetPhoto2(Stack[-1])
0x48: Pop(1)
0x49: PushEmpty(int)
0x4a: Call2 0xd74

0x4b: Pop(0)
0x4c: @@ SetPlayerName(Stack[-1])
0x4d: Pop(1)
0x4e: Stack[-2] = (int) -1
0x4f: @ IsOverrideActive(Stack[-3])
0x50: Pop(0)
0x51: Push(Stack[-3])
0x52: IF (Stack[-1] == 0) GOTO 0x55; Pop(1)

0x53: Stack[-10] = (int) -2
0x54: Return(); Pop(8)

0x55: @ DoDialog(Stack[-4])
0x56: Pop(0)
0x57: PushEmpty(bool, object)
0x58: PushEmpty(object)
0x59: Call2 0xb1f

0x5a: Stack[-2] = Stack[-1]
0x5b: Pop(1)
0x5c: Call2 0xa0b

0x5d: Pop(2)
0x5e: PushEmpty(object, object)
0x5f: Stack[-2] = Stack[-11]
0x60: Stack[-1] = Stack[-6]
0x61: Push(-2, 4); TaskCall(2)
0x62: Call2 0x79

0x63: Pop(-2, 4); TaskReturn
0x64: Pop(2)
0x65: @@ IsDialogEnd(Stack[-1])
0x66: Pop(0)
0x67: Pop(0); Push((bool) Stack[-1] == 0)
0x68: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x69: @ sync()
0x6a: Pop(0)
0x6b: @@ IsDialogEnd(Stack[-1])
0x6c: Pop(0)
0x6d: GOTO 0x67

0x6e: PushEmpty(object)
0x6f: Stack[-1] = Stack[-10]
0x70: Call2 0x9fa

0x71: Pop(1)
0x72: @ StopDialog(Stack[-4])
0x73: Pop(0)
0x74: @@ GetReturnValue(Stack[-2])
0x75: Pop(0)
0x76: Stack[-10] = Stack[-2]
0x77: Return(); Pop(8)

0x78: Stack[-4] = 0
0x79: PushEmpty()
0x7a: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x7b: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x7c: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x7d: Push((int) 1)
0x7e: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x7f: PushEmpty(string)
0x80: Stack[-1] = "Neutral"
0x81: Call2 0xb3

0x82: Pop(1)
0x83: Push((int) 531971)
0x84: @@ SetMessage(Stack[-1])
0x85: Pop(1)
0x86: @@ ClearReplies()
0x87: Pop(0)
0x88: Push((int) 531972)
0x89: Push((int) -1)
0x8a: Push((int) 33378)
0x8b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8c: Pop(3)
0x8d: Push((int) 531973)
0x8e: Push((int) -1)
0x8f: Push((int) 33379)
0x90: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x91: Pop(3)
0x92: GOTO 0x95

0x93: Return(); Pop(0)

0x94: GOTO 0x7d

0x95: PushEmpty(bool)
0x96: Call2 0xb98

0x97: Pop(0)
0x98: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0x99: @ lshWaitForAnimEnd()
0x9a: Pop(0)
0x9b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9c: IF (Stack[-1] == 0) GOTO 0x9e; Pop(1)

0x9d: GOTO 0xa3

0x9e: PushEmpty(string)
0x9f: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa0: Call2 0xad0

0xa1: Pop(1)
0xa2: GOTO 0x99

0xa3: GOTO 0xb2

0xa4: Push("all")
0xa5: Push("idle")
0xa6: @ PlayAnimation(Stack[-2], Stack[-1])
0xa7: Pop(2)
0xa8: @ WaitForAnimEnd()
0xa9: Pop(0)
0xaa: Push( Stack[3 + Tasks[-1].StackPointer] )
0xab: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xac: GOTO 0xb2

0xad: Push("all")
0xae: Push("idle")
0xaf: @ PlayAnimation(Stack[-2], Stack[-1])
0xb0: Pop(2)
0xb1: GOTO 0xa8

0xb2: Return(); Pop(0)

0xb3: PushEmpty()
0xb4: PushEmpty(bool)
0xb5: Call2 0xb98

0xb6: Pop(0)
0xb7: Pop(1); Push((bool) Stack[-1] == 0)
0xb8: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb9: Return(); Pop(0)

0xba: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xbb: IF (Stack[-1] == 0) GOTO 0xbd; Pop(1)

0xbc: Return(); Pop(0)

0xbd: PushEmpty(string, bool)
0xbe: Stack[-2] = Stack[-3]
0xbf: Push("")
0xc0: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xc1: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xc2: Stack[-1] = (bool) 0
0xc3: GOTO 0xc5

0xc4: Stack[-1] = (bool) 1
0xc5: Call2 0xae0

0xc6: Pop(2)
0xc7: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xc8: Return(); Pop(0)

0xc9: PushEmpty()
0xca: Push((int) 1)
0xcb: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xcc: PushEmpty()
0xcd: Call2 0xafe

0xce: Pop(0)
0xcf: Push((int) 33378)
0xd0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd1: IF (Stack[-1] == 0) GOTO 0xd7; Pop(1)

0xd2: PushEmpty(object, object)
0xd3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd5: Call2 0xc17

0xd6: Pop(2)
0xd7: Push((int) 33377)
0xd8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd9: IF (Stack[-1] == 0) GOTO 0xee; Pop(1)

0xda: PushEmpty(string)
0xdb: Stack[-1] = "Neutral"
0xdc: Call2 0xb3

0xdd: Pop(1)
0xde: Push((int) 531971)
0xdf: @@ SetMessage(Stack[-1])
0xe0: Pop(1)
0xe1: @@ ClearReplies()
0xe2: Pop(0)
0xe3: Push((int) 531972)
0xe4: Push((int) -1)
0xe5: Push((int) 33378)
0xe6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe7: Pop(3)
0xe8: Push((int) 531973)
0xe9: Push((int) -1)
0xea: Push((int) 33379)
0xeb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xec: Pop(3)
0xed: Return(); Pop(0)

0xee: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xef: PushEmpty(bool)
0xf0: Call2 0xb98

0xf1: Pop(0)
0xf2: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xf3: @ lshStopAnimation()
0xf4: Pop(0)
0xf5: GOTO 0xf8

0xf6: @ StopAnimation()
0xf7: Pop(0)
0xf8: Return(); Pop(0)

0xf9: GOTO 0xca

0xfa: Return(); Pop(0)

0xfb: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xfc: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xfd: PushEmpty(bool, object, float)
0xfe: Stack[-2] = Stack[-12]
0xff: Stack[-1] = (float) 70.0
0x100: Call2 0x9b6

0x101: Pop(2)
0x102: Pop(1); Push((bool) Stack[-1] == 0)
0x103: IF (Stack[-1] == 0) GOTO 0x106; Pop(1)

0x104: Stack[-10] = (int) -2
0x105: Return(); Pop(8)

0x106: @ CreateDialog(Stack[-4])
0x107: Pop(0)
0x108: PushEmpty(int)
0x109: Call2 0xb92

0x10a: Pop(0)
0x10b: @@ SetNPCName(Stack[-1])
0x10c: Pop(1)
0x10d: PushEmpty(int)
0x10e: Call2 0xb90

0x10f: Pop(0)
0x110: @@ SetNPCDescription(Stack[-1])
0x111: Pop(1)
0x112: PushEmpty(string)
0x113: Call2 0xb94

0x114: Pop(0)
0x115: @@ SetPhoto(Stack[-1])
0x116: Pop(1)
0x117: PushEmpty(string)
0x118: Call2 0xb96

0x119: Pop(0)
0x11a: @@ SetPhoto2(Stack[-1])
0x11b: Pop(1)
0x11c: PushEmpty(int)
0x11d: Call2 0xd74

0x11e: Pop(0)
0x11f: @@ SetPlayerName(Stack[-1])
0x120: Pop(1)
0x121: Stack[-2] = (int) -1
0x122: @ IsOverrideActive(Stack[-3])
0x123: Pop(0)
0x124: Push(Stack[-3])
0x125: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x126: Stack[-10] = (int) -2
0x127: Return(); Pop(8)

0x128: @ DoDialog(Stack[-4])
0x129: Pop(0)
0x12a: PushEmpty(bool, object)
0x12b: PushEmpty(object)
0x12c: Call2 0xb1f

0x12d: Stack[-2] = Stack[-1]
0x12e: Pop(1)
0x12f: Call2 0xa0b

0x130: Pop(2)
0x131: PushEmpty(object, object)
0x132: Stack[-2] = Stack[-11]
0x133: Stack[-1] = Stack[-6]
0x134: Push(-2, 4); TaskCall(4)
0x135: Call2 0x14c

0x136: Pop(-2, 4); TaskReturn
0x137: Pop(2)
0x138: @@ IsDialogEnd(Stack[-1])
0x139: Pop(0)
0x13a: Pop(0); Push((bool) Stack[-1] == 0)
0x13b: IF (Stack[-1] == 0) GOTO 0x141; Pop(1)

0x13c: @ sync()
0x13d: Pop(0)
0x13e: @@ IsDialogEnd(Stack[-1])
0x13f: Pop(0)
0x140: GOTO 0x13a

0x141: PushEmpty(object)
0x142: Stack[-1] = Stack[-10]
0x143: Call2 0x9fa

0x144: Pop(1)
0x145: @ StopDialog(Stack[-4])
0x146: Pop(0)
0x147: @@ GetReturnValue(Stack[-2])
0x148: Pop(0)
0x149: Stack[-10] = Stack[-2]
0x14a: Return(); Pop(8)

0x14b: Stack[-4] = 0
0x14c: PushEmpty()
0x14d: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x14e: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x14f: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x150: Push((int) 1)
0x151: IF (Stack[-1] == 0) GOTO 0x16d; Pop(1)

0x152: PushEmpty(string)
0x153: Stack[-1] = "Neutral"
0x154: Call2 0x18b

0x155: Pop(1)
0x156: Push((int) 535231)
0x157: @@ SetMessage(Stack[-1])
0x158: Pop(1)
0x159: @@ ClearReplies()
0x15a: Pop(0)
0x15b: Push((int) 535232)
0x15c: Push((int) 36953)
0x15d: Push((int) 36907)
0x15e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15f: Pop(3)
0x160: Push((int) 535233)
0x161: Push((int) -1)
0x162: Push((int) 36908)
0x163: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x164: Pop(3)
0x165: Push((int) 535280)
0x166: Push((int) -1)
0x167: Push((int) 36956)
0x168: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x169: Pop(3)
0x16a: GOTO 0x16d

0x16b: Return(); Pop(0)

0x16c: GOTO 0x150

0x16d: PushEmpty(bool)
0x16e: Call2 0xb98

0x16f: Pop(0)
0x170: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0x171: @ lshWaitForAnimEnd()
0x172: Pop(0)
0x173: Push( Stack[3 + Tasks[-1].StackPointer] )
0x174: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x175: GOTO 0x17b

0x176: PushEmpty(string)
0x177: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x178: Call2 0xad0

0x179: Pop(1)
0x17a: GOTO 0x171

0x17b: GOTO 0x18a

0x17c: Push("all")
0x17d: Push("idle")
0x17e: @ PlayAnimation(Stack[-2], Stack[-1])
0x17f: Pop(2)
0x180: @ WaitForAnimEnd()
0x181: Pop(0)
0x182: Push( Stack[3 + Tasks[-1].StackPointer] )
0x183: IF (Stack[-1] == 0) GOTO 0x185; Pop(1)

0x184: GOTO 0x18a

0x185: Push("all")
0x186: Push("idle")
0x187: @ PlayAnimation(Stack[-2], Stack[-1])
0x188: Pop(2)
0x189: GOTO 0x180

0x18a: Return(); Pop(0)

0x18b: PushEmpty()
0x18c: PushEmpty(bool)
0x18d: Call2 0xb98

0x18e: Pop(0)
0x18f: Pop(1); Push((bool) Stack[-1] == 0)
0x190: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x191: Return(); Pop(0)

0x192: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x193: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x194: Return(); Pop(0)

0x195: PushEmpty(string, bool)
0x196: Stack[-2] = Stack[-3]
0x197: Push("")
0x198: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x199: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x19a: Stack[-1] = (bool) 0
0x19b: GOTO 0x19d

0x19c: Stack[-1] = (bool) 1
0x19d: Call2 0xae0

0x19e: Pop(2)
0x19f: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1a0: Return(); Pop(0)

0x1a1: PushEmpty()
0x1a2: Push((int) 1)
0x1a3: IF (Stack[-1] == 0) GOTO 0x1fd; Pop(1)

0x1a4: PushEmpty()
0x1a5: Call2 0xafe

0x1a6: Pop(0)
0x1a7: Push((int) 36906)
0x1a8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a9: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x1aa: PushEmpty(string)
0x1ab: Stack[-1] = "Neutral"
0x1ac: Call2 0x18b

0x1ad: Pop(1)
0x1ae: Push((int) 535231)
0x1af: @@ SetMessage(Stack[-1])
0x1b0: Pop(1)
0x1b1: @@ ClearReplies()
0x1b2: Pop(0)
0x1b3: Push((int) 535232)
0x1b4: Push((int) 36953)
0x1b5: Push((int) 36907)
0x1b6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b7: Pop(3)
0x1b8: Push((int) 535233)
0x1b9: Push((int) -1)
0x1ba: Push((int) 36908)
0x1bb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1bc: Pop(3)
0x1bd: Push((int) 535280)
0x1be: Push((int) -1)
0x1bf: Push((int) 36956)
0x1c0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c1: Pop(3)
0x1c2: Return(); Pop(0)

0x1c3: Push((int) 36953)
0x1c4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c5: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1c6: PushEmpty(string)
0x1c7: Stack[-1] = "Neutral"
0x1c8: Call2 0x18b

0x1c9: Pop(1)
0x1ca: Push((int) 535277)
0x1cb: @@ SetMessage(Stack[-1])
0x1cc: Pop(1)
0x1cd: @@ ClearReplies()
0x1ce: Pop(0)
0x1cf: Push((int) 535278)
0x1d0: Push((int) 36957)
0x1d1: Push((int) 36954)
0x1d2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d3: Pop(3)
0x1d4: Push((int) 535279)
0x1d5: Push((int) 36957)
0x1d6: Push((int) 36955)
0x1d7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d8: Pop(3)
0x1d9: Return(); Pop(0)

0x1da: Push((int) 36957)
0x1db: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1dc: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1dd: PushEmpty(string)
0x1de: Stack[-1] = "Neutral"
0x1df: Call2 0x18b

0x1e0: Pop(1)
0x1e1: Push((int) 535281)
0x1e2: @@ SetMessage(Stack[-1])
0x1e3: Pop(1)
0x1e4: @@ ClearReplies()
0x1e5: Pop(0)
0x1e6: Push((int) 535282)
0x1e7: Push((int) -1)
0x1e8: Push((int) 36958)
0x1e9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ea: Pop(3)
0x1eb: Push((int) 535283)
0x1ec: Push((int) -1)
0x1ed: Push((int) 36959)
0x1ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ef: Pop(3)
0x1f0: Return(); Pop(0)

0x1f1: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1f2: PushEmpty(bool)
0x1f3: Call2 0xb98

0x1f4: Pop(0)
0x1f5: IF (Stack[-1] == 0) GOTO 0x1f9; Pop(1)

0x1f6: @ lshStopAnimation()
0x1f7: Pop(0)
0x1f8: GOTO 0x1fb

0x1f9: @ StopAnimation()
0x1fa: Pop(0)
0x1fb: Return(); Pop(0)

0x1fc: GOTO 0x1a2

0x1fd: Return(); Pop(0)

0x1fe: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1ff: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x200: PushEmpty(bool, object, float)
0x201: Stack[-2] = Stack[-12]
0x202: Stack[-1] = (float) 70.0
0x203: Call2 0x9b6

0x204: Pop(2)
0x205: Pop(1); Push((bool) Stack[-1] == 0)
0x206: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x207: Stack[-10] = (int) -2
0x208: Return(); Pop(8)

0x209: @ CreateDialog(Stack[-4])
0x20a: Pop(0)
0x20b: PushEmpty(int)
0x20c: Call2 0xb92

0x20d: Pop(0)
0x20e: @@ SetNPCName(Stack[-1])
0x20f: Pop(1)
0x210: PushEmpty(int)
0x211: Call2 0xb90

0x212: Pop(0)
0x213: @@ SetNPCDescription(Stack[-1])
0x214: Pop(1)
0x215: PushEmpty(string)
0x216: Call2 0xb94

0x217: Pop(0)
0x218: @@ SetPhoto(Stack[-1])
0x219: Pop(1)
0x21a: PushEmpty(string)
0x21b: Call2 0xb96

0x21c: Pop(0)
0x21d: @@ SetPhoto2(Stack[-1])
0x21e: Pop(1)
0x21f: PushEmpty(int)
0x220: Call2 0xd74

0x221: Pop(0)
0x222: @@ SetPlayerName(Stack[-1])
0x223: Pop(1)
0x224: Stack[-2] = (int) -1
0x225: @ IsOverrideActive(Stack[-3])
0x226: Pop(0)
0x227: Push(Stack[-3])
0x228: IF (Stack[-1] == 0) GOTO 0x22b; Pop(1)

0x229: Stack[-10] = (int) -2
0x22a: Return(); Pop(8)

0x22b: @ DoDialog(Stack[-4])
0x22c: Pop(0)
0x22d: PushEmpty(bool, object)
0x22e: PushEmpty(object)
0x22f: Call2 0xb1f

0x230: Stack[-2] = Stack[-1]
0x231: Pop(1)
0x232: Call2 0xa0b

0x233: Pop(2)
0x234: PushEmpty(object, object)
0x235: Stack[-2] = Stack[-11]
0x236: Stack[-1] = Stack[-6]
0x237: Push(-2, 4); TaskCall(6)
0x238: Call2 0x24f

0x239: Pop(-2, 4); TaskReturn
0x23a: Pop(2)
0x23b: @@ IsDialogEnd(Stack[-1])
0x23c: Pop(0)
0x23d: Pop(0); Push((bool) Stack[-1] == 0)
0x23e: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x23f: @ sync()
0x240: Pop(0)
0x241: @@ IsDialogEnd(Stack[-1])
0x242: Pop(0)
0x243: GOTO 0x23d

0x244: PushEmpty(object)
0x245: Stack[-1] = Stack[-10]
0x246: Call2 0x9fa

0x247: Pop(1)
0x248: @ StopDialog(Stack[-4])
0x249: Pop(0)
0x24a: @@ GetReturnValue(Stack[-2])
0x24b: Pop(0)
0x24c: Stack[-10] = Stack[-2]
0x24d: Return(); Pop(8)

0x24e: Stack[-4] = 0
0x24f: PushEmpty()
0x250: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x251: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x252: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x253: Push((int) 1)
0x254: IF (Stack[-1] == 0) GOTO 0x266; Pop(1)

0x255: PushEmpty(string)
0x256: Stack[-1] = "Neutral"
0x257: Call2 0x284

0x258: Pop(1)
0x259: Push((int) 517994)
0x25a: @@ SetMessage(Stack[-1])
0x25b: Pop(1)
0x25c: @@ ClearReplies()
0x25d: Pop(0)
0x25e: Push((int) 517995)
0x25f: Push((int) 23147)
0x260: Push((int) 19128)
0x261: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x262: Pop(3)
0x263: GOTO 0x266

0x264: Return(); Pop(0)

0x265: GOTO 0x253

0x266: PushEmpty(bool)
0x267: Call2 0xb98

0x268: Pop(0)
0x269: IF (Stack[-1] == 0) GOTO 0x275; Pop(1)

0x26a: @ lshWaitForAnimEnd()
0x26b: Pop(0)
0x26c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x26d: IF (Stack[-1] == 0) GOTO 0x26f; Pop(1)

0x26e: GOTO 0x274

0x26f: PushEmpty(string)
0x270: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x271: Call2 0xad0

0x272: Pop(1)
0x273: GOTO 0x26a

0x274: GOTO 0x283

0x275: Push("all")
0x276: Push("idle")
0x277: @ PlayAnimation(Stack[-2], Stack[-1])
0x278: Pop(2)
0x279: @ WaitForAnimEnd()
0x27a: Pop(0)
0x27b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x27c: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x27d: GOTO 0x283

0x27e: Push("all")
0x27f: Push("idle")
0x280: @ PlayAnimation(Stack[-2], Stack[-1])
0x281: Pop(2)
0x282: GOTO 0x279

0x283: Return(); Pop(0)

0x284: PushEmpty()
0x285: PushEmpty(bool)
0x286: Call2 0xb98

0x287: Pop(0)
0x288: Pop(1); Push((bool) Stack[-1] == 0)
0x289: IF (Stack[-1] == 0) GOTO 0x28b; Pop(1)

0x28a: Return(); Pop(0)

0x28b: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x28c: IF (Stack[-1] == 0) GOTO 0x28e; Pop(1)

0x28d: Return(); Pop(0)

0x28e: PushEmpty(string, bool)
0x28f: Stack[-2] = Stack[-3]
0x290: Push("")
0x291: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x292: IF (Stack[-1] == 0) GOTO 0x295; Pop(1)

0x293: Stack[-1] = (bool) 0
0x294: GOTO 0x296

0x295: Stack[-1] = (bool) 1
0x296: Call2 0xae0

0x297: Pop(2)
0x298: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x299: Return(); Pop(0)

0x29a: PushEmpty()
0x29b: Push((int) 1)
0x29c: IF (Stack[-1] == 0) GOTO 0x31f; Pop(1)

0x29d: PushEmpty()
0x29e: Call2 0xafe

0x29f: Pop(0)
0x2a0: Push((int) 19127)
0x2a1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2a2: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x2a3: PushEmpty(string)
0x2a4: Stack[-1] = "Neutral"
0x2a5: Call2 0x284

0x2a6: Pop(1)
0x2a7: Push((int) 517994)
0x2a8: @@ SetMessage(Stack[-1])
0x2a9: Pop(1)
0x2aa: @@ ClearReplies()
0x2ab: Pop(0)
0x2ac: Push((int) 517995)
0x2ad: Push((int) 23147)
0x2ae: Push((int) 19128)
0x2af: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b0: Pop(3)
0x2b1: Return(); Pop(0)

0x2b2: Push((int) 23147)
0x2b3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2b4: IF (Stack[-1] == 0) GOTO 0x2c9; Pop(1)

0x2b5: PushEmpty(string)
0x2b6: Stack[-1] = "Smile"
0x2b7: Call2 0x284

0x2b8: Pop(1)
0x2b9: Push((int) 521978)
0x2ba: @@ SetMessage(Stack[-1])
0x2bb: Pop(1)
0x2bc: @@ ClearReplies()
0x2bd: Pop(0)
0x2be: Push((int) 521979)
0x2bf: Push((int) 23149)
0x2c0: Push((int) 23148)
0x2c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c2: Pop(3)
0x2c3: Push((int) 521984)
0x2c4: Push((int) -1)
0x2c5: Push((int) 23153)
0x2c6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c7: Pop(3)
0x2c8: Return(); Pop(0)

0x2c9: Push((int) 23149)
0x2ca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2cb: IF (Stack[-1] == 0) GOTO 0x2e0; Pop(1)

0x2cc: PushEmpty(string)
0x2cd: Stack[-1] = "Smile"
0x2ce: Call2 0x284

0x2cf: Pop(1)
0x2d0: Push((int) 521980)
0x2d1: @@ SetMessage(Stack[-1])
0x2d2: Pop(1)
0x2d3: @@ ClearReplies()
0x2d4: Pop(0)
0x2d5: Push((int) 521981)
0x2d6: Push((int) 23151)
0x2d7: Push((int) 23150)
0x2d8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d9: Pop(3)
0x2da: Push((int) 521985)
0x2db: Push((int) 23157)
0x2dc: Push((int) 23154)
0x2dd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2de: Pop(3)
0x2df: Return(); Pop(0)

0x2e0: Push((int) 23151)
0x2e1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2e2: IF (Stack[-1] == 0) GOTO 0x2fc; Pop(1)

0x2e3: PushEmpty(string)
0x2e4: Stack[-1] = "Smile"
0x2e5: Call2 0x284

0x2e6: Pop(1)
0x2e7: Push((int) 521982)
0x2e8: @@ SetMessage(Stack[-1])
0x2e9: Pop(1)
0x2ea: @@ ClearReplies()
0x2eb: Pop(0)
0x2ec: Push((int) 521987)
0x2ed: Push((int) -1)
0x2ee: Push((int) 23156)
0x2ef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f0: Pop(3)
0x2f1: Push((int) 521983)
0x2f2: Push((int) 23157)
0x2f3: Push((int) 23152)
0x2f4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f5: Pop(3)
0x2f6: Push((int) 521986)
0x2f7: Push((int) -1)
0x2f8: Push((int) 23155)
0x2f9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2fa: Pop(3)
0x2fb: Return(); Pop(0)

0x2fc: Push((int) 23157)
0x2fd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2fe: IF (Stack[-1] == 0) GOTO 0x313; Pop(1)

0x2ff: PushEmpty(string)
0x300: Stack[-1] = "What"
0x301: Call2 0x284

0x302: Pop(1)
0x303: Push((int) 521988)
0x304: @@ SetMessage(Stack[-1])
0x305: Pop(1)
0x306: @@ ClearReplies()
0x307: Pop(0)
0x308: Push((int) 521989)
0x309: Push((int) -1)
0x30a: Push((int) 23158)
0x30b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x30c: Pop(3)
0x30d: Push((int) 521990)
0x30e: Push((int) -1)
0x30f: Push((int) 23159)
0x310: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x311: Pop(3)
0x312: Return(); Pop(0)

0x313: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x314: PushEmpty(bool)
0x315: Call2 0xb98

0x316: Pop(0)
0x317: IF (Stack[-1] == 0) GOTO 0x31b; Pop(1)

0x318: @ lshStopAnimation()
0x319: Pop(0)
0x31a: GOTO 0x31d

0x31b: @ StopAnimation()
0x31c: Pop(0)
0x31d: Return(); Pop(0)

0x31e: GOTO 0x29b

0x31f: Return(); Pop(0)

0x320: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x321: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x322: PushEmpty(bool, object, float)
0x323: Stack[-2] = Stack[-12]
0x324: Stack[-1] = (float) 70.0
0x325: Call2 0x9b6

0x326: Pop(2)
0x327: Pop(1); Push((bool) Stack[-1] == 0)
0x328: IF (Stack[-1] == 0) GOTO 0x32b; Pop(1)

0x329: Stack[-10] = (int) -2
0x32a: Return(); Pop(8)

0x32b: @ CreateDialog(Stack[-4])
0x32c: Pop(0)
0x32d: PushEmpty(int)
0x32e: Call2 0xb92

0x32f: Pop(0)
0x330: @@ SetNPCName(Stack[-1])
0x331: Pop(1)
0x332: PushEmpty(int)
0x333: Call2 0xb90

0x334: Pop(0)
0x335: @@ SetNPCDescription(Stack[-1])
0x336: Pop(1)
0x337: PushEmpty(string)
0x338: Call2 0xb94

0x339: Pop(0)
0x33a: @@ SetPhoto(Stack[-1])
0x33b: Pop(1)
0x33c: PushEmpty(string)
0x33d: Call2 0xb96

0x33e: Pop(0)
0x33f: @@ SetPhoto2(Stack[-1])
0x340: Pop(1)
0x341: PushEmpty(int)
0x342: Call2 0xd74

0x343: Pop(0)
0x344: @@ SetPlayerName(Stack[-1])
0x345: Pop(1)
0x346: Stack[-2] = (int) -1
0x347: @ IsOverrideActive(Stack[-3])
0x348: Pop(0)
0x349: Push(Stack[-3])
0x34a: IF (Stack[-1] == 0) GOTO 0x34d; Pop(1)

0x34b: Stack[-10] = (int) -2
0x34c: Return(); Pop(8)

0x34d: @ DoDialog(Stack[-4])
0x34e: Pop(0)
0x34f: PushEmpty(bool, object)
0x350: PushEmpty(object)
0x351: Call2 0xb1f

0x352: Stack[-2] = Stack[-1]
0x353: Pop(1)
0x354: Call2 0xa0b

0x355: Pop(2)
0x356: PushEmpty(object, object)
0x357: Stack[-2] = Stack[-11]
0x358: Stack[-1] = Stack[-6]
0x359: Push(-2, 4); TaskCall(8)
0x35a: Call2 0x371

0x35b: Pop(-2, 4); TaskReturn
0x35c: Pop(2)
0x35d: @@ IsDialogEnd(Stack[-1])
0x35e: Pop(0)
0x35f: Pop(0); Push((bool) Stack[-1] == 0)
0x360: IF (Stack[-1] == 0) GOTO 0x366; Pop(1)

0x361: @ sync()
0x362: Pop(0)
0x363: @@ IsDialogEnd(Stack[-1])
0x364: Pop(0)
0x365: GOTO 0x35f

0x366: PushEmpty(object)
0x367: Stack[-1] = Stack[-10]
0x368: Call2 0x9fa

0x369: Pop(1)
0x36a: @ StopDialog(Stack[-4])
0x36b: Pop(0)
0x36c: @@ GetReturnValue(Stack[-2])
0x36d: Pop(0)
0x36e: Stack[-10] = Stack[-2]
0x36f: Return(); Pop(8)

0x370: Stack[-4] = 0
0x371: PushEmpty()
0x372: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x373: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x374: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x375: Push((int) 1)
0x376: IF (Stack[-1] == 0) GOTO 0x3f4; Pop(1)

0x377: PushEmpty(bool, object)
0x378: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x379: Call2 0xc1c

0x37a: Pop(1)
0x37b: IF (Stack[-1] == 0) GOTO 0x39a; Pop(1)

0x37c: PushEmpty(object, object)
0x37d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x37e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x37f: Call2 0xbb0

0x380: Pop(2)
0x381: PushEmpty(object, object)
0x382: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x383: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x384: Call2 0xbe3

0x385: Pop(2)
0x386: PushEmpty(string)
0x387: Stack[-1] = "Neutral"
0x388: Call2 0x412

0x389: Pop(1)
0x38a: Push((int) 531038)
0x38b: @@ SetMessage(Stack[-1])
0x38c: Pop(1)
0x38d: @@ ClearReplies()
0x38e: Pop(0)
0x38f: Push((int) 531227)
0x390: Push((int) 32541)
0x391: Push((int) 32540)
0x392: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x393: Pop(3)
0x394: Push((int) 531231)
0x395: Push((int) 32545)
0x396: Push((int) 32544)
0x397: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x398: Pop(3)
0x399: GOTO 0x3f4

0x39a: PushEmpty(string)
0x39b: Stack[-1] = "Smile"
0x39c: Call2 0x412

0x39d: Pop(1)
0x39e: Push((int) 518214)
0x39f: @@ SetMessage(Stack[-1])
0x3a0: Pop(1)
0x3a1: @@ ClearReplies()
0x3a2: Pop(0)
0x3a3: PushEmpty(bool, object)
0x3a4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3a5: Call2 0xc34

0x3a6: Pop(1)
0x3a7: IF (Stack[-1] == 0) GOTO 0x3ad; Pop(1)

0x3a8: Push((int) 531041)
0x3a9: Push((int) 32373)
0x3aa: Push((int) 32372)
0x3ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ac: Pop(3)
0x3ad: PushEmpty(bool)
0x3ae: Stack[-1] = (bool) 0
0x3af: PushEmpty(bool)
0x3b0: Stack[-1] = (bool) 0
0x3b1: PushEmpty(bool, object)
0x3b2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3b3: Call2 0xc40

0x3b4: Pop(1)
0x3b5: IF (Stack[-1] == 0) GOTO 0x3bc; Pop(1)

0x3b6: PushEmpty(bool, object)
0x3b7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3b8: Call2 0xc28

0x3b9: Pop(1)
0x3ba: IF (Stack[-1] == 0) GOTO 0x3bc; Pop(1)

0x3bb: Stack[-1] = (bool) 1
0x3bc: IF (Stack[-1] == 0) GOTO 0x3c4; Pop(1)

0x3bd: PushEmpty(bool, object)
0x3be: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3bf: Call2 0xc62

0x3c0: Pop(1)
0x3c1: Pop(1); Push((bool) Stack[-1] == 0)
0x3c2: IF (Stack[-1] == 0) GOTO 0x3c4; Pop(1)

0x3c3: Stack[-1] = (bool) 1
0x3c4: IF (Stack[-1] == 0) GOTO 0x3ca; Pop(1)

0x3c5: Push((int) 531048)
0x3c6: Push((int) 32378)
0x3c7: Push((int) 32377)
0x3c8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c9: Pop(3)
0x3ca: PushEmpty(bool)
0x3cb: Stack[-1] = (bool) 0
0x3cc: PushEmpty(bool)
0x3cd: Stack[-1] = (bool) 0
0x3ce: PushEmpty(bool, object)
0x3cf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3d0: Call2 0xc56

0x3d1: Pop(1)
0x3d2: IF (Stack[-1] == 0) GOTO 0x3da; Pop(1)

0x3d3: PushEmpty(bool, object)
0x3d4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3d5: Call2 0xc4a

0x3d6: Pop(1)
0x3d7: Pop(1); Push((bool) Stack[-1] == 0)
0x3d8: IF (Stack[-1] == 0) GOTO 0x3da; Pop(1)

0x3d9: Stack[-1] = (bool) 1
0x3da: IF (Stack[-1] == 0) GOTO 0x3e1; Pop(1)

0x3db: PushEmpty(bool, object)
0x3dc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3dd: Call2 0xc6e

0x3de: Pop(1)
0x3df: IF (Stack[-1] == 0) GOTO 0x3e1; Pop(1)

0x3e0: Stack[-1] = (bool) 1
0x3e1: IF (Stack[-1] == 0) GOTO 0x3e7; Pop(1)

0x3e2: Push((int) 531081)
0x3e3: Push((int) 32402)
0x3e4: Push((int) 32401)
0x3e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e6: Pop(3)
0x3e7: Push((int) 518215)
0x3e8: Push((int) 20584)
0x3e9: Push((int) 19328)
0x3ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3eb: Pop(3)
0x3ec: Push((int) 518216)
0x3ed: Push((int) -1)
0x3ee: Push((int) 19329)
0x3ef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f0: Pop(3)
0x3f1: GOTO 0x3f4

0x3f2: Return(); Pop(0)

0x3f3: GOTO 0x375

0x3f4: PushEmpty(bool)
0x3f5: Call2 0xb98

0x3f6: Pop(0)
0x3f7: IF (Stack[-1] == 0) GOTO 0x403; Pop(1)

0x3f8: @ lshWaitForAnimEnd()
0x3f9: Pop(0)
0x3fa: Push( Stack[3 + Tasks[-1].StackPointer] )
0x3fb: IF (Stack[-1] == 0) GOTO 0x3fd; Pop(1)

0x3fc: GOTO 0x402

0x3fd: PushEmpty(string)
0x3fe: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x3ff: Call2 0xad0

0x400: Pop(1)
0x401: GOTO 0x3f8

0x402: GOTO 0x411

0x403: Push("all")
0x404: Push("idle")
0x405: @ PlayAnimation(Stack[-2], Stack[-1])
0x406: Pop(2)
0x407: @ WaitForAnimEnd()
0x408: Pop(0)
0x409: Push( Stack[3 + Tasks[-1].StackPointer] )
0x40a: IF (Stack[-1] == 0) GOTO 0x40c; Pop(1)

0x40b: GOTO 0x411

0x40c: Push("all")
0x40d: Push("idle")
0x40e: @ PlayAnimation(Stack[-2], Stack[-1])
0x40f: Pop(2)
0x410: GOTO 0x407

0x411: Return(); Pop(0)

0x412: PushEmpty()
0x413: PushEmpty(bool)
0x414: Call2 0xb98

0x415: Pop(0)
0x416: Pop(1); Push((bool) Stack[-1] == 0)
0x417: IF (Stack[-1] == 0) GOTO 0x419; Pop(1)

0x418: Return(); Pop(0)

0x419: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x41a: IF (Stack[-1] == 0) GOTO 0x41c; Pop(1)

0x41b: Return(); Pop(0)

0x41c: PushEmpty(string, bool)
0x41d: Stack[-2] = Stack[-3]
0x41e: Push("")
0x41f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x420: IF (Stack[-1] == 0) GOTO 0x423; Pop(1)

0x421: Stack[-1] = (bool) 0
0x422: GOTO 0x424

0x423: Stack[-1] = (bool) 1
0x424: Call2 0xae0

0x425: Pop(2)
0x426: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x427: Return(); Pop(0)

0x428: PushEmpty()
0x429: Push((int) 1)
0x42a: IF (Stack[-1] == 0) GOTO 0x672; Pop(1)

0x42b: PushEmpty()
0x42c: Call2 0xafe

0x42d: Pop(0)
0x42e: Push((int) 32376)
0x42f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x430: IF (Stack[-1] == 0) GOTO 0x436; Pop(1)

0x431: PushEmpty(object, object)
0x432: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x433: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x434: Call2 0xbb6

0x435: Pop(2)
0x436: Push((int) 32374)
0x437: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x438: IF (Stack[-1] == 0) GOTO 0x43e; Pop(1)

0x439: PushEmpty(object, object)
0x43a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x43b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x43c: Call2 0xbb6

0x43d: Pop(2)
0x43e: Push((int) 32379)
0x43f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x440: IF (Stack[-1] == 0) GOTO 0x45a; Pop(1)

0x441: PushEmpty(object, object)
0x442: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x443: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x444: Call2 0xbc7

0x445: Pop(2)
0x446: PushEmpty(object, object)
0x447: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x448: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x449: Call2 0xba0

0x44a: Pop(2)
0x44b: PushEmpty(object, object)
0x44c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x44d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x44e: Call2 0xbaa

0x44f: Pop(2)
0x450: PushEmpty(object, object)
0x451: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x452: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x453: Call2 0xc05

0x454: Pop(2)
0x455: PushEmpty(object, object)
0x456: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x457: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x458: Call2 0xbe9

0x459: Pop(2)
0x45a: Push((int) 32401)
0x45b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x45c: IF (Stack[-1] == 0) GOTO 0x462; Pop(1)

0x45d: PushEmpty(object, object)
0x45e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x45f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x460: Call2 0xc11

0x461: Pop(2)
0x462: Push((int) 32403)
0x463: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x464: IF (Stack[-1] == 0) GOTO 0x46a; Pop(1)

0x465: PushEmpty(object, object)
0x466: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x467: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x468: Call2 0xbf9

0x469: Pop(2)
0x46a: Push((int) 20587)
0x46b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x46c: IF (Stack[-1] == 0) GOTO 0x472; Pop(1)

0x46d: PushEmpty(object, object)
0x46e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x46f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x470: Call2 0xc17

0x471: Pop(2)
0x472: Push((int) 32369)
0x473: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x474: IF (Stack[-1] == 0) GOTO 0x4f0; Pop(1)

0x475: PushEmpty(bool, object)
0x476: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x477: Call2 0xc1c

0x478: Pop(1)
0x479: IF (Stack[-1] == 0) GOTO 0x498; Pop(1)

0x47a: PushEmpty(object, object)
0x47b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x47c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x47d: Call2 0xbb0

0x47e: Pop(2)
0x47f: PushEmpty(object, object)
0x480: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x481: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x482: Call2 0xbe3

0x483: Pop(2)
0x484: PushEmpty(string)
0x485: Stack[-1] = "Neutral"
0x486: Call2 0x412

0x487: Pop(1)
0x488: Push((int) 531038)
0x489: @@ SetMessage(Stack[-1])
0x48a: Pop(1)
0x48b: @@ ClearReplies()
0x48c: Pop(0)
0x48d: Push((int) 531227)
0x48e: Push((int) 32541)
0x48f: Push((int) 32540)
0x490: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x491: Pop(3)
0x492: Push((int) 531231)
0x493: Push((int) 32545)
0x494: Push((int) 32544)
0x495: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x496: Pop(3)
0x497: Return(); Pop(0)

0x498: PushEmpty(string)
0x499: Stack[-1] = "Smile"
0x49a: Call2 0x412

0x49b: Pop(1)
0x49c: Push((int) 518214)
0x49d: @@ SetMessage(Stack[-1])
0x49e: Pop(1)
0x49f: @@ ClearReplies()
0x4a0: Pop(0)
0x4a1: PushEmpty(bool, object)
0x4a2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4a3: Call2 0xc34

0x4a4: Pop(1)
0x4a5: IF (Stack[-1] == 0) GOTO 0x4ab; Pop(1)

0x4a6: Push((int) 531041)
0x4a7: Push((int) 32373)
0x4a8: Push((int) 32372)
0x4a9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4aa: Pop(3)
0x4ab: PushEmpty(bool)
0x4ac: Stack[-1] = (bool) 0
0x4ad: PushEmpty(bool)
0x4ae: Stack[-1] = (bool) 0
0x4af: PushEmpty(bool, object)
0x4b0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4b1: Call2 0xc40

0x4b2: Pop(1)
0x4b3: IF (Stack[-1] == 0) GOTO 0x4ba; Pop(1)

0x4b4: PushEmpty(bool, object)
0x4b5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4b6: Call2 0xc28

0x4b7: Pop(1)
0x4b8: IF (Stack[-1] == 0) GOTO 0x4ba; Pop(1)

0x4b9: Stack[-1] = (bool) 1
0x4ba: IF (Stack[-1] == 0) GOTO 0x4c2; Pop(1)

0x4bb: PushEmpty(bool, object)
0x4bc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4bd: Call2 0xc62

0x4be: Pop(1)
0x4bf: Pop(1); Push((bool) Stack[-1] == 0)
0x4c0: IF (Stack[-1] == 0) GOTO 0x4c2; Pop(1)

0x4c1: Stack[-1] = (bool) 1
0x4c2: IF (Stack[-1] == 0) GOTO 0x4c8; Pop(1)

0x4c3: Push((int) 531048)
0x4c4: Push((int) 32378)
0x4c5: Push((int) 32377)
0x4c6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4c7: Pop(3)
0x4c8: PushEmpty(bool)
0x4c9: Stack[-1] = (bool) 0
0x4ca: PushEmpty(bool)
0x4cb: Stack[-1] = (bool) 0
0x4cc: PushEmpty(bool, object)
0x4cd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4ce: Call2 0xc56

0x4cf: Pop(1)
0x4d0: IF (Stack[-1] == 0) GOTO 0x4d8; Pop(1)

0x4d1: PushEmpty(bool, object)
0x4d2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4d3: Call2 0xc4a

0x4d4: Pop(1)
0x4d5: Pop(1); Push((bool) Stack[-1] == 0)
0x4d6: IF (Stack[-1] == 0) GOTO 0x4d8; Pop(1)

0x4d7: Stack[-1] = (bool) 1
0x4d8: IF (Stack[-1] == 0) GOTO 0x4df; Pop(1)

0x4d9: PushEmpty(bool, object)
0x4da: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4db: Call2 0xc6e

0x4dc: Pop(1)
0x4dd: IF (Stack[-1] == 0) GOTO 0x4df; Pop(1)

0x4de: Stack[-1] = (bool) 1
0x4df: IF (Stack[-1] == 0) GOTO 0x4e5; Pop(1)

0x4e0: Push((int) 531081)
0x4e1: Push((int) 32402)
0x4e2: Push((int) 32401)
0x4e3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4e4: Pop(3)
0x4e5: Push((int) 518215)
0x4e6: Push((int) 20584)
0x4e7: Push((int) 19328)
0x4e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4e9: Pop(3)
0x4ea: Push((int) 518216)
0x4eb: Push((int) -1)
0x4ec: Push((int) 19329)
0x4ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ee: Pop(3)
0x4ef: Return(); Pop(0)

0x4f0: Push((int) 20584)
0x4f1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4f2: IF (Stack[-1] == 0) GOTO 0x507; Pop(1)

0x4f3: PushEmpty(string)
0x4f4: Stack[-1] = "Neutral"
0x4f5: Call2 0x412

0x4f6: Pop(1)
0x4f7: Push((int) 519419)
0x4f8: @@ SetMessage(Stack[-1])
0x4f9: Pop(1)
0x4fa: @@ ClearReplies()
0x4fb: Pop(0)
0x4fc: Push((int) 519420)
0x4fd: Push((int) 20586)
0x4fe: Push((int) 20585)
0x4ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x500: Pop(3)
0x501: Push((int) 519424)
0x502: Push((int) 20586)
0x503: Push((int) 20589)
0x504: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x505: Pop(3)
0x506: Return(); Pop(0)

0x507: Push((int) 20586)
0x508: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x509: IF (Stack[-1] == 0) GOTO 0x51e; Pop(1)

0x50a: PushEmpty(string)
0x50b: Stack[-1] = "Neutral"
0x50c: Call2 0x412

0x50d: Pop(1)
0x50e: Push((int) 519421)
0x50f: @@ SetMessage(Stack[-1])
0x510: Pop(1)
0x511: @@ ClearReplies()
0x512: Pop(0)
0x513: Push((int) 519422)
0x514: Push((int) -1)
0x515: Push((int) 20587)
0x516: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x517: Pop(3)
0x518: Push((int) 519423)
0x519: Push((int) -1)
0x51a: Push((int) 20588)
0x51b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x51c: Pop(3)
0x51d: Return(); Pop(0)

0x51e: Push((int) 20576)
0x51f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x520: IF (Stack[-1] == 0) GOTO 0x521; Pop(1)

0x521: Push((int) 20578)
0x522: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x523: IF (Stack[-1] == 0) GOTO 0x538; Pop(1)

0x524: PushEmpty(string)
0x525: Stack[-1] = "Grin"
0x526: Call2 0x412

0x527: Pop(1)
0x528: Push((int) 519413)
0x529: @@ SetMessage(Stack[-1])
0x52a: Pop(1)
0x52b: @@ ClearReplies()
0x52c: Pop(0)
0x52d: Push((int) 519414)
0x52e: Push((int) 20580)
0x52f: Push((int) 20579)
0x530: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x531: Pop(3)
0x532: Push((int) 519426)
0x533: Push((int) 20582)
0x534: Push((int) 20592)
0x535: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x536: Pop(3)
0x537: Return(); Pop(0)

0x538: Push((int) 20580)
0x539: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x53a: IF (Stack[-1] == 0) GOTO 0x54f; Pop(1)

0x53b: PushEmpty(string)
0x53c: Stack[-1] = "Neutral"
0x53d: Call2 0x412

0x53e: Pop(1)
0x53f: Push((int) 519415)
0x540: @@ SetMessage(Stack[-1])
0x541: Pop(1)
0x542: @@ ClearReplies()
0x543: Pop(0)
0x544: Push((int) 519416)
0x545: Push((int) 20582)
0x546: Push((int) 20581)
0x547: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x548: Pop(3)
0x549: Push((int) 519427)
0x54a: Push((int) -1)
0x54b: Push((int) 20594)
0x54c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x54d: Pop(3)
0x54e: Return(); Pop(0)

0x54f: Push((int) 20582)
0x550: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x551: IF (Stack[-1] == 0) GOTO 0x566; Pop(1)

0x552: PushEmpty(string)
0x553: Stack[-1] = "Neutral"
0x554: Call2 0x412

0x555: Pop(1)
0x556: Push((int) 519417)
0x557: @@ SetMessage(Stack[-1])
0x558: Pop(1)
0x559: @@ ClearReplies()
0x55a: Pop(0)
0x55b: Push((int) 519418)
0x55c: Push((int) -1)
0x55d: Push((int) 20583)
0x55e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x55f: Pop(3)
0x560: Push((int) 519428)
0x561: Push((int) -1)
0x562: Push((int) 20595)
0x563: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x564: Pop(3)
0x565: Return(); Pop(0)

0x566: Push((int) 32402)
0x567: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x568: IF (Stack[-1] == 0) GOTO 0x57d; Pop(1)

0x569: PushEmpty(string)
0x56a: Stack[-1] = "Neutral"
0x56b: Call2 0x412

0x56c: Pop(1)
0x56d: Push((int) 531082)
0x56e: @@ SetMessage(Stack[-1])
0x56f: Pop(1)
0x570: @@ ClearReplies()
0x571: Pop(0)
0x572: Push((int) 531217)
0x573: Push((int) 32529)
0x574: Push((int) 32528)
0x575: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x576: Pop(3)
0x577: Push((int) 531221)
0x578: Push((int) 32536)
0x579: Push((int) 32532)
0x57a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x57b: Pop(3)
0x57c: Return(); Pop(0)

0x57d: Push((int) 32529)
0x57e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x57f: IF (Stack[-1] == 0) GOTO 0x594; Pop(1)

0x580: PushEmpty(string)
0x581: Stack[-1] = "Neutral"
0x582: Call2 0x412

0x583: Pop(1)
0x584: Push((int) 531218)
0x585: @@ SetMessage(Stack[-1])
0x586: Pop(1)
0x587: @@ ClearReplies()
0x588: Pop(0)
0x589: Push((int) 531219)
0x58a: Push((int) 32531)
0x58b: Push((int) 32530)
0x58c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x58d: Pop(3)
0x58e: Push((int) 531222)
0x58f: Push((int) 32536)
0x590: Push((int) 32533)
0x591: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x592: Pop(3)
0x593: Return(); Pop(0)

0x594: Push((int) 32536)
0x595: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x596: IF (Stack[-1] == 0) GOTO 0x5ab; Pop(1)

0x597: PushEmpty(string)
0x598: Stack[-1] = "Grin"
0x599: Call2 0x412

0x59a: Pop(1)
0x59b: Push((int) 531224)
0x59c: @@ SetMessage(Stack[-1])
0x59d: Pop(1)
0x59e: @@ ClearReplies()
0x59f: Pop(0)
0x5a0: Push((int) 531225)
0x5a1: Push((int) -1)
0x5a2: Push((int) 32538)
0x5a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a4: Pop(3)
0x5a5: Push((int) 531226)
0x5a6: Push((int) -1)
0x5a7: Push((int) 32539)
0x5a8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a9: Pop(3)
0x5aa: Return(); Pop(0)

0x5ab: Push((int) 32531)
0x5ac: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5ad: IF (Stack[-1] == 0) GOTO 0x5bd; Pop(1)

0x5ae: PushEmpty(string)
0x5af: Stack[-1] = "Neutral"
0x5b0: Call2 0x412

0x5b1: Pop(1)
0x5b2: Push((int) 531220)
0x5b3: @@ SetMessage(Stack[-1])
0x5b4: Pop(1)
0x5b5: @@ ClearReplies()
0x5b6: Pop(0)
0x5b7: Push((int) 531083)
0x5b8: Push((int) -1)
0x5b9: Push((int) 32403)
0x5ba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5bb: Pop(3)
0x5bc: Return(); Pop(0)

0x5bd: Push((int) 32378)
0x5be: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5bf: IF (Stack[-1] == 0) GOTO 0x5d4; Pop(1)

0x5c0: PushEmpty(string)
0x5c1: Stack[-1] = "Smile"
0x5c2: Call2 0x412

0x5c3: Pop(1)
0x5c4: Push((int) 531049)
0x5c5: @@ SetMessage(Stack[-1])
0x5c6: Pop(1)
0x5c7: @@ ClearReplies()
0x5c8: Pop(0)
0x5c9: Push((int) 531214)
0x5ca: Push((int) 32526)
0x5cb: Push((int) 32524)
0x5cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5cd: Pop(3)
0x5ce: Push((int) 531215)
0x5cf: Push((int) 32526)
0x5d0: Push((int) 32525)
0x5d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d2: Pop(3)
0x5d3: Return(); Pop(0)

0x5d4: Push((int) 32526)
0x5d5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5d6: IF (Stack[-1] == 0) GOTO 0x5e6; Pop(1)

0x5d7: PushEmpty(string)
0x5d8: Stack[-1] = "Neutral"
0x5d9: Call2 0x412

0x5da: Pop(1)
0x5db: Push((int) 531216)
0x5dc: @@ SetMessage(Stack[-1])
0x5dd: Pop(1)
0x5de: @@ ClearReplies()
0x5df: Pop(0)
0x5e0: Push((int) 531050)
0x5e1: Push((int) -1)
0x5e2: Push((int) 32379)
0x5e3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5e4: Pop(3)
0x5e5: Return(); Pop(0)

0x5e6: Push((int) 32373)
0x5e7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5e8: IF (Stack[-1] == 0) GOTO 0x5f8; Pop(1)

0x5e9: PushEmpty(string)
0x5ea: Stack[-1] = "Neutral"
0x5eb: Call2 0x412

0x5ec: Pop(1)
0x5ed: Push((int) 531042)
0x5ee: @@ SetMessage(Stack[-1])
0x5ef: Pop(1)
0x5f0: @@ ClearReplies()
0x5f1: Pop(0)
0x5f2: Push((int) 531043)
0x5f3: Push((int) -1)
0x5f4: Push((int) 32374)
0x5f5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5f6: Pop(3)
0x5f7: Return(); Pop(0)

0x5f8: Push((int) 32545)
0x5f9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5fa: IF (Stack[-1] == 0) GOTO 0x60f; Pop(1)

0x5fb: PushEmpty(string)
0x5fc: Stack[-1] = "Neutral"
0x5fd: Call2 0x412

0x5fe: Pop(1)
0x5ff: Push((int) 531232)
0x600: @@ SetMessage(Stack[-1])
0x601: Pop(1)
0x602: @@ ClearReplies()
0x603: Pop(0)
0x604: Push((int) 531233)
0x605: Push((int) 32541)
0x606: Push((int) 32546)
0x607: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x608: Pop(3)
0x609: Push((int) 531234)
0x60a: Push((int) -1)
0x60b: Push((int) 32547)
0x60c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x60d: Pop(3)
0x60e: Return(); Pop(0)

0x60f: Push((int) 32541)
0x610: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x611: IF (Stack[-1] == 0) GOTO 0x626; Pop(1)

0x612: PushEmpty(string)
0x613: Stack[-1] = "Smile"
0x614: Call2 0x412

0x615: Pop(1)
0x616: Push((int) 531228)
0x617: @@ SetMessage(Stack[-1])
0x618: Pop(1)
0x619: @@ ClearReplies()
0x61a: Pop(0)
0x61b: Push((int) 531238)
0x61c: Push((int) 32553)
0x61d: Push((int) 32552)
0x61e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x61f: Pop(3)
0x620: Push((int) 531229)
0x621: Push((int) 32543)
0x622: Push((int) 32542)
0x623: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x624: Pop(3)
0x625: Return(); Pop(0)

0x626: Push((int) 32543)
0x627: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x628: IF (Stack[-1] == 0) GOTO 0x63d; Pop(1)

0x629: PushEmpty(string)
0x62a: Stack[-1] = "Untrust"
0x62b: Call2 0x412

0x62c: Pop(1)
0x62d: Push((int) 531230)
0x62e: @@ SetMessage(Stack[-1])
0x62f: Pop(1)
0x630: @@ ClearReplies()
0x631: Pop(0)
0x632: Push((int) 531235)
0x633: Push((int) -1)
0x634: Push((int) 32549)
0x635: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x636: Pop(3)
0x637: Push((int) 531240)
0x638: Push((int) 32553)
0x639: Push((int) 32554)
0x63a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x63b: Pop(3)
0x63c: Return(); Pop(0)

0x63d: Push((int) 32553)
0x63e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x63f: IF (Stack[-1] == 0) GOTO 0x64f; Pop(1)

0x640: PushEmpty(string)
0x641: Stack[-1] = "Smile"
0x642: Call2 0x412

0x643: Pop(1)
0x644: Push((int) 531239)
0x645: @@ SetMessage(Stack[-1])
0x646: Pop(1)
0x647: @@ ClearReplies()
0x648: Pop(0)
0x649: Push((int) 531236)
0x64a: Push((int) 32551)
0x64b: Push((int) 32550)
0x64c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64d: Pop(3)
0x64e: Return(); Pop(0)

0x64f: Push((int) 32551)
0x650: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x651: IF (Stack[-1] == 0) GOTO 0x666; Pop(1)

0x652: PushEmpty(string)
0x653: Stack[-1] = "Neutral"
0x654: Call2 0x412

0x655: Pop(1)
0x656: Push((int) 531237)
0x657: @@ SetMessage(Stack[-1])
0x658: Pop(1)
0x659: @@ ClearReplies()
0x65a: Pop(0)
0x65b: Push((int) 531045)
0x65c: Push((int) -1)
0x65d: Push((int) 32376)
0x65e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x65f: Pop(3)
0x660: Push((int) 531040)
0x661: Push((int) -1)
0x662: Push((int) 32371)
0x663: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x664: Pop(3)
0x665: Return(); Pop(0)

0x666: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x667: PushEmpty(bool)
0x668: Call2 0xb98

0x669: Pop(0)
0x66a: IF (Stack[-1] == 0) GOTO 0x66e; Pop(1)

0x66b: @ lshStopAnimation()
0x66c: Pop(0)
0x66d: GOTO 0x670

0x66e: @ StopAnimation()
0x66f: Pop(0)
0x670: Return(); Pop(0)

0x671: GOTO 0x429

0x672: Return(); Pop(0)

0x673: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x674: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x675: PushEmpty(bool, object, float)
0x676: Stack[-2] = Stack[-12]
0x677: Stack[-1] = (float) 70.0
0x678: Call2 0x9b6

0x679: Pop(2)
0x67a: Pop(1); Push((bool) Stack[-1] == 0)
0x67b: IF (Stack[-1] == 0) GOTO 0x67e; Pop(1)

0x67c: Stack[-10] = (int) -2
0x67d: Return(); Pop(8)

0x67e: @ CreateDialog(Stack[-4])
0x67f: Pop(0)
0x680: PushEmpty(int)
0x681: Call2 0xb92

0x682: Pop(0)
0x683: @@ SetNPCName(Stack[-1])
0x684: Pop(1)
0x685: PushEmpty(int)
0x686: Call2 0xb90

0x687: Pop(0)
0x688: @@ SetNPCDescription(Stack[-1])
0x689: Pop(1)
0x68a: PushEmpty(string)
0x68b: Call2 0xb94

0x68c: Pop(0)
0x68d: @@ SetPhoto(Stack[-1])
0x68e: Pop(1)
0x68f: PushEmpty(string)
0x690: Call2 0xb96

0x691: Pop(0)
0x692: @@ SetPhoto2(Stack[-1])
0x693: Pop(1)
0x694: PushEmpty(int)
0x695: Call2 0xd74

0x696: Pop(0)
0x697: @@ SetPlayerName(Stack[-1])
0x698: Pop(1)
0x699: Stack[-2] = (int) -1
0x69a: @ IsOverrideActive(Stack[-3])
0x69b: Pop(0)
0x69c: Push(Stack[-3])
0x69d: IF (Stack[-1] == 0) GOTO 0x6a0; Pop(1)

0x69e: Stack[-10] = (int) -2
0x69f: Return(); Pop(8)

0x6a0: @ DoDialog(Stack[-4])
0x6a1: Pop(0)
0x6a2: PushEmpty(bool, object)
0x6a3: PushEmpty(object)
0x6a4: Call2 0xb1f

0x6a5: Stack[-2] = Stack[-1]
0x6a6: Pop(1)
0x6a7: Call2 0xa0b

0x6a8: Pop(2)
0x6a9: PushEmpty(object, object)
0x6aa: Stack[-2] = Stack[-11]
0x6ab: Stack[-1] = Stack[-6]
0x6ac: Push(-2, 4); TaskCall(10)
0x6ad: Call2 0x6c4

0x6ae: Pop(-2, 4); TaskReturn
0x6af: Pop(2)
0x6b0: @@ IsDialogEnd(Stack[-1])
0x6b1: Pop(0)
0x6b2: Pop(0); Push((bool) Stack[-1] == 0)
0x6b3: IF (Stack[-1] == 0) GOTO 0x6b9; Pop(1)

0x6b4: @ sync()
0x6b5: Pop(0)
0x6b6: @@ IsDialogEnd(Stack[-1])
0x6b7: Pop(0)
0x6b8: GOTO 0x6b2

0x6b9: PushEmpty(object)
0x6ba: Stack[-1] = Stack[-10]
0x6bb: Call2 0x9fa

0x6bc: Pop(1)
0x6bd: @ StopDialog(Stack[-4])
0x6be: Pop(0)
0x6bf: @@ GetReturnValue(Stack[-2])
0x6c0: Pop(0)
0x6c1: Stack[-10] = Stack[-2]
0x6c2: Return(); Pop(8)

0x6c3: Stack[-4] = 0
0x6c4: PushEmpty()
0x6c5: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x6c6: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x6c7: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x6c8: Push((int) 1)
0x6c9: IF (Stack[-1] == 0) GOTO 0x6f3; Pop(1)

0x6ca: PushEmpty(string)
0x6cb: Stack[-1] = "Smile"
0x6cc: Call2 0x711

0x6cd: Pop(1)
0x6ce: Push((int) 518917)
0x6cf: @@ SetMessage(Stack[-1])
0x6d0: Pop(1)
0x6d1: @@ ClearReplies()
0x6d2: Pop(0)
0x6d3: PushEmpty(bool)
0x6d4: Stack[-1] = (bool) 0
0x6d5: PushEmpty(bool, object)
0x6d6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6d7: Call2 0xc7a

0x6d8: Pop(1)
0x6d9: IF (Stack[-1] == 0) GOTO 0x6e0; Pop(1)

0x6da: PushEmpty(bool, object)
0x6db: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6dc: Call2 0xc86

0x6dd: Pop(1)
0x6de: IF (Stack[-1] == 0) GOTO 0x6e0; Pop(1)

0x6df: Stack[-1] = (bool) 1
0x6e0: IF (Stack[-1] == 0) GOTO 0x6e6; Pop(1)

0x6e1: Push((int) 518919)
0x6e2: Push((int) 20031)
0x6e3: Push((int) 20030)
0x6e4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e5: Pop(3)
0x6e6: Push((int) 531963)
0x6e7: Push((int) -1)
0x6e8: Push((int) 33368)
0x6e9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ea: Pop(3)
0x6eb: Push((int) 518918)
0x6ec: Push((int) -1)
0x6ed: Push((int) 20029)
0x6ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ef: Pop(3)
0x6f0: GOTO 0x6f3

0x6f1: Return(); Pop(0)

0x6f2: GOTO 0x6c8

0x6f3: PushEmpty(bool)
0x6f4: Call2 0xb98

0x6f5: Pop(0)
0x6f6: IF (Stack[-1] == 0) GOTO 0x702; Pop(1)

0x6f7: @ lshWaitForAnimEnd()
0x6f8: Pop(0)
0x6f9: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6fa: IF (Stack[-1] == 0) GOTO 0x6fc; Pop(1)

0x6fb: GOTO 0x701

0x6fc: PushEmpty(string)
0x6fd: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x6fe: Call2 0xad0

0x6ff: Pop(1)
0x700: GOTO 0x6f7

0x701: GOTO 0x710

0x702: Push("all")
0x703: Push("idle")
0x704: @ PlayAnimation(Stack[-2], Stack[-1])
0x705: Pop(2)
0x706: @ WaitForAnimEnd()
0x707: Pop(0)
0x708: Push( Stack[3 + Tasks[-1].StackPointer] )
0x709: IF (Stack[-1] == 0) GOTO 0x70b; Pop(1)

0x70a: GOTO 0x710

0x70b: Push("all")
0x70c: Push("idle")
0x70d: @ PlayAnimation(Stack[-2], Stack[-1])
0x70e: Pop(2)
0x70f: GOTO 0x706

0x710: Return(); Pop(0)

0x711: PushEmpty()
0x712: PushEmpty(bool)
0x713: Call2 0xb98

0x714: Pop(0)
0x715: Pop(1); Push((bool) Stack[-1] == 0)
0x716: IF (Stack[-1] == 0) GOTO 0x718; Pop(1)

0x717: Return(); Pop(0)

0x718: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x719: IF (Stack[-1] == 0) GOTO 0x71b; Pop(1)

0x71a: Return(); Pop(0)

0x71b: PushEmpty(string, bool)
0x71c: Stack[-2] = Stack[-3]
0x71d: Push("")
0x71e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x71f: IF (Stack[-1] == 0) GOTO 0x722; Pop(1)

0x720: Stack[-1] = (bool) 0
0x721: GOTO 0x723

0x722: Stack[-1] = (bool) 1
0x723: Call2 0xae0

0x724: Pop(2)
0x725: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x726: Return(); Pop(0)

0x727: PushEmpty()
0x728: Push((int) 1)
0x729: IF (Stack[-1] == 0) GOTO 0x7c3; Pop(1)

0x72a: PushEmpty()
0x72b: Call2 0xafe

0x72c: Pop(0)
0x72d: Push((int) 20030)
0x72e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x72f: IF (Stack[-1] == 0) GOTO 0x735; Pop(1)

0x730: PushEmpty(object, object)
0x731: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x732: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x733: Call2 0xb9a

0x734: Pop(2)
0x735: Push((int) 33368)
0x736: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x737: IF (Stack[-1] == 0) GOTO 0x73d; Pop(1)

0x738: PushEmpty(object, object)
0x739: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x73a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x73b: Call2 0xc17

0x73c: Pop(2)
0x73d: Push((int) 20028)
0x73e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x73f: IF (Stack[-1] == 0) GOTO 0x767; Pop(1)

0x740: PushEmpty(string)
0x741: Stack[-1] = "Smile"
0x742: Call2 0x711

0x743: Pop(1)
0x744: Push((int) 518917)
0x745: @@ SetMessage(Stack[-1])
0x746: Pop(1)
0x747: @@ ClearReplies()
0x748: Pop(0)
0x749: PushEmpty(bool)
0x74a: Stack[-1] = (bool) 0
0x74b: PushEmpty(bool, object)
0x74c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x74d: Call2 0xc7a

0x74e: Pop(1)
0x74f: IF (Stack[-1] == 0) GOTO 0x756; Pop(1)

0x750: PushEmpty(bool, object)
0x751: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x752: Call2 0xc86

0x753: Pop(1)
0x754: IF (Stack[-1] == 0) GOTO 0x756; Pop(1)

0x755: Stack[-1] = (bool) 1
0x756: IF (Stack[-1] == 0) GOTO 0x75c; Pop(1)

0x757: Push((int) 518919)
0x758: Push((int) 20031)
0x759: Push((int) 20030)
0x75a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x75b: Pop(3)
0x75c: Push((int) 531963)
0x75d: Push((int) -1)
0x75e: Push((int) 33368)
0x75f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x760: Pop(3)
0x761: Push((int) 518918)
0x762: Push((int) -1)
0x763: Push((int) 20029)
0x764: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x765: Pop(3)
0x766: Return(); Pop(0)

0x767: Push((int) 20031)
0x768: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x769: IF (Stack[-1] == 0) GOTO 0x779; Pop(1)

0x76a: PushEmpty(string)
0x76b: Stack[-1] = "Neutral"
0x76c: Call2 0x711

0x76d: Pop(1)
0x76e: Push((int) 518920)
0x76f: @@ SetMessage(Stack[-1])
0x770: Pop(1)
0x771: @@ ClearReplies()
0x772: Pop(0)
0x773: Push((int) 518923)
0x774: Push((int) 20039)
0x775: Push((int) 20034)
0x776: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x777: Pop(3)
0x778: Return(); Pop(0)

0x779: Push((int) 20033)
0x77a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x77b: IF (Stack[-1] == 0) GOTO 0x77c; Pop(1)

0x77c: Push((int) 20037)
0x77d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x77e: IF (Stack[-1] == 0) GOTO 0x78e; Pop(1)

0x77f: PushEmpty(string)
0x780: Stack[-1] = "What"
0x781: Call2 0x711

0x782: Pop(1)
0x783: Push((int) 518926)
0x784: @@ SetMessage(Stack[-1])
0x785: Pop(1)
0x786: @@ ClearReplies()
0x787: Pop(0)
0x788: Push((int) 518927)
0x789: Push((int) -1)
0x78a: Push((int) 20038)
0x78b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x78c: Pop(3)
0x78d: Return(); Pop(0)

0x78e: Push((int) 20039)
0x78f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x790: IF (Stack[-1] == 0) GOTO 0x7a5; Pop(1)

0x791: PushEmpty(string)
0x792: Stack[-1] = "Grin"
0x793: Call2 0x711

0x794: Pop(1)
0x795: Push((int) 518928)
0x796: @@ SetMessage(Stack[-1])
0x797: Pop(1)
0x798: @@ ClearReplies()
0x799: Pop(0)
0x79a: Push((int) 518930)
0x79b: Push((int) 20042)
0x79c: Push((int) 20041)
0x79d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x79e: Pop(3)
0x79f: Push((int) 518929)
0x7a0: Push((int) -1)
0x7a1: Push((int) 20040)
0x7a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7a3: Pop(3)
0x7a4: Return(); Pop(0)

0x7a5: Push((int) 20042)
0x7a6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7a7: IF (Stack[-1] == 0) GOTO 0x7b7; Pop(1)

0x7a8: PushEmpty(string)
0x7a9: Stack[-1] = "Grin"
0x7aa: Call2 0x711

0x7ab: Pop(1)
0x7ac: Push((int) 518931)
0x7ad: @@ SetMessage(Stack[-1])
0x7ae: Pop(1)
0x7af: @@ ClearReplies()
0x7b0: Pop(0)
0x7b1: Push((int) 518932)
0x7b2: Push((int) -1)
0x7b3: Push((int) 20043)
0x7b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b5: Pop(3)
0x7b6: Return(); Pop(0)

0x7b7: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x7b8: PushEmpty(bool)
0x7b9: Call2 0xb98

0x7ba: Pop(0)
0x7bb: IF (Stack[-1] == 0) GOTO 0x7bf; Pop(1)

0x7bc: @ lshStopAnimation()
0x7bd: Pop(0)
0x7be: GOTO 0x7c1

0x7bf: @ StopAnimation()
0x7c0: Pop(0)
0x7c1: Return(); Pop(0)

0x7c2: GOTO 0x728

0x7c3: Return(); Pop(0)

0x7c4: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x7c5: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x7c6: PushEmpty(bool, object, float)
0x7c7: Stack[-2] = Stack[-12]
0x7c8: Stack[-1] = (float) 70.0
0x7c9: Call2 0x9b6

0x7ca: Pop(2)
0x7cb: Pop(1); Push((bool) Stack[-1] == 0)
0x7cc: IF (Stack[-1] == 0) GOTO 0x7cf; Pop(1)

0x7cd: Stack[-10] = (int) -2
0x7ce: Return(); Pop(8)

0x7cf: @ CreateDialog(Stack[-4])
0x7d0: Pop(0)
0x7d1: PushEmpty(int)
0x7d2: Call2 0xb92

0x7d3: Pop(0)
0x7d4: @@ SetNPCName(Stack[-1])
0x7d5: Pop(1)
0x7d6: PushEmpty(int)
0x7d7: Call2 0xb90

0x7d8: Pop(0)
0x7d9: @@ SetNPCDescription(Stack[-1])
0x7da: Pop(1)
0x7db: PushEmpty(string)
0x7dc: Call2 0xb94

0x7dd: Pop(0)
0x7de: @@ SetPhoto(Stack[-1])
0x7df: Pop(1)
0x7e0: PushEmpty(string)
0x7e1: Call2 0xb96

0x7e2: Pop(0)
0x7e3: @@ SetPhoto2(Stack[-1])
0x7e4: Pop(1)
0x7e5: PushEmpty(int)
0x7e6: Call2 0xd74

0x7e7: Pop(0)
0x7e8: @@ SetPlayerName(Stack[-1])
0x7e9: Pop(1)
0x7ea: Stack[-2] = (int) -1
0x7eb: @ IsOverrideActive(Stack[-3])
0x7ec: Pop(0)
0x7ed: Push(Stack[-3])
0x7ee: IF (Stack[-1] == 0) GOTO 0x7f1; Pop(1)

0x7ef: Stack[-10] = (int) -2
0x7f0: Return(); Pop(8)

0x7f1: @ DoDialog(Stack[-4])
0x7f2: Pop(0)
0x7f3: PushEmpty(bool, object)
0x7f4: PushEmpty(object)
0x7f5: Call2 0xb1f

0x7f6: Stack[-2] = Stack[-1]
0x7f7: Pop(1)
0x7f8: Call2 0xa0b

0x7f9: Pop(2)
0x7fa: PushEmpty(object, object)
0x7fb: Stack[-2] = Stack[-11]
0x7fc: Stack[-1] = Stack[-6]
0x7fd: Push(-2, 4); TaskCall(12)
0x7fe: Call2 0x815

0x7ff: Pop(-2, 4); TaskReturn
0x800: Pop(2)
0x801: @@ IsDialogEnd(Stack[-1])
0x802: Pop(0)
0x803: Pop(0); Push((bool) Stack[-1] == 0)
0x804: IF (Stack[-1] == 0) GOTO 0x80a; Pop(1)

0x805: @ sync()
0x806: Pop(0)
0x807: @@ IsDialogEnd(Stack[-1])
0x808: Pop(0)
0x809: GOTO 0x803

0x80a: PushEmpty(object)
0x80b: Stack[-1] = Stack[-10]
0x80c: Call2 0x9fa

0x80d: Pop(1)
0x80e: @ StopDialog(Stack[-4])
0x80f: Pop(0)
0x810: @@ GetReturnValue(Stack[-2])
0x811: Pop(0)
0x812: Stack[-10] = Stack[-2]
0x813: Return(); Pop(8)

0x814: Stack[-4] = 0
0x815: PushEmpty()
0x816: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x817: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x818: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x819: Push((int) 1)
0x81a: IF (Stack[-1] == 0) GOTO 0x831; Pop(1)

0x81b: PushEmpty(string)
0x81c: Stack[-1] = "Neutral"
0x81d: Call2 0x84f

0x81e: Pop(1)
0x81f: Push((int) 540554)
0x820: @@ SetMessage(Stack[-1])
0x821: Pop(1)
0x822: @@ ClearReplies()
0x823: Pop(0)
0x824: Push((int) 540555)
0x825: Push((int) -1)
0x826: Push((int) 42564)
0x827: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x828: Pop(3)
0x829: Push((int) 540794)
0x82a: Push((int) -1)
0x82b: Push((int) 42843)
0x82c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82d: Pop(3)
0x82e: GOTO 0x831

0x82f: Return(); Pop(0)

0x830: GOTO 0x819

0x831: PushEmpty(bool)
0x832: Call2 0xb98

0x833: Pop(0)
0x834: IF (Stack[-1] == 0) GOTO 0x840; Pop(1)

0x835: @ lshWaitForAnimEnd()
0x836: Pop(0)
0x837: Push( Stack[3 + Tasks[-1].StackPointer] )
0x838: IF (Stack[-1] == 0) GOTO 0x83a; Pop(1)

0x839: GOTO 0x83f

0x83a: PushEmpty(string)
0x83b: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x83c: Call2 0xad0

0x83d: Pop(1)
0x83e: GOTO 0x835

0x83f: GOTO 0x84e

0x840: Push("all")
0x841: Push("idle")
0x842: @ PlayAnimation(Stack[-2], Stack[-1])
0x843: Pop(2)
0x844: @ WaitForAnimEnd()
0x845: Pop(0)
0x846: Push( Stack[3 + Tasks[-1].StackPointer] )
0x847: IF (Stack[-1] == 0) GOTO 0x849; Pop(1)

0x848: GOTO 0x84e

0x849: Push("all")
0x84a: Push("idle")
0x84b: @ PlayAnimation(Stack[-2], Stack[-1])
0x84c: Pop(2)
0x84d: GOTO 0x844

0x84e: Return(); Pop(0)

0x84f: PushEmpty()
0x850: PushEmpty(bool)
0x851: Call2 0xb98

0x852: Pop(0)
0x853: Pop(1); Push((bool) Stack[-1] == 0)
0x854: IF (Stack[-1] == 0) GOTO 0x856; Pop(1)

0x855: Return(); Pop(0)

0x856: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x857: IF (Stack[-1] == 0) GOTO 0x859; Pop(1)

0x858: Return(); Pop(0)

0x859: PushEmpty(string, bool)
0x85a: Stack[-2] = Stack[-3]
0x85b: Push("")
0x85c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x85d: IF (Stack[-1] == 0) GOTO 0x860; Pop(1)

0x85e: Stack[-1] = (bool) 0
0x85f: GOTO 0x861

0x860: Stack[-1] = (bool) 1
0x861: Call2 0xae0

0x862: Pop(2)
0x863: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x864: Return(); Pop(0)

0x865: PushEmpty()
0x866: Push((int) 1)
0x867: IF (Stack[-1] == 0) GOTO 0x88e; Pop(1)

0x868: PushEmpty()
0x869: Call2 0xafe

0x86a: Pop(0)
0x86b: Push((int) 42563)
0x86c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x86d: IF (Stack[-1] == 0) GOTO 0x882; Pop(1)

0x86e: PushEmpty(string)
0x86f: Stack[-1] = "Neutral"
0x870: Call2 0x84f

0x871: Pop(1)
0x872: Push((int) 540554)
0x873: @@ SetMessage(Stack[-1])
0x874: Pop(1)
0x875: @@ ClearReplies()
0x876: Pop(0)
0x877: Push((int) 540555)
0x878: Push((int) -1)
0x879: Push((int) 42564)
0x87a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x87b: Pop(3)
0x87c: Push((int) 540794)
0x87d: Push((int) -1)
0x87e: Push((int) 42843)
0x87f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x880: Pop(3)
0x881: Return(); Pop(0)

0x882: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x883: PushEmpty(bool)
0x884: Call2 0xb98

0x885: Pop(0)
0x886: IF (Stack[-1] == 0) GOTO 0x88a; Pop(1)

0x887: @ lshStopAnimation()
0x888: Pop(0)
0x889: GOTO 0x88c

0x88a: @ StopAnimation()
0x88b: Pop(0)
0x88c: Return(); Pop(0)

0x88d: GOTO 0x866

0x88e: Return(); Pop(0)

0x88f: PushEmpty()
0x890: Call2 0x893

0x891: Pop(0)
0x892: Return(); Pop(0)

0x893: PushEmpty(bool)
0x894: Call2 0x9b1

0x895: Pop(0)
0x896: Pop(1); Push((bool) Stack[-1] == 0)
0x897: IF (Stack[-1] == 0) GOTO 0x89a; Pop(1)

0x898: @ Hold()
0x899: Pop(0)
0x89a: @ GetDirection(Stack[-0])
0x89b: Pop(0)
0x89c: PushEmpty()
0x89d: Call2 0x943

0x89e: Pop(0)
0x89f: GOTO 0x89c

0x8a0: Return(); Pop(0)

0x8a1: PushEmpty(object, object)
0x8a2: Push("player")
0x8a3: @ FindActor(Stack[-2], Stack[-1])
0x8a4: Pop(1)
0x8a5: Pop(0); Push((bool) Stack[-1] == 0)
0x8a6: IF (Stack[-1] == 0) GOTO 0x8a9; Pop(1)

0x8a7: Stack[-3] = (bool) 0
0x8a8: Return(); Pop(2)

0x8a9: PushEmpty(bool, object)
0x8aa: Stack[-1] = Stack[-3]
0x8ab: Call2 0x9a8

0x8ac: Stack[-5] = Stack[-2]
0x8ad: Pop(2)
0x8ae: Return(); Pop(2)

0x8af: Stack[-1] = 0
0x8b0: Push(CvectorIndex(Stack[-0], 0))
0x8b1: Push(CvectorIndex(Stack[-0], 2))
0x8b2: @ RotateAsync(Stack[-2], Stack[-1])
0x8b3: Pop(2)
0x8b4: Return(); Pop(0)

0x8b5: PushEmpty(object, bool, object, bool)
0x8b6: Push("player")
0x8b7: @ FindActor(Stack[-3], Stack[-1])
0x8b8: Pop(1)
0x8b9: Pop(0); Push((bool) Stack[-2] == 0)
0x8ba: IF (Stack[-1] == 0) GOTO 0x8bd; Pop(1)

0x8bb: Stack[-5] = (bool) 0
0x8bc: Return(); Pop(4)

0x8bd: PushEmpty(float, object)
0x8be: Stack[-1] = Stack[-4]
0x8bf: Call2 0x98f

0x8c0: Pop(1)
0x8c1: Push((float)90000.0)
0x8c2: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x8c3: IF (Stack[-1] == 0) GOTO 0x8c6; Pop(1)

0x8c4: Stack[-5] = (bool) 0
0x8c5: Return(); Pop(4)

0x8c6: @ CanSee(Stack[-1], Stack[-2])
0x8c7: Pop(0)
0x8c8: Stack[-5] = Stack[-1]
0x8c9: Return(); Pop(4)

0x8ca: Stack[-2] = 0
0x8cb: PushEmpty(float, float)
0x8cc: Push((int) 8)
0x8cd: Push((int) 16)
0x8ce: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x8cf: Pop(2)
0x8d0: Push((int) 10)
0x8d1: @ SetTimer(Stack[-1], Stack[-2])
0x8d2: Pop(1)
0x8d3: Return(); Pop(2)

0x8d4: Push((int) 10)
0x8d5: @ KillTimer(Stack[-1])
0x8d6: Pop(1)
0x8d7: Return(); Pop(0)

0x8d8: PushEmpty()
0x8d9: Push((int) 10)
0x8da: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8db: IF (Stack[-1] == 0) GOTO 0x8fd; Pop(1)

0x8dc: PushEmpty()
0x8dd: Call2 0x8d4

0x8de: Pop(0)
0x8df: PushEmpty(bool)
0x8e0: Stack[-1] = (bool) 0
0x8e1: PushEmpty(bool)
0x8e2: Call2 0x9b1

0x8e3: Pop(0)
0x8e4: IF (Stack[-1] == 0) GOTO 0x8ea; Pop(1)

0x8e5: PushEmpty(bool)
0x8e6: Call2 0x8b5

0x8e7: Pop(0)
0x8e8: IF (Stack[-1] == 0) GOTO 0x8ea; Pop(1)

0x8e9: Stack[-1] = (bool) 1
0x8ea: IF (Stack[-1] == 0) GOTO 0x8f7; Pop(1)

0x8eb: PushEmpty(bool)
0x8ec: Call2 0x8a1

0x8ed: Pop(0)
0x8ee: IF (Stack[-1] == 0) GOTO 0x8f6; Pop(1)

0x8ef: PushEmpty(bool, object)
0x8f0: PushEmpty(object)
0x8f1: Call2 0xb1f

0x8f2: Stack[-2] = Stack[-1]
0x8f3: Pop(1)
0x8f4: Call2 0xa45

0x8f5: Pop(2)
0x8f6: GOTO 0x8fd

0x8f7: PushEmpty()
0x8f8: Call2 0x8b0

0x8f9: Pop(0)
0x8fa: PushEmpty()
0x8fb: Call2 0x8cb

0x8fc: Pop(0)
0x8fd: Return(); Pop(0)

0x8fe: PushEmpty()
0x8ff: Call2 0x98a

0x900: Pop(0)
0x901: PushEmpty()
0x902: Call2 0x8d4

0x903: Pop(0)
0x904: @ lshStopSpeech()
0x905: Pop(0)
0x906: @ lshStopAnimation()
0x907: Pop(0)
0x908: @ StopAsync()
0x909: Pop(0)
0x90a: @ Hold()
0x90b: Pop(0)
0x90c: Return(); Pop(0)

0x90d: @ StopGroup0()
0x90e: Pop(0)
0x90f: PushEmpty()
0x910: Call2 0x8d4

0x911: Pop(0)
0x912: PushEmpty(string)
0x913: Stack[-1] = "Neutral"
0x914: Call2 0xad0

0x915: Pop(1)
0x916: PushEmpty()
0x917: Call2 0x8cb

0x918: Pop(0)
0x919: Return(); Pop(0)

0x91a: PushEmpty()
0x91b: Push(Stack[-1])
0x91c: IF (Stack[-1] == 0) GOTO 0x921; Pop(1)

0x91d: PushEmpty()
0x91e: Call2 0x8cb

0x91f: Pop(0)
0x920: GOTO 0x925

0x921: PushEmpty(string)
0x922: Stack[-1] = "Neutral"
0x923: Call2 0xad0

0x924: Pop(1)
0x925: Return(); Pop(0)

0x926: PushEmpty(bool, bool)
0x927: @ IsOverrideActive(Stack[-1])
0x928: Pop(0)
0x929: Pop(0); Push((bool) Stack[-1] == 0)
0x92a: IF (Stack[-1] == 0) GOTO 0x942; Pop(1)

0x92b: EventDisable(0)
0x92c: PushEmpty()
0x92d: Call2 0x98a

0x92e: Pop(0)
0x92f: PushEmpty(bool, object)
0x930: Stack[-1] = Stack[-5]
0x931: Call2 0x9a8

0x932: Pop(2)
0x933: EventEnable(0)
0x934: PushEmpty(object)
0x935: Stack[-1] = Stack[-4]
0x936: Call2 0xd85

0x937: Pop(1)
0x938: PushEmpty(string)
0x939: Stack[-1] = "Neutral"
0x93a: Call2 0xad0

0x93b: Pop(1)
0x93c: PushEmpty()
0x93d: Call2 0x8d4

0x93e: Pop(0)
0x93f: PushEmpty()
0x940: Call2 0x8cb

0x941: Pop(0)
0x942: Return(); Pop(2)

0x943: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x944: @ WaitForAnimEnd()
0x945: Pop(0)
0x946: PushEmpty(bool)
0x947: Call2 0x9b1

0x948: Pop(0)
0x949: Pop(1); Push((bool) Stack[-1] == 0)
0x94a: IF (Stack[-1] == 0) GOTO 0x94c; Pop(1)

0x94b: Return(); Pop(12)

0x94c: PushEmpty(int)
0x94d: Call2 0xb7f

0x94e: Stack[-7] = Stack[-1]
0x94f: Pop(1)
0x950: Stack[-5] = (int) 0
0x951: PushEmpty(bool)
0x952: Stack[-1] = (bool) 0
0x953: Push((int) 5)
0x954: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x955: IF (Stack[-1] == 0) GOTO 0x95b; Pop(1)

0x956: PushEmpty(bool)
0x957: Call2 0x9b1

0x958: Pop(0)
0x959: IF (Stack[-1] == 0) GOTO 0x95b; Pop(1)

0x95a: Stack[-1] = (bool) 1
0x95b: IF (Stack[-1] == 0) GOTO 0x985; Pop(1)

0x95c: Pop(0); Push((bool) Stack[-6] == 0)
0x95d: IF (Stack[-1] == 0) GOTO 0x965; Pop(1)

0x95e: Push((int) 3)
0x95f: @ Sleep(Stack[-1], Stack[-5])
0x960: Pop(1)
0x961: Pop(0); Push((bool) Stack[-4] == 0)
0x962: IF (Stack[-1] == 0) GOTO 0x964; Pop(1)

0x963: GOTO 0x985

0x964: GOTO 0x97a

0x965: @ irand(Stack[-3], Stack[-6])
0x966: Pop(0)
0x967: Push((int) 5)
0x968: @ irand(Stack[-3], Stack[-1])
0x969: Pop(1)
0x96a: Push((int) 0)
0x96b: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x96c: IF (Stack[-1] == 0) GOTO 0x96e; Pop(1)

0x96d: Stack[-3] = (int) 0
0x96e: Push("all")
0x96f: PushEmpty(string, int)
0x970: Stack[-1] = Stack[-6]
0x971: Call2 0xb78

0x972: Pop(1)
0x973: @ PlayAnimation(Stack[-2], Stack[-1])
0x974: Pop(2)
0x975: @ WaitForAnimEnd(Stack[-1])
0x976: Pop(0)
0x977: Pop(0); Push((bool) Stack[-1] == 0)
0x978: IF (Stack[-1] == 0) GOTO 0x97a; Pop(1)

0x979: GOTO 0x985

0x97a: PushEmpty(bool)
0x97b: Call2 0x988

0x97c: Pop(0)
0x97d: Pop(1); Push((bool) Stack[-1] == 0)
0x97e: IF (Stack[-1] == 0) GOTO 0x980; Pop(1)

0x97f: GOTO 0x985

0x980: @ ResetAAS()
0x981: Pop(0)
0x982: Push((int) 1)
0x983: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x984: GOTO 0x951

0x985: @ ResetAAS()
0x986: Pop(0)
0x987: Return(); Pop(12)

0x988: Stack[-1] = (bool) 1
0x989: Return(); Pop(0)

0x98a: @ StopAnimation()
0x98b: Pop(0)
0x98c: @ StopGroup0()
0x98d: Pop(0)
0x98e: Return(); Pop(0)

0x98f: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x990: @ GetPosition(Stack[-3])
0x991: Pop(0)
0x992: @@ GetPosition(Stack[-2])
0x993: Pop(0)
0x994: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x995: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x996: Return(); Pop(6)

0x997: PushEmpty(int, int)
0x998: @@ GetProperty(Stack[-4], Stack[-1])
0x999: Pop(0)
0x99a: Pop(0); Push(Stack[-1] + Stack[-3]);
0x99b: @@ SetProperty(Stack[-5], Stack[-1])
0x99c: Pop(1)
0x99d: Return(); Pop(2)

0x99e: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x99f: @ GetPosition(Stack[-3])
0x9a0: Pop(0)
0x9a1: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x9a2: Push(CvectorIndex(Stack[-2], 0))
0x9a3: Push(CvectorIndex(Stack[-3], 2))
0x9a4: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x9a5: Pop(2)
0x9a6: Stack[-8] = Stack[-1]
0x9a7: Return(); Pop(6)

0x9a8: PushEmpty(cvector, cvector)
0x9a9: @@ GetPosition(Stack[-1])
0x9aa: Pop(0)
0x9ab: PushEmpty(bool, cvector)
0x9ac: Stack[-1] = Stack[-3]
0x9ad: Call2 0x99e

0x9ae: Stack[-6] = Stack[-2]
0x9af: Pop(2)
0x9b0: Return(); Pop(2)

0x9b1: PushEmpty(bool, bool)
0x9b2: @ IsLoaded(Stack[-1])
0x9b3: Pop(0)
0x9b4: Stack[-3] = Stack[-1]
0x9b5: Return(); Pop(2)

0x9b6: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x9b7: @@ GetPosition(Stack[-8])
0x9b8: Pop(0)
0x9b9: @@ GetEyesHeight(Stack[-9])
0x9ba: Pop(0)
0x9bb: Push(CvectorIndex(Stack[-8], 1))
0x9bc: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x9bd: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x9be: @ GetPosition(Stack[-7])
0x9bf: Pop(0)
0x9c0: @ GetEyesHeight(Stack[-9])
0x9c1: Pop(0)
0x9c2: Push(CvectorIndex(Stack[-7], 1))
0x9c3: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x9c4: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x9c5: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x9c6: Push(CvectorIndex(Stack[-6], 1))
0x9c7: Stack[-1] = (int) 0
0x9c8: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x9c9: Pop(0); Push(Stack[-6] | Stack[-6]);
0x9ca: Pop(1); Push(Sqrt(Stack[-1]))
0x9cb: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x9cc: Stack[-5] = -Stack[-6]; Pop(0);
0x9cd: Pop(0); Push(Stack[-6] * Stack[-19]);
0x9ce: PushEmpty(cvector, cvector)
0x9cf: Push(CVector(0.0, 1.0, 0.0))
0x9d0: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x9d1: Call2 0xb25

0x9d2: Pop(1)
0x9d3: Push((int) 25)
0x9d4: Pop(2); Push(Stack[-2] * Stack[-1]);
0x9d5: Pop(2); Push(Stack[-2] + Stack[-1]);
0x9d6: Push(CVector(0.0, 10.0, 0.0))
0x9d7: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x9d8: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x9d9: @ IsOverrideActive(Stack[-2])
0x9da: Pop(0)
0x9db: Push(Stack[-2])
0x9dc: IF (Stack[-1] == 0) GOTO 0x9df; Pop(1)

0x9dd: Stack[-21] = (bool) 0
0x9de: Return(); Pop(18)

0x9df: @ StopWorld()
0x9e0: Pop(0)
0x9e1: @ CameraTransit(Stack[-3], Stack[-5])
0x9e2: Pop(0)
0x9e3: Push(CvectorIndex(Stack[-4], 0))
0x9e4: Push(CvectorIndex(Stack[-5], 2))
0x9e5: @ Rotate(Stack[-2], Stack[-1])
0x9e6: Pop(2)
0x9e7: PushEmpty(bool)
0x9e8: Call2 0xb98

0x9e9: Pop(0)
0x9ea: IF (Stack[-1] == 0) GOTO 0x9ec; Pop(1)

0x9eb: GOTO 0x9f4

0x9ec: Push("head")
0x9ed: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x9ee: Pop(1)
0x9ef: Push(Stack[-1])
0x9f0: IF (Stack[-1] == 0) GOTO 0x9f4; Pop(1)

0x9f1: Push("head")
0x9f2: @ LookAsyncCamera(Stack[-1])
0x9f3: Pop(1)
0x9f4: @ CameraWaitForPlayFinish()
0x9f5: Pop(0)
0x9f6: @ ResumeWorld()
0x9f7: Pop(0)
0x9f8: Stack[-21] = (bool) 1
0x9f9: Return(); Pop(18)

0x9fa: PushEmpty(bool, bool)
0x9fb: @ CameraSwitchToNormal()
0x9fc: Pop(0)
0x9fd: PushEmpty(bool)
0x9fe: Call2 0xb98

0x9ff: Pop(0)
0xa00: IF (Stack[-1] == 0) GOTO 0xa02; Pop(1)

0xa01: GOTO 0xa0a

0xa02: Push("head")
0xa03: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xa04: Pop(1)
0xa05: Push(Stack[-1])
0xa06: IF (Stack[-1] == 0) GOTO 0xa0a; Pop(1)

0xa07: Push("head")
0xa08: @ UnlookAsync(Stack[-1])
0xa09: Pop(1)
0xa0a: Return(); Pop(2)

0xa0b: PushEmpty(int, int, int, int)
0xa0c: Push("voice_common")
0xa0d: @ GetVariable(Stack[-1], Stack[-3])
0xa0e: Pop(1)
0xa0f: Push(Stack[-2])
0xa10: IF (Stack[-1] == 0) GOTO 0xa31; Pop(1)

0xa11: PushEmpty(bool, object)
0xa12: Stack[-1] = Stack[-7]
0xa13: Call2 0xa45

0xa14: Pop(1)
0xa15: Pop(1); Push((bool) Stack[-1] == 0)
0xa16: IF (Stack[-1] == 0) GOTO 0xa1f; Pop(1)

0xa17: PushEmpty(bool, object)
0xa18: Stack[-1] = Stack[-7]
0xa19: Call2 0xa6a

0xa1a: Pop(1)
0xa1b: Pop(1); Push((bool) Stack[-1] == 0)
0xa1c: IF (Stack[-1] == 0) GOTO 0xa1f; Pop(1)

0xa1d: Stack[-6] = (bool) 0
0xa1e: Return(); Pop(4)

0xa1f: Push((int) 2)
0xa20: @ irand(Stack[-2], Stack[-1])
0xa21: Pop(1)
0xa22: Push(Stack[-1])
0xa23: IF (Stack[-1] == 0) GOTO 0xa2c; Pop(1)

0xa24: Push("voice_common")
0xa25: Push((int) 1)
0xa26: Pop(1); Push(Stack[-4] + Stack[-1]);
0xa27: Push((int) 3)
0xa28: Pop(2); Push(Stack[-2] % Stack[-1]);
0xa29: @ SetVariable(Stack[-2], Stack[-1])
0xa2a: Pop(2)
0xa2b: GOTO 0xa30

0xa2c: Push("voice_common")
0xa2d: Push((int) 0)
0xa2e: @ SetVariable(Stack[-2], Stack[-1])
0xa2f: Pop(2)
0xa30: GOTO 0xa43

0xa31: PushEmpty(bool, object)
0xa32: Stack[-1] = Stack[-7]
0xa33: Call2 0xa6a

0xa34: Pop(1)
0xa35: Pop(1); Push((bool) Stack[-1] == 0)
0xa36: IF (Stack[-1] == 0) GOTO 0xa3f; Pop(1)

0xa37: PushEmpty(bool, object)
0xa38: Stack[-1] = Stack[-7]
0xa39: Call2 0xa45

0xa3a: Pop(1)
0xa3b: Pop(1); Push((bool) Stack[-1] == 0)
0xa3c: IF (Stack[-1] == 0) GOTO 0xa3f; Pop(1)

0xa3d: Stack[-6] = (bool) 0
0xa3e: Return(); Pop(4)

0xa3f: Push("voice_common")
0xa40: Push((int) 1)
0xa41: @ SetVariable(Stack[-2], Stack[-1])
0xa42: Pop(2)
0xa43: Stack[-6] = (bool) 1
0xa44: Return(); Pop(4)

0xa45: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xa46: Stack[-5] = "c"
0xa47: Stack[-4] = (int) 0
0xa48: Push((int) 1)
0xa49: IF (Stack[-1] == 0) GOTO 0xa55; Pop(1)

0xa4a: Push((int) 1)
0xa4b: Pop(1); Push(Stack[-5] + Stack[-1]);
0xa4c: Pop(1); Push(Stack[-6] + Stack[-1]);
0xa4d: @@ HasProperty(Stack[-1], Stack[-4])
0xa4e: Pop(1)
0xa4f: Pop(0); Push((bool) Stack[-3] == 0)
0xa50: IF (Stack[-1] == 0) GOTO 0xa52; Pop(1)

0xa51: GOTO 0xa55

0xa52: Push((int) 1)
0xa53: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xa54: GOTO 0xa48

0xa55: Pop(0); Push((bool) Stack[-4] == 0)
0xa56: IF (Stack[-1] == 0) GOTO 0xa59; Pop(1)

0xa57: Stack[-12] = (bool) 0
0xa58: Return(); Pop(10)

0xa59: Stack[-2] = (int) 0
0xa5a: Push((int) 1)
0xa5b: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xa5c: IF (Stack[-1] == 0) GOTO 0xa5f; Pop(1)

0xa5d: @ irand(Stack[-2], Stack[-4])
0xa5e: Pop(0)
0xa5f: Push((int) 1)
0xa60: Pop(1); Push(Stack[-3] + Stack[-1]);
0xa61: Pop(1); Push(Stack[-6] + Stack[-1]);
0xa62: @@ GetProperty(Stack[-1], Stack[-2])
0xa63: Pop(1)
0xa64: PushEmpty(bool, string)
0xa65: Stack[-1] = Stack[-3]
0xa66: Call2 0xaef

0xa67: Stack[-14] = Stack[-2]
0xa68: Pop(2)
0xa69: Return(); Pop(10)

0xa6a: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xa6b: Push("d")
0xa6c: PushEmpty(int)
0xa6d: Call2 0xb69

0xa6e: Pop(0)
0xa6f: Pop(2); Push(Stack[-2] + Stack[-1]);
0xa70: Push("m")
0xa71: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0xa72: Stack[-4] = (int) 0
0xa73: Push((int) 1)
0xa74: IF (Stack[-1] == 0) GOTO 0xa80; Pop(1)

0xa75: Push((int) 1)
0xa76: Pop(1); Push(Stack[-5] + Stack[-1]);
0xa77: Pop(1); Push(Stack[-6] + Stack[-1]);
0xa78: @@ HasProperty(Stack[-1], Stack[-4])
0xa79: Pop(1)
0xa7a: Pop(0); Push((bool) Stack[-3] == 0)
0xa7b: IF (Stack[-1] == 0) GOTO 0xa7d; Pop(1)

0xa7c: GOTO 0xa80

0xa7d: Push((int) 1)
0xa7e: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xa7f: GOTO 0xa73

0xa80: Pop(0); Push((bool) Stack[-4] == 0)
0xa81: IF (Stack[-1] == 0) GOTO 0xa84; Pop(1)

0xa82: Stack[-12] = (bool) 0
0xa83: Return(); Pop(10)

0xa84: Stack[-2] = (int) 0
0xa85: Push((int) 1)
0xa86: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xa87: IF (Stack[-1] == 0) GOTO 0xa8a; Pop(1)

0xa88: @ irand(Stack[-2], Stack[-4])
0xa89: Pop(0)
0xa8a: Push((int) 1)
0xa8b: Pop(1); Push(Stack[-3] + Stack[-1]);
0xa8c: Pop(1); Push(Stack[-6] + Stack[-1]);
0xa8d: @@ GetProperty(Stack[-1], Stack[-2])
0xa8e: Pop(1)
0xa8f: PushEmpty(bool, string)
0xa90: Stack[-1] = Stack[-3]
0xa91: Call2 0xaef

0xa92: Stack[-14] = Stack[-2]
0xa93: Pop(2)
0xa94: Return(); Pop(10)

0xa95: PushEmpty()
0xa96: PushEmpty(bool, object, float)
0xa97: Stack[-2] = Stack[-4]
0xa98: Stack[-1] = (int) 70
0xa99: Call2 0xa9d

0xa9a: Stack[-5] = Stack[-3]
0xa9b: Pop(3)
0xa9c: Return(); Pop(0)

0xa9d: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0xa9e: @@ GetPosition(Stack[-7])
0xa9f: Pop(0)
0xaa0: @@ GetEyesHeight(Stack[-8])
0xaa1: Pop(0)
0xaa2: Push(CvectorIndex(Stack[-7], 1))
0xaa3: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0xaa4: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xaa5: @ GetPosition(Stack[-6])
0xaa6: Pop(0)
0xaa7: @ GetEyesHeight(Stack[-8])
0xaa8: Pop(0)
0xaa9: Push(CvectorIndex(Stack[-6], 1))
0xaaa: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0xaab: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xaac: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0xaad: Push(CvectorIndex(Stack[-5], 1))
0xaae: Stack[-1] = (int) 0
0xaaf: CvectorIndex(Stack[-6], 1) = Stack[-1];
0xab0: Pop(0); Push(Stack[-5] | Stack[-5]);
0xab1: Pop(1); Push(Sqrt(Stack[-1]))
0xab2: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0xab3: Stack[-4] = -Stack[-5]; Pop(0);
0xab4: Pop(0); Push(Stack[-5] * Stack[-17]);
0xab5: Push(CVector(0.0, 10.0, 0.0))
0xab6: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0xab7: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0xab8: @ IsOverrideActive(Stack[-1])
0xab9: Pop(0)
0xaba: Push(Stack[-1])
0xabb: IF (Stack[-1] == 0) GOTO 0xabe; Pop(1)

0xabc: Stack[-19] = (bool) 0
0xabd: Return(); Pop(16)

0xabe: @ StopWorld()
0xabf: Pop(0)
0xac0: @ CameraTransit(Stack[-2], Stack[-4])
0xac1: Pop(0)
0xac2: Push(CvectorIndex(Stack[-3], 0))
0xac3: Push(CvectorIndex(Stack[-4], 2))
0xac4: @ Rotate(Stack[-2], Stack[-1])
0xac5: Pop(2)
0xac6: @ CameraWaitForPlayFinish()
0xac7: Pop(0)
0xac8: @ ResumeWorld()
0xac9: Pop(0)
0xaca: Stack[-19] = (bool) 1
0xacb: Return(); Pop(16)

0xacc: PushEmpty()
0xacd: @ CameraSwitchToNormal()
0xace: Pop(0)
0xacf: Return(); Pop(0)

0xad0: PushEmpty(bool, float, float, bool, float, float)
0xad1: @ lshHasAnimation(Stack[-3], Stack[-7])
0xad2: Pop(0)
0xad3: Push(Stack[-3])
0xad4: IF (Stack[-1] == 0) GOTO 0xadb; Pop(1)

0xad5: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0xad6: Pop(0)
0xad7: Push((bool) 0)
0xad8: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xad9: Pop(1)
0xada: GOTO 0xadf

0xadb: Push("Can't find lsh animation : ")
0xadc: Pop(1); Push(Stack[-1] + Stack[-8]);
0xadd: @ Trace(Stack[-1])
0xade: Pop(1)
0xadf: Return(); Pop(6)

0xae0: PushEmpty(bool, float, float, bool, float, float)
0xae1: @ lshHasAnimation(Stack[-3], Stack[-8])
0xae2: Pop(0)
0xae3: Push(Stack[-3])
0xae4: IF (Stack[-1] == 0) GOTO 0xaea; Pop(1)

0xae5: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0xae6: Pop(0)
0xae7: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0xae8: Pop(0)
0xae9: GOTO 0xaee

0xaea: Push("Can't find lsh animation : ")
0xaeb: Pop(1); Push(Stack[-1] + Stack[-9]);
0xaec: @ Trace(Stack[-1])
0xaed: Pop(1)
0xaee: Return(); Pop(6)

0xaef: PushEmpty(bool, bool)
0xaf0: PushEmpty(bool)
0xaf1: Call2 0xb98

0xaf2: Pop(0)
0xaf3: IF (Stack[-1] == 0) GOTO 0xafc; Pop(1)

0xaf4: @ lshHasSpeech(Stack[-1], Stack[-3])
0xaf5: Pop(0)
0xaf6: Push(Stack[-1])
0xaf7: IF (Stack[-1] == 0) GOTO 0xafc; Pop(1)

0xaf8: @ lshPlaySpeech(Stack[-3])
0xaf9: Pop(0)
0xafa: Stack[-4] = (bool) 1
0xafb: Return(); Pop(2)

0xafc: Stack[-4] = (bool) 0
0xafd: Return(); Pop(2)

0xafe: PushEmpty(bool)
0xaff: Call2 0xb98

0xb00: Pop(0)
0xb01: IF (Stack[-1] == 0) GOTO 0xb04; Pop(1)

0xb02: @ lshStopSpeech()
0xb03: Pop(0)
0xb04: Return(); Pop(0)

0xb05: PushEmpty(bool, bool)
0xb06: PushEmpty(bool, int, int)
0xb07: Stack[-2] = Stack[-7]
0xb08: Stack[-1] = Stack[-6]
0xb09: Call2 0xb2f

0xb0a: Pop(2)
0xb0b: IF (Stack[-1] == 0) GOTO 0xb0f; Pop(1)

0xb0c: Push((int) 0)
0xb0d: @ AddItem(Stack[-2], Stack[-6], Stack[-1])
0xb0e: Pop(1)
0xb0f: Return(); Pop(2)

0xb10: PushEmpty(int, bool, int, bool)
0xb11: PushEmpty(bool, int, int)
0xb12: Stack[-2] = Stack[-10]
0xb13: Stack[-1] = Stack[-9]
0xb14: Call2 0xb2f

0xb15: Pop(2)
0xb16: IF (Stack[-1] == 0) GOTO 0xb1e; Pop(1)

0xb17: @ irand(Stack[-2], Stack[-5])
0xb18: Pop(0)
0xb19: Push((int) 0)
0xb1a: Push((int) 1)
0xb1b: Pop(1); Push(Stack[-4] + Stack[-1]);
0xb1c: @ AddItem(Stack[-3], Stack[-10], Stack[-2], Stack[-1])
0xb1d: Pop(2)
0xb1e: Return(); Pop(4)

0xb1f: PushEmpty(object, object)
0xb20: @ self(Stack[-1])
0xb21: Pop(0)
0xb22: Stack[-3] = Stack[-1]
0xb23: Return(); Pop(2)

0xb24: Stack[-1] = 0
0xb25: PushEmpty(float, float)
0xb26: Pop(0); Push(Stack[-3] | Stack[-3]);
0xb27: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xb28: Push((float)0.0)
0xb29: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xb2a: IF (Stack[-1] == 0) GOTO 0xb2d; Pop(1)

0xb2b: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xb2c: Return(); Pop(2)

0xb2d: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xb2e: Return(); Pop(2)

0xb2f: PushEmpty(int, int)
0xb30: @ irand(Stack[-1], Stack[-3])
0xb31: Pop(0)
0xb32: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0xb33: Return(); Pop(2)

0xb34: PushEmpty(int, int)
0xb35: @ GetVariable(Stack[-3], Stack[-1])
0xb36: Pop(0)
0xb37: Stack[-4] = Stack[-1]
0xb38: Return(); Pop(2)

0xb39: PushEmpty(object, object)
0xb3a: @ CreateIntVector(Stack[-1])
0xb3b: Pop(0)
0xb3c: @@ add(Stack[-4])
0xb3d: Pop(0)
0xb3e: @@ add(Stack[-3])
0xb3f: Pop(0)
0xb40: Push((int) 3)
0xb41: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xb42: Pop(1)
0xb43: Return(); Pop(2)

0xb44: Stack[-1] = 0
0xb45: PushEmpty(int, int)
0xb46: PushEmpty(object, string, int)
0xb47: Stack[-3] = Stack[-7]
0xb48: Stack[-2] = "money"
0xb49: Stack[-1] = Stack[-6]
0xb4a: Call2 0x997

0xb4b: Pop(3)
0xb4c: Push((int) 0)
0xb4d: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0xb4e: IF (Stack[-1] == 0) GOTO 0xb57; Pop(1)

0xb4f: Push("Money")
0xb50: @ GetInvItemByName(Stack[-2], Stack[-1])
0xb51: Pop(1)
0xb52: PushEmpty(int, int)
0xb53: Stack[-2] = Stack[-3]
0xb54: Stack[-1] = Stack[-5]
0xb55: Call2 0xb39

0xb56: Pop(2)
0xb57: Return(); Pop(2)

0xb58: PushEmpty(object, object)
0xb59: @ FindActor(Stack[-1], Stack[-4])
0xb5a: Pop(0)
0xb5b: Pop(0); Push((bool) Stack[-1] == 0)
0xb5c: IF (Stack[-1] == 0) GOTO 0xb5f; Pop(1)

0xb5d: Stack[-5] = (bool) 0
0xb5e: Return(); Pop(2)

0xb5f: @ Trigger(Stack[-1], Stack[-3])
0xb60: Pop(0)
0xb61: Stack[-5] = (bool) 1
0xb62: Return(); Pop(2)

0xb63: Stack[-1] = 0
0xb64: PushEmpty(float, float)
0xb65: @ GetGameTime(Stack[-1])
0xb66: Pop(0)
0xb67: Stack[-3] = Stack[-1]
0xb68: Return(); Pop(2)

0xb69: PushEmpty(float, float)
0xb6a: @ GetGameTime(Stack[-1])
0xb6b: Pop(0)
0xb6c: Push((int) 1)
0xb6d: PushEmpty(int)
0xb6e: Push((int) 24)
0xb6f: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xb70: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xb71: Return(); Pop(2)

0xb72: PushEmpty()
0xb73: PushEmpty(int)
0xb74: Call2 0xb69

0xb75: Pop(0)
0xb76: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0xb77: Return(); Pop(0)

0xb78: PushEmpty(string, string)
0xb79: Stack[-1] = "idle"
0xb7a: Push(Stack[-3])
0xb7b: IF (Stack[-1] == 0) GOTO 0xb7d; Pop(1)

0xb7c: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xb7d: Stack[-4] = Stack[-1]
0xb7e: Return(); Pop(2)

0xb7f: PushEmpty(int, bool, int, bool)
0xb80: Stack[-2] = (int) 0
0xb81: Push("all")
0xb82: PushEmpty(string, int)
0xb83: Stack[-1] = Stack[-5]
0xb84: Call2 0xb78

0xb85: Pop(1)
0xb86: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xb87: Pop(2)
0xb88: Pop(0); Push((bool) Stack[-1] == 0)
0xb89: IF (Stack[-1] == 0) GOTO 0xb8b; Pop(1)

0xb8a: GOTO 0xb8e

0xb8b: Push((int) 1)
0xb8c: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xb8d: GOTO 0xb81

0xb8e: Stack[-5] = Stack[-2]
0xb8f: Return(); Pop(4)

0xb90: Stack[-1] = (int) 515529
0xb91: Return(); Pop(0)

0xb92: Stack[-1] = (int) 502855
0xb93: Return(); Pop(0)

0xb94: Stack[-1] = "ui/NPC_Andrei.png"
0xb95: Return(); Pop(0)

0xb96: Stack[-1] = "ui/NPC_Andrei_b.png"
0xb97: Return(); Pop(0)

0xb98: Stack[-1] = (bool) 1
0xb99: Return(); Pop(0)

0xb9a: PushEmpty()
0xb9b: Push("oob5Andrei1")
0xb9c: Push((int) 1)
0xb9d: @ SetVariable(Stack[-2], Stack[-1])
0xb9e: Pop(2)
0xb9f: Return(); Pop(0)

0xba0: PushEmpty()
0xba1: Push("money 4000 is given")
0xba2: @ Trace(Stack[-1])
0xba3: Pop(1)
0xba4: PushEmpty(object, int)
0xba5: Stack[-2] = Stack[-4]
0xba6: Stack[-1] = (int) 4000
0xba7: Call2 0xb45

0xba8: Pop(2)
0xba9: Return(); Pop(0)

0xbaa: PushEmpty()
0xbab: Push("playsound")
0xbac: Push("givemoney")
0xbad: @ TriggerWorld(Stack[-2], Stack[-1])
0xbae: Pop(2)
0xbaf: Return(); Pop(0)

0xbb0: PushEmpty()
0xbb1: Push("oob2Andrei2")
0xbb2: Push((int) 1)
0xbb3: @ SetVariable(Stack[-2], Stack[-1])
0xbb4: Pop(2)
0xbb5: Return(); Pop(0)

0xbb6: PushEmpty()
0xbb7: Push("b2q03")
0xbb8: Push((int) 1)
0xbb9: @ SetVariable(Stack[-2], Stack[-1])
0xbba: Pop(2)
0xbbb: PushEmpty()
0xbbc: Call2 0xc9d

0xbbd: Pop(0)
0xbbe: PushEmpty()
0xbbf: Call2 0xcaa

0xbc0: Pop(0)
0xbc1: PushEmpty(bool, string, string)
0xbc2: Stack[-2] = "quest_b2_03"
0xbc3: Stack[-1] = "place_maria"
0xbc4: Call2 0xb58

0xbc5: Pop(3)
0xbc6: Return(); Pop(0)

0xbc7: PushEmpty(object, int, object, int)
0xbc8: PushEmpty(object)
0xbc9: Call2 0xd14

0xbca: Stack[-3] = Stack[-1]
0xbcb: Pop(1)
0xbcc: Push("b2q03GoodShop")
0xbcd: Push("pt_b2q03_good_shop")
0xbce: Push((int) 3)
0xbcf: Push((int) 531061)
0xbd0: PushEmpty(float)
0xbd1: Call2 0xb64

0xbd2: Pop(0)
0xbd3: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xbd4: Pop(5)
0xbd5: PushEmpty()
0xbd6: Call2 0xcb7

0xbd7: Pop(0)
0xbd8: Push("grass_brown_tvir")
0xbd9: Push((int) 10)
0xbda: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0xbdb: Pop(2)
0xbdc: PushEmpty(bool, string, string)
0xbdd: Stack[-2] = "quest_b2_03"
0xbde: Stack[-1] = "completed"
0xbdf: Call2 0xb58

0xbe0: Pop(3)
0xbe1: Return(); Pop(4)

0xbe2: Stack[-2] = 0
0xbe3: PushEmpty()
0xbe4: Push("b2AndreiVisit")
0xbe5: Push((int) 1)
0xbe6: @ SetVariable(Stack[-2], Stack[-1])
0xbe7: Pop(2)
0xbe8: Return(); Pop(0)

0xbe9: PushEmpty()
0xbea: PushEmpty(object, string, float)
0xbeb: PushEmpty(object)
0xbec: Call2 0xd14

0xbed: Stack[-4] = Stack[-1]
0xbee: Pop(1)
0xbef: Stack[-2] = "pt_b2q03_good_shop"
0xbf0: Stack[-1] = (int) 2
0xbf1: Call2 0xd25

0xbf2: Pop(3)
0xbf3: PushEmpty(object)
0xbf4: Call2 0xd14

0xbf5: Pop(0)
0xbf6: @@ ShowMap(Stack[-1])
0xbf7: Pop(1)
0xbf8: Return(); Pop(0)

0xbf9: PushEmpty()
0xbfa: Push("b2q03_1")
0xbfb: Push((int) 2)
0xbfc: @ SetVariable(Stack[-2], Stack[-1])
0xbfd: Pop(2)
0xbfe: PushEmpty()
0xbff: Call2 0xcd1

0xc00: Pop(0)
0xc01: PushEmpty()
0xc02: Call2 0xcc4

0xc03: Pop(0)
0xc04: Return(); Pop(0)

0xc05: PushEmpty()
0xc06: PushEmpty(int, string)
0xc07: Stack[-1] = "b2q03_1"
0xc08: Call2 0xb34

0xc09: Pop(1)
0xc0a: Push((int) 0)
0xc0b: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0xc0c: IF (Stack[-1] == 0) GOTO 0xc10; Pop(1)

0xc0d: PushEmpty()
0xc0e: Call2 0xcde

0xc0f: Pop(0)
0xc10: Return(); Pop(0)

0xc11: PushEmpty()
0xc12: Push("oob2Andrei3")
0xc13: Push((int) 1)
0xc14: @ SetVariable(Stack[-2], Stack[-1])
0xc15: Pop(2)
0xc16: Return(); Pop(0)

0xc17: PushEmpty()
0xc18: Push((int) 1000)
0xc19: @@ SetReturnValue(Stack[-1])
0xc1a: Pop(1)
0xc1b: Return(); Pop(0)

0xc1c: PushEmpty()
0xc1d: PushEmpty(int, string)
0xc1e: Stack[-1] = "oob2Andrei2"
0xc1f: Call2 0xb34

0xc20: Pop(1)
0xc21: Push((int) 0)
0xc22: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc23: IF (Stack[-1] == 0) GOTO 0xc26; Pop(1)

0xc24: Stack[-2] = (bool) 1
0xc25: Return(); Pop(0)

0xc26: Stack[-2] = (bool) 0
0xc27: Return(); Pop(0)

0xc28: PushEmpty()
0xc29: PushEmpty(int, string)
0xc2a: Stack[-1] = "b2q03"
0xc2b: Call2 0xb34

0xc2c: Pop(1)
0xc2d: Push((int) 1)
0xc2e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc2f: IF (Stack[-1] == 0) GOTO 0xc32; Pop(1)

0xc30: Stack[-2] = (bool) 1
0xc31: Return(); Pop(0)

0xc32: Stack[-2] = (bool) 0
0xc33: Return(); Pop(0)

0xc34: PushEmpty()
0xc35: PushEmpty(int, string)
0xc36: Stack[-1] = "b2q03"
0xc37: Call2 0xb34

0xc38: Pop(1)
0xc39: Push((int) 0)
0xc3a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc3b: IF (Stack[-1] == 0) GOTO 0xc3e; Pop(1)

0xc3c: Stack[-2] = (bool) 1
0xc3d: Return(); Pop(0)

0xc3e: Stack[-2] = (bool) 0
0xc3f: Return(); Pop(0)

0xc40: PushEmpty()
0xc41: PushEmpty(bool, object)
0xc42: Stack[-1] = Stack[-3]
0xc43: Call2 0xc92

0xc44: Pop(1)
0xc45: IF (Stack[-1] == 0) GOTO 0xc48; Pop(1)

0xc46: Stack[-2] = (bool) 1
0xc47: Return(); Pop(0)

0xc48: Stack[-2] = (bool) 0
0xc49: Return(); Pop(0)

0xc4a: PushEmpty()
0xc4b: PushEmpty(int, string)
0xc4c: Stack[-1] = "b2q03"
0xc4d: Call2 0xb34

0xc4e: Pop(1)
0xc4f: Push((int) 1000)
0xc50: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc51: IF (Stack[-1] == 0) GOTO 0xc54; Pop(1)

0xc52: Stack[-2] = (bool) 1
0xc53: Return(); Pop(0)

0xc54: Stack[-2] = (bool) 0
0xc55: Return(); Pop(0)

0xc56: PushEmpty()
0xc57: PushEmpty(int, string)
0xc58: Stack[-1] = "b2q03_1"
0xc59: Call2 0xb34

0xc5a: Pop(1)
0xc5b: Push((int) 1)
0xc5c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc5d: IF (Stack[-1] == 0) GOTO 0xc60; Pop(1)

0xc5e: Stack[-2] = (bool) 1
0xc5f: Return(); Pop(0)

0xc60: Stack[-2] = (bool) 0
0xc61: Return(); Pop(0)

0xc62: PushEmpty()
0xc63: PushEmpty(int, string)
0xc64: Stack[-1] = "b2q03_1"
0xc65: Call2 0xb34

0xc66: Pop(1)
0xc67: Push((int) 2)
0xc68: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc69: IF (Stack[-1] == 0) GOTO 0xc6c; Pop(1)

0xc6a: Stack[-2] = (bool) 1
0xc6b: Return(); Pop(0)

0xc6c: Stack[-2] = (bool) 0
0xc6d: Return(); Pop(0)

0xc6e: PushEmpty()
0xc6f: PushEmpty(int, string)
0xc70: Stack[-1] = "oob2Andrei3"
0xc71: Call2 0xb34

0xc72: Pop(1)
0xc73: Push((int) 0)
0xc74: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc75: IF (Stack[-1] == 0) GOTO 0xc78; Pop(1)

0xc76: Stack[-2] = (bool) 1
0xc77: Return(); Pop(0)

0xc78: Stack[-2] = (bool) 0
0xc79: Return(); Pop(0)

0xc7a: PushEmpty()
0xc7b: PushEmpty(int, string)
0xc7c: Stack[-1] = "b5q01"
0xc7d: Call2 0xb34

0xc7e: Pop(1)
0xc7f: Push((int) 1)
0xc80: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc81: IF (Stack[-1] == 0) GOTO 0xc84; Pop(1)

0xc82: Stack[-2] = (bool) 1
0xc83: Return(); Pop(0)

0xc84: Stack[-2] = (bool) 0
0xc85: Return(); Pop(0)

0xc86: PushEmpty()
0xc87: PushEmpty(int, string)
0xc88: Stack[-1] = "oob5Andrei1"
0xc89: Call2 0xb34

0xc8a: Pop(1)
0xc8b: Push((int) 0)
0xc8c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc8d: IF (Stack[-1] == 0) GOTO 0xc90; Pop(1)

0xc8e: Stack[-2] = (bool) 1
0xc8f: Return(); Pop(0)

0xc90: Stack[-2] = (bool) 0
0xc91: Return(); Pop(0)

0xc92: PushEmpty(int, int)
0xc93: Push("grass_brown_tvir")
0xc94: @@ GetItemCountOfType(Stack[-2], Stack[-1])
0xc95: Pop(1)
0xc96: Push((int) 10)
0xc97: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xc98: IF (Stack[-1] == 0) GOTO 0xc9b; Pop(1)

0xc99: Stack[-4] = (bool) 1
0xc9a: Return(); Pop(2)

0xc9b: Stack[-4] = (bool) 0
0xc9c: Return(); Pop(2)

0xc9d: PushEmpty(object, object)
0xc9e: Push((int) 585)
0xc9f: Push((int) 2)
0xca0: Push((int) 531046)
0xca1: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xca2: Pop(3)
0xca3: PushEmpty(bool, object, int)
0xca4: Stack[-2] = Stack[-4]
0xca5: Stack[-1] = (int) -1
0xca6: Call2 0xcf8

0xca7: Pop(3)
0xca8: Return(); Pop(2)

0xca9: Stack[-1] = 0
0xcaa: PushEmpty(object, object)
0xcab: Push((int) 586)
0xcac: Push((int) 2)
0xcad: Push((int) 531047)
0xcae: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xcaf: Pop(3)
0xcb0: PushEmpty(bool, object, int)
0xcb1: Stack[-2] = Stack[-4]
0xcb2: Stack[-1] = (int) 585
0xcb3: Call2 0xcf8

0xcb4: Pop(3)
0xcb5: Return(); Pop(2)

0xcb6: Stack[-1] = 0
0xcb7: PushEmpty(object, object)
0xcb8: Push((int) 587)
0xcb9: Push((int) 2)
0xcba: Push((int) 531051)
0xcbb: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xcbc: Pop(3)
0xcbd: PushEmpty(bool, object, int)
0xcbe: Stack[-2] = Stack[-4]
0xcbf: Stack[-1] = (int) 585
0xcc0: Call2 0xcf8

0xcc1: Pop(3)
0xcc2: Return(); Pop(2)

0xcc3: Stack[-1] = 0
0xcc4: PushEmpty(object, object)
0xcc5: Push((int) 592)
0xcc6: Push((int) 2)
0xcc7: Push((int) 531080)
0xcc8: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xcc9: Pop(3)
0xcca: PushEmpty(bool, object, int)
0xccb: Stack[-2] = Stack[-4]
0xccc: Stack[-1] = (int) 585
0xccd: Call2 0xcf8

0xcce: Pop(3)
0xccf: Return(); Pop(2)

0xcd0: Stack[-1] = 0
0xcd1: PushEmpty(object, object)
0xcd2: Push((int) 591)
0xcd3: Push((int) 2)
0xcd4: Push((int) 531079)
0xcd5: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xcd6: Pop(3)
0xcd7: PushEmpty(bool, object, int)
0xcd8: Stack[-2] = Stack[-4]
0xcd9: Stack[-1] = (int) 588
0xcda: Call2 0xcf8

0xcdb: Pop(3)
0xcdc: Return(); Pop(2)

0xcdd: Stack[-1] = 0
0xcde: PushEmpty(object, object)
0xcdf: Push((int) 612)
0xce0: Push((int) 2)
0xce1: Push((int) 531559)
0xce2: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xce3: Pop(3)
0xce4: PushEmpty(bool, object, int)
0xce5: Stack[-2] = Stack[-4]
0xce6: Stack[-1] = (int) 588
0xce7: Call2 0xcf8

0xce8: Pop(3)
0xce9: Return(); Pop(2)

0xcea: Stack[-1] = 0
0xceb: PushEmpty(object, object)
0xcec: @ GetDiaryRoot(Stack[-1])
0xced: Pop(0)
0xcee: Pop(0); Push((bool) Stack[-1] == 0)
0xcef: IF (Stack[-1] == 0) GOTO 0xcf5; Pop(1)

0xcf0: Push("Can't retrieve diary root")
0xcf1: @ Trace(Stack[-1])
0xcf2: Pop(1)
0xcf3: Stack[-3] = (bool) 0
0xcf4: Return(); Pop(2)

0xcf5: Stack[-3] = Stack[-1]
0xcf6: Return(); Pop(2)

0xcf7: Stack[-1] = 0
0xcf8: PushEmpty(object, object, int, object, object, int)
0xcf9: PushEmpty(object)
0xcfa: Call2 0xceb

0xcfb: Stack[-4] = Stack[-1]
0xcfc: Pop(1)
0xcfd: @@ Find(Stack[-7], Stack[-2])
0xcfe: Pop(0)
0xcff: Pop(0); Push((bool) Stack[-2] == 0)
0xd00: IF (Stack[-1] == 0) GOTO 0xd07; Pop(1)

0xd01: Push("Can't find diary parent with id: ")
0xd02: Pop(1); Push(Stack[-1] + Stack[-8]);
0xd03: @ Trace(Stack[-1])
0xd04: Pop(1)
0xd05: Stack[-9] = (bool) 0
0xd06: Return(); Pop(6)

0xd07: @@ AddChild(Stack[-8])
0xd08: Pop(0)
0xd09: Push((int) 7)
0xd0a: @ SendWorldWndMessage(Stack[-1])
0xd0b: Pop(1)
0xd0c: @@ GetCategory(Stack[-1])
0xd0d: Pop(0)
0xd0e: @ SetDiarySection(Stack[-1])
0xd0f: Pop(0)
0xd10: Stack[-9] = (bool) 0
0xd11: Return(); Pop(6)

0xd12: Stack[-2] = 0
0xd13: Stack[-3] = 0
0xd14: PushEmpty(object, object, object, object)
0xd15: @ GetMainOutdoorScene(Stack[-2])
0xd16: Pop(0)
0xd17: Pop(0); Push((bool) Stack[-2] == 0)
0xd18: IF (Stack[-1] == 0) GOTO 0xd1f; Pop(1)

0xd19: Push("Can't find main outdoor scene")
0xd1a: @ Trace(Stack[-1])
0xd1b: Pop(1)
0xd1c: Stack[-1] = 0
0xd1d: Stack[-5] = Stack[-1]
0xd1e: Return(); Pop(4)

0xd1f: @@ GetMap(Stack[-1])
0xd20: Pop(0)
0xd21: Stack[-5] = Stack[-1]
0xd22: Return(); Pop(4)

0xd23: Stack[-1] = 0
0xd24: Stack[-2] = 0
0xd25: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0xd26: @ GetMainOutdoorScene(Stack[-2])
0xd27: Pop(0)
0xd28: Pop(0); Push((bool) Stack[-2] == 0)
0xd29: IF (Stack[-1] == 0) GOTO 0xd2e; Pop(1)

0xd2a: Push("Can't find main outdoor scene")
0xd2b: @ Trace(Stack[-1])
0xd2c: Pop(1)
0xd2d: Return(); Pop(8)

0xd2e: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0xd2f: Pop(0)
0xd30: Pop(0); Push((bool) Stack[-1] == 0)
0xd31: IF (Stack[-1] == 0) GOTO 0xd38; Pop(1)

0xd32: Push("Warning: outdoor scene locator ")
0xd33: Pop(1); Push(Stack[-1] + Stack[-11]);
0xd34: Push(" doesnt exist")
0xd35: Pop(2); Push(Stack[-2] + Stack[-1]);
0xd36: @ Trace(Stack[-1])
0xd37: Pop(1)
0xd38: @@ GetMap(Stack[-11])
0xd39: Pop(0)
0xd3a: Pop(0); Push((bool) Stack[-11] == 0)
0xd3b: IF (Stack[-1] == 0) GOTO 0xd40; Pop(1)

0xd3c: Push("Can't find map")
0xd3d: @ Trace(Stack[-1])
0xd3e: Pop(1)
0xd3f: Return(); Pop(8)

0xd40: Push(CvectorIndex(Stack[-4], 0))
0xd41: Push(CvectorIndex(Stack[-5], 2))
0xd42: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0xd43: Pop(2)
0xd44: Return(); Pop(8)

0xd45: Stack[-2] = 0
0xd46: PushEmpty(int, int)
0xd47: Push((int) 0)
0xd48: @ ClearSubContainer(Stack[-1])
0xd49: Pop(1)
0xd4a: PushEmpty(int)
0xd4b: Call2 0xb69

0xd4c: Stack[-2] = Stack[-1]
0xd4d: Pop(1)
0xd4e: PushEmpty(string, int, int, int)
0xd4f: Stack[-4] = "samopal_ammo"
0xd50: Stack[-3] = (int) 1
0xd51: Stack[-2] = (int) 1
0xd52: Stack[-1] = (int) 6
0xd53: Call2 0xb10

0xd54: Pop(4)
0xd55: PushEmpty(string, int, int, int)
0xd56: Stack[-4] = "rifle_ammo"
0xd57: Stack[-3] = (int) 1
0xd58: Stack[-2] = (int) 1
0xd59: Stack[-1] = (int) 8
0xd5a: Call2 0xb10

0xd5b: Pop(4)
0xd5c: PushEmpty(string, int, int, int)
0xd5d: Stack[-4] = "revolver_ammo"
0xd5e: Stack[-3] = (int) 1
0xd5f: Stack[-2] = (int) 1
0xd60: Stack[-1] = (int) 8
0xd61: Call2 0xb10

0xd62: Pop(4)
0xd63: PushEmpty(string, int, int, int)
0xd64: Stack[-4] = "tvirin"
0xd65: Stack[-3] = (int) 1
0xd66: Stack[-2] = (int) 1
0xd67: Stack[-1] = (int) 3
0xd68: Call2 0xb10

0xd69: Pop(4)
0xd6a: Push((int) 5)
0xd6b: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xd6c: IF (Stack[-1] == 0) GOTO 0xd73; Pop(1)

0xd6d: PushEmpty(string, int, int)
0xd6e: Stack[-3] = "Samopal"
0xd6f: Stack[-2] = (int) 1
0xd70: Stack[-1] = (int) 1
0xd71: Call2 0xb05

0xd72: Pop(3)
0xd73: Return(); Pop(2)

0xd74: PushEmpty(int, int)
0xd75: Push("branch")
0xd76: @ GetVariable(Stack[-1], Stack[-2])
0xd77: Pop(1)
0xd78: Push((int) 0)
0xd79: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd7a: IF (Stack[-1] == 0) GOTO 0xd7e; Pop(1)

0xd7b: Stack[-3] = (int) 1
0xd7c: Return(); Pop(2)

0xd7d: GOTO 0xd83

0xd7e: Push((int) 1)
0xd7f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd80: IF (Stack[-1] == 0) GOTO 0xd83; Pop(1)

0xd81: Stack[-3] = (int) 2
0xd82: Return(); Pop(2)

0xd83: Stack[-3] = (int) 3
0xd84: Return(); Pop(2)

0xd85: PushEmpty(int, int, int, int, int, int)
0xd86: Push("tr_andrei")
0xd87: @ GetVariable(Stack[-1], Stack[-4])
0xd88: Pop(1)
0xd89: PushEmpty(int)
0xd8a: Call2 0xb69

0xd8b: Pop(0)
0xd8c: Pop(1); Push((bool) Stack[-4] != Stack[-1])
0xd8d: IF (Stack[-1] == 0) GOTO 0xd97; Pop(1)

0xd8e: PushEmpty()
0xd8f: Call2 0xd46

0xd90: Pop(0)
0xd91: Push("tr_andrei")
0xd92: PushEmpty(int)
0xd93: Call2 0xb69

0xd94: Pop(0)
0xd95: @ SetVariable(Stack[-2], Stack[-1])
0xd96: Pop(2)
0xd97: Push("mt_andrei")
0xd98: @ GetVariable(Stack[-1], Stack[-3])
0xd99: Pop(1)
0xd9a: Pop(0); Push((bool) Stack[-2] == 0)
0xd9b: IF (Stack[-1] == 0) GOTO 0xda6; Pop(1)

0xd9c: PushEmpty(int, object)
0xd9d: Stack[-1] = Stack[-9]
0xd9e: Push(-2, 1); TaskCall(5)
0xd9f: Call2 0x1fe

0xda0: Pop(-2, 1); TaskReturn
0xda1: Pop(2)
0xda2: Push("mt_andrei")
0xda3: Push((int) 1)
0xda4: @ SetVariable(Stack[-2], Stack[-1])
0xda5: Pop(2)
0xda6: PushEmpty(bool, int)
0xda7: Stack[-1] = (int) 2
0xda8: Call2 0xb72

0xda9: Pop(1)
0xdaa: IF (Stack[-1] == 0) GOTO 0xdc6; Pop(1)

0xdab: Push((int) 1000)
0xdac: PushEmpty(int, object)
0xdad: Stack[-1] = Stack[-10]
0xdae: Push(-2, 1); TaskCall(7)
0xdaf: Call2 0x320

0xdb0: Pop(-2, 1); TaskReturn
0xdb1: Pop(1)
0xdb2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xdb3: IF (Stack[-1] == 0) GOTO 0xdc5; Pop(1)

0xdb4: PushEmpty(bool, object)
0xdb5: Stack[-1] = Stack[-9]
0xdb6: Call2 0xa95

0xdb7: Pop(1)
0xdb8: Pop(1); Push((bool) Stack[-1] == 0)
0xdb9: IF (Stack[-1] == 0) GOTO 0xdbb; Pop(1)

0xdba: Return(); Pop(6)

0xdbb: PushEmpty(object)
0xdbc: Stack[-1] = Stack[-8]
0xdbd: Push(-1, 1); TaskCall(0)
0xdbe: Call2 0x0

0xdbf: Pop(-1, 1); TaskReturn
0xdc0: Pop(1)
0xdc1: PushEmpty(object)
0xdc2: Stack[-1] = Stack[-8]
0xdc3: Call2 0xacc

0xdc4: Pop(1)
0xdc5: Return(); Pop(6)

0xdc6: PushEmpty(bool, int)
0xdc7: Stack[-1] = (int) 5
0xdc8: Call2 0xb72

0xdc9: Pop(1)
0xdca: IF (Stack[-1] == 0) GOTO 0xde6; Pop(1)

0xdcb: Push((int) 1000)
0xdcc: PushEmpty(int, object)
0xdcd: Stack[-1] = Stack[-10]
0xdce: Push(-2, 1); TaskCall(9)
0xdcf: Call2 0x673

0xdd0: Pop(-2, 1); TaskReturn
0xdd1: Pop(1)
0xdd2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xdd3: IF (Stack[-1] == 0) GOTO 0xde5; Pop(1)

0xdd4: PushEmpty(bool, object)
0xdd5: Stack[-1] = Stack[-9]
0xdd6: Call2 0xa95

0xdd7: Pop(1)
0xdd8: Pop(1); Push((bool) Stack[-1] == 0)
0xdd9: IF (Stack[-1] == 0) GOTO 0xddb; Pop(1)

0xdda: Return(); Pop(6)

0xddb: PushEmpty(object)
0xddc: Stack[-1] = Stack[-8]
0xddd: Push(-1, 1); TaskCall(0)
0xdde: Call2 0x0

0xddf: Pop(-1, 1); TaskReturn
0xde0: Pop(1)
0xde1: PushEmpty(object)
0xde2: Stack[-1] = Stack[-8]
0xde3: Call2 0xacc

0xde4: Pop(1)
0xde5: Return(); Pop(6)

0xde6: PushEmpty(bool)
0xde7: Stack[-1] = (bool) 1
0xde8: PushEmpty(bool)
0xde9: Stack[-1] = (bool) 1
0xdea: PushEmpty(bool)
0xdeb: Stack[-1] = (bool) 1
0xdec: PushEmpty(bool)
0xded: Stack[-1] = (bool) 1
0xdee: PushEmpty(bool)
0xdef: Stack[-1] = (bool) 1
0xdf0: PushEmpty(bool)
0xdf1: Stack[-1] = (bool) 1
0xdf2: PushEmpty(bool)
0xdf3: Stack[-1] = (bool) 1
0xdf4: PushEmpty(bool, int)
0xdf5: Stack[-1] = (int) 3
0xdf6: Call2 0xb72

0xdf7: Pop(1)
0xdf8: IF (Stack[-1] == 0) GOTO 0xdff; Pop(1)

0xdf9: PushEmpty(bool, int)
0xdfa: Stack[-1] = (int) 4
0xdfb: Call2 0xb72

0xdfc: Pop(1)
0xdfd: IF (Stack[-1] == 0) GOTO 0xdff; Pop(1)

0xdfe: Stack[-1] = (bool) 0
0xdff: IF (Stack[-1] == 0) GOTO 0xe06; Pop(1)

0xe00: PushEmpty(bool, int)
0xe01: Stack[-1] = (int) 6
0xe02: Call2 0xb72

0xe03: Pop(1)
0xe04: IF (Stack[-1] == 0) GOTO 0xe06; Pop(1)

0xe05: Stack[-1] = (bool) 0
0xe06: IF (Stack[-1] == 0) GOTO 0xe0d; Pop(1)

0xe07: PushEmpty(bool, int)
0xe08: Stack[-1] = (int) 7
0xe09: Call2 0xb72

0xe0a: Pop(1)
0xe0b: IF (Stack[-1] == 0) GOTO 0xe0d; Pop(1)

0xe0c: Stack[-1] = (bool) 0
0xe0d: IF (Stack[-1] == 0) GOTO 0xe14; Pop(1)

0xe0e: PushEmpty(bool, int)
0xe0f: Stack[-1] = (int) 8
0xe10: Call2 0xb72

0xe11: Pop(1)
0xe12: IF (Stack[-1] == 0) GOTO 0xe14; Pop(1)

0xe13: Stack[-1] = (bool) 0
0xe14: IF (Stack[-1] == 0) GOTO 0xe1b; Pop(1)

0xe15: PushEmpty(bool, int)
0xe16: Stack[-1] = (int) 9
0xe17: Call2 0xb72

0xe18: Pop(1)
0xe19: IF (Stack[-1] == 0) GOTO 0xe1b; Pop(1)

0xe1a: Stack[-1] = (bool) 0
0xe1b: IF (Stack[-1] == 0) GOTO 0xe22; Pop(1)

0xe1c: PushEmpty(bool, int)
0xe1d: Stack[-1] = (int) 10
0xe1e: Call2 0xb72

0xe1f: Pop(1)
0xe20: IF (Stack[-1] == 0) GOTO 0xe22; Pop(1)

0xe21: Stack[-1] = (bool) 0
0xe22: IF (Stack[-1] == 0) GOTO 0xe29; Pop(1)

0xe23: PushEmpty(bool, int)
0xe24: Stack[-1] = (int) 11
0xe25: Call2 0xb72

0xe26: Pop(1)
0xe27: IF (Stack[-1] == 0) GOTO 0xe29; Pop(1)

0xe28: Stack[-1] = (bool) 0
0xe29: IF (Stack[-1] == 0) GOTO 0xe45; Pop(1)

0xe2a: Push((int) 1000)
0xe2b: PushEmpty(int, object)
0xe2c: Stack[-1] = Stack[-10]
0xe2d: Push(-2, 1); TaskCall(1)
0xe2e: Call2 0x28

0xe2f: Pop(-2, 1); TaskReturn
0xe30: Pop(1)
0xe31: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe32: IF (Stack[-1] == 0) GOTO 0xe44; Pop(1)

0xe33: PushEmpty(bool, object)
0xe34: Stack[-1] = Stack[-9]
0xe35: Call2 0xa95

0xe36: Pop(1)
0xe37: Pop(1); Push((bool) Stack[-1] == 0)
0xe38: IF (Stack[-1] == 0) GOTO 0xe3a; Pop(1)

0xe39: Return(); Pop(6)

0xe3a: PushEmpty(object)
0xe3b: Stack[-1] = Stack[-8]
0xe3c: Push(-1, 1); TaskCall(0)
0xe3d: Call2 0x0

0xe3e: Pop(-1, 1); TaskReturn
0xe3f: Pop(1)
0xe40: PushEmpty(object)
0xe41: Stack[-1] = Stack[-8]
0xe42: Call2 0xacc

0xe43: Pop(1)
0xe44: Return(); Pop(6)

0xe45: Push("d12_andrei")
0xe46: @ GetVariable(Stack[-1], Stack[-2])
0xe47: Pop(1)
0xe48: PushEmpty(bool)
0xe49: Stack[-1] = (bool) 0
0xe4a: PushEmpty(bool, int)
0xe4b: Stack[-1] = (int) 12
0xe4c: Call2 0xb72

0xe4d: Pop(1)
0xe4e: IF (Stack[-1] == 0) GOTO 0xe52; Pop(1)

0xe4f: Pop(0); Push((bool) Stack[-2] == 0)
0xe50: IF (Stack[-1] == 0) GOTO 0xe52; Pop(1)

0xe51: Stack[-1] = (bool) 1
0xe52: IF (Stack[-1] == 0) GOTO 0xe5e; Pop(1)

0xe53: PushEmpty(int, object)
0xe54: Stack[-1] = Stack[-9]
0xe55: Push(-2, 1); TaskCall(3)
0xe56: Call2 0xfb

0xe57: Pop(-2, 1); TaskReturn
0xe58: Pop(2)
0xe59: Push("d12_andrei")
0xe5a: Push((int) 1)
0xe5b: @ SetVariable(Stack[-2], Stack[-1])
0xe5c: Pop(2)
0xe5d: Return(); Pop(6)

0xe5e: PushEmpty(int, object)
0xe5f: Stack[-1] = Stack[-9]
0xe60: Push(-2, 1); TaskCall(11)
0xe61: Call2 0x7c4

0xe62: Pop(-2, 1); TaskReturn
0xe63: Pop(2)
0xe64: Return(); Pop(6)

