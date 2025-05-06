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
	Fear
	Dream
	Suspicion
	Autizm
	player
	GetPosition
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	GetProperty
	Can't find lsh animation : 
	add
	GetItemID
	Category
	AddItem
	DropItems
	SetItemName
	HasItem
	ui/NPC_Mishka.png
	ui/NPC_Mishka_b.png
	avroks blood is given
	avroks_blood
	oob8Mishka1
	oob1Mishka1
	b10q04MishkaTalk
	playsound
	giveitem
	b10q03
	b10q03MishkaGotoDoll
	pt_b10q03_plant1
	AddMark
	quest_b10_03
	place_doll
	ShowMap
	place_blood
	completed
	fail
	b10q03_toy_burah
	RemoveItemByType
	oob12Mishka1
	b8q01
	b1q05
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

RunOp = 0x8df
RunTask = 12

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa1 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1b7 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x349 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x4de Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x793 Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x8b5 Vars = (int, int)
	GTASK_12 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x92b Vars = (int)
		EVENT_6 Op = 0x951 Vars = ()
		EVENT_5 Op = 0x960 Vars = ()
		EVENT_45 Op = 0x96d Vars = (bool)
		EVENT_0 Op = 0x979 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0xa02

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0xb9a

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0xb98

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0xb9c

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0xb9e

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0xd35

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
0x31: Call2 0xb18

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0xa59

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
0x48: Call2 0xa47

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
0x5b: Push((int) 518033)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: Push((int) 518034)
0x61: Push((int) 28430)
0x62: Push((int) 19167)
0x63: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64: Pop(3)
0x65: Push((int) 527134)
0x66: Push((int) 28433)
0x67: Push((int) 28432)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: GOTO 0x6d

0x6b: Return(); Pop(0)

0x6c: GOTO 0x55

0x6d: PushEmpty(bool)
0x6e: Call2 0xba0

0x6f: Pop(0)
0x70: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x71: @ lshWaitForAnimEnd()
0x72: Pop(0)
0x73: Push( Stack[3 + Tasks[-1].StackPointer] )
0x74: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x75: GOTO 0x7b

0x76: PushEmpty(string)
0x77: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x78: Call2 0xae3

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
0x8d: Call2 0xba0

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
0x9d: Call2 0xaf3

0x9e: Pop(2)
0x9f: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa0: Return(); Pop(0)

0xa1: PushEmpty()
0xa2: Push((int) 1)
0xa3: IF (Stack[-1] == 0) GOTO 0xee; Pop(1)

0xa4: PushEmpty()
0xa5: Call2 0xb11

0xa6: Pop(0)
0xa7: Push((int) 19166)
0xa8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa9: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xaa: PushEmpty(string)
0xab: Stack[-1] = "Neutral"
0xac: Call2 0x8b

0xad: Pop(1)
0xae: Push((int) 518033)
0xaf: @@ SetMessage(Stack[-1])
0xb0: Pop(1)
0xb1: @@ ClearReplies()
0xb2: Pop(0)
0xb3: Push((int) 518034)
0xb4: Push((int) 28430)
0xb5: Push((int) 19167)
0xb6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb7: Pop(3)
0xb8: Push((int) 527134)
0xb9: Push((int) 28433)
0xba: Push((int) 28432)
0xbb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc: Pop(3)
0xbd: Return(); Pop(0)

0xbe: Push((int) 28433)
0xbf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc0: IF (Stack[-1] == 0) GOTO 0xd0; Pop(1)

0xc1: PushEmpty(string)
0xc2: Stack[-1] = "Neutral"
0xc3: Call2 0x8b

0xc4: Pop(1)
0xc5: Push((int) 527135)
0xc6: @@ SetMessage(Stack[-1])
0xc7: Pop(1)
0xc8: @@ ClearReplies()
0xc9: Pop(0)
0xca: Push((int) 527137)
0xcb: Push((int) -1)
0xcc: Push((int) 28435)
0xcd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xce: Pop(3)
0xcf: Return(); Pop(0)

0xd0: Push((int) 28430)
0xd1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd2: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xd3: PushEmpty(string)
0xd4: Stack[-1] = "Neutral"
0xd5: Call2 0x8b

0xd6: Pop(1)
0xd7: Push((int) 527132)
0xd8: @@ SetMessage(Stack[-1])
0xd9: Pop(1)
0xda: @@ ClearReplies()
0xdb: Pop(0)
0xdc: Push((int) 527133)
0xdd: Push((int) -1)
0xde: Push((int) 28431)
0xdf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe0: Pop(3)
0xe1: Return(); Pop(0)

0xe2: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xe3: PushEmpty(bool)
0xe4: Call2 0xba0

0xe5: Pop(0)
0xe6: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xe7: @ lshStopAnimation()
0xe8: Pop(0)
0xe9: GOTO 0xec

0xea: @ StopAnimation()
0xeb: Pop(0)
0xec: Return(); Pop(0)

0xed: GOTO 0xa2

0xee: Return(); Pop(0)

0xef: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xf0: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xf1: PushEmpty(bool, object, float)
0xf2: Stack[-2] = Stack[-12]
0xf3: Stack[-1] = (float) 70.0
0xf4: Call2 0xa02

0xf5: Pop(2)
0xf6: Pop(1); Push((bool) Stack[-1] == 0)
0xf7: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xf8: Stack[-10] = (int) -2
0xf9: Return(); Pop(8)

0xfa: @ CreateDialog(Stack[-4])
0xfb: Pop(0)
0xfc: PushEmpty(int)
0xfd: Call2 0xb9a

0xfe: Pop(0)
0xff: @@ SetNPCName(Stack[-1])
0x100: Pop(1)
0x101: PushEmpty(int)
0x102: Call2 0xb98

0x103: Pop(0)
0x104: @@ SetNPCDescription(Stack[-1])
0x105: Pop(1)
0x106: PushEmpty(string)
0x107: Call2 0xb9c

0x108: Pop(0)
0x109: @@ SetPhoto(Stack[-1])
0x10a: Pop(1)
0x10b: PushEmpty(string)
0x10c: Call2 0xb9e

0x10d: Pop(0)
0x10e: @@ SetPhoto2(Stack[-1])
0x10f: Pop(1)
0x110: PushEmpty(int)
0x111: Call2 0xd35

0x112: Pop(0)
0x113: @@ SetPlayerName(Stack[-1])
0x114: Pop(1)
0x115: Stack[-2] = (int) -1
0x116: @ IsOverrideActive(Stack[-3])
0x117: Pop(0)
0x118: Push(Stack[-3])
0x119: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0x11a: Stack[-10] = (int) -2
0x11b: Return(); Pop(8)

0x11c: @ DoDialog(Stack[-4])
0x11d: Pop(0)
0x11e: PushEmpty(bool, object)
0x11f: PushEmpty(object)
0x120: Call2 0xb18

0x121: Stack[-2] = Stack[-1]
0x122: Pop(1)
0x123: Call2 0xa59

0x124: Pop(2)
0x125: PushEmpty(object, object)
0x126: Stack[-2] = Stack[-11]
0x127: Stack[-1] = Stack[-6]
0x128: Push(-2, 4); TaskCall(3)
0x129: Call2 0x140

0x12a: Pop(-2, 4); TaskReturn
0x12b: Pop(2)
0x12c: @@ IsDialogEnd(Stack[-1])
0x12d: Pop(0)
0x12e: Pop(0); Push((bool) Stack[-1] == 0)
0x12f: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0x130: @ sync()
0x131: Pop(0)
0x132: @@ IsDialogEnd(Stack[-1])
0x133: Pop(0)
0x134: GOTO 0x12e

0x135: PushEmpty(object)
0x136: Stack[-1] = Stack[-10]
0x137: Call2 0xa47

0x138: Pop(1)
0x139: @ StopDialog(Stack[-4])
0x13a: Pop(0)
0x13b: @@ GetReturnValue(Stack[-2])
0x13c: Pop(0)
0x13d: Stack[-10] = Stack[-2]
0x13e: Return(); Pop(8)

0x13f: Stack[-4] = 0
0x140: PushEmpty()
0x141: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x142: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x143: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x144: Push((int) 1)
0x145: IF (Stack[-1] == 0) GOTO 0x183; Pop(1)

0x146: PushEmpty(bool)
0x147: Stack[-1] = (bool) 0
0x148: PushEmpty(bool, object)
0x149: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x14a: Call2 0xc22

0x14b: Pop(1)
0x14c: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x14d: PushEmpty(bool, object)
0x14e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x14f: Call2 0xc2e

0x150: Pop(1)
0x151: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x152: Stack[-1] = (bool) 1
0x153: IF (Stack[-1] == 0) GOTO 0x16d; Pop(1)

0x154: PushEmpty(object, object)
0x155: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x156: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x157: Call2 0xbad

0x158: Pop(2)
0x159: PushEmpty(string)
0x15a: Stack[-1] = "Fear"
0x15b: Call2 0x1a1

0x15c: Pop(1)
0x15d: Push((int) 521408)
0x15e: @@ SetMessage(Stack[-1])
0x15f: Pop(1)
0x160: @@ ClearReplies()
0x161: Pop(0)
0x162: Push((int) 521409)
0x163: Push((int) 25093)
0x164: Push((int) 22587)
0x165: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x166: Pop(3)
0x167: Push((int) 523832)
0x168: Push((int) -1)
0x169: Push((int) 25104)
0x16a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16b: Pop(3)
0x16c: GOTO 0x183

0x16d: PushEmpty(string)
0x16e: Stack[-1] = "Fear"
0x16f: Call2 0x1a1

0x170: Pop(1)
0x171: Push((int) 521410)
0x172: @@ SetMessage(Stack[-1])
0x173: Pop(1)
0x174: @@ ClearReplies()
0x175: Pop(0)
0x176: Push((int) 521411)
0x177: Push((int) 25088)
0x178: Push((int) 22589)
0x179: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17a: Pop(3)
0x17b: Push((int) 523816)
0x17c: Push((int) -1)
0x17d: Push((int) 25087)
0x17e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17f: Pop(3)
0x180: GOTO 0x183

0x181: Return(); Pop(0)

0x182: GOTO 0x144

0x183: PushEmpty(bool)
0x184: Call2 0xba0

0x185: Pop(0)
0x186: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x187: @ lshWaitForAnimEnd()
0x188: Pop(0)
0x189: Push( Stack[3 + Tasks[-1].StackPointer] )
0x18a: IF (Stack[-1] == 0) GOTO 0x18c; Pop(1)

0x18b: GOTO 0x191

0x18c: PushEmpty(string)
0x18d: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x18e: Call2 0xae3

0x18f: Pop(1)
0x190: GOTO 0x187

0x191: GOTO 0x1a0

0x192: Push("all")
0x193: Push("idle")
0x194: @ PlayAnimation(Stack[-2], Stack[-1])
0x195: Pop(2)
0x196: @ WaitForAnimEnd()
0x197: Pop(0)
0x198: Push( Stack[3 + Tasks[-1].StackPointer] )
0x199: IF (Stack[-1] == 0) GOTO 0x19b; Pop(1)

0x19a: GOTO 0x1a0

0x19b: Push("all")
0x19c: Push("idle")
0x19d: @ PlayAnimation(Stack[-2], Stack[-1])
0x19e: Pop(2)
0x19f: GOTO 0x196

0x1a0: Return(); Pop(0)

0x1a1: PushEmpty()
0x1a2: PushEmpty(bool)
0x1a3: Call2 0xba0

0x1a4: Pop(0)
0x1a5: Pop(1); Push((bool) Stack[-1] == 0)
0x1a6: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x1a7: Return(); Pop(0)

0x1a8: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1a9: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x1aa: Return(); Pop(0)

0x1ab: PushEmpty(string, bool)
0x1ac: Stack[-2] = Stack[-3]
0x1ad: Push("")
0x1ae: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1af: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0x1b0: Stack[-1] = (bool) 0
0x1b1: GOTO 0x1b3

0x1b2: Stack[-1] = (bool) 1
0x1b3: Call2 0xaf3

0x1b4: Pop(2)
0x1b5: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1b6: Return(); Pop(0)

0x1b7: PushEmpty()
0x1b8: Push((int) 1)
0x1b9: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x1ba: PushEmpty()
0x1bb: Call2 0xb11

0x1bc: Pop(0)
0x1bd: Push((int) 22586)
0x1be: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1bf: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1c0: PushEmpty(bool)
0x1c1: Stack[-1] = (bool) 0
0x1c2: PushEmpty(bool, object)
0x1c3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c4: Call2 0xc22

0x1c5: Pop(1)
0x1c6: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1c7: PushEmpty(bool, object)
0x1c8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c9: Call2 0xc2e

0x1ca: Pop(1)
0x1cb: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1cc: Stack[-1] = (bool) 1
0x1cd: IF (Stack[-1] == 0) GOTO 0x1e7; Pop(1)

0x1ce: PushEmpty(object, object)
0x1cf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1d0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1d1: Call2 0xbad

0x1d2: Pop(2)
0x1d3: PushEmpty(string)
0x1d4: Stack[-1] = "Fear"
0x1d5: Call2 0x1a1

0x1d6: Pop(1)
0x1d7: Push((int) 521408)
0x1d8: @@ SetMessage(Stack[-1])
0x1d9: Pop(1)
0x1da: @@ ClearReplies()
0x1db: Pop(0)
0x1dc: Push((int) 521409)
0x1dd: Push((int) 25093)
0x1de: Push((int) 22587)
0x1df: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e0: Pop(3)
0x1e1: Push((int) 523832)
0x1e2: Push((int) -1)
0x1e3: Push((int) 25104)
0x1e4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e5: Pop(3)
0x1e6: Return(); Pop(0)

0x1e7: PushEmpty(string)
0x1e8: Stack[-1] = "Fear"
0x1e9: Call2 0x1a1

0x1ea: Pop(1)
0x1eb: Push((int) 521410)
0x1ec: @@ SetMessage(Stack[-1])
0x1ed: Pop(1)
0x1ee: @@ ClearReplies()
0x1ef: Pop(0)
0x1f0: Push((int) 521411)
0x1f1: Push((int) 25088)
0x1f2: Push((int) 22589)
0x1f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f4: Pop(3)
0x1f5: Push((int) 523816)
0x1f6: Push((int) -1)
0x1f7: Push((int) 25087)
0x1f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f9: Pop(3)
0x1fa: Return(); Pop(0)

0x1fb: Push((int) 25088)
0x1fc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1fd: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0x1fe: PushEmpty(string)
0x1ff: Stack[-1] = "Dream"
0x200: Call2 0x1a1

0x201: Pop(1)
0x202: Push((int) 523817)
0x203: @@ SetMessage(Stack[-1])
0x204: Pop(1)
0x205: @@ ClearReplies()
0x206: Pop(0)
0x207: Push((int) 523818)
0x208: Push((int) 25090)
0x209: Push((int) 25089)
0x20a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20b: Pop(3)
0x20c: Return(); Pop(0)

0x20d: Push((int) 25090)
0x20e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x20f: IF (Stack[-1] == 0) GOTO 0x224; Pop(1)

0x210: PushEmpty(string)
0x211: Stack[-1] = "Dream"
0x212: Call2 0x1a1

0x213: Pop(1)
0x214: Push((int) 523819)
0x215: @@ SetMessage(Stack[-1])
0x216: Pop(1)
0x217: @@ ClearReplies()
0x218: Pop(0)
0x219: Push((int) 523820)
0x21a: Push((int) -1)
0x21b: Push((int) 25091)
0x21c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21d: Pop(3)
0x21e: Push((int) 523821)
0x21f: Push((int) -1)
0x220: Push((int) 25092)
0x221: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x222: Pop(3)
0x223: Return(); Pop(0)

0x224: Push((int) 25093)
0x225: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x226: IF (Stack[-1] == 0) GOTO 0x23b; Pop(1)

0x227: PushEmpty(string)
0x228: Stack[-1] = "Fear"
0x229: Call2 0x1a1

0x22a: Pop(1)
0x22b: Push((int) 523822)
0x22c: @@ SetMessage(Stack[-1])
0x22d: Pop(1)
0x22e: @@ ClearReplies()
0x22f: Pop(0)
0x230: Push((int) 523823)
0x231: Push((int) 25095)
0x232: Push((int) 25094)
0x233: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x234: Pop(3)
0x235: Push((int) 523833)
0x236: Push((int) 25106)
0x237: Push((int) 25105)
0x238: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x239: Pop(3)
0x23a: Return(); Pop(0)

0x23b: Push((int) 25106)
0x23c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x23d: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x23e: PushEmpty(string)
0x23f: Stack[-1] = "Suspicion"
0x240: Call2 0x1a1

