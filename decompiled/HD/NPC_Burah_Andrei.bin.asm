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
	oob2Andrei1
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

RunOp = 0x8d8
RunTask = 13

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 1
		EVENT_11 Op = 0x1a Vars = (int)
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xc4 Vars = (int, int)
	GTASK_3 Vars = (object) Params = 2
	GTASK_4 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x25c Vars = (int, int)
	GTASK_5 Vars = (object) Params = 2
	GTASK_6 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x581 Vars = (int, int)
	GTASK_7 Vars = (object) Params = 2
	GTASK_8 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x6d8 Vars = (int, int)
	GTASK_9 Vars = (object) Params = 2
	GTASK_10 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x7b0 Vars = (int, int)
	GTASK_11 Vars = (object) Params = 2
	GTASK_12 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x8ae Vars = (int, int)
	GTASK_13 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x921 Vars = (int)
		EVENT_6 Op = 0x947 Vars = ()
		EVENT_5 Op = 0x956 Vars = ()
		EVENT_45 Op = 0x963 Vars = (bool)
		EVENT_0 Op = 0x96f Vars = (object)


0x0: PushEmpty()
0x1: @ DoTrade()
0x2: Pop(0)
0x3: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x4: PushEmpty(bool)
0x5: Call2 0xbe5

0x6: Pop(0)
0x7: IF (Stack[-1] == 0) GOTO 0xf; Pop(1)

0x8: PushEmpty(string)
0x9: Stack[-1] = "Neutral"
0xa: Call2 0xb1d

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
0x1c: Call2 0xbe5

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
0x2d: Call2 0x9ff

0x2e: Pop(2)
0x2f: Pop(1); Push((bool) Stack[-1] == 0)
0x30: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x31: Stack[-10] = (int) -2
0x32: Return(); Pop(8)

0x33: @ CreateDialog(Stack[-4])
0x34: Pop(0)
0x35: PushEmpty(int)
0x36: Call2 0xbdf

0x37: Pop(0)
0x38: @@ SetNPCName(Stack[-1])
0x39: Pop(1)
0x3a: PushEmpty(int)
0x3b: Call2 0xbdd

0x3c: Pop(0)
0x3d: @@ SetNPCDescription(Stack[-1])
0x3e: Pop(1)
0x3f: PushEmpty(string)
0x40: Call2 0xbe1

0x41: Pop(0)
0x42: @@ SetPhoto(Stack[-1])
0x43: Pop(1)
0x44: PushEmpty(string)
0x45: Call2 0xbe3

0x46: Pop(0)
0x47: @@ SetPhoto2(Stack[-1])
0x48: Pop(1)
0x49: PushEmpty(int)
0x4a: Call2 0xdd3

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
0x59: Call2 0xb6c

0x5a: Stack[-2] = Stack[-1]
0x5b: Pop(1)
0x5c: Call2 0xa56

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
0x70: Call2 0xa44

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
0x7e: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x7f: PushEmpty(string)
0x80: Stack[-1] = "Neutral"
0x81: Call2 0xae

0x82: Pop(1)
0x83: Push((int) 517994)
0x84: @@ SetMessage(Stack[-1])
0x85: Pop(1)
0x86: @@ ClearReplies()
0x87: Pop(0)
0x88: Push((int) 517995)
0x89: Push((int) 23147)
0x8a: Push((int) 19128)
0x8b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8c: Pop(3)
0x8d: GOTO 0x90

0x8e: Return(); Pop(0)

0x8f: GOTO 0x7d

0x90: PushEmpty(bool)
0x91: Call2 0xbe5

0x92: Pop(0)
0x93: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x94: @ lshWaitForAnimEnd()
0x95: Pop(0)
0x96: Push( Stack[3 + Tasks[-1].StackPointer] )
0x97: IF (Stack[-1] == 0) GOTO 0x99; Pop(1)

0x98: GOTO 0x9e

0x99: PushEmpty(string)
0x9a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x9b: Call2 0xb1d

0x9c: Pop(1)
0x9d: GOTO 0x94

0x9e: GOTO 0xad

0x9f: Push("all")
0xa0: Push("idle")
0xa1: @ PlayAnimation(Stack[-2], Stack[-1])
0xa2: Pop(2)
0xa3: @ WaitForAnimEnd()
0xa4: Pop(0)
0xa5: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa6: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa7: GOTO 0xad

0xa8: Push("all")
0xa9: Push("idle")
0xaa: @ PlayAnimation(Stack[-2], Stack[-1])
0xab: Pop(2)
0xac: GOTO 0xa3

0xad: Return(); Pop(0)

0xae: PushEmpty()
0xaf: PushEmpty(bool)
0xb0: Call2 0xbe5

0xb1: Pop(0)
0xb2: Pop(1); Push((bool) Stack[-1] == 0)
0xb3: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xb4: Return(); Pop(0)

0xb5: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xb6: IF (Stack[-1] == 0) GOTO 0xb8; Pop(1)

0xb7: Return(); Pop(0)

0xb8: PushEmpty(string, bool)
0xb9: Stack[-2] = Stack[-3]
0xba: Push("")
0xbb: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xbc: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xbd: Stack[-1] = (bool) 0
0xbe: GOTO 0xc0

0xbf: Stack[-1] = (bool) 1
0xc0: Call2 0xb2d

0xc1: Pop(2)
0xc2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xc3: Return(); Pop(0)

0xc4: PushEmpty()
0xc5: Push((int) 1)
0xc6: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0xc7: PushEmpty()
0xc8: Call2 0xb4b

0xc9: Pop(0)
0xca: Push((int) 19127)
0xcb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcc: IF (Stack[-1] == 0) GOTO 0xdc; Pop(1)

0xcd: PushEmpty(string)
0xce: Stack[-1] = "Neutral"
0xcf: Call2 0xae

0xd0: Pop(1)
0xd1: Push((int) 517994)
0xd2: @@ SetMessage(Stack[-1])
0xd3: Pop(1)
0xd4: @@ ClearReplies()
0xd5: Pop(0)
0xd6: Push((int) 517995)
0xd7: Push((int) 23147)
0xd8: Push((int) 19128)
0xd9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xda: Pop(3)
0xdb: Return(); Pop(0)

0xdc: Push((int) 23147)
0xdd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xde: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xdf: PushEmpty(string)
0xe0: Stack[-1] = "Smile"
0xe1: Call2 0xae

0xe2: Pop(1)
0xe3: Push((int) 521978)
0xe4: @@ SetMessage(Stack[-1])
0xe5: Pop(1)
0xe6: @@ ClearReplies()
0xe7: Pop(0)
0xe8: Push((int) 521979)
0xe9: Push((int) 23149)
0xea: Push((int) 23148)
0xeb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xec: Pop(3)
0xed: Push((int) 521984)
0xee: Push((int) -1)
0xef: Push((int) 23153)
0xf0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf1: Pop(3)
0xf2: Return(); Pop(0)

0xf3: Push((int) 23149)
0xf4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf5: IF (Stack[-1] == 0) GOTO 0x10a; Pop(1)

0xf6: PushEmpty(string)
0xf7: Stack[-1] = "Smile"
0xf8: Call2 0xae

0xf9: Pop(1)
0xfa: Push((int) 521980)
0xfb: @@ SetMessage(Stack[-1])
0xfc: Pop(1)
0xfd: @@ ClearReplies()
0xfe: Pop(0)
0xff: Push((int) 521981)
0x100: Push((int) 23151)
0x101: Push((int) 23150)
0x102: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x103: Pop(3)
0x104: Push((int) 521985)
0x105: Push((int) 23157)
0x106: Push((int) 23154)
0x107: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x108: Pop(3)
0x109: Return(); Pop(0)

0x10a: Push((int) 23151)
0x10b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10c: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0x10d: PushEmpty(string)
0x10e: Stack[-1] = "Smile"
0x10f: Call2 0xae

0x110: Pop(1)
0x111: Push((int) 521982)
0x112: @@ SetMessage(Stack[-1])
0x113: Pop(1)
0x114: @@ ClearReplies()
0x115: Pop(0)
0x116: Push((int) 521987)
0x117: Push((int) -1)
0x118: Push((int) 23156)
0x119: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11a: Pop(3)
0x11b: Push((int) 521983)
0x11c: Push((int) 23157)
0x11d: Push((int) 23152)
0x11e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11f: Pop(3)
0x120: Push((int) 521986)
0x121: Push((int) -1)
0x122: Push((int) 23155)
0x123: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x124: Pop(3)
0x125: Return(); Pop(0)

0x126: Push((int) 23157)
0x127: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x128: IF (Stack[-1] == 0) GOTO 0x13d; Pop(1)

0x129: PushEmpty(string)
0x12a: Stack[-1] = "What"
0x12b: Call2 0xae

0x12c: Pop(1)
0x12d: Push((int) 521988)
0x12e: @@ SetMessage(Stack[-1])
0x12f: Pop(1)
0x130: @@ ClearReplies()
0x131: Pop(0)
0x132: Push((int) 521989)
0x133: Push((int) -1)
0x134: Push((int) 23158)
0x135: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x136: Pop(3)
0x137: Push((int) 521990)
0x138: Push((int) -1)
0x139: Push((int) 23159)
0x13a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13b: Pop(3)
0x13c: Return(); Pop(0)

0x13d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x13e: PushEmpty(bool)
0x13f: Call2 0xbe5

0x140: Pop(0)
0x141: IF (Stack[-1] == 0) GOTO 0x145; Pop(1)

0x142: @ lshStopAnimation()
0x143: Pop(0)
0x144: GOTO 0x147

0x145: @ StopAnimation()
0x146: Pop(0)
0x147: Return(); Pop(0)

0x148: GOTO 0xc5

0x149: Return(); Pop(0)

0x14a: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x14b: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x14c: PushEmpty(bool, object, float)
0x14d: Stack[-2] = Stack[-12]
0x14e: Stack[-1] = (float) 70.0
0x14f: Call2 0x9ff

0x150: Pop(2)
0x151: Pop(1); Push((bool) Stack[-1] == 0)
0x152: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0x153: Stack[-10] = (int) -2
0x154: Return(); Pop(8)

0x155: @ CreateDialog(Stack[-4])
0x156: Pop(0)
0x157: PushEmpty(int)
0x158: Call2 0xbdf

0x159: Pop(0)
0x15a: @@ SetNPCName(Stack[-1])
0x15b: Pop(1)
0x15c: PushEmpty(int)
0x15d: Call2 0xbdd

0x15e: Pop(0)
0x15f: @@ SetNPCDescription(Stack[-1])
0x160: Pop(1)
0x161: PushEmpty(string)
0x162: Call2 0xbe1

0x163: Pop(0)
0x164: @@ SetPhoto(Stack[-1])
0x165: Pop(1)
0x166: PushEmpty(string)
0x167: Call2 0xbe3

0x168: Pop(0)
0x169: @@ SetPhoto2(Stack[-1])
0x16a: Pop(1)
0x16b: PushEmpty(int)
0x16c: Call2 0xdd3

0x16d: Pop(0)
0x16e: @@ SetPlayerName(Stack[-1])
0x16f: Pop(1)
0x170: Stack[-2] = (int) -1
0x171: @ IsOverrideActive(Stack[-3])
0x172: Pop(0)
0x173: Push(Stack[-3])
0x174: IF (Stack[-1] == 0) GOTO 0x177; Pop(1)

0x175: Stack[-10] = (int) -2
0x176: Return(); Pop(8)

0x177: @ DoDialog(Stack[-4])
0x178: Pop(0)
0x179: PushEmpty(bool, object)
0x17a: PushEmpty(object)
0x17b: Call2 0xb6c

0x17c: Stack[-2] = Stack[-1]
0x17d: Pop(1)
0x17e: Call2 0xa56

0x17f: Pop(2)
0x180: PushEmpty(object, object)
0x181: Stack[-2] = Stack[-11]
0x182: Stack[-1] = Stack[-6]
0x183: Push(-2, 4); TaskCall(4)
0x184: Call2 0x19b

0x185: Pop(-2, 4); TaskReturn
0x186: Pop(2)
0x187: @@ IsDialogEnd(Stack[-1])
0x188: Pop(0)
0x189: Pop(0); Push((bool) Stack[-1] == 0)
0x18a: IF (Stack[-1] == 0) GOTO 0x190; Pop(1)

0x18b: @ sync()
0x18c: Pop(0)
0x18d: @@ IsDialogEnd(Stack[-1])
0x18e: Pop(0)
0x18f: GOTO 0x189

0x190: PushEmpty(object)
0x191: Stack[-1] = Stack[-10]
0x192: Call2 0xa44

0x193: Pop(1)
0x194: @ StopDialog(Stack[-4])
0x195: Pop(0)
0x196: @@ GetReturnValue(Stack[-2])
0x197: Pop(0)
0x198: Stack[-10] = Stack[-2]
0x199: Return(); Pop(8)

0x19a: Stack[-4] = 0
0x19b: PushEmpty()
0x19c: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x19d: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x19e: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x19f: Push((int) 1)
0x1a0: IF (Stack[-1] == 0) GOTO 0x228; Pop(1)

0x1a1: PushEmpty(bool, object)
0x1a2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a3: Call2 0xc6f

0x1a4: Pop(1)
0x1a5: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1a6: PushEmpty(object, object)
0x1a7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1a8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1a9: Call2 0xc03

0x1aa: Pop(2)
0x1ab: PushEmpty(object, object)
0x1ac: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1ad: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ae: Call2 0xc36

0x1af: Pop(2)
0x1b0: PushEmpty(string)
0x1b1: Stack[-1] = "Neutral"
0x1b2: Call2 0x246

0x1b3: Pop(1)
0x1b4: Push((int) 531038)
0x1b5: @@ SetMessage(Stack[-1])
0x1b6: Pop(1)
0x1b7: @@ ClearReplies()
0x1b8: Pop(0)
0x1b9: Push((int) 531227)
0x1ba: Push((int) 32541)
0x1bb: Push((int) 32540)
0x1bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1bd: Pop(3)
0x1be: Push((int) 531231)
0x1bf: Push((int) 32545)
0x1c0: Push((int) 32544)
0x1c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c2: Pop(3)
0x1c3: GOTO 0x228

0x1c4: PushEmpty(string)
0x1c5: Stack[-1] = "Smile"
0x1c6: Call2 0x246

0x1c7: Pop(1)
0x1c8: Push((int) 518214)
0x1c9: @@ SetMessage(Stack[-1])
0x1ca: Pop(1)
0x1cb: @@ ClearReplies()
0x1cc: Pop(0)
0x1cd: PushEmpty(bool, object)
0x1ce: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1cf: Call2 0xc87

0x1d0: Pop(1)
0x1d1: IF (Stack[-1] == 0) GOTO 0x1d7; Pop(1)

0x1d2: Push((int) 531041)
0x1d3: Push((int) 32373)
0x1d4: Push((int) 32372)
0x1d5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d6: Pop(3)
0x1d7: PushEmpty(bool)
0x1d8: Stack[-1] = (bool) 0
0x1d9: PushEmpty(bool)
0x1da: Stack[-1] = (bool) 0
0x1db: PushEmpty(bool, object)
0x1dc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1dd: Call2 0xc93

0x1de: Pop(1)
0x1df: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1e0: PushEmpty(bool, object)
0x1e1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1e2: Call2 0xc7b

0x1e3: Pop(1)
0x1e4: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1e5: Stack[-1] = (bool) 1
0x1e6: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1e7: PushEmpty(bool, object)
0x1e8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1e9: Call2 0xcb5

0x1ea: Pop(1)
0x1eb: Pop(1); Push((bool) Stack[-1] == 0)
0x1ec: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1ed: Stack[-1] = (bool) 1
0x1ee: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1ef: Push((int) 531048)
0x1f0: Push((int) 32378)
0x1f1: Push((int) 32377)
0x1f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f3: Pop(3)
0x1f4: PushEmpty(bool)
0x1f5: Stack[-1] = (bool) 0
0x1f6: PushEmpty(bool)
0x1f7: Stack[-1] = (bool) 0
0x1f8: PushEmpty(bool, object)
0x1f9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1fa: Call2 0xca9

0x1fb: Pop(1)
0x1fc: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0x1fd: PushEmpty(bool, object)
0x1fe: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ff: Call2 0xc9d

0x200: Pop(1)
0x201: Pop(1); Push((bool) Stack[-1] == 0)
0x202: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0x203: Stack[-1] = (bool) 1
0x204: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x205: PushEmpty(bool, object)
0x206: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x207: Call2 0xcc1

0x208: Pop(1)
0x209: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x20a: Stack[-1] = (bool) 1
0x20b: IF (Stack[-1] == 0) GOTO 0x211; Pop(1)

0x20c: Push((int) 531081)
0x20d: Push((int) 32402)
0x20e: Push((int) 32401)
0x20f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x210: Pop(3)
0x211: PushEmpty(bool, object)
0x212: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x213: Call2 0xce5

0x214: Pop(1)
0x215: IF (Stack[-1] == 0) GOTO 0x21b; Pop(1)

0x216: Push((int) 519410)
0x217: Push((int) 20576)
0x218: Push((int) 20575)
0x219: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21a: Pop(3)
0x21b: Push((int) 518215)
0x21c: Push((int) 20584)
0x21d: Push((int) 19328)
0x21e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21f: Pop(3)
0x220: Push((int) 518216)
0x221: Push((int) -1)
0x222: Push((int) 19329)
0x223: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x224: Pop(3)
0x225: GOTO 0x228

0x226: Return(); Pop(0)

0x227: GOTO 0x19f

0x228: PushEmpty(bool)
0x229: Call2 0xbe5

0x22a: Pop(0)
0x22b: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x22c: @ lshWaitForAnimEnd()
0x22d: Pop(0)
0x22e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x22f: IF (Stack[-1] == 0) GOTO 0x231; Pop(1)

0x230: GOTO 0x236

0x231: PushEmpty(string)
0x232: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x233: Call2 0xb1d

0x234: Pop(1)
0x235: GOTO 0x22c

0x236: GOTO 0x245

0x237: Push("all")
0x238: Push("idle")
0x239: @ PlayAnimation(Stack[-2], Stack[-1])
0x23a: Pop(2)
0x23b: @ WaitForAnimEnd()
0x23c: Pop(0)
0x23d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x23e: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x23f: GOTO 0x245

0x240: Push("all")
0x241: Push("idle")
0x242: @ PlayAnimation(Stack[-2], Stack[-1])
0x243: Pop(2)
0x244: GOTO 0x23b

0x245: Return(); Pop(0)

0x246: PushEmpty()
0x247: PushEmpty(bool)
0x248: Call2 0xbe5

