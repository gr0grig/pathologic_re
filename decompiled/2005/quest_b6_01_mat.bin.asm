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
	Patronage
	SetMessage
	ClearReplies
	AddReply
	Neutral
	all
	idle
	Rage
	Discontent
	Untrust
	cleanup
	restore
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
	oob6Mat1
	b6q01
	b6q01MatGotoByk
	pt_b6q01_bull
	AddMark
	alpha_pills
	RemoveItemByType
	quest_b6_01
	init_altar
	clean_termitnik
	playsound
	giveitem
	oob6Mat2
	pt_map_kurgan
	ShowMap
	recipe1 is given
	recipe1
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
	ui/NPC_Mat.png
	ui/NPC_Mat_b.png

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
	IsLoaded (1 args)
	RemoveActor (1 args)
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

RunOp = 0x3bb
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xf4 Vars = (int, int)
	GTASK_2 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x3bf Vars = (string)
		EVENT_6 Op = 0x3d3 Vars = ()
		EVENT_5 Op = 0x3e0 Vars = ()
		EVENT_7 Op = 0x429 Vars = (int)
		EVENT_45 Op = 0x46b Vars = (bool)
		EVENT_0 Op = 0x477 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x500

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x7c2

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x7c0

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x7c4

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x7c6

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x7af

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
0x31: Call2 0x614

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x555

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
0x48: Call2 0x544

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
0x56: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x6ee

0x5a: Pop(1)
0x5b: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x5c: PushEmpty(object, object)
0x5d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5f: Call2 0x687

0x60: Pop(2)
0x61: PushEmpty(string)
0x62: Stack[-1] = "Patronage"
0x63: Call2 0xde

0x64: Pop(1)
0x65: Push((int) 520595)
0x66: @@ SetMessage(Stack[-1])
0x67: Pop(1)
0x68: @@ ClearReplies()
0x69: Pop(0)
0x6a: Push((int) 520596)
0x6b: Push((int) 21802)
0x6c: Push((int) 21801)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: Push((int) 520621)
0x70: Push((int) 29795)
0x71: Push((int) 21829)
0x72: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73: Pop(3)
0x74: GOTO 0xc0

0x75: PushEmpty(string)
0x76: Stack[-1] = "Neutral"
0x77: Call2 0xde

0x78: Pop(1)
0x79: Push((int) 520622)
0x7a: @@ SetMessage(Stack[-1])
0x7b: Pop(1)
0x7c: @@ ClearReplies()
0x7d: Pop(0)
0x7e: PushEmpty(bool, object)
0x7f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x80: Call2 0x6fa

0x81: Pop(1)
0x82: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x83: Push((int) 520623)
0x84: Push((int) 21833)
0x85: Push((int) 21832)
0x86: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x87: Pop(3)
0x88: PushEmpty(bool)
0x89: Stack[-1] = (bool) 0
0x8a: PushEmpty(bool, object)
0x8b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8c: Call2 0x706

0x8d: Pop(1)
0x8e: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x8f: PushEmpty(bool, object)
0x90: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x91: Call2 0x710

0x92: Pop(1)
0x93: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x94: Stack[-1] = (bool) 1
0x95: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x96: Push((int) 520626)
0x97: Push((int) 21836)
0x98: Push((int) 21835)
0x99: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9a: Pop(3)
0x9b: PushEmpty(bool)
0x9c: Stack[-1] = (bool) 0
0x9d: PushEmpty(bool, object)
0x9e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9f: Call2 0x710

0xa0: Pop(1)
0xa1: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa2: PushEmpty(bool, object)
0xa3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa4: Call2 0x71c

0xa5: Pop(1)
0xa6: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa7: Stack[-1] = (bool) 1
0xa8: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xa9: Push((int) 520686)
0xaa: Push((int) 21897)
0xab: Push((int) 21896)
0xac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xad: Pop(3)
0xae: PushEmpty(bool, object)
0xaf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb0: Call2 0x6e2

0xb1: Pop(1)
0xb2: IF (Stack[-1] == 0) GOTO 0xb8; Pop(1)

0xb3: Push((int) 528534)
0xb4: Push((int) 29927)
0xb5: Push((int) 29926)
0xb6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb7: Pop(3)
0xb8: Push((int) 520629)
0xb9: Push((int) -1)
0xba: Push((int) 21838)
0xbb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc: Pop(3)
0xbd: GOTO 0xc0

0xbe: Return(); Pop(0)

0xbf: GOTO 0x55

0xc0: PushEmpty(bool)
0xc1: Call2 0x7c8

0xc2: Pop(0)
0xc3: IF (Stack[-1] == 0) GOTO 0xcf; Pop(1)

0xc4: @ lshWaitForAnimEnd()
0xc5: Pop(0)
0xc6: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc7: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xc8: GOTO 0xce

0xc9: PushEmpty(string)
0xca: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xcb: Call2 0x5df

0xcc: Pop(1)
0xcd: GOTO 0xc4

0xce: GOTO 0xdd

0xcf: Push("all")
0xd0: Push("idle")
0xd1: @ PlayAnimation(Stack[-2], Stack[-1])
0xd2: Pop(2)
0xd3: @ WaitForAnimEnd()
0xd4: Pop(0)
0xd5: Push( Stack[3 + Tasks[-1].StackPointer] )
0xd6: IF (Stack[-1] == 0) GOTO 0xd8; Pop(1)

0xd7: GOTO 0xdd

0xd8: Push("all")
0xd9: Push("idle")
0xda: @ PlayAnimation(Stack[-2], Stack[-1])
0xdb: Pop(2)
0xdc: GOTO 0xd3

0xdd: Return(); Pop(0)

0xde: PushEmpty()
0xdf: PushEmpty(bool)
0xe0: Call2 0x7c8

0xe1: Pop(0)
0xe2: Pop(1); Push((bool) Stack[-1] == 0)
0xe3: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xe4: Return(); Pop(0)

0xe5: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xe6: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xe7: Return(); Pop(0)

0xe8: PushEmpty(string, bool)
0xe9: Stack[-2] = Stack[-3]
0xea: Push("")
0xeb: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xec: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xed: Stack[-1] = (bool) 0
0xee: GOTO 0xf0

0xef: Stack[-1] = (bool) 1
0xf0: Call2 0x5ef

0xf1: Pop(2)
0xf2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xf3: Return(); Pop(0)

0xf4: PushEmpty()
0xf5: Push((int) 1)
0xf6: IF (Stack[-1] == 0) GOTO 0x3b2; Pop(1)

0xf7: PushEmpty()
0xf8: Call2 0x60d

0xf9: Pop(0)
0xfa: Push((int) 21809)
0xfb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xfc: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0xfd: PushEmpty(object, object)
0xfe: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xff: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x100: Call2 0x68d

0x101: Pop(2)
0x102: Push((int) 21834)
0x103: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x104: IF (Stack[-1] == 0) GOTO 0x10a; Pop(1)

0x105: PushEmpty(object, object)
0x106: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x107: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x108: Call2 0x68d

0x109: Pop(2)
0x10a: Push((int) 21895)
0x10b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10c: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x10d: PushEmpty(object, object)
0x10e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x110: Call2 0x696

0x111: Pop(2)
0x112: PushEmpty(object, object)
0x113: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x114: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x115: Call2 0x6c7

0x116: Pop(2)
0x117: PushEmpty(object, object)
0x118: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x119: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11a: Call2 0x6bb

0x11b: Pop(2)
0x11c: PushEmpty(object, object)
0x11d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11f: Call2 0x6d7

0x120: Pop(2)
0x121: Push((int) 21890)
0x122: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x123: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0x124: PushEmpty(object, object)
0x125: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x126: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x127: Call2 0x696

0x128: Pop(2)
0x129: PushEmpty(object, object)
0x12a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x12b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x12c: Call2 0x6c7

0x12d: Pop(2)
0x12e: PushEmpty(object, object)
0x12f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x130: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x131: Call2 0x6d7

0x132: Pop(2)
0x133: PushEmpty(object, object)
0x134: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x135: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x136: Call2 0x6bb

0x137: Pop(2)
0x138: Push((int) 29926)
0x139: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x13a: IF (Stack[-1] == 0) GOTO 0x140; Pop(1)

0x13b: PushEmpty(object, object)
0x13c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x13d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x13e: Call2 0x6c1

0x13f: Pop(2)
0x140: Push((int) 21800)
0x141: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x142: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x143: PushEmpty(bool, object)
0x144: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x145: Call2 0x6ee

0x146: Pop(1)
0x147: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x148: PushEmpty(object, object)
0x149: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x14a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x14b: Call2 0x687

0x14c: Pop(2)
0x14d: PushEmpty(string)
0x14e: Stack[-1] = "Patronage"
0x14f: Call2 0xde

0x150: Pop(1)
0x151: Push((int) 520595)
0x152: @@ SetMessage(Stack[-1])
0x153: Pop(1)
0x154: @@ ClearReplies()
0x155: Pop(0)
0x156: Push((int) 520596)
0x157: Push((int) 21802)
0x158: Push((int) 21801)
0x159: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15a: Pop(3)
0x15b: Push((int) 520621)
0x15c: Push((int) 29795)
0x15d: Push((int) 21829)
0x15e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15f: Pop(3)
0x160: Return(); Pop(0)

0x161: PushEmpty(string)
0x162: Stack[-1] = "Neutral"
0x163: Call2 0xde