0x241: Pop(1)
0x242: Push((int) 523834)
0x243: @@ SetMessage(Stack[-1])
0x244: Pop(1)
0x245: @@ ClearReplies()
0x246: Pop(0)
0x247: Push((int) 523835)
0x248: Push((int) 25097)
0x249: Push((int) 25107)
0x24a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24b: Pop(3)
0x24c: Return(); Pop(0)

0x24d: Push((int) 25095)
0x24e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x24f: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x250: PushEmpty(string)
0x251: Stack[-1] = "Suspicion"
0x252: Call2 0x1a1

0x253: Pop(1)
0x254: Push((int) 523824)
0x255: @@ SetMessage(Stack[-1])
0x256: Pop(1)
0x257: @@ ClearReplies()
0x258: Pop(0)
0x259: Push((int) 523825)
0x25a: Push((int) 25097)
0x25b: Push((int) 25096)
0x25c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x25d: Pop(3)
0x25e: Push((int) 523827)
0x25f: Push((int) 25097)
0x260: Push((int) 25098)
0x261: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x262: Pop(3)
0x263: Return(); Pop(0)

0x264: Push((int) 25097)
0x265: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x266: IF (Stack[-1] == 0) GOTO 0x27b; Pop(1)

0x267: PushEmpty(string)
0x268: Stack[-1] = "Suspicion"
0x269: Call2 0x1a1

0x26a: Pop(1)
0x26b: Push((int) 523826)
0x26c: @@ SetMessage(Stack[-1])
0x26d: Pop(1)
0x26e: @@ ClearReplies()
0x26f: Pop(0)
0x270: Push((int) 523828)
0x271: Push((int) 25101)
0x272: Push((int) 25100)
0x273: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x274: Pop(3)
0x275: Push((int) 523836)
0x276: Push((int) -1)
0x277: Push((int) 25109)
0x278: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x279: Pop(3)
0x27a: Return(); Pop(0)

0x27b: Push((int) 25101)
0x27c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x27d: IF (Stack[-1] == 0) GOTO 0x28d; Pop(1)

0x27e: PushEmpty(string)
0x27f: Stack[-1] = "Fear"
0x280: Call2 0x1a1

0x281: Pop(1)
0x282: Push((int) 523829)
0x283: @@ SetMessage(Stack[-1])
0x284: Pop(1)
0x285: @@ ClearReplies()
0x286: Pop(0)
0x287: Push((int) 523830)
0x288: Push((int) -1)
0x289: Push((int) 25102)
0x28a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x28b: Pop(3)
0x28c: Return(); Pop(0)

0x28d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x28e: PushEmpty(bool)
0x28f: Call2 0xba0

0x290: Pop(0)
0x291: IF (Stack[-1] == 0) GOTO 0x295; Pop(1)

0x292: @ lshStopAnimation()
0x293: Pop(0)
0x294: GOTO 0x297

0x295: @ StopAnimation()
0x296: Pop(0)
0x297: Return(); Pop(0)

0x298: GOTO 0x1b8

0x299: Return(); Pop(0)

0x29a: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x29b: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x29c: PushEmpty(bool, object, float)
0x29d: Stack[-2] = Stack[-12]
0x29e: Stack[-1] = (float) 70.0
0x29f: Call2 0xa02

0x2a0: Pop(2)
0x2a1: Pop(1); Push((bool) Stack[-1] == 0)
0x2a2: IF (Stack[-1] == 0) GOTO 0x2a5; Pop(1)

0x2a3: Stack[-10] = (int) -2
0x2a4: Return(); Pop(8)

0x2a5: @ CreateDialog(Stack[-4])
0x2a6: Pop(0)
0x2a7: PushEmpty(int)
0x2a8: Call2 0xb9a

0x2a9: Pop(0)
0x2aa: @@ SetNPCName(Stack[-1])
0x2ab: Pop(1)
0x2ac: PushEmpty(int)
0x2ad: Call2 0xb98

0x2ae: Pop(0)
0x2af: @@ SetNPCDescription(Stack[-1])
0x2b0: Pop(1)
0x2b1: PushEmpty(string)
0x2b2: Call2 0xb9c

0x2b3: Pop(0)
0x2b4: @@ SetPhoto(Stack[-1])
0x2b5: Pop(1)
0x2b6: PushEmpty(string)
0x2b7: Call2 0xb9e

0x2b8: Pop(0)
0x2b9: @@ SetPhoto2(Stack[-1])
0x2ba: Pop(1)
0x2bb: PushEmpty(int)
0x2bc: Call2 0xd35

0x2bd: Pop(0)
0x2be: @@ SetPlayerName(Stack[-1])
0x2bf: Pop(1)
0x2c0: Stack[-2] = (int) -1
0x2c1: @ IsOverrideActive(Stack[-3])
0x2c2: Pop(0)
0x2c3: Push(Stack[-3])
0x2c4: IF (Stack[-1] == 0) GOTO 0x2c7; Pop(1)

0x2c5: Stack[-10] = (int) -2
0x2c6: Return(); Pop(8)

0x2c7: @ DoDialog(Stack[-4])
0x2c8: Pop(0)
0x2c9: PushEmpty(bool, object)
0x2ca: PushEmpty(object)
0x2cb: Call2 0xb18

0x2cc: Stack[-2] = Stack[-1]
0x2cd: Pop(1)
0x2ce: Call2 0xa59

0x2cf: Pop(2)
0x2d0: PushEmpty(object, object)
0x2d1: Stack[-2] = Stack[-11]
0x2d2: Stack[-1] = Stack[-6]
0x2d3: Push(-2, 4); TaskCall(5)
0x2d4: Call2 0x2eb

0x2d5: Pop(-2, 4); TaskReturn
0x2d6: Pop(2)
0x2d7: @@ IsDialogEnd(Stack[-1])
0x2d8: Pop(0)
0x2d9: Pop(0); Push((bool) Stack[-1] == 0)
0x2da: IF (Stack[-1] == 0) GOTO 0x2e0; Pop(1)

0x2db: @ sync()
0x2dc: Pop(0)
0x2dd: @@ IsDialogEnd(Stack[-1])
0x2de: Pop(0)
0x2df: GOTO 0x2d9

0x2e0: PushEmpty(object)
0x2e1: Stack[-1] = Stack[-10]
0x2e2: Call2 0xa47

0x2e3: Pop(1)
0x2e4: @ StopDialog(Stack[-4])
0x2e5: Pop(0)
0x2e6: @@ GetReturnValue(Stack[-2])
0x2e7: Pop(0)
0x2e8: Stack[-10] = Stack[-2]
0x2e9: Return(); Pop(8)

0x2ea: Stack[-4] = 0
0x2eb: PushEmpty()
0x2ec: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x2ed: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x2ee: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x2ef: Push((int) 1)
0x2f0: IF (Stack[-1] == 0) GOTO 0x315; Pop(1)

0x2f1: PushEmpty(string)
0x2f2: Stack[-1] = "Autizm"
0x2f3: Call2 0x333

0x2f4: Pop(1)
0x2f5: Push((int) 527115)
0x2f6: @@ SetMessage(Stack[-1])
0x2f7: Pop(1)
0x2f8: @@ ClearReplies()
0x2f9: Pop(0)
0x2fa: PushEmpty(bool)
0x2fb: Stack[-1] = (bool) 0
0x2fc: PushEmpty(bool, object)
0x2fd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2fe: Call2 0xc3a

0x2ff: Pop(1)
0x300: IF (Stack[-1] == 0) GOTO 0x307; Pop(1)

0x301: PushEmpty(bool, object)
0x302: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x303: Call2 0xc81

0x304: Pop(1)
0x305: IF (Stack[-1] == 0) GOTO 0x307; Pop(1)

0x306: Stack[-1] = (bool) 1
0x307: IF (Stack[-1] == 0) GOTO 0x30d; Pop(1)

0x308: Push((int) 527116)
0x309: Push((int) 28416)
0x30a: Push((int) 28414)
0x30b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x30c: Pop(3)
0x30d: Push((int) 527117)
0x30e: Push((int) -1)
0x30f: Push((int) 28415)
0x310: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x311: Pop(3)
0x312: GOTO 0x315

0x313: Return(); Pop(0)

0x314: GOTO 0x2ef

0x315: PushEmpty(bool)
0x316: Call2 0xba0

0x317: Pop(0)
0x318: IF (Stack[-1] == 0) GOTO 0x324; Pop(1)

0x319: @ lshWaitForAnimEnd()
0x31a: Pop(0)
0x31b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x31c: IF (Stack[-1] == 0) GOTO 0x31e; Pop(1)

0x31d: GOTO 0x323

0x31e: PushEmpty(string)
0x31f: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x320: Call2 0xae3

0x321: Pop(1)
0x322: GOTO 0x319

0x323: GOTO 0x332

0x324: Push("all")
0x325: Push("idle")
0x326: @ PlayAnimation(Stack[-2], Stack[-1])
0x327: Pop(2)
0x328: @ WaitForAnimEnd()
0x329: Pop(0)
0x32a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x32b: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x32c: GOTO 0x332

0x32d: Push("all")
0x32e: Push("idle")
0x32f: @ PlayAnimation(Stack[-2], Stack[-1])
0x330: Pop(2)
0x331: GOTO 0x328

0x332: Return(); Pop(0)

0x333: PushEmpty()
0x334: PushEmpty(bool)
0x335: Call2 0xba0

0x336: Pop(0)
0x337: Pop(1); Push((bool) Stack[-1] == 0)
0x338: IF (Stack[-1] == 0) GOTO 0x33a; Pop(1)

0x339: Return(); Pop(0)

0x33a: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x33b: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x33c: Return(); Pop(0)

0x33d: PushEmpty(string, bool)
0x33e: Stack[-2] = Stack[-3]
0x33f: Push("")
0x340: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x341: IF (Stack[-1] == 0) GOTO 0x344; Pop(1)

0x342: Stack[-1] = (bool) 0
0x343: GOTO 0x345

0x344: Stack[-1] = (bool) 1
0x345: Call2 0xaf3

0x346: Pop(2)
0x347: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x348: Return(); Pop(0)

0x349: PushEmpty()
0x34a: Push((int) 1)
0x34b: IF (Stack[-1] == 0) GOTO 0x406; Pop(1)

0x34c: PushEmpty()
0x34d: Call2 0xb11

0x34e: Pop(0)
0x34f: Push((int) 28414)
0x350: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x351: IF (Stack[-1] == 0) GOTO 0x357; Pop(1)

0x352: PushEmpty(object, object)
0x353: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x354: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x355: Call2 0xbb3

0x356: Pop(2)
0x357: Push((int) 28413)
0x358: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x359: IF (Stack[-1] == 0) GOTO 0x37c; Pop(1)

0x35a: PushEmpty(string)
0x35b: Stack[-1] = "Autizm"
0x35c: Call2 0x333

0x35d: Pop(1)
0x35e: Push((int) 527115)
0x35f: @@ SetMessage(Stack[-1])
0x360: Pop(1)
0x361: @@ ClearReplies()
0x362: Pop(0)
0x363: PushEmpty(bool)
0x364: Stack[-1] = (bool) 0
0x365: PushEmpty(bool, object)
0x366: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x367: Call2 0xc3a

0x368: Pop(1)
0x369: IF (Stack[-1] == 0) GOTO 0x370; Pop(1)

0x36a: PushEmpty(bool, object)
0x36b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x36c: Call2 0xc81

0x36d: Pop(1)
0x36e: IF (Stack[-1] == 0) GOTO 0x370; Pop(1)

0x36f: Stack[-1] = (bool) 1
0x370: IF (Stack[-1] == 0) GOTO 0x376; Pop(1)

0x371: Push((int) 527116)
0x372: Push((int) 28416)
0x373: Push((int) 28414)
0x374: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x375: Pop(3)
0x376: Push((int) 527117)
0x377: Push((int) -1)
0x378: Push((int) 28415)
0x379: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x37a: Pop(3)
0x37b: Return(); Pop(0)

0x37c: Push((int) 28416)
0x37d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x37e: IF (Stack[-1] == 0) GOTO 0x38e; Pop(1)

0x37f: PushEmpty(string)
0x380: Stack[-1] = "Autizm"
0x381: Call2 0x333

0x382: Pop(1)
0x383: Push((int) 527118)
0x384: @@ SetMessage(Stack[-1])
0x385: Pop(1)
0x386: @@ ClearReplies()
0x387: Pop(0)
0x388: Push((int) 527119)
0x389: Push((int) 28418)
0x38a: Push((int) 28417)
0x38b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x38c: Pop(3)
0x38d: Return(); Pop(0)

0x38e: Push((int) 28418)
0x38f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x390: IF (Stack[-1] == 0) GOTO 0x3a0; Pop(1)

0x391: PushEmpty(string)
0x392: Stack[-1] = "Fear"
0x393: Call2 0x333

0x394: Pop(1)
0x395: Push((int) 527120)
0x396: @@ SetMessage(Stack[-1])
0x397: Pop(1)
0x398: @@ ClearReplies()
0x399: Pop(0)
0x39a: Push((int) 527121)
0x39b: Push((int) 28420)
0x39c: Push((int) 28419)
0x39d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x39e: Pop(3)
0x39f: Return(); Pop(0)

0x3a0: Push((int) 28420)
0x3a1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3a2: IF (Stack[-1] == 0) GOTO 0x3b2; Pop(1)

0x3a3: PushEmpty(string)
0x3a4: Stack[-1] = "Fear"
0x3a5: Call2 0x333

0x3a6: Pop(1)
0x3a7: Push((int) 527122)
0x3a8: @@ SetMessage(Stack[-1])
0x3a9: Pop(1)
0x3aa: @@ ClearReplies()
0x3ab: Pop(0)
0x3ac: Push((int) 527123)
0x3ad: Push((int) 28422)
0x3ae: Push((int) 28421)
0x3af: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b0: Pop(3)
0x3b1: Return(); Pop(0)

0x3b2: Push((int) 28422)
0x3b3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3b4: IF (Stack[-1] == 0) GOTO 0x3c4; Pop(1)

0x3b5: PushEmpty(string)
0x3b6: Stack[-1] = "Suspicion"
0x3b7: Call2 0x333

0x3b8: Pop(1)
0x3b9: Push((int) 527124)
0x3ba: @@ SetMessage(Stack[-1])
0x3bb: Pop(1)
0x3bc: @@ ClearReplies()
0x3bd: Pop(0)
0x3be: Push((int) 527125)
0x3bf: Push((int) 28424)
0x3c0: Push((int) 28423)
0x3c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c2: Pop(3)
0x3c3: Return(); Pop(0)

0x3c4: Push((int) 28424)
0x3c5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3c6: IF (Stack[-1] == 0) GOTO 0x3d6; Pop(1)

0x3c7: PushEmpty(string)
0x3c8: Stack[-1] = "Neutral"
0x3c9: Call2 0x333

0x3ca: Pop(1)
0x3cb: Push((int) 527126)
0x3cc: @@ SetMessage(Stack[-1])
0x3cd: Pop(1)
0x3ce: @@ ClearReplies()
0x3cf: Pop(0)
0x3d0: Push((int) 527127)
0x3d1: Push((int) 28426)
0x3d2: Push((int) 28425)
0x3d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d4: Pop(3)
0x3d5: Return(); Pop(0)

0x3d6: Push((int) 28426)
0x3d7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3d8: IF (Stack[-1] == 0) GOTO 0x3e8; Pop(1)

0x3d9: PushEmpty(string)
0x3da: Stack[-1] = "Neutral"
0x3db: Call2 0x333

0x3dc: Pop(1)
0x3dd: Push((int) 527128)
0x3de: @@ SetMessage(Stack[-1])
0x3df: Pop(1)
0x3e0: @@ ClearReplies()
0x3e1: Pop(0)
0x3e2: Push((int) 527129)
0x3e3: Push((int) 28428)
0x3e4: Push((int) 28427)
0x3e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e6: Pop(3)
0x3e7: Return(); Pop(0)

0x3e8: Push((int) 28428)
0x3e9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ea: IF (Stack[-1] == 0) GOTO 0x3fa; Pop(1)

0x3eb: PushEmpty(string)
0x3ec: Stack[-1] = "Neutral"
0x3ed: Call2 0x333

0x3ee: Pop(1)
0x3ef: Push((int) 527130)
0x3f0: @@ SetMessage(Stack[-1])
0x3f1: Pop(1)
0x3f2: @@ ClearReplies()
0x3f3: Pop(0)
0x3f4: Push((int) 527131)
0x3f5: Push((int) -1)
0x3f6: Push((int) 28429)
0x3f7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f8: Pop(3)
0x3f9: Return(); Pop(0)