0x249: Pop(0)
0x24a: Pop(1); Push((bool) Stack[-1] == 0)
0x24b: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x24c: Return(); Pop(0)

0x24d: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x24e: IF (Stack[-1] == 0) GOTO 0x250; Pop(1)

0x24f: Return(); Pop(0)

0x250: PushEmpty(string, bool)
0x251: Stack[-2] = Stack[-3]
0x252: Push("")
0x253: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x254: IF (Stack[-1] == 0) GOTO 0x257; Pop(1)

0x255: Stack[-1] = (bool) 0
0x256: GOTO 0x258

0x257: Stack[-1] = (bool) 1
0x258: Call2 0xb2d

0x259: Pop(2)
0x25a: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x25b: Return(); Pop(0)

0x25c: PushEmpty()
0x25d: Push((int) 1)
0x25e: IF (Stack[-1] == 0) GOTO 0x4cc; Pop(1)

0x25f: PushEmpty()
0x260: Call2 0xb4b

0x261: Pop(0)
0x262: Push((int) 32376)
0x263: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x264: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x265: PushEmpty(object, object)
0x266: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x267: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x268: Call2 0xc09

0x269: Pop(2)
0x26a: Push((int) 32374)
0x26b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x26c: IF (Stack[-1] == 0) GOTO 0x272; Pop(1)

0x26d: PushEmpty(object, object)
0x26e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x26f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x270: Call2 0xc09

0x271: Pop(2)
0x272: Push((int) 32379)
0x273: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x274: IF (Stack[-1] == 0) GOTO 0x28e; Pop(1)

0x275: PushEmpty(object, object)
0x276: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x277: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x278: Call2 0xc1a

0x279: Pop(2)
0x27a: PushEmpty(object, object)
0x27b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x27c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x27d: Call2 0xbf3

0x27e: Pop(2)
0x27f: PushEmpty(object, object)
0x280: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x281: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x282: Call2 0xbfd

0x283: Pop(2)
0x284: PushEmpty(object, object)
0x285: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x286: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x287: Call2 0xc58

0x288: Pop(2)
0x289: PushEmpty(object, object)
0x28a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x28b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x28c: Call2 0xc3c

0x28d: Pop(2)
0x28e: Push((int) 32401)
0x28f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x290: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0x291: PushEmpty(object, object)
0x292: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x293: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x294: Call2 0xc64

0x295: Pop(2)
0x296: Push((int) 32403)
0x297: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x298: IF (Stack[-1] == 0) GOTO 0x29e; Pop(1)

0x299: PushEmpty(object, object)
0x29a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x29b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x29c: Call2 0xc4c

0x29d: Pop(2)
0x29e: Push((int) 20575)
0x29f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2a0: IF (Stack[-1] == 0) GOTO 0x2a6; Pop(1)

0x2a1: PushEmpty(object, object)
0x2a2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2a3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2a4: Call2 0xbed

0x2a5: Pop(2)
0x2a6: Push((int) 20587)
0x2a7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2a8: IF (Stack[-1] == 0) GOTO 0x2ae; Pop(1)

0x2a9: PushEmpty(object, object)
0x2aa: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2ab: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2ac: Call2 0xc6a

0x2ad: Pop(2)
0x2ae: Push((int) 32369)
0x2af: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2b0: IF (Stack[-1] == 0) GOTO 0x336; Pop(1)

0x2b1: PushEmpty(bool, object)
0x2b2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2b3: Call2 0xc6f

0x2b4: Pop(1)
0x2b5: IF (Stack[-1] == 0) GOTO 0x2d4; Pop(1)

0x2b6: PushEmpty(object, object)
0x2b7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2b8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2b9: Call2 0xc03

0x2ba: Pop(2)
0x2bb: PushEmpty(object, object)
0x2bc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2bd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2be: Call2 0xc36

0x2bf: Pop(2)
0x2c0: PushEmpty(string)
0x2c1: Stack[-1] = "Neutral"
0x2c2: Call2 0x246

0x2c3: Pop(1)
0x2c4: Push((int) 531038)
0x2c5: @@ SetMessage(Stack[-1])
0x2c6: Pop(1)
0x2c7: @@ ClearReplies()
0x2c8: Pop(0)
0x2c9: Push((int) 531227)
0x2ca: Push((int) 32541)
0x2cb: Push((int) 32540)
0x2cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2cd: Pop(3)
0x2ce: Push((int) 531231)
0x2cf: Push((int) 32545)
0x2d0: Push((int) 32544)
0x2d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d2: Pop(3)
0x2d3: Return(); Pop(0)

0x2d4: PushEmpty(string)
0x2d5: Stack[-1] = "Smile"
0x2d6: Call2 0x246

0x2d7: Pop(1)
0x2d8: Push((int) 518214)
0x2d9: @@ SetMessage(Stack[-1])
0x2da: Pop(1)
0x2db: @@ ClearReplies()
0x2dc: Pop(0)
0x2dd: PushEmpty(bool, object)
0x2de: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2df: Call2 0xc87

0x2e0: Pop(1)
0x2e1: IF (Stack[-1] == 0) GOTO 0x2e7; Pop(1)

0x2e2: Push((int) 531041)
0x2e3: Push((int) 32373)
0x2e4: Push((int) 32372)
0x2e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e6: Pop(3)
0x2e7: PushEmpty(bool)
0x2e8: Stack[-1] = (bool) 0
0x2e9: PushEmpty(bool)
0x2ea: Stack[-1] = (bool) 0
0x2eb: PushEmpty(bool, object)
0x2ec: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2ed: Call2 0xc93

0x2ee: Pop(1)
0x2ef: IF (Stack[-1] == 0) GOTO 0x2f6; Pop(1)

0x2f0: PushEmpty(bool, object)
0x2f1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2f2: Call2 0xc7b

0x2f3: Pop(1)
0x2f4: IF (Stack[-1] == 0) GOTO 0x2f6; Pop(1)

0x2f5: Stack[-1] = (bool) 1
0x2f6: IF (Stack[-1] == 0) GOTO 0x2fe; Pop(1)

0x2f7: PushEmpty(bool, object)
0x2f8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2f9: Call2 0xcb5

0x2fa: Pop(1)
0x2fb: Pop(1); Push((bool) Stack[-1] == 0)
0x2fc: IF (Stack[-1] == 0) GOTO 0x2fe; Pop(1)

0x2fd: Stack[-1] = (bool) 1
0x2fe: IF (Stack[-1] == 0) GOTO 0x304; Pop(1)

0x2ff: Push((int) 531048)
0x300: Push((int) 32378)
0x301: Push((int) 32377)
0x302: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x303: Pop(3)
0x304: PushEmpty(bool)
0x305: Stack[-1] = (bool) 0
0x306: PushEmpty(bool)
0x307: Stack[-1] = (bool) 0
0x308: PushEmpty(bool, object)
0x309: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x30a: Call2 0xca9

0x30b: Pop(1)
0x30c: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x30d: PushEmpty(bool, object)
0x30e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x30f: Call2 0xc9d

0x310: Pop(1)
0x311: Pop(1); Push((bool) Stack[-1] == 0)
0x312: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x313: Stack[-1] = (bool) 1
0x314: IF (Stack[-1] == 0) GOTO 0x31b; Pop(1)

0x315: PushEmpty(bool, object)
0x316: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x317: Call2 0xcc1

0x318: Pop(1)
0x319: IF (Stack[-1] == 0) GOTO 0x31b; Pop(1)

0x31a: Stack[-1] = (bool) 1
0x31b: IF (Stack[-1] == 0) GOTO 0x321; Pop(1)

0x31c: Push((int) 531081)
0x31d: Push((int) 32402)
0x31e: Push((int) 32401)
0x31f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x320: Pop(3)
0x321: PushEmpty(bool, object)
0x322: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x323: Call2 0xce5

0x324: Pop(1)
0x325: IF (Stack[-1] == 0) GOTO 0x32b; Pop(1)

0x326: Push((int) 519410)
0x327: Push((int) 20576)
0x328: Push((int) 20575)
0x329: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x32a: Pop(3)
0x32b: Push((int) 518215)
0x32c: Push((int) 20584)
0x32d: Push((int) 19328)
0x32e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x32f: Pop(3)
0x330: Push((int) 518216)
0x331: Push((int) -1)
0x332: Push((int) 19329)
0x333: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x334: Pop(3)
0x335: Return(); Pop(0)

0x336: Push((int) 20584)
0x337: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x338: IF (Stack[-1] == 0) GOTO 0x34d; Pop(1)

0x339: PushEmpty(string)
0x33a: Stack[-1] = "Neutral"
0x33b: Call2 0x246

0x33c: Pop(1)
0x33d: Push((int) 519419)
0x33e: @@ SetMessage(Stack[-1])
0x33f: Pop(1)
0x340: @@ ClearReplies()
0x341: Pop(0)
0x342: Push((int) 519420)
0x343: Push((int) 20586)
0x344: Push((int) 20585)
0x345: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x346: Pop(3)
0x347: Push((int) 519424)
0x348: Push((int) 20586)
0x349: Push((int) 20589)
0x34a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x34b: Pop(3)
0x34c: Return(); Pop(0)

0x34d: Push((int) 20586)
0x34e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x34f: IF (Stack[-1] == 0) GOTO 0x364; Pop(1)

0x350: PushEmpty(string)
0x351: Stack[-1] = "Neutral"
0x352: Call2 0x246

0x353: Pop(1)
0x354: Push((int) 519421)
0x355: @@ SetMessage(Stack[-1])
0x356: Pop(1)
0x357: @@ ClearReplies()
0x358: Pop(0)
0x359: Push((int) 519422)
0x35a: Push((int) -1)
0x35b: Push((int) 20587)
0x35c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x35d: Pop(3)
0x35e: Push((int) 519423)
0x35f: Push((int) -1)
0x360: Push((int) 20588)
0x361: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x362: Pop(3)
0x363: Return(); Pop(0)

0x364: Push((int) 20576)
0x365: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x366: IF (Stack[-1] == 0) GOTO 0x37b; Pop(1)

0x367: PushEmpty(string)
0x368: Stack[-1] = "Grin"
0x369: Call2 0x246

0x36a: Pop(1)
0x36b: Push((int) 519411)
0x36c: @@ SetMessage(Stack[-1])
0x36d: Pop(1)
0x36e: @@ ClearReplies()
0x36f: Pop(0)
0x370: Push((int) 519412)
0x371: Push((int) 20578)
0x372: Push((int) 20577)
0x373: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x374: Pop(3)
0x375: Push((int) 519425)
0x376: Push((int) 20582)
0x377: Push((int) 20591)
0x378: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x379: Pop(3)
0x37a: Return(); Pop(0)

0x37b: Push((int) 20578)
0x37c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x37d: IF (Stack[-1] == 0) GOTO 0x392; Pop(1)

0x37e: PushEmpty(string)
0x37f: Stack[-1] = "Grin"
0x380: Call2 0x246

0x381: Pop(1)
0x382: Push((int) 519413)
0x383: @@ SetMessage(Stack[-1])
0x384: Pop(1)
0x385: @@ ClearReplies()
0x386: Pop(0)
0x387: Push((int) 519414)
0x388: Push((int) 20580)
0x389: Push((int) 20579)
0x38a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x38b: Pop(3)
0x38c: Push((int) 519426)
0x38d: Push((int) 20582)
0x38e: Push((int) 20592)
0x38f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x390: Pop(3)
0x391: Return(); Pop(0)

0x392: Push((int) 20580)
0x393: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x394: IF (Stack[-1] == 0) GOTO 0x3a9; Pop(1)

0x395: PushEmpty(string)
0x396: Stack[-1] = "Neutral"
0x397: Call2 0x246

0x398: Pop(1)
0x399: Push((int) 519415)
0x39a: @@ SetMessage(Stack[-1])
0x39b: Pop(1)
0x39c: @@ ClearReplies()
0x39d: Pop(0)
0x39e: Push((int) 519416)
0x39f: Push((int) 20582)
0x3a0: Push((int) 20581)
0x3a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a2: Pop(3)
0x3a3: Push((int) 519427)
0x3a4: Push((int) -1)
0x3a5: Push((int) 20594)
0x3a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a7: Pop(3)
0x3a8: Return(); Pop(0)

0x3a9: Push((int) 20582)
0x3aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ab: IF (Stack[-1] == 0) GOTO 0x3c0; Pop(1)

0x3ac: PushEmpty(string)
0x3ad: Stack[-1] = "Neutral"
0x3ae: Call2 0x246

0x3af: Pop(1)
0x3b0: Push((int) 519417)
0x3b1: @@ SetMessage(Stack[-1])
0x3b2: Pop(1)
0x3b3: @@ ClearReplies()
0x3b4: Pop(0)
0x3b5: Push((int) 519418)
0x3b6: Push((int) -1)
0x3b7: Push((int) 20583)
0x3b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b9: Pop(3)
0x3ba: Push((int) 519428)
0x3bb: Push((int) -1)
0x3bc: Push((int) 20595)
0x3bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3be: Pop(3)
0x3bf: Return(); Pop(0)

0x3c0: Push((int) 32402)
0x3c1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3c2: IF (Stack[-1] == 0) GOTO 0x3d7; Pop(1)

0x3c3: PushEmpty(string)
0x3c4: Stack[-1] = "Neutral"
0x3c5: Call2 0x246

0x3c6: Pop(1)
0x3c7: Push((int) 531082)
0x3c8: @@ SetMessage(Stack[-1])
0x3c9: Pop(1)
0x3ca: @@ ClearReplies()
0x3cb: Pop(0)
0x3cc: Push((int) 531217)
0x3cd: Push((int) 32529)
0x3ce: Push((int) 32528)
0x3cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d0: Pop(3)
0x3d1: Push((int) 531221)
0x3d2: Push((int) 32536)
0x3d3: Push((int) 32532)
0x3d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d5: Pop(3)
0x3d6: Return(); Pop(0)

0x3d7: Push((int) 32529)
0x3d8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3d9: IF (Stack[-1] == 0) GOTO 0x3ee; Pop(1)

0x3da: PushEmpty(string)
0x3db: Stack[-1] = "Neutral"
0x3dc: Call2 0x246

0x3dd: Pop(1)
0x3de: Push((int) 531218)
0x3df: @@ SetMessage(Stack[-1])
0x3e0: Pop(1)
0x3e1: @@ ClearReplies()
0x3e2: Pop(0)
0x3e3: Push((int) 531219)
0x3e4: Push((int) 32531)
0x3e5: Push((int) 32530)
0x3e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e7: Pop(3)
0x3e8: Push((int) 531222)
0x3e9: Push((int) 32536)
0x3ea: Push((int) 32533)
0x3eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ec: Pop(3)
0x3ed: Return(); Pop(0)

0x3ee: Push((int) 32536)
0x3ef: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3f0: IF (Stack[-1] == 0) GOTO 0x405; Pop(1)

0x3f1: PushEmpty(string)
0x3f2: Stack[-1] = "Grin"
0x3f3: Call2 0x246

0x3f4: Pop(1)
0x3f5: Push((int) 531224)
0x3f6: @@ SetMessage(Stack[-1])
0x3f7: Pop(1)
0x3f8: @@ ClearReplies()
0x3f9: Pop(0)
0x3fa: Push((int) 531225)
0x3fb: Push((int) -1)
0x3fc: Push((int) 32538)
0x3fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3fe: Pop(3)
0x3ff: Push((int) 531226)
0x400: Push((int) -1)
0x401: Push((int) 32539)
0x402: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x403: Pop(3)
0x404: Return(); Pop(0)

0x405: Push((int) 32531)
0x406: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x407: IF (Stack[-1] == 0) GOTO 0x417; Pop(1)

0x408: PushEmpty(string)
0x409: Stack[-1] = "Neutral"
0x40a: Call2 0x246

0x40b: Pop(1)
0x40c: Push((int) 531220)
0x40d: @@ SetMessage(Stack[-1])
0x40e: Pop(1)
0x40f: @@ ClearReplies()
0x410: Pop(0)
0x411: Push((int) 531083)
0x412: Push((int) -1)
0x413: Push((int) 32403)
0x414: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x415: Pop(3)
0x416: Return(); Pop(0)

0x417: Push((int) 32378)
0x418: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x419: IF (Stack[-1] == 0) GOTO 0x42e; Pop(1)

0x41a: PushEmpty(string)
0x41b: Stack[-1] = "Smile"
0x41c: Call2 0x246

0x41d: Pop(1)
0x41e: Push((int) 531049)
0x41f: @@ SetMessage(Stack[-1])
0x420: Pop(1)
0x421: @@ ClearReplies()
0x422: Pop(0)
0x423: Push((int) 531214)
0x424: Push((int) 32526)
0x425: Push((int) 32524)
0x426: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x427: Pop(3)
0x428: Push((int) 531215)
0x429: Push((int) 32526)
0x42a: Push((int) 32525)
0x42b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x42c: Pop(3)
0x42d: Return(); Pop(0)

0x42e: Push((int) 32526)
0x42f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x430: IF (Stack[-1] == 0) GOTO 0x440; Pop(1)

0x431: PushEmpty(string)
0x432: Stack[-1] = "Neutral"
0x433: Call2 0x246

0x434: Pop(1)
0x435: Push((int) 531216)
0x436: @@ SetMessage(Stack[-1])
0x437: Pop(1)
0x438: @@ ClearReplies()
0x439: Pop(0)
0x43a: Push((int) 531050)
0x43b: Push((int) -1)
0x43c: Push((int) 32379)
0x43d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x43e: Pop(3)
0x43f: Return(); Pop(0)

0x440: Push((int) 32373)
0x441: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x442: IF (Stack[-1] == 0) GOTO 0x452; Pop(1)

0x443: PushEmpty(string)
0x444: Stack[-1] = "Neutral"
0x445: Call2 0x246

0x446: Pop(1)
0x447: Push((int) 531042)
0x448: @@ SetMessage(Stack[-1])
0x449: Pop(1)
0x44a: @@ ClearReplies()
0x44b: Pop(0)
0x44c: Push((int) 531043)
0x44d: Push((int) -1)
0x44e: Push((int) 32374)
0x44f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x450: Pop(3)
0x451: Return(); Pop(0)

0x452: Push((int) 32545)
0x453: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x454: IF (Stack[-1] == 0) GOTO 0x469; Pop(1)

0x455: PushEmpty(string)
0x456: Stack[-1] = "Neutral"
0x457: Call2 0x246