0x164: Pop(1)
0x165: Push((int) 520622)
0x166: @@ SetMessage(Stack[-1])
0x167: Pop(1)
0x168: @@ ClearReplies()
0x169: Pop(0)
0x16a: PushEmpty(bool, object)
0x16b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x16c: Call2 0x6fa

0x16d: Pop(1)
0x16e: IF (Stack[-1] == 0) GOTO 0x174; Pop(1)

0x16f: Push((int) 520623)
0x170: Push((int) 21833)
0x171: Push((int) 21832)
0x172: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x173: Pop(3)
0x174: PushEmpty(bool)
0x175: Stack[-1] = (bool) 0
0x176: PushEmpty(bool, object)
0x177: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x178: Call2 0x706

0x179: Pop(1)
0x17a: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x17b: PushEmpty(bool, object)
0x17c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x17d: Call2 0x710

0x17e: Pop(1)
0x17f: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x180: Stack[-1] = (bool) 1
0x181: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x182: Push((int) 520626)
0x183: Push((int) 21836)
0x184: Push((int) 21835)
0x185: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x186: Pop(3)
0x187: PushEmpty(bool)
0x188: Stack[-1] = (bool) 0
0x189: PushEmpty(bool, object)
0x18a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x18b: Call2 0x710

0x18c: Pop(1)
0x18d: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x18e: PushEmpty(bool, object)
0x18f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x190: Call2 0x71c

0x191: Pop(1)
0x192: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x193: Stack[-1] = (bool) 1
0x194: IF (Stack[-1] == 0) GOTO 0x19a; Pop(1)

0x195: Push((int) 520686)
0x196: Push((int) 21897)
0x197: Push((int) 21896)
0x198: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x199: Pop(3)
0x19a: PushEmpty(bool, object)
0x19b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x19c: Call2 0x6e2

0x19d: Pop(1)
0x19e: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x19f: Push((int) 528534)
0x1a0: Push((int) 29927)
0x1a1: Push((int) 29926)
0x1a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a3: Pop(3)
0x1a4: Push((int) 520629)
0x1a5: Push((int) -1)
0x1a6: Push((int) 21838)
0x1a7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a8: Pop(3)
0x1a9: Return(); Pop(0)

0x1aa: Push((int) 29927)
0x1ab: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ac: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1ad: PushEmpty(string)
0x1ae: Stack[-1] = "Patronage"
0x1af: Call2 0xde

0x1b0: Pop(1)
0x1b1: Push((int) 528535)
0x1b2: @@ SetMessage(Stack[-1])
0x1b3: Pop(1)
0x1b4: @@ ClearReplies()
0x1b5: Pop(0)
0x1b6: Push((int) 528536)
0x1b7: Push((int) 29929)
0x1b8: Push((int) 29928)
0x1b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ba: Pop(3)
0x1bb: Return(); Pop(0)

0x1bc: Push((int) 29929)
0x1bd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1be: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1bf: PushEmpty(string)
0x1c0: Stack[-1] = "Neutral"
0x1c1: Call2 0xde

0x1c2: Pop(1)
0x1c3: Push((int) 528537)
0x1c4: @@ SetMessage(Stack[-1])
0x1c5: Pop(1)
0x1c6: @@ ClearReplies()
0x1c7: Pop(0)
0x1c8: Push((int) 528538)
0x1c9: Push((int) 29931)
0x1ca: Push((int) 29930)
0x1cb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1cc: Pop(3)
0x1cd: Return(); Pop(0)

0x1ce: Push((int) 29931)
0x1cf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d0: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1d1: PushEmpty(string)
0x1d2: Stack[-1] = "Neutral"
0x1d3: Call2 0xde

0x1d4: Pop(1)
0x1d5: Push((int) 528539)
0x1d6: @@ SetMessage(Stack[-1])
0x1d7: Pop(1)
0x1d8: @@ ClearReplies()
0x1d9: Pop(0)
0x1da: Push((int) 528540)
0x1db: Push((int) 29933)
0x1dc: Push((int) 29932)
0x1dd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1de: Pop(3)
0x1df: Return(); Pop(0)

0x1e0: Push((int) 29933)
0x1e1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e2: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1e3: PushEmpty(string)
0x1e4: Stack[-1] = "Neutral"
0x1e5: Call2 0xde

0x1e6: Pop(1)
0x1e7: Push((int) 528541)
0x1e8: @@ SetMessage(Stack[-1])
0x1e9: Pop(1)
0x1ea: @@ ClearReplies()
0x1eb: Pop(0)
0x1ec: Push((int) 528542)
0x1ed: Push((int) 29935)
0x1ee: Push((int) 29934)
0x1ef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f0: Pop(3)
0x1f1: Return(); Pop(0)

0x1f2: Push((int) 29935)
0x1f3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f4: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0x1f5: PushEmpty(string)
0x1f6: Stack[-1] = "Neutral"
0x1f7: Call2 0xde

0x1f8: Pop(1)
0x1f9: Push((int) 528543)
0x1fa: @@ SetMessage(Stack[-1])
0x1fb: Pop(1)
0x1fc: @@ ClearReplies()
0x1fd: Pop(0)
0x1fe: Push((int) 528544)
0x1ff: Push((int) 29937)
0x200: Push((int) 29936)
0x201: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x202: Pop(3)
0x203: Return(); Pop(0)

0x204: Push((int) 29937)
0x205: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x206: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x207: PushEmpty(string)
0x208: Stack[-1] = "Neutral"
0x209: Call2 0xde

0x20a: Pop(1)
0x20b: Push((int) 528545)
0x20c: @@ SetMessage(Stack[-1])
0x20d: Pop(1)
0x20e: @@ ClearReplies()
0x20f: Pop(0)
0x210: Push((int) 528546)
0x211: Push((int) -1)
0x212: Push((int) 29938)
0x213: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x214: Pop(3)
0x215: Return(); Pop(0)

0x216: Push((int) 21897)
0x217: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x218: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x219: PushEmpty(string)
0x21a: Stack[-1] = "Rage"
0x21b: Call2 0xde

0x21c: Pop(1)
0x21d: Push((int) 520687)
0x21e: @@ SetMessage(Stack[-1])
0x21f: Pop(1)
0x220: @@ ClearReplies()
0x221: Pop(0)
0x222: Push((int) 520689)
0x223: Push((int) 21900)
0x224: Push((int) 21899)
0x225: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x226: Pop(3)
0x227: Push((int) 520688)
0x228: Push((int) -1)
0x229: Push((int) 21898)
0x22a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22b: Pop(3)
0x22c: Return(); Pop(0)

0x22d: Push((int) 21900)
0x22e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x22f: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x230: PushEmpty(string)
0x231: Stack[-1] = "Rage"
0x232: Call2 0xde

0x233: Pop(1)
0x234: Push((int) 520690)
0x235: @@ SetMessage(Stack[-1])
0x236: Pop(1)
0x237: @@ ClearReplies()
0x238: Pop(0)
0x239: Push((int) 520691)
0x23a: Push((int) -1)
0x23b: Push((int) 21901)
0x23c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x23d: Pop(3)
0x23e: Push((int) 520692)
0x23f: Push((int) -1)
0x240: Push((int) 21902)
0x241: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x242: Pop(3)
0x243: Return(); Pop(0)

0x244: Push((int) 21836)
0x245: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x246: IF (Stack[-1] == 0) GOTO 0x25b; Pop(1)

0x247: PushEmpty(string)
0x248: Stack[-1] = "Patronage"
0x249: Call2 0xde

0x24a: Pop(1)
0x24b: Push((int) 520627)
0x24c: @@ SetMessage(Stack[-1])
0x24d: Pop(1)
0x24e: @@ ClearReplies()
0x24f: Pop(0)
0x250: Push((int) 520628)
0x251: Push((int) 21885)
0x252: Push((int) 21837)
0x253: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x254: Pop(3)
0x255: Push((int) 520677)
0x256: Push((int) 21887)
0x257: Push((int) 21886)
0x258: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x259: Pop(3)
0x25a: Return(); Pop(0)

0x25b: Push((int) 21887)
0x25c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x25d: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x25e: PushEmpty(string)
0x25f: Stack[-1] = "Neutral"
0x260: Call2 0xde

0x261: Pop(1)
0x262: Push((int) 520678)
0x263: @@ SetMessage(Stack[-1])
0x264: Pop(1)
0x265: @@ ClearReplies()
0x266: Pop(0)
0x267: Push((int) 520679)
0x268: Push((int) 21885)
0x269: Push((int) 21888)
0x26a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x26b: Pop(3)
0x26c: Return(); Pop(0)

0x26d: Push((int) 21885)
0x26e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x26f: IF (Stack[-1] == 0) GOTO 0x284; Pop(1)

0x270: PushEmpty(string)
0x271: Stack[-1] = "Patronage"
0x272: Call2 0xde

0x273: Pop(1)
0x274: Push((int) 520676)
0x275: @@ SetMessage(Stack[-1])
0x276: Pop(1)
0x277: @@ ClearReplies()
0x278: Pop(0)
0x279: Push((int) 520681)
0x27a: Push((int) 21892)
0x27b: Push((int) 21891)
0x27c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x27d: Pop(3)
0x27e: Push((int) 520680)
0x27f: Push((int) -1)
0x280: Push((int) 21890)
0x281: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x282: Pop(3)
0x283: Return(); Pop(0)

0x284: Push((int) 21892)
0x285: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x286: IF (Stack[-1] == 0) GOTO 0x29b; Pop(1)

