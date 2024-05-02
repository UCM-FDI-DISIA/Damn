Entity1 = {
	Name = "Player",
	Components = {
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.8133107423782349|5.464506149291992|5.160520076751709",
				Rotation = "false|1.0|2.1855694143368964e-08|0.0|-0.0",
				Scale = "1.105026125907898|1.105026125907898|1.105026125907898"
			}
		}
	}
}

Entity2 = {
	Name = "Floor",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Floor"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.8228198289871216|1.7865326404571533|0.7102036476135254",
				Rotation = "false|0.7071067094802856|-0.7071068286895752|0.0|-0.0",
				Scale = "15.294673919677734|18.7946720123291|0.28266042470932007"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "37.5893440246582",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity3 = {
	Name = "Sun",
	Components = {
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "9.962356567382812|-0.608795166015625|10.804308891296387",
				Rotation = "false|0.584906816482544|-0.7914972305297852|-0.08224325627088547|-0.15701015293598175",
				Scale = "0.6571059823036194|0.6571060419082642|0.6571060419082642"
			}
		}
	}
}

Entity4 = {
	Name = "Gun",
	Components = {
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.8133107423782349|5.464506149291992|5.160520076751709",
				Rotation = "false|1.0|2.1855694143368964e-08|0.0|-0.0",
				Scale = "0.6571059823036194|0.6571059823036194|0.6571059823036194"
			}
		},
		{
			Name = "WEAPON_COMPONENT",
			Arguments = {
				MaxAmmo = "50",
				MagazineSize = "25",
				Cadence = "0.5"
			}
		}
	}
}

Entity5 = {
	Name = "Shotgun",
	Components = {
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.8133107423782349|5.464506149291992|5.160520076751709",
				Rotation = "false|1.0|2.1855694143368964e-08|0.0|-0.0",
				Scale = "0.6571059823036194|0.6571059823036194|0.6571059823036194"
			}
		},
		{
			Name = "WEAPON_COMPONENT",
			Arguments = {
				MaxAmmo = "10",
				MagazineSize = "5",
				Cadence = "2",
				Balas = "3"
			}
		}
	}
}

Entity6 = {
	Name = "AUI_HealthBar",
	Components = {
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.6480690240859985|1.407318353652954|0.683670163154602",
				Rotation = "false|0.7071067094802856|-0.7071068286895752|0.0|-0.0",
				Scale = "0.6571059823036194|0.6571059823036194|0.6571059823036194"
			}
		},
		{
			Name = "BAR",
			Arguments = {
				OverlayName = "HealthBar",
				XPos = "17",
				YPos = "5",
				Width = "30",
				Height = "5",
				Texture = "PlayButton_Ini.png",
				Depth = "1"
			}
		}
	}
}

Entity7 = {
	Name = "AUI_AMMO_TEXT",
	Components = {
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.6480690240859985|1.407318353652954|0.683670163154602",
				Rotation = "false|0.7071067094802856|-0.7071068286895752|0.0|-0.0",
				Scale = "0.6571059823036194|0.6571059823036194|0.6571059823036194"
			}
		},
		{
			Name = "TEXT",
			Arguments = {
				OverlayName = "AmmoText",
				XPos = "70",
				YPos = "90",
				Width = "30",
				Depth = "1",
				Tam = "5",
				Text = "XX/XX",
				Font = "DejaVuSerifCondensed-Italic.ttf",
				Color = "255|255|255"
			}
		}
	}
}

Entity8 = {
	Name = "AUI_GUN_IMAGE",
	Components = {
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.6480690240859985|1.407318353652954|0.683670163154602",
				Rotation = "false|0.7071067094802856|-0.7071068286895752|0.0|-0.0",
				Scale = "0.6571059823036194|0.6571059823036194|0.6571059823036194"
			}
		},
		{
			Name = "IMAGE",
			Arguments = {
				OverlayName = "GunImage",
				XPos = "90",
				YPos = "90",
				Width = "30",
				Height = "30",
				Texture = "Pistol.png",
				Depth = "1"
			}
		}
	}
}

Entity9 = {
	Name = "AUI_TIME_TEXT",
	Components = {
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.6480690240859985|1.407318353652954|0.683670163154602",
				Rotation = "false|0.7071067094802856|-0.7071068286895752|0.0|-0.0",
				Scale = "0.6571059823036194|0.6571059823036194|0.6571059823036194"
			}
		},
		{
			Name = "TEXT",
			Arguments = {
				OverlayName = "TimeText",
				XPos = "82",
				YPos = "3",
				Depth = "1",
				Tam = "5",
				Text = "TIME LEFT: XX",
				Font = "DejaVuSerifCondensed-Italic.ttf",
				Color = "255|0|0"
			}
		}
	}
}