0x458: Pop(1)
0x459: Push((int) 531232)
0x45a: @@ SetMessage(Stack[-1])
0x45b: Pop(1)
0x45c: @@ ClearReplies()
0x45d: Pop(0)
0x45e: Push((int) 531233)
0x45f: Push((int) 32541)
0x460: Push((int) 32546)
0x461: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x462: Pop(3)
0x463: Push((int) 531234)
0x464: Push((int) -1)
0x465: Push((int) 32547)
0x466: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x467: Pop(3)
0x468: Return(); Pop(0)

0x469: Push((int) 32541)
0x46a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x46b: IF (Stack[-1] == 0) GOTO 0x480; Pop(1)

0x46c: PushEmpty(string)
0x46d: Stack[-1] = "Smile"
0x46e: Call2 0x246

0x46f: Pop(1)
0x470: Push((int) 531228)
0x471: @@ SetMessage(Stack[-1])
0x472: Pop(1)
0x473: @@ ClearReplies()
0x474: Pop(0)
0x475: Push((int) 531238)
0x476: Push((int) 32553)
0x477: Push((int) 32552)
0x478: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x479: Pop(3)
0x47a: Push((int) 531229)
0x47b: Push((int) 32543)
0x47c: Push((int) 32542)
0x47d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x47e: Pop(3)
0x47f: Return(); Pop(0)

0x480: Push((int) 32543)
0x481: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x482: IF (Stack[-1] == 0) GOTO 0x497; Pop(1)

0x483: PushEmpty(string)
0x484: Stack[-1] = "Untrust"
0x485: Call2 0x246

0x486: Pop(1)
0x487: Push((int) 531230)
0x488: @@ SetMessage(Stack[-1])
0x489: Pop(1)
0x48a: @@ ClearReplies()
0x48b: Pop(0)
0x48c: Push((int) 531235)
0x48d: Push((int) -1)
0x48e: Push((int) 32549)
0x48f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x490: Pop(3)
0x491: Push((int) 531240)
0x492: Push((int) 32553)
0x493: Push((int) 32554)
0x494: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x495: Pop(3)
0x496: Return(); Pop(0)

0x497: Push((int) 32553)
0x498: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x499: IF (Stack[-1] == 0) GOTO 0x4a9; Pop(1)

0x49a: PushEmpty(string)
0x49b: Stack[-1] = "Smile"
0x49c: Call2 0x246

0x49d: Pop(1)
0x49e: Push((int) 531239)
0x49f: @@ SetMessage(Stack[-1])
0x4a0: Pop(1)
0x4a1: @@ ClearReplies()
0x4a2: Pop(0)
0x4a3: Push((int) 531236)
0x4a4: Push((int) 32551)
0x4a5: Push((int) 32550)
0x4a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4a7: Pop(3)
0x4a8: Return(); Pop(0)

0x4a9: Push((int) 32551)
0x4aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4ab: IF (Stack[-1] == 0) GOTO 0x4c0; Pop(1)

0x4ac: PushEmpty(string)
0x4ad: Stack[-1] = "Neutral"
0x4ae: Call2 0x246

0x4af: Pop(1)
0x4b0: Push((int) 531237)
0x4b1: @@ SetMessage(Stack[-1])
0x4b2: Pop(1)
0x4b3: @@ ClearReplies()
0x4b4: Pop(0)
0x4b5: Push((int) 531045)
0x4b6: Push((int) -1)
0x4b7: Push((int) 32376)
0x4b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b9: Pop(3)
0x4ba: Push((int) 531040)
0x4bb: Push((int) -1)
0x4bc: Push((int) 32371)
0x4bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4be: Pop(3)
0x4bf: Return(); Pop(0)

0x4c0: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x4c1: PushEmpty(bool)
0x4c2: Call2 0xbe5

0x4c3: Pop(0)
0x4c4: IF (Stack[-1] == 0) GOTO 0x4c8; Pop(1)

0x4c5: @ lshStopAnimation()
0x4c6: Pop(0)
0x4c7: GOTO 0x4ca

0x4c8: @ StopAnimation()
0x4c9: Pop(0)
0x4ca: Return(); Pop(0)

0x4cb: GOTO 0x25d

0x4cc: Return(); Pop(0)

0x4cd: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x4ce: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x4cf: PushEmpty(bool, object, float)
0x4d0: Stack[-2] = Stack[-12]
0x4d1: Stack[-1] = (float) 70.0
0x4d2: Call2 0x9ff

0x4d3: Pop(2)
0x4d4: Pop(1); Push((bool) Stack[-1] == 0)
0x4d5: IF (Stack[-1] == 0) GOTO 0x4d8; Pop(1)

0x4d6: Stack[-10] = (int) -2
0x4d7: Return(); Pop(8)

0x4d8: @ CreateDialog(Stack[-4])
0x4d9: Pop(0)
0x4da: PushEmpty(int)
0x4db: Call2 0xbdf

0x4dc: Pop(0)
0x4dd: @@ SetNPCName(Stack[-1])
0x4de: Pop(1)
0x4df: PushEmpty(int)
0x4e0: Call2 0xbdd

0x4e1: Pop(0)
0x4e2: @@ SetNPCDescription(Stack[-1])
0x4e3: Pop(1)
0x4e4: PushEmpty(string)
0x4e5: Call2 0xbe1

0x4e6: Pop(0)
0x4e7: @@ SetPhoto(Stack[-1])
0x4e8: Pop(1)
0x4e9: PushEmpty(string)
0x4ea: Call2 0xbe3

0x4eb: Pop(0)
0x4ec: @@ SetPhoto2(Stack[-1])
0x4ed: Pop(1)
0x4ee: PushEmpty(int)
0x4ef: Call2 0xdd3

0x4f0: Pop(0)
0x4f1: @@ SetPlayerName(Stack[-1])
0x4f2: Pop(1)
0x4f3: Stack[-2] = (int) -1
0x4f4: @ IsOverrideActive(Stack[-3])
0x4f5: Pop(0)
0x4f6: Push(Stack[-3])
0x4f7: IF (Stack[-1] == 0) GOTO 0x4fa; Pop(1)

0x4f8: Stack[-10] = (int) -2
0x4f9: Return(); Pop(8)

0x4fa: @ DoDialog(Stack[-4])
0x4fb: Pop(0)
0x4fc: PushEmpty(bool, object)
0x4fd: PushEmpty(object)
0x4fe: Call2 0xb6c

0x4ff: Stack[-2] = Stack[-1]
0x500: Pop(1)
0x501: Call2 0xa56

0x502: Pop(2)
0x503: PushEmpty(object, object)
0x504: Stack[-2] = Stack[-11]
0x505: Stack[-1] = Stack[-6]
0x506: Push(-2, 4); TaskCall(6)
0x507: Call2 0x51e

0x508: Pop(-2, 4); TaskReturn
0x509: Pop(2)
0x50a: @@ IsDialogEnd(Stack[-1])
0x50b: Pop(0)
0x50c: Pop(0); Push((bool) Stack[-1] == 0)
0x50d: IF (Stack[-1] == 0) GOTO 0x513; Pop(1)

0x50e: @ sync()
0x50f: Pop(0)
0x510: @@ IsDialogEnd(Stack[-1])
0x511: Pop(0)
0x512: GOTO 0x50c

0x513: PushEmpty(object)
0x514: Stack[-1] = Stack[-10]
0x515: Call2 0xa44

0x516: Pop(1)
0x517: @ StopDialog(Stack[-4])
0x518: Pop(0)
0x519: @@ GetReturnValue(Stack[-2])
0x51a: Pop(0)
0x51b: Stack[-10] = Stack[-2]
0x51c: Return(); Pop(8)

0x51d: Stack[-4] = 0
0x51e: PushEmpty()
0x51f: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x520: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x521: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x522: Push((int) 1)
0x523: IF (Stack[-1] == 0) GOTO 0x54d; Pop(1)

0x524: PushEmpty(string)
0x525: Stack[-1] = "Smile"
0x526: Call2 0x56b

0x527: Pop(1)
0x528: Push((int) 518917)
0x529: @@ SetMessage(Stack[-1])
0x52a: Pop(1)
0x52b: @@ ClearReplies()
0x52c: Pop(0)
0x52d: PushEmpty(bool)
0x52e: Stack[-1] = (bool) 0
0x52f: PushEmpty(bool, object)
0x530: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x531: Call2 0xccd

0x532: Pop(1)
0x533: IF (Stack[-1] == 0) GOTO 0x53a; Pop(1)

0x534: PushEmpty(bool, object)
0x535: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x536: Call2 0xcd9

0x537: Pop(1)
0x538: IF (Stack[-1] == 0) GOTO 0x53a; Pop(1)

0x539: Stack[-1] = (bool) 1
0x53a: IF (Stack[-1] == 0) GOTO 0x540; Pop(1)

0x53b: Push((int) 518919)
0x53c: Push((int) 20031)
0x53d: Push((int) 20030)
0x53e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x53f: Pop(3)
0x540: Push((int) 531963)
0x541: Push((int) -1)
0x542: Push((int) 33368)
0x543: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x544: Pop(3)
0x545: Push((int) 518918)
0x546: Push((int) -1)
0x547: Push((int) 20029)
0x548: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x549: Pop(3)
0x54a: GOTO 0x54d

0x54b: Return(); Pop(0)

0x54c: GOTO 0x522

0x54d: PushEmpty(bool)
0x54e: Call2 0xbe5

0x54f: Pop(0)
0x550: IF (Stack[-1] == 0) GOTO 0x55c; Pop(1)

0x551: @ lshWaitForAnimEnd()
0x552: Pop(0)
0x553: Push( Stack[3 + Tasks[-1].StackPointer] )
0x554: IF (Stack[-1] == 0) GOTO 0x556; Pop(1)

0x555: GOTO 0x55b

0x556: PushEmpty(string)
0x557: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x558: Call2 0xb1d

0x559: Pop(1)
0x55a: GOTO 0x551

0x55b: GOTO 0x56a

0x55c: Push("all")
0x55d: Push("idle")
0x55e: @ PlayAnimation(Stack[-2], Stack[-1])
0x55f: Pop(2)
0x560: @ WaitForAnimEnd()
0x561: Pop(0)
0x562: Push( Stack[3 + Tasks[-1].StackPointer] )
0x563: IF (Stack[-1] == 0) GOTO 0x565; Pop(1)

0x564: GOTO 0x56a

0x565: Push("all")
0x566: Push("idle")
0x567: @ PlayAnimation(Stack[-2], Stack[-1])
0x568: Pop(2)
0x569: GOTO 0x560

0x56a: Return(); Pop(0)

0x56b: PushEmpty()
0x56c: PushEmpty(bool)
0x56d: Call2 0xbe5

0x56e: Pop(0)
0x56f: Pop(1); Push((bool) Stack[-1] == 0)
0x570: IF (Stack[-1] == 0) GOTO 0x572; Pop(1)

0x571: Return(); Pop(0)

0x572: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x573: IF (Stack[-1] == 0) GOTO 0x575; Pop(1)

0x574: Return(); Pop(0)

0x575: PushEmpty(string, bool)
0x576: Stack[-2] = Stack[-3]
0x577: Push("")
0x578: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x579: IF (Stack[-1] == 0) GOTO 0x57c; Pop(1)

0x57a: Stack[-1] = (bool) 0
0x57b: GOTO 0x57d

0x57c: Stack[-1] = (bool) 1
0x57d: Call2 0xb2d

0x57e: Pop(2)
0x57f: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x580: Return(); Pop(0)

0x581: PushEmpty()
0x582: Push((int) 1)
0x583: IF (Stack[-1] == 0) GOTO 0x636; Pop(1)

0x584: PushEmpty()
0x585: Call2 0xb4b

0x586: Pop(0)
0x587: Push((int) 20030)
0x588: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x589: IF (Stack[-1] == 0) GOTO 0x58f; Pop(1)

0x58a: PushEmpty(object, object)
0x58b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x58c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58d: Call2 0xbe7

0x58e: Pop(2)
0x58f: Push((int) 33368)
0x590: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x591: IF (Stack[-1] == 0) GOTO 0x597; Pop(1)

0x592: PushEmpty(object, object)
0x593: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x594: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x595: Call2 0xc6a

0x596: Pop(2)
0x597: Push((int) 20028)
0x598: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x599: IF (Stack[-1] == 0) GOTO 0x5c1; Pop(1)

0x59a: PushEmpty(string)
0x59b: Stack[-1] = "Smile"
0x59c: Call2 0x56b

0x59d: Pop(1)
0x59e: Push((int) 518917)
0x59f: @@ SetMessage(Stack[-1])
0x5a0: Pop(1)
0x5a1: @@ ClearReplies()
0x5a2: Pop(0)
0x5a3: PushEmpty(bool)
0x5a4: Stack[-1] = (bool) 0
0x5a5: PushEmpty(bool, object)
0x5a6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5a7: Call2 0xccd

0x5a8: Pop(1)
0x5a9: IF (Stack[-1] == 0) GOTO 0x5b0; Pop(1)

0x5aa: PushEmpty(bool, object)
0x5ab: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5ac: Call2 0xcd9

0x5ad: Pop(1)
0x5ae: IF (Stack[-1] == 0) GOTO 0x5b0; Pop(1)

0x5af: Stack[-1] = (bool) 1
0x5b0: IF (Stack[-1] == 0) GOTO 0x5b6; Pop(1)

0x5b1: Push((int) 518919)
0x5b2: Push((int) 20031)
0x5b3: Push((int) 20030)
0x5b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5b5: Pop(3)
0x5b6: Push((int) 531963)
0x5b7: Push((int) -1)
0x5b8: Push((int) 33368)
0x5b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ba: Pop(3)
0x5bb: Push((int) 518918)
0x5bc: Push((int) -1)
0x5bd: Push((int) 20029)
0x5be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5bf: Pop(3)
0x5c0: Return(); Pop(0)

0x5c1: Push((int) 20031)
0x5c2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5c3: IF (Stack[-1] == 0) GOTO 0x5d8; Pop(1)

0x5c4: PushEmpty(string)
0x5c5: Stack[-1] = "Neutral"
0x5c6: Call2 0x56b

0x5c7: Pop(1)
0x5c8: Push((int) 518920)
0x5c9: @@ SetMessage(Stack[-1])
0x5ca: Pop(1)
0x5cb: @@ ClearReplies()
0x5cc: Pop(0)
0x5cd: Push((int) 518923)
0x5ce: Push((int) 20039)
0x5cf: Push((int) 20034)
0x5d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d1: Pop(3)
0x5d2: Push((int) 518921)
0x5d3: Push((int) 20033)
0x5d4: Push((int) 20032)
0x5d5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d6: Pop(3)
0x5d7: Return(); Pop(0)

0x5d8: Push((int) 20033)
0x5d9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5da: IF (Stack[-1] == 0) GOTO 0x5ef; Pop(1)

0x5db: PushEmpty(string)
0x5dc: Stack[-1] = "Grin"
0x5dd: Call2 0x56b

0x5de: Pop(1)
0x5df: Push((int) 518922)
0x5e0: @@ SetMessage(Stack[-1])
0x5e1: Pop(1)
0x5e2: @@ ClearReplies()
0x5e3: Pop(0)
0x5e4: Push((int) 518924)
0x5e5: Push((int) 20037)
0x5e6: Push((int) 20035)
0x5e7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5e8: Pop(3)
0x5e9: Push((int) 518925)
0x5ea: Push((int) -1)
0x5eb: Push((int) 20036)
0x5ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ed: Pop(3)
0x5ee: Return(); Pop(0)

0x5ef: Push((int) 20037)
0x5f0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5f1: IF (Stack[-1] == 0) GOTO 0x601; Pop(1)

0x5f2: PushEmpty(string)
0x5f3: Stack[-1] = "What"
0x5f4: Call2 0x56b

0x5f5: Pop(1)
0x5f6: Push((int) 518926)
0x5f7: @@ SetMessage(Stack[-1])
0x5f8: Pop(1)
0x5f9: @@ ClearReplies()
0x5fa: Pop(0)
0x5fb: Push((int) 518927)
0x5fc: Push((int) -1)
0x5fd: Push((int) 20038)
0x5fe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ff: Pop(3)
0x600: Return(); Pop(0)

0x601: Push((int) 20039)
0x602: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x603: IF (Stack[-1] == 0) GOTO 0x618; Pop(1)

0x604: PushEmpty(string)
0x605: Stack[-1] = "Grin"
0x606: Call2 0x56b

0x607: Pop(1)
0x608: Push((int) 518928)
0x609: @@ SetMessage(Stack[-1])
0x60a: Pop(1)
0x60b: @@ ClearReplies()
0x60c: Pop(0)
0x60d: Push((int) 518930)
0x60e: Push((int) 20042)
0x60f: Push((int) 20041)
0x610: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x611: Pop(3)
0x612: Push((int) 518929)
0x613: Push((int) -1)
0x614: Push((int) 20040)
0x615: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x616: Pop(3)
0x617: Return(); Pop(0)

0x618: Push((int) 20042)
0x619: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x61a: IF (Stack[-1] == 0) GOTO 0x62a; Pop(1)

0x61b: PushEmpty(string)
0x61c: Stack[-1] = "Grin"
0x61d: Call2 0x56b

0x61e: Pop(1)
0x61f: Push((int) 518931)
0x620: @@ SetMessage(Stack[-1])
0x621: Pop(1)
0x622: @@ ClearReplies()
0x623: Pop(0)
0x624: Push((int) 518932)
0x625: Push((int) -1)
0x626: Push((int) 20043)
0x627: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x628: Pop(3)
0x629: Return(); Pop(0)

0x62a: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x62b: PushEmpty(bool)
0x62c: Call2 0xbe5

0x62d: Pop(0)
0x62e: IF (Stack[-1] == 0) GOTO 0x632; Pop(1)

0x62f: @ lshStopAnimation()
0x630: Pop(0)
0x631: GOTO 0x634

0x632: @ StopAnimation()
0x633: Pop(0)
0x634: Return(); Pop(0)

0x635: GOTO 0x582

0x636: Return(); Pop(0)

0x637: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x638: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x639: PushEmpty(bool, object, float)
0x63a: Stack[-2] = Stack[-12]
0x63b: Stack[-1] = (float) 70.0
0x63c: Call2 0x9ff

0x63d: Pop(2)
0x63e: Pop(1); Push((bool) Stack[-1] == 0)
0x63f: IF (Stack[-1] == 0) GOTO 0x642; Pop(1)

0x640: Stack[-10] = (int) -2
0x641: Return(); Pop(8)

0x642: @ CreateDialog(Stack[-4])
0x643: Pop(0)
0x644: PushEmpty(int)
0x645: Call2 0xbdf