0x287: PushEmpty(string)
0x288: Stack[-1] = "Patronage"
0x289: Call2 0xde

0x28a: Pop(1)
0x28b: Push((int) 520682)
0x28c: @@ SetMessage(Stack[-1])
0x28d: Pop(1)
0x28e: @@ ClearReplies()
0x28f: Pop(0)
0x290: Push((int) 520683)
0x291: Push((int) 21894)
0x292: Push((int) 21893)
0x293: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x294: Pop(3)
0x295: Push((int) 528420)
0x296: Push((int) 29803)
0x297: Push((int) 29802)
0x298: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x299: Pop(3)
0x29a: Return(); Pop(0)

0x29b: Push((int) 29803)
0x29c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x29d: IF (Stack[-1] == 0) GOTO 0x2ad; Pop(1)

0x29e: PushEmpty(string)
0x29f: Stack[-1] = "Neutral"
0x2a0: Call2 0xde

0x2a1: Pop(1)
0x2a2: Push((int) 528421)
0x2a3: @@ SetMessage(Stack[-1])
0x2a4: Pop(1)
0x2a5: @@ ClearReplies()
0x2a6: Pop(0)
0x2a7: Push((int) 528422)
0x2a8: Push((int) 21894)
0x2a9: Push((int) 29804)
0x2aa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ab: Pop(3)
0x2ac: Return(); Pop(0)

0x2ad: Push((int) 21894)
0x2ae: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2af: IF (Stack[-1] == 0) GOTO 0x2bf; Pop(1)

0x2b0: PushEmpty(string)
0x2b1: Stack[-1] = "Neutral"
0x2b2: Call2 0xde

0x2b3: Pop(1)
0x2b4: Push((int) 520684)
0x2b5: @@ SetMessage(Stack[-1])
0x2b6: Pop(1)
0x2b7: @@ ClearReplies()
0x2b8: Pop(0)
0x2b9: Push((int) 520685)
0x2ba: Push((int) -1)
0x2bb: Push((int) 21895)
0x2bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2bd: Pop(3)
0x2be: Return(); Pop(0)

0x2bf: Push((int) 21833)
0x2c0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2c1: IF (Stack[-1] == 0) GOTO 0x2d1; Pop(1)

0x2c2: PushEmpty(string)
0x2c3: Stack[-1] = "Rage"
0x2c4: Call2 0xde

0x2c5: Pop(1)
0x2c6: Push((int) 520624)
0x2c7: @@ SetMessage(Stack[-1])
0x2c8: Pop(1)
0x2c9: @@ ClearReplies()
0x2ca: Pop(0)
0x2cb: Push((int) 520625)
0x2cc: Push((int) -1)
0x2cd: Push((int) 21834)
0x2ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2cf: Pop(3)
0x2d0: Return(); Pop(0)

0x2d1: Push((int) 21802)
0x2d2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2d3: IF (Stack[-1] == 0) GOTO 0x2e3; Pop(1)

0x2d4: PushEmpty(string)
0x2d5: Stack[-1] = "Patronage"
0x2d6: Call2 0xde

0x2d7: Pop(1)
0x2d8: Push((int) 520597)
0x2d9: @@ SetMessage(Stack[-1])
0x2da: Pop(1)
0x2db: @@ ClearReplies()
0x2dc: Pop(0)
0x2dd: Push((int) 528414)
0x2de: Push((int) 29795)
0x2df: Push((int) 29794)
0x2e0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e1: Pop(3)
0x2e2: Return(); Pop(0)

0x2e3: Push((int) 29795)
0x2e4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2e5: IF (Stack[-1] == 0) GOTO 0x2fa; Pop(1)

0x2e6: PushEmpty(string)
0x2e7: Stack[-1] = "Rage"
0x2e8: Call2 0xde

0x2e9: Pop(1)
0x2ea: Push((int) 528415)
0x2eb: @@ SetMessage(Stack[-1])
0x2ec: Pop(1)
0x2ed: @@ ClearReplies()
0x2ee: Pop(0)
0x2ef: Push((int) 528416)
0x2f0: Push((int) 29798)
0x2f1: Push((int) 29797)
0x2f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f3: Pop(3)
0x2f4: Push((int) 528418)
0x2f5: Push((int) 21806)
0x2f6: Push((int) 29799)
0x2f7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f8: Pop(3)
0x2f9: Return(); Pop(0)

0x2fa: Push((int) 29798)
0x2fb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2fc: IF (Stack[-1] == 0) GOTO 0x311; Pop(1)

0x2fd: PushEmpty(string)
0x2fe: Stack[-1] = "Discontent"
0x2ff: Call2 0xde

0x300: Pop(1)
0x301: Push((int) 528417)
0x302: @@ SetMessage(Stack[-1])
0x303: Pop(1)
0x304: @@ ClearReplies()
0x305: Pop(0)
0x306: Push((int) 520598)
0x307: Push((int) 21804)
0x308: Push((int) 21803)
0x309: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x30a: Pop(3)
0x30b: Push((int) 520620)
0x30c: Push((int) 21808)
0x30d: Push((int) 21827)
0x30e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x30f: Pop(3)
0x310: Return(); Pop(0)

0x311: Push((int) 21804)
0x312: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x313: IF (Stack[-1] == 0) GOTO 0x323; Pop(1)

0x314: PushEmpty(string)
0x315: Stack[-1] = "Patronage"
0x316: Call2 0xde

0x317: Pop(1)
0x318: Push((int) 520599)
0x319: @@ SetMessage(Stack[-1])
0x31a: Pop(1)
0x31b: @@ ClearReplies()
0x31c: Pop(0)
0x31d: Push((int) 520600)
0x31e: Push((int) 21806)
0x31f: Push((int) 21805)
0x320: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x321: Pop(3)
0x322: Return(); Pop(0)

0x323: Push((int) 21806)
0x324: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x325: IF (Stack[-1] == 0) GOTO 0x335; Pop(1)

0x326: PushEmpty(string)
0x327: Stack[-1] = "Neutral"
0x328: Call2 0xde

0x329: Pop(1)
0x32a: Push((int) 520601)
0x32b: @@ SetMessage(Stack[-1])
0x32c: Pop(1)
0x32d: @@ ClearReplies()
0x32e: Pop(0)
0x32f: Push((int) 520602)
0x330: Push((int) 21808)
0x331: Push((int) 21807)
0x332: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x333: Pop(3)
0x334: Return(); Pop(0)

0x335: Push((int) 21811)
0x336: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x337: IF (Stack[-1] == 0) GOTO 0x338; Pop(1)

0x338: Push((int) 21824)
0x339: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x33a: IF (Stack[-1] == 0) GOTO 0x34a; Pop(1)

0x33b: PushEmpty(string)
0x33c: Stack[-1] = "Untrust"
0x33d: Call2 0xde

0x33e: Pop(1)
0x33f: Push((int) 520618)
0x340: @@ SetMessage(Stack[-1])
0x341: Pop(1)
0x342: @@ ClearReplies()
0x343: Pop(0)
0x344: Push((int) 520619)
0x345: Push((int) 21815)
0x346: Push((int) 21825)
0x347: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x348: Pop(3)
0x349: Return(); Pop(0)

0x34a: Push((int) 21813)
0x34b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x34c: IF (Stack[-1] == 0) GOTO 0x361; Pop(1)

0x34d: PushEmpty(string)
0x34e: Stack[-1] = "Untrust"
0x34f: Call2 0xde

0x350: Pop(1)
0x351: Push((int) 520608)
0x352: @@ SetMessage(Stack[-1])
0x353: Pop(1)
0x354: @@ ClearReplies()
0x355: Pop(0)
0x356: Push((int) 520609)
0x357: Push((int) 21815)
0x358: Push((int) 21814)
0x359: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x35a: Pop(3)
0x35b: Push((int) 520616)
0x35c: Push((int) -1)
0x35d: Push((int) 21822)
0x35e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x35f: Pop(3)
0x360: Return(); Pop(0)

0x361: Push((int) 21815)
0x362: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x363: IF (Stack[-1] == 0) GOTO 0x378; Pop(1)

0x364: PushEmpty(string)
0x365: Stack[-1] = "Untrust"
0x366: Call2 0xde

0x367: Pop(1)
0x368: Push((int) 520610)
0x369: @@ SetMessage(Stack[-1])
0x36a: Pop(1)
0x36b: @@ ClearReplies()
0x36c: Pop(0)
0x36d: Push((int) 520611)
0x36e: Push((int) 21817)
0x36f: Push((int) 21816)
0x370: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x371: Pop(3)
0x372: Push((int) 520615)
0x373: Push((int) 21817)
0x374: Push((int) 21821)
0x375: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x376: Pop(3)
0x377: Return(); Pop(0)

0x378: Push((int) 21817)
0x379: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x37a: IF (Stack[-1] == 0) GOTO 0x38f; Pop(1)

0x37b: PushEmpty(string)
0x37c: Stack[-1] = "Rage"
0x37d: Call2 0xde

0x37e: Pop(1)
0x37f: Push((int) 520612)
0x380: @@ SetMessage(Stack[-1])
0x381: Pop(1)
0x382: @@ ClearReplies()
0x383: Pop(0)
0x384: Push((int) 520613)
0x385: Push((int) 21808)
0x386: Push((int) 21818)
0x387: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x388: Pop(3)
0x389: Push((int) 520614)
0x38a: Push((int) -1)
0x38b: Push((int) 21820)
0x38c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x38d: Pop(3)
0x38e: Return(); Pop(0)