0x3fa: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x3fb: PushEmpty(bool)
0x3fc: Call2 0xba0

0x3fd: Pop(0)
0x3fe: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x3ff: @ lshStopAnimation()
0x400: Pop(0)
0x401: GOTO 0x404

0x402: @ StopAnimation()
0x403: Pop(0)
0x404: Return(); Pop(0)

0x405: GOTO 0x34a

0x406: Return(); Pop(0)

0x407: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x408: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x409: PushEmpty(bool, object, float)
0x40a: Stack[-2] = Stack[-12]
0x40b: Stack[-1] = (float) 70.0
0x40c: Call2 0xa02

0x40d: Pop(2)
0x40e: Pop(1); Push((bool) Stack[-1] == 0)
0x40f: IF (Stack[-1] == 0) GOTO 0x412; Pop(1)

0x410: Stack[-10] = (int) -2
0x411: Return(); Pop(8)

0x412: @ CreateDialog(Stack[-4])
0x413: Pop(0)
0x414: PushEmpty(int)
0x415: Call2 0xb9a

0x416: Pop(0)
0x417: @@ SetNPCName(Stack[-1])
0x418: Pop(1)
0x419: PushEmpty(int)
0x41a: Call2 0xb98

0x41b: Pop(0)
0x41c: @@ SetNPCDescription(Stack[-1])
0x41d: Pop(1)
0x41e: PushEmpty(string)
0x41f: Call2 0xb9c

0x420: Pop(0)
0x421: @@ SetPhoto(Stack[-1])
0x422: Pop(1)
0x423: PushEmpty(string)
0x424: Call2 0xb9e

0x425: Pop(0)
0x426: @@ SetPhoto2(Stack[-1])
0x427: Pop(1)
0x428: PushEmpty(int)
0x429: Call2 0xd35

0x42a: Pop(0)
0x42b: @@ SetPlayerName(Stack[-1])
0x42c: Pop(1)
0x42d: Stack[-2] = (int) -1
0x42e: @ IsOverrideActive(Stack[-3])
0x42f: Pop(0)
0x430: Push(Stack[-3])
0x431: IF (Stack[-1] == 0) GOTO 0x434; Pop(1)

0x432: Stack[-10] = (int) -2
0x433: Return(); Pop(8)

0x434: @ DoDialog(Stack[-4])
0x435: Pop(0)
0x436: PushEmpty(bool, object)
0x437: PushEmpty(object)
0x438: Call2 0xb18

0x439: Stack[-2] = Stack[-1]
0x43a: Pop(1)
0x43b: Call2 0xa59

0x43c: Pop(2)
0x43d: PushEmpty(object, object)
0x43e: Stack[-2] = Stack[-11]
0x43f: Stack[-1] = Stack[-6]
0x440: Push(-2, 4); TaskCall(7)
0x441: Call2 0x458

0x442: Pop(-2, 4); TaskReturn
0x443: Pop(2)
0x444: @@ IsDialogEnd(Stack[-1])
0x445: Pop(0)
0x446: Pop(0); Push((bool) Stack[-1] == 0)
0x447: IF (Stack[-1] == 0) GOTO 0x44d; Pop(1)

0x448: @ sync()
0x449: Pop(0)
0x44a: @@ IsDialogEnd(Stack[-1])
0x44b: Pop(0)
0x44c: GOTO 0x446

0x44d: PushEmpty(object)
0x44e: Stack[-1] = Stack[-10]
0x44f: Call2 0xa47

0x450: Pop(1)
0x451: @ StopDialog(Stack[-4])
0x452: Pop(0)
0x453: @@ GetReturnValue(Stack[-2])
0x454: Pop(0)
0x455: Stack[-10] = Stack[-2]
0x456: Return(); Pop(8)

0x457: Stack[-4] = 0
0x458: PushEmpty()
0x459: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x45a: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x45b: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x45c: Push((int) 1)
0x45d: IF (Stack[-1] == 0) GOTO 0x4aa; Pop(1)

0x45e: PushEmpty(bool, object)
0x45f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x460: Call2 0xc52

0x461: Pop(1)
0x462: IF (Stack[-1] == 0) GOTO 0x472; Pop(1)

0x463: PushEmpty(string)
0x464: Stack[-1] = "Suspicion"
0x465: Call2 0x4c8

0x466: Pop(1)
0x467: Push((int) 531162)
0x468: @@ SetMessage(Stack[-1])
0x469: Pop(1)
0x46a: @@ ClearReplies()
0x46b: Pop(0)
0x46c: Push((int) 531292)
0x46d: Push((int) 32610)
0x46e: Push((int) 32609)
0x46f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x470: Pop(3)
0x471: GOTO 0x4aa

0x472: PushEmpty(string)
0x473: Stack[-1] = "Neutral"
0x474: Call2 0x4c8

0x475: Pop(1)
0x476: Push((int) 530485)
0x477: @@ SetMessage(Stack[-1])
0x478: Pop(1)
0x479: @@ ClearReplies()
0x47a: Pop(0)
0x47b: PushEmpty(bool, object)
0x47c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x47d: Call2 0xc46

0x47e: Pop(1)
0x47f: IF (Stack[-1] == 0) GOTO 0x485; Pop(1)

0x480: Push((int) 530486)
0x481: Push((int) 31853)
0x482: Push((int) 31852)
0x483: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x484: Pop(3)
0x485: PushEmpty(bool)
0x486: Stack[-1] = (bool) 0
0x487: PushEmpty(bool, object)
0x488: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x489: Call2 0xc5e

0x48a: Pop(1)
0x48b: IF (Stack[-1] == 0) GOTO 0x492; Pop(1)

0x48c: PushEmpty(bool, object)
0x48d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x48e: Call2 0xc6a

0x48f: Pop(1)
0x490: IF (Stack[-1] == 0) GOTO 0x492; Pop(1)

0x491: Stack[-1] = (bool) 1
0x492: IF (Stack[-1] == 0) GOTO 0x498; Pop(1)

0x493: Push((int) 531172)
0x494: Push((int) 32623)
0x495: Push((int) 32480)
0x496: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x497: Pop(3)
0x498: PushEmpty(bool, object)
0x499: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x49a: Call2 0xc75

0x49b: Pop(1)
0x49c: IF (Stack[-1] == 0) GOTO 0x4a2; Pop(1)

0x49d: Push((int) 531179)
0x49e: Push((int) 32617)
0x49f: Push((int) 32487)
0x4a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4a1: Pop(3)
0x4a2: Push((int) 530489)
0x4a3: Push((int) -1)
0x4a4: Push((int) 31855)
0x4a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4a6: Pop(3)
0x4a7: GOTO 0x4aa

0x4a8: Return(); Pop(0)

0x4a9: GOTO 0x45c

0x4aa: PushEmpty(bool)
0x4ab: Call2 0xba0

0x4ac: Pop(0)
0x4ad: IF (Stack[-1] == 0) GOTO 0x4b9; Pop(1)

0x4ae: @ lshWaitForAnimEnd()
0x4af: Pop(0)
0x4b0: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4b1: IF (Stack[-1] == 0) GOTO 0x4b3; Pop(1)

0x4b2: GOTO 0x4b8

0x4b3: PushEmpty(string)
0x4b4: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x4b5: Call2 0xae3

0x4b6: Pop(1)
0x4b7: GOTO 0x4ae

0x4b8: GOTO 0x4c7

0x4b9: Push("all")
0x4ba: Push("idle")
0x4bb: @ PlayAnimation(Stack[-2], Stack[-1])
0x4bc: Pop(2)
0x4bd: @ WaitForAnimEnd()
0x4be: Pop(0)
0x4bf: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4c0: IF (Stack[-1] == 0) GOTO 0x4c2; Pop(1)

0x4c1: GOTO 0x4c7

0x4c2: Push("all")
0x4c3: Push("idle")
0x4c4: @ PlayAnimation(Stack[-2], Stack[-1])
0x4c5: Pop(2)
0x4c6: GOTO 0x4bd

0x4c7: Return(); Pop(0)

0x4c8: PushEmpty()
0x4c9: PushEmpty(bool)
0x4ca: Call2 0xba0

0x4cb: Pop(0)
0x4cc: Pop(1); Push((bool) Stack[-1] == 0)
0x4cd: IF (Stack[-1] == 0) GOTO 0x4cf; Pop(1)

0x4ce: Return(); Pop(0)

0x4cf: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x4d0: IF (Stack[-1] == 0) GOTO 0x4d2; Pop(1)

0x4d1: Return(); Pop(0)

0x4d2: PushEmpty(string, bool)
0x4d3: Stack[-2] = Stack[-3]
0x4d4: Push("")
0x4d5: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x4d6: IF (Stack[-1] == 0) GOTO 0x4d9; Pop(1)

0x4d7: Stack[-1] = (bool) 0
0x4d8: GOTO 0x4da

0x4d9: Stack[-1] = (bool) 1
0x4da: Call2 0xaf3

0x4db: Pop(2)
0x4dc: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x4dd: Return(); Pop(0)

0x4de: PushEmpty()
0x4df: Push((int) 1)
0x4e0: IF (Stack[-1] == 0) GOTO 0x6e7; Pop(1)

0x4e1: PushEmpty()
0x4e2: Call2 0xb11

0x4e3: Pop(0)
0x4e4: Push((int) 32479)
0x4e5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4e6: IF (Stack[-1] == 0) GOTO 0x4f1; Pop(1)

0x4e7: PushEmpty(object, object)
0x4e8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4e9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4ea: Call2 0xbc8

0x4eb: Pop(2)
0x4ec: PushEmpty(object, object)
0x4ed: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4ee: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4ef: Call2 0xbe4

0x4f0: Pop(2)
0x4f1: Push((int) 32616)
0x4f2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4f3: IF (Stack[-1] == 0) GOTO 0x4f9; Pop(1)

0x4f4: PushEmpty(object, object)
0x4f5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4f6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4f7: Call2 0xc0c

0x4f8: Pop(2)
0x4f9: Push((int) 31854)
0x4fa: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4fb: IF (Stack[-1] == 0) GOTO 0x501; Pop(1)

0x4fc: PushEmpty(object, object)
0x4fd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4fe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4ff: Call2 0xbb9

0x500: Pop(2)
0x501: Push((int) 32486)
0x502: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x503: IF (Stack[-1] == 0) GOTO 0x518; Pop(1)

0x504: PushEmpty(object, object)
0x505: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x506: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x507: Call2 0xba2

0x508: Pop(2)
0x509: PushEmpty(object, object)
0x50a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x50b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x50c: Call2 0xbc2

0x50d: Pop(2)
0x50e: PushEmpty(object, object)
0x50f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x510: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x511: Call2 0xc16

0x512: Pop(2)
0x513: PushEmpty(object, object)
0x514: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x515: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x516: Call2 0xbf4

0x517: Pop(2)
0x518: Push((int) 32633)
0x519: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x51a: IF (Stack[-1] == 0) GOTO 0x52f; Pop(1)

0x51b: PushEmpty(object, object)
0x51c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x51d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x51e: Call2 0xba2

0x51f: Pop(2)
0x520: PushEmpty(object, object)
0x521: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x522: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x523: Call2 0xbc2

0x524: Pop(2)
0x525: PushEmpty(object, object)
0x526: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x527: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x528: Call2 0xc16

0x529: Pop(2)
0x52a: PushEmpty(object, object)
0x52b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x52c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x52d: Call2 0xbf4

0x52e: Pop(2)
0x52f: Push((int) 32489)
0x530: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x531: IF (Stack[-1] == 0) GOTO 0x537; Pop(1)

0x532: PushEmpty(object, object)
0x533: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x534: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x535: Call2 0xc02

0x536: Pop(2)
0x537: Push((int) 32470)
0x538: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x539: IF (Stack[-1] == 0) GOTO 0x584; Pop(1)

0x53a: PushEmpty(bool, object)
0x53b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x53c: Call2 0xc52

0x53d: Pop(1)
0x53e: IF (Stack[-1] == 0) GOTO 0x54e; Pop(1)

0x53f: PushEmpty(string)
0x540: Stack[-1] = "Suspicion"
0x541: Call2 0x4c8

0x542: Pop(1)
0x543: Push((int) 531162)
0x544: @@ SetMessage(Stack[-1])
0x545: Pop(1)
0x546: @@ ClearReplies()
0x547: Pop(0)
0x548: Push((int) 531292)
0x549: Push((int) 32610)
0x54a: Push((int) 32609)
0x54b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x54c: Pop(3)
0x54d: Return(); Pop(0)

0x54e: PushEmpty(string)
0x54f: Stack[-1] = "Neutral"
0x550: Call2 0x4c8

0x551: Pop(1)
0x552: Push((int) 530485)
0x553: @@ SetMessage(Stack[-1])
0x554: Pop(1)
0x555: @@ ClearReplies()
0x556: Pop(0)
0x557: PushEmpty(bool, object)
0x558: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x559: Call2 0xc46

0x55a: Pop(1)
0x55b: IF (Stack[-1] == 0) GOTO 0x561; Pop(1)

0x55c: Push((int) 530486)
0x55d: Push((int) 31853)
0x55e: Push((int) 31852)
0x55f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x560: Pop(3)
0x561: PushEmpty(bool)
0x562: Stack[-1] = (bool) 0
0x563: PushEmpty(bool, object)
0x564: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x565: Call2 0xc5e

0x566: Pop(1)
0x567: IF (Stack[-1] == 0) GOTO 0x56e; Pop(1)

0x568: PushEmpty(bool, object)
0x569: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x56a: Call2 0xc6a

0x56b: Pop(1)
0x56c: IF (Stack[-1] == 0) GOTO 0x56e; Pop(1)

0x56d: Stack[-1] = (bool) 1
0x56e: IF (Stack[-1] == 0) GOTO 0x574; Pop(1)

0x56f: Push((int) 531172)
0x570: Push((int) 32623)
0x571: Push((int) 32480)
0x572: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x573: Pop(3)
0x574: PushEmpty(bool, object)
0x575: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x576: Call2 0xc75

0x577: Pop(1)
0x578: IF (Stack[-1] == 0) GOTO 0x57e; Pop(1)

0x579: Push((int) 531179)
0x57a: Push((int) 32617)
0x57b: Push((int) 32487)
0x57c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x57d: Pop(3)
0x57e: Push((int) 530489)
0x57f: Push((int) -1)
0x580: Push((int) 31855)
0x581: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x582: Pop(3)
0x583: Return(); Pop(0)

0x584: Push((int) 32617)
0x585: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x586: IF (Stack[-1] == 0) GOTO 0x596; Pop(1)

0x587: PushEmpty(string)
0x588: Stack[-1] = "Neutral"
0x589: Call2 0x4c8

0x58a: Pop(1)
0x58b: Push((int) 531297)
0x58c: @@ SetMessage(Stack[-1])
0x58d: Pop(1)
0x58e: @@ ClearReplies()
0x58f: Pop(0)
0x590: Push((int) 531298)
0x591: Push((int) 32488)
0x592: Push((int) 32618)
0x593: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x594: Pop(3)
0x595: Return(); Pop(0)

0x596: Push((int) 32488)
0x597: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x598: IF (Stack[-1] == 0) GOTO 0x5ad; Pop(1)

0x599: PushEmpty(string)
0x59a: Stack[-1] = "Neutral"
0x59b: Call2 0x4c8

0x59c: Pop(1)
0x59d: Push((int) 531180)
0x59e: @@ SetMessage(Stack[-1])
0x59f: Pop(1)
0x5a0: @@ ClearReplies()
0x5a1: Pop(0)
0x5a2: Push((int) 531299)
0x5a3: Push((int) 32620)
0x5a4: Push((int) 32619)
0x5a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a6: Pop(3)
0x5a7: Push((int) 531301)
0x5a8: Push((int) 32620)
0x5a9: Push((int) 32621)
0x5aa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ab: Pop(3)
0x5ac: Return(); Pop(0)

0x5ad: Push((int) 32620)
0x5ae: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5af: IF (Stack[-1] == 0) GOTO 0x5bf; Pop(1)

0x5b0: PushEmpty(string)
0x5b1: Stack[-1] = "Neutral"
0x5b2: Call2 0x4c8

0x5b3: Pop(1)
0x5b4: Push((int) 531300)
0x5b5: @@ SetMessage(Stack[-1])
0x5b6: Pop(1)
0x5b7: @@ ClearReplies()
0x5b8: Pop(0)
0x5b9: Push((int) 531181)
0x5ba: Push((int) -1)
0x5bb: Push((int) 32489)
0x5bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5bd: Pop(3)
0x5be: Return(); Pop(0)

