-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Feb 25, 2026 at 04:50 AM
-- Server version: 10.4.32-MariaDB
-- PHP Version: 8.2.12

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `logitech`
--

-- --------------------------------------------------------

--
-- Table structure for table `model`
--

CREATE TABLE `model` (
  `id` int(11) NOT NULL,
  `model_name` varchar(255) DEFAULT NULL,
  `model_price` int(11) DEFAULT NULL,
  `location` varchar(255) DEFAULT NULL,
  `company` varchar(255) DEFAULT NULL,
  `action` timestamp NOT NULL DEFAULT curdate()
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `model`
--

INSERT INTO `model` (`id`, `model_name`, `model_price`, `location`, `company`, `action`) VALUES
(2, 'nav-1', 333333, 'pune', 'hp', '2026-02-24 18:30:00'),
(3, 'nav-3', 19000, 'mysore', 'asus', '2026-02-24 18:30:00'),
(6, 'nav-4', 19000, 'rajkot', 'victus', '2026-02-24 18:30:00'),
(7, 'nav-5', 45000, 'surat', 'acrus', '2026-02-24 18:30:00'),
(8, 'nav-6', 454545, 'nyc', 'hp', '2026-02-24 18:30:00'),
(9, 'youioiii', 3444444, 'ddknvkdnvknk', 'ffknkvnk', '2026-02-24 18:30:00');

--
-- Triggers `model`
--
DELIMITER $$
CREATE TRIGGER `time` AFTER INSERT ON `model` FOR EACH ROW BEGIN
INSERT INTO model_audit(action,time)VALUE('insert',new.model_name);
END
$$
DELIMITER ;
DELIMITER $$
CREATE TRIGGER `timea` AFTER UPDATE ON `model` FOR EACH ROW BEGIN
    INSERT INTO model_audit (action,time)
    VALUES ('UPDATE', NEW.model_name);
END
$$
DELIMITER ;
DELIMITER $$
CREATE TRIGGER `timeb` AFTER DELETE ON `model` FOR EACH ROW BEGIN
    INSERT INTO model_audit (action, model_name)
    VALUES ('DELETE', OLD.model_name);
END
$$
DELIMITER ;

-- --------------------------------------------------------

--
-- Table structure for table `model_audit`
--

CREATE TABLE `model_audit` (
  `id` int(11) NOT NULL,
  `action` varchar(255) DEFAULT NULL,
  `time` int(11) DEFAULT NULL,
  `model_name` varchar(255) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `model_audit`
--

INSERT INTO `model_audit` (`id`, `action`, `time`, `model_name`) VALUES
(1, 'insert', 0, NULL),
(2, 'insert', 0, NULL),
(3, 'UPDATE', 0, NULL),
(4, 'DELETE', NULL, 'nav-1'),
(5, 'UPDATE', 0, NULL),
(6, 'UPDATE', 0, NULL),
(7, 'UPDATE', 0, NULL),
(8, 'UPDATE', 0, NULL),
(9, 'UPDATE', 0, NULL),
(10, 'UPDATE', 0, NULL),
(11, 'UPDATE', 0, NULL),
(12, 'UPDATE', 0, NULL),
(13, 'UPDATE', 0, NULL),
(14, 'UPDATE', 0, NULL),
(15, 'UPDATE', 0, NULL);

--
-- Indexes for dumped tables
--

--
-- Indexes for table `model`
--
ALTER TABLE `model`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `model_audit`
--
ALTER TABLE `model_audit`
  ADD PRIMARY KEY (`id`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `model`
--
ALTER TABLE `model`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=10;

--
-- AUTO_INCREMENT for table `model_audit`
--
ALTER TABLE `model_audit`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=16;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