0x38f: Push((int) 21808)
0x390: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x391: IF (Stack[-1] == 0) GOTO 0x3a6; Pop(1)

0x392: PushEmpty(string)
0x393: Stack[-1] = "Rage"
0x394: Call2 0xde

0x395: Pop(1)
0x396: Push((int) 520603)
0x397: @@ SetMessage(Stack[-1])
0x398: Pop(1)
0x399: @@ ClearReplies()
0x39a: Pop(0)
0x39b: Push((int) 520604)
0x39c: Push((int) -1)
0x39d: Push((int) 21809)
0x39e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x39f: Pop(3)
0x3a0: Push((int) 528419)
0x3a1: Push((int) -1)
0x3a2: Push((int) 29801)
0x3a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a4: Pop(3)
0x3a5: Return(); Pop(0)

0x3a6: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x3a7: PushEmpty(bool)
0x3a8: Call2 0x7c8

0x3a9: Pop(0)
0x3aa: IF (Stack[-1] == 0) GOTO 0x3ae; Pop(1)

0x3ab: @ lshStopAnimation()
0x3ac: Pop(0)
0x3ad: GOTO 0x3b0

0x3ae: @ StopAnimation()
0x3af: Pop(0)
0x3b0: Return(); Pop(0)

0x3b1: GOTO 0xf5

0x3b2: Return(); Pop(0)

0x3b3: PushEmpty()
0x3b4: PushEmpty(int, object)
0x3b5: Stack[-1] = Stack[-3]
0x3b6: Push(-2, 1); TaskCall(0)
0x3b7: Call2 0x0

0x3b8: Pop(-2, 1); TaskReturn
0x3b9: Pop(2)
0x3ba: Return(); Pop(0)

0x3bb: PushEmpty()
0x3bc: Call2 0x3e4

0x3bd: Pop(0)
0x3be: Return(); Pop(0)

0x3bf: PushEmpty(bool, bool)
0x3c0: Push("cleanup")
0x3c1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x3c2: IF (Stack[-1] == 0) GOTO 0x3ce; Pop(1)

0x3c3: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x3c4: @ IsLoaded(Stack[-1])
0x3c5: Pop(0)
0x3c6: Pop(0); Push((bool) Stack[-1] == 0)
0x3c7: IF (Stack[-1] == 0) GOTO 0x3cd; Pop(1)

0x3c8: PushEmpty(object)
0x3c9: Call2 0x614

0x3ca: Pop(0)
0x3cb: @ RemoveActor(Stack[-1])
0x3cc: Pop(1)
0x3cd: GOTO 0x3d2

0x3ce: Push("restore")
0x3cf: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x3d0: IF (Stack[-1] == 0) GOTO 0x3d2; Pop(1)

0x3d1: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x3d2: Return(); Pop(2)

0x3d3: Push( Stack[1 + Tasks[-1].StackPointer] )
0x3d4: IF (Stack[-1] == 0) GOTO 0x3dc; Pop(1)

0x3d5: PushEmpty(object)
0x3d6: Call2 0x614

0x3d7: Pop(0)
0x3d8: @ RemoveActor(Stack[-1])
0x3d9: Pop(1)
0x3da: @ Hold()
0x3db: Pop(0)
0x3dc: PushEmpty()
0x3dd: Call2 0x44f

0x3de: Pop(0)
0x3df: Return(); Pop(0)

0x3e0: PushEmpty()
0x3e1: Call2 0x45e

0x3e2: Pop(0)
0x3e3: Return(); Pop(0)

0x3e4: PushEmpty(bool)
0x3e5: Call2 0x4fb

0x3e6: Pop(0)
0x3e7: Pop(1); Push((bool) Stack[-1] == 0)
0x3e8: IF (Stack[-1] == 0) GOTO 0x3eb; Pop(1)

0x3e9: @ Hold()
0x3ea: Pop(0)
0x3eb: @ GetDirection(Stack[-0])
0x3ec: Pop(0)
0x3ed: PushEmpty()
0x3ee: Call2 0x494

0x3ef: Pop(0)
0x3f0: GOTO 0x3ed

0x3f1: Return(); Pop(0)

0x3f2: PushEmpty(object, object)
0x3f3: Push("player")
0x3f4: @ FindActor(Stack[-2], Stack[-1])
0x3f5: Pop(1)
0x3f6: Pop(0); Push((bool) Stack[-1] == 0)
0x3f7: IF (Stack[-1] == 0) GOTO 0x3fa; Pop(1)

0x3f8: Stack[-3] = (bool) 0
0x3f9: Return(); Pop(2)

0x3fa: PushEmpty(bool, object)
0x3fb: Stack[-1] = Stack[-3]
0x3fc: Call2 0x4f2

0x3fd: Stack[-5] = Stack[-2]
0x3fe: Pop(2)
0x3ff: Return(); Pop(2)

0x400: Stack[-1] = 0
0x401: Push(CvectorIndex(Stack[-0], 0))
0x402: Push(CvectorIndex(Stack[-0], 2))
0x403: @ RotateAsync(Stack[-2], Stack[-1])
0x404: Pop(2)
0x405: Return(); Pop(0)

0x406: PushEmpty(object, bool, object, bool)
0x407: Push("player")
0x408: @ FindActor(Stack[-3], Stack[-1])
0x409: Pop(1)
0x40a: Pop(0); Push((bool) Stack[-2] == 0)
0x40b: IF (Stack[-1] == 0) GOTO 0x40e; Pop(1)

0x40c: Stack[-5] = (bool) 0
0x40d: Return(); Pop(4)

0x40e: PushEmpty(float, object)
0x40f: Stack[-1] = Stack[-4]
0x410: Call2 0x4e0

0x411: Pop(1)
0x412: Push((float)90000.0)
0x413: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x414: IF (Stack[-1] == 0) GOTO 0x417; Pop(1)

0x415: Stack[-5] = (bool) 0
0x416: Return(); Pop(4)

0x417: @ CanSee(Stack[-1], Stack[-2])
0x418: Pop(0)
0x419: Stack[-5] = Stack[-1]
0x41a: Return(); Pop(4)

0x41b: Stack[-2] = 0
0x41c: PushEmpty(float, float)
0x41d: Push((int) 8)
0x41e: Push((int) 16)
0x41f: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x420: Pop(2)
0x421: Push((int) 10)
0x422: @ SetTimer(Stack[-1], Stack[-2])
0x423: Pop(1)
0x424: Return(); Pop(2)

0x425: Push((int) 10)
0x426: @ KillTimer(Stack[-1])
0x427: Pop(1)
0x428: Return(); Pop(0)

0x429: PushEmpty()
0x42a: Push((int) 10)
0x42b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x42c: IF (Stack[-1] == 0) GOTO 0x44e; Pop(1)

0x42d: PushEmpty()
0x42e: Call2 0x425

0x42f: Pop(0)
0x430: PushEmpty(bool)
0x431: Stack[-1] = (bool) 0
0x432: PushEmpty(bool)
0x433: Call2 0x4fb

0x434: Pop(0)
0x435: IF (Stack[-1] == 0) GOTO 0x43b; Pop(1)

0x436: PushEmpty(bool)
0x437: Call2 0x406

0x438: Pop(0)
0x439: IF (Stack[-1] == 0) GOTO 0x43b; Pop(1)

0x43a: Stack[-1] = (bool) 1
0x43b: IF (Stack[-1] == 0) GOTO 0x448; Pop(1)

0x43c: PushEmpty(bool)
0x43d: Call2 0x3f2

0x43e: Pop(0)
0x43f: IF (Stack[-1] == 0) GOTO 0x447; Pop(1)

0x440: PushEmpty(bool, object)
0x441: PushEmpty(object)
0x442: Call2 0x614

0x443: Stack[-2] = Stack[-1]
0x444: Pop(1)
0x445: Call2 0x58f

0x446: Pop(2)
0x447: GOTO 0x44e

0x448: PushEmpty()
0x449: Call2 0x401

0x44a: Pop(0)
0x44b: PushEmpty()
0x44c: Call2 0x41c

0x44d: Pop(0)
0x44e: Return(); Pop(0)

0x44f: PushEmpty()
0x450: Call2 0x4db

0x451: Pop(0)
0x452: PushEmpty()
0x453: Call2 0x425

0x454: Pop(0)
0x455: @ lshStopSpeech()
0x456: Pop(0)
0x457: @ lshStopAnimation()
0x458: Pop(0)
0x459: @ StopAsync()
0x45a: Pop(0)
0x45b: @ Hold()
0x45c: Pop(0)
0x45d: Return(); Pop(0)

0x45e: @ StopGroup0()
0x45f: Pop(0)
0x460: PushEmpty()
0x461: Call2 0x425

0x462: Pop(0)
0x463: PushEmpty(string)
0x464: Stack[-1] = "Neutral"
0x465: Call2 0x5df

0x466: Pop(1)
0x467: PushEmpty()
0x468: Call2 0x41c

0x469: Pop(0)
0x46a: Return(); Pop(0)

0x46b: PushEmpty()
0x46c: Push(Stack[-1])
0x46d: IF (Stack[-1] == 0) GOTO 0x472; Pop(1)

0x46e: PushEmpty()
0x46f: Call2 0x41c

0x470: Pop(0)
0x471: GOTO 0x476