0x646: Pop(0)
0x647: @@ SetNPCName(Stack[-1])
0x648: Pop(1)
0x649: PushEmpty(int)
0x64a: Call2 0xbdd

0x64b: Pop(0)
0x64c: @@ SetNPCDescription(Stack[-1])
0x64d: Pop(1)
0x64e: PushEmpty(string)
0x64f: Call2 0xbe1

0x650: Pop(0)
0x651: @@ SetPhoto(Stack[-1])
0x652: Pop(1)
0x653: PushEmpty(string)
0x654: Call2 0xbe3

0x655: Pop(0)
0x656: @@ SetPhoto2(Stack[-1])
0x657: Pop(1)
0x658: PushEmpty(int)
0x659: Call2 0xdd3

0x65a: Pop(0)
0x65b: @@ SetPlayerName(Stack[-1])
0x65c: Pop(1)
0x65d: Stack[-2] = (int) -1
0x65e: @ IsOverrideActive(Stack[-3])
0x65f: Pop(0)
0x660: Push(Stack[-3])
0x661: IF (Stack[-1] == 0) GOTO 0x664; Pop(1)

0x662: Stack[-10] = (int) -2
0x663: Return(); Pop(8)

0x664: @ DoDialog(Stack[-4])
0x665: Pop(0)
0x666: PushEmpty(bool, object)
0x667: PushEmpty(object)
0x668: Call2 0xb6c

0x669: Stack[-2] = Stack[-1]
0x66a: Pop(1)
0x66b: Call2 0xa56

0x66c: Pop(2)
0x66d: PushEmpty(object, object)
0x66e: Stack[-2] = Stack[-11]
0x66f: Stack[-1] = Stack[-6]
0x670: Push(-2, 4); TaskCall(8)
0x671: Call2 0x688

0x672: Pop(-2, 4); TaskReturn
0x673: Pop(2)
0x674: @@ IsDialogEnd(Stack[-1])
0x675: Pop(0)
0x676: Pop(0); Push((bool) Stack[-1] == 0)
0x677: IF (Stack[-1] == 0) GOTO 0x67d; Pop(1)

0x678: @ sync()
0x679: Pop(0)
0x67a: @@ IsDialogEnd(Stack[-1])
0x67b: Pop(0)
0x67c: GOTO 0x676

0x67d: PushEmpty(object)
0x67e: Stack[-1] = Stack[-10]
0x67f: Call2 0xa44

0x680: Pop(1)
0x681: @ StopDialog(Stack[-4])
0x682: Pop(0)
0x683: @@ GetReturnValue(Stack[-2])
0x684: Pop(0)
0x685: Stack[-10] = Stack[-2]
0x686: Return(); Pop(8)

0x687: Stack[-4] = 0
0x688: PushEmpty()
0x689: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x68a: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x68b: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x68c: Push((int) 1)
0x68d: IF (Stack[-1] == 0) GOTO 0x6a4; Pop(1)

0x68e: PushEmpty(string)
0x68f: Stack[-1] = "Neutral"
0x690: Call2 0x6c2

0x691: Pop(1)
0x692: Push((int) 531971)
0x693: @@ SetMessage(Stack[-1])
0x694: Pop(1)
0x695: @@ ClearReplies()
0x696: Pop(0)
0x697: Push((int) 531972)
0x698: Push((int) -1)
0x699: Push((int) 33378)
0x69a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69b: Pop(3)
0x69c: Push((int) 531973)
0x69d: Push((int) -1)
0x69e: Push((int) 33379)
0x69f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6a0: Pop(3)
0x6a1: GOTO 0x6a4

0x6a2: Return(); Pop(0)

0x6a3: GOTO 0x68c

0x6a4: PushEmpty(bool)
0x6a5: Call2 0xbe5

0x6a6: Pop(0)
0x6a7: IF (Stack[-1] == 0) GOTO 0x6b3; Pop(1)

0x6a8: @ lshWaitForAnimEnd()
0x6a9: Pop(0)
0x6aa: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6ab: IF (Stack[-1] == 0) GOTO 0x6ad; Pop(1)

0x6ac: GOTO 0x6b2

0x6ad: PushEmpty(string)
0x6ae: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x6af: Call2 0xb1d

0x6b0: Pop(1)
0x6b1: GOTO 0x6a8

0x6b2: GOTO 0x6c1

0x6b3: Push("all")
0x6b4: Push("idle")
0x6b5: @ PlayAnimation(Stack[-2], Stack[-1])
0x6b6: Pop(2)
0x6b7: @ WaitForAnimEnd()
0x6b8: Pop(0)
0x6b9: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6ba: IF (Stack[-1] == 0) GOTO 0x6bc; Pop(1)

0x6bb: GOTO 0x6c1

0x6bc: Push("all")
0x6bd: Push("idle")
0x6be: @ PlayAnimation(Stack[-2], Stack[-1])
0x6bf: Pop(2)
0x6c0: GOTO 0x6b7

0x6c1: Return(); Pop(0)

0x6c2: PushEmpty()
0x6c3: PushEmpty(bool)
0x6c4: Call2 0xbe5

0x6c5: Pop(0)
0x6c6: Pop(1); Push((bool) Stack[-1] == 0)
0x6c7: IF (Stack[-1] == 0) GOTO 0x6c9; Pop(1)

0x6c8: Return(); Pop(0)

0x6c9: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x6ca: IF (Stack[-1] == 0) GOTO 0x6cc; Pop(1)

0x6cb: Return(); Pop(0)

0x6cc: PushEmpty(string, bool)
0x6cd: Stack[-2] = Stack[-3]
0x6ce: Push("")
0x6cf: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x6d0: IF (Stack[-1] == 0) GOTO 0x6d3; Pop(1)

0x6d1: Stack[-1] = (bool) 0
0x6d2: GOTO 0x6d4

0x6d3: Stack[-1] = (bool) 1
0x6d4: Call2 0xb2d

0x6d5: Pop(2)
0x6d6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x6d7: Return(); Pop(0)

0x6d8: PushEmpty()
0x6d9: Push((int) 1)
0x6da: IF (Stack[-1] == 0) GOTO 0x709; Pop(1)

0x6db: PushEmpty()
0x6dc: Call2 0xb4b

0x6dd: Pop(0)
0x6de: Push((int) 33378)
0x6df: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6e0: IF (Stack[-1] == 0) GOTO 0x6e6; Pop(1)

0x6e1: PushEmpty(object, object)
0x6e2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6e3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6e4: Call2 0xc6a

0x6e5: Pop(2)
0x6e6: Push((int) 33377)
0x6e7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6e8: IF (Stack[-1] == 0) GOTO 0x6fd; Pop(1)

0x6e9: PushEmpty(string)
0x6ea: Stack[-1] = "Neutral"
0x6eb: Call2 0x6c2

0x6ec: Pop(1)
0x6ed: Push((int) 531971)
0x6ee: @@ SetMessage(Stack[-1])
0x6ef: Pop(1)
0x6f0: @@ ClearReplies()
0x6f1: Pop(0)
0x6f2: Push((int) 531972)
0x6f3: Push((int) -1)
0x6f4: Push((int) 33378)
0x6f5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f6: Pop(3)
0x6f7: Push((int) 531973)
0x6f8: Push((int) -1)
0x6f9: Push((int) 33379)
0x6fa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6fb: Pop(3)
0x6fc: Return(); Pop(0)

0x6fd: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x6fe: PushEmpty(bool)
0x6ff: Call2 0xbe5

0x700: Pop(0)
0x701: IF (Stack[-1] == 0) GOTO 0x705; Pop(1)

0x702: @ lshStopAnimation()
0x703: Pop(0)
0x704: GOTO 0x707

0x705: @ StopAnimation()
0x706: Pop(0)
0x707: Return(); Pop(0)

0x708: GOTO 0x6d9

0x709: Return(); Pop(0)

0x70a: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x70b: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x70c: PushEmpty(bool, object, float)
0x70d: Stack[-2] = Stack[-12]
0x70e: Stack[-1] = (float) 70.0
0x70f: Call2 0x9ff

0x710: Pop(2)
0x711: Pop(1); Push((bool) Stack[-1] == 0)
0x712: IF (Stack[-1] == 0) GOTO 0x715; Pop(1)

0x713: Stack[-10] = (int) -2
0x714: Return(); Pop(8)

0x715: @ CreateDialog(Stack[-4])
0x716: Pop(0)
0x717: PushEmpty(int)
0x718: Call2 0xbdf

0x719: Pop(0)
0x71a: @@ SetNPCName(Stack[-1])
0x71b: Pop(1)
0x71c: PushEmpty(int)
0x71d: Call2 0xbdd

0x71e: Pop(0)
0x71f: @@ SetNPCDescription(Stack[-1])
0x720: Pop(1)
0x721: PushEmpty(string)
0x722: Call2 0xbe1

0x723: Pop(0)
0x724: @@ SetPhoto(Stack[-1])
0x725: Pop(1)
0x726: PushEmpty(string)
0x727: Call2 0xbe3

0x728: Pop(0)
0x729: @@ SetPhoto2(Stack[-1])
0x72a: Pop(1)
0x72b: PushEmpty(int)
0x72c: Call2 0xdd3

0x72d: Pop(0)
0x72e: @@ SetPlayerName(Stack[-1])
0x72f: Pop(1)
0x730: Stack[-2] = (int) -1
0x731: @ IsOverrideActive(Stack[-3])
0x732: Pop(0)
0x733: Push(Stack[-3])
0x734: IF (Stack[-1] == 0) GOTO 0x737; Pop(1)

0x735: Stack[-10] = (int) -2
0x736: Return(); Pop(8)

0x737: @ DoDialog(Stack[-4])
0x738: Pop(0)
0x739: PushEmpty(bool, object)
0x73a: PushEmpty(object)
0x73b: Call2 0xb6c

0x73c: Stack[-2] = Stack[-1]
0x73d: Pop(1)
0x73e: Call2 0xa56

0x73f: Pop(2)
0x740: PushEmpty(object, object)
0x741: Stack[-2] = Stack[-11]
0x742: Stack[-1] = Stack[-6]
0x743: Push(-2, 4); TaskCall(10)
0x744: Call2 0x75b

0x745: Pop(-2, 4); TaskReturn
0x746: Pop(2)
0x747: @@ IsDialogEnd(Stack[-1])
0x748: Pop(0)
0x749: Pop(0); Push((bool) Stack[-1] == 0)
0x74a: IF (Stack[-1] == 0) GOTO 0x750; Pop(1)

0x74b: @ sync()
0x74c: Pop(0)
0x74d: @@ IsDialogEnd(Stack[-1])
0x74e: Pop(0)
0x74f: GOTO 0x749

0x750: PushEmpty(object)
0x751: Stack[-1] = Stack[-10]
0x752: Call2 0xa44

0x753: Pop(1)
0x754: @ StopDialog(Stack[-4])
0x755: Pop(0)
0x756: @@ GetReturnValue(Stack[-2])
0x757: Pop(0)
0x758: Stack[-10] = Stack[-2]
0x759: Return(); Pop(8)

0x75a: Stack[-4] = 0
0x75b: PushEmpty()
0x75c: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x75d: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x75e: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x75f: Push((int) 1)
0x760: IF (Stack[-1] == 0) GOTO 0x77c; Pop(1)

0x761: PushEmpty(string)
0x762: Stack[-1] = "Neutral"
0x763: Call2 0x79a

0x764: Pop(1)
0x765: Push((int) 535231)
0x766: @@ SetMessage(Stack[-1])
0x767: Pop(1)
0x768: @@ ClearReplies()
0x769: Pop(0)
0x76a: Push((int) 535232)
0x76b: Push((int) 36953)
0x76c: Push((int) 36907)
0x76d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x76e: Pop(3)
0x76f: Push((int) 535233)
0x770: Push((int) -1)
0x771: Push((int) 36908)
0x772: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x773: Pop(3)
0x774: Push((int) 535280)
0x775: Push((int) -1)
0x776: Push((int) 36956)
0x777: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x778: Pop(3)
0x779: GOTO 0x77c

0x77a: Return(); Pop(0)

0x77b: GOTO 0x75f

0x77c: PushEmpty(bool)
0x77d: Call2 0xbe5

0x77e: Pop(0)
0x77f: IF (Stack[-1] == 0) GOTO 0x78b; Pop(1)

0x780: @ lshWaitForAnimEnd()
0x781: Pop(0)
0x782: Push( Stack[3 + Tasks[-1].StackPointer] )
0x783: IF (Stack[-1] == 0) GOTO 0x785; Pop(1)

0x784: GOTO 0x78a

0x785: PushEmpty(string)
0x786: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x787: Call2 0xb1d

0x788: Pop(1)
0x789: GOTO 0x780

0x78a: GOTO 0x799

0x78b: Push("all")
0x78c: Push("idle")
0x78d: @ PlayAnimation(Stack[-2], Stack[-1])
0x78e: Pop(2)
0x78f: @ WaitForAnimEnd()
0x790: Pop(0)
0x791: Push( Stack[3 + Tasks[-1].StackPointer] )
0x792: IF (Stack[-1] == 0) GOTO 0x794; Pop(1)

0x793: GOTO 0x799

0x794: Push("all")
0x795: Push("idle")
0x796: @ PlayAnimation(Stack[-2], Stack[-1])
0x797: Pop(2)
0x798: GOTO 0x78f

0x799: Return(); Pop(0)

0x79a: PushEmpty()
0x79b: PushEmpty(bool)
0x79c: Call2 0xbe5

0x79d: Pop(0)
0x79e: Pop(1); Push((bool) Stack[-1] == 0)
0x79f: IF (Stack[-1] == 0) GOTO 0x7a1; Pop(1)

0x7a0: Return(); Pop(0)

0x7a1: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x7a2: IF (Stack[-1] == 0) GOTO 0x7a4; Pop(1)

0x7a3: Return(); Pop(0)

0x7a4: PushEmpty(string, bool)
0x7a5: Stack[-2] = Stack[-3]
0x7a6: Push("")
0x7a7: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x7a8: IF (Stack[-1] == 0) GOTO 0x7ab; Pop(1)

0x7a9: Stack[-1] = (bool) 0
0x7aa: GOTO 0x7ac

0x7ab: Stack[-1] = (bool) 1
0x7ac: Call2 0xb2d

0x7ad: Pop(2)
0x7ae: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x7af: Return(); Pop(0)

0x7b0: PushEmpty()
0x7b1: Push((int) 1)
0x7b2: IF (Stack[-1] == 0) GOTO 0x80c; Pop(1)

0x7b3: PushEmpty()
0x7b4: Call2 0xb4b

0x7b5: Pop(0)
0x7b6: Push((int) 36906)
0x7b7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7b8: IF (Stack[-1] == 0) GOTO 0x7d2; Pop(1)

0x7b9: PushEmpty(string)
0x7ba: Stack[-1] = "Neutral"
0x7bb: Call2 0x79a

0x7bc: Pop(1)
0x7bd: Push((int) 535231)
0x7be: @@ SetMessage(Stack[-1])
0x7bf: Pop(1)
0x7c0: @@ ClearReplies()
0x7c1: Pop(0)
0x7c2: Push((int) 535232)
0x7c3: Push((int) 36953)
0x7c4: Push((int) 36907)
0x7c5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c6: Pop(3)
0x7c7: Push((int) 535233)
0x7c8: Push((int) -1)
0x7c9: Push((int) 36908)
0x7ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7cb: Pop(3)
0x7cc: Push((int) 535280)
0x7cd: Push((int) -1)
0x7ce: Push((int) 36956)
0x7cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d0: Pop(3)
0x7d1: Return(); Pop(0)

0x7d2: Push((int) 36953)
0x7d3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7d4: IF (Stack[-1] == 0) GOTO 0x7e9; Pop(1)

0x7d5: PushEmpty(string)
0x7d6: Stack[-1] = "Neutral"
0x7d7: Call2 0x79a

0x7d8: Pop(1)
0x7d9: Push((int) 535277)
0x7da: @@ SetMessage(Stack[-1])
0x7db: Pop(1)
0x7dc: @@ ClearReplies()
0x7dd: Pop(0)
0x7de: Push((int) 535278)
0x7df: Push((int) 36957)
0x7e0: Push((int) 36954)
0x7e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7e2: Pop(3)
0x7e3: Push((int) 535279)
0x7e4: Push((int) 36957)
0x7e5: Push((int) 36955)
0x7e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7e7: Pop(3)
0x7e8: Return(); Pop(0)

0x7e9: Push((int) 36957)
0x7ea: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7eb: IF (Stack[-1] == 0) GOTO 0x800; Pop(1)

0x7ec: PushEmpty(string)
0x7ed: Stack[-1] = "Neutral"
0x7ee: Call2 0x79a

0x7ef: Pop(1)
0x7f0: Push((int) 535281)
0x7f1: @@ SetMessage(Stack[-1])
0x7f2: Pop(1)
0x7f3: @@ ClearReplies()
0x7f4: Pop(0)
0x7f5: Push((int) 535282)
0x7f6: Push((int) -1)
0x7f7: Push((int) 36958)
0x7f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7f9: Pop(3)
0x7fa: Push((int) 535283)
0x7fb: Push((int) -1)
0x7fc: Push((int) 36959)
0x7fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7fe: Pop(3)
0x7ff: Return(); Pop(0)

0x800: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x801: PushEmpty(bool)
0x802: Call2 0xbe5

0x803: Pop(0)
0x804: IF (Stack[-1] == 0) GOTO 0x808; Pop(1)

0x805: @ lshStopAnimation()
0x806: Pop(0)
0x807: GOTO 0x80a

0x808: @ StopAnimation()
0x809: Pop(0)
0x80a: Return(); Pop(0)

0x80b: GOTO 0x7b1

0x80c: Return(); Pop(0)

0x80d: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x80e: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x80f: PushEmpty(bool, object, float)
0x810: Stack[-2] = Stack[-12]
0x811: Stack[-1] = (float) 70.0
0x812: Call2 0x9ff

0x813: Pop(2)
0x814: Pop(1); Push((bool) Stack[-1] == 0)
0x815: IF (Stack[-1] == 0) GOTO 0x818; Pop(1)

0x816: Stack[-10] = (int) -2
0x817: Return(); Pop(8)

0x818: @ CreateDialog(Stack[-4])
0x819: Pop(0)
0x81a: PushEmpty(int)
0x81b: Call2 0xbdf

0x81c: Pop(0)
0x81d: @@ SetNPCName(Stack[-1])
0x81e: Pop(1)
0x81f: PushEmpty(int)
0x820: Call2 0xbdd