0x5bf: Push((int) 32623)
0x5c0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5c1: IF (Stack[-1] == 0) GOTO 0x5d6; Pop(1)

0x5c2: PushEmpty(string)
0x5c3: Stack[-1] = "Neutral"
0x5c4: Call2 0x4c8

0x5c5: Pop(1)
0x5c6: Push((int) 531302)
0x5c7: @@ SetMessage(Stack[-1])
0x5c8: Pop(1)
0x5c9: @@ ClearReplies()
0x5ca: Pop(0)
0x5cb: Push((int) 531303)
0x5cc: Push((int) 32481)
0x5cd: Push((int) 32624)
0x5ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5cf: Pop(3)
0x5d0: Push((int) 531304)
0x5d1: Push((int) 32481)
0x5d2: Push((int) 32625)
0x5d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d4: Pop(3)
0x5d5: Return(); Pop(0)

0x5d6: Push((int) 32481)
0x5d7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5d8: IF (Stack[-1] == 0) GOTO 0x5ed; Pop(1)

0x5d9: PushEmpty(string)
0x5da: Stack[-1] = "Neutral"
0x5db: Call2 0x4c8

0x5dc: Pop(1)
0x5dd: Push((int) 531173)
0x5de: @@ SetMessage(Stack[-1])
0x5df: Pop(1)
0x5e0: @@ ClearReplies()
0x5e1: Pop(0)
0x5e2: Push((int) 531174)
0x5e3: Push((int) 32483)
0x5e4: Push((int) 32482)
0x5e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5e6: Pop(3)
0x5e7: Push((int) 531305)
0x5e8: Push((int) 32483)
0x5e9: Push((int) 32627)
0x5ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5eb: Pop(3)
0x5ec: Return(); Pop(0)

0x5ed: Push((int) 32483)
0x5ee: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5ef: IF (Stack[-1] == 0) GOTO 0x604; Pop(1)

0x5f0: PushEmpty(string)
0x5f1: Stack[-1] = "Neutral"
0x5f2: Call2 0x4c8

0x5f3: Pop(1)
0x5f4: Push((int) 531175)
0x5f5: @@ SetMessage(Stack[-1])
0x5f6: Pop(1)
0x5f7: @@ ClearReplies()
0x5f8: Pop(0)
0x5f9: Push((int) 531176)
0x5fa: Push((int) 32485)
0x5fb: Push((int) 32484)
0x5fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5fd: Pop(3)
0x5fe: Push((int) 531306)
0x5ff: Push((int) 32630)
0x600: Push((int) 32629)
0x601: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x602: Pop(3)
0x603: Return(); Pop(0)

0x604: Push((int) 32630)
0x605: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x606: IF (Stack[-1] == 0) GOTO 0x616; Pop(1)

0x607: PushEmpty(string)
0x608: Stack[-1] = "Neutral"
0x609: Call2 0x4c8

0x60a: Pop(1)
0x60b: Push((int) 531307)
0x60c: @@ SetMessage(Stack[-1])
0x60d: Pop(1)
0x60e: @@ ClearReplies()
0x60f: Pop(0)
0x610: Push((int) 531308)
0x611: Push((int) 32485)
0x612: Push((int) 32631)
0x613: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x614: Pop(3)
0x615: Return(); Pop(0)

0x616: Push((int) 32485)
0x617: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x618: IF (Stack[-1] == 0) GOTO 0x62d; Pop(1)

0x619: PushEmpty(string)
0x61a: Stack[-1] = "Neutral"
0x61b: Call2 0x4c8

0x61c: Pop(1)
0x61d: Push((int) 531177)
0x61e: @@ SetMessage(Stack[-1])
0x61f: Pop(1)
0x620: @@ ClearReplies()
0x621: Pop(0)
0x622: Push((int) 531178)
0x623: Push((int) -1)
0x624: Push((int) 32486)
0x625: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x626: Pop(3)
0x627: Push((int) 531309)
0x628: Push((int) -1)
0x629: Push((int) 32633)
0x62a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62b: Pop(3)
0x62c: Return(); Pop(0)

0x62d: Push((int) 31853)
0x62e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x62f: IF (Stack[-1] == 0) GOTO 0x644; Pop(1)

0x630: PushEmpty(string)
0x631: Stack[-1] = "Dream"
0x632: Call2 0x4c8

0x633: Pop(1)
0x634: Push((int) 530487)
0x635: @@ SetMessage(Stack[-1])
0x636: Pop(1)
0x637: @@ ClearReplies()
0x638: Pop(0)
0x639: Push((int) 531310)
0x63a: Push((int) 32635)
0x63b: Push((int) 32634)
0x63c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x63d: Pop(3)
0x63e: Push((int) 531314)
0x63f: Push((int) 32635)
0x640: Push((int) 32638)
0x641: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x642: Pop(3)
0x643: Return(); Pop(0)

0x644: Push((int) 32635)
0x645: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x646: IF (Stack[-1] == 0) GOTO 0x65b; Pop(1)

0x647: PushEmpty(string)
0x648: Stack[-1] = "Dream"
0x649: Call2 0x4c8

0x64a: Pop(1)
0x64b: Push((int) 531311)
0x64c: @@ SetMessage(Stack[-1])
0x64d: Pop(1)
0x64e: @@ ClearReplies()
0x64f: Pop(0)
0x650: Push((int) 531312)
0x651: Push((int) 32637)
0x652: Push((int) 32636)
0x653: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x654: Pop(3)
0x655: Push((int) 531315)
0x656: Push((int) 32637)
0x657: Push((int) 32639)
0x658: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x659: Pop(3)
0x65a: Return(); Pop(0)

0x65b: Push((int) 32637)
0x65c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x65d: IF (Stack[-1] == 0) GOTO 0x66d; Pop(1)

0x65e: PushEmpty(string)
0x65f: Stack[-1] = "Dream"
0x660: Call2 0x4c8

0x661: Pop(1)
0x662: Push((int) 531313)
0x663: @@ SetMessage(Stack[-1])
0x664: Pop(1)
0x665: @@ ClearReplies()
0x666: Pop(0)
0x667: Push((int) 530488)
0x668: Push((int) -1)
0x669: Push((int) 31854)
0x66a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x66b: Pop(3)
0x66c: Return(); Pop(0)

0x66d: Push((int) 32610)
0x66e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x66f: IF (Stack[-1] == 0) GOTO 0x684; Pop(1)

0x670: PushEmpty(string)
0x671: Stack[-1] = "Suspicion"
0x672: Call2 0x4c8

0x673: Pop(1)
0x674: Push((int) 531293)
0x675: @@ SetMessage(Stack[-1])
0x676: Pop(1)
0x677: @@ ClearReplies()
0x678: Pop(0)
0x679: Push((int) 531291)
0x67a: Push((int) 32473)
0x67b: Push((int) 32608)
0x67c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67d: Pop(3)
0x67e: Push((int) 531163)
0x67f: Push((int) 32475)
0x680: Push((int) 32471)
0x681: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x682: Pop(3)
0x683: Return(); Pop(0)

0x684: Push((int) 32473)
0x685: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x686: IF (Stack[-1] == 0) GOTO 0x69b; Pop(1)

0x687: PushEmpty(string)
0x688: Stack[-1] = "Dream"
0x689: Call2 0x4c8

0x68a: Pop(1)
0x68b: Push((int) 531165)
0x68c: @@ SetMessage(Stack[-1])
0x68d: Pop(1)
0x68e: @@ ClearReplies()
0x68f: Pop(0)
0x690: Push((int) 531166)
0x691: Push((int) 32475)
0x692: Push((int) 32474)
0x693: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x694: Pop(3)
0x695: Push((int) 531294)
0x696: Push((int) 32476)
0x697: Push((int) 32612)
0x698: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x699: Pop(3)
0x69a: Return(); Pop(0)

0x69b: Push((int) 32475)
0x69c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x69d: IF (Stack[-1] == 0) GOTO 0x6b2; Pop(1)

0x69e: PushEmpty(string)
0x69f: Stack[-1] = "Dream"
0x6a0: Call2 0x4c8

0x6a1: Pop(1)
0x6a2: Push((int) 531167)
0x6a3: @@ SetMessage(Stack[-1])
0x6a4: Pop(1)
0x6a5: @@ ClearReplies()
0x6a6: Pop(0)
0x6a7: Push((int) 531164)
0x6a8: Push((int) 32476)
0x6a9: Push((int) 32472)
0x6aa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ab: Pop(3)
0x6ac: Push((int) 531295)
0x6ad: Push((int) 32478)
0x6ae: Push((int) 32614)
0x6af: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b0: Pop(3)
0x6b1: Return(); Pop(0)

0x6b2: Push((int) 32476)
0x6b3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6b4: IF (Stack[-1] == 0) GOTO 0x6c4; Pop(1)

0x6b5: PushEmpty(string)
0x6b6: Stack[-1] = "Dream"
0x6b7: Call2 0x4c8

0x6b8: Pop(1)
0x6b9: Push((int) 531168)
0x6ba: @@ SetMessage(Stack[-1])
0x6bb: Pop(1)
0x6bc: @@ ClearReplies()
0x6bd: Pop(0)
0x6be: Push((int) 531169)
0x6bf: Push((int) 32478)
0x6c0: Push((int) 32477)
0x6c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c2: Pop(3)
0x6c3: Return(); Pop(0)

0x6c4: Push((int) 32478)
0x6c5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6c6: IF (Stack[-1] == 0) GOTO 0x6db; Pop(1)

0x6c7: PushEmpty(string)
0x6c8: Stack[-1] = "Suspicion"
0x6c9: Call2 0x4c8

0x6ca: Pop(1)
0x6cb: Push((int) 531170)
0x6cc: @@ SetMessage(Stack[-1])
0x6cd: Pop(1)
0x6ce: @@ ClearReplies()
0x6cf: Pop(0)
0x6d0: Push((int) 531171)
0x6d1: Push((int) -1)
0x6d2: Push((int) 32479)
0x6d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6d4: Pop(3)
0x6d5: Push((int) 531296)
0x6d6: Push((int) -1)
0x6d7: Push((int) 32616)
0x6d8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6d9: Pop(3)
0x6da: Return(); Pop(0)

0x6db: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x6dc: PushEmpty(bool)
0x6dd: Call2 0xba0

0x6de: Pop(0)
0x6df: IF (Stack[-1] == 0) GOTO 0x6e3; Pop(1)

0x6e0: @ lshStopAnimation()
0x6e1: Pop(0)
0x6e2: GOTO 0x6e5

0x6e3: @ StopAnimation()
0x6e4: Pop(0)
0x6e5: Return(); Pop(0)

0x6e6: GOTO 0x4df

0x6e7: Return(); Pop(0)

0x6e8: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x6e9: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x6ea: PushEmpty(bool, object, float)
0x6eb: Stack[-2] = Stack[-12]
0x6ec: Stack[-1] = (float) 70.0
0x6ed: Call2 0xa02

0x6ee: Pop(2)
0x6ef: Pop(1); Push((bool) Stack[-1] == 0)
0x6f0: IF (Stack[-1] == 0) GOTO 0x6f3; Pop(1)

0x6f1: Stack[-10] = (int) -2
0x6f2: Return(); Pop(8)

0x6f3: @ CreateDialog(Stack[-4])
0x6f4: Pop(0)
0x6f5: PushEmpty(int)
0x6f6: Call2 0xb9a

0x6f7: Pop(0)
0x6f8: @@ SetNPCName(Stack[-1])
0x6f9: Pop(1)
0x6fa: PushEmpty(int)
0x6fb: Call2 0xb98

0x6fc: Pop(0)
0x6fd: @@ SetNPCDescription(Stack[-1])
0x6fe: Pop(1)
0x6ff: PushEmpty(string)
0x700: Call2 0xb9c

0x701: Pop(0)
0x702: @@ SetPhoto(Stack[-1])
0x703: Pop(1)
0x704: PushEmpty(string)
0x705: Call2 0xb9e

0x706: Pop(0)
0x707: @@ SetPhoto2(Stack[-1])
0x708: Pop(1)
0x709: PushEmpty(int)
0x70a: Call2 0xd35

0x70b: Pop(0)
0x70c: @@ SetPlayerName(Stack[-1])
0x70d: Pop(1)
0x70e: Stack[-2] = (int) -1
0x70f: @ IsOverrideActive(Stack[-3])
0x710: Pop(0)
0x711: Push(Stack[-3])
0x712: IF (Stack[-1] == 0) GOTO 0x715; Pop(1)

0x713: Stack[-10] = (int) -2
0x714: Return(); Pop(8)

0x715: @ DoDialog(Stack[-4])
0x716: Pop(0)
0x717: PushEmpty(bool, object)
0x718: PushEmpty(object)
0x719: Call2 0xb18

0x71a: Stack[-2] = Stack[-1]
0x71b: Pop(1)
0x71c: Call2 0xa59

0x71d: Pop(2)
0x71e: PushEmpty(object, object)
0x71f: Stack[-2] = Stack[-11]
0x720: Stack[-1] = Stack[-6]
0x721: Push(-2, 4); TaskCall(9)
0x722: Call2 0x739

0x723: Pop(-2, 4); TaskReturn
0x724: Pop(2)
0x725: @@ IsDialogEnd(Stack[-1])
0x726: Pop(0)
0x727: Pop(0); Push((bool) Stack[-1] == 0)
0x728: IF (Stack[-1] == 0) GOTO 0x72e; Pop(1)

0x729: @ sync()
0x72a: Pop(0)
0x72b: @@ IsDialogEnd(Stack[-1])
0x72c: Pop(0)
0x72d: GOTO 0x727

0x72e: PushEmpty(object)
0x72f: Stack[-1] = Stack[-10]
0x730: Call2 0xa47

0x731: Pop(1)
0x732: @ StopDialog(Stack[-4])
0x733: Pop(0)
0x734: @@ GetReturnValue(Stack[-2])
0x735: Pop(0)
0x736: Stack[-10] = Stack[-2]
0x737: Return(); Pop(8)

0x738: Stack[-4] = 0
0x739: PushEmpty()
0x73a: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x73b: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x73c: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x73d: Push((int) 1)
0x73e: IF (Stack[-1] == 0) GOTO 0x75f; Pop(1)

0x73f: PushEmpty(string)
0x740: Stack[-1] = "Autizm"
0x741: Call2 0x77d

0x742: Pop(1)
0x743: Push((int) 535243)
0x744: @@ SetMessage(Stack[-1])
0x745: Pop(1)
0x746: @@ ClearReplies()
0x747: Pop(0)
0x748: PushEmpty(bool, object)
0x749: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x74a: Call2 0xc8d

0x74b: Pop(1)
0x74c: IF (Stack[-1] == 0) GOTO 0x752; Pop(1)

0x74d: Push((int) 535244)
0x74e: Push((int) 37054)
0x74f: Push((int) 36919)
0x750: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x751: Pop(3)
0x752: Push((int) 535367)
0x753: Push((int) -1)
0x754: Push((int) 37052)
0x755: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x756: Pop(3)
0x757: Push((int) 535368)
0x758: Push((int) -1)
0x759: Push((int) 37053)
0x75a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x75b: Pop(3)
0x75c: GOTO 0x75f

0x75d: Return(); Pop(0)

0x75e: GOTO 0x73d

0x75f: PushEmpty(bool)
0x760: Call2 0xba0

0x761: Pop(0)
0x762: IF (Stack[-1] == 0) GOTO 0x76e; Pop(1)

0x763: @ lshWaitForAnimEnd()
0x764: Pop(0)
0x765: Push( Stack[3 + Tasks[-1].StackPointer] )
0x766: IF (Stack[-1] == 0) GOTO 0x768; Pop(1)

0x767: GOTO 0x76d

0x768: PushEmpty(string)
0x769: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x76a: Call2 0xae3

0x76b: Pop(1)
0x76c: GOTO 0x763

0x76d: GOTO 0x77c

0x76e: Push("all")
0x76f: Push("idle")
0x770: @ PlayAnimation(Stack[-2], Stack[-1])
0x771: Pop(2)
0x772: @ WaitForAnimEnd()
0x773: Pop(0)
0x774: Push( Stack[3 + Tasks[-1].StackPointer] )
0x775: IF (Stack[-1] == 0) GOTO 0x777; Pop(1)

0x776: GOTO 0x77c

0x777: Push("all")
0x778: Push("idle")
0x779: @ PlayAnimation(Stack[-2], Stack[-1])
0x77a: Pop(2)
0x77b: GOTO 0x772