0x472: PushEmpty(string)
0x473: Stack[-1] = "Neutral"
0x474: Call2 0x5df

0x475: Pop(1)
0x476: Return(); Pop(0)

0x477: PushEmpty(bool, bool)
0x478: @ IsOverrideActive(Stack[-1])
0x479: Pop(0)
0x47a: Pop(0); Push((bool) Stack[-1] == 0)
0x47b: IF (Stack[-1] == 0) GOTO 0x493; Pop(1)

0x47c: EventDisable(0)
0x47d: PushEmpty()
0x47e: Call2 0x4db

0x47f: Pop(0)
0x480: PushEmpty(bool, object)
0x481: Stack[-1] = Stack[-5]
0x482: Call2 0x4f2

0x483: Pop(2)
0x484: EventEnable(0)
0x485: PushEmpty(object)
0x486: Stack[-1] = Stack[-4]
0x487: Call2 0x3b3

0x488: Pop(1)
0x489: PushEmpty(string)
0x48a: Stack[-1] = "Neutral"
0x48b: Call2 0x5df

0x48c: Pop(1)
0x48d: PushEmpty()
0x48e: Call2 0x425

0x48f: Pop(0)
0x490: PushEmpty()
0x491: Call2 0x41c

0x492: Pop(0)
0x493: Return(); Pop(2)

0x494: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x495: @ WaitForAnimEnd()
0x496: Pop(0)
0x497: PushEmpty(bool)
0x498: Call2 0x4fb

0x499: Pop(0)
0x49a: Pop(1); Push((bool) Stack[-1] == 0)
0x49b: IF (Stack[-1] == 0) GOTO 0x49d; Pop(1)

0x49c: Return(); Pop(12)

0x49d: PushEmpty(int)
0x49e: Call2 0x676

0x49f: Stack[-7] = Stack[-1]
0x4a0: Pop(1)
0x4a1: Stack[-5] = (int) 0
0x4a2: PushEmpty(bool)
0x4a3: Stack[-1] = (bool) 0
0x4a4: Push((int) 5)
0x4a5: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x4a6: IF (Stack[-1] == 0) GOTO 0x4ac; Pop(1)

0x4a7: PushEmpty(bool)
0x4a8: Call2 0x4fb

0x4a9: Pop(0)
0x4aa: IF (Stack[-1] == 0) GOTO 0x4ac; Pop(1)

0x4ab: Stack[-1] = (bool) 1
0x4ac: IF (Stack[-1] == 0) GOTO 0x4d6; Pop(1)

0x4ad: Pop(0); Push((bool) Stack[-6] == 0)
0x4ae: IF (Stack[-1] == 0) GOTO 0x4b6; Pop(1)

0x4af: Push((int) 3)
0x4b0: @ Sleep(Stack[-1], Stack[-5])
0x4b1: Pop(1)
0x4b2: Pop(0); Push((bool) Stack[-4] == 0)
0x4b3: IF (Stack[-1] == 0) GOTO 0x4b5; Pop(1)

0x4b4: GOTO 0x4d6

0x4b5: GOTO 0x4cb

0x4b6: @ irand(Stack[-3], Stack[-6])
0x4b7: Pop(0)
0x4b8: Push((int) 5)
0x4b9: @ irand(Stack[-3], Stack[-1])
0x4ba: Pop(1)
0x4bb: Push((int) 0)
0x4bc: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x4bd: IF (Stack[-1] == 0) GOTO 0x4bf; Pop(1)

0x4be: Stack[-3] = (int) 0
0x4bf: Push("all")
0x4c0: PushEmpty(string, int)
0x4c1: Stack[-1] = Stack[-6]
0x4c2: Call2 0x66f

0x4c3: Pop(1)
0x4c4: @ PlayAnimation(Stack[-2], Stack[-1])
0x4c5: Pop(2)
0x4c6: @ WaitForAnimEnd(Stack[-1])
0x4c7: Pop(0)
0x4c8: Pop(0); Push((bool) Stack[-1] == 0)
0x4c9: IF (Stack[-1] == 0) GOTO 0x4cb; Pop(1)

0x4ca: GOTO 0x4d6

0x4cb: PushEmpty(bool)
0x4cc: Call2 0x4d9

0x4cd: Pop(0)
0x4ce: Pop(1); Push((bool) Stack[-1] == 0)
0x4cf: IF (Stack[-1] == 0) GOTO 0x4d1; Pop(1)

0x4d0: GOTO 0x4d6

0x4d1: @ ResetAAS()
0x4d2: Pop(0)
0x4d3: Push((int) 1)
0x4d4: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x4d5: GOTO 0x4a2

0x4d6: @ ResetAAS()
0x4d7: Pop(0)
0x4d8: Return(); Pop(12)

0x4d9: Stack[-1] = (bool) 1
0x4da: Return(); Pop(0)

0x4db: @ StopAnimation()
0x4dc: Pop(0)
0x4dd: @ StopGroup0()
0x4de: Pop(0)
0x4df: Return(); Pop(0)

0x4e0: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x4e1: @ GetPosition(Stack[-3])
0x4e2: Pop(0)
0x4e3: @@ GetPosition(Stack[-2])
0x4e4: Pop(0)
0x4e5: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x4e6: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x4e7: Return(); Pop(6)

0x4e8: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x4e9: @ GetPosition(Stack[-3])
0x4ea: Pop(0)
0x4eb: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x4ec: Push(CvectorIndex(Stack[-2], 0))
0x4ed: Push(CvectorIndex(Stack[-3], 2))
0x4ee: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x4ef: Pop(2)
0x4f0: Stack[-8] = Stack[-1]
0x4f1: Return(); Pop(6)

0x4f2: PushEmpty(cvector, cvector)
0x4f3: @@ GetPosition(Stack[-1])
0x4f4: Pop(0)
0x4f5: PushEmpty(bool, cvector)
0x4f6: Stack[-1] = Stack[-3]
0x4f7: Call2 0x4e8

0x4f8: Stack[-6] = Stack[-2]
0x4f9: Pop(2)
0x4fa: Return(); Pop(2)

0x4fb: PushEmpty(bool, bool)
0x4fc: @ IsLoaded(Stack[-1])
0x4fd: Pop(0)
0x4fe: Stack[-3] = Stack[-1]
0x4ff: Return(); Pop(2)

0x500: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x501: @@ GetPosition(Stack[-8])
0x502: Pop(0)
0x503: @@ GetEyesHeight(Stack[-9])
0x504: Pop(0)
0x505: Push(CvectorIndex(Stack[-8], 1))
0x506: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x507: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x508: @ GetPosition(Stack[-7])
0x509: Pop(0)
0x50a: @ GetEyesHeight(Stack[-9])
0x50b: Pop(0)
0x50c: Push(CvectorIndex(Stack[-7], 1))
0x50d: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x50e: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x50f: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x510: Push(CvectorIndex(Stack[-6], 1))
0x511: Stack[-1] = (int) 0
0x512: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x513: Pop(0); Push(Stack[-6] | Stack[-6]);
0x514: Pop(1); Push(Sqrt(Stack[-1]))
0x515: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x516: Stack[-5] = -Stack[-6]; Pop(0);
0x517: Pop(0); Push(Stack[-6] * Stack[-19]);
0x518: PushEmpty(cvector, cvector)
0x519: Push(CVector(0.0, 1.0, 0.0))
0x51a: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x51b: Call2 0x61a

0x51c: Pop(1)
0x51d: Push((int) 25)
0x51e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x51f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x520: Push(CVector(0.0, 10.0, 0.0))
0x521: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x522: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x523: @ IsOverrideActive(Stack[-2])
0x524: Pop(0)
0x525: Push(Stack[-2])
0x526: IF (Stack[-1] == 0) GOTO 0x529; Pop(1)

0x527: Stack[-21] = (bool) 0
0x528: Return(); Pop(18)

0x529: @ StopWorld()
0x52a: Pop(0)
0x52b: @ CameraTransit(Stack[-3], Stack[-5])
0x52c: Pop(0)
0x52d: Push(CvectorIndex(Stack[-4], 0))
0x52e: Push(CvectorIndex(Stack[-5], 2))
0x52f: @ Rotate(Stack[-2], Stack[-1])
0x530: Pop(2)
0x531: PushEmpty(bool)
0x532: Call2 0x7c8

0x533: Pop(0)
0x534: IF (Stack[-1] == 0) GOTO 0x536; Pop(1)

0x535: GOTO 0x53e

0x536: Push("head")
0x537: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x538: Pop(1)
0x539: Push(Stack[-1])
0x53a: IF (Stack[-1] == 0) GOTO 0x53e; Pop(1)

0x53b: Push("head")
0x53c: @ LookAsyncCamera(Stack[-1])
0x53d: Pop(1)
0x53e: @ CameraWaitForPlayFinish()
0x53f: Pop(0)
0x540: @ ResumeWorld()
0x541: Pop(0)
0x542: Stack[-21] = (bool) 1
0x543: Return(); Pop(18)

0x544: PushEmpty(bool, bool)
0x545: @ CameraSwitchToNormal()
0x546: Pop(0)
0x547: PushEmpty(bool)
0x548: Call2 0x7c8

0x549: Pop(0)
0x54a: IF (Stack[-1] == 0) GOTO 0x54c; Pop(1)

0x54b: GOTO 0x554