0x821: Pop(0)
0x822: @@ SetNPCDescription(Stack[-1])
0x823: Pop(1)
0x824: PushEmpty(string)
0x825: Call2 0xbe1

0x826: Pop(0)
0x827: @@ SetPhoto(Stack[-1])
0x828: Pop(1)
0x829: PushEmpty(string)
0x82a: Call2 0xbe3

0x82b: Pop(0)
0x82c: @@ SetPhoto2(Stack[-1])
0x82d: Pop(1)
0x82e: PushEmpty(int)
0x82f: Call2 0xdd3

0x830: Pop(0)
0x831: @@ SetPlayerName(Stack[-1])
0x832: Pop(1)
0x833: Stack[-2] = (int) -1
0x834: @ IsOverrideActive(Stack[-3])
0x835: Pop(0)
0x836: Push(Stack[-3])
0x837: IF (Stack[-1] == 0) GOTO 0x83a; Pop(1)

0x838: Stack[-10] = (int) -2
0x839: Return(); Pop(8)

0x83a: @ DoDialog(Stack[-4])
0x83b: Pop(0)
0x83c: PushEmpty(bool, object)
0x83d: PushEmpty(object)
0x83e: Call2 0xb6c

0x83f: Stack[-2] = Stack[-1]
0x840: Pop(1)
0x841: Call2 0xa56

0x842: Pop(2)
0x843: PushEmpty(object, object)
0x844: Stack[-2] = Stack[-11]
0x845: Stack[-1] = Stack[-6]
0x846: Push(-2, 4); TaskCall(12)
0x847: Call2 0x85e

0x848: Pop(-2, 4); TaskReturn
0x849: Pop(2)
0x84a: @@ IsDialogEnd(Stack[-1])
0x84b: Pop(0)
0x84c: Pop(0); Push((bool) Stack[-1] == 0)
0x84d: IF (Stack[-1] == 0) GOTO 0x853; Pop(1)

0x84e: @ sync()
0x84f: Pop(0)
0x850: @@ IsDialogEnd(Stack[-1])
0x851: Pop(0)
0x852: GOTO 0x84c

0x853: PushEmpty(object)
0x854: Stack[-1] = Stack[-10]
0x855: Call2 0xa44

0x856: Pop(1)
0x857: @ StopDialog(Stack[-4])
0x858: Pop(0)
0x859: @@ GetReturnValue(Stack[-2])
0x85a: Pop(0)
0x85b: Stack[-10] = Stack[-2]
0x85c: Return(); Pop(8)

0x85d: Stack[-4] = 0
0x85e: PushEmpty()
0x85f: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x860: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x861: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x862: Push((int) 1)
0x863: IF (Stack[-1] == 0) GOTO 0x87a; Pop(1)

0x864: PushEmpty(string)
0x865: Stack[-1] = "Neutral"
0x866: Call2 0x898

0x867: Pop(1)
0x868: Push((int) 540554)
0x869: @@ SetMessage(Stack[-1])
0x86a: Pop(1)
0x86b: @@ ClearReplies()
0x86c: Pop(0)
0x86d: Push((int) 540555)
0x86e: Push((int) -1)
0x86f: Push((int) 42564)
0x870: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x871: Pop(3)
0x872: Push((int) 540794)
0x873: Push((int) -1)
0x874: Push((int) 42843)
0x875: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x876: Pop(3)
0x877: GOTO 0x87a

0x878: Return(); Pop(0)

0x879: GOTO 0x862

0x87a: PushEmpty(bool)
0x87b: Call2 0xbe5

0x87c: Pop(0)
0x87d: IF (Stack[-1] == 0) GOTO 0x889; Pop(1)

0x87e: @ lshWaitForAnimEnd()
0x87f: Pop(0)
0x880: Push( Stack[3 + Tasks[-1].StackPointer] )
0x881: IF (Stack[-1] == 0) GOTO 0x883; Pop(1)

0x882: GOTO 0x888

0x883: PushEmpty(string)
0x884: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x885: Call2 0xb1d

0x886: Pop(1)
0x887: GOTO 0x87e

0x888: GOTO 0x897

0x889: Push("all")
0x88a: Push("idle")
0x88b: @ PlayAnimation(Stack[-2], Stack[-1])
0x88c: Pop(2)
0x88d: @ WaitForAnimEnd()
0x88e: Pop(0)
0x88f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x890: IF (Stack[-1] == 0) GOTO 0x892; Pop(1)

0x891: GOTO 0x897

0x892: Push("all")
0x893: Push("idle")
0x894: @ PlayAnimation(Stack[-2], Stack[-1])
0x895: Pop(2)
0x896: GOTO 0x88d

0x897: Return(); Pop(0)

0x898: PushEmpty()
0x899: PushEmpty(bool)
0x89a: Call2 0xbe5

0x89b: Pop(0)
0x89c: Pop(1); Push((bool) Stack[-1] == 0)
0x89d: IF (Stack[-1] == 0) GOTO 0x89f; Pop(1)

0x89e: Return(); Pop(0)

0x89f: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x8a0: IF (Stack[-1] == 0) GOTO 0x8a2; Pop(1)

0x8a1: Return(); Pop(0)

0x8a2: PushEmpty(string, bool)
0x8a3: Stack[-2] = Stack[-3]
0x8a4: Push("")
0x8a5: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x8a6: IF (Stack[-1] == 0) GOTO 0x8a9; Pop(1)

0x8a7: Stack[-1] = (bool) 0
0x8a8: GOTO 0x8aa

0x8a9: Stack[-1] = (bool) 1
0x8aa: Call2 0xb2d

0x8ab: Pop(2)
0x8ac: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x8ad: Return(); Pop(0)

0x8ae: PushEmpty()
0x8af: Push((int) 1)
0x8b0: IF (Stack[-1] == 0) GOTO 0x8d7; Pop(1)

0x8b1: PushEmpty()
0x8b2: Call2 0xb4b

0x8b3: Pop(0)
0x8b4: Push((int) 42563)
0x8b5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8b6: IF (Stack[-1] == 0) GOTO 0x8cb; Pop(1)

0x8b7: PushEmpty(string)
0x8b8: Stack[-1] = "Neutral"
0x8b9: Call2 0x898

0x8ba: Pop(1)
0x8bb: Push((int) 540554)
0x8bc: @@ SetMessage(Stack[-1])
0x8bd: Pop(1)
0x8be: @@ ClearReplies()
0x8bf: Pop(0)
0x8c0: Push((int) 540555)
0x8c1: Push((int) -1)
0x8c2: Push((int) 42564)
0x8c3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8c4: Pop(3)
0x8c5: Push((int) 540794)
0x8c6: Push((int) -1)
0x8c7: Push((int) 42843)
0x8c8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8c9: Pop(3)
0x8ca: Return(); Pop(0)

0x8cb: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x8cc: PushEmpty(bool)
0x8cd: Call2 0xbe5

0x8ce: Pop(0)
0x8cf: IF (Stack[-1] == 0) GOTO 0x8d3; Pop(1)

0x8d0: @ lshStopAnimation()
0x8d1: Pop(0)
0x8d2: GOTO 0x8d5

0x8d3: @ StopAnimation()
0x8d4: Pop(0)
0x8d5: Return(); Pop(0)

0x8d6: GOTO 0x8af

0x8d7: Return(); Pop(0)

0x8d8: PushEmpty()
0x8d9: Call2 0x8dc

0x8da: Pop(0)
0x8db: Return(); Pop(0)

0x8dc: PushEmpty(bool)
0x8dd: Call2 0x9fa

0x8de: Pop(0)
0x8df: Pop(1); Push((bool) Stack[-1] == 0)
0x8e0: IF (Stack[-1] == 0) GOTO 0x8e3; Pop(1)

0x8e1: @ Hold()
0x8e2: Pop(0)
0x8e3: @ GetDirection(Stack[-0])
0x8e4: Pop(0)
0x8e5: PushEmpty()
0x8e6: Call2 0x98c

0x8e7: Pop(0)
0x8e8: GOTO 0x8e5

0x8e9: Return(); Pop(0)

0x8ea: PushEmpty(object, object)
0x8eb: Push("player")
0x8ec: @ FindActor(Stack[-2], Stack[-1])
0x8ed: Pop(1)
0x8ee: Pop(0); Push((bool) Stack[-1] == 0)
0x8ef: IF (Stack[-1] == 0) GOTO 0x8f2; Pop(1)

0x8f0: Stack[-3] = (bool) 0
0x8f1: Return(); Pop(2)

0x8f2: PushEmpty(bool, object)
0x8f3: Stack[-1] = Stack[-3]
0x8f4: Call2 0x9f1

0x8f5: Stack[-5] = Stack[-2]
0x8f6: Pop(2)
0x8f7: Return(); Pop(2)

0x8f8: Stack[-1] = 0
0x8f9: Push(CvectorIndex(Stack[-0], 0))
0x8fa: Push(CvectorIndex(Stack[-0], 2))
0x8fb: @ RotateAsync(Stack[-2], Stack[-1])
0x8fc: Pop(2)
0x8fd: Return(); Pop(0)

0x8fe: PushEmpty(object, bool, object, bool)
0x8ff: Push("player")
0x900: @ FindActor(Stack[-3], Stack[-1])
0x901: Pop(1)
0x902: Pop(0); Push((bool) Stack[-2] == 0)
0x903: IF (Stack[-1] == 0) GOTO 0x906; Pop(1)

0x904: Stack[-5] = (bool) 0
0x905: Return(); Pop(4)

0x906: PushEmpty(float, object)
0x907: Stack[-1] = Stack[-4]
0x908: Call2 0x9d8

0x909: Pop(1)
0x90a: Push((float)90000.0)
0x90b: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x90c: IF (Stack[-1] == 0) GOTO 0x90f; Pop(1)

0x90d: Stack[-5] = (bool) 0
0x90e: Return(); Pop(4)

0x90f: @ CanSee(Stack[-1], Stack[-2])
0x910: Pop(0)
0x911: Stack[-5] = Stack[-1]
0x912: Return(); Pop(4)

0x913: Stack[-2] = 0
0x914: PushEmpty(float, float)
0x915: Push((int) 8)
0x916: Push((int) 16)
0x917: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x918: Pop(2)
0x919: Push((int) 10)
0x91a: @ SetTimer(Stack[-1], Stack[-2])
0x91b: Pop(1)
0x91c: Return(); Pop(2)

0x91d: Push((int) 10)
0x91e: @ KillTimer(Stack[-1])
0x91f: Pop(1)
0x920: Return(); Pop(0)

0x921: PushEmpty()
0x922: Push((int) 10)
0x923: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x924: IF (Stack[-1] == 0) GOTO 0x946; Pop(1)

0x925: PushEmpty()
0x926: Call2 0x91d

0x927: Pop(0)
0x928: PushEmpty(bool)
0x929: Stack[-1] = (bool) 0
0x92a: PushEmpty(bool)
0x92b: Call2 0x9fa

0x92c: Pop(0)
0x92d: IF (Stack[-1] == 0) GOTO 0x933; Pop(1)

0x92e: PushEmpty(bool)
0x92f: Call2 0x8fe

0x930: Pop(0)
0x931: IF (Stack[-1] == 0) GOTO 0x933; Pop(1)

0x932: Stack[-1] = (bool) 1
0x933: IF (Stack[-1] == 0) GOTO 0x940; Pop(1)

0x934: PushEmpty(bool)
0x935: Call2 0x8ea

0x936: Pop(0)
0x937: IF (Stack[-1] == 0) GOTO 0x93f; Pop(1)

0x938: PushEmpty(bool, object)
0x939: PushEmpty(object)
0x93a: Call2 0xb6c

0x93b: Stack[-2] = Stack[-1]
0x93c: Pop(1)
0x93d: Call2 0xa90

0x93e: Pop(2)
0x93f: GOTO 0x946

0x940: PushEmpty()
0x941: Call2 0x8f9

0x942: Pop(0)
0x943: PushEmpty()
0x944: Call2 0x914

0x945: Pop(0)
0x946: Return(); Pop(0)

0x947: PushEmpty()
0x948: Call2 0x9d3

0x949: Pop(0)
0x94a: PushEmpty()
0x94b: Call2 0x91d

0x94c: Pop(0)
0x94d: @ lshStopSpeech()
0x94e: Pop(0)
0x94f: @ lshStopAnimation()
0x950: Pop(0)
0x951: @ StopAsync()
0x952: Pop(0)
0x953: @ Hold()
0x954: Pop(0)
0x955: Return(); Pop(0)

0x956: @ StopGroup0()
0x957: Pop(0)
0x958: PushEmpty()
0x959: Call2 0x91d

0x95a: Pop(0)
0x95b: PushEmpty(string)
0x95c: Stack[-1] = "Neutral"
0x95d: Call2 0xb1d

0x95e: Pop(1)
0x95f: PushEmpty()
0x960: Call2 0x914

0x961: Pop(0)
0x962: Return(); Pop(0)

0x963: PushEmpty()
0x964: Push(Stack[-1])
0x965: IF (Stack[-1] == 0) GOTO 0x96a; Pop(1)

0x966: PushEmpty()
0x967: Call2 0x914

0x968: Pop(0)
0x969: GOTO 0x96e

0x96a: PushEmpty(string)
0x96b: Stack[-1] = "Neutral"
0x96c: Call2 0xb1d

0x96d: Pop(1)
0x96e: Return(); Pop(0)

0x96f: PushEmpty(bool, bool)
0x970: @ IsOverrideActive(Stack[-1])
0x971: Pop(0)
0x972: Pop(0); Push((bool) Stack[-1] == 0)
0x973: IF (Stack[-1] == 0) GOTO 0x98b; Pop(1)

0x974: EventDisable(0)
0x975: PushEmpty()
0x976: Call2 0x9d3

0x977: Pop(0)
0x978: PushEmpty(bool, object)
0x979: Stack[-1] = Stack[-5]
0x97a: Call2 0x9f1

0x97b: Pop(2)
0x97c: EventEnable(0)
0x97d: PushEmpty(object)
0x97e: Stack[-1] = Stack[-4]
0x97f: Call2 0xde4

0x980: Pop(1)
0x981: PushEmpty(string)
0x982: Stack[-1] = "Neutral"
0x983: Call2 0xb1d

0x984: Pop(1)
0x985: PushEmpty()
0x986: Call2 0x91d

0x987: Pop(0)
0x988: PushEmpty()
0x989: Call2 0x914

0x98a: Pop(0)
0x98b: Return(); Pop(2)

0x98c: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x98d: @ WaitForAnimEnd()
0x98e: Pop(0)
0x98f: PushEmpty(bool)
0x990: Call2 0x9fa

0x991: Pop(0)
0x992: Pop(1); Push((bool) Stack[-1] == 0)
0x993: IF (Stack[-1] == 0) GOTO 0x995; Pop(1)

0x994: Return(); Pop(12)

0x995: PushEmpty(int)
0x996: Call2 0xbcc

0x997: Stack[-7] = Stack[-1]
0x998: Pop(1)
0x999: Stack[-5] = (int) 0
0x99a: PushEmpty(bool)
0x99b: Stack[-1] = (bool) 0
0x99c: Push((int) 5)
0x99d: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x99e: IF (Stack[-1] == 0) GOTO 0x9a4; Pop(1)

0x99f: PushEmpty(bool)
0x9a0: Call2 0x9fa

0x9a1: Pop(0)
0x9a2: IF (Stack[-1] == 0) GOTO 0x9a4; Pop(1)

0x9a3: Stack[-1] = (bool) 1
0x9a4: IF (Stack[-1] == 0) GOTO 0x9ce; Pop(1)

0x9a5: Pop(0); Push((bool) Stack[-6] == 0)
0x9a6: IF (Stack[-1] == 0) GOTO 0x9ae; Pop(1)

0x9a7: Push((int) 3)
0x9a8: @ Sleep(Stack[-1], Stack[-5])
0x9a9: Pop(1)
0x9aa: Pop(0); Push((bool) Stack[-4] == 0)
0x9ab: IF (Stack[-1] == 0) GOTO 0x9ad; Pop(1)

0x9ac: GOTO 0x9ce

0x9ad: GOTO 0x9c3

0x9ae: @ irand(Stack[-3], Stack[-6])
0x9af: Pop(0)
0x9b0: Push((int) 5)
0x9b1: @ irand(Stack[-3], Stack[-1])
0x9b2: Pop(1)
0x9b3: Push((int) 0)
0x9b4: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x9b5: IF (Stack[-1] == 0) GOTO 0x9b7; Pop(1)

0x9b6: Stack[-3] = (int) 0
0x9b7: Push("all")
0x9b8: PushEmpty(string, int)
0x9b9: Stack[-1] = Stack[-6]
0x9ba: Call2 0xbc5

0x9bb: Pop(1)
0x9bc: @ PlayAnimation(Stack[-2], Stack[-1])
0x9bd: Pop(2)
0x9be: @ WaitForAnimEnd(Stack[-1])
0x9bf: Pop(0)
0x9c0: Pop(0); Push((bool) Stack[-1] == 0)
0x9c1: IF (Stack[-1] == 0) GOTO 0x9c3; Pop(1)

0x9c2: GOTO 0x9ce

0x9c3: PushEmpty(bool)
0x9c4: Call2 0x9d1

0x9c5: Pop(0)
0x9c6: Pop(1); Push((bool) Stack[-1] == 0)
0x9c7: IF (Stack[-1] == 0) GOTO 0x9c9; Pop(1)

0x9c8: GOTO 0x9ce

0x9c9: @ ResetAAS()
0x9ca: Pop(0)
0x9cb: Push((int) 1)
0x9cc: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x9cd: GOTO 0x99a

0x9ce: @ ResetAAS()
0x9cf: Pop(0)
0x9d0: Return(); Pop(12)

0x9d1: Stack[-1] = (bool) 1
0x9d2: Return(); Pop(0)

0x9d3: @ StopAnimation()
0x9d4: Pop(0)
0x9d5: @ StopGroup0()
0x9d6: Pop(0)
0x9d7: Return(); Pop(0)

0x9d8: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x9d9: @ GetPosition(Stack[-3])
0x9da: Pop(0)
0x9db: @@ GetPosition(Stack[-2])
0x9dc: Pop(0)
0x9dd: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x9de: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x9df: Return(); Pop(6)

0x9e0: PushEmpty(int, int)
0x9e1: @@ GetProperty(Stack[-4], Stack[-1])
0x9e2: Pop(0)
0x9e3: Pop(0); Push(Stack[-1] + Stack[-3]);
0x9e4: @@ SetProperty(Stack[-5], Stack[-1])
0x9e5: Pop(1)
0x9e6: Return(); Pop(2)