Entity10 = {
	Name = "AUI_ENEMIES_LEFT_TEXT",
	Components = {
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.6480690240859985|1.407318353652954|0.683670163154602",
				Rotation = "false|0.7071067094802856|-0.7071068286895752|0.0|-0.0",
				Scale = "0.6571059823036194|0.6571059823036194|0.6571059823036194"
			}
		},
		{
			Name = "TEXT",
			Arguments = {
				OverlayName = "EnemiesLeftText",
				XPos = "80",
				YPos = "8",
				Depth = "1",
				Tam = "5",
				Text = "ENEMIES LEFT: XX",
				Font = "DejaVuSerifCondensed-Italic.ttf",
				Color = "0|255|0"
			}
		}
	}
}

Entity11 = {
	Name = "MANAGERS",
	Components = {
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.6480690240859985|1.407318353652954|0.683670163154602",
				Rotation = "false|0.7071067094802856|-0.7071068286895752|0.0|-0.0",
				Scale = "0.6571059823036194|0.6571059823036194|0.6571059823036194"
			}
		},
		{
			Name = "GAMEMANAGER",
			Arguments = {
				MaxTime = "60"
			}
		},
		{
			Name = "UIMANAGER",
			Arguments = {
			}
		}
	}
}

Entity12 = {
	Name = "A_LIGHT",
	Components = {
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.6480690240859985|1.407318353652954|-0.6305416822433472",
				Rotation = "false|0.7071067094802856|-0.7071068286895752|0.0|-0.0",
				Scale = "0.6571059823036194|0.6571059823036194|0.6571059823036194"
			}
		},
		{
			Name = "LIGHT",
			Arguments = {
				LightType = "LT_POINT",
				DiffuseColor = "1|1|1",
				SpecularColor = "0|0|0"
			}
		}
	}
}

Entity13 = {
	Name = "AUI_SCORE_TEXT",
	Components = {
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.6480690240859985|1.407318353652954|0.683670163154602",
				Rotation = "false|0.7071067094802856|-0.7071068286895752|0.0|-0.0",
				Scale = "0.6571059823036194|0.6571059823036194|0.6571059823036194"
			}
		},
		{
			Name = "TEXT",
			Arguments = {
				OverlayName = "ScoreText",
				XPos = "83",
				YPos = "13",
				Depth = "1",
				Tam = "5",
				Text = "SCORE: XX",
				Font = "DejaVuSerifCondensed-Italic.ttf",
				Color = "255|0|255"
			}
		}
	}
}