0x54c: Push("head")
0x54d: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x54e: Pop(1)
0x54f: Push(Stack[-1])
0x550: IF (Stack[-1] == 0) GOTO 0x554; Pop(1)

0x551: Push("head")
0x552: @ UnlookAsync(Stack[-1])
0x553: Pop(1)
0x554: Return(); Pop(2)

0x555: PushEmpty(int, int, int, int)
0x556: Push("voice_common")
0x557: @ GetVariable(Stack[-1], Stack[-3])
0x558: Pop(1)
0x559: Push(Stack[-2])
0x55a: IF (Stack[-1] == 0) GOTO 0x57b; Pop(1)

0x55b: PushEmpty(bool, object)
0x55c: Stack[-1] = Stack[-7]
0x55d: Call2 0x58f

0x55e: Pop(1)
0x55f: Pop(1); Push((bool) Stack[-1] == 0)
0x560: IF (Stack[-1] == 0) GOTO 0x569; Pop(1)

0x561: PushEmpty(bool, object)
0x562: Stack[-1] = Stack[-7]
0x563: Call2 0x5b4

0x564: Pop(1)
0x565: Pop(1); Push((bool) Stack[-1] == 0)
0x566: IF (Stack[-1] == 0) GOTO 0x569; Pop(1)

0x567: Stack[-6] = (bool) 0
0x568: Return(); Pop(4)

0x569: Push((int) 2)
0x56a: @ irand(Stack[-2], Stack[-1])
0x56b: Pop(1)
0x56c: Push(Stack[-1])
0x56d: IF (Stack[-1] == 0) GOTO 0x576; Pop(1)

0x56e: Push("voice_common")
0x56f: Push((int) 1)
0x570: Pop(1); Push(Stack[-4] + Stack[-1]);
0x571: Push((int) 3)
0x572: Pop(2); Push(Stack[-2] % Stack[-1]);
0x573: @ SetVariable(Stack[-2], Stack[-1])
0x574: Pop(2)
0x575: GOTO 0x57a

0x576: Push("voice_common")
0x577: Push((int) 0)
0x578: @ SetVariable(Stack[-2], Stack[-1])
0x579: Pop(2)
0x57a: GOTO 0x58d

0x57b: PushEmpty(bool, object)
0x57c: Stack[-1] = Stack[-7]
0x57d: Call2 0x5b4

0x57e: Pop(1)
0x57f: Pop(1); Push((bool) Stack[-1] == 0)
0x580: IF (Stack[-1] == 0) GOTO 0x589; Pop(1)

0x581: PushEmpty(bool, object)
0x582: Stack[-1] = Stack[-7]
0x583: Call2 0x58f

0x584: Pop(1)
0x585: Pop(1); Push((bool) Stack[-1] == 0)
0x586: IF (Stack[-1] == 0) GOTO 0x589; Pop(1)

0x587: Stack[-6] = (bool) 0
0x588: Return(); Pop(4)

0x589: Push("voice_common")
0x58a: Push((int) 1)
0x58b: @ SetVariable(Stack[-2], Stack[-1])
0x58c: Pop(2)
0x58d: Stack[-6] = (bool) 1
0x58e: Return(); Pop(4)

0x58f: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x590: Stack[-5] = "c"
0x591: Stack[-4] = (int) 0
0x592: Push((int) 1)
0x593: IF (Stack[-1] == 0) GOTO 0x59f; Pop(1)

0x594: Push((int) 1)
0x595: Pop(1); Push(Stack[-5] + Stack[-1]);
0x596: Pop(1); Push(Stack[-6] + Stack[-1]);
0x597: @@ HasProperty(Stack[-1], Stack[-4])
0x598: Pop(1)
0x599: Pop(0); Push((bool) Stack[-3] == 0)
0x59a: IF (Stack[-1] == 0) GOTO 0x59c; Pop(1)

0x59b: GOTO 0x59f

0x59c: Push((int) 1)
0x59d: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x59e: GOTO 0x592

0x59f: Pop(0); Push((bool) Stack[-4] == 0)
0x5a0: IF (Stack[-1] == 0) GOTO 0x5a3; Pop(1)

0x5a1: Stack[-12] = (bool) 0
0x5a2: Return(); Pop(10)

0x5a3: Stack[-2] = (int) 0
0x5a4: Push((int) 1)
0x5a5: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x5a6: IF (Stack[-1] == 0) GOTO 0x5a9; Pop(1)

0x5a7: @ irand(Stack[-2], Stack[-4])
0x5a8: Pop(0)
0x5a9: Push((int) 1)
0x5aa: Pop(1); Push(Stack[-3] + Stack[-1]);
0x5ab: Pop(1); Push(Stack[-6] + Stack[-1]);
0x5ac: @@ GetProperty(Stack[-1], Stack[-2])
0x5ad: Pop(1)
0x5ae: PushEmpty(bool, string)
0x5af: Stack[-1] = Stack[-3]
0x5b0: Call2 0x5fe

0x5b1: Stack[-14] = Stack[-2]
0x5b2: Pop(2)
0x5b3: Return(); Pop(10)

0x5b4: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x5b5: Push("d")
0x5b6: PushEmpty(int)
0x5b7: Call2 0x666

0x5b8: Pop(0)
0x5b9: Pop(2); Push(Stack[-2] + Stack[-1]);
0x5ba: Push("m")
0x5bb: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x5bc: Stack[-4] = (int) 0
0x5bd: Push((int) 1)
0x5be: IF (Stack[-1] == 0) GOTO 0x5ca; Pop(1)

0x5bf: Push((int) 1)
0x5c0: Pop(1); Push(Stack[-5] + Stack[-1]);
0x5c1: Pop(1); Push(Stack[-6] + Stack[-1]);
0x5c2: @@ HasProperty(Stack[-1], Stack[-4])
0x5c3: Pop(1)
0x5c4: Pop(0); Push((bool) Stack[-3] == 0)
0x5c5: IF (Stack[-1] == 0) GOTO 0x5c7; Pop(1)

0x5c6: GOTO 0x5ca

0x5c7: Push((int) 1)
0x5c8: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x5c9: GOTO 0x5bd

0x5ca: Pop(0); Push((bool) Stack[-4] == 0)
0x5cb: IF (Stack[-1] == 0) GOTO 0x5ce; Pop(1)

0x5cc: Stack[-12] = (bool) 0
0x5cd: Return(); Pop(10)

0x5ce: Stack[-2] = (int) 0
0x5cf: Push((int) 1)
0x5d0: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x5d1: IF (Stack[-1] == 0) GOTO 0x5d4; Pop(1)

0x5d2: @ irand(Stack[-2], Stack[-4])
0x5d3: Pop(0)
0x5d4: Push((int) 1)
0x5d5: Pop(1); Push(Stack[-3] + Stack[-1]);
0x5d6: Pop(1); Push(Stack[-6] + Stack[-1]);
0x5d7: @@ GetProperty(Stack[-1], Stack[-2])
0x5d8: Pop(1)
0x5d9: PushEmpty(bool, string)
0x5da: Stack[-1] = Stack[-3]
0x5db: Call2 0x5fe

0x5dc: Stack[-14] = Stack[-2]
0x5dd: Pop(2)
0x5de: Return(); Pop(10)

0x5df: PushEmpty(bool, float, float, bool, float, float)
0x5e0: @ lshHasAnimation(Stack[-3], Stack[-7])
0x5e1: Pop(0)
0x5e2: Push(Stack[-3])
0x5e3: IF (Stack[-1] == 0) GOTO 0x5ea; Pop(1)

0x5e4: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x5e5: Pop(0)
0x5e6: Push((bool) 0)
0x5e7: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x5e8: Pop(1)
0x5e9: GOTO 0x5ee

0x5ea: Push("Can't find lsh animation : ")
0x5eb: Pop(1); Push(Stack[-1] + Stack[-8]);
0x5ec: @ Trace(Stack[-1])
0x5ed: Pop(1)
0x5ee: Return(); Pop(6)

0x5ef: PushEmpty(bool, float, float, bool, float, float)
0x5f0: @ lshHasAnimation(Stack[-3], Stack[-8])
0x5f1: Pop(0)
0x5f2: Push(Stack[-3])
0x5f3: IF (Stack[-1] == 0) GOTO 0x5f9; Pop(1)

0x5f4: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x5f5: Pop(0)
0x5f6: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x5f7: Pop(0)
0x5f8: GOTO 0x5fd

0x5f9: Push("Can't find lsh animation : ")
0x5fa: Pop(1); Push(Stack[-1] + Stack[-9]);
0x5fb: @ Trace(Stack[-1])
0x5fc: Pop(1)
0x5fd: Return(); Pop(6)

0x5fe: PushEmpty(bool, bool)
0x5ff: PushEmpty(bool)
0x600: Call2 0x7c8

0x601: Pop(0)
0x602: IF (Stack[-1] == 0) GOTO 0x60b; Pop(1)

0x603: @ lshHasSpeech(Stack[-1], Stack[-3])
0x604: Pop(0)
0x605: Push(Stack[-1])
0x606: IF (Stack[-1] == 0) GOTO 0x60b; Pop(1)

0x607: @ lshPlaySpeech(Stack[-3])
0x608: Pop(0)
0x609: Stack[-4] = (bool) 1
0x60a: Return(); Pop(2)

0x60b: Stack[-4] = (bool) 0
0x60c: Return(); Pop(2)

0x60d: PushEmpty(bool)
0x60e: Call2 0x7c8

