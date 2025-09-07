SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";

--
-- Base de datos: `s3064252_db1749588894170`
--

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `clans`
--

DROP TABLE IF EXISTS `clans`;

CREATE TABLE `clans` (
  `UUID` INT NOT NULL AUTO_INCREMENT,
  `unique_clan_identifier` INT NOT NULL,
  `leader` VARCHAR(24) CHARACTER SET latin1 COLLATE latin1_general_ci NOT NULL,
  `sub_leader` VARCHAR(24) CHARACTER SET latin1 COLLATE latin1_general_ci NOT NULL DEFAULT 'No sub-leader',
  `name` VARCHAR(16) CHARACTER SET latin1 COLLATE latin1_general_ci NOT NULL,
  `tag` VARCHAR(7) CHARACTER SET latin1 COLLATE latin1_general_ci NOT NULL,
  `argb` INT NOT NULL,
  `hexadecimal` VARCHAR(6) CHARACTER SET latin1 COLLATE latin1_general_ci NOT NULL,
  `level` INT NOT NULL NOT NULL DEFAULT '0',
  `members` INT NOT NULL DEFAULT '1',
  PRIMARY KEY (`UUID`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_general_ci;

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `bans`
--

DROP TABLE IF EXISTS `bans`;

CREATE TABLE `bans` (
  `UUID` INT NOT NULL AUTO_INCREMENT,
  `name` VARCHAR(24) CHARACTER SET latin1 COLLATE latin1_general_ci NOT NULL,
  `ip` VARCHAR(15) CHARACTER SET latin1 COLLATE latin1_general_ci NOT NULL,
  `reason` VARCHAR(32) CHARACTER SET latin1 COLLATE latin1_general_ci NOT NULL,
  `date` DATETIME NOT NULL,
  PRIMARY KEY (`UUID`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_general_ci;

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `accounts`
--

DROP TABLE IF EXISTS `accounts`;

CREATE TABLE `accounts` (
  `UUID` INT NOT NULL AUTO_INCREMENT,
  `player_name` VARCHAR(24) CHARACTER SET latin1 COLLATE latin1_general_ci NOT NULL,
  `password` VARCHAR(255) CHARACTER SET latin1 COLLATE latin1_general_ci NOT NULL,
  `skin` INT NOT NULL,
  `level` INT NOT NULL,
  `cash_in_hand` INT NOT NULL DEFAULT '0',
  `cash_in_the_bank` INT NOT NULL DEFAULT '0',
  `life_insurance` int NOT NULL DEFAULT '0',
  `in_game` TINYINT(1) NOT NULL DEFAULT '0',
  `administrative_level` INT NOT NULL DEFAULT '0',
  `on_duty` TINYINT(1) NOT NULL DEFAULT '0',
  `warnings` INT NOT NULL DEFAULT '0',
  `deaths` INT NOT NULL DEFAULT '0',
  `killings` INT NOT NULL DEFAULT '0',
  `jail_time` INT NOT NULL DEFAULT '0',
  `mute_time` INT NOT NULL DEFAULT '0',
  `ban_time` INT NOT NULL DEFAULT '0',
  `ban_reason` VARCHAR(32) CHARACTER SET latin1 COLLATE latin1_general_ci NOT NULL DEFAULT 'Without reason',
  `ban_date` DATETIME NOT NULL DEFAULT '0000-00-00 00:00:00',
  `assigned_clan` INT NOT NULL DEFAULT '255',
  `weapon_slot_one` INT NOT NULL DEFAULT '0',
  `ammo_slot_one` INT NOT NULL DEFAULT '0',
  `weapon_slot_two` INT NOT NULL DEFAULT '9',
  `ammo_slot_two` INT NOT NULL DEFAULT '1',
  `weapon_slot_three` INT NOT NULL DEFAULT '24',
  `ammo_slot_three` INT NOT NULL DEFAULT '150',
  `weapon_slot_four` INT NOT NULL DEFAULT '26',
  `ammo_slot_four` INT NOT NULL DEFAULT '400',
  `weapon_slot_five` INT NOT NULL DEFAULT '32',
  `ammo_slot_five` INT NOT NULL DEFAULT '1000',
  `weapon_slot_six` INT NOT NULL DEFAULT '31',
  `ammo_slot_six` INT NOT NULL DEFAULT '500',
  `weapon_slot_seven` INT NOT NULL DEFAULT '34',
  `ammo_slot_seven` INT NOT NULL DEFAULT '100',
  `weapon_slot_eight` INT NOT NULL DEFAULT '0',
  `ammo_slot_eight` INT NOT NULL DEFAULT '0',
  `weapon_slot_nine` INT NOT NULL DEFAULT '0',
  `ammo_slot_nine` INT NOT NULL DEFAULT '0',
  `weapon_slot_ten` INT NOT NULL DEFAULT '0',
  `ammo_slot_ten` INT NOT NULL DEFAULT '0',
  `weapon_slot_eleven` INT NOT NULL DEFAULT '0',
  `ammo_slot_eleven` INT NOT NULL DEFAULT '0',
  `weapon_slot_twelve` INT NOT NULL DEFAULT '0',
  `ammo_slot_twelve` INT NOT NULL DEFAULT '0',
  `weapon_slot_thirteen` INT NOT NULL DEFAULT '0',
  `ammo_slot_thirteen` INT NOT NULL DEFAULT '0',
  `armour` FLOAT NOT NULL DEFAULT '0',
  `drugs` INT NOT NULL DEFAULT '0',
  `aspirin` INT NOT NULL DEFAULT '0',
  `chlamydia` TINYINT(1) NOT NULL DEFAULT '0',
  `gonorrhea` TINYINT(1) NOT NULL DEFAULT '0',
  `syphilis` TINYINT(1) NOT NULL DEFAULT '0',
  `condoms` INT NOT NULL DEFAULT '0',
  PRIMARY KEY (`UUID`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_general_ci;

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `check_points`
--

DROP TABLE IF EXISTS `check_points`;

CREATE TABLE `check_points` (
  `UUID` INT NOT NULL AUTO_INCREMENT,
  `type` INT NOT NULL,
  `icon` INT NOT NULL,
  `inside` INT NOT NULL,
  `outside_x_coordinate` FLOAT NOT NULL,
  `outside_y_coordinate` FLOAT NOT NULL,
  `outside_z_coordinate` FLOAT NOT NULL,
  `outside_angle` FLOAT NOT NULL,
  `inside_x_coordinate` FLOAT NOT NULL,
  `inside_y_coordinate` FLOAT NOT NULL,
  `inside_z_coordinate` FLOAT NOT NULL,
  `inside_angle` FLOAT NOT NULL,
  `interaction_zone_x_coordinate` FLOAT NOT NULL,
  `interaction_zone_y_coordinate` FLOAT NOT NULL,
  `interaction_zone_z_coordinate` FLOAT NOT NULL,
  `interaction_zone_angle` FLOAT NOT NULL,
  PRIMARY KEY (`UUID`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_general_ci;

COMMIT;

/* ALTER TABLE `ip_bans`
  MODIFY `UUID` int NOT NULL AUTO_INCREMENT;

ALTER TABLE `accounts`
  MODIFY `UUID` int NOT NULL AUTO_INCREMENT;

ALTER TABLE `check_points`
  MODIFY `UUID` int NOT NULL AUTO_INCREMENT;

COMMIT; */