Entity14 = {
	Name = "Wall",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "HazardousWall"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.6139941215515137|7.676422119140625|-4.054001808166504",
				Rotation = "false|0.6631386280059814|-0.6631388068199158|-0.24545270204544067|-0.24545276165008545",
				Scale = "-7.888233184814453|-0.13727302849292755|-5.59731388092041"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "15.776466369628906",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity15 = {
	Name = "Floor.001",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Floor"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-29.766529083251953|1.7865326404571533|0.7102036476135254",
				Rotation = "false|0.7071067094802856|-0.7071068286895752|0.0|-0.0",
				Scale = "15.294673919677734|18.7946720123291|0.28266042470932007"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "37.5893440246582",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity16 = {
	Name = "Floor.002",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Floor"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "31.412168502807617|1.7865326404571533|0.7102036476135254",
				Rotation = "false|0.7071067094802856|-0.7071068286895752|0.0|-0.0",
				Scale = "15.294673919677734|18.7946720123291|0.28266042470932007"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "37.5893440246582",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity17 = {
	Name = "Cylinder.011",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "DangerousBarrel"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-19.708887100219727|2.8192005157470703|-0.9980835914611816",
				Rotation = "false|0.7071067094802856|-0.7071068286895752|0.0|-0.0",
				Scale = "0.445939302444458|0.445939302444458|0.4492607116699219"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "3.1669189293227937|3.4935205292474376|3.1669189293227937",
				PosOffset = "0|0|0",
				Radius = "1.569501519203186",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity18 = {
	Name = "Cube.024",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Crate"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-4.306380748748779|3.0691781044006348|1.9316953420639038",
				Rotation = "false|0.4636920690536499|0.5338484048843384|-0.5338436365127563|-0.4636879563331604",
				Scale = "1.0|2.658043146133423|1.0588650703430176"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|1.9999998206059375",
				PosOffset = "0|0|0",
				Radius = "5.3160858154296875",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity19 = {
	Name = "Wall",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "HazardousWall"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "21.775789260864258|7.666506290435791|4.584588050842285",
				Rotation = "false|0.4999999701976776|-0.5|0.5|0.5",
				Scale = "-7.888233184814453|-0.13727302849292755|-5.59731388092041"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "15.776466369628906",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity20 = {
	Name = "Wall",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "HazardousWall"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-13.35087776184082|7.603426456451416|6.5534162521362305",
				Rotation = "false|1.3767875373105198e-07|-1.3767878215276141e-07|-0.7071067094802856|-0.7071068286895752",
				Scale = "-7.888233184814453|-0.13727302849292755|-5.59731388092041"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "15.776466369628906",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity21 = {
	Name = "Wall",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "HazardousWall"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-28.87656021118164|7.540343761444092|20.988842010498047",
				Rotation = "false|1.3767875373105198e-07|-1.3767878215276141e-07|-0.7071067094802856|-0.7071068286895752",
				Scale = "-7.888233184814453|-0.13727302849292755|-5.59731388092041"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "15.776466369628906",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity22 = {
	Name = "Wall",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "HazardousWall"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "18.201805114746094|7.666505813598633|6.553410053253174",
				Rotation = "false|1.3767875373105198e-07|-1.3767878215276141e-07|-0.7071067094802856|-0.7071068286895752",
				Scale = "-7.888233184814453|-0.13727302849292755|-5.59731388092041"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "15.776466369628906",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity23 = {
	Name = "Wall",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "HazardousWall"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "2.4254627227783203|7.666508197784424|6.55341100692749",
				Rotation = "false|1.3767875373105198e-07|-1.3767878215276141e-07|-0.7071067094802856|-0.7071068286895752",
				Scale = "-7.888233184814453|-0.13727302849292755|-5.59731388092041"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "15.776466369628906",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity24 = {
	Name = "Wall",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "HazardousWall"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-13.35087776184082|7.666581630706787|-9.222926139831543",
				Rotation = "false|1.3767875373105198e-07|-1.3767878215276141e-07|-0.7071067094802856|-0.7071068286895752",
				Scale = "-7.888233184814453|-0.13727302849292755|-5.59731388092041"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "15.776466369628906",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity25 = {
	Name = "Wall",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "HazardousWall"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-21.376388549804688|7.666505336761475|-16.97388458251953",
				Rotation = "false|0.5000001192092896|-0.5000001192092896|-0.49999988079071045|-0.49999991059303284",
				Scale = "-7.888233184814453|-0.13727302849292755|-5.59731388092041"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "15.776466369628906",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity26 = {
	Name = "Wall",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "HazardousWall"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "14.07519817352295|7.666504859924316|-1.058804988861084",
				Rotation = "false|0.7006195187568665|-0.7006194591522217|0.09556340426206589|0.09556339681148529",
				Scale = "-7.888233184814453|-0.13727302849292755|-5.59731388092041"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "1.9999998791016576|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "15.77646541595459",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity27 = {
	Name = "Cube.001",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Crate"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "11.6577730178833|3.069201946258545|1.3037166595458984",
				Rotation = "false|0.4636921286582947|0.5338483452796936|-0.5338435769081116|-0.4636880159378052",
				Scale = "1.0|1.0054153203964233|1.242368459701538"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|1.999999808093503|2.0",
				PosOffset = "0|0|0",
				Radius = "2.484736680984497",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity28 = {
	Name = "Cube.002",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Crate"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "11.6577730178833|4.321034908294678|1.3037166595458984",
				Rotation = "false|0.32988303899765015|0.6254451274871826|-0.6254395842552185|-0.32988011837005615",
				Scale = "0.25183239579200745|0.7847268581390381|0.7847268581390381"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0000001519118253|2.0000001519118253",
				PosOffset = "0|0|0",
				Radius = "1.5694538354873657",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity29 = {
	Name = "Cube.003",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Crate"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "11.86584758758545|4.675950527191162|0.8908287882804871",
				Rotation = "false|0.1458958387374878|0.691895067691803|-0.6918889880180359|-0.14589455723762512",
				Scale = "0.16858236491680145|0.5253140926361084|0.5253140926361084"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "1.0506281852722168",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity30 = {
	Name = "Cylinder.001",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "DangerousBarrel"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "11.731725692749023|2.8192038536071777|5.4164347648620605",
				Rotation = "false|0.7071067094802856|-0.7071068286895752|0.0|-0.0",
				Scale = "0.445939302444458|0.445939302444458|0.4492607116699219"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "3.1669189293227937|3.4935205292474376|3.1669189293227937",
				PosOffset = "0|0|0",
				Radius = "1.569501519203186",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity31 = {
	Name = "Wall",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "HazardousWall"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-32.55817413330078|7.666581630706787|-16.034587860107422",
				Rotation = "false|0.33621546626091003|-0.3362155258655548|-0.6220603585243225|-0.6220604181289673",
				Scale = "-7.888233184814453|-0.13727302849292755|-5.59731388092041"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "15.776466369628906",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity32 = {
	Name = "Wall",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "HazardousWall"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-29.127351760864258|7.540343761444092|-22.846242904663086",
				Rotation = "false|1.3767875373105198e-07|-1.3767878215276141e-07|-0.7071067094802856|-0.7071068286895752",
				Scale = "-7.888233184814453|-0.13727302849292755|-5.59731388092041"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "15.776466369628906",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity33 = {
	Name = "Floor.003",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Floor"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-29.766529083251953|1.7865265607833862|-36.87914276123047",
				Rotation = "false|0.7071067094802856|-0.7071068286895752|0.0|-0.0",
				Scale = "15.294673919677734|18.7946720123291|0.28266042470932007"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "37.5893440246582",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity34 = {
	Name = "Wall",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "HazardousWall"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-36.90206527709961|7.666502952575684|14.2836275100708",
				Rotation = "false|0.4999999701976776|-0.5|-0.5|-0.5",
				Scale = "-7.888233184814453|-0.13727302849292755|-5.59731388092041"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "15.776466369628906",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity35 = {
	Name = "Wall",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "HazardousWall"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-24.719120025634766|7.666502952575684|13.771129608154297",
				Rotation = "false|0.37900668382644653|-0.3790067434310913|-0.5969538688659668|-0.5969538688659668",
				Scale = "-7.888233184814453|-0.13727302849292755|-5.59731388092041"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "15.776466369628906",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity36 = {
	Name = "Floor.004",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Floor"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-60.35587692260742|1.7865326404571533|0.7102036476135254",
				Rotation = "false|0.7071067094802856|-0.7071068286895752|0.0|-0.0",
				Scale = "15.294673919677734|18.7946720123291|0.28266042470932007"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "37.5893440246582",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity37 = {
	Name = "Wall",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "HazardousWall"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-44.34407424926758|7.603426456451416|3.4148082733154297",
				Rotation = "false|0.14214815199375153|-0.14214815199375153|0.692671537399292|0.6926715970039368",
				Scale = "-7.888233184814453|-0.13727302849292755|-5.59731388092041"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0000001208983424|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "15.776467323303223",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity38 = {
	Name = "Wall",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "HazardousWall"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-44.53980255126953|7.666581630706787|-8.021437644958496",
				Rotation = "false|0.06634094566106796|-0.06634094566106796|-0.7039878368377686|-0.7039878368377686",
				Scale = "-7.888233184814453|-0.13727302849292755|-5.59731388092041"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|1.9999997828974656",
				PosOffset = "0|0|0",
				Radius = "15.776466369628906",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity39 = {
	Name = "Wall",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "HazardousWall"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-59.537044525146484|7.603426456451416|0.3191415071487427",
				Rotation = "false|1.3767875373105198e-07|-1.3767878215276141e-07|-0.7071067094802856|-0.7071068286895752",
				Scale = "-7.888233184814453|-0.13727302849292755|-5.59731388092041"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "15.776466369628906",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity40 = {
	Name = "Wall",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "HazardousWall"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-60.151756286621094|7.666581630706787|-6.550230979919434",
				Rotation = "false|1.3767875373105198e-07|-1.3767878215276141e-07|-0.7071067094802856|-0.7071068286895752",
				Scale = "-7.888233184814453|-0.13727302849292755|-5.59731388092041"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "15.776466369628906",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity41 = {
	Name = "Wall",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "HazardousWall"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-68.45500183105469|7.666503429412842|-1.4928388595581055",
				Rotation = "false|0.4999999701976776|-0.5|-0.5|-0.5",
				Scale = "-7.888233184814453|-0.13727302849292755|-5.59731388092041"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "15.776466369628906",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity42 = {
	Name = "Floor.005",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Floor"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-29.766529083251953|1.7865326404571533|38.29954528808594",
				Rotation = "false|0.7071067094802856|-0.7071068286895752|0.0|-0.0",
				Scale = "15.294673919677734|18.7946720123291|0.28266042470932007"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "37.5893440246582",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity43 = {
	Name = "Cube.004",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Crate"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-15.263190269470215|4.885397911071777|-7.665173053741455",
				Rotation = "false|4.475187779462431e-06|3.1473683748117764e-07|-0.0701560229063034|-0.9975360035896301",
				Scale = "1.0|2.658043146133423|1.0588650703430176"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "5.316086292266846",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity44 = {
	Name = "Cylinder.002",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "DangerousBarrel"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-10.595755577087402|2.819199800491333|-5.029907703399658",
				Rotation = "false|0.6211447715759277|-0.6211448311805725|-0.3379040062427521|-0.33790406584739685",
				Scale = "0.445939302444458|0.445939302444458|0.4492607116699219"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "3.166919196644577|3.4935205292474376|3.166919196644577",
				PosOffset = "0|0|0",
				Radius = "1.569501519203186",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity45 = {
	Name = "Cylinder.003",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "DangerousBarrel"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-11.032109260559082|2.8191990852355957|-3.716299533843994",
				Rotation = "false|0.6272781491279602|-0.627278208732605|0.32637715339660645|0.3263772428035736",
				Scale = "0.445939302444458|0.445939302444458|0.4492607116699219"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "3.1669189293227937|3.4935205292474376|3.1669189293227937",
				PosOffset = "0|0|0",
				Radius = "1.569501519203186",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity46 = {
	Name = "Cylinder.004",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "DangerousBarrel"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-10.891409873962402|4.36396598815918|-4.37843656539917",
				Rotation = "false|0.3273603916168213|-0.3273604214191437|-0.6267656087875366|-0.6267656683921814",
				Scale = "0.445939302444458|0.445939302444458|0.4492607116699219"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "3.1669189293227937|3.4935205292474376|3.1669189293227937",
				PosOffset = "0|0|0",
				Radius = "1.569501519203186",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity47 = {
	Name = "Cube.005",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Crate"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-16.862098693847656|4.552874565124512|4.99566650390625",
				Rotation = "false|0.07015595585107803|-0.9975360631942749|4.486618308874313e-06|-1.5221731075598655e-07",
				Scale = "1.0|2.658043146133423|1.0588650703430176"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "5.316086292266846",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity48 = {
	Name = "Cube.006",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Crate"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-19.58003044128418|3.069197654724121|-4.661859035491943",
				Rotation = "false|0.4636920690536499|0.5338484048843384|-0.5338436365127563|-0.4636879563331604",
				Scale = "1.0|2.658043146133423|1.0588650703430176"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|1.9999998206059375",
				PosOffset = "0|0|0",
				Radius = "5.3160858154296875",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity49 = {
	Name = "Cylinder.005",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "DangerousBarrel"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-19.948970794677734|4.819205284118652|-5.677276134490967",
				Rotation = "false|0.7071067094802856|-0.7071068286895752|0.0|-0.0",
				Scale = "0.445939302444458|0.445939302444458|0.4492607116699219"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "3.1669189293227937|3.4935205292474376|3.1669189293227937",
				PosOffset = "0|0|0",
				Radius = "1.569501519203186",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity50 = {
	Name = "Cylinder.006",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "DangerousBarrel"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-35.1847038269043|2.8192079067230225|-4.566922664642334",
				Rotation = "false|0.6299651265144348|-0.6299653649330139|-0.3211600184440613|-0.3211601674556732",
				Scale = "0.445939302444458|0.445939302444458|0.4492607116699219"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "3.1669189293227937|3.4935205292474376|3.1669189293227937",
				PosOffset = "0|0|0",
				Radius = "1.569501519203186",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity51 = {
	Name = "Cube.007",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Crate"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-27.174304962158203|3.0692293643951416|9.242532730102539",
				Rotation = "false|0.30657845735549927|0.6371923089027405|-0.6371867060661316|-0.306575745344162",
				Scale = "1.0|3.418976068496704|1.9319708347320557"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "6.837952136993408",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity52 = {
	Name = "Cube.008",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Crate"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-35.09199523925781|4.727254867553711|5.918625831604004",
				Rotation = "false|4.054028067912441e-06|-0.890905499458313|7.785878551658243e-06|-0.4541887044906616",
				Scale = "1.0|2.658043146133423|1.0588650703430176"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "1.9999998807907104|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "5.316086292266846",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity53 = {
	Name = "Cube.009",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Crate"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-32.14399719238281|3.0692050457000732|-6.614838123321533",
				Rotation = "false|0.17063774168491364|0.6862122416496277|-0.6862061023712158|-0.17063622176647186",
				Scale = "1.0|2.658043146133423|1.0588650703430176"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0000001793940623",
				PosOffset = "0|0|0",
				Radius = "5.316086769104004",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity54 = {
	Name = "Cylinder.007",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "DangerousBarrel"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-27.861032485961914|4.819240093231201|8.54995346069336",
				Rotation = "false|0.6882468461990356|-0.6882469654083252|0.1622227132320404|0.1622227430343628",
				Scale = "0.445939302444458|0.445939302444458|0.4492607116699219"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "3.1669189293227937|3.4935205292474376|3.1669189293227937",
				PosOffset = "0|0|0",
				Radius = "1.569501519203186",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity55 = {
	Name = "Cylinder.008",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "DangerousBarrel"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-26.051557540893555|4.819254398345947|8.40913200378418",
				Rotation = "false|0.3468867540359497|-0.3468868136405945|-0.616173267364502|-0.6161733865737915",
				Scale = "0.445939302444458|0.445939302444458|0.4492607116699219"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "3.1669189293227937|3.4935205292474376|3.1669189293227937",
				PosOffset = "0|0|0",
				Radius = "1.569501519203186",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity56 = {
	Name = "Cylinder.009",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "DangerousBarrel"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-27.893766403198242|4.8192291259765625|11.030012130737305",
				Rotation = "false|0.038928426802158356|-0.03892843797802925|-0.7060343027114868|-0.7060344815254211",
				Scale = "0.445939302444458|0.445939302444458|0.4492607116699219"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "3.166919196644577|3.4935205292474376|3.166919196644577",
				PosOffset = "0|0|0",
				Radius = "1.569501519203186",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity57 = {
	Name = "Cube.010",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Crate"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-29.153276443481445|2.6029000282287598|-12.665074348449707",
				Rotation = "false|0.025691866874694824|0.7066430449485779|-0.7066367268562317|-0.02569163776934147",
				Scale = "0.5336850881576538|2.658043146133423|1.0588650703430176"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "5.316086292266846",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity58 = {
	Name = "Cube.011",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Crate"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-29.153276443481445|3.6702709197998047|-12.665074348449707",
				Rotation = "false|0.06935478001832962|-0.7037004828453064|0.703694224357605|-0.06935416162014008",
				Scale = "0.5336850881576538|2.658043146133423|1.0588650703430176"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "5.316086292266846",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity59 = {
	Name = "Cube.012",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Crate"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-29.153276443481445|4.737640380859375|-12.665074348449707",
				Rotation = "false|0.18064631521701813|-0.6836456060409546|0.6836395859718323|-0.18064472079277039",
				Scale = "0.5336850881576538|2.658043146133423|1.0588650703430176"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "5.316086292266846",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity60 = {
	Name = "Cylinder.010",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "DangerousBarrel"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-23.145858764648438|2.819197654724121|-11.100967407226562",
				Rotation = "false|0.7071067094802856|-0.7071068286895752|0.0|-0.0",
				Scale = "0.445939302444458|0.445939302444458|0.4492607116699219"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "3.1669189293227937|3.4935205292474376|3.1669189293227937",
				PosOffset = "0|0|0",
				Radius = "1.569501519203186",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity61 = {
	Name = "Cylinder.012",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "DangerousBarrel"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-27.904878616333008|2.8191986083984375|-19.369380950927734",
				Rotation = "false|0.7071067094802856|-0.7071068286895752|0.0|-0.0",
				Scale = "0.445939302444458|0.445939302444458|0.4492607116699219"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "3.1669189293227937|3.4935205292474376|3.1669189293227937",
				PosOffset = "0|0|0",
				Radius = "1.569501519203186",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity62 = {
	Name = "Cube.013",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Crate"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-23.03545570373535|2.6028671264648438|-19.020837783813477",
				Rotation = "false|0.49872109293937683|-0.5012800693511963|0.5012755990028381|-0.49871665239334106",
				Scale = "0.5336850881576538|2.658043146133423|1.0588650703430176"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "5.316086292266846",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity63 = {
	Name = "Wall",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "HazardousWall"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-51.809329986572266|12.428422927856445|-1.4928388595581055",
				Rotation = "false|0.4999999701976776|-0.5|-0.5|-0.5",
				Scale = "-7.888233184814453|-0.13727302849292755|-5.59731388092041"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "15.776466369628906",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity64 = {
	Name = "Cube.014",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Crate"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-66.36528015136719|3.069218158721924|-2.720114231109619",
				Rotation = "false|0.5049142837524414|0.4950414001941681|-0.4950369894504547|-0.5049098134040833",
				Scale = "1.0|2.658043146133423|1.0588650703430176"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|1.9999998206059375",
				PosOffset = "0|0|0",
				Radius = "5.3160858154296875",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity65 = {
	Name = "Cube.015",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Crate"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-66.37000274658203|5.4246368408203125|-1.3109071254730225",
				Rotation = "false|0.005900801159441471|0.7070852518081665|0.008061311207711697|-0.7070577144622803",
				Scale = "0.9999966025352478|1.3735315799713135|1.058713674545288"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "2.747063159942627",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity66 = {
	Name = "Cube.016",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Crate"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-66.47382354736328|5.418526649475098|-3.928891658782959",
				Rotation = "false|0.005900801159441471|0.7070852518081665|0.008061311207711697|-0.7070577144622803",
				Scale = "0.9999966025352478|1.3735315799713135|1.058713674545288"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "2.747063159942627",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity67 = {
	Name = "Cube.017",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Crate"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-66.36528015136719|7.237287521362305|-2.720114231109619",
				Rotation = "false|0.47011134028434753|0.5282042622566223|-0.5281996130943298|-0.47010716795921326",
				Scale = "0.4184597134590149|2.658043146133423|1.0588650703430176"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "5.316086292266846",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity68 = {
	Name = "Cylinder.013",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "DangerousBarrel"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-62.624595642089844|2.8191959857940674|-0.5800895690917969",
				Rotation = "false|0.6882468461990356|-0.6882469654083252|0.1622227132320404|0.1622227430343628",
				Scale = "0.445939302444458|0.445939302444458|0.4492607116699219"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "3.1669189293227937|3.4935205292474376|3.1669189293227937",
				PosOffset = "0|0|0",
				Radius = "1.569501519203186",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity69 = {
	Name = "Cylinder.014",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "DangerousBarrel"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-64.24311828613281|2.819199800491333|-4.639472961425781",
				Rotation = "false|0.5866268277168274|-0.5866269469261169|0.3948023319244385|0.39480239152908325",
				Scale = "0.445939302444458|0.445939302444458|0.4492607116699219"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "3.1669189293227937|3.4935205292474376|3.1669189293227937",
				PosOffset = "0|0|0",
				Radius = "1.569501519203186",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity70 = {
	Name = "Cylinder.015",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "DangerousBarrel"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-52.88043212890625|5.5655622482299805|-4.855762481689453",
				Rotation = "false|0.6510630249977112|-0.6510632038116455|-0.2758927345275879|-0.27589279413223267",
				Scale = "0.445939302444458|0.445939302444458|0.4492607116699219"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "3.1669189293227937|3.4935205292474376|3.1669189293227937",
				PosOffset = "0|0|0",
				Radius = "1.569501519203186",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity71 = {
	Name = "Cube.018",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Crate"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-53.58787155151367|3.4184887409210205|-4.807796955108643",
				Rotation = "false|0.005900801159441471|0.7070852518081665|0.008061311207711697|-0.7070577144622803",
				Scale = "0.9999966025352478|1.3735315799713135|1.058713674545288"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "2.747063159942627",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity72 = {
	Name = "Cube.019",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Crate"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-41.36641311645508|4.7272186279296875|3.371746778488159",
				Rotation = "false|8.3785653259838e-06|-0.3005310297012329|2.617148538774927e-06|-0.9537720680236816",
				Scale = "0.795976459980011|2.658043146133423|0.8428316712379456"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "5.316086292266846",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity73 = {
	Name = "Cube.020",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Crate"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-44.194541931152344|4.727222919464111|1.4721462726593018",
				Rotation = "false|7.696803550061304e-06|-0.4829486310482025|4.220076789351879e-06|-0.8756486773490906",
				Scale = "0.7582936882972717|2.658043146133423|0.8029307126998901"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|1.9999998515322834|2.0",
				PosOffset = "0|0|0",
				Radius = "5.316086292266846",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity74 = {
	Name = "Cube.021",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Crate"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-42.817352294921875|7.813011646270752|2.1278393268585205",
				Rotation = "false|0.17587082087993622|-0.6848897337913513|0.6848835945129395|-0.17586922645568848",
				Scale = "0.4277314245700836|2.5912654399871826|0.8263645768165588"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "5.182530879974365",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity75 = {
	Name = "Cylinder.016",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "DangerousBarrel"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-42.86514663696289|2.8192009925842285|2.5746588706970215",
				Rotation = "false|0.6299651265144348|-0.6299653649330139|-0.3211600184440613|-0.3211601674556732",
				Scale = "0.445939302444458|0.445939302444458|0.4492607116699219"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "3.1669189293227937|3.4935205292474376|3.1669189293227937",
				PosOffset = "0|0|0",
				Radius = "1.569501519203186",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity76 = {
	Name = "Cylinder.017",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "DangerousBarrel"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-42.86514663696289|4.331532955169678|2.5746588706970215",
				Rotation = "false|0.6299651265144348|-0.6299653649330139|-0.3211600184440613|-0.3211601674556732",
				Scale = "0.445939302444458|0.445939302444458|0.4492607116699219"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "3.1669189293227937|3.4935205292474376|3.1669189293227937",
				PosOffset = "0|0|0",
				Radius = "1.569501519203186",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity77 = {
	Name = "Wall",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "HazardousWall"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-5.944313049316406|12.428423881530762|-1.4928388595581055",
				Rotation = "false|0.4999999701976776|-0.5|-0.5|-0.5",
				Scale = "-7.888233184814453|-0.13727302849292755|-5.59731388092041"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "15.776466369628906",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity78 = {
	Name = "Floor.006",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Floor"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.8228198289871216|13.54648208618164|0.7102036476135254",
				Rotation = "false|0.7071067094802856|-0.7071068286895752|0.0|-0.0",
				Scale = "15.294673919677734|18.7946720123291|0.28266042470932007"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "37.5893440246582",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity79 = {
	Name = "Floor.007",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Floor"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-29.766529083251953|13.54648208618164|0.7102036476135254",
				Rotation = "false|0.7071067094802856|-0.7071068286895752|0.0|-0.0",
				Scale = "15.294673919677734|18.7946720123291|0.28266042470932007"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "37.5893440246582",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity80 = {
	Name = "Floor.008",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Floor"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "31.412168502807617|13.54648208618164|0.7102036476135254",
				Rotation = "false|0.7071067094802856|-0.7071068286895752|0.0|-0.0",
				Scale = "15.294673919677734|18.7946720123291|0.28266042470932007"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "37.5893440246582",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity81 = {
	Name = "Floor.009",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Floor"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-29.766529083251953|13.54647445678711|-36.87914276123047",
				Rotation = "false|0.7071067094802856|-0.7071068286895752|0.0|-0.0",
				Scale = "15.294673919677734|18.7946720123291|0.28266042470932007"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "37.5893440246582",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity82 = {
	Name = "Floor.010",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Floor"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-60.35587692260742|13.54648208618164|0.7102036476135254",
				Rotation = "false|0.7071067094802856|-0.7071068286895752|0.0|-0.0",
				Scale = "15.294673919677734|18.7946720123291|0.28266042470932007"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "37.5893440246582",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity83 = {
	Name = "Floor.011",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Floor"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-29.766529083251953|13.54648208618164|38.29954528808594",
				Rotation = "false|0.7071067094802856|-0.7071068286895752|0.0|-0.0",
				Scale = "15.294673919677734|18.7946720123291|0.28266042470932007"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "37.5893440246582",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entities = { Entity1, Entity2, Entity3, Entity4, Entity5, Entity6, Entity7, Entity8, Entity9, Entity10, Entity11, Entity12, Entity13, Entity14, Entity15, Entity16, Entity17, Entity18, Entity19, Entity20, Entity21, Entity22, Entity23, Entity24, Entity25, Entity26, Entity27, Entity28, Entity29, Entity30, Entity31, Entity32, Entity33, Entity34, Entity35, Entity36, Entity37, Entity38, Entity39, Entity40, Entity41, Entity42, Entity43, Entity44, Entity45, Entity46, Entity47, Entity48, Entity49, Entity50, Entity51, Entity52, Entity53, Entity54, Entity55, Entity56, Entity57, Entity58, Entity59, Entity60, Entity61, Entity62, Entity63, Entity64, Entity65, Entity66, Entity67, Entity68, Entity69, Entity70, Entity71, Entity72, Entity73, Entity74, Entity75, Entity76, Entity77, Entity78, Entity79, Entity80, Entity81, Entity82, Entity83 }

CollisionLayers = {
	Layers = {
		DEFAULT = ""
	}
}