0x60f: Pop(0)
0x610: IF (Stack[-1] == 0) GOTO 0x613; Pop(1)

0x611: @ lshStopSpeech()
0x612: Pop(0)
0x613: Return(); Pop(0)

0x614: PushEmpty(object, object)
0x615: @ self(Stack[-1])
0x616: Pop(0)
0x617: Stack[-3] = Stack[-1]
0x618: Return(); Pop(2)

0x619: Stack[-1] = 0
0x61a: PushEmpty(float, float)
0x61b: Pop(0); Push(Stack[-3] | Stack[-3]);
0x61c: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x61d: Push((float)0.0)
0x61e: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x61f: IF (Stack[-1] == 0) GOTO 0x622; Pop(1)

0x620: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x621: Return(); Pop(2)

0x622: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x623: Return(); Pop(2)

0x624: PushEmpty(int, int)
0x625: @ GetVariable(Stack[-3], Stack[-1])
0x626: Pop(0)
0x627: Stack[-4] = Stack[-1]
0x628: Return(); Pop(2)

0x629: PushEmpty(object, object)
0x62a: @ CreateIntVector(Stack[-1])
0x62b: Pop(0)
0x62c: @@ add(Stack[-4])
0x62d: Pop(0)
0x62e: @@ add(Stack[-3])
0x62f: Pop(0)
0x630: Push((int) 3)
0x631: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x632: Pop(1)
0x633: Return(); Pop(2)

0x634: Stack[-1] = 0
0x635: PushEmpty(int, int, bool, int, int, bool)
0x636: @@ GetItemID(Stack[-3])
0x637: Pop(0)
0x638: Push("Category")
0x639: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x63a: Pop(1)
0x63b: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x63c: Pop(0)
0x63d: Pop(0); Push((bool) Stack[-1] == 0)
0x63e: IF (Stack[-1] == 0) GOTO 0x642; Pop(1)

0x63f: @@ DropItems(Stack[-8], Stack[-7])
0x640: Pop(0)
0x641: GOTO 0x647

0x642: PushEmpty(int, int)
0x643: Stack[-2] = Stack[-5]
0x644: Stack[-1] = Stack[-9]
0x645: Call2 0x629

0x646: Pop(2)
0x647: Return(); Pop(6)

0x648: PushEmpty(object, object)
0x649: @ CreateInvItem(Stack[-1])
0x64a: Pop(0)
0x64b: @@ SetItemName(Stack[-4])
0x64c: Pop(0)
0x64d: PushEmpty(object, object, int)
0x64e: Stack[-3] = Stack[-8]
0x64f: Stack[-2] = Stack[-4]
0x650: Stack[-1] = Stack[-6]
0x651: Call2 0x635

0x652: Pop(3)
0x653: Return(); Pop(2)

0x654: Stack[-1] = 0
0x655: PushEmpty(object, object)
0x656: @ FindActor(Stack[-1], Stack[-4])
0x657: Pop(0)
0x658: Pop(0); Push((bool) Stack[-1] == 0)
0x659: IF (Stack[-1] == 0) GOTO 0x65c; Pop(1)

0x65a: Stack[-5] = (bool) 0
0x65b: Return(); Pop(2)

0x65c: @ Trigger(Stack[-1], Stack[-3])
0x65d: Pop(0)
0x65e: Stack[-5] = (bool) 1
0x65f: Return(); Pop(2)

0x660: Stack[-1] = 0
0x661: PushEmpty(float, float)
0x662: @ GetGameTime(Stack[-1])
0x663: Pop(0)
0x664: Stack[-3] = Stack[-1]
0x665: Return(); Pop(2)

0x666: PushEmpty(float, float)
0x667: @ GetGameTime(Stack[-1])
0x668: Pop(0)
0x669: Push((int) 1)
0x66a: PushEmpty(int)
0x66b: Push((int) 24)
0x66c: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x66d: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x66e: Return(); Pop(2)

0x66f: PushEmpty(string, string)
0x670: Stack[-1] = "idle"
0x671: Push(Stack[-3])
0x672: IF (Stack[-1] == 0) GOTO 0x674; Pop(1)

0x673: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x674: Stack[-4] = Stack[-1]
0x675: Return(); Pop(2)

0x676: PushEmpty(int, bool, int, bool)
0x677: Stack[-2] = (int) 0
0x678: Push("all")
0x679: PushEmpty(string, int)
0x67a: Stack[-1] = Stack[-5]
0x67b: Call2 0x66f

0x67c: Pop(1)
0x67d: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x67e: Pop(2)
0x67f: Pop(0); Push((bool) Stack[-1] == 0)
0x680: IF (Stack[-1] == 0) GOTO 0x682; Pop(1)

0x681: GOTO 0x685

0x682: Push((int) 1)
0x683: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x684: GOTO 0x678

0x685: Stack[-5] = Stack[-2]
0x686: Return(); Pop(4)

0x687: PushEmpty()
0x688: Push("oob6Mat1")
0x689: Push((int) 1)
0x68a: @ SetVariable(Stack[-2], Stack[-1])
0x68b: Pop(2)
0x68c: Return(); Pop(0)

0x68d: PushEmpty()
0x68e: Push("b6q01")
0x68f: Push((int) 3)
0x690: @ SetVariable(Stack[-2], Stack[-1])
0x691: Pop(2)
0x692: PushEmpty()
0x693: Call2 0x73a

0x694: Pop(0)
0x695: Return(); Pop(0)

0x696: PushEmpty(object, int, object, int)
0x697: Push("b6q01")
0x698: Push((int) 4)
0x699: @ SetVariable(Stack[-2], Stack[-1])
0x69a: Pop(2)
0x69b: PushEmpty(object)
0x69c: Call2 0x77d

0x69d: Stack[-3] = Stack[-1]
0x69e: Pop(1)
0x69f: Push("b6q01MatGotoByk")
0x6a0: Push("pt_b6q01_bull")
0x6a1: Push((int) 1)
0x6a2: Push((int) 530992)
0x6a3: PushEmpty(float)
0x6a4: Call2 0x661

0x6a5: Pop(0)
0x6a6: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x6a7: Pop(5)
0x6a8: PushEmpty()
0x6a9: Call2 0x747

0x6aa: Pop(0)
0x6ab: Push("alpha_pills")
0x6ac: Push((int) 50)
0x6ad: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0x6ae: Pop(2)
0x6af: PushEmpty(bool, string, string)
0x6b0: Stack[-2] = "quest_b6_01"
0x6b1: Stack[-1] = "init_altar"
0x6b2: Call2 0x655

0x6b3: Pop(3)
0x6b4: PushEmpty(bool, string, string)
0x6b5: Stack[-2] = "quest_b6_01"
0x6b6: Stack[-1] = "clean_termitnik"
0x6b7: Call2 0x655

0x6b8: Pop(3)
0x6b9: Return(); Pop(4)

0x6ba: Stack[-2] = 0
0x6bb: PushEmpty()
0x6bc: Push("playsound")
0x6bd: Push("giveitem")
0x6be: @ TriggerWorld(Stack[-2], Stack[-1])
0x6bf: Pop(2)
0x6c0: Return(); Pop(0)

0x6c1: PushEmpty()
0x6c2: Push("oob6Mat2")
0x6c3: Push((int) 1)
0x6c4: @ SetVariable(Stack[-2], Stack[-1])
0x6c5: Pop(2)
0x6c6: Return(); Pop(0)

0x6c7: PushEmpty()
0x6c8: PushEmpty(object, string, float)
0x6c9: PushEmpty(object)
0x6ca: Call2 0x77d

0x6cb: Stack[-4] = Stack[-1]
0x6cc: Pop(1)
0x6cd: Stack[-2] = "pt_map_kurgan"
0x6ce: Stack[-1] = (int) 2
0x6cf: Call2 0x78e

0x6d0: Pop(3)
0x6d1: PushEmpty(object)
0x6d2: Call2 0x77d

0x6d3: Pop(0)
0x6d4: @@ ShowMap(Stack[-1])
0x6d5: Pop(1)
0x6d6: Return(); Pop(0)

0x6d7: PushEmpty()
0x6d8: Push("recipe1 is given")
0x6d9: @ Trace(Stack[-1])
0x6da: Pop(1)
0x6db: PushEmpty(object, string, int)
0x6dc: Stack[-3] = Stack[-5]
0x6dd: Stack[-2] = "recipe1"
0x6de: Stack[-1] = (int) 1
0x6df: Call2 0x648

0x6e0: Pop(3)
0x6e1: Return(); Pop(0)

0x6e2: PushEmpty()
0x6e3: PushEmpty(int, string)
0x6e4: Stack[-1] = "oob6Mat2"
0x6e5: Call2 0x624

0x6e6: Pop(1)
0x6e7: Push((int) 0)
0x6e8: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x6e9: IF (Stack[-1] == 0) GOTO 0x6ec; Pop(1)

0x6ea: Stack[-2] = (bool) 1
0x6eb: Return(); Pop(0)

0x6ec: Stack[-2] = (bool) 0
0x6ed: Return(); Pop(0)

0x6ee: PushEmpty()
0x6ef: PushEmpty(int, string)
0x6f0: Stack[-1] = "oob6Mat1"
0x6f1: Call2 0x624

0x6f2: Pop(1)
0x6f3: Push((int) 0)
0x6f4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x6f5: IF (Stack[-1] == 0) GOTO 0x6f8; Pop(1)