0x77c: Return(); Pop(0)

0x77d: PushEmpty()
0x77e: PushEmpty(bool)
0x77f: Call2 0xba0

0x780: Pop(0)
0x781: Pop(1); Push((bool) Stack[-1] == 0)
0x782: IF (Stack[-1] == 0) GOTO 0x784; Pop(1)

0x783: Return(); Pop(0)

0x784: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x785: IF (Stack[-1] == 0) GOTO 0x787; Pop(1)

0x786: Return(); Pop(0)

0x787: PushEmpty(string, bool)
0x788: Stack[-2] = Stack[-3]
0x789: Push("")
0x78a: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x78b: IF (Stack[-1] == 0) GOTO 0x78e; Pop(1)

0x78c: Stack[-1] = (bool) 0
0x78d: GOTO 0x78f

0x78e: Stack[-1] = (bool) 1
0x78f: Call2 0xaf3

0x790: Pop(2)
0x791: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x792: Return(); Pop(0)

0x793: PushEmpty()
0x794: Push((int) 1)
0x795: IF (Stack[-1] == 0) GOTO 0x813; Pop(1)

0x796: PushEmpty()
0x797: Call2 0xb11

0x798: Pop(0)
0x799: Push((int) 36919)
0x79a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x79b: IF (Stack[-1] == 0) GOTO 0x7a1; Pop(1)

0x79c: PushEmpty(object, object)
0x79d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x79e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x79f: Call2 0xc1c

0x7a0: Pop(2)
0x7a1: Push((int) 36918)
0x7a2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7a3: IF (Stack[-1] == 0) GOTO 0x7c2; Pop(1)

0x7a4: PushEmpty(string)
0x7a5: Stack[-1] = "Autizm"
0x7a6: Call2 0x77d

0x7a7: Pop(1)
0x7a8: Push((int) 535243)
0x7a9: @@ SetMessage(Stack[-1])
0x7aa: Pop(1)
0x7ab: @@ ClearReplies()
0x7ac: Pop(0)
0x7ad: PushEmpty(bool, object)
0x7ae: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7af: Call2 0xc8d

0x7b0: Pop(1)
0x7b1: IF (Stack[-1] == 0) GOTO 0x7b7; Pop(1)

0x7b2: Push((int) 535244)
0x7b3: Push((int) 37054)
0x7b4: Push((int) 36919)
0x7b5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b6: Pop(3)
0x7b7: Push((int) 535367)
0x7b8: Push((int) -1)
0x7b9: Push((int) 37052)
0x7ba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7bb: Pop(3)
0x7bc: Push((int) 535368)
0x7bd: Push((int) -1)
0x7be: Push((int) 37053)
0x7bf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c0: Pop(3)
0x7c1: Return(); Pop(0)

0x7c2: Push((int) 37054)
0x7c3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7c4: IF (Stack[-1] == 0) GOTO 0x7d9; Pop(1)

0x7c5: PushEmpty(string)
0x7c6: Stack[-1] = "Autizm"
0x7c7: Call2 0x77d

0x7c8: Pop(1)
0x7c9: Push((int) 535369)
0x7ca: @@ SetMessage(Stack[-1])
0x7cb: Pop(1)
0x7cc: @@ ClearReplies()
0x7cd: Pop(0)
0x7ce: Push((int) 535370)
0x7cf: Push((int) 37056)
0x7d0: Push((int) 37055)
0x7d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d2: Pop(3)
0x7d3: Push((int) 535375)
0x7d4: Push((int) -1)
0x7d5: Push((int) 37060)
0x7d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d7: Pop(3)
0x7d8: Return(); Pop(0)

0x7d9: Push((int) 37056)
0x7da: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7db: IF (Stack[-1] == 0) GOTO 0x7f0; Pop(1)

0x7dc: PushEmpty(string)
0x7dd: Stack[-1] = "Autizm"
0x7de: Call2 0x77d

0x7df: Pop(1)
0x7e0: Push((int) 535371)
0x7e1: @@ SetMessage(Stack[-1])
0x7e2: Pop(1)
0x7e3: @@ ClearReplies()
0x7e4: Pop(0)
0x7e5: Push((int) 535372)
0x7e6: Push((int) 37058)
0x7e7: Push((int) 37057)
0x7e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7e9: Pop(3)
0x7ea: Push((int) 535376)
0x7eb: Push((int) -1)
0x7ec: Push((int) 37061)
0x7ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ee: Pop(3)
0x7ef: Return(); Pop(0)

0x7f0: Push((int) 37058)
0x7f1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7f2: IF (Stack[-1] == 0) GOTO 0x807; Pop(1)

0x7f3: PushEmpty(string)
0x7f4: Stack[-1] = "Dream"
0x7f5: Call2 0x77d

0x7f6: Pop(1)
0x7f7: Push((int) 535373)
0x7f8: @@ SetMessage(Stack[-1])
0x7f9: Pop(1)
0x7fa: @@ ClearReplies()
0x7fb: Pop(0)
0x7fc: Push((int) 535374)
0x7fd: Push((int) -1)
0x7fe: Push((int) 37059)
0x7ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x800: Pop(3)
0x801: Push((int) 535377)
0x802: Push((int) -1)
0x803: Push((int) 37062)
0x804: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x805: Pop(3)
0x806: Return(); Pop(0)

0x807: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x808: PushEmpty(bool)
0x809: Call2 0xba0

0x80a: Pop(0)
0x80b: IF (Stack[-1] == 0) GOTO 0x80f; Pop(1)

0x80c: @ lshStopAnimation()
0x80d: Pop(0)
0x80e: GOTO 0x811

0x80f: @ StopAnimation()
0x810: Pop(0)
0x811: Return(); Pop(0)

0x812: GOTO 0x794

0x813: Return(); Pop(0)

0x814: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x815: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x816: PushEmpty(bool, object, float)
0x817: Stack[-2] = Stack[-12]
0x818: Stack[-1] = (float) 70.0
0x819: Call2 0xa02

0x81a: Pop(2)
0x81b: Pop(1); Push((bool) Stack[-1] == 0)
0x81c: IF (Stack[-1] == 0) GOTO 0x81f; Pop(1)

0x81d: Stack[-10] = (int) -2
0x81e: Return(); Pop(8)

0x81f: @ CreateDialog(Stack[-4])
0x820: Pop(0)
0x821: PushEmpty(int)
0x822: Call2 0xb9a

0x823: Pop(0)
0x824: @@ SetNPCName(Stack[-1])
0x825: Pop(1)
0x826: PushEmpty(int)
0x827: Call2 0xb98

0x828: Pop(0)
0x829: @@ SetNPCDescription(Stack[-1])
0x82a: Pop(1)
0x82b: PushEmpty(string)
0x82c: Call2 0xb9c

0x82d: Pop(0)
0x82e: @@ SetPhoto(Stack[-1])
0x82f: Pop(1)
0x830: PushEmpty(string)
0x831: Call2 0xb9e

0x832: Pop(0)
0x833: @@ SetPhoto2(Stack[-1])
0x834: Pop(1)
0x835: PushEmpty(int)
0x836: Call2 0xd35

0x837: Pop(0)
0x838: @@ SetPlayerName(Stack[-1])
0x839: Pop(1)
0x83a: Stack[-2] = (int) -1
0x83b: @ IsOverrideActive(Stack[-3])
0x83c: Pop(0)
0x83d: Push(Stack[-3])
0x83e: IF (Stack[-1] == 0) GOTO 0x841; Pop(1)

0x83f: Stack[-10] = (int) -2
0x840: Return(); Pop(8)

0x841: @ DoDialog(Stack[-4])
0x842: Pop(0)
0x843: PushEmpty(bool, object)
0x844: PushEmpty(object)
0x845: Call2 0xb18

0x846: Stack[-2] = Stack[-1]
0x847: Pop(1)
0x848: Call2 0xa59

0x849: Pop(2)
0x84a: PushEmpty(object, object)
0x84b: Stack[-2] = Stack[-11]
0x84c: Stack[-1] = Stack[-6]
0x84d: Push(-2, 4); TaskCall(11)
0x84e: Call2 0x865

0x84f: Pop(-2, 4); TaskReturn
0x850: Pop(2)
0x851: @@ IsDialogEnd(Stack[-1])
0x852: Pop(0)
0x853: Pop(0); Push((bool) Stack[-1] == 0)
0x854: IF (Stack[-1] == 0) GOTO 0x85a; Pop(1)

0x855: @ sync()
0x856: Pop(0)
0x857: @@ IsDialogEnd(Stack[-1])
0x858: Pop(0)
0x859: GOTO 0x853

0x85a: PushEmpty(object)
0x85b: Stack[-1] = Stack[-10]
0x85c: Call2 0xa47

0x85d: Pop(1)
0x85e: @ StopDialog(Stack[-4])
0x85f: Pop(0)
0x860: @@ GetReturnValue(Stack[-2])
0x861: Pop(0)
0x862: Stack[-10] = Stack[-2]
0x863: Return(); Pop(8)

0x864: Stack[-4] = 0
0x865: PushEmpty()
0x866: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x867: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x868: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x869: Push((int) 1)
0x86a: IF (Stack[-1] == 0) GOTO 0x881; Pop(1)

0x86b: PushEmpty(string)
0x86c: Stack[-1] = "Neutral"
0x86d: Call2 0x89f

0x86e: Pop(1)
0x86f: Push((int) 540551)
0x870: @@ SetMessage(Stack[-1])
0x871: Pop(1)
0x872: @@ ClearReplies()
0x873: Pop(0)
0x874: Push((int) 540552)
0x875: Push((int) -1)
0x876: Push((int) 42561)
0x877: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x878: Pop(3)
0x879: Push((int) 540795)
0x87a: Push((int) -1)
0x87b: Push((int) 42844)
0x87c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x87d: Pop(3)
0x87e: GOTO 0x881

0x87f: Return(); Pop(0)

0x880: GOTO 0x869

0x881: PushEmpty(bool)
0x882: Call2 0xba0

0x883: Pop(0)
0x884: IF (Stack[-1] == 0) GOTO 0x890; Pop(1)

0x885: @ lshWaitForAnimEnd()
0x886: Pop(0)
0x887: Push( Stack[3 + Tasks[-1].StackPointer] )
0x888: IF (Stack[-1] == 0) GOTO 0x88a; Pop(1)

0x889: GOTO 0x88f

0x88a: PushEmpty(string)
0x88b: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x88c: Call2 0xae3

0x88d: Pop(1)
0x88e: GOTO 0x885

0x88f: GOTO 0x89e

0x890: Push("all")
0x891: Push("idle")
0x892: @ PlayAnimation(Stack[-2], Stack[-1])
0x893: Pop(2)
0x894: @ WaitForAnimEnd()
0x895: Pop(0)
0x896: Push( Stack[3 + Tasks[-1].StackPointer] )
0x897: IF (Stack[-1] == 0) GOTO 0x899; Pop(1)

0x898: GOTO 0x89e

0x899: Push("all")
0x89a: Push("idle")
0x89b: @ PlayAnimation(Stack[-2], Stack[-1])
0x89c: Pop(2)
0x89d: GOTO 0x894

0x89e: Return(); Pop(0)

0x89f: PushEmpty()
0x8a0: PushEmpty(bool)
0x8a1: Call2 0xba0

0x8a2: Pop(0)
0x8a3: Pop(1); Push((bool) Stack[-1] == 0)
0x8a4: IF (Stack[-1] == 0) GOTO 0x8a6; Pop(1)

0x8a5: Return(); Pop(0)

0x8a6: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x8a7: IF (Stack[-1] == 0) GOTO 0x8a9; Pop(1)

0x8a8: Return(); Pop(0)

0x8a9: PushEmpty(string, bool)
0x8aa: Stack[-2] = Stack[-3]
0x8ab: Push("")
0x8ac: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x8ad: IF (Stack[-1] == 0) GOTO 0x8b0; Pop(1)

0x8ae: Stack[-1] = (bool) 0
0x8af: GOTO 0x8b1

0x8b0: Stack[-1] = (bool) 1
0x8b1: Call2 0xaf3

0x8b2: Pop(2)
0x8b3: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x8b4: Return(); Pop(0)

0x8b5: PushEmpty()
0x8b6: Push((int) 1)
0x8b7: IF (Stack[-1] == 0) GOTO 0x8de; Pop(1)

0x8b8: PushEmpty()
0x8b9: Call2 0xb11

0x8ba: Pop(0)
0x8bb: Push((int) 42560)
0x8bc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8bd: IF (Stack[-1] == 0) GOTO 0x8d2; Pop(1)

0x8be: PushEmpty(string)
0x8bf: Stack[-1] = "Neutral"
0x8c0: Call2 0x89f

0x8c1: Pop(1)
0x8c2: Push((int) 540551)
0x8c3: @@ SetMessage(Stack[-1])
0x8c4: Pop(1)
0x8c5: @@ ClearReplies()
0x8c6: Pop(0)
0x8c7: Push((int) 540552)
0x8c8: Push((int) -1)
0x8c9: Push((int) 42561)
0x8ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8cb: Pop(3)
0x8cc: Push((int) 540795)
0x8cd: Push((int) -1)
0x8ce: Push((int) 42844)
0x8cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d0: Pop(3)
0x8d1: Return(); Pop(0)

0x8d2: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x8d3: PushEmpty(bool)
0x8d4: Call2 0xba0

0x8d5: Pop(0)
0x8d6: IF (Stack[-1] == 0) GOTO 0x8da; Pop(1)

0x8d7: @ lshStopAnimation()
0x8d8: Pop(0)
0x8d9: GOTO 0x8dc

0x8da: @ StopAnimation()
0x8db: Pop(0)
0x8dc: Return(); Pop(0)

0x8dd: GOTO 0x8b6

0x8de: Return(); Pop(0)

0x8df: Push(GlobalVars[1])
0x8e0: Stack[-1] = (bool) 0
0x8e1: GlobalVars[1] = Stack[-1]; Pop(1)
0x8e2: PushEmpty()
0x8e3: Call2 0x8e6

0x8e4: Pop(0)
0x8e5: Return(); Pop(0)

0x8e6: PushEmpty(bool)
0x8e7: Call2 0x9fd

0x8e8: Pop(0)
0x8e9: Pop(1); Push((bool) Stack[-1] == 0)
0x8ea: IF (Stack[-1] == 0) GOTO 0x8ed; Pop(1)

0x8eb: @ Hold()
0x8ec: Pop(0)
0x8ed: @ GetDirection(Stack[-0])
0x8ee: Pop(0)
0x8ef: PushEmpty()
0x8f0: Call2 0x996

0x8f1: Pop(0)
0x8f2: GOTO 0x8ef

0x8f3: Return(); Pop(0)

0x8f4: PushEmpty(object, object)
0x8f5: Push("player")
0x8f6: @ FindActor(Stack[-2], Stack[-1])
0x8f7: Pop(1)
0x8f8: Pop(0); Push((bool) Stack[-1] == 0)
0x8f9: IF (Stack[-1] == 0) GOTO 0x8fc; Pop(1)

0x8fa: Stack[-3] = (bool) 0
0x8fb: Return(); Pop(2)

0x8fc: PushEmpty(bool, object)
0x8fd: Stack[-1] = Stack[-3]
0x8fe: Call2 0x9f4

0x8ff: Stack[-5] = Stack[-2]
0x900: Pop(2)
0x901: Return(); Pop(2)

0x902: Stack[-1] = 0
0x903: Push(CvectorIndex(Stack[-0], 0))
0x904: Push(CvectorIndex(Stack[-0], 2))
0x905: @ RotateAsync(Stack[-2], Stack[-1])
0x906: Pop(2)
0x907: Return(); Pop(0)

0x908: PushEmpty(object, bool, object, bool)
0x909: Push("player")
0x90a: @ FindActor(Stack[-3], Stack[-1])
0x90b: Pop(1)
0x90c: Pop(0); Push((bool) Stack[-2] == 0)
0x90d: IF (Stack[-1] == 0) GOTO 0x910; Pop(1)

0x90e: Stack[-5] = (bool) 0
0x90f: Return(); Pop(4)

0x910: PushEmpty(float, object)
0x911: Stack[-1] = Stack[-4]
0x912: Call2 0x9e2

0x913: Pop(1)
0x914: Push((float)90000.0)
0x915: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x916: IF (Stack[-1] == 0) GOTO 0x919; Pop(1)

0x917: Stack[-5] = (bool) 0
0x918: Return(); Pop(4)

0x919: @ CanSee(Stack[-1], Stack[-2])
0x91a: Pop(0)
0x91b: Stack[-5] = Stack[-1]
0x91c: Return(); Pop(4)