0x9e7: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x9e8: @ GetPosition(Stack[-3])
0x9e9: Pop(0)
0x9ea: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x9eb: Push(CvectorIndex(Stack[-2], 0))
0x9ec: Push(CvectorIndex(Stack[-3], 2))
0x9ed: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x9ee: Pop(2)
0x9ef: Stack[-8] = Stack[-1]
0x9f0: Return(); Pop(6)

0x9f1: PushEmpty(cvector, cvector)
0x9f2: @@ GetPosition(Stack[-1])
0x9f3: Pop(0)
0x9f4: PushEmpty(bool, cvector)
0x9f5: Stack[-1] = Stack[-3]
0x9f6: Call2 0x9e7

0x9f7: Stack[-6] = Stack[-2]
0x9f8: Pop(2)
0x9f9: Return(); Pop(2)

0x9fa: PushEmpty(bool, bool)
0x9fb: @ IsLoaded(Stack[-1])
0x9fc: Pop(0)
0x9fd: Stack[-3] = Stack[-1]
0x9fe: Return(); Pop(2)

0x9ff: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0xa00: @@ GetPosition(Stack[-8])
0xa01: Pop(0)
0xa02: @@ GetEyesHeight(Stack[-9])
0xa03: Pop(0)
0xa04: Push(CvectorIndex(Stack[-8], 1))
0xa05: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xa06: CvectorIndex(Stack[-9], 1) = Stack[-1];
0xa07: @ GetPosition(Stack[-7])
0xa08: Pop(0)
0xa09: @ GetEyesHeight(Stack[-9])
0xa0a: Pop(0)
0xa0b: Push(CvectorIndex(Stack[-7], 1))
0xa0c: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xa0d: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xa0e: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xa0f: Push(CvectorIndex(Stack[-6], 1))
0xa10: Stack[-1] = (int) 0
0xa11: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xa12: Pop(0); Push(Stack[-6] | Stack[-6]);
0xa13: Pop(1); Push(Sqrt(Stack[-1]))
0xa14: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0xa15: Stack[-5] = -Stack[-6]; Pop(0);
0xa16: Pop(0); Push(Stack[-6] * Stack[-19]);
0xa17: PushEmpty(cvector, cvector)
0xa18: Push(CVector(0.0, 1.0, 0.0))
0xa19: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0xa1a: Call2 0xb72

0xa1b: Pop(1)
0xa1c: Push((int) 25)
0xa1d: Pop(2); Push(Stack[-2] * Stack[-1]);
0xa1e: Pop(2); Push(Stack[-2] + Stack[-1]);
0xa1f: Push(CVector(0.0, 10.0, 0.0))
0xa20: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xa21: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0xa22: @ IsOverrideActive(Stack[-2])
0xa23: Pop(0)
0xa24: Push(Stack[-2])
0xa25: IF (Stack[-1] == 0) GOTO 0xa28; Pop(1)

0xa26: Stack[-21] = (bool) 0
0xa27: Return(); Pop(18)

0xa28: @ StopWorld()
0xa29: Pop(0)
0xa2a: Push((bool) 1)
0xa2b: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0xa2c: Pop(1)
0xa2d: Push(CvectorIndex(Stack[-4], 0))
0xa2e: Push(CvectorIndex(Stack[-5], 2))
0xa2f: @ Rotate(Stack[-2], Stack[-1])
0xa30: Pop(2)
0xa31: PushEmpty(bool)
0xa32: Call2 0xbe5

0xa33: Pop(0)
0xa34: IF (Stack[-1] == 0) GOTO 0xa36; Pop(1)

0xa35: GOTO 0xa3e

0xa36: Push("head")
0xa37: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xa38: Pop(1)
0xa39: Push(Stack[-1])
0xa3a: IF (Stack[-1] == 0) GOTO 0xa3e; Pop(1)

0xa3b: Push("head")
0xa3c: @ LookAsyncCamera(Stack[-1])
0xa3d: Pop(1)
0xa3e: @ CameraWaitForPlayFinish()
0xa3f: Pop(0)
0xa40: @ ResumeWorld()
0xa41: Pop(0)
0xa42: Stack[-21] = (bool) 1
0xa43: Return(); Pop(18)

0xa44: PushEmpty(bool, bool)
0xa45: Push((bool) 1)
0xa46: @ CameraSwitchToNormal(Stack[-1])
0xa47: Pop(1)
0xa48: PushEmpty(bool)
0xa49: Call2 0xbe5

0xa4a: Pop(0)
0xa4b: IF (Stack[-1] == 0) GOTO 0xa4d; Pop(1)

0xa4c: GOTO 0xa55

0xa4d: Push("head")
0xa4e: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xa4f: Pop(1)
0xa50: Push(Stack[-1])
0xa51: IF (Stack[-1] == 0) GOTO 0xa55; Pop(1)

0xa52: Push("head")
0xa53: @ UnlookAsync(Stack[-1])
0xa54: Pop(1)
0xa55: Return(); Pop(2)

0xa56: PushEmpty(int, int, int, int)
0xa57: Push("voice_common")
0xa58: @ GetVariable(Stack[-1], Stack[-3])
0xa59: Pop(1)
0xa5a: Push(Stack[-2])
0xa5b: IF (Stack[-1] == 0) GOTO 0xa7c; Pop(1)

0xa5c: PushEmpty(bool, object)
0xa5d: Stack[-1] = Stack[-7]
0xa5e: Call2 0xa90

0xa5f: Pop(1)
0xa60: Pop(1); Push((bool) Stack[-1] == 0)
0xa61: IF (Stack[-1] == 0) GOTO 0xa6a; Pop(1)

0xa62: PushEmpty(bool, object)
0xa63: Stack[-1] = Stack[-7]
0xa64: Call2 0xab5

0xa65: Pop(1)
0xa66: Pop(1); Push((bool) Stack[-1] == 0)
0xa67: IF (Stack[-1] == 0) GOTO 0xa6a; Pop(1)

0xa68: Stack[-6] = (bool) 0
0xa69: Return(); Pop(4)

0xa6a: Push((int) 2)
0xa6b: @ irand(Stack[-2], Stack[-1])
0xa6c: Pop(1)
0xa6d: Push(Stack[-1])
0xa6e: IF (Stack[-1] == 0) GOTO 0xa77; Pop(1)

0xa6f: Push("voice_common")
0xa70: Push((int) 1)
0xa71: Pop(1); Push(Stack[-4] + Stack[-1]);
0xa72: Push((int) 3)
0xa73: Pop(2); Push(Stack[-2] % Stack[-1]);
0xa74: @ SetVariable(Stack[-2], Stack[-1])
0xa75: Pop(2)
0xa76: GOTO 0xa7b

0xa77: Push("voice_common")
0xa78: Push((int) 0)
0xa79: @ SetVariable(Stack[-2], Stack[-1])
0xa7a: Pop(2)
0xa7b: GOTO 0xa8e

0xa7c: PushEmpty(bool, object)
0xa7d: Stack[-1] = Stack[-7]
0xa7e: Call2 0xab5

0xa7f: Pop(1)
0xa80: Pop(1); Push((bool) Stack[-1] == 0)
0xa81: IF (Stack[-1] == 0) GOTO 0xa8a; Pop(1)

0xa82: PushEmpty(bool, object)
0xa83: Stack[-1] = Stack[-7]
0xa84: Call2 0xa90

0xa85: Pop(1)
0xa86: Pop(1); Push((bool) Stack[-1] == 0)
0xa87: IF (Stack[-1] == 0) GOTO 0xa8a; Pop(1)

0xa88: Stack[-6] = (bool) 0
0xa89: Return(); Pop(4)

0xa8a: Push("voice_common")
0xa8b: Push((int) 1)
0xa8c: @ SetVariable(Stack[-2], Stack[-1])
0xa8d: Pop(2)
0xa8e: Stack[-6] = (bool) 1
0xa8f: Return(); Pop(4)

0xa90: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xa91: Stack[-5] = "c"
0xa92: Stack[-4] = (int) 0
0xa93: Push((int) 1)
0xa94: IF (Stack[-1] == 0) GOTO 0xaa0; Pop(1)

0xa95: Push((int) 1)
0xa96: Pop(1); Push(Stack[-5] + Stack[-1]);
0xa97: Pop(1); Push(Stack[-6] + Stack[-1]);
0xa98: @@ HasProperty(Stack[-1], Stack[-4])
0xa99: Pop(1)
0xa9a: Pop(0); Push((bool) Stack[-3] == 0)
0xa9b: IF (Stack[-1] == 0) GOTO 0xa9d; Pop(1)

0xa9c: GOTO 0xaa0

0xa9d: Push((int) 1)
0xa9e: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xa9f: GOTO 0xa93

0xaa0: Pop(0); Push((bool) Stack[-4] == 0)
0xaa1: IF (Stack[-1] == 0) GOTO 0xaa4; Pop(1)

0xaa2: Stack[-12] = (bool) 0
0xaa3: Return(); Pop(10)

0xaa4: Stack[-2] = (int) 0
0xaa5: Push((int) 1)
0xaa6: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xaa7: IF (Stack[-1] == 0) GOTO 0xaaa; Pop(1)

0xaa8: @ irand(Stack[-2], Stack[-4])
0xaa9: Pop(0)
0xaaa: Push((int) 1)
0xaab: Pop(1); Push(Stack[-3] + Stack[-1]);
0xaac: Pop(1); Push(Stack[-6] + Stack[-1]);
0xaad: @@ GetProperty(Stack[-1], Stack[-2])
0xaae: Pop(1)
0xaaf: PushEmpty(bool, string)
0xab0: Stack[-1] = Stack[-3]
0xab1: Call2 0xb3c

0xab2: Stack[-14] = Stack[-2]
0xab3: Pop(2)
0xab4: Return(); Pop(10)

0xab5: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xab6: Push("d")
0xab7: PushEmpty(int)
0xab8: Call2 0xbb6

0xab9: Pop(0)
0xaba: Pop(2); Push(Stack[-2] + Stack[-1]);
0xabb: Push("m")
0xabc: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0xabd: Stack[-4] = (int) 0
0xabe: Push((int) 1)
0xabf: IF (Stack[-1] == 0) GOTO 0xacb; Pop(1)

0xac0: Push((int) 1)
0xac1: Pop(1); Push(Stack[-5] + Stack[-1]);
0xac2: Pop(1); Push(Stack[-6] + Stack[-1]);
0xac3: @@ HasProperty(Stack[-1], Stack[-4])
0xac4: Pop(1)
0xac5: Pop(0); Push((bool) Stack[-3] == 0)
0xac6: IF (Stack[-1] == 0) GOTO 0xac8; Pop(1)

0xac7: GOTO 0xacb

0xac8: Push((int) 1)
0xac9: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xaca: GOTO 0xabe

0xacb: Pop(0); Push((bool) Stack[-4] == 0)
0xacc: IF (Stack[-1] == 0) GOTO 0xacf; Pop(1)

0xacd: Stack[-12] = (bool) 0
0xace: Return(); Pop(10)

0xacf: Stack[-2] = (int) 0
0xad0: Push((int) 1)
0xad1: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xad2: IF (Stack[-1] == 0) GOTO 0xad5; Pop(1)

0xad3: @ irand(Stack[-2], Stack[-4])
0xad4: Pop(0)
0xad5: Push((int) 1)
0xad6: Pop(1); Push(Stack[-3] + Stack[-1]);
0xad7: Pop(1); Push(Stack[-6] + Stack[-1]);
0xad8: @@ GetProperty(Stack[-1], Stack[-2])
0xad9: Pop(1)
0xada: PushEmpty(bool, string)
0xadb: Stack[-1] = Stack[-3]
0xadc: Call2 0xb3c

0xadd: Stack[-14] = Stack[-2]
0xade: Pop(2)
0xadf: Return(); Pop(10)

0xae0: PushEmpty()
0xae1: PushEmpty(bool, object, float)
0xae2: Stack[-2] = Stack[-4]
0xae3: Stack[-1] = (int) 70
0xae4: Call2 0xae8

0xae5: Stack[-5] = Stack[-3]
0xae6: Pop(3)
0xae7: Return(); Pop(0)

0xae8: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0xae9: @@ GetPosition(Stack[-7])
0xaea: Pop(0)
0xaeb: @@ GetEyesHeight(Stack[-8])
0xaec: Pop(0)
0xaed: Push(CvectorIndex(Stack[-7], 1))
0xaee: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0xaef: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xaf0: @ GetPosition(Stack[-6])
0xaf1: Pop(0)
0xaf2: @ GetEyesHeight(Stack[-8])
0xaf3: Pop(0)
0xaf4: Push(CvectorIndex(Stack[-6], 1))
0xaf5: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0xaf6: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xaf7: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0xaf8: Push(CvectorIndex(Stack[-5], 1))
0xaf9: Stack[-1] = (int) 0
0xafa: CvectorIndex(Stack[-6], 1) = Stack[-1];
0xafb: Pop(0); Push(Stack[-5] | Stack[-5]);
0xafc: Pop(1); Push(Sqrt(Stack[-1]))
0xafd: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0xafe: Stack[-4] = -Stack[-5]; Pop(0);
0xaff: Pop(0); Push(Stack[-5] * Stack[-17]);
0xb00: Push(CVector(0.0, 10.0, 0.0))
0xb01: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0xb02: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0xb03: @ IsOverrideActive(Stack[-1])
0xb04: Pop(0)
0xb05: Push(Stack[-1])
0xb06: IF (Stack[-1] == 0) GOTO 0xb09; Pop(1)

0xb07: Stack[-19] = (bool) 0
0xb08: Return(); Pop(16)

0xb09: @ StopWorld()
0xb0a: Pop(0)
0xb0b: Push((bool) 1)
0xb0c: @ CameraTransit(Stack[-3], Stack[-5], Stack[-1])
0xb0d: Pop(1)
0xb0e: Push(CvectorIndex(Stack[-3], 0))
0xb0f: Push(CvectorIndex(Stack[-4], 2))
0xb10: @ Rotate(Stack[-2], Stack[-1])
0xb11: Pop(2)
0xb12: @ CameraWaitForPlayFinish()
0xb13: Pop(0)
0xb14: @ ResumeWorld()
0xb15: Pop(0)
0xb16: Stack[-19] = (bool) 1
0xb17: Return(); Pop(16)

0xb18: PushEmpty()
0xb19: Push((bool) 1)
0xb1a: @ CameraSwitchToNormal(Stack[-1])
0xb1b: Pop(1)
0xb1c: Return(); Pop(0)

0xb1d: PushEmpty(bool, float, float, bool, float, float)
0xb1e: @ lshHasAnimation(Stack[-3], Stack[-7])
0xb1f: Pop(0)
0xb20: Push(Stack[-3])
0xb21: IF (Stack[-1] == 0) GOTO 0xb28; Pop(1)

0xb22: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0xb23: Pop(0)
0xb24: Push((bool) 0)
0xb25: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xb26: Pop(1)
0xb27: GOTO 0xb2c

0xb28: Push("Can't find lsh animation : ")
0xb29: Pop(1); Push(Stack[-1] + Stack[-8]);
0xb2a: @ Trace(Stack[-1])
0xb2b: Pop(1)
0xb2c: Return(); Pop(6)

0xb2d: PushEmpty(bool, float, float, bool, float, float)
0xb2e: @ lshHasAnimation(Stack[-3], Stack[-8])
0xb2f: Pop(0)
0xb30: Push(Stack[-3])
0xb31: IF (Stack[-1] == 0) GOTO 0xb37; Pop(1)

0xb32: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0xb33: Pop(0)
0xb34: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0xb35: Pop(0)
0xb36: GOTO 0xb3b

0xb37: Push("Can't find lsh animation : ")
0xb38: Pop(1); Push(Stack[-1] + Stack[-9]);
0xb39: @ Trace(Stack[-1])
0xb3a: Pop(1)
0xb3b: Return(); Pop(6)

0xb3c: PushEmpty(bool, bool)
0xb3d: PushEmpty(bool)
0xb3e: Call2 0xbe5

0xb3f: Pop(0)
0xb40: IF (Stack[-1] == 0) GOTO 0xb49; Pop(1)

0xb41: @ lshHasSpeech(Stack[-1], Stack[-3])
0xb42: Pop(0)
0xb43: Push(Stack[-1])
0xb44: IF (Stack[-1] == 0) GOTO 0xb49; Pop(1)

0xb45: @ lshPlaySpeech(Stack[-3])
0xb46: Pop(0)
0xb47: Stack[-4] = (bool) 1
0xb48: Return(); Pop(2)

0xb49: Stack[-4] = (bool) 0
0xb4a: Return(); Pop(2)

0xb4b: PushEmpty(bool)
0xb4c: Call2 0xbe5

0xb4d: Pop(0)
0xb4e: IF (Stack[-1] == 0) GOTO 0xb51; Pop(1)

0xb4f: @ lshStopSpeech()
0xb50: Pop(0)
0xb51: Return(); Pop(0)

0xb52: PushEmpty(bool, bool)
0xb53: PushEmpty(bool, int, int)
0xb54: Stack[-2] = Stack[-7]
0xb55: Stack[-1] = Stack[-6]
0xb56: Call2 0xb7c

0xb57: Pop(2)
0xb58: IF (Stack[-1] == 0) GOTO 0xb5c; Pop(1)

0xb59: Push((int) 0)
0xb5a: @ AddItem(Stack[-2], Stack[-6], Stack[-1])
0xb5b: Pop(1)
0xb5c: Return(); Pop(2)

0xb5d: PushEmpty(int, bool, int, bool)
0xb5e: PushEmpty(bool, int, int)
0xb5f: Stack[-2] = Stack[-10]
0xb60: Stack[-1] = Stack[-9]
0xb61: Call2 0xb7c

0xb62: Pop(2)
0xb63: IF (Stack[-1] == 0) GOTO 0xb6b; Pop(1)

0xb64: @ irand(Stack[-2], Stack[-5])
0xb65: Pop(0)
0xb66: Push((int) 0)
0xb67: Push((int) 1)
0xb68: Pop(1); Push(Stack[-4] + Stack[-1]);
0xb69: @ AddItem(Stack[-3], Stack[-10], Stack[-2], Stack[-1])
0xb6a: Pop(2)
0xb6b: Return(); Pop(4)

0xb6c: PushEmpty(object, object)
0xb6d: @ self(Stack[-1])
0xb6e: Pop(0)
0xb6f: Stack[-3] = Stack[-1]
0xb70: Return(); Pop(2)