0x6f6: Stack[-2] = (bool) 1
0x6f7: Return(); Pop(0)

0x6f8: Stack[-2] = (bool) 0
0x6f9: Return(); Pop(0)

0x6fa: PushEmpty()
0x6fb: PushEmpty(int, string)
0x6fc: Stack[-1] = "b6q01"
0x6fd: Call2 0x624

0x6fe: Pop(1)
0x6ff: Push((int) 2)
0x700: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x701: IF (Stack[-1] == 0) GOTO 0x704; Pop(1)

0x702: Stack[-2] = (bool) 1
0x703: Return(); Pop(0)

0x704: Stack[-2] = (bool) 0
0x705: Return(); Pop(0)

0x706: PushEmpty()
0x707: PushEmpty(bool, object)
0x708: Stack[-1] = Stack[-3]
0x709: Call2 0x726

0x70a: Pop(1)
0x70b: IF (Stack[-1] == 0) GOTO 0x70e; Pop(1)

0x70c: Stack[-2] = (bool) 1
0x70d: Return(); Pop(0)

0x70e: Stack[-2] = (bool) 0
0x70f: Return(); Pop(0)

0x710: PushEmpty()
0x711: PushEmpty(int, string)
0x712: Stack[-1] = "b6q01"
0x713: Call2 0x624

0x714: Pop(1)
0x715: Push((int) 3)
0x716: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x717: IF (Stack[-1] == 0) GOTO 0x71a; Pop(1)

0x718: Stack[-2] = (bool) 1
0x719: Return(); Pop(0)

0x71a: Stack[-2] = (bool) 0
0x71b: Return(); Pop(0)

0x71c: PushEmpty()
0x71d: PushEmpty(bool, object)
0x71e: Stack[-1] = Stack[-3]
0x71f: Call2 0x72d

0x720: Pop(1)
0x721: IF (Stack[-1] == 0) GOTO 0x724; Pop(1)

0x722: Stack[-2] = (bool) 1
0x723: Return(); Pop(0)

0x724: Stack[-2] = (bool) 0
0x725: Return(); Pop(0)

0x726: PushEmpty(int, int)
0x727: Push("alpha_pills")
0x728: @@ GetItemCountOfType(Stack[-2], Stack[-1])
0x729: Pop(1)
0x72a: Push((int) 50)
0x72b: Stack[-5] = Stack[-2] >= Stack[-1]; Pop(1);
0x72c: Return(); Pop(2)

0x72d: PushEmpty(int, int)
0x72e: Push("alpha_pills")
0x72f: @@ GetItemCountOfType(Stack[-2], Stack[-1])
0x730: Pop(1)
0x731: Stack[-4] = (bool) 0
0x732: Push((int) 0)
0x733: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x734: IF (Stack[-1] == 0) GOTO 0x739; Pop(1)

0x735: Push((int) 50)
0x736: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x737: IF (Stack[-1] == 0) GOTO 0x739; Pop(1)

0x738: Stack[-4] = (bool) 1
0x739: Return(); Pop(2)

0x73a: PushEmpty(object, object)
0x73b: Push((int) 363)
0x73c: Push((int) 1)
0x73d: Push((int) 525663)
0x73e: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x73f: Pop(3)
0x740: PushEmpty(bool, object, int)
0x741: Stack[-2] = Stack[-4]
0x742: Stack[-1] = (int) 265
0x743: Call2 0x761

0x744: Pop(3)
0x745: Return(); Pop(2)

0x746: Stack[-1] = 0
0x747: PushEmpty(object, object)
0x748: Push((int) 364)
0x749: Push((int) 1)
0x74a: Push((int) 525664)
0x74b: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x74c: Pop(3)
0x74d: PushEmpty(bool, object, int)
0x74e: Stack[-2] = Stack[-4]
0x74f: Stack[-1] = (int) 265
0x750: Call2 0x761

0x751: Pop(3)
0x752: Return(); Pop(2)

0x753: Stack[-1] = 0
0x754: PushEmpty(object, object)
0x755: @ GetDiaryRoot(Stack[-1])
0x756: Pop(0)
0x757: Pop(0); Push((bool) Stack[-1] == 0)
0x758: IF (Stack[-1] == 0) GOTO 0x75e; Pop(1)

0x759: Push("Can't retrieve diary root")
0x75a: @ Trace(Stack[-1])
0x75b: Pop(1)
0x75c: Stack[-3] = (bool) 0
0x75d: Return(); Pop(2)

0x75e: Stack[-3] = Stack[-1]
0x75f: Return(); Pop(2)

0x760: Stack[-1] = 0
0x761: PushEmpty(object, object, int, object, object, int)
0x762: PushEmpty(object)
0x763: Call2 0x754

0x764: Stack[-4] = Stack[-1]
0x765: Pop(1)
0x766: @@ Find(Stack[-7], Stack[-2])
0x767: Pop(0)
0x768: Pop(0); Push((bool) Stack[-2] == 0)
0x769: IF (Stack[-1] == 0) GOTO 0x770; Pop(1)

0x76a: Push("Can't find diary parent with id: ")
0x76b: Pop(1); Push(Stack[-1] + Stack[-8]);
0x76c: @ Trace(Stack[-1])
0x76d: Pop(1)
0x76e: Stack[-9] = (bool) 0
0x76f: Return(); Pop(6)

0x770: @@ AddChild(Stack[-8])
0x771: Pop(0)
0x772: Push((int) 7)
0x773: @ SendWorldWndMessage(Stack[-1])
0x774: Pop(1)
0x775: @@ GetCategory(Stack[-1])
0x776: Pop(0)
0x777: @ SetDiarySection(Stack[-1])
0x778: Pop(0)
0x779: Stack[-9] = (bool) 0
0x77a: Return(); Pop(6)

0x77b: Stack[-2] = 0
0x77c: Stack[-3] = 0
0x77d: PushEmpty(object, object, object, object)
0x77e: @ GetMainOutdoorScene(Stack[-2])
0x77f: Pop(0)
0x780: Pop(0); Push((bool) Stack[-2] == 0)
0x781: IF (Stack[-1] == 0) GOTO 0x788; Pop(1)

0x782: Push("Can't find main outdoor scene")
0x783: @ Trace(Stack[-1])
0x784: Pop(1)
0x785: Stack[-1] = 0
0x786: Stack[-5] = Stack[-1]
0x787: Return(); Pop(4)

0x788: @@ GetMap(Stack[-1])
0x789: Pop(0)
0x78a: Stack[-5] = Stack[-1]
0x78b: Return(); Pop(4)

0x78c: Stack[-1] = 0
0x78d: Stack[-2] = 0
0x78e: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x78f: @ GetMainOutdoorScene(Stack[-2])
0x790: Pop(0)
0x791: Pop(0); Push((bool) Stack[-2] == 0)
0x792: IF (Stack[-1] == 0) GOTO 0x797; Pop(1)

0x793: Push("Can't find main outdoor scene")
0x794: @ Trace(Stack[-1])
0x795: Pop(1)
0x796: Return(); Pop(8)

0x797: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x798: Pop(0)
0x799: Pop(0); Push((bool) Stack[-1] == 0)
0x79a: IF (Stack[-1] == 0) GOTO 0x7a1; Pop(1)

0x79b: Push("Warning: outdoor scene locator ")
0x79c: Pop(1); Push(Stack[-1] + Stack[-11]);
0x79d: Push(" doesnt exist")
0x79e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x79f: @ Trace(Stack[-1])
0x7a0: Pop(1)
0x7a1: @@ GetMap(Stack[-11])
0x7a2: Pop(0)
0x7a3: Pop(0); Push((bool) Stack[-11] == 0)
0x7a4: IF (Stack[-1] == 0) GOTO 0x7a9; Pop(1)

0x7a5: Push("Can't find map")
0x7a6: @ Trace(Stack[-1])
0x7a7: Pop(1)
0x7a8: Return(); Pop(8)

0x7a9: Push(CvectorIndex(Stack[-4], 0))
0x7aa: Push(CvectorIndex(Stack[-5], 2))
0x7ab: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x7ac: Pop(2)
0x7ad: Return(); Pop(8)

0x7ae: Stack[-2] = 0
0x7af: PushEmpty(int, int)
0x7b0: Push("branch")
0x7b1: @ GetVariable(Stack[-1], Stack[-2])
0x7b2: Pop(1)
0x7b3: Push((int) 0)
0x7b4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7b5: IF (Stack[-1] == 0) GOTO 0x7b9; Pop(1)

0x7b6: Stack[-3] = (int) 1
0x7b7: Return(); Pop(2)

0x7b8: GOTO 0x7be

0x7b9: Push((int) 1)
0x7ba: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7bb: IF (Stack[-1] == 0) GOTO 0x7be; Pop(1)

0x7bc: Stack[-3] = (int) 2
0x7bd: Return(); Pop(2)

0x7be: Stack[-3] = (int) 3
0x7bf: Return(); Pop(2)

0x7c0: Stack[-1] = (int) 515545
0x7c1: Return(); Pop(0)

0x7c2: Stack[-1] = (int) 502870
0x7c3: Return(); Pop(0)

0x7c4: Stack[-1] = "ui/NPC_Mat.png"
0x7c5: Return(); Pop(0)

0x7c6: Stack[-1] = "ui/NPC_Mat_b.png"
0x7c7: Return(); Pop(0)

0x7c8: Stack[-1] = (bool) 1
0x7c9: Return(); Pop(0)