0x91d: Stack[-2] = 0
0x91e: PushEmpty(float, float)
0x91f: Push((int) 8)
0x920: Push((int) 16)
0x921: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x922: Pop(2)
0x923: Push((int) 10)
0x924: @ SetTimer(Stack[-1], Stack[-2])
0x925: Pop(1)
0x926: Return(); Pop(2)

0x927: Push((int) 10)
0x928: @ KillTimer(Stack[-1])
0x929: Pop(1)
0x92a: Return(); Pop(0)

0x92b: PushEmpty()
0x92c: Push((int) 10)
0x92d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x92e: IF (Stack[-1] == 0) GOTO 0x950; Pop(1)

0x92f: PushEmpty()
0x930: Call2 0x927

0x931: Pop(0)
0x932: PushEmpty(bool)
0x933: Stack[-1] = (bool) 0
0x934: PushEmpty(bool)
0x935: Call2 0x9fd

0x936: Pop(0)
0x937: IF (Stack[-1] == 0) GOTO 0x93d; Pop(1)

0x938: PushEmpty(bool)
0x939: Call2 0x908

0x93a: Pop(0)
0x93b: IF (Stack[-1] == 0) GOTO 0x93d; Pop(1)

0x93c: Stack[-1] = (bool) 1
0x93d: IF (Stack[-1] == 0) GOTO 0x94a; Pop(1)

0x93e: PushEmpty(bool)
0x93f: Call2 0x8f4

0x940: Pop(0)
0x941: IF (Stack[-1] == 0) GOTO 0x949; Pop(1)

0x942: PushEmpty(bool, object)
0x943: PushEmpty(object)
0x944: Call2 0xb18

0x945: Stack[-2] = Stack[-1]
0x946: Pop(1)
0x947: Call2 0xa93

0x948: Pop(2)
0x949: GOTO 0x950

0x94a: PushEmpty()
0x94b: Call2 0x903

0x94c: Pop(0)
0x94d: PushEmpty()
0x94e: Call2 0x91e

0x94f: Pop(0)
0x950: Return(); Pop(0)

0x951: PushEmpty()
0x952: Call2 0x9dd

0x953: Pop(0)
0x954: PushEmpty()
0x955: Call2 0x927

0x956: Pop(0)
0x957: @ lshStopSpeech()
0x958: Pop(0)
0x959: @ lshStopAnimation()
0x95a: Pop(0)
0x95b: @ StopAsync()
0x95c: Pop(0)
0x95d: @ Hold()
0x95e: Pop(0)
0x95f: Return(); Pop(0)

0x960: @ StopGroup0()
0x961: Pop(0)
0x962: PushEmpty()
0x963: Call2 0x927

0x964: Pop(0)
0x965: PushEmpty(string)
0x966: Stack[-1] = "Neutral"
0x967: Call2 0xae3

0x968: Pop(1)
0x969: PushEmpty()
0x96a: Call2 0x91e

0x96b: Pop(0)
0x96c: Return(); Pop(0)

0x96d: PushEmpty()
0x96e: Push(Stack[-1])
0x96f: IF (Stack[-1] == 0) GOTO 0x974; Pop(1)

0x970: PushEmpty()
0x971: Call2 0x91e

0x972: Pop(0)
0x973: GOTO 0x978

0x974: PushEmpty(string)
0x975: Stack[-1] = "Neutral"
0x976: Call2 0xae3

0x977: Pop(1)
0x978: Return(); Pop(0)

0x979: PushEmpty(bool, bool)
0x97a: @ IsOverrideActive(Stack[-1])
0x97b: Pop(0)
0x97c: Pop(0); Push((bool) Stack[-1] == 0)
0x97d: IF (Stack[-1] == 0) GOTO 0x995; Pop(1)

0x97e: EventDisable(0)
0x97f: PushEmpty()
0x980: Call2 0x9dd

0x981: Pop(0)
0x982: PushEmpty(bool, object)
0x983: Stack[-1] = Stack[-5]
0x984: Call2 0x9f4

0x985: Pop(2)
0x986: EventEnable(0)
0x987: PushEmpty(object)
0x988: Stack[-1] = Stack[-4]
0x989: Call2 0xd46

0x98a: Pop(1)
0x98b: PushEmpty(string)
0x98c: Stack[-1] = "Neutral"
0x98d: Call2 0xae3

0x98e: Pop(1)
0x98f: PushEmpty()
0x990: Call2 0x927

0x991: Pop(0)
0x992: PushEmpty()
0x993: Call2 0x91e

0x994: Pop(0)
0x995: Return(); Pop(2)

0x996: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x997: @ WaitForAnimEnd()
0x998: Pop(0)
0x999: PushEmpty(bool)
0x99a: Call2 0x9fd

0x99b: Pop(0)
0x99c: Pop(1); Push((bool) Stack[-1] == 0)
0x99d: IF (Stack[-1] == 0) GOTO 0x99f; Pop(1)

0x99e: Return(); Pop(12)

0x99f: PushEmpty(int)
0x9a0: Call2 0xb87

0x9a1: Stack[-7] = Stack[-1]
0x9a2: Pop(1)
0x9a3: Stack[-5] = (int) 0
0x9a4: PushEmpty(bool)
0x9a5: Stack[-1] = (bool) 0
0x9a6: Push((int) 5)
0x9a7: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x9a8: IF (Stack[-1] == 0) GOTO 0x9ae; Pop(1)

0x9a9: PushEmpty(bool)
0x9aa: Call2 0x9fd

0x9ab: Pop(0)
0x9ac: IF (Stack[-1] == 0) GOTO 0x9ae; Pop(1)

0x9ad: Stack[-1] = (bool) 1
0x9ae: IF (Stack[-1] == 0) GOTO 0x9d8; Pop(1)

0x9af: Pop(0); Push((bool) Stack[-6] == 0)
0x9b0: IF (Stack[-1] == 0) GOTO 0x9b8; Pop(1)

0x9b1: Push((int) 3)
0x9b2: @ Sleep(Stack[-1], Stack[-5])
0x9b3: Pop(1)
0x9b4: Pop(0); Push((bool) Stack[-4] == 0)
0x9b5: IF (Stack[-1] == 0) GOTO 0x9b7; Pop(1)

0x9b6: GOTO 0x9d8

0x9b7: GOTO 0x9cd

0x9b8: @ irand(Stack[-3], Stack[-6])
0x9b9: Pop(0)
0x9ba: Push((int) 5)
0x9bb: @ irand(Stack[-3], Stack[-1])
0x9bc: Pop(1)
0x9bd: Push((int) 0)
0x9be: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x9bf: IF (Stack[-1] == 0) GOTO 0x9c1; Pop(1)

0x9c0: Stack[-3] = (int) 0
0x9c1: Push("all")
0x9c2: PushEmpty(string, int)
0x9c3: Stack[-1] = Stack[-6]
0x9c4: Call2 0xb80

0x9c5: Pop(1)
0x9c6: @ PlayAnimation(Stack[-2], Stack[-1])
0x9c7: Pop(2)
0x9c8: @ WaitForAnimEnd(Stack[-1])
0x9c9: Pop(0)
0x9ca: Pop(0); Push((bool) Stack[-1] == 0)
0x9cb: IF (Stack[-1] == 0) GOTO 0x9cd; Pop(1)

0x9cc: GOTO 0x9d8

0x9cd: PushEmpty(bool)
0x9ce: Call2 0x9db

0x9cf: Pop(0)
0x9d0: Pop(1); Push((bool) Stack[-1] == 0)
0x9d1: IF (Stack[-1] == 0) GOTO 0x9d3; Pop(1)

0x9d2: GOTO 0x9d8

0x9d3: @ ResetAAS()
0x9d4: Pop(0)
0x9d5: Push((int) 1)
0x9d6: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x9d7: GOTO 0x9a4

0x9d8: @ ResetAAS()
0x9d9: Pop(0)
0x9da: Return(); Pop(12)

0x9db: Stack[-1] = (bool) 1
0x9dc: Return(); Pop(0)

0x9dd: @ StopAnimation()
0x9de: Pop(0)
0x9df: @ StopGroup0()
0x9e0: Pop(0)
0x9e1: Return(); Pop(0)

0x9e2: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x9e3: @ GetPosition(Stack[-3])
0x9e4: Pop(0)
0x9e5: @@ GetPosition(Stack[-2])
0x9e6: Pop(0)
0x9e7: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x9e8: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x9e9: Return(); Pop(6)

0x9ea: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x9eb: @ GetPosition(Stack[-3])
0x9ec: Pop(0)
0x9ed: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x9ee: Push(CvectorIndex(Stack[-2], 0))
0x9ef: Push(CvectorIndex(Stack[-3], 2))
0x9f0: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x9f1: Pop(2)
0x9f2: Stack[-8] = Stack[-1]
0x9f3: Return(); Pop(6)

0x9f4: PushEmpty(cvector, cvector)
0x9f5: @@ GetPosition(Stack[-1])
0x9f6: Pop(0)
0x9f7: PushEmpty(bool, cvector)
0x9f8: Stack[-1] = Stack[-3]
0x9f9: Call2 0x9ea

0x9fa: Stack[-6] = Stack[-2]
0x9fb: Pop(2)
0x9fc: Return(); Pop(2)

0x9fd: PushEmpty(bool, bool)
0x9fe: @ IsLoaded(Stack[-1])
0x9ff: Pop(0)
0xa00: Stack[-3] = Stack[-1]
0xa01: Return(); Pop(2)

0xa02: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0xa03: @@ GetPosition(Stack[-8])
0xa04: Pop(0)
0xa05: @@ GetEyesHeight(Stack[-9])
0xa06: Pop(0)
0xa07: Push(CvectorIndex(Stack[-8], 1))
0xa08: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xa09: CvectorIndex(Stack[-9], 1) = Stack[-1];
0xa0a: @ GetPosition(Stack[-7])
0xa0b: Pop(0)
0xa0c: @ GetEyesHeight(Stack[-9])
0xa0d: Pop(0)
0xa0e: Push(CvectorIndex(Stack[-7], 1))
0xa0f: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xa10: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xa11: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xa12: Push(CvectorIndex(Stack[-6], 1))
0xa13: Stack[-1] = (int) 0
0xa14: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xa15: Pop(0); Push(Stack[-6] | Stack[-6]);
0xa16: Pop(1); Push(Sqrt(Stack[-1]))
0xa17: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0xa18: Stack[-5] = -Stack[-6]; Pop(0);
0xa19: Pop(0); Push(Stack[-6] * Stack[-19]);
0xa1a: PushEmpty(cvector, cvector)
0xa1b: Push(CVector(0.0, 1.0, 0.0))
0xa1c: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0xa1d: Call2 0xb1e

0xa1e: Pop(1)
0xa1f: Push((int) 25)
0xa20: Pop(2); Push(Stack[-2] * Stack[-1]);
0xa21: Pop(2); Push(Stack[-2] + Stack[-1]);
0xa22: Push(CVector(0.0, 10.0, 0.0))
0xa23: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xa24: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0xa25: @ IsOverrideActive(Stack[-2])
0xa26: Pop(0)
0xa27: Push(Stack[-2])
0xa28: IF (Stack[-1] == 0) GOTO 0xa2b; Pop(1)

0xa29: Stack[-21] = (bool) 0
0xa2a: Return(); Pop(18)

0xa2b: @ StopWorld()
0xa2c: Pop(0)
0xa2d: Push((bool) 1)
0xa2e: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0xa2f: Pop(1)
0xa30: Push(CvectorIndex(Stack[-4], 0))
0xa31: Push(CvectorIndex(Stack[-5], 2))
0xa32: @ Rotate(Stack[-2], Stack[-1])
0xa33: Pop(2)
0xa34: PushEmpty(bool)
0xa35: Call2 0xba0

0xa36: Pop(0)
0xa37: IF (Stack[-1] == 0) GOTO 0xa39; Pop(1)

0xa38: GOTO 0xa41

0xa39: Push("head")
0xa3a: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xa3b: Pop(1)
0xa3c: Push(Stack[-1])
0xa3d: IF (Stack[-1] == 0) GOTO 0xa41; Pop(1)

0xa3e: Push("head")
0xa3f: @ LookAsyncCamera(Stack[-1])
0xa40: Pop(1)
0xa41: @ CameraWaitForPlayFinish()
0xa42: Pop(0)
0xa43: @ ResumeWorld()
0xa44: Pop(0)
0xa45: Stack[-21] = (bool) 1
0xa46: Return(); Pop(18)

0xa47: PushEmpty(bool, bool)
0xa48: Push((bool) 1)
0xa49: @ CameraSwitchToNormal(Stack[-1])
0xa4a: Pop(1)
0xa4b: PushEmpty(bool)
0xa4c: Call2 0xba0

0xa4d: Pop(0)
0xa4e: IF (Stack[-1] == 0) GOTO 0xa50; Pop(1)

0xa4f: GOTO 0xa58

0xa50: Push("head")
0xa51: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xa52: Pop(1)
0xa53: Push(Stack[-1])
0xa54: IF (Stack[-1] == 0) GOTO 0xa58; Pop(1)

0xa55: Push("head")
0xa56: @ UnlookAsync(Stack[-1])
0xa57: Pop(1)
0xa58: Return(); Pop(2)

0xa59: PushEmpty(int, int, int, int)
0xa5a: Push("voice_common")
0xa5b: @ GetVariable(Stack[-1], Stack[-3])
0xa5c: Pop(1)
0xa5d: Push(Stack[-2])
0xa5e: IF (Stack[-1] == 0) GOTO 0xa7f; Pop(1)

0xa5f: PushEmpty(bool, object)
0xa60: Stack[-1] = Stack[-7]
0xa61: Call2 0xa93

0xa62: Pop(1)
0xa63: Pop(1); Push((bool) Stack[-1] == 0)
0xa64: IF (Stack[-1] == 0) GOTO 0xa6d; Pop(1)

0xa65: PushEmpty(bool, object)
0xa66: Stack[-1] = Stack[-7]
0xa67: Call2 0xab8

0xa68: Pop(1)
0xa69: Pop(1); Push((bool) Stack[-1] == 0)
0xa6a: IF (Stack[-1] == 0) GOTO 0xa6d; Pop(1)

0xa6b: Stack[-6] = (bool) 0
0xa6c: Return(); Pop(4)

0xa6d: Push((int) 2)
0xa6e: @ irand(Stack[-2], Stack[-1])
0xa6f: Pop(1)
0xa70: Push(Stack[-1])
0xa71: IF (Stack[-1] == 0) GOTO 0xa7a; Pop(1)

0xa72: Push("voice_common")
0xa73: Push((int) 1)
0xa74: Pop(1); Push(Stack[-4] + Stack[-1]);
0xa75: Push((int) 3)
0xa76: Pop(2); Push(Stack[-2] % Stack[-1]);
0xa77: @ SetVariable(Stack[-2], Stack[-1])
0xa78: Pop(2)
0xa79: GOTO 0xa7e

0xa7a: Push("voice_common")
0xa7b: Push((int) 0)
0xa7c: @ SetVariable(Stack[-2], Stack[-1])
0xa7d: Pop(2)
0xa7e: GOTO 0xa91

0xa7f: PushEmpty(bool, object)
0xa80: Stack[-1] = Stack[-7]
0xa81: Call2 0xab8

0xa82: Pop(1)
0xa83: Pop(1); Push((bool) Stack[-1] == 0)
0xa84: IF (Stack[-1] == 0) GOTO 0xa8d; Pop(1)

0xa85: PushEmpty(bool, object)
0xa86: Stack[-1] = Stack[-7]
0xa87: Call2 0xa93

0xa88: Pop(1)
0xa89: Pop(1); Push((bool) Stack[-1] == 0)
0xa8a: IF (Stack[-1] == 0) GOTO 0xa8d; Pop(1)

0xa8b: Stack[-6] = (bool) 0
0xa8c: Return(); Pop(4)

0xa8d: Push("voice_common")
0xa8e: Push((int) 1)
0xa8f: @ SetVariable(Stack[-2], Stack[-1])
0xa90: Pop(2)
0xa91: Stack[-6] = (bool) 1
0xa92: Return(); Pop(4)

0xa93: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xa94: Stack[-5] = "c"
0xa95: Stack[-4] = (int) 0
0xa96: Push((int) 1)
0xa97: IF (Stack[-1] == 0) GOTO 0xaa3; Pop(1)