0xb71: Stack[-1] = 0
0xb72: PushEmpty(float, float)
0xb73: Pop(0); Push(Stack[-3] | Stack[-3]);
0xb74: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xb75: Push((float)0.0)
0xb76: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xb77: IF (Stack[-1] == 0) GOTO 0xb7a; Pop(1)

0xb78: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xb79: Return(); Pop(2)

0xb7a: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xb7b: Return(); Pop(2)

0xb7c: PushEmpty(int, int)
0xb7d: @ irand(Stack[-1], Stack[-3])
0xb7e: Pop(0)
0xb7f: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0xb80: Return(); Pop(2)

0xb81: PushEmpty(int, int)
0xb82: @ GetVariable(Stack[-3], Stack[-1])
0xb83: Pop(0)
0xb84: Stack[-4] = Stack[-1]
0xb85: Return(); Pop(2)

0xb86: PushEmpty(object, object)
0xb87: @ CreateIntVector(Stack[-1])
0xb88: Pop(0)
0xb89: @@ add(Stack[-4])
0xb8a: Pop(0)
0xb8b: @@ add(Stack[-3])
0xb8c: Pop(0)
0xb8d: Push((int) 3)
0xb8e: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xb8f: Pop(1)
0xb90: Return(); Pop(2)

0xb91: Stack[-1] = 0
0xb92: PushEmpty(int, int)
0xb93: PushEmpty(object, string, int)
0xb94: Stack[-3] = Stack[-7]
0xb95: Stack[-2] = "money"
0xb96: Stack[-1] = Stack[-6]
0xb97: Call2 0x9e0

0xb98: Pop(3)
0xb99: Push((int) 0)
0xb9a: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0xb9b: IF (Stack[-1] == 0) GOTO 0xba4; Pop(1)

0xb9c: Push("Money")
0xb9d: @ GetInvItemByName(Stack[-2], Stack[-1])
0xb9e: Pop(1)
0xb9f: PushEmpty(int, int)
0xba0: Stack[-2] = Stack[-3]
0xba1: Stack[-1] = Stack[-5]
0xba2: Call2 0xb86

0xba3: Pop(2)
0xba4: Return(); Pop(2)

0xba5: PushEmpty(object, object)
0xba6: @ FindActor(Stack[-1], Stack[-4])
0xba7: Pop(0)
0xba8: Pop(0); Push((bool) Stack[-1] == 0)
0xba9: IF (Stack[-1] == 0) GOTO 0xbac; Pop(1)

0xbaa: Stack[-5] = (bool) 0
0xbab: Return(); Pop(2)

0xbac: @ Trigger(Stack[-1], Stack[-3])
0xbad: Pop(0)
0xbae: Stack[-5] = (bool) 1
0xbaf: Return(); Pop(2)

0xbb0: Stack[-1] = 0
0xbb1: PushEmpty(float, float)
0xbb2: @ GetGameTime(Stack[-1])
0xbb3: Pop(0)
0xbb4: Stack[-3] = Stack[-1]
0xbb5: Return(); Pop(2)

0xbb6: PushEmpty(float, float)
0xbb7: @ GetGameTime(Stack[-1])
0xbb8: Pop(0)
0xbb9: Push((int) 1)
0xbba: PushEmpty(int)
0xbbb: Push((int) 24)
0xbbc: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xbbd: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xbbe: Return(); Pop(2)

0xbbf: PushEmpty()
0xbc0: PushEmpty(int)
0xbc1: Call2 0xbb6

0xbc2: Pop(0)
0xbc3: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0xbc4: Return(); Pop(0)

0xbc5: PushEmpty(string, string)
0xbc6: Stack[-1] = "idle"
0xbc7: Push(Stack[-3])
0xbc8: IF (Stack[-1] == 0) GOTO 0xbca; Pop(1)

0xbc9: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xbca: Stack[-4] = Stack[-1]
0xbcb: Return(); Pop(2)

0xbcc: PushEmpty(int, bool, int, bool)
0xbcd: Stack[-2] = (int) 0
0xbce: Push("all")
0xbcf: PushEmpty(string, int)
0xbd0: Stack[-1] = Stack[-5]
0xbd1: Call2 0xbc5

0xbd2: Pop(1)
0xbd3: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xbd4: Pop(2)
0xbd5: Pop(0); Push((bool) Stack[-1] == 0)
0xbd6: IF (Stack[-1] == 0) GOTO 0xbd8; Pop(1)

0xbd7: GOTO 0xbdb

0xbd8: Push((int) 1)
0xbd9: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xbda: GOTO 0xbce

0xbdb: Stack[-5] = Stack[-2]
0xbdc: Return(); Pop(4)

0xbdd: Stack[-1] = (int) 515529
0xbde: Return(); Pop(0)

0xbdf: Stack[-1] = (int) 502855
0xbe0: Return(); Pop(0)

0xbe1: Stack[-1] = "ui/NPC_Andrei.png"
0xbe2: Return(); Pop(0)

0xbe3: Stack[-1] = "ui/NPC_Andrei_b.png"
0xbe4: Return(); Pop(0)

0xbe5: Stack[-1] = (bool) 1
0xbe6: Return(); Pop(0)

0xbe7: PushEmpty()
0xbe8: Push("oob5Andrei1")
0xbe9: Push((int) 1)
0xbea: @ SetVariable(Stack[-2], Stack[-1])
0xbeb: Pop(2)
0xbec: Return(); Pop(0)

0xbed: PushEmpty()
0xbee: Push("oob2Andrei1")
0xbef: Push((int) 1)
0xbf0: @ SetVariable(Stack[-2], Stack[-1])
0xbf1: Pop(2)
0xbf2: Return(); Pop(0)

0xbf3: PushEmpty()
0xbf4: Push("money 4000 is given")
0xbf5: @ Trace(Stack[-1])
0xbf6: Pop(1)
0xbf7: PushEmpty(object, int)
0xbf8: Stack[-2] = Stack[-4]
0xbf9: Stack[-1] = (int) 4000
0xbfa: Call2 0xb92

0xbfb: Pop(2)
0xbfc: Return(); Pop(0)

0xbfd: PushEmpty()
0xbfe: Push("playsound")
0xbff: Push("givemoney")
0xc00: @ TriggerWorld(Stack[-2], Stack[-1])
0xc01: Pop(2)
0xc02: Return(); Pop(0)

0xc03: PushEmpty()
0xc04: Push("oob2Andrei2")
0xc05: Push((int) 1)
0xc06: @ SetVariable(Stack[-2], Stack[-1])
0xc07: Pop(2)
0xc08: Return(); Pop(0)

0xc09: PushEmpty()
0xc0a: Push("b2q03")
0xc0b: Push((int) 1)
0xc0c: @ SetVariable(Stack[-2], Stack[-1])
0xc0d: Pop(2)
0xc0e: PushEmpty()
0xc0f: Call2 0xcfc

0xc10: Pop(0)
0xc11: PushEmpty()
0xc12: Call2 0xd09

0xc13: Pop(0)
0xc14: PushEmpty(bool, string, string)
0xc15: Stack[-2] = "quest_b2_03"
0xc16: Stack[-1] = "place_maria"
0xc17: Call2 0xba5

0xc18: Pop(3)
0xc19: Return(); Pop(0)

0xc1a: PushEmpty(object, int, object, int)
0xc1b: PushEmpty(object)
0xc1c: Call2 0xd73

0xc1d: Stack[-3] = Stack[-1]
0xc1e: Pop(1)
0xc1f: Push("b2q03GoodShop")
0xc20: Push("pt_b2q03_good_shop")
0xc21: Push((int) 3)
0xc22: Push((int) 531061)
0xc23: PushEmpty(float)
0xc24: Call2 0xbb1

0xc25: Pop(0)
0xc26: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc27: Pop(5)
0xc28: PushEmpty()
0xc29: Call2 0xd16

0xc2a: Pop(0)
0xc2b: Push("grass_brown_tvir")
0xc2c: Push((int) 10)
0xc2d: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0xc2e: Pop(2)
0xc2f: PushEmpty(bool, string, string)
0xc30: Stack[-2] = "quest_b2_03"
0xc31: Stack[-1] = "completed"
0xc32: Call2 0xba5

0xc33: Pop(3)
0xc34: Return(); Pop(4)

0xc35: Stack[-2] = 0
0xc36: PushEmpty()
0xc37: Push("b2AndreiVisit")
0xc38: Push((int) 1)
0xc39: @ SetVariable(Stack[-2], Stack[-1])
0xc3a: Pop(2)
0xc3b: Return(); Pop(0)

0xc3c: PushEmpty()
0xc3d: PushEmpty(object, string, float)
0xc3e: PushEmpty(object)
0xc3f: Call2 0xd73

0xc40: Stack[-4] = Stack[-1]
0xc41: Pop(1)
0xc42: Stack[-2] = "pt_b2q03_good_shop"
0xc43: Stack[-1] = (int) 2
0xc44: Call2 0xd84

0xc45: Pop(3)
0xc46: PushEmpty(object)
0xc47: Call2 0xd73

0xc48: Pop(0)
0xc49: @@ ShowMap(Stack[-1])
0xc4a: Pop(1)
0xc4b: Return(); Pop(0)

0xc4c: PushEmpty()
0xc4d: Push("b2q03_1")
0xc4e: Push((int) 2)
0xc4f: @ SetVariable(Stack[-2], Stack[-1])
0xc50: Pop(2)
0xc51: PushEmpty()
0xc52: Call2 0xd30

0xc53: Pop(0)
0xc54: PushEmpty()
0xc55: Call2 0xd23

0xc56: Pop(0)
0xc57: Return(); Pop(0)

0xc58: PushEmpty()
0xc59: PushEmpty(int, string)
0xc5a: Stack[-1] = "b2q03_1"
0xc5b: Call2 0xb81

0xc5c: Pop(1)
0xc5d: Push((int) 0)
0xc5e: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0xc5f: IF (Stack[-1] == 0) GOTO 0xc63; Pop(1)

0xc60: PushEmpty()
0xc61: Call2 0xd3d

0xc62: Pop(0)
0xc63: Return(); Pop(0)

0xc64: PushEmpty()
0xc65: Push("oob2Andrei3")
0xc66: Push((int) 1)
0xc67: @ SetVariable(Stack[-2], Stack[-1])
0xc68: Pop(2)
0xc69: Return(); Pop(0)

0xc6a: PushEmpty()
0xc6b: Push((int) 1000)
0xc6c: @@ SetReturnValue(Stack[-1])
0xc6d: Pop(1)
0xc6e: Return(); Pop(0)

0xc6f: PushEmpty()
0xc70: PushEmpty(int, string)
0xc71: Stack[-1] = "oob2Andrei2"
0xc72: Call2 0xb81

0xc73: Pop(1)
0xc74: Push((int) 0)
0xc75: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc76: IF (Stack[-1] == 0) GOTO 0xc79; Pop(1)

0xc77: Stack[-2] = (bool) 1
0xc78: Return(); Pop(0)

0xc79: Stack[-2] = (bool) 0
0xc7a: Return(); Pop(0)

0xc7b: PushEmpty()
0xc7c: PushEmpty(int, string)
0xc7d: Stack[-1] = "b2q03"
0xc7e: Call2 0xb81

0xc7f: Pop(1)
0xc80: Push((int) 1)
0xc81: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc82: IF (Stack[-1] == 0) GOTO 0xc85; Pop(1)

0xc83: Stack[-2] = (bool) 1
0xc84: Return(); Pop(0)

0xc85: Stack[-2] = (bool) 0
0xc86: Return(); Pop(0)

0xc87: PushEmpty()
0xc88: PushEmpty(int, string)
0xc89: Stack[-1] = "b2q03"
0xc8a: Call2 0xb81

0xc8b: Pop(1)
0xc8c: Push((int) 0)
0xc8d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc8e: IF (Stack[-1] == 0) GOTO 0xc91; Pop(1)

0xc8f: Stack[-2] = (bool) 1
0xc90: Return(); Pop(0)

0xc91: Stack[-2] = (bool) 0
0xc92: Return(); Pop(0)

0xc93: PushEmpty()
0xc94: PushEmpty(bool, object)
0xc95: Stack[-1] = Stack[-3]
0xc96: Call2 0xcf1

0xc97: Pop(1)
0xc98: IF (Stack[-1] == 0) GOTO 0xc9b; Pop(1)

0xc99: Stack[-2] = (bool) 1
0xc9a: Return(); Pop(0)

0xc9b: Stack[-2] = (bool) 0
0xc9c: Return(); Pop(0)

0xc9d: PushEmpty()
0xc9e: PushEmpty(int, string)
0xc9f: Stack[-1] = "b2q03"
0xca0: Call2 0xb81

0xca1: Pop(1)
0xca2: Push((int) 1000)
0xca3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xca4: IF (Stack[-1] == 0) GOTO 0xca7; Pop(1)

0xca5: Stack[-2] = (bool) 1
0xca6: Return(); Pop(0)

0xca7: Stack[-2] = (bool) 0
0xca8: Return(); Pop(0)

0xca9: PushEmpty()
0xcaa: PushEmpty(int, string)
0xcab: Stack[-1] = "b2q03_1"
0xcac: Call2 0xb81

0xcad: Pop(1)
0xcae: Push((int) 1)
0xcaf: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xcb0: IF (Stack[-1] == 0) GOTO 0xcb3; Pop(1)

0xcb1: Stack[-2] = (bool) 1
0xcb2: Return(); Pop(0)

0xcb3: Stack[-2] = (bool) 0
0xcb4: Return(); Pop(0)

0xcb5: PushEmpty()
0xcb6: PushEmpty(int, string)
0xcb7: Stack[-1] = "b2q03_1"
0xcb8: Call2 0xb81

0xcb9: Pop(1)
0xcba: Push((int) 2)
0xcbb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xcbc: IF (Stack[-1] == 0) GOTO 0xcbf; Pop(1)

0xcbd: Stack[-2] = (bool) 1
0xcbe: Return(); Pop(0)

0xcbf: Stack[-2] = (bool) 0
0xcc0: Return(); Pop(0)

0xcc1: PushEmpty()
0xcc2: PushEmpty(int, string)
0xcc3: Stack[-1] = "oob2Andrei3"
0xcc4: Call2 0xb81

0xcc5: Pop(1)
0xcc6: Push((int) 0)
0xcc7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xcc8: IF (Stack[-1] == 0) GOTO 0xccb; Pop(1)

0xcc9: Stack[-2] = (bool) 1
0xcca: Return(); Pop(0)

0xccb: Stack[-2] = (bool) 0
0xccc: Return(); Pop(0)

0xccd: PushEmpty()
0xcce: PushEmpty(int, string)
0xccf: Stack[-1] = "b5q01"
0xcd0: Call2 0xb81

0xcd1: Pop(1)
0xcd2: Push((int) 1)
0xcd3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xcd4: IF (Stack[-1] == 0) GOTO 0xcd7; Pop(1)

0xcd5: Stack[-2] = (bool) 1
0xcd6: Return(); Pop(0)

0xcd7: Stack[-2] = (bool) 0
0xcd8: Return(); Pop(0)

0xcd9: PushEmpty()
0xcda: PushEmpty(int, string)
0xcdb: Stack[-1] = "oob5Andrei1"
0xcdc: Call2 0xb81

0xcdd: Pop(1)
0xcde: Push((int) 0)
0xcdf: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xce0: IF (Stack[-1] == 0) GOTO 0xce3; Pop(1)

0xce1: Stack[-2] = (bool) 1
0xce2: Return(); Pop(0)

0xce3: Stack[-2] = (bool) 0
0xce4: Return(); Pop(0)

0xce5: PushEmpty()
0xce6: PushEmpty(int, string)
0xce7: Stack[-1] = "oob2Andrei1"
0xce8: Call2 0xb81

0xce9: Pop(1)
0xcea: Push((int) 0)
0xceb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xcec: IF (Stack[-1] == 0) GOTO 0xcef; Pop(1)

0xced: Stack[-2] = (bool) 1
0xcee: Return(); Pop(0)

0xcef: Stack[-2] = (bool) 0
0xcf0: Return(); Pop(0)

0xcf1: PushEmpty(int, int)
0xcf2: Push("grass_brown_tvir")
0xcf3: @@ GetItemCountOfType(Stack[-2], Stack[-1])
0xcf4: Pop(1)
0xcf5: Push((int) 10)
0xcf6: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xcf7: IF (Stack[-1] == 0) GOTO 0xcfa; Pop(1)

0xcf8: Stack[-4] = (bool) 1
0xcf9: Return(); Pop(2)

0xcfa: Stack[-4] = (bool) 0
0xcfb: Return(); Pop(2)

0xcfc: PushEmpty(object, object)
0xcfd: Push((int) 585)
0xcfe: Push((int) 2)
0xcff: Push((int) 531046)
0xd00: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xd01: Pop(3)
0xd02: PushEmpty(bool, object, int)
0xd03: Stack[-2] = Stack[-4]
0xd04: Stack[-1] = (int) -1
0xd05: Call2 0xd57

0xd06: Pop(3)
0xd07: Return(); Pop(2)

0xd08: Stack[-1] = 0
0xd09: PushEmpty(object, object)
0xd0a: Push((int) 586)
0xd0b: Push((int) 2)
0xd0c: Push((int) 531047)
0xd0d: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xd0e: Pop(3)
0xd0f: PushEmpty(bool, object, int)
0xd10: Stack[-2] = Stack[-4]
0xd11: Stack[-1] = (int) 585
0xd12: Call2 0xd57

0xd13: Pop(3)
0xd14: Return(); Pop(2)

0xd15: Stack[-1] = 0
0xd16: PushEmpty(object, object)
0xd17: Push((int) 587)
0xd18: Push((int) 2)
0xd19: Push((int) 531051)
0xd1a: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xd1b: Pop(3)
0xd1c: PushEmpty(bool, object, int)
0xd1d: Stack[-2] = Stack[-4]
0xd1e: Stack[-1] = (int) 585
0xd1f: Call2 0xd57

0xd20: Pop(3)
0xd21: Return(); Pop(2)

0xd22: Stack[-1] = 0
0xd23: PushEmpty(object, object)
0xd24: Push((int) 592)
0xd25: Push((int) 2)
0xd26: Push((int) 531080)
0xd27: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xd28: Pop(3)
0xd29: PushEmpty(bool, object, int)
0xd2a: Stack[-2] = Stack[-4]
0xd2b: Stack[-1] = (int) 585
0xd2c: Call2 0xd57

0xd2d: Pop(3)
0xd2e: Return(); Pop(2)

