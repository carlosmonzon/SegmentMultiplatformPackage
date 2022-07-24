// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "MultiplatformAnalytics",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(
            name: "MultiplatformAnalytics",
            targets: ["MultiplatformAnalytics"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "MultiplatformAnalytics",
            path: "./MultiplatformAnalytics.xcframework"
        ),
    ]
)