0xa98: Push((int) 1)
0xa99: Pop(1); Push(Stack[-5] + Stack[-1]);
0xa9a: Pop(1); Push(Stack[-6] + Stack[-1]);
0xa9b: @@ HasProperty(Stack[-1], Stack[-4])
0xa9c: Pop(1)
0xa9d: Pop(0); Push((bool) Stack[-3] == 0)
0xa9e: IF (Stack[-1] == 0) GOTO 0xaa0; Pop(1)

0xa9f: GOTO 0xaa3

0xaa0: Push((int) 1)
0xaa1: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xaa2: GOTO 0xa96

0xaa3: Pop(0); Push((bool) Stack[-4] == 0)
0xaa4: IF (Stack[-1] == 0) GOTO 0xaa7; Pop(1)

0xaa5: Stack[-12] = (bool) 0
0xaa6: Return(); Pop(10)

0xaa7: Stack[-2] = (int) 0
0xaa8: Push((int) 1)
0xaa9: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xaaa: IF (Stack[-1] == 0) GOTO 0xaad; Pop(1)

0xaab: @ irand(Stack[-2], Stack[-4])
0xaac: Pop(0)
0xaad: Push((int) 1)
0xaae: Pop(1); Push(Stack[-3] + Stack[-1]);
0xaaf: Pop(1); Push(Stack[-6] + Stack[-1]);
0xab0: @@ GetProperty(Stack[-1], Stack[-2])
0xab1: Pop(1)
0xab2: PushEmpty(bool, string)
0xab3: Stack[-1] = Stack[-3]
0xab4: Call2 0xb02

0xab5: Stack[-14] = Stack[-2]
0xab6: Pop(2)
0xab7: Return(); Pop(10)

0xab8: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xab9: Push("d")
0xaba: PushEmpty(int)
0xabb: Call2 0xb71

0xabc: Pop(0)
0xabd: Pop(2); Push(Stack[-2] + Stack[-1]);
0xabe: Push("m")
0xabf: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0xac0: Stack[-4] = (int) 0
0xac1: Push((int) 1)
0xac2: IF (Stack[-1] == 0) GOTO 0xace; Pop(1)

0xac3: Push((int) 1)
0xac4: Pop(1); Push(Stack[-5] + Stack[-1]);
0xac5: Pop(1); Push(Stack[-6] + Stack[-1]);
0xac6: @@ HasProperty(Stack[-1], Stack[-4])
0xac7: Pop(1)
0xac8: Pop(0); Push((bool) Stack[-3] == 0)
0xac9: IF (Stack[-1] == 0) GOTO 0xacb; Pop(1)

0xaca: GOTO 0xace

0xacb: Push((int) 1)
0xacc: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xacd: GOTO 0xac1

0xace: Pop(0); Push((bool) Stack[-4] == 0)
0xacf: IF (Stack[-1] == 0) GOTO 0xad2; Pop(1)

0xad0: Stack[-12] = (bool) 0
0xad1: Return(); Pop(10)

0xad2: Stack[-2] = (int) 0
0xad3: Push((int) 1)
0xad4: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xad5: IF (Stack[-1] == 0) GOTO 0xad8; Pop(1)

0xad6: @ irand(Stack[-2], Stack[-4])
0xad7: Pop(0)
0xad8: Push((int) 1)
0xad9: Pop(1); Push(Stack[-3] + Stack[-1]);
0xada: Pop(1); Push(Stack[-6] + Stack[-1]);
0xadb: @@ GetProperty(Stack[-1], Stack[-2])
0xadc: Pop(1)
0xadd: PushEmpty(bool, string)
0xade: Stack[-1] = Stack[-3]
0xadf: Call2 0xb02

0xae0: Stack[-14] = Stack[-2]
0xae1: Pop(2)
0xae2: Return(); Pop(10)

0xae3: PushEmpty(bool, float, float, bool, float, float)
0xae4: @ lshHasAnimation(Stack[-3], Stack[-7])
0xae5: Pop(0)
0xae6: Push(Stack[-3])
0xae7: IF (Stack[-1] == 0) GOTO 0xaee; Pop(1)

0xae8: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0xae9: Pop(0)
0xaea: Push((bool) 0)
0xaeb: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xaec: Pop(1)
0xaed: GOTO 0xaf2

0xaee: Push("Can't find lsh animation : ")
0xaef: Pop(1); Push(Stack[-1] + Stack[-8]);
0xaf0: @ Trace(Stack[-1])
0xaf1: Pop(1)
0xaf2: Return(); Pop(6)

0xaf3: PushEmpty(bool, float, float, bool, float, float)
0xaf4: @ lshHasAnimation(Stack[-3], Stack[-8])
0xaf5: Pop(0)
0xaf6: Push(Stack[-3])
0xaf7: IF (Stack[-1] == 0) GOTO 0xafd; Pop(1)

0xaf8: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0xaf9: Pop(0)
0xafa: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0xafb: Pop(0)
0xafc: GOTO 0xb01

0xafd: Push("Can't find lsh animation : ")
0xafe: Pop(1); Push(Stack[-1] + Stack[-9]);
0xaff: @ Trace(Stack[-1])
0xb00: Pop(1)
0xb01: Return(); Pop(6)

0xb02: PushEmpty(bool, bool)
0xb03: PushEmpty(bool)
0xb04: Call2 0xba0

0xb05: Pop(0)
0xb06: IF (Stack[-1] == 0) GOTO 0xb0f; Pop(1)

0xb07: @ lshHasSpeech(Stack[-1], Stack[-3])
0xb08: Pop(0)
0xb09: Push(Stack[-1])
0xb0a: IF (Stack[-1] == 0) GOTO 0xb0f; Pop(1)

0xb0b: @ lshPlaySpeech(Stack[-3])
0xb0c: Pop(0)
0xb0d: Stack[-4] = (bool) 1
0xb0e: Return(); Pop(2)

0xb0f: Stack[-4] = (bool) 0
0xb10: Return(); Pop(2)

0xb11: PushEmpty(bool)
0xb12: Call2 0xba0

0xb13: Pop(0)
0xb14: IF (Stack[-1] == 0) GOTO 0xb17; Pop(1)

0xb15: @ lshStopSpeech()
0xb16: Pop(0)
0xb17: Return(); Pop(0)

0xb18: PushEmpty(object, object)
0xb19: @ self(Stack[-1])
0xb1a: Pop(0)
0xb1b: Stack[-3] = Stack[-1]
0xb1c: Return(); Pop(2)

0xb1d: Stack[-1] = 0
0xb1e: PushEmpty(float, float)
0xb1f: Pop(0); Push(Stack[-3] | Stack[-3]);
0xb20: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xb21: Push((float)0.0)
0xb22: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xb23: IF (Stack[-1] == 0) GOTO 0xb26; Pop(1)

0xb24: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xb25: Return(); Pop(2)

0xb26: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xb27: Return(); Pop(2)

0xb28: PushEmpty(int, int)
0xb29: @ GetVariable(Stack[-3], Stack[-1])
0xb2a: Pop(0)
0xb2b: Stack[-4] = Stack[-1]
0xb2c: Return(); Pop(2)

0xb2d: PushEmpty(object, object)
0xb2e: @ CreateIntVector(Stack[-1])
0xb2f: Pop(0)
0xb30: @@ add(Stack[-4])
0xb31: Pop(0)
0xb32: @@ add(Stack[-3])
0xb33: Pop(0)
0xb34: Push((int) 3)
0xb35: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xb36: Pop(1)
0xb37: Return(); Pop(2)

0xb38: Stack[-1] = 0
0xb39: PushEmpty(int, int, bool, int, int, bool)
0xb3a: @@ GetItemID(Stack[-3])
0xb3b: Pop(0)
0xb3c: Push("Category")
0xb3d: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0xb3e: Pop(1)
0xb3f: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0xb40: Pop(0)
0xb41: Pop(0); Push((bool) Stack[-1] == 0)
0xb42: IF (Stack[-1] == 0) GOTO 0xb46; Pop(1)

0xb43: @@ DropItems(Stack[-8], Stack[-7])
0xb44: Pop(0)
0xb45: GOTO 0xb4b

0xb46: PushEmpty(int, int)
0xb47: Stack[-2] = Stack[-5]
0xb48: Stack[-1] = Stack[-9]
0xb49: Call2 0xb2d

0xb4a: Pop(2)
0xb4b: Return(); Pop(6)

0xb4c: PushEmpty(object, object)
0xb4d: @ CreateInvItem(Stack[-1])
0xb4e: Pop(0)
0xb4f: @@ SetItemName(Stack[-4])
0xb50: Pop(0)
0xb51: PushEmpty(object, object, int)
0xb52: Stack[-3] = Stack[-8]
0xb53: Stack[-2] = Stack[-4]
0xb54: Stack[-1] = Stack[-6]
0xb55: Call2 0xb39

0xb56: Pop(3)
0xb57: Return(); Pop(2)

0xb58: Stack[-1] = 0
0xb59: PushEmpty(int, bool, int, bool)
0xb5a: @ GetInvItemByName(Stack[-2], Stack[-5])
0xb5b: Pop(0)
0xb5c: @@ HasItem(Stack[-2], Stack[-1])
0xb5d: Pop(0)
0xb5e: Stack[-7] = Stack[-1]
0xb5f: Return(); Pop(4)

0xb60: PushEmpty(object, object)
0xb61: @ FindActor(Stack[-1], Stack[-4])
0xb62: Pop(0)
0xb63: Pop(0); Push((bool) Stack[-1] == 0)
0xb64: IF (Stack[-1] == 0) GOTO 0xb67; Pop(1)

0xb65: Stack[-5] = (bool) 0
0xb66: Return(); Pop(2)

0xb67: @ Trigger(Stack[-1], Stack[-3])
0xb68: Pop(0)
0xb69: Stack[-5] = (bool) 1
0xb6a: Return(); Pop(2)

0xb6b: Stack[-1] = 0
0xb6c: PushEmpty(float, float)
0xb6d: @ GetGameTime(Stack[-1])
0xb6e: Pop(0)
0xb6f: Stack[-3] = Stack[-1]
0xb70: Return(); Pop(2)

0xb71: PushEmpty(float, float)
0xb72: @ GetGameTime(Stack[-1])
0xb73: Pop(0)
0xb74: Push((int) 1)
0xb75: PushEmpty(int)
0xb76: Push((int) 24)
0xb77: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xb78: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xb79: Return(); Pop(2)

0xb7a: PushEmpty()
0xb7b: PushEmpty(int)
0xb7c: Call2 0xb71

0xb7d: Pop(0)
0xb7e: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0xb7f: Return(); Pop(0)

0xb80: PushEmpty(string, string)
0xb81: Stack[-1] = "idle"
0xb82: Push(Stack[-3])
0xb83: IF (Stack[-1] == 0) GOTO 0xb85; Pop(1)

0xb84: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xb85: Stack[-4] = Stack[-1]
0xb86: Return(); Pop(2)

0xb87: PushEmpty(int, bool, int, bool)
0xb88: Stack[-2] = (int) 0
0xb89: Push("all")
0xb8a: PushEmpty(string, int)
0xb8b: Stack[-1] = Stack[-5]
0xb8c: Call2 0xb80

0xb8d: Pop(1)
0xb8e: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xb8f: Pop(2)
0xb90: Pop(0); Push((bool) Stack[-1] == 0)
0xb91: IF (Stack[-1] == 0) GOTO 0xb93; Pop(1)

0xb92: GOTO 0xb96

0xb93: Push((int) 1)
0xb94: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xb95: GOTO 0xb89

0xb96: Stack[-5] = Stack[-2]
0xb97: Return(); Pop(4)

0xb98: Stack[-1] = (int) 515546
0xb99: Return(); Pop(0)

0xb9a: Stack[-1] = (int) 502871
0xb9b: Return(); Pop(0)

0xb9c: Stack[-1] = "ui/NPC_Mishka.png"
0xb9d: Return(); Pop(0)

0xb9e: Stack[-1] = "ui/NPC_Mishka_b.png"
0xb9f: Return(); Pop(0)

0xba0: Stack[-1] = (bool) 1
0xba1: Return(); Pop(0)

0xba2: PushEmpty()
0xba3: Push("avroks blood is given")
0xba4: @ Trace(Stack[-1])
0xba5: Pop(1)
0xba6: PushEmpty(object, string, int)
0xba7: Stack[-3] = Stack[-5]
0xba8: Stack[-2] = "avroks_blood"
0xba9: Stack[-1] = (int) 1
0xbaa: Call2 0xb4c

0xbab: Pop(3)
0xbac: Return(); Pop(0)

0xbad: PushEmpty()
0xbae: Push("oob8Mishka1")
0xbaf: Push((int) 1)
0xbb0: @ SetVariable(Stack[-2], Stack[-1])
0xbb1: Pop(2)
0xbb2: Return(); Pop(0)

0xbb3: PushEmpty()
0xbb4: Push("oob1Mishka1")
0xbb5: Push((int) 1)
0xbb6: @ SetVariable(Stack[-2], Stack[-1])
0xbb7: Pop(2)
0xbb8: Return(); Pop(0)

0xbb9: PushEmpty()
0xbba: Push("b10q04MishkaTalk")
0xbbb: Push((int) 9)
0xbbc: @ SetVariable(Stack[-2], Stack[-1])
0xbbd: Pop(2)
0xbbe: PushEmpty()
0xbbf: Call2 0xccd

0xbc0: Pop(0)
0xbc1: Return(); Pop(0)

0xbc2: PushEmpty()
0xbc3: Push("playsound")
0xbc4: Push("giveitem")
0xbc5: @ TriggerWorld(Stack[-2], Stack[-1])
0xbc6: Pop(2)
0xbc7: Return(); Pop(0)

0xbc8: PushEmpty(object, object)
0xbc9: Push("b10q03")
0xbca: Push((int) 2)
0xbcb: @ SetVariable(Stack[-2], Stack[-1])
0xbcc: Pop(2)
0xbcd: PushEmpty(object)
0xbce: Call2 0xd03

0xbcf: Stack[-2] = Stack[-1]
0xbd0: Pop(1)
0xbd1: Push("b10q03MishkaGotoDoll")
0xbd2: Push("pt_b10q03_plant1")
0xbd3: Push((int) 0)
0xbd4: Push((int) 531262)
0xbd5: PushEmpty(float)
0xbd6: Call2 0xb6c

0xbd7: Pop(0)
0xbd8: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xbd9: Pop(5)
0xbda: PushEmpty()
0xbdb: Call2 0xcb3

0xbdc: Pop(0)
0xbdd: PushEmpty(bool, string, string)
0xbde: Stack[-2] = "quest_b10_03"
0xbdf: Stack[-1] = "place_doll"
0xbe0: Call2 0xb60

0xbe1: Pop(3)
0xbe2: Return(); Pop(2)

0xbe3: Stack[-1] = 0
0xbe4: PushEmpty()
0xbe5: PushEmpty(object, string, float)
0xbe6: PushEmpty(object)
0xbe7: Call2 0xd03

0xbe8: Stack[-4] = Stack[-1]
0xbe9: Pop(1)
0xbea: Stack[-2] = "pt_b10q03_plant1"
0xbeb: Stack[-1] = (int) 2
0xbec: Call2 0xd14

0xbed: Pop(3)
0xbee: PushEmpty(object)
0xbef: Call2 0xd03

0xbf0: Pop(0)
0xbf1: @@ ShowMap(Stack[-1])
0xbf2: Pop(1)
0xbf3: Return(); Pop(0)

0xbf4: PushEmpty()
0xbf5: Push("b10q03")
0xbf6: Push((int) 3)
0xbf7: @ SetVariable(Stack[-2], Stack[-1])
0xbf8: Pop(2)
0xbf9: PushEmpty()
0xbfa: Call2 0xcc0

0xbfb: Pop(0)
0xbfc: PushEmpty(bool, string, string)
0xbfd: Stack[-2] = "quest_b10_03"
0xbfe: Stack[-1] = "place_blood"
0xbff: Call2 0xb60

0xc00: Pop(3)
0xc01: Return(); Pop(0)

0xc02: PushEmpty()
0xc03: PushEmpty()
0xc04: Call2 0xc99

0xc05: Pop(0)
0xc06: PushEmpty(bool, string, string)
0xc07: Stack[-2] = "quest_b10_03"
0xc08: Stack[-1] = "completed"
0xc09: Call2 0xb60

0xc0a: Pop(3)
0xc0b: Return(); Pop(0)

0xc0c: PushEmpty()
0xc0d: PushEmpty()
0xc0e: Call2 0xca6

0xc0f: Pop(0)
0xc10: PushEmpty(bool, string, string)
0xc11: Stack[-2] = "quest_b10_03"
0xc12: Stack[-1] = "fail"
0xc13: Call2 0xb60