0xd2f: Stack[-1] = 0
0xd30: PushEmpty(object, object)
0xd31: Push((int) 591)
0xd32: Push((int) 2)
0xd33: Push((int) 531079)
0xd34: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xd35: Pop(3)
0xd36: PushEmpty(bool, object, int)
0xd37: Stack[-2] = Stack[-4]
0xd38: Stack[-1] = (int) 588
0xd39: Call2 0xd57

0xd3a: Pop(3)
0xd3b: Return(); Pop(2)

0xd3c: Stack[-1] = 0
0xd3d: PushEmpty(object, object)
0xd3e: Push((int) 612)
0xd3f: Push((int) 2)
0xd40: Push((int) 531559)
0xd41: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xd42: Pop(3)
0xd43: PushEmpty(bool, object, int)
0xd44: Stack[-2] = Stack[-4]
0xd45: Stack[-1] = (int) 588
0xd46: Call2 0xd57

0xd47: Pop(3)
0xd48: Return(); Pop(2)

0xd49: Stack[-1] = 0
0xd4a: PushEmpty(object, object)
0xd4b: @ GetDiaryRoot(Stack[-1])
0xd4c: Pop(0)
0xd4d: Pop(0); Push((bool) Stack[-1] == 0)
0xd4e: IF (Stack[-1] == 0) GOTO 0xd54; Pop(1)

0xd4f: Push("Can't retrieve diary root")
0xd50: @ Trace(Stack[-1])
0xd51: Pop(1)
0xd52: Stack[-3] = (bool) 0
0xd53: Return(); Pop(2)

0xd54: Stack[-3] = Stack[-1]
0xd55: Return(); Pop(2)

0xd56: Stack[-1] = 0
0xd57: PushEmpty(object, object, int, object, object, int)
0xd58: PushEmpty(object)
0xd59: Call2 0xd4a

0xd5a: Stack[-4] = Stack[-1]
0xd5b: Pop(1)
0xd5c: @@ Find(Stack[-7], Stack[-2])
0xd5d: Pop(0)
0xd5e: Pop(0); Push((bool) Stack[-2] == 0)
0xd5f: IF (Stack[-1] == 0) GOTO 0xd66; Pop(1)

0xd60: Push("Can't find diary parent with id: ")
0xd61: Pop(1); Push(Stack[-1] + Stack[-8]);
0xd62: @ Trace(Stack[-1])
0xd63: Pop(1)
0xd64: Stack[-9] = (bool) 0
0xd65: Return(); Pop(6)

0xd66: @@ AddChild(Stack[-8])
0xd67: Pop(0)
0xd68: Push((int) 7)
0xd69: @ SendWorldWndMessage(Stack[-1])
0xd6a: Pop(1)
0xd6b: @@ GetCategory(Stack[-1])
0xd6c: Pop(0)
0xd6d: @ SetDiarySection(Stack[-1])
0xd6e: Pop(0)
0xd6f: Stack[-9] = (bool) 0
0xd70: Return(); Pop(6)

0xd71: Stack[-2] = 0
0xd72: Stack[-3] = 0
0xd73: PushEmpty(object, object, object, object)
0xd74: @ GetMainOutdoorScene(Stack[-2])
0xd75: Pop(0)
0xd76: Pop(0); Push((bool) Stack[-2] == 0)
0xd77: IF (Stack[-1] == 0) GOTO 0xd7e; Pop(1)

0xd78: Push("Can't find main outdoor scene")
0xd79: @ Trace(Stack[-1])
0xd7a: Pop(1)
0xd7b: Stack[-1] = 0
0xd7c: Stack[-5] = Stack[-1]
0xd7d: Return(); Pop(4)

0xd7e: @@ GetMap(Stack[-1])
0xd7f: Pop(0)
0xd80: Stack[-5] = Stack[-1]
0xd81: Return(); Pop(4)

0xd82: Stack[-1] = 0
0xd83: Stack[-2] = 0
0xd84: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0xd85: @ GetMainOutdoorScene(Stack[-2])
0xd86: Pop(0)
0xd87: Pop(0); Push((bool) Stack[-2] == 0)
0xd88: IF (Stack[-1] == 0) GOTO 0xd8d; Pop(1)

0xd89: Push("Can't find main outdoor scene")
0xd8a: @ Trace(Stack[-1])
0xd8b: Pop(1)
0xd8c: Return(); Pop(8)

0xd8d: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0xd8e: Pop(0)
0xd8f: Pop(0); Push((bool) Stack[-1] == 0)
0xd90: IF (Stack[-1] == 0) GOTO 0xd97; Pop(1)

0xd91: Push("Warning: outdoor scene locator ")
0xd92: Pop(1); Push(Stack[-1] + Stack[-11]);
0xd93: Push(" doesnt exist")
0xd94: Pop(2); Push(Stack[-2] + Stack[-1]);
0xd95: @ Trace(Stack[-1])
0xd96: Pop(1)
0xd97: @@ GetMap(Stack[-11])
0xd98: Pop(0)
0xd99: Pop(0); Push((bool) Stack[-11] == 0)
0xd9a: IF (Stack[-1] == 0) GOTO 0xd9f; Pop(1)

0xd9b: Push("Can't find map")
0xd9c: @ Trace(Stack[-1])
0xd9d: Pop(1)
0xd9e: Return(); Pop(8)

0xd9f: Push(CvectorIndex(Stack[-4], 0))
0xda0: Push(CvectorIndex(Stack[-5], 2))
0xda1: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0xda2: Pop(2)
0xda3: Return(); Pop(8)

0xda4: Stack[-2] = 0
0xda5: PushEmpty(int, int)
0xda6: Push((int) 0)
0xda7: @ ClearSubContainer(Stack[-1])
0xda8: Pop(1)
0xda9: PushEmpty(int)
0xdaa: Call2 0xbb6

0xdab: Stack[-2] = Stack[-1]
0xdac: Pop(1)
0xdad: PushEmpty(string, int, int, int)
0xdae: Stack[-4] = "samopal_ammo"
0xdaf: Stack[-3] = (int) 1
0xdb0: Stack[-2] = (int) 1
0xdb1: Stack[-1] = (int) 6
0xdb2: Call2 0xb5d

0xdb3: Pop(4)
0xdb4: PushEmpty(string, int, int, int)
0xdb5: Stack[-4] = "rifle_ammo"
0xdb6: Stack[-3] = (int) 1
0xdb7: Stack[-2] = (int) 1
0xdb8: Stack[-1] = (int) 8
0xdb9: Call2 0xb5d

0xdba: Pop(4)
0xdbb: PushEmpty(string, int, int, int)
0xdbc: Stack[-4] = "revolver_ammo"
0xdbd: Stack[-3] = (int) 1
0xdbe: Stack[-2] = (int) 1
0xdbf: Stack[-1] = (int) 8
0xdc0: Call2 0xb5d

0xdc1: Pop(4)
0xdc2: PushEmpty(string, int, int, int)
0xdc3: Stack[-4] = "tvirin"
0xdc4: Stack[-3] = (int) 1
0xdc5: Stack[-2] = (int) 1
0xdc6: Stack[-1] = (int) 3
0xdc7: Call2 0xb5d

0xdc8: Pop(4)
0xdc9: Push((int) 5)
0xdca: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xdcb: IF (Stack[-1] == 0) GOTO 0xdd2; Pop(1)

0xdcc: PushEmpty(string, int, int)
0xdcd: Stack[-3] = "Samopal"
0xdce: Stack[-2] = (int) 1
0xdcf: Stack[-1] = (int) 1
0xdd0: Call2 0xb52

0xdd1: Pop(3)
0xdd2: Return(); Pop(2)

0xdd3: PushEmpty(int, int)
0xdd4: Push("branch")
0xdd5: @ GetVariable(Stack[-1], Stack[-2])
0xdd6: Pop(1)
0xdd7: Push((int) 0)
0xdd8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdd9: IF (Stack[-1] == 0) GOTO 0xddd; Pop(1)

0xdda: Stack[-3] = (int) 1
0xddb: Return(); Pop(2)

0xddc: GOTO 0xde2

0xddd: Push((int) 1)
0xdde: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xddf: IF (Stack[-1] == 0) GOTO 0xde2; Pop(1)

0xde0: Stack[-3] = (int) 2
0xde1: Return(); Pop(2)

0xde2: Stack[-3] = (int) 3
0xde3: Return(); Pop(2)

0xde4: PushEmpty(int, int, int, int, int, int)
0xde5: Push("tr_andrei")
0xde6: @ GetVariable(Stack[-1], Stack[-4])
0xde7: Pop(1)
0xde8: PushEmpty(int)
0xde9: Call2 0xbb6

0xdea: Pop(0)
0xdeb: Pop(1); Push((bool) Stack[-4] != Stack[-1])
0xdec: IF (Stack[-1] == 0) GOTO 0xdf6; Pop(1)

0xded: PushEmpty()
0xdee: Call2 0xda5

0xdef: Pop(0)
0xdf0: Push("tr_andrei")
0xdf1: PushEmpty(int)
0xdf2: Call2 0xbb6

0xdf3: Pop(0)
0xdf4: @ SetVariable(Stack[-2], Stack[-1])
0xdf5: Pop(2)
0xdf6: Push("mt_andrei")
0xdf7: @ GetVariable(Stack[-1], Stack[-3])
0xdf8: Pop(1)
0xdf9: Pop(0); Push((bool) Stack[-2] == 0)
0xdfa: IF (Stack[-1] == 0) GOTO 0xe05; Pop(1)

0xdfb: PushEmpty(int, object)
0xdfc: Stack[-1] = Stack[-9]
0xdfd: Push(-2, 1); TaskCall(1)
0xdfe: Call2 0x28

0xdff: Pop(-2, 1); TaskReturn
0xe00: Pop(2)
0xe01: Push("mt_andrei")
0xe02: Push((int) 1)
0xe03: @ SetVariable(Stack[-2], Stack[-1])
0xe04: Pop(2)
0xe05: PushEmpty(bool, int)
0xe06: Stack[-1] = (int) 2
0xe07: Call2 0xbbf

0xe08: Pop(1)
0xe09: IF (Stack[-1] == 0) GOTO 0xe25; Pop(1)

0xe0a: Push((int) 1000)
0xe0b: PushEmpty(int, object)
0xe0c: Stack[-1] = Stack[-10]
0xe0d: Push(-2, 1); TaskCall(3)
0xe0e: Call2 0x14a

0xe0f: Pop(-2, 1); TaskReturn
0xe10: Pop(1)
0xe11: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe12: IF (Stack[-1] == 0) GOTO 0xe24; Pop(1)

0xe13: PushEmpty(bool, object)
0xe14: Stack[-1] = Stack[-9]
0xe15: Call2 0xae0

0xe16: Pop(1)
0xe17: Pop(1); Push((bool) Stack[-1] == 0)
0xe18: IF (Stack[-1] == 0) GOTO 0xe1a; Pop(1)

0xe19: Return(); Pop(6)

0xe1a: PushEmpty(object)
0xe1b: Stack[-1] = Stack[-8]
0xe1c: Push(-1, 1); TaskCall(0)
0xe1d: Call2 0x0

0xe1e: Pop(-1, 1); TaskReturn
0xe1f: Pop(1)
0xe20: PushEmpty(object)
0xe21: Stack[-1] = Stack[-8]
0xe22: Call2 0xb18

0xe23: Pop(1)
0xe24: Return(); Pop(6)

0xe25: PushEmpty(bool, int)
0xe26: Stack[-1] = (int) 5
0xe27: Call2 0xbbf

0xe28: Pop(1)
0xe29: IF (Stack[-1] == 0) GOTO 0xe45; Pop(1)

0xe2a: Push((int) 1000)
0xe2b: PushEmpty(int, object)
0xe2c: Stack[-1] = Stack[-10]
0xe2d: Push(-2, 1); TaskCall(5)
0xe2e: Call2 0x4cd

0xe2f: Pop(-2, 1); TaskReturn
0xe30: Pop(1)
0xe31: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe32: IF (Stack[-1] == 0) GOTO 0xe44; Pop(1)

0xe33: PushEmpty(bool, object)
0xe34: Stack[-1] = Stack[-9]
0xe35: Call2 0xae0

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
0xe42: Call2 0xb18

0xe43: Pop(1)
0xe44: Return(); Pop(6)

0xe45: PushEmpty(bool)
0xe46: Stack[-1] = (bool) 1
0xe47: PushEmpty(bool)
0xe48: Stack[-1] = (bool) 1
0xe49: PushEmpty(bool)
0xe4a: Stack[-1] = (bool) 1
0xe4b: PushEmpty(bool)
0xe4c: Stack[-1] = (bool) 1
0xe4d: PushEmpty(bool)
0xe4e: Stack[-1] = (bool) 1
0xe4f: PushEmpty(bool)
0xe50: Stack[-1] = (bool) 1
0xe51: PushEmpty(bool)
0xe52: Stack[-1] = (bool) 1
0xe53: PushEmpty(bool, int)
0xe54: Stack[-1] = (int) 3
0xe55: Call2 0xbbf

0xe56: Pop(1)
0xe57: IF (Stack[-1] == 0) GOTO 0xe5e; Pop(1)

0xe58: PushEmpty(bool, int)
0xe59: Stack[-1] = (int) 4
0xe5a: Call2 0xbbf

0xe5b: Pop(1)
0xe5c: IF (Stack[-1] == 0) GOTO 0xe5e; Pop(1)

0xe5d: Stack[-1] = (bool) 0
0xe5e: IF (Stack[-1] == 0) GOTO 0xe65; Pop(1)

0xe5f: PushEmpty(bool, int)
0xe60: Stack[-1] = (int) 6
0xe61: Call2 0xbbf

0xe62: Pop(1)
0xe63: IF (Stack[-1] == 0) GOTO 0xe65; Pop(1)

0xe64: Stack[-1] = (bool) 0
0xe65: IF (Stack[-1] == 0) GOTO 0xe6c; Pop(1)

0xe66: PushEmpty(bool, int)
0xe67: Stack[-1] = (int) 7
0xe68: Call2 0xbbf

0xe69: Pop(1)
0xe6a: IF (Stack[-1] == 0) GOTO 0xe6c; Pop(1)

0xe6b: Stack[-1] = (bool) 0
0xe6c: IF (Stack[-1] == 0) GOTO 0xe73; Pop(1)

0xe6d: PushEmpty(bool, int)
0xe6e: Stack[-1] = (int) 8
0xe6f: Call2 0xbbf

0xe70: Pop(1)
0xe71: IF (Stack[-1] == 0) GOTO 0xe73; Pop(1)

0xe72: Stack[-1] = (bool) 0
0xe73: IF (Stack[-1] == 0) GOTO 0xe7a; Pop(1)

0xe74: PushEmpty(bool, int)
0xe75: Stack[-1] = (int) 9
0xe76: Call2 0xbbf

0xe77: Pop(1)
0xe78: IF (Stack[-1] == 0) GOTO 0xe7a; Pop(1)

0xe79: Stack[-1] = (bool) 0
0xe7a: IF (Stack[-1] == 0) GOTO 0xe81; Pop(1)

0xe7b: PushEmpty(bool, int)
0xe7c: Stack[-1] = (int) 10
0xe7d: Call2 0xbbf

0xe7e: Pop(1)
0xe7f: IF (Stack[-1] == 0) GOTO 0xe81; Pop(1)

0xe80: Stack[-1] = (bool) 0
0xe81: IF (Stack[-1] == 0) GOTO 0xe88; Pop(1)

0xe82: PushEmpty(bool, int)
0xe83: Stack[-1] = (int) 11
0xe84: Call2 0xbbf

0xe85: Pop(1)
0xe86: IF (Stack[-1] == 0) GOTO 0xe88; Pop(1)

0xe87: Stack[-1] = (bool) 0
0xe88: IF (Stack[-1] == 0) GOTO 0xea4; Pop(1)

0xe89: Push((int) 1000)
0xe8a: PushEmpty(int, object)
0xe8b: Stack[-1] = Stack[-10]
0xe8c: Push(-2, 1); TaskCall(7)
0xe8d: Call2 0x637

0xe8e: Pop(-2, 1); TaskReturn
0xe8f: Pop(1)
0xe90: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe91: IF (Stack[-1] == 0) GOTO 0xea3; Pop(1)

0xe92: PushEmpty(bool, object)
0xe93: Stack[-1] = Stack[-9]
0xe94: Call2 0xae0

0xe95: Pop(1)
0xe96: Pop(1); Push((bool) Stack[-1] == 0)
0xe97: IF (Stack[-1] == 0) GOTO 0xe99; Pop(1)

0xe98: Return(); Pop(6)

0xe99: PushEmpty(object)
0xe9a: Stack[-1] = Stack[-8]
0xe9b: Push(-1, 1); TaskCall(0)
0xe9c: Call2 0x0

0xe9d: Pop(-1, 1); TaskReturn
0xe9e: Pop(1)
0xe9f: PushEmpty(object)
0xea0: Stack[-1] = Stack[-8]
0xea1: Call2 0xb18

0xea2: Pop(1)
0xea3: Return(); Pop(6)

0xea4: Push("d12_andrei")
0xea5: @ GetVariable(Stack[-1], Stack[-2])
0xea6: Pop(1)
0xea7: PushEmpty(bool)
0xea8: Stack[-1] = (bool) 0
0xea9: PushEmpty(bool, int)
0xeaa: Stack[-1] = (int) 12
0xeab: Call2 0xbbf

0xeac: Pop(1)
0xead: IF (Stack[-1] == 0) GOTO 0xeb1; Pop(1)

0xeae: Pop(0); Push((bool) Stack[-2] == 0)
0xeaf: IF (Stack[-1] == 0) GOTO 0xeb1; Pop(1)

0xeb0: Stack[-1] = (bool) 1
0xeb1: IF (Stack[-1] == 0) GOTO 0xebd; Pop(1)

0xeb2: PushEmpty(int, object)
0xeb3: Stack[-1] = Stack[-9]
0xeb4: Push(-2, 1); TaskCall(9)
0xeb5: Call2 0x70a

0xeb6: Pop(-2, 1); TaskReturn
0xeb7: Pop(2)
0xeb8: Push("d12_andrei")
0xeb9: Push((int) 1)
0xeba: @ SetVariable(Stack[-2], Stack[-1])
0xebb: Pop(2)
0xebc: Return(); Pop(6)

0xebd: PushEmpty(int, object)
0xebe: Stack[-1] = Stack[-9]
0xebf: Push(-2, 1); TaskCall(11)
0xec0: Call2 0x80d

0xec1: Pop(-2, 1); TaskReturn
0xec2: Pop(2)
0xec3: Return(); Pop(6)