0xc14: Pop(3)
0xc15: Return(); Pop(0)

0xc16: PushEmpty(int, int)
0xc17: Push("b10q03_toy_burah")
0xc18: Push((int) 1)
0xc19: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0xc1a: Pop(2)
0xc1b: Return(); Pop(2)

0xc1c: PushEmpty()
0xc1d: Push("oob12Mishka1")
0xc1e: Push((int) 1)
0xc1f: @ SetVariable(Stack[-2], Stack[-1])
0xc20: Pop(2)
0xc21: Return(); Pop(0)

0xc22: PushEmpty()
0xc23: PushEmpty(int, string)
0xc24: Stack[-1] = "b8q01"
0xc25: Call2 0xb28

0xc26: Pop(1)
0xc27: Push((int) 2)
0xc28: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc29: IF (Stack[-1] == 0) GOTO 0xc2c; Pop(1)

0xc2a: Stack[-2] = (bool) 1
0xc2b: Return(); Pop(0)

0xc2c: Stack[-2] = (bool) 0
0xc2d: Return(); Pop(0)

0xc2e: PushEmpty()
0xc2f: PushEmpty(int, string)
0xc30: Stack[-1] = "oob8Mishka1"
0xc31: Call2 0xb28

0xc32: Pop(1)
0xc33: Push((int) 0)
0xc34: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc35: IF (Stack[-1] == 0) GOTO 0xc38; Pop(1)

0xc36: Stack[-2] = (bool) 1
0xc37: Return(); Pop(0)

0xc38: Stack[-2] = (bool) 0
0xc39: Return(); Pop(0)

0xc3a: PushEmpty()
0xc3b: PushEmpty(int, string)
0xc3c: Stack[-1] = "oob1Mishka1"
0xc3d: Call2 0xb28

0xc3e: Pop(1)
0xc3f: Push((int) 0)
0xc40: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc41: IF (Stack[-1] == 0) GOTO 0xc44; Pop(1)

0xc42: Stack[-2] = (bool) 1
0xc43: Return(); Pop(0)

0xc44: Stack[-2] = (bool) 0
0xc45: Return(); Pop(0)

0xc46: PushEmpty()
0xc47: PushEmpty(int, string)
0xc48: Stack[-1] = "b10q04MishkaTalk"
0xc49: Call2 0xb28

0xc4a: Pop(1)
0xc4b: Push((int) 1)
0xc4c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc4d: IF (Stack[-1] == 0) GOTO 0xc50; Pop(1)

0xc4e: Stack[-2] = (bool) 1
0xc4f: Return(); Pop(0)

0xc50: Stack[-2] = (bool) 0
0xc51: Return(); Pop(0)

0xc52: PushEmpty()
0xc53: PushEmpty(int, string)
0xc54: Stack[-1] = "b10q03"
0xc55: Call2 0xb28

0xc56: Pop(1)
0xc57: Push((int) 1)
0xc58: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc59: IF (Stack[-1] == 0) GOTO 0xc5c; Pop(1)

0xc5a: Stack[-2] = (bool) 1
0xc5b: Return(); Pop(0)

0xc5c: Stack[-2] = (bool) 0
0xc5d: Return(); Pop(0)

0xc5e: PushEmpty()
0xc5f: PushEmpty(int, string)
0xc60: Stack[-1] = "b10q03"
0xc61: Call2 0xb28

0xc62: Pop(1)
0xc63: Push((int) 2)
0xc64: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc65: IF (Stack[-1] == 0) GOTO 0xc68; Pop(1)

0xc66: Stack[-2] = (bool) 1
0xc67: Return(); Pop(0)

0xc68: Stack[-2] = (bool) 0
0xc69: Return(); Pop(0)

0xc6a: PushEmpty()
0xc6b: PushEmpty(bool, object, string)
0xc6c: Stack[-2] = Stack[-4]
0xc6d: Stack[-1] = "b10q03_toy_burah"
0xc6e: Call2 0xb59

0xc6f: Pop(2)
0xc70: IF (Stack[-1] == 0) GOTO 0xc73; Pop(1)

0xc71: Stack[-2] = (bool) 1
0xc72: Return(); Pop(0)

0xc73: Stack[-2] = (bool) 0
0xc74: Return(); Pop(0)

0xc75: PushEmpty()
0xc76: PushEmpty(int, string)
0xc77: Stack[-1] = "b10q03"
0xc78: Call2 0xb28

0xc79: Pop(1)
0xc7a: Push((int) 4)
0xc7b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc7c: IF (Stack[-1] == 0) GOTO 0xc7f; Pop(1)

0xc7d: Stack[-2] = (bool) 1
0xc7e: Return(); Pop(0)

0xc7f: Stack[-2] = (bool) 0
0xc80: Return(); Pop(0)

0xc81: PushEmpty()
0xc82: PushEmpty(int, string)
0xc83: Stack[-1] = "b1q05"
0xc84: Call2 0xb28

0xc85: Pop(1)
0xc86: Push((int) 1000)
0xc87: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc88: IF (Stack[-1] == 0) GOTO 0xc8b; Pop(1)

0xc89: Stack[-2] = (bool) 1
0xc8a: Return(); Pop(0)

0xc8b: Stack[-2] = (bool) 0
0xc8c: Return(); Pop(0)

0xc8d: PushEmpty()
0xc8e: PushEmpty(int, string)
0xc8f: Stack[-1] = "oob12Mishka1"
0xc90: Call2 0xb28

0xc91: Pop(1)
0xc92: Push((int) 0)
0xc93: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc94: IF (Stack[-1] == 0) GOTO 0xc97; Pop(1)

0xc95: Stack[-2] = (bool) 1
0xc96: Return(); Pop(0)

0xc97: Stack[-2] = (bool) 0
0xc98: Return(); Pop(0)

0xc99: PushEmpty(object, object)
0xc9a: Push((int) 605)
0xc9b: Push((int) 2)
0xc9c: Push((int) 531184)
0xc9d: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc9e: Pop(3)
0xc9f: PushEmpty(bool, object, int)
0xca0: Stack[-2] = Stack[-4]
0xca1: Stack[-1] = (int) 594
0xca2: Call2 0xce7

0xca3: Pop(3)
0xca4: Return(); Pop(2)

0xca5: Stack[-1] = 0
0xca6: PushEmpty(object, object)
0xca7: Push((int) 607)
0xca8: Push((int) 2)
0xca9: Push((int) 531500)
0xcaa: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xcab: Pop(3)
0xcac: PushEmpty(bool, object, int)
0xcad: Stack[-2] = Stack[-4]
0xcae: Stack[-1] = (int) 594
0xcaf: Call2 0xce7

0xcb0: Pop(3)
0xcb1: Return(); Pop(2)

0xcb2: Stack[-1] = 0
0xcb3: PushEmpty(object, object)
0xcb4: Push((int) 596)
0xcb5: Push((int) 2)
0xcb6: Push((int) 531147)
0xcb7: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xcb8: Pop(3)
0xcb9: PushEmpty(bool, object, int)
0xcba: Stack[-2] = Stack[-4]
0xcbb: Stack[-1] = (int) 594
0xcbc: Call2 0xce7

0xcbd: Pop(3)
0xcbe: Return(); Pop(2)

0xcbf: Stack[-1] = 0
0xcc0: PushEmpty(object, object)
0xcc1: Push((int) 603)
0xcc2: Push((int) 2)
0xcc3: Push((int) 531182)
0xcc4: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xcc5: Pop(3)
0xcc6: PushEmpty(bool, object, int)
0xcc7: Stack[-2] = Stack[-4]
0xcc8: Stack[-1] = (int) 594
0xcc9: Call2 0xce7

0xcca: Pop(3)
0xccb: Return(); Pop(2)

0xccc: Stack[-1] = 0
0xccd: PushEmpty(object, object)
0xcce: Push((int) 558)
0xccf: Push((int) 2)
0xcd0: Push((int) 530537)
0xcd1: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xcd2: Pop(3)
0xcd3: PushEmpty(bool, object, int)
0xcd4: Stack[-2] = Stack[-4]
0xcd5: Stack[-1] = (int) 549
0xcd6: Call2 0xce7

0xcd7: Pop(3)
0xcd8: Return(); Pop(2)

0xcd9: Stack[-1] = 0
0xcda: PushEmpty(object, object)
0xcdb: @ GetDiaryRoot(Stack[-1])
0xcdc: Pop(0)
0xcdd: Pop(0); Push((bool) Stack[-1] == 0)
0xcde: IF (Stack[-1] == 0) GOTO 0xce4; Pop(1)

0xcdf: Push("Can't retrieve diary root")
0xce0: @ Trace(Stack[-1])
0xce1: Pop(1)
0xce2: Stack[-3] = (bool) 0
0xce3: Return(); Pop(2)

0xce4: Stack[-3] = Stack[-1]
0xce5: Return(); Pop(2)

0xce6: Stack[-1] = 0
0xce7: PushEmpty(object, object, int, object, object, int)
0xce8: PushEmpty(object)
0xce9: Call2 0xcda

0xcea: Stack[-4] = Stack[-1]
0xceb: Pop(1)
0xcec: @@ Find(Stack[-7], Stack[-2])
0xced: Pop(0)
0xcee: Pop(0); Push((bool) Stack[-2] == 0)
0xcef: IF (Stack[-1] == 0) GOTO 0xcf6; Pop(1)

0xcf0: Push("Can't find diary parent with id: ")
0xcf1: Pop(1); Push(Stack[-1] + Stack[-8]);
0xcf2: @ Trace(Stack[-1])
0xcf3: Pop(1)
0xcf4: Stack[-9] = (bool) 0
0xcf5: Return(); Pop(6)

0xcf6: @@ AddChild(Stack[-8])
0xcf7: Pop(0)
0xcf8: Push((int) 7)
0xcf9: @ SendWorldWndMessage(Stack[-1])
0xcfa: Pop(1)
0xcfb: @@ GetCategory(Stack[-1])
0xcfc: Pop(0)
0xcfd: @ SetDiarySection(Stack[-1])
0xcfe: Pop(0)
0xcff: Stack[-9] = (bool) 0
0xd00: Return(); Pop(6)

0xd01: Stack[-2] = 0
0xd02: Stack[-3] = 0
0xd03: PushEmpty(object, object, object, object)
0xd04: @ GetMainOutdoorScene(Stack[-2])
0xd05: Pop(0)
0xd06: Pop(0); Push((bool) Stack[-2] == 0)
0xd07: IF (Stack[-1] == 0) GOTO 0xd0e; Pop(1)

0xd08: Push("Can't find main outdoor scene")
0xd09: @ Trace(Stack[-1])
0xd0a: Pop(1)
0xd0b: Stack[-1] = 0
0xd0c: Stack[-5] = Stack[-1]
0xd0d: Return(); Pop(4)

0xd0e: @@ GetMap(Stack[-1])
0xd0f: Pop(0)
0xd10: Stack[-5] = Stack[-1]
0xd11: Return(); Pop(4)

0xd12: Stack[-1] = 0
0xd13: Stack[-2] = 0
0xd14: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0xd15: @ GetMainOutdoorScene(Stack[-2])
0xd16: Pop(0)
0xd17: Pop(0); Push((bool) Stack[-2] == 0)
0xd18: IF (Stack[-1] == 0) GOTO 0xd1d; Pop(1)

0xd19: Push("Can't find main outdoor scene")
0xd1a: @ Trace(Stack[-1])
0xd1b: Pop(1)
0xd1c: Return(); Pop(8)

0xd1d: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0xd1e: Pop(0)
0xd1f: Pop(0); Push((bool) Stack[-1] == 0)
0xd20: IF (Stack[-1] == 0) GOTO 0xd27; Pop(1)

0xd21: Push("Warning: outdoor scene locator ")
0xd22: Pop(1); Push(Stack[-1] + Stack[-11]);
0xd23: Push(" doesnt exist")
0xd24: Pop(2); Push(Stack[-2] + Stack[-1]);
0xd25: @ Trace(Stack[-1])
0xd26: Pop(1)
0xd27: @@ GetMap(Stack[-11])
0xd28: Pop(0)
0xd29: Pop(0); Push((bool) Stack[-11] == 0)
0xd2a: IF (Stack[-1] == 0) GOTO 0xd2f; Pop(1)

0xd2b: Push("Can't find map")
0xd2c: @ Trace(Stack[-1])
0xd2d: Pop(1)
0xd2e: Return(); Pop(8)

0xd2f: Push(CvectorIndex(Stack[-4], 0))
0xd30: Push(CvectorIndex(Stack[-5], 2))
0xd31: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0xd32: Pop(2)
0xd33: Return(); Pop(8)

0xd34: Stack[-2] = 0
0xd35: PushEmpty(int, int)
0xd36: Push("branch")
0xd37: @ GetVariable(Stack[-1], Stack[-2])
0xd38: Pop(1)
0xd39: Push((int) 0)
0xd3a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd3b: IF (Stack[-1] == 0) GOTO 0xd3f; Pop(1)

0xd3c: Stack[-3] = (int) 1
0xd3d: Return(); Pop(2)

0xd3e: GOTO 0xd44

0xd3f: Push((int) 1)
0xd40: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd41: IF (Stack[-1] == 0) GOTO 0xd44; Pop(1)

0xd42: Stack[-3] = (int) 2
0xd43: Return(); Pop(2)

0xd44: Stack[-3] = (int) 3
0xd45: Return(); Pop(2)

0xd46: PushEmpty()
0xd47: Push(GlobalVars[1])
0xd48: Pop(1); Push((bool) Stack[-1] == 0)
0xd49: IF (Stack[-1] == 0) GOTO 0xd53; Pop(1)

0xd4a: PushEmpty(int, object)
0xd4b: Stack[-1] = Stack[-3]
0xd4c: Push(-2, 1); TaskCall(0)
0xd4d: Call2 0x0

0xd4e: Pop(-2, 1); TaskReturn
0xd4f: Pop(2)
0xd50: Push(GlobalVars[1])
0xd51: Stack[-1] = (bool) 1
0xd52: GlobalVars[1] = Stack[-1]; Pop(1)
0xd53: PushEmpty(bool, int)
0xd54: Stack[-1] = (int) 1
0xd55: Call2 0xb7a

0xd56: Pop(1)
0xd57: IF (Stack[-1] == 0) GOTO 0xd5f; Pop(1)

0xd58: PushEmpty(int, object)
0xd59: Stack[-1] = Stack[-3]
0xd5a: Push(-2, 1); TaskCall(4)
0xd5b: Call2 0x29a

0xd5c: Pop(-2, 1); TaskReturn
0xd5d: Pop(2)
0xd5e: Return(); Pop(0)

0xd5f: PushEmpty(bool, int)
0xd60: Stack[-1] = (int) 8
0xd61: Call2 0xb7a

0xd62: Pop(1)
0xd63: IF (Stack[-1] == 0) GOTO 0xd6b; Pop(1)

0xd64: PushEmpty(int, object)
0xd65: Stack[-1] = Stack[-3]
0xd66: Push(-2, 1); TaskCall(2)
0xd67: Call2 0xef

0xd68: Pop(-2, 1); TaskReturn
0xd69: Pop(2)
0xd6a: Return(); Pop(0)

0xd6b: PushEmpty(bool, int)
0xd6c: Stack[-1] = (int) 10
0xd6d: Call2 0xb7a

0xd6e: Pop(1)
0xd6f: IF (Stack[-1] == 0) GOTO 0xd77; Pop(1)

0xd70: PushEmpty(int, object)
0xd71: Stack[-1] = Stack[-3]
0xd72: Push(-2, 1); TaskCall(6)
0xd73: Call2 0x407

0xd74: Pop(-2, 1); TaskReturn
0xd75: Pop(2)
0xd76: Return(); Pop(0)

0xd77: PushEmpty(bool, int)
0xd78: Stack[-1] = (int) 12
0xd79: Call2 0xb7a

0xd7a: Pop(1)
0xd7b: IF (Stack[-1] == 0) GOTO 0xd83; Pop(1)

0xd7c: PushEmpty(int, object)
0xd7d: Stack[-1] = Stack[-3]
0xd7e: Push(-2, 1); TaskCall(8)
0xd7f: Call2 0x6e8

0xd80: Pop(-2, 1); TaskReturn
0xd81: Pop(2)
0xd82: Return(); Pop(0)

0xd83: PushEmpty(int, object)
0xd84: Stack[-1] = Stack[-3]
0xd85: Push(-2, 1); TaskCall(10)
0xd86: Call2 0x814

0xd87: Pop(-2, 1); TaskReturn
0xd88: Pop(2)
0xd89: Return(); Pop(0